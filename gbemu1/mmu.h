/*
 * mmu.h
 *
 *  Created on: Jun 15, 2011
 *      Author: jelle
 */

#ifndef MMU_H_
#define MMU_H_
#include "common.h"
#include "gbemu.h"

structure(mmu){
	bool inbios;

	u8* bios;
	u8* eram;
	u8*	wram;
	u8* zram;

	u8* rom;
};

void mmu_reset(mmu* mem);
void mmu_init(mmu* mem);
void mmu_destroy(mmu* mem);

u8 rb(gbemu* emu , u16 addr);
u16 rw(gbemu* emu, u16 addr);

void wb(gbemu* emu, u16 addr, u8 val);
void ww(gbemu* emu, u16 addr, u16 val);

void mmu_load(char const * const filename);
//rom loading?


#endif /* MMU_H_ */
