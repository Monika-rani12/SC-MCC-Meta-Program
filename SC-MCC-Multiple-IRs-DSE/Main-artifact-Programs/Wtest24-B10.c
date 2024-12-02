//This program is Problem4.c from RERS-2017
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#define BOUND 10
int kappa;
int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>

	// inputs
	int inputs[] = {2,5,3,1,4};

	int errorCheck();
	int calculate_output(int);
	int calculate_outputm1(int);
	int calculate_outputm2(int);
	int calculate_outputm3(int);
	int calculate_outputm4(int);
	int calculate_outputm5(int);
	int calculate_outputm6(int);
	int calculate_outputm7(int);
	int calculate_outputm8(int);
	int calculate_outputm9(int);
	int calculate_outputm10(int);
	int calculate_outputm11(int);
	int calculate_outputm12(int);
	int calculate_outputm13(int);
	int calculate_outputm14(int);
	int calculate_outputm15(int);
	int calculate_outputm16(int);
	int calculate_outputm17(int);
	int calculate_outputm18(int);
	int calculate_outputm19(int);
	int calculate_outputm20(int);
	int calculate_outputm21(int);
	int calculate_outputm22(int);
	int calculate_outputm23(int);
	int calculate_outputm24(int);
	int calculate_outputm25(int);
	int calculate_outputm26(int);
	int calculate_outputm27(int);
	int calculate_outputm28(int);
	int calculate_outputm29(int);
	int calculate_outputm30(int);
	int calculate_outputm31(int);
	int calculate_outputm32(int);
	int calculate_outputm33(int);
	int calculate_outputm34(int);
	int calculate_outputm35(int);
	int calculate_outputm36(int);
	int calculate_outputm37(int);
	int calculate_outputm38(int);
	int calculate_outputm39(int);
	int calculate_outputm40(int);
	int calculate_outputm41(int);
	int calculate_outputm42(int);
	int calculate_outputm43(int);
	int calculate_outputm44(int);
	int calculate_outputm45(int);
	int calculate_outputm46(int);
	int calculate_outputm47(int);
	int calculate_outputm48(int);
	int calculate_outputm49(int);
	int calculate_outputm50(int);
	int calculate_outputm51(int);
	int calculate_outputm52(int);
	int calculate_outputm53(int);
	int calculate_outputm54(int);
	int calculate_outputm55(int);
	int calculate_outputm56(int);
	int calculate_outputm57(int);
	int calculate_outputm58(int);
	int calculate_outputm59(int);
	int calculate_outputm60(int);
	int calculate_outputm61(int);
	int calculate_outputm62(int);
	int calculate_outputm63(int);
	int calculate_outputm64(int);
	int calculate_outputm65(int);
	int calculate_outputm66(int);
	int calculate_outputm67(int);
	int calculate_outputm68(int);
	int calculate_outputm69(int);
	int calculate_outputm70(int);
	int calculate_outputm71(int);
	int calculate_outputm72(int);
	int calculate_outputm73(int);
	int calculate_outputm74(int);
	int calculate_outputm75(int);
	int calculate_outputm76(int);
	int calculate_outputm77(int);
	int calculate_outputm78(int);
	int calculate_outputm79(int);
	int calculate_outputm80(int);
	int calculate_outputm81(int);
	int calculate_outputm82(int);
	int calculate_outputm83(int);
	int calculate_outputm84(int);
	int calculate_outputm85(int);
	int calculate_outputm86(int);
	int calculate_outputm87(int);
	int calculate_outputm88(int);
	int calculate_outputm89(int);
	int calculate_outputm90(int);
	int calculate_outputm91(int);
	int calculate_outputm92(int);
	int calculate_outputm93(int);
	int calculate_outputm94(int);
	int calculate_outputm95(int);
	int calculate_outputm96(int);
	int calculate_outputm97(int);
	int calculate_outputm98(int);
	int calculate_outputm99(int);
	int calculate_outputm100(int);
	int calculate_outputm101(int);
	int calculate_outputm102(int);
	int calculate_outputm103(int);
	int calculate_outputm104(int);
	int calculate_outputm105(int);
	int calculate_outputm106(int);
	int calculate_outputm107(int);
	int calculate_outputm108(int);
	int calculate_outputm109(int);
	int calculate_outputm110(int);
	int calculate_outputm111(int);
	int calculate_outputm112(int);
	int calculate_outputm113(int);
	int calculate_outputm114(int);
	int calculate_outputm115(int);
	int calculate_outputm116(int);
	int calculate_outputm117(int);
	int calculate_outputm118(int);
	int calculate_outputm119(int);
	int calculate_outputm120(int);
	int calculate_outputm121(int);
	int calculate_outputm122(int);
	int calculate_outputm123(int);
	int calculate_outputm124(int);
	int calculate_outputm125(int);
	int calculate_outputm126(int);
	int calculate_outputm127(int);
	int calculate_outputm128(int);
	int calculate_outputm129(int);
	int calculate_outputm130(int);
	int calculate_outputm131(int);
	int calculate_outputm132(int);
	int calculate_outputm133(int);
	int calculate_outputm134(int);
	int calculate_outputm135(int);
	int calculate_outputm136(int);
	int calculate_outputm137(int);
	int calculate_outputm138(int);
	int calculate_outputm139(int);
	int calculate_outputm140(int);
	int calculate_outputm141(int);
	int calculate_outputm142(int);
	int calculate_outputm143(int);
	int calculate_outputm144(int);
	int calculate_outputm145(int);
	int calculate_outputm146(int);
	int calculate_outputm147(int);
	int calculate_outputm148(int);
	int calculate_outputm149(int);
	int calculate_outputm150(int);
	int calculate_outputm151(int);
	int calculate_outputm152(int);
	int calculate_outputm153(int);
	int calculate_outputm154(int);
	int calculate_outputm155(int);
	int calculate_outputm156(int);
	int calculate_outputm157(int);
	int calculate_outputm158(int);
	int calculate_outputm159(int);
	int calculate_outputm160(int);
	int calculate_outputm161(int);
	int calculate_outputm162(int);
	int calculate_outputm163(int);
	int calculate_outputm164(int);
	int calculate_outputm165(int);
	int calculate_outputm166(int);
	int calculate_outputm167(int);
	int calculate_outputm168(int);
	int calculate_outputm169(int);
	int calculate_outputm170(int);
	int calculate_outputm171(int);
	int calculate_outputm172(int);
	int calculate_outputm173(int);
	int calculate_outputm174(int);
	int calculate_outputm175(int);
	int calculate_outputm176(int);
	int calculate_outputm177(int);
	int calculate_outputm178(int);
	int calculate_outputm179(int);
	int calculate_outputm180(int);
	int calculate_outputm181(int);
	int calculate_outputm182(int);
	int calculate_outputm183(int);
	int calculate_outputm184(int);
	int calculate_outputm185(int);
	int calculate_outputm186(int);
	int calculate_outputm187(int);
	int calculate_outputm188(int);
	int calculate_outputm189(int);
	int calculate_outputm190(int);
	int calculate_outputm191(int);
	int calculate_outputm192(int);
	int calculate_outputm193(int);
	int calculate_outputm194(int);
	int calculate_outputm195(int);
	int calculate_outputm196(int);
	int calculate_outputm197(int);
	int calculate_outputm198(int);
	int calculate_outputm199(int);
	int calculate_outputm200(int);
	int calculate_outputm201(int);
	int calculate_outputm202(int);
	int calculate_outputm203(int);
	int calculate_outputm204(int);
	int calculate_outputm205(int);
	int calculate_outputm206(int);
	int calculate_outputm207(int);
	int calculate_outputm208(int);
	int calculate_outputm209(int);
	int calculate_outputm210(int);
	int calculate_outputm211(int);
	int calculate_outputm212(int);
	int calculate_outputm213(int);
	int calculate_outputm214(int);
	int calculate_outputm215(int);
	int calculate_outputm216(int);
	int calculate_outputm217(int);
	int calculate_outputm218(int);
	int calculate_outputm219(int);
	int calculate_outputm220(int);
	int calculate_outputm221(int);
	int calculate_outputm222(int);
	int calculate_outputm223(int);
	int calculate_outputm224(int);
	int calculate_outputm225(int);
	int calculate_outputm226(int);
	int calculate_outputm227(int);
	int calculate_outputm228(int);
	int calculate_outputm229(int);

	 int a28 = 9;
	 int a180  = 36;
	 int a34  = 33;
	 int a176  = 32;
	 int a42 = 14;
	 int a10 = 10;
	 int a163 = 3;
	 int a109 = 8;
	 int a89  = 33;
	 int a83 = 10;
	 int cf = 1;
	 int a29 = 13;
	 int a177 = 13;
	 int a119 = 6;
	 int a142 = 11;
	 int a84 = 5;
	 int a60 = 6;
	 int a169 = 11;
	 int a1  = 34;
	 int a125  = 35;
	 int a17  = 36;
	 int a102  = 35;
	 int a45  = 33;
	 int a76  = 34;
	 int a72 = 13;
	 int a92 = 6;
	 int a12  = 33;
	 int a171  = 34;
	 int a48  = 34;
	 int a54 = 8;
	 int a129 = 11;
	 int a94  = 36;
	 int a173 = 12;
	 int a132  = 36;
	 int a15 = 13;
	 int a46  = 35;
	 int a145 = 5;
	 int a144  = 35;
	 int a168 = 3;
	 int a0  = 35;
	 int a70 = 16;
	 int a19  = 33;
	 int a118  = 34;
	 int a133 = 7;
	 int a195  = 32;
	 int a128 = 2;
	 int a181 = 8;
	 int a175 = 10;
	 int a146 = 10;


	int errorCheck() {
	    if(((a42 == 10 && a163 == 3) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a125 == 33 && a12 == 33) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a83 == 14 && a70 == 15) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a169 == 14 && a12 == 32) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a133 == 10 && a168 == 5) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 9 && a168 == 8) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a128 == 8 && a125 == 35) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a118 == 32 && a10 == 12) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a54 == 6 && a72 == 11) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a173 == 11 && a132 == 36) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 14 && a168 == 8) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 12 && a132 == 33) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a128 == 4 && a125 == 35) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a118 == 32 && a163 == 4) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a34 == 32 && a72 == 10) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a176 == 34 && a10 == 16) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a29 == 12 && a125 == 34) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a195 == 35 && a70 == 16) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a133 == 13 && a168 == 5) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a89 == 32 && a132 == 34) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a94 == 36 && a70 == 12) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a89 == 36 && a72 == 14) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a42 == 8 && a70 == 9) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a89 == 35 && a72 == 14) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a94 == 36 && a163 == 6) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a102 == 32 && a132 == 35) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a173 == 7 && a70 == 14) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a89 == 33 && a72 == 14) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a142 == 10 && a10 == 9) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a145 == 7 && a72 == 13) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a94 == 33 && a163 == 6) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a84 == 10 && a72 == 9) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a94 == 34 && a70 == 12) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a102 == 35 && a132 == 35) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a175 == 3 && a10 == 11) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a144 == 35 && a163 == 7) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a142 == 7 && a10 == 9) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 8 && a132 == 33) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a119 == 5 && a163 == 2) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a146 == 9 && a10 == 13) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a119 == 11 && a163 == 2) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a83 == 10 && a70 == 15) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a109 == 3 && a163 == 1) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a29 == 8 && a125 == 34) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a42 == 12 && a70 == 9) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a89 == 34 && a168 == 3) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a142 == 11 && a10 == 9) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a169 == 9 && a12 == 35) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a173 == 8 && a132 == 36) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a45 == 34 && a125 == 32) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a54 == 2 && a72 == 11) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a145 == 4 && a12 == 34) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a94 == 35 && a163 == 6) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a177 == 15 && a72 == 12) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a128 == 2 && a125 == 35) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a181 == 7 && a10 == 15) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a84 == 3 && a72 == 9) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a15 == 12 && a12 == 36) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a133 == 9 && a168 == 5) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a125 == 36 && a12 == 33) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a175 == 3 && a70 == 11) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a119 == 9 && a163 == 2) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a15 == 10 && a168 == 7) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a1 == 33 && a70 == 13) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a129 == 14 && a168 == 4) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a34 == 34 && a72 == 10) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a94 == 32 && a70 == 12) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a29 == 10 && a125 == 34) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a109 == 8 && a163 == 1) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a15 == 11 && a12 == 36) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a146 == 10 && a10 == 13) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a0 == 32 && a163 == 8) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a0 == 35 && a163 == 8) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a83 == 17 && a70 == 15) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 9 && a132 == 33) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a28 == 9 && a125 == 36) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a54 == 5 && a72 == 11) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a54 == 4 && a72 == 11) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 10 && a168 == 8) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a15 == 14 && a12 == 36) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a173 == 12 && a132 == 32) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a15 == 13 && a168 == 7) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a17 == 36 && a70 == 10) && a60 == 6)){
	    cf = 0;
return -1;
	    }
	    if(((a145 == 6 && a72 == 13) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a72 == 13 && a132 == 33) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a169 == 9 && a12 == 32) && a60 == 7)){
	    cf = 0;
return -1;
	    }
	    if(((a15 == 14 && a168 == 7) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a84 == 5 && a72 == 9) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a171 == 33 && a125 == 33) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a109 == 4 && a163 == 1) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a118 == 36 && a10 == 12) && a60 == 10)){
	    cf = 0;
return -1;
	    }
	    if(((a109 == 9 && a163 == 1) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a171 == 32 && a125 == 33) && a60 == 5)){
	    cf = 0;
return -1;
	    }
	    if(((a133 == 11 && a168 == 5) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a109 == 5 && a163 == 1) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	    if(((a89 == 33 && a132 == 34) && a60 == 9)){
	    cf = 0;
return -1;
	    }
	    if(((a145 == 3 && a72 == 13) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a133 == 8 && a168 == 5) && a60 == 8)){
	    cf = 0;
return -1;
	    }
	    if(((a84 == 8 && a72 == 9) && a60 == 11)){
	    cf = 0;
return -1;
	    }
	    if(((a42 == 8 && a163 == 3) && a60 == 4)){
	    cf = 0;
return -1;
	    }
	}
 int calculate_outputm59(int input) {
    if((((input == 4) && (a163 == 1 && ( cf==1  && a109 == 6))) && a60 == 4)) {
    	cf = 0;
    	a60 = 10;
    	a118 = 36 ;
    	a10 = 12; 
    	 //printf("%d\n", 21);  
    } 
    if((((a109 == 6 && ( cf==1  && a60 == 4)) && a163 == 1) && (input == 3))) {
    	cf = 0;
    	a72 = 8;
    	a60 = 11;
    	a92 = 13; 
    	 //printf("%d\n", 22);  
    } 
    if((((a163 == 1 && ( cf==1  && (input == 1))) && a109 == 6) && a60 == 4)) {
    	cf = 0;
    	a19 = 36 ;
    	a163 = 5; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm60(int input) {
    if((a163 == 1 && ((input == 5) && (a109 == 7 && ( cf==1  && a60 == 4))))) {
    	cf = 0;
    	a171 = 33 ;
    	a125 = 33 ;
    	a60 = 5; 
    	 //printf("%d\n", 23);  
    } 
    if(((((a60 == 4 &&  cf==1 ) && a109 == 7) && (input == 1)) && a163 == 1)) {
    	cf = 0;
    	a19 = 36 ;
    	a163 = 5; 
    	 //printf("%d\n", 22);  
    } 
    if(((a109 == 7 && (a60 == 4 && (a163 == 1 &&  cf==1 ))) && (input == 3))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 8;
    	a92 = 13; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm1(int input) {
    if(( cf==1  && a109 == 6)) {
    	calculate_outputm59(input);
    } 
    if((a109 == 7 &&  cf==1 )) {
    	calculate_outputm60(input);
    } 
}
 int calculate_outputm63(int input) {
    if(((a119 == 4 && ((input == 5) && ( cf==1  && a60 == 4))) && a163 == 2)) {
    	cf = 0;
    	a60 = 7;
    	a12 = 32 ;
    	a169 = 13; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 2) && ((a60 == 4 && ( cf==1  && a119 == 4)) && a163 == 2))) {
    	cf = 0;
    	a168 = 4;
    	a60 = 8;
    	a129 = 8; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm2(int input) {
    if((a119 == 4 &&  cf==1 )) {
    	calculate_outputm63(input);
    } 
}
 int calculate_outputm69(int input) {
    if((((a42 == 15 && ( cf==1  && (input == 2))) && a163 == 3) && a60 == 4)) {
    	cf = 0;
    	a132 = 36 ;
    	a60 = 9;
    	a173 = 10; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm3(int input) {
    if((a42 == 15 &&  cf==1 )) {
    	calculate_outputm69(input);
    } 
}
 int calculate_outputm70(int input) {
    if((a118 == 33 && ((((input == 3) &&  cf==1 ) && a60 == 4) && a163 == 4))) {
    	cf = 0;
    	a163 = 1;
    	a109 = 7; 
    	 //printf("%d\n", 23);  
    } 
    if(((a60 == 4 && (( cf==1  && (input == 4)) && a118 == 33)) && a163 == 4)) {
    	cf = 0;
    	a102 = 35 ;
    	a132 = 35 ;
    	a60 = 9; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm4(int input) {
    if((a118 == 33 &&  cf==1 )) {
    	calculate_outputm70(input);
    } 
}
 int calculate_outputm72(int input) {
    if((a19 == 34 && ((a60 == 4 && ((input == 1) &&  cf==1 )) && a163 == 5))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 11;
    	a54 = 3; 
    	 //printf("%d\n", 23);  
    } 
    if(((a19 == 34 && ((input == 5) && ( cf==1  && a60 == 4))) && a163 == 5)) {
    	cf = 0;
    	a60 = 11;
    	a72 = 12;
    	a177 = 14; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm73(int input) {
    if((a60 == 4 && (((a19 == 36 &&  cf==1 ) && a163 == 5) && (input == 3)))) {
    	cf = 0;
    	a60 = 8;
    	a171 = 36 ;
    	a168 = 1; 
    	 //printf("%d\n", 25);  
    } 
    if((a60 == 4 && ((a163 == 5 && (a19 == 36 &&  cf==1 )) && (input == 5)))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 26);  
    } 
    if(((input == 1) && ((a19 == 36 && (a163 == 5 &&  cf==1 )) && a60 == 4))) {
    	cf = 0;
    	a60 = 11;
    	a76 = 33 ;
    	a72 = 7; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm5(int input) {
    if((a19 == 34 &&  cf==1 )) {
    	calculate_outputm72(input);
    } 
    if(( cf==1  && a19 == 36)) {
    	calculate_outputm73(input);
    } 
}
 int calculate_outputm82(int input) {
    if((a60 == 5 && ((a171 == 34 && ( cf==1  && a125 == 33)) && (input == 2)))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
    if((a125 == 33 && ((a60 == 5 && ( cf==1  && (input == 1))) && a171 == 34))) {
    	cf = 0;
    	a60 = 10;
    	a48 = 32 ;
    	a10 = 14; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm9(int input) {
    if(( cf==1  && a171 == 34)) {
    	calculate_outputm82(input);
    } 
}
 int calculate_outputm83(int input) {
    if(((a60 == 5 && ((a125 == 32 &&  cf==1 ) && a45 == 33)) && (input == 1))) {
    	cf = 0;
    	a12 = 36 ;
    	a60 = 7;
    	a15 = 13; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm85(int input) {
    if((((( cf==1  && a125 == 32) && a45 == 36) && (input == 5)) && a60 == 5)) {
    	cf = 0;
    	a168 = 8;
    	a60 = 8;
    	a72 = 8; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm10(int input) {
    if((a45 == 33 &&  cf==1 )) {
    	calculate_outputm83(input);
    } 
    if(( cf==1  && a45 == 36)) {
    	calculate_outputm85(input);
    } 
}
 int calculate_outputm89(int input) {
    if(((input == 1) && (a60 == 5 && (( cf==1  && a29 == 13) && a125 == 34)))) {
    	cf = 0;
    	a60 = 8;
    	a171 = 33 ;
    	a168 = 1; 
    	 //printf("%d\n", 22);  
    } 
    if(((input == 3) && (((a125 == 34 &&  cf==1 ) && a29 == 13) && a60 == 5))) {
    	cf = 0;
    	a60 = 9;
    	a132 = 33 ;
    	a72 = 9; 
    	 //printf("%d\n", 26);  
    } 
    if((a29 == 13 && ((input == 2) && (a60 == 5 && (a125 == 34 &&  cf==1 ))))) {
    	cf = 0;
    	a60 = 6;
    	a1 = 35 ;
    	a70 = 13; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm11(int input) {
    if(( cf==1  && a29 == 13)) {
    	calculate_outputm89(input);
    } 
}
 int calculate_outputm93(int input) {
    if((a60 == 5 && (a128 == 9 && ((input == 5) && (a125 == 35 &&  cf==1 ))))) {
    	cf = 0;
    	a60 = 8;
    	a171 = 36 ;
    	a168 = 1; 
    	 //printf("%d\n", 26);  
    } 
    if((a128 == 9 && ((( cf==1  && a60 == 5) && (input == 1)) && a125 == 35))) {
    	cf = 0;
    	a72 = 11;
    	a60 = 11;
    	a54 = 3; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm12(int input) {
    if(( cf==1  && a128 == 9)) {
    	calculate_outputm93(input);
    } 
}
 int calculate_outputm97(int input) {
    if(((input == 2) && ((a42 == 13 && (a60 == 6 &&  cf==1 )) && a70 == 9))) {
    	cf = 0;
    	a72 = 11;
    	a60 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm14(int input) {
    if((a42 == 13 &&  cf==1 )) {
    	calculate_outputm97(input);
    } 
}
 int calculate_outputm100(int input) {
    if((a70 == 11 && ((( cf==1  && a60 == 6) && a175 == 4) && (input == 3)))) {
    	cf = 0;
    	a180 = 33 ;
    	a60 = 10;
    	a10 = 10; 
    	 //printf("%d\n", 22);  
    } 
    if((a60 == 6 && ((a70 == 11 && ( cf==1  && (input == 2))) && a175 == 4))) {
    	cf = 0;
    	a125 = 35 ;
    	a60 = 5;
    	a128 = 9; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 1) && (a70 == 11 && (a175 == 4 && (a60 == 6 &&  cf==1 ))))) {
    	cf = 0;
    	a168 = 5;
    	a60 = 8;
    	a133 = 7; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm16(int input) {
    if(( cf==1  && a175 == 4)) {
    	calculate_outputm100(input);
    } 
}
 int calculate_outputm105(int input) {
    if(((a70 == 13 && ((a1 == 35 &&  cf==1 ) && a60 == 6)) && (input == 2))) {
    	cf = 0;
    	a125 = 35 ;
    	a60 = 5;
    	a128 = 2; 
    	 //printf("%d\n", 23);  
    } 
    if((a1 == 35 && (a60 == 6 && (( cf==1  && (input == 3)) && a70 == 13)))) {
    	cf = 0;
    	a168 = 7;
    	a60 = 8;
    	a15 = 11; 
    	 //printf("%d\n", 20);  
    } 
    if((a1 == 35 && ((a60 == 6 && ( cf==1  && a70 == 13)) && (input == 1)))) {
    	cf = 0;
    	a132 = 36 ;
    	a60 = 9;
    	a173 = 6; 
    	 //printf("%d\n", 20);  
    } 
    if(((input == 5) && ((( cf==1  && a60 == 6) && a70 == 13) && a1 == 35))) {
    	cf = 0;
    	a70 = 11;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm18(int input) {
    if(( cf==1  && a1 == 35)) {
    	calculate_outputm105(input);
    } 
}
 int calculate_outputm107(int input) {
    if((a173 == 8 && ((( cf==1  && (input == 2)) && a70 == 14) && a60 == 6))) {
    	cf = 0;
    	a70 = 15;
    	a83 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if(((input == 1) && (a70 == 14 && (( cf==1  && a60 == 6) && a173 == 8)))) {
    	cf = 0;
    	a60 = 4;
    	a163 = 3;
    	a42 = 15; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm19(int input) {
    if(( cf==1  && a173 == 8)) {
    	calculate_outputm107(input);
    } 
}
 int calculate_outputm109(int input) {
    if(((a60 == 6 && (((input == 5) &&  cf==1 ) && a83 == 12)) && a70 == 15)) {
    	cf = 0;
    	a60 = 7;
    	a12 = 34 ;
    	a145 = 7; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm111(int input) {
    if((a70 == 15 && (a83 == 15 && (a60 == 6 && ( cf==1  && (input == 1)))))) {
    	cf = 0;
    	a60 = 8;
    	a46 = 32 ;
    	a168 = 2; 
    	 //printf("%d\n", 20);  
    } 
    if(((((input == 3) && ( cf==1  && a60 == 6)) && a83 == 15) && a70 == 15)) {
    	cf = 0;
    	a72 = 12;
    	a60 = 11;
    	a177 = 11; 
    	 //printf("%d\n", 20);  
    } 
    if(((a83 == 15 && (((input == 5) &&  cf==1 ) && a70 == 15)) && a60 == 6)) {
    	cf = 0;
    	a72 = 9;
    	a60 = 11;
    	a84 = 9; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm112(int input) {
    if((((input == 5) && ((a83 == 16 &&  cf==1 ) && a70 == 15)) && a60 == 6)) {
    	cf = 0;
    	a60 = 7;
    	a12 = 32 ;
    	a169 = 13; 
    	 //printf("%d\n", 21);  
    } 
    if((a70 == 15 && ((input == 2) && (a60 == 6 && ( cf==1  && a83 == 16))))) {
    	cf = 0;
    	a132 = 34 ;
    	a89 = 36 ;
    	a60 = 9; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm20(int input) {
    if(( cf==1  && a83 == 12)) {
    	calculate_outputm109(input);
    } 
    if((a83 == 15 &&  cf==1 )) {
    	calculate_outputm111(input);
    } 
    if(( cf==1  && a83 == 16)) {
    	calculate_outputm112(input);
    } 
}
 int calculate_outputm114(int input) {
    if(((a60 == 6 && ((a195 == 32 &&  cf==1 ) && a70 == 16)) && (input == 2))) {
    	cf = 0;
    	a168 = 6;
    	a60 = 8;
    	a29 = 9; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm21(int input) {
    if((a195 == 32 &&  cf==1 )) {
    	calculate_outputm114(input);
    } 
}
 int calculate_outputm119(int input) {
    if(((((a12 == 32 &&  cf==1 ) && a60 == 7) && (input == 1)) && a169 == 13)) {
    	cf = 0;
    	a76 = 33 ;
    	a60 = 11;
    	a72 = 7; 
    	 //printf("%d\n", 21);  
    } 
    if((a12 == 32 && ((input == 3) && (( cf==1  && a169 == 13) && a60 == 7)))) {
    	cf = 0;
    	a102 = 36 ;
    	a132 = 35 ;
    	a60 = 9; 
    	 //printf("%d\n", 25);  
    } 
    if(((input == 5) && ((a12 == 32 && (a60 == 7 &&  cf==1 )) && a169 == 13))) {
    	cf = 0;
    	a60 = 11;
    	a76 = 33 ;
    	a72 = 7; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm121(int input) {
    if(((a60 == 7 && (( cf==1  && (input == 5)) && a169 == 15)) && a12 == 32)) {
    	cf = 0;
    	a10 = 9;
    	a60 = 10;
    	a142 = 4; 
    	 //printf("%d\n", 26);  
    } 
    if(((a169 == 15 && (((input == 1) &&  cf==1 ) && a12 == 32)) && a60 == 7)) {
    	cf = 0;
    	a171 = 34 ;
    	a125 = 33 ;
    	a60 = 5; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm122(int input) {
    if((((a60 == 7 && (a169 == 16 &&  cf==1 )) && a12 == 32) && (input == 3))) {
    	cf = 0;
    	a168 = 6;
    	a60 = 8;
    	a29 = 13; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm23(int input) {
    if(( cf==1  && a169 == 13)) {
    	calculate_outputm119(input);
    } 
    if(( cf==1  && a169 == 15)) {
    	calculate_outputm121(input);
    } 
    if(( cf==1  && a169 == 16)) {
    	calculate_outputm122(input);
    } 
}
 int calculate_outputm124(int input) {
    if((a60 == 7 && (a12 == 34 && (a145 == 6 && ( cf==1  && (input == 1)))))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 12;
    	a177 = 12; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm125(int input) {
    if(((a145 == 7 && (a12 == 34 && ( cf==1  && a60 == 7))) && (input == 1))) {
    	cf = 0;
    	a60 = 8;
    	a168 = 5;
    	a133 = 12; 
    	 //printf("%d\n", 23);  
    } 
    if(((((a145 == 7 &&  cf==1 ) && (input == 4)) && a60 == 7) && a12 == 34)) {
    	cf = 0;
    	a60 = 8;
    	a168 = 5;
    	a133 = 11; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm126(int input) {
    if(((((a12 == 34 &&  cf==1 ) && a145 == 8) && a60 == 7) && (input == 2))) {
    	cf = 0;
    	a118 = 33 ;
    	a60 = 4;
    	a163 = 4; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm24(int input) {
    if((a145 == 6 &&  cf==1 )) {
    	calculate_outputm124(input);
    } 
    if((a145 == 7 &&  cf==1 )) {
    	calculate_outputm125(input);
    } 
    if((a145 == 8 &&  cf==1 )) {
    	calculate_outputm126(input);
    } 
}
 int calculate_outputm128(int input) {
    if((a12 == 35 && ((a60 == 7 && ((input == 3) &&  cf==1 )) && a169 == 14))) {
    	cf = 0;
    	a60 = 10;
    	a48 = 33 ;
    	a10 = 14; 
    	 //printf("%d\n", 20);  
    } 
    if(((((input == 1) && ( cf==1  && a60 == 7)) && a12 == 35) && a169 == 14)) {
    	cf = 0;
    	a132 = 36 ;
    	a60 = 9;
    	a173 = 6; 
    	 //printf("%d\n", 20);  
    } 
    if((a12 == 35 && ((input == 5) && ((a60 == 7 &&  cf==1 ) && a169 == 14)))) {
    	cf = 0;
    	a70 = 11;
    	a60 = 6;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm25(int input) {
    if((a169 == 14 &&  cf==1 )) {
    	calculate_outputm128(input);
    } 
}
 int calculate_outputm131(int input) {
    if((a60 == 7 && (a15 == 13 && (( cf==1  && a12 == 36) && (input == 3))))) {
    	cf = 0;
    	a163 = 2;
    	a60 = 4;
    	a119 = 5; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 5) && (a60 == 7 && ((a12 == 36 &&  cf==1 ) && a15 == 13)))) {
    	cf = 0;
    	a12 = 32 ;
    	a169 = 13; 
    	 //printf("%d\n", 21);  
    } 
    if(((a60 == 7 && ((input == 2) && ( cf==1  && a12 == 36))) && a15 == 13)) {
    	cf = 0;
    	a89 = 36 ;
    	a132 = 34 ;
    	a60 = 9; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm26(int input) {
    if(( cf==1  && a15 == 13)) {
    	calculate_outputm131(input);
    } 
}
 int calculate_outputm133(int input) {
    if((a168 == 1 && ((input == 2) && (( cf==1  && a171 == 33) && a60 == 8)))) {
    	cf = 0;
    	a12 = 32 ;
    	a60 = 7;
    	a169 = 16; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm134(int input) {
    if((a168 == 1 && ((a171 == 35 && ( cf==1  && a60 == 8)) && (input == 5)))) {
    	cf = 0;
    	a60 = 7;
    	a12 = 35 ;
    	a169 = 9; 
    	 //printf("%d\n", 21);  
    } 
    if((a171 == 35 && (a60 == 8 && ((input == 4) && ( cf==1  && a168 == 1))))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 11;
    	a54 = 4; 
    	 //printf("%d\n", 23);  
    } 
    if(((input == 2) && ((( cf==1  && a171 == 35) && a60 == 8) && a168 == 1))) {
    	cf = 0;
    	a168 = 6;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if(((a60 == 8 && ((a171 == 35 &&  cf==1 ) && (input == 1))) && a168 == 1)) {
    	cf = 0;
    	a60 = 7;
    	a12 = 34 ;
    	a145 = 8; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm135(int input) {
    if((a171 == 36 && ((input == 2) && (( cf==1  && a60 == 8) && a168 == 1)))) {
    	cf = 0;
    	a70 = 11;
    	a60 = 6;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
    if((((input == 3) && ((a171 == 36 &&  cf==1 ) && a168 == 1)) && a60 == 8)) {
    	cf = 0;
    	a60 = 5;
    	a125 = 35 ;
    	a128 = 9; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 5) && (a60 == 8 && (( cf==1  && a171 == 36) && a168 == 1)))) {
    	cf = 0;
    	a125 = 35 ;
    	a60 = 5;
    	a128 = 9; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm27(int input) {
    if(( cf==1  && a171 == 33)) {
    	calculate_outputm133(input);
    } 
    if((a171 == 35 &&  cf==1 )) {
    	calculate_outputm134(input);
    } 
    if((a171 == 36 &&  cf==1 )) {
    	calculate_outputm135(input);
    } 
}
 int calculate_outputm136(int input) {
    if((((input == 3) && (( cf==1  && a46 == 32) && a60 == 8)) && a168 == 2)) {
    	cf = 0;
    	a70 = 15;
    	a60 = 6;
    	a83 = 12; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm28(int input) {
    if(( cf==1  && a46 == 32)) {
    	calculate_outputm136(input);
    } 
}
 int calculate_outputm138(int input) {
    if((a168 == 3 && (a60 == 8 && ((input == 3) && (a89 == 36 &&  cf==1 ))))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 20);  
    } 
    if(((a168 == 3 && ((input == 1) && ( cf==1  && a89 == 36))) && a60 == 8)) {
    	cf = 0;
    	a168 = 6;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if((((input == 5) && (a60 == 8 && (a168 == 3 &&  cf==1 ))) && a89 == 36)) {
    	cf = 0;
    	a180 = 33 ;
    	a60 = 10;
    	a10 = 10; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm29(int input) {
    if((a89 == 36 &&  cf==1 )) {
    	calculate_outputm138(input);
    } 
}
 int calculate_outputm139(int input) {
    if((a168 == 4 && ((input == 3) && ((a60 == 8 &&  cf==1 ) && a129 == 8)))) {
    	cf = 0;
    	a125 = 32 ;
    	a45 = 33 ;
    	a60 = 5; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm141(int input) {
    if((a168 == 4 && (a60 == 8 && ((input == 5) && ( cf==1  && a129 == 15))))) {
    	cf = 0;
    	a168 = 8;
    	a72 = 13; 
    	 //printf("%d\n", 21);  
    } 
    if(((((a129 == 15 &&  cf==1 ) && a168 == 4) && a60 == 8) && (input == 4))) {
    	cf = 0;
    	a132 = 35 ;
    	a102 = 32 ;
    	a60 = 9; 
    	 //printf("%d\n", 23);  
    } 
    if(((a60 == 8 && (a129 == 15 && (a168 == 4 &&  cf==1 ))) && (input == 3))) {
    	cf = 0;
    	a72 = 8;
    	a60 = 11;
    	a92 = 10; 
    	 //printf("%d\n", 21);  
    } 
    if(((a129 == 15 && (( cf==1  && a60 == 8) && (input == 2))) && a168 == 4)) {
    	cf = 0;
    	a70 = 11;
    	a60 = 6;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm30(int input) {
    if((a129 == 8 &&  cf==1 )) {
    	calculate_outputm139(input);
    } 
    if(( cf==1  && a129 == 15)) {
    	calculate_outputm141(input);
    } 
}
 int calculate_outputm142(int input) {
    if((a60 == 8 && (a133 == 7 && (( cf==1  && a168 == 5) && (input == 5))))) {
    	cf = 0;
    	a76 = 33 ;
    	a60 = 11;
    	a72 = 7; 
    	 //printf("%d\n", 20);  
    } 
    if((a133 == 7 && (a168 == 5 && (( cf==1  && (input == 1)) && a60 == 8)))) {
    	cf = 0;
    	a70 = 9;
    	a60 = 6;
    	a42 = 13; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm147(int input) {
    if(((((a60 == 8 &&  cf==1 ) && a168 == 5) && (input == 2)) && a133 == 12)) {
    	cf = 0;
    	a60 = 7;
    	a12 = 35 ;
    	a169 = 14; 
    	 //printf("%d\n", 24);  
    } 
    if(((a60 == 8 && ((a133 == 12 &&  cf==1 ) && a168 == 5)) && (input == 1))) {
    	cf = 0;
    	a171 = 33 ;
    	a168 = 1; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm31(int input) {
    if(( cf==1  && a133 == 7)) {
    	calculate_outputm142(input);
    } 
    if(( cf==1  && a133 == 12)) {
    	calculate_outputm147(input);
    } 
}
 int calculate_outputm149(int input) {
    if((a168 == 6 && ((a29 == 9 && ( cf==1  && a60 == 8)) && (input == 3)))) {
    	cf = 0;
    	a60 = 6;
    	a70 = 14;
    	a173 = 8; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm150(int input) {
    if(((a29 == 13 && (( cf==1  && a60 == 8) && (input == 1))) && a168 == 6)) {
    	cf = 0;
    	a60 = 4;
    	a19 = 36 ;
    	a163 = 5; 
    	 //printf("%d\n", 22);  
    } 
    if(((((a60 == 8 &&  cf==1 ) && a29 == 13) && a168 == 6) && (input == 3))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 8;
    	a92 = 13; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm151(int input) {
    if((a29 == 15 && (a60 == 8 && (( cf==1  && a168 == 6) && (input == 5))))) {
    	cf = 0;
    	a60 = 6;
    	a70 = 11;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
    if((a168 == 6 && (((a60 == 8 &&  cf==1 ) && a29 == 15) && (input == 1)))) {
    	cf = 0;
    	a60 = 9;
    	a132 = 36 ;
    	a173 = 6; 
    	 //printf("%d\n", 20);  
    } 
    if((((a168 == 6 && (a60 == 8 &&  cf==1 )) && a29 == 15) && (input == 3))) {
    	cf = 0;
    	a168 = 7;
    	a15 = 11; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm32(int input) {
    if(( cf==1  && a29 == 9)) {
    	calculate_outputm149(input);
    } 
    if((a29 == 13 &&  cf==1 )) {
    	calculate_outputm150(input);
    } 
    if((a29 == 15 &&  cf==1 )) {
    	calculate_outputm151(input);
    } 
}
 int calculate_outputm152(int input) {
    if((a168 == 7 && (a60 == 8 && (((input == 3) &&  cf==1 ) && a15 == 9)))) {
    	cf = 0;
    	a171 = 35 ;
    	a168 = 1; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm154(int input) {
    if(((a60 == 8 && (a168 == 7 && (a15 == 11 &&  cf==1 ))) && (input == 1))) {
    	cf = 0;
    	a70 = 15;
    	a60 = 6;
    	a83 = 16; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm157(int input) {
    if((a60 == 8 && ((((input == 2) &&  cf==1 ) && a15 == 15) && a168 == 7))) {
    	cf = 0;
    	a72 = 9;
    	a60 = 11;
    	a84 = 7; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm33(int input) {
    if((a15 == 9 &&  cf==1 )) {
    	calculate_outputm152(input);
    } 
    if(( cf==1  && a15 == 11)) {
    	calculate_outputm154(input);
    } 
    if(( cf==1  && a15 == 15)) {
    	calculate_outputm157(input);
    } 
}
 int calculate_outputm158(int input) {
    if(((a72 == 8 && ((input == 1) && ( cf==1  && a60 == 8))) && a168 == 8)) {
    	cf = 0;
    	a60 = 11;
    	a72 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm161(int input) {
    if((a168 == 8 && (a60 == 8 && ((input == 5) && (a72 == 13 &&  cf==1 ))))) {
    	cf = 0;
    	a171 = 36 ;
    	a168 = 1; 
    	 //printf("%d\n", 26);  
    } 
    if(((input == 3) && (a168 == 8 && ((a72 == 13 &&  cf==1 ) && a60 == 8)))) {
    	cf = 0;
    	a12 = 34 ;
    	a60 = 7;
    	a145 = 4; 
    	 //printf("%d\n", 25);  
    } 
    if((a72 == 13 && (a60 == 8 && (( cf==1  && a168 == 8) && (input == 1))))) {
    	cf = 0;
    	a60 = 11;
    	a72 = 11;
    	a54 = 3; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm34(int input) {
    if(( cf==1  && a72 == 8)) {
    	calculate_outputm158(input);
    } 
    if(( cf==1  && a72 == 13)) {
    	calculate_outputm161(input);
    } 
}
 int calculate_outputm163(int input) {
    if((a72 == 7 && ((input == 3) && (a132 == 33 && (a60 == 9 &&  cf==1 ))))) {
    	cf = 0;
    	a60 = 4;
    	a0 = 32 ;
    	a163 = 8; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 5) && ((a60 == 9 && ( cf==1  && a72 == 7)) && a132 == 33))) {
    	cf = 0;
    	a12 = 32 ;
    	a60 = 7;
    	a169 = 13; 
    	 //printf("%d\n", 21);  
    } 
    if((((a60 == 9 && (a72 == 7 &&  cf==1 )) && a132 == 33) && (input == 2))) {
    	cf = 0;
    	a132 = 34 ;
    	a89 = 36 ; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm35(int input) {
    if((a72 == 7 &&  cf==1 )) {
    	calculate_outputm163(input);
    } 
}
 int calculate_outputm168(int input) {
    if(((a60 == 9 && (((input == 2) &&  cf==1 ) && a173 == 10)) && a132 == 32)) {
    	cf = 0;
    	a70 = 11;
    	a60 = 6;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
    if((((a60 == 9 && ((input == 3) &&  cf==1 )) && a173 == 10) && a132 == 32)) {
    	cf = 0;
    	a168 = 6;
    	a60 = 8;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if(((input == 1) && (((a173 == 10 &&  cf==1 ) && a132 == 32) && a60 == 9))) {
    	cf = 0;
    	a168 = 6;
    	a60 = 8;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm36(int input) {
    if((a173 == 10 &&  cf==1 )) {
    	calculate_outputm168(input);
    } 
}
 int calculate_outputm172(int input) {
    if(((input == 2) && (a89 == 34 && (a132 == 34 && (a60 == 9 &&  cf==1 ))))) {
    	cf = 0;
    	a132 = 35 ;
    	a102 = 36 ; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm173(int input) {
    if(((a89 == 35 && ((input == 5) && ( cf==1  && a132 == 34))) && a60 == 9)) {
    	cf = 0;
    	a171 = 36 ;
    	a60 = 8;
    	a168 = 1; 
    	 //printf("%d\n", 26);  
    } 
    if(((input == 1) && (a89 == 35 && (( cf==1  && a132 == 34) && a60 == 9)))) {
    	cf = 0;
    	a10 = 11;
    	a60 = 10;
    	a175 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm174(int input) {
    if((a60 == 9 && ((input == 3) && (a89 == 36 && ( cf==1  && a132 == 34))))) {
    	cf = 0;
    	a60 = 8;
    	a168 = 7;
    	a15 = 11; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm37(int input) {
    if((a89 == 34 &&  cf==1 )) {
    	calculate_outputm172(input);
    } 
    if((a89 == 35 &&  cf==1 )) {
    	calculate_outputm173(input);
    } 
    if(( cf==1  && a89 == 36)) {
    	calculate_outputm174(input);
    } 
}
 int calculate_outputm177(int input) {
    if((a60 == 9 && ((input == 3) && (a102 == 36 && ( cf==1  && a132 == 35))))) {
    	cf = 0;
    	a72 = 11;
    	a60 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm38(int input) {
    if((a102 == 36 &&  cf==1 )) {
    	calculate_outputm177(input);
    } 
}
 int calculate_outputm178(int input) {
    if((((input == 3) && (a60 == 9 && ( cf==1  && a132 == 36))) && a173 == 6)) {
    	cf = 0;
    	a125 = 32 ;
    	a45 = 36 ;
    	a60 = 5; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm179(int input) {
    if(((a132 == 36 && ((a173 == 7 &&  cf==1 ) && a60 == 9)) && (input == 3))) {
    	cf = 0;
    	a60 = 8;
    	a168 = 4;
    	a129 = 15; 
    	 //printf("%d\n", 25);  
    } 
    if((a173 == 7 && (a60 == 9 && (((input == 4) &&  cf==1 ) && a132 == 36)))) {
    	cf = 0;
    	a125 = 35 ;
    	a60 = 5;
    	a128 = 4; 
    	 //printf("%d\n", 21);  
    } 
    if((((input == 1) && (( cf==1  && a60 == 9) && a173 == 7)) && a132 == 36)) {
    	cf = 0;
    	a60 = 11;
    	a76 = 33 ;
    	a72 = 7; 
    	 //printf("%d\n", 22);  
    } 
    if((a132 == 36 && (a60 == 9 && ((input == 5) && ( cf==1  && a173 == 7))))) {
    	cf = 0;
    	a180 = 32 ;
    	a60 = 10;
    	a10 = 10; 
    	 //printf("%d\n", 26);  
    } 
    if((a132 == 36 && ((a60 == 9 && ( cf==1  && (input == 2))) && a173 == 7))) {
    	cf = 0;
    	a12 = 32 ;
    	a60 = 7;
    	a169 = 14; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm181(int input) {
    if((a60 == 9 && (((input == 3) && (a173 == 10 &&  cf==1 )) && a132 == 36))) {
    	cf = 0;
    	a10 = 9;
    	a60 = 10;
    	a142 = 5; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm39(int input) {
    if(( cf==1  && a173 == 6)) {
    	calculate_outputm178(input);
    } 
    if(( cf==1  && a173 == 7)) {
    	calculate_outputm179(input);
    } 
    if(( cf==1  && a173 == 10)) {
    	calculate_outputm181(input);
    } 
}
 int calculate_outputm183(int input) {
    if(((a142 == 4 && (a10 == 9 && ( cf==1  && (input == 3)))) && a60 == 10)) {
    	cf = 0;
    	a60 = 5;
    	a125 = 35 ;
    	a128 = 9; 
    	 //printf("%d\n", 21);  
    } 
    if((a60 == 10 && ((a142 == 4 && (a10 == 9 &&  cf==1 )) && (input == 5)))) {
    	cf = 0;
    	a19 = 34 ;
    	a60 = 4;
    	a163 = 5; 
    	 //printf("%d\n", 21);  
    } 
    if((a142 == 4 && ((a60 == 10 && (a10 == 9 &&  cf==1 )) && (input == 2)))) {
    	cf = 0;
    	a60 = 6;
    	a70 = 11;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm184(int input) {
    if((a10 == 9 && (a60 == 10 && (a142 == 5 && ( cf==1  && (input == 1)))))) {
    	cf = 0;
    	a60 = 9;
    	a132 = 36 ;
    	a173 = 7; 
    	 //printf("%d\n", 22);  
    } 
    if((a60 == 10 && ((input == 3) && (a142 == 5 && ( cf==1  && a10 == 9))))) {
    	cf = 0;
    	a72 = 12;
    	a60 = 11;
    	a177 = 16; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm40(int input) {
    if((a142 == 4 &&  cf==1 )) {
    	calculate_outputm183(input);
    } 
    if(( cf==1  && a142 == 5)) {
    	calculate_outputm184(input);
    } 
}
 int calculate_outputm188(int input) {
    if((((( cf==1  && a180 == 33) && a10 == 10) && (input == 2)) && a60 == 10)) {
    	cf = 0;
    	a60 = 8;
    	a89 = 36 ;
    	a168 = 3; 
    	 //printf("%d\n", 20);  
    } 
    if(((input == 3) && (a10 == 10 && (a60 == 10 && ( cf==1  && a180 == 33))))) {
    	cf = 0;
    	a132 = 34 ;
    	a89 = 34 ;
    	a60 = 9; 
    	 //printf("%d\n", 25);  
    } 
    if((a60 == 10 && ((input == 1) && (a10 == 10 && ( cf==1  && a180 == 33))))) {
    	cf = 0;
    	a60 = 9;
    	a132 = 32 ;
    	a173 = 10; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm189(int input) {
    if((a180 == 32 && (a10 == 10 && ((a60 == 10 &&  cf==1 ) && (input == 2))))) {
    	cf = 0;
    	a60 = 8;
    	a168 = 6;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if((((( cf==1  && a180 == 32) && a10 == 10) && (input == 1)) && a60 == 10)) {
    	cf = 0;
    	a168 = 7;
    	a60 = 8;
    	a15 = 15; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm41(int input) {
    if((a180 == 33 &&  cf==1 )) {
    	calculate_outputm188(input);
    } 
    if((a180 == 32 &&  cf==1 )) {
    	calculate_outputm189(input);
    } 
}
 int calculate_outputm191(int input) {
    if((a10 == 11 && (a175 == 9 && (( cf==1  && a60 == 10) && (input == 4))))) {
    	cf = 0;
    	a60 = 4;
    	a163 = 1;
    	a109 = 8; 
    	 //printf("%d\n", 23);  
    } 
    if(((input == 2) && ((a60 == 10 && ( cf==1  && a10 == 11)) && a175 == 9))) {
    	cf = 0;
    	a72 = 11;
    	a60 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
    if((((input == 1) && (( cf==1  && a175 == 9) && a60 == 10)) && a10 == 11)) {
    	cf = 0;
    	a102 = 36 ;
    	a132 = 35 ;
    	a60 = 9; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm42(int input) {
    if((a175 == 9 &&  cf==1 )) {
    	calculate_outputm191(input);
    } 
}
 int calculate_outputm196(int input) {
    if(((a10 == 14 && (a60 == 10 && (a48 == 33 &&  cf==1 ))) && (input == 1))) {
    	cf = 0;
    	a132 = 33 ;
    	a60 = 9;
    	a72 = 7; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm197(int input) {
    if(((a48 == 32 && (( cf==1  && a10 == 14) && (input == 3))) && a60 == 10)) {
    	cf = 0;
    	a60 = 5;
    	a125 = 34 ;
    	a29 = 13; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm45(int input) {
    if((a48 == 33 &&  cf==1 )) {
    	calculate_outputm196(input);
    } 
    if((a48 == 32 &&  cf==1 )) {
    	calculate_outputm197(input);
    } 
}
 int calculate_outputm200(int input) {
    if((((input == 1) && (a176 == 35 && ( cf==1  && a60 == 10))) && a10 == 16)) {
    	cf = 0;
    	a72 = 11;
    	a60 = 11;
    	a54 = 2; 
    	 //printf("%d\n", 24);  
    } 
    if((((a60 == 10 && ( cf==1  && a176 == 35)) && (input == 2)) && a10 == 16)) {
    	cf = 0;
    	a12 = 32 ;
    	a60 = 7;
    	a169 = 16; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm47(int input) {
    if((a176 == 35 &&  cf==1 )) {
    	calculate_outputm200(input);
    } 
}
 int calculate_outputm201(int input) {
    if((((a76 == 33 && ((input == 1) &&  cf==1 )) && a72 == 7) && a60 == 11)) {
    	cf = 0;
    	a72 = 11;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm48(int input) {
    if(( cf==1  && a76 == 33)) {
    	calculate_outputm201(input);
    } 
}
 int calculate_outputm202(int input) {
    if(((input == 4) && ((a60 == 11 && (a72 == 8 &&  cf==1 )) && a92 == 10))) {
    	cf = 0;
    	a168 = 7;
    	a60 = 8;
    	a15 = 13; 
    	 //printf("%d\n", 26);  
    } 
    if((a60 == 11 && ((( cf==1  && a72 == 8) && a92 == 10) && (input == 1)))) {
    	cf = 0;
    	a72 = 11;
    	a54 = 3; 
    	 //printf("%d\n", 23);  
    } 
    if(((a60 == 11 && (((input == 5) &&  cf==1 ) && a72 == 8)) && a92 == 10)) {
    	cf = 0;
    	a60 = 8;
    	a171 = 36 ;
    	a168 = 1; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm203(int input) {
    if((a72 == 8 && (((a92 == 13 &&  cf==1 ) && (input == 5)) && a60 == 11))) {
    	cf = 0;
    	a132 = 35 ;
    	a102 = 36 ;
    	a60 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm49(int input) {
    if(( cf==1  && a92 == 10)) {
    	calculate_outputm202(input);
    } 
    if(( cf==1  && a92 == 13)) {
    	calculate_outputm203(input);
    } 
}
 int calculate_outputm206(int input) {
    if(((a84 == 7 && ((input == 3) && ( cf==1  && a72 == 9))) && a60 == 11)) {
    	cf = 0;
    	a60 = 4;
    	a163 = 1;
    	a109 = 6; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm208(int input) {
    if((((input == 2) && (( cf==1  && a84 == 9) && a72 == 9)) && a60 == 11)) {
    	cf = 0;
    	a60 = 7;
    	a12 = 32 ;
    	a169 = 15; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 1) && ((a72 == 9 && ( cf==1  && a60 == 11)) && a84 == 9))) {
    	cf = 0;
    	a89 = 34 ;
    	a72 = 14; 
    	 //printf("%d\n", 22);  
    } 
    if((((input == 3) && (a84 == 9 && ( cf==1  && a72 == 9))) && a60 == 11)) {
    	cf = 0;
    	a180 = 33 ;
    	a60 = 10;
    	a10 = 10; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm50(int input) {
    if(( cf==1  && a84 == 7)) {
    	calculate_outputm206(input);
    } 
    if((a84 == 9 &&  cf==1 )) {
    	calculate_outputm208(input);
    } 
}
 int calculate_outputm213(int input) {
    if(((input == 1) && (((a60 == 11 &&  cf==1 ) && a72 == 11) && a54 == 3))) {
    	cf = 0;
    	a102 = 36 ;
    	a132 = 35 ;
    	a60 = 9; 
    	 //printf("%d\n", 21);  
    } 
    if(((((input == 2) && (a54 == 3 &&  cf==1 )) && a72 == 11) && a60 == 11)) {
    	cf = 0;
    	a54 = 9; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm217(int input) {
    if((a72 == 11 && ((a60 == 11 && (a54 == 9 &&  cf==1 )) && (input == 2)))) {
    	cf = 0;
    	a60 = 8;
    	a168 = 6;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if(((a54 == 9 && (( cf==1  && a60 == 11) && a72 == 11)) && (input == 1))) {
    	cf = 0;
    	a171 = 33 ;
    	a60 = 8;
    	a168 = 1; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm52(int input) {
    if(( cf==1  && a54 == 3)) {
    	calculate_outputm213(input);
    } 
    if((a54 == 9 &&  cf==1 )) {
    	calculate_outputm217(input);
    } 
}
 int calculate_outputm218(int input) {
    if(((a60 == 11 && ((a72 == 12 &&  cf==1 ) && (input == 1))) && a177 == 11)) {
    	cf = 0;
    	a163 = 2;
    	a60 = 4;
    	a119 = 4; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm219(int input) {
    if((a177 == 12 && (a72 == 12 && ((a60 == 11 &&  cf==1 ) && (input == 2))))) {
    	cf = 0;
    	a168 = 6;
    	a60 = 8;
    	a29 = 15; 
    	 //printf("%d\n", 24);  
    } 
    if((a72 == 12 && (a177 == 12 && (( cf==1  && a60 == 11) && (input == 1))))) {
    	cf = 0;
    	a176 = 35 ;
    	a60 = 10;
    	a10 = 16; 
    	 //printf("%d\n", 22);  
    } 
}
 int calculate_outputm220(int input) {
    if(((input == 3) && ((a72 == 12 && (a177 == 14 &&  cf==1 )) && a60 == 11))) {
    	cf = 0;
    	a89 = 35 ;
    	a132 = 34 ;
    	a60 = 9; 
    	 //printf("%d\n", 21);  
    } 
    if(((input == 2) && ((a60 == 11 && (a177 == 14 &&  cf==1 )) && a72 == 12))) {
    	cf = 0;
    	a70 = 11;
    	a60 = 6;
    	a175 = 4; 
    	 //printf("%d\n", 25);  
    } 
    if((a177 == 14 && ((( cf==1  && a60 == 11) && (input == 5)) && a72 == 12))) {
    	cf = 0;
    	a125 = 35 ;
    	a60 = 5;
    	a128 = 9; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm222(int input) {
    if((a177 == 16 && (a72 == 12 && ((input == 5) && (a60 == 11 &&  cf==1 ))))) {
    	cf = 0;
    	a60 = 8;
    	a168 = 7;
    	a15 = 9; 
    	 //printf("%d\n", 23);  
    } 
    if((a177 == 16 && ((a72 == 12 && ( cf==1  && a60 == 11)) && (input == 1)))) {
    	cf = 0;
    	a132 = 32 ;
    	a60 = 9;
    	a173 = 12; 
    	 //printf("%d\n", 26);  
    } 
    if((((( cf==1  && (input == 3)) && a60 == 11) && a177 == 16) && a72 == 12)) {
    	cf = 0;
    	a60 = 4;
    	a163 = 2;
    	a119 = 9; 
    	 //printf("%d\n", 20);  
    } 
    if(((a60 == 11 && (a177 == 16 && ((input == 2) &&  cf==1 ))) && a72 == 12)) {
    	cf = 0;
    	a60 = 4;
    	a144 = 35 ;
    	a163 = 7; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm53(int input) {
    if(( cf==1  && a177 == 11)) {
    	calculate_outputm218(input);
    } 
    if(( cf==1  && a177 == 12)) {
    	calculate_outputm219(input);
    } 
    if((a177 == 14 &&  cf==1 )) {
    	calculate_outputm220(input);
    } 
    if((a177 == 16 &&  cf==1 )) {
    	calculate_outputm222(input);
    } 
}
 int calculate_outputm227(int input) {
    if(((((a89 == 34 &&  cf==1 ) && (input == 1)) && a60 == 11) && a72 == 14)) {
    	cf = 0;
    	a70 = 9;
    	a60 = 6;
    	a42 = 13; 
    	 //printf("%d\n", 24);  
    } 
    if((a89 == 34 && ((( cf==1  && (input == 5)) && a60 == 11) && a72 == 14))) {
    	cf = 0;
    	a12 = 34 ;
    	a60 = 7;
    	a145 = 6; 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm55(int input) {
    if(( cf==1  && a89 == 34)) {
    	calculate_outputm227(input);
    } 
}

 int calculate_output(int input) {
        cf = 1;

    if(( cf==1  && a60 == 4)) {
    	if((a163 == 1 &&  cf==1 )) {
    		calculate_outputm1(input);
    	} 
    	if((a163 == 2 &&  cf==1 )) {
    		calculate_outputm2(input);
    	} 
    	if((a163 == 3 &&  cf==1 )) {
    		calculate_outputm3(input);
    	} 
    	if((a163 == 4 &&  cf==1 )) {
    		calculate_outputm4(input);
    	} 
    	if(( cf==1  && a163 == 5)) {
    		calculate_outputm5(input);
    	} 
    } 
    if((a60 == 5 &&  cf==1 )) {
    	if(( cf==1  && a125 == 33)) {
    		calculate_outputm9(input);
    	} 
    	if((a125 == 32 &&  cf==1 )) {
    		calculate_outputm10(input);
    	} 
    	if((a125 == 34 &&  cf==1 )) {
    		calculate_outputm11(input);
    	} 
    	if((a125 == 35 &&  cf==1 )) {
    		calculate_outputm12(input);
    	} 
    } 
    if(( cf==1  && a60 == 6)) {
    	if((a70 == 9 &&  cf==1 )) {
    		calculate_outputm14(input);
    	} 
    	if(( cf==1  && a70 == 11)) {
    		calculate_outputm16(input);
    	} 
    	if(( cf==1  && a70 == 13)) {
    		calculate_outputm18(input);
    	} 
    	if(( cf==1  && a70 == 14)) {
    		calculate_outputm19(input);
    	} 
    	if(( cf==1  && a70 == 15)) {
    		calculate_outputm20(input);
    	} 
    	if(( cf==1  && a70 == 16)) {
    		calculate_outputm21(input);
    	} 
    } 
    if((a60 == 7 &&  cf==1 )) {
    	if(( cf==1  && a12 == 32)) {
    		calculate_outputm23(input);
    	} 
    	if((a12 == 34 &&  cf==1 )) {
    		calculate_outputm24(input);
    	} 
    	if(( cf==1  && a12 == 35)) {
    		calculate_outputm25(input);
    	} 
    	if(( cf==1  && a12 == 36)) {
    		calculate_outputm26(input);
    	} 
    } 
    if(( cf==1  && a60 == 8)) {
    	if(( cf==1  && a168 == 1)) {
    		calculate_outputm27(input);
    	} 
    	if((a168 == 2 &&  cf==1 )) {
    		calculate_outputm28(input);
    	} 
    	if((a168 == 3 &&  cf==1 )) {
    		calculate_outputm29(input);
    	} 
    	if((a168 == 4 &&  cf==1 )) {
    		calculate_outputm30(input);
    	} 
    	if(( cf==1  && a168 == 5)) {
    		calculate_outputm31(input);
    	} 
    	if(( cf==1  && a168 == 6)) {
    		calculate_outputm32(input);
    	} 
    	if(( cf==1  && a168 == 7)) {
    		calculate_outputm33(input);
    	} 
    	if(( cf==1  && a168 == 8)) {
    		calculate_outputm34(input);
    	} 
    } 
    if((a60 == 9 &&  cf==1 )) {
    	if((a132 == 33 &&  cf==1 )) {
    		calculate_outputm35(input);
    	} 
    	if((a132 == 32 &&  cf==1 )) {
    		calculate_outputm36(input);
    	} 
    	if((a132 == 34 &&  cf==1 )) {
    		calculate_outputm37(input);
    	} 
    	if((a132 == 35 &&  cf==1 )) {
    		calculate_outputm38(input);
    	} 
    	if((a132 == 36 &&  cf==1 )) {
    		calculate_outputm39(input);
    	} 
    } 
    if(( cf==1  && a60 == 10)) {
    	if((a10 == 9 &&  cf==1 )) {
    		calculate_outputm40(input);
    	} 
    	if((a10 == 10 &&  cf==1 )) {
    		calculate_outputm41(input);
    	} 
    	if(( cf==1  && a10 == 11)) {
    		calculate_outputm42(input);
    	} 
    	if(( cf==1  && a10 == 14)) {
    		calculate_outputm45(input);
    	} 
    	if(( cf==1  && a10 == 16)) {
    		calculate_outputm47(input);
    	} 
    } 
    if(( cf==1  && a60 == 11)) {
    	if((a72 == 7 &&  cf==1 )) {
    		calculate_outputm48(input);
    	} 
    	if(( cf==1  && a72 == 8)) {
    		calculate_outputm49(input);
    	} 
    	if((a72 == 9 &&  cf==1 )) {
    		calculate_outputm50(input);
    	} 
    	if(( cf==1  && a72 == 11)) {
    		calculate_outputm52(input);
    	} 
    	if((a72 == 12 &&  cf==1 )) {
    		calculate_outputm53(input);
    	} 
    	if(( cf==1  && a72 == 14)) {
    		calculate_outputm55(input);
    	} 
    } 
    errorCheck();

    if( cf==1 ) 
	{
    	//printf(stderr, "Invalid input: %d\n", input);
    }		
}

int main()
{
kappa = 0;
    // main i/o-loop
   int symb;
   for (int FLAG=0;FLAG<BOUND;FLAG++)
    {
    klee_make_symbolic(&symb, sizeof(int ), "symb");     
               
        // operate eca engine
        if((symb != 2) && (symb != 5) && (symb != 3) && (symb != 1) && (symb != 4))
          return -2;
        calculate_output(symb);
    }
    
 return 0;

}
