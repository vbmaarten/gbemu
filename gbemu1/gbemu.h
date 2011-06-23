/*
 * emu.h
 *
 *  Created on: Jun 16, 2011
 *      Author: jelle
 */

#ifndef GBEMU_H_
#define GBEMU_H_

#include "common.h"
//#include "z80.h"
//#include "mmu.h"
//#include "gpu.h"
//#include "keys.h"
//#include "timer.h"
// No including of headers because that will lead to circular stuff
struct z80;
struct mmu;


structure(gbemu){
	struct z80* cpu;
	struct mmu* mem;
};



#endif /* EMU_H_ */
