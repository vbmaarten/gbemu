/*
 * z80.c
 *
 *  Created on: Jun 15, 2011
 *      Author: jelle
 */
#include "z80.h"
#include "common.h"
#include "mappings.h"

extern fp map[];
extern fp cbmap[];

fp* map_create();
fp* cbmap_create();

void registers_init(registers* reg){
	reg->a=0;
	reg->b=0;
	reg->c=0;
	reg->d=0;
	reg->e=0;
	reg->h=0;
	reg->l=0;
	reg->f=0;

	reg->sp=0;
	reg->pc=0;
	reg->i=0;
	reg->r=0;

	reg->m=0;
	reg->t=0;

	reg->ime=0;
}

void clockstruct_init(clockstruct* clock){
	clock->m=0;
	clock->t=0;
}

void z80_reset(z80* cpu){
	registers_init(&cpu->r);
	clockstruct_init(&cpu->clock);

	cpu->halt=0;
	cpu->stop=0;
}

void z80_init(z80* cpu){
	z80_reset(cpu);
	cpu->map = map;
	cpu->cbmap = cbmap;
}

void z80_exec(z80* cpu){
	cpu->r.r = (cpu->r.r + 1) & 127;
	//cpu->map[MMU.rb(cpu->r.pc++)]();
	cpu->r.pc &= 65535;
	cpu->clock.m += cpu->r.m;
	cpu->clock.t += cpu->r.t;
	//if(MMu.inbios && cpu->r.pc == 0x0100) MMu.inbios = 0;
}






