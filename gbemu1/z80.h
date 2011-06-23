/*
 * z80.h
 *
 *  Created on: Jun 15, 2011
 *      Author: jelle
 */

#ifndef Z80_H_
#define Z80_H_
#include "common.h"

struct z80;
typedef void (*fp)();

/*--- Structures ---*/
structure(registers){
	int a, b, c, d, e, h, l, f, sp, pc, i, r, m, t, ime;
};



structure(clockstruct){
	int m;
	int t;
};

structure(z80){
	registers r;
	clockstruct clock;
	int halt;
	int stop;
	fp* map;
	fp* cbmap;
};



/*--- Functions ---*/
void z80_reset();
void z80_init();
void z80_exec();
void z80_destroy();

#endif /* Z80_H_ */
