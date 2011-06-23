/*
 * operations.c
 *
 *  Created on: Jun 15, 2011
 *      Author: jelle
 */

#include "operations.h"
#include "common.h"
#include "z80.h"
/*--- Load/store ---*/
	/* load in %a */
	void LDrr_aa(z80* cpu) {
		cpu->r.a = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ab(z80* cpu){
		cpu->r.a = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ac(z80* cpu){
		cpu->r.a = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ad(z80* cpu){
		cpu->r.a = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ae(z80* cpu){
		cpu->r.a = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ah(z80* cpu){
		cpu->r.a = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_al(z80* cpu){
		cpu->r.a = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}

	/* Load in %b */
	void LDrr_ba(z80* cpu){
		cpu->r.b = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_bb(z80* cpu){
		cpu->r.b = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_bc(z80* cpu){
		cpu->r.b = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_bd(z80* cpu){
		cpu->r.b = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_be(z80* cpu){
		cpu->r.b = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_bh(z80* cpu){
		cpu->r.b = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_bl(z80* cpu){
		cpu->r.b = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}

	/* Load in c */
	void LDrr_ca(z80* cpu){
		cpu->r.c = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_cb(z80* cpu){
		cpu->r.c = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_cc(z80* cpu){
		cpu->r.c = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_cd(z80* cpu){
		cpu->r.c = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ce(z80* cpu){
		cpu->r.c = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ch(z80* cpu){
		cpu->r.c = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_cl(z80* cpu){
		cpu->r.c = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}

	/* Load in %d */
	void LDrr_da(z80* cpu){
		cpu->r.d = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_db(z80* cpu){
		cpu->r.d = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_dc(z80* cpu){
		cpu->r.d = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_dd(z80* cpu){
		cpu->r.d = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_de(z80* cpu){
		cpu->r.d = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_dh(z80* cpu){
		cpu->r.d = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_dl(z80* cpu){
		cpu->r.d = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}

	/* Load in e */
	void LDrr_ea(z80* cpu){
		cpu->r.e = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_eb(z80* cpu){
		cpu->r.e = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ec(z80* cpu){
		cpu->r.e = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ed(z80* cpu){
		cpu->r.e = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ee(z80* cpu){
		cpu->r.e = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_eh(z80* cpu){
		cpu->r.e = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_el(z80* cpu){
		cpu->r.e = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}

	/* Load in %h */
	void LDrr_ha(z80* cpu){
		cpu->r.h = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_hb(z80* cpu){
		cpu->r.h = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_hc(z80* cpu){
		cpu->r.h = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_hd(z80* cpu){
		cpu->r.h = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_he(z80* cpu){
		cpu->r.h = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_hh(z80* cpu){
		cpu->r.h = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_hl(z80* cpu){
		cpu->r.h = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}

	/* Load in %l */
	void LDrr_la(z80* cpu){
		cpu->r.e = cpu->r.a;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_lb(z80* cpu){
		cpu->r.e = cpu->r.b;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_lc(z80* cpu){
		cpu->r.e = cpu->r.c;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ld(z80* cpu){
		cpu->r.e = cpu->r.d;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_le(z80* cpu){
		cpu->r.e = cpu->r.e;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_lh(z80* cpu){
		cpu->r.e = cpu->r.h;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	void LDrr_ll(z80* cpu){
		cpu->r.e = cpu->r.l;
		cpu->r.m = 1;
		cpu->r.t = 4;
	}
	//TODO Can only be implemented when we have a MMU
	void LDrHLm_a(z80* cpu);
	void LDrHLm_b(z80* cpu);
	void LDrHLm_c(z80* cpu);
	void LDrHLm_d(z80* cpu);
	void LDrHLm_e(z80* cpu);
	void LDrHLm_h(z80* cpu);
	void LDrHLm_l(z80* cpu);

	void LDHLmr_a(z80* cpu);
	void LDHLmr_b(z80* cpu);
	void LDHLmr_c(z80* cpu);
	void LDHLmr_d(z80* cpu);
	void LDHLmr_e(z80* cpu);
	void LDHLmr_h(z80* cpu);
	void LDHLmr_l(z80* cpu);

	void LDrn_a(z80* cpu);
	void LDrn_b(z80* cpu);
	void LDrn_c(z80* cpu);
	void LDrn_d(z80* cpu);
	void LDrn_e(z80* cpu);
	void LDrn_h(z80* cpu);
	void LDrn_l(z80* cpu);

	void LDHLmn(z80* cpu);

	void LDBCma(z80* cpu);
	void LDDEmA(z80* cpu);

	void LDAmm(z80* cpu);

	void LDBCnn(z80* cpu);
	void LDDEnn(z80* cpu);
	void LDHLnn(z80* cpu);
	void LDSPnn(z80* cpu);

	void LDHLmm(z80* cpu);
	void LDmmHL(z80* cpu);

	void LDHLIA(z80* cpu);
	void LDAHLI(z80* cpu);

	void LDHLDA(z80* cpu);
	void LDAHLD(z80* cpu);

	void LDaIOn(z80* cpu);
	void LDIOnA(z80* cpu);
	void LDAIOC(z80* cpu);
	void LDIOCA(z80* cpu);

	void LDHLSPn(z80* cpu);

	void SWAPr_a(z80* cpu);
	void SWAPr_b(z80* cpu);
	void SWAPr_c(z80* cpu);
	void SWAPr_d(z80* cpu);
	void SWAPr_e(z80* cpu);
	void SWAPr_h(z80* cpu);
	void SWAPr_l(z80* cpu);

	/*--- Data processing ---*/
	void ADDr_a(z80* cpu);
	void ADDr_b(z80* cpu);
	void ADDr_c(z80* cpu);
	void ADDr_d(z80* cpu);
	void ADDr_e(z80* cpu);
	void ADDr_h(z80* cpu);
	void ADDr_l(z80* cpu);
	void ADDHL(z80* cpu);
	void ADDn(z80* cpu);
	void ADDHLBC(z80* cpu);
	void ADDHLDE(z80* cpu);
	void ADDHLHL(z80* cpu);
	void ADDHLSP(z80* cpu);
	void ADDSPn(z80* cpu);

	void ADCr_a(z80* cpu);
	void ADCr_b(z80* cpu);
	void ADCr_c(z80* cpu);
	void ADCr_d(z80* cpu);
	void ADCr_e(z80* cpu);
	void ADCr_h(z80* cpu);
	void ADCr_l(z80* cpu);
	void ADCHL(z80* cpu);
	void ADCn(z80* cpu);

	void SUBr_a(z80* cpu);
	void SUBr_b(z80* cpu);
	void SUBr_c(z80* cpu);
	void SUBr_d(z80* cpu);
	void SUBr_e(z80* cpu);
	void SUBr_h(z80* cpu);
	void SUBr_l(z80* cpu);
	void SUBHL(z80* cpu);
	void SUBn(z80* cpu);

	void SBCr_a(z80* cpu);
	void SBCr_b(z80* cpu);
	void SBCr_c(z80* cpu);
	void SBCr_d(z80* cpu);
	void SBCr_e(z80* cpu);
	void SBCr_h(z80* cpu);
	void SBCr_l(z80* cpu);
	void SBCHL(z80* cpu);
	void SBCn(z80* cpu);

	void CPr_a(z80* cpu);
	void CPr_b(z80* cpu);
	void CPr_c(z80* cpu);
	void CPr_d(z80* cpu);
	void CPr_e(z80* cpu);
	void CPr_h(z80* cpu);
	void CPr_l(z80* cpu);
	void CPHL(z80* cpu);
	void CPn(z80* cpu);

	void CPr_a(z80* cpu);
	void CPr_b(z80* cpu);
	void CPr_c(z80* cpu);
	void CPr_d(z80* cpu);
	void CPr_e(z80* cpu);
	void CPr_h(z80* cpu);
	void CPr_l(z80* cpu);
	void CPHL(z80* cpu);
	void CPn(z80* cpu);

	void ANDr_a(z80* cpu);
	void ANDr_b(z80* cpu);
	void ANDr_c(z80* cpu);
	void ANDr_d(z80* cpu);
	void ANDr_e(z80* cpu);
	void ANDr_h(z80* cpu);
	void ANDr_l(z80* cpu);
	void ANDHL(z80* cpu);
	void ANDn(z80* cpu);

	void ORr_a(z80* cpu);
	void ORr_b(z80* cpu);
	void ORr_c(z80* cpu);
	void ORr_d(z80* cpu);
	void ORr_e(z80* cpu);
	void ORr_h(z80* cpu);
	void ORr_l(z80* cpu);
	void ORHL(z80* cpu);
	void ORn(z80* cpu);

	void XORr_a(z80* cpu);
	void XORr_b(z80* cpu);
	void XORr_c(z80* cpu);
	void XORr_d(z80* cpu);
	void XORr_e(z80* cpu);
	void XORr_h(z80* cpu);
	void XORr_l(z80* cpu);
	void XORHL(z80* cpu);
	void XORn(z80* cpu);

	void INCr_a(z80* cpu);
	void INCr_b(z80* cpu);
	void INCr_c(z80* cpu);
	void INCr_d(z80* cpu);
	void INCr_e(z80* cpu);
	void INCr_h(z80* cpu);
	void INCr_l(z80* cpu);
	void INCHLm(z80* cpu);


	void DECr_a(z80* cpu);
	void DECr_b(z80* cpu);
	void DECr_c(z80* cpu);
	void DECr_d(z80* cpu);
	void DECr_e(z80* cpu);
	void DECr_h(z80* cpu);
	void DECr_l(z80* cpu);
	void DECHLm(z80* cpu);


	void INCBC(z80* cpu);
	void INCDE(z80* cpu);
	void INCHL(z80* cpu);
	void INCSP(z80* cpu);

	void DECBC(z80* cpu);
	void DECDE(z80* cpu);
	void DECHL(z80* cpu);
	void DECSP(z80* cpu);

	/*--- Bit manipulation ---*/
	void BIT0a(z80* cpu);
	void BIT0b(z80* cpu);
	void BIT0c(z80* cpu);
	void BIT0d(z80* cpu);
	void BIT0e(z80* cpu);
	void BIT0h(z80* cpu);
	void BIT0l(z80* cpu);
	void BIT0m(z80* cpu);

	void BIT1a(z80* cpu);
	void BIT1b(z80* cpu);
	void BIT1c(z80* cpu);
	void BIT1d(z80* cpu);
	void BIT1e(z80* cpu);
	void BIT1h(z80* cpu);
	void BIT1l(z80* cpu);
	void BIT1m(z80* cpu);

	void BIT2a(z80* cpu);
	void BIT2b(z80* cpu);
	void BIT2c(z80* cpu);
	void BIT2d(z80* cpu);
	void BIT2e(z80* cpu);
	void BIT2h(z80* cpu);
	void BIT2l(z80* cpu);
	void BIT2m(z80* cpu);

	void BIT3a(z80* cpu);
	void BIT3b(z80* cpu);
	void BIT3c(z80* cpu);
	void BIT3d(z80* cpu);
	void BIT3e(z80* cpu);
	void BIT3h(z80* cpu);
	void BIT3l(z80* cpu);
	void BIT3m(z80* cpu);

	void BIT4a(z80* cpu);
	void BIT4b(z80* cpu);
	void BIT4c(z80* cpu);
	void BIT4d(z80* cpu);
	void BIT4e(z80* cpu);
	void BIT4h(z80* cpu);
	void BIT4l(z80* cpu);
	void BIT4m(z80* cpu);

	void BIT5a(z80* cpu);
	void BIT5b(z80* cpu);
	void BIT5c(z80* cpu);
	void BIT5d(z80* cpu);
	void BIT5e(z80* cpu);
	void BIT5h(z80* cpu);
	void BIT5l(z80* cpu);
	void BIT5m(z80* cpu);

	void BIT6a(z80* cpu);
	void BIT6b(z80* cpu);
	void BIT6c(z80* cpu);
	void BIT6d(z80* cpu);
	void BIT6e(z80* cpu);
	void BIT6h(z80* cpu);
	void BIT6l(z80* cpu);
	void BIT6m(z80* cpu);

	void BIT7a(z80* cpu);
	void BIT7b(z80* cpu);
	void BIT7c(z80* cpu);
	void BIT7d(z80* cpu);
	void BIT7e(z80* cpu);
	void BIT7h(z80* cpu);
	void BIT7l(z80* cpu);
	void BIT7m(z80* cpu);

	void RLA(z80* cpu);
	void RLCA(z80* cpu);
	void RRA(z80* cpu);
	void RRCA(z80* cpu);

	void RLr_a(z80* cpu);
	void RLr_b(z80* cpu);
	void RLr_c(z80* cpu);
	void RLr_d(z80* cpu);
	void RLr_e(z80* cpu);
	void RLr_h(z80* cpu);
	void RLr_l(z80* cpu);
	void RLHL(z80* cpu);

	void RLCr_a(z80* cpu);
	void RLCr_b(z80* cpu);
	void RLCr_c(z80* cpu);
	void RLCr_d(z80* cpu);
	void RLCr_e(z80* cpu);
	void RLCr_h(z80* cpu);
	void RLCr_l(z80* cpu);
	void RLCHL(z80* cpu);

	void RRr_a(z80* cpu);
	void RRr_b(z80* cpu);
	void RRr_c(z80* cpu);
	void RRr_d(z80* cpu);
	void RRr_e(z80* cpu);
	void RRr_h(z80* cpu);
	void RRr_l(z80* cpu);
	void RRHL(z80* cpu);

	void RRCr_a(z80* cpu);
	void RRCr_b(z80* cpu);
	void RRCr_c(z80* cpu);
	void RRCr_d(z80* cpu);
	void RRCr_e(z80* cpu);
	void RRCr_h(z80* cpu);
	void RRCr_l(z80* cpu);
	void RRCHL(z80* cpu);

	void SLAr_a(z80* cpu);
	void SLAr_b(z80* cpu);
	void SLAr_c(z80* cpu);
	void SLAr_d(z80* cpu);
	void SLAr_e(z80* cpu);
	void SLAr_h(z80* cpu);
	void SLAr_l(z80* cpu);

	void SLLr_a(z80* cpu);
	void SLLr_b(z80* cpu);
	void SLLr_c(z80* cpu);
	void SLLr_d(z80* cpu);
	void SLLr_e(z80* cpu);
	void SLLr_h(z80* cpu);
	void SLLr_l(z80* cpu);

	void SRAr_a(z80* cpu);
	void SRAr_b(z80* cpu);
	void SRAr_c(z80* cpu);
	void SRAr_d(z80* cpu);
	void SRAr_e(z80* cpu);
	void SRAr_h(z80* cpu);
	void SRAr_l(z80* cpu);

	void SRLr_a(z80* cpu);
	void SRLr_b(z80* cpu);
	void SRLr_c(z80* cpu);
	void SRLr_d(z80* cpu);
	void SRLr_e(z80* cpu);
	void SRLr_h(z80* cpu);
	void SRLr_l(z80* cpu);

	void CPL(z80* cpu);
	void NEG(z80* cpu);

	void CCF(z80* cpu);
	void SCF(z80* cpu);

	/*--- Stack ---*/
	void PUSHBC(z80* cpu);
	void PUSHDE(z80* cpu);
	void PUSHHL(z80* cpu);
	void PUSHAF(z80* cpu);

	void POPBC(z80* cpu);
	void POPDE(z80* cpu);
	void POPHL(z80* cpu);
	void POPAF(z80* cpu);

	/*--- Jump ---*/
	void JPnn(z80* cpu);
	void JPHL(z80* cpu);
	void JPNZnn(z80* cpu);
	void JPZnn(z80* cpu);
	void JPNC(z80* cpu);
	void JPCnn(z80* cpu);

	void JRn(z80* cpu);
	void JRNZn(z80* cpu);
	void JRZn(z80* cpu);
	void JRNCn(z80* cpu);
	void JRCn(z80* cpu);

	void DJNZn(z80* cpu);

	void CALLnn(z80* cpu);
	void CALLNZnn(z80* cpu);
	void CALLZnn(z80* cpu);
	void CALLNCnn(z80* cpu);
	void CALLCnn(z80* cpu);

	void RET(z80* cpu);
	void RETI(z80* cpu);
	void RETNZ(z80* cpu);
	void RETZ(z80* cpu);
	void RETNC(z80* cpu);
	void RETC(z80* cpu);

	void RST00(z80* cpu);
	void RST08(z80* cpu);
	void RST10(z80* cpu);
	void RST18(z80* cpu);
	void RST20(z80* cpu);
	void RST28(z80* cpu);
	void RST30(z80* cpu);
	void RST38(z80* cpu);
	void RST40(z80* cpu);
	void RST48(z80* cpu);
	void RST50(z80* cpu);
	void RST58(z80* cpu);
	void RST60(z80* cpu);

	void NOP(z80* cpu);
	void HALT(z80* cpu);

	void DI(z80* cpu);
	void EI(z80* cpu);

	/*--- Helper functions ---*/
	void fz(z80* cpu);
	void MAPcb(z80* cpu);

	void XX(z80* cpu);
