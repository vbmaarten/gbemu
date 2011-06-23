/*
 * mmu.c
 *
 *  Created on: Jun 16, 2011
 *      Author: jelle
 */

#include "mmu.h"
#include "common.h"
#include "stdio.h"
#include "string.h" //lol memset

#include "gbemu.h"

#define BIOS_FILE	"bios.bin"

#define BIOS_SIZE	256
#define	ERAM_SIZE	8192
#define	WRAM_SIZE	8192
#define ZRAM_SIZE	127 /*wtfhax*/

#define init_val	0

void bios_load(u8* bios){
	FILE* biosfile = fopen(BIOS_FILE, "rb");
	if(biosfile == NULL) {fputs ("File I/O error", stderr); exit(1); }

	bios = arrocate(u8, BIOS_SIZE);
	int bytes_read = fread(bios,sizeof(u8), BIOS_SIZE/sizeof(u8), biosfile );
	if(bytes_read != BIOS_SIZE) {fputs ("Reading error",stderr); exit (3);}
}

void mmu_reset(mmu* mem){
	mem->inbios = true;

	memset(mem->eram, 0, ERAM_SIZE);
	memset(mem->wram, 0, WRAM_SIZE);
	memset(mem->zram, 0, ZRAM_SIZE);
}

void mmu_init(mmu* mem){

	bios_load(mem->bios);
	mem->eram = arrocate(u8, ERAM_SIZE);
	mem->wram = arrocate(u8, WRAM_SIZE);
	mem->zram = arrocate(u8, ZRAM_SIZE);

	//Wait for romreader
	mem->rom = null;
}
void mmu_destroy(mmu* mem);

u8 rb(gbemu* emu, u16 addr) {
	switch(addr & 0xF000) {
		// ROM bank 0
	case 0x0000:
		if(emu->mem->inbios) {
			if(addr < 0x0100) return emu->mem->bios[addr];
			/*else if(emu->cpu->r.pc == 0x0100) {
				emu->mem->inbios = false;
			}*/
		}
		else {
			return emu->mem->rom[addr];
		}

	case 0x1000: case 0x2000: case 0x3000:
		return emu->mem->rom[addr];

	// ROM bank 1
	case 0x4000: case 0x5000: case 0x6000: case 0x7000:
		return emu->mem->rom[addr];

	// VRAM
	case 0x8000: case 0x9000:
		return 0;//emu->gpu->vram[addr & 0x1FFF]; TODO

	// External RAM ??
	case 0xA000: case 0xB000:
		return emu->mem->eram[addr & 0x1FFF];

	// Work RAM and echo
	case 0xC000: case 0xD000: case 0xE000:
		return emu->mem->wram[addr & 0x1FFF];


	// Everything else
	case 0xF000:
		switch(addr & 0x0F00){
		// Echo RAM
		case 0x000: case 0x100: case 0x200: case 0x300:
		case 0x400: case 0x500: case 0x600: case 0x700:
		case 0x800: case 0x900: case 0xA00: case 0xB00:
		case 0xC00: case 0xD00:
			return emu->mem->wram[addr & 0x1FFF];

		// OAM
		case 0xE00:
			return 0;//((addr & 0xFF)< 0xA0) ? emu->gpu->oam[addr & 0xFF] : 0; TODO

		// Zeropage RAM, I/O
		case 0xF00:
			if (addr > 0xFF7F) { return emu->mem->zram[addr & 0x7F]; }
			else switch(addr & 0xF0) { } //nothing
		}
	}
}

u16 rw(gbemu* emu, u16 addr){
	return rb(emu, addr) + (rb(emu, addr + 1)<<8);
}

void wb(gbemu* emu, u16 addr, u8 val){
	switch(addr & 0xF000){
	case 0x0000:
		if(emu->mem->inbios && addr < 0x0100) return;
	//fall through
	case 0x1000:
	case 0x2000:
	case 0x3000:
		break;

	// ROM bank 1
	case 0x4000: case 0x5000: case 0x6000: case 0x7000:
		break;

	// VRAM
	case 0x8000: case 0x9000:
				//emu->gpu->vram[addr & 0x1FFF] = val; TODO
				//updatetile(emu->gpu, addr&0x1FFF, val);
		break;

	// External RAM
	case 0xA000: case 0xB000:
		emu->mem->eram[addr & 0x1FFF] = val;
		break;

	// Work RAM and echo
	case 0xC000: case 0xD000: case 0xE000:
		emu->mem->wram[addr & 0x1FFF] = val;
		break;

	// Everything else
	case 0xF000:
		switch(addr & 0x0F00){

		// Echo RAM
		case 0x000: case 0x100: case 0x200: case 0x300:
		case 0x400: case 0x500: case 0x600: case 0x700:
		case 0x800: case 0x900: case 0xA00: case 0xB00:
		case 0xC00: case 0xD00:
			emu->mem->wram[addr & 0x1FFF] = val;
			break;

		// OAM
		case 0xE00:
			if((addr & 0xFF) < 0xA0) (void)0;//emu->gpu->oam[addr & 0xFF] = val;
											 //updateoam(emu->gpu, addr, val);
			break;

		// Zeropage RAM, I/O
		case 0xF00:
			if(addr > 0xFF7F) { emu->mem->zram[addr & 0x7F] = val; }
			else switch(addr & 0xF0){}
		}
		break;
	}
}
void ww(gbemu* emu, u16 addr, u16 val){
	wb(emu, addr, val & 255);
	wb(emu, addr+1, val >> 8);
}


