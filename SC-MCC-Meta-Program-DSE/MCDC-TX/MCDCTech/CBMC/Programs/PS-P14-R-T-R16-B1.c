#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif

#define BOUND 1 //BOUND 5
int kappa;
int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>

   // extern void //__VERIFIER_error(int);

	// inputs
	int inputs[] = {2,4,1,5,3};

	void errorCheck();
	void calculate_output(int);
	void calculate_outputm1(int);
	void calculate_outputm2(int);
	void calculate_outputm3(int);
	void calculate_outputm4(int);
	void calculate_outputm5(int);
	void calculate_outputm6(int);
	void calculate_outputm7(int);
	void calculate_outputm8(int);
	void calculate_outputm9(int);
	void calculate_outputm10(int);
	void calculate_outputm11(int);
	void calculate_outputm12(int);
	void calculate_outputm13(int);
	void calculate_outputm14(int);
	void calculate_outputm15(int);
	void calculate_outputm16(int);
	void calculate_outputm17(int);
	void calculate_outputm18(int);
	void calculate_outputm19(int);
	void calculate_outputm20(int);
	void calculate_outputm21(int);
	void calculate_outputm22(int);
	void calculate_outputm23(int);
	void calculate_outputm24(int);
	void calculate_outputm25(int);
	void calculate_outputm26(int);
	void calculate_outputm27(int);
	void calculate_outputm28(int);
	void calculate_outputm29(int);
	void calculate_outputm30(int);
	void calculate_outputm31(int);
	void calculate_outputm32(int);
	void calculate_outputm33(int);
	void calculate_outputm34(int);
	void calculate_outputm35(int);
	void calculate_outputm36(int);
	void calculate_outputm37(int);
	void calculate_outputm38(int);
	void calculate_outputm39(int);
	void calculate_outputm40(int);
	void calculate_outputm41(int);
	void calculate_outputm42(int);
	void calculate_outputm43(int);
	void calculate_outputm44(int);
	void calculate_outputm45(int);
	void calculate_outputm46(int);
	void calculate_outputm47(int);
	void calculate_outputm48(int);
	void calculate_outputm49(int);
	void calculate_outputm50(int);
	void calculate_outputm51(int);
	void calculate_outputm52(int);
	void calculate_outputm53(int);
	void calculate_outputm54(int);
	void calculate_outputm55(int);
	void calculate_outputm56(int);
	void calculate_outputm57(int);
	void calculate_outputm58(int);
	void calculate_outputm59(int);
	void calculate_outputm60(int);
	void calculate_outputm61(int);
	void calculate_outputm62(int);
	void calculate_outputm63(int);
	void calculate_outputm64(int);
	void calculate_outputm65(int);
	void calculate_outputm66(int);
	void calculate_outputm67(int);
	void calculate_outputm68(int);
	void calculate_outputm69(int);
	void calculate_outputm70(int);
	void calculate_outputm71(int);
	void calculate_outputm72(int);
	void calculate_outputm73(int);
	void calculate_outputm74(int);
	void calculate_outputm75(int);
	void calculate_outputm76(int);
	void calculate_outputm77(int);
	void calculate_outputm78(int);
	void calculate_outputm79(int);
	void calculate_outputm80(int);
	void calculate_outputm81(int);
	void calculate_outputm82(int);
	void calculate_outputm83(int);
	void calculate_outputm84(int);
	void calculate_outputm85(int);
	void calculate_outputm86(int);
	void calculate_outputm87(int);
	void calculate_outputm88(int);
	void calculate_outputm89(int);
	void calculate_outputm90(int);
	void calculate_outputm91(int);
	void calculate_outputm92(int);
	void calculate_outputm93(int);
	void calculate_outputm94(int);
	void calculate_outputm95(int);
	void calculate_outputm96(int);
	void calculate_outputm97(int);
	void calculate_outputm98(int);
	void calculate_outputm99(int);
	void calculate_outputm100(int);
	void calculate_outputm101(int);
	void calculate_outputm102(int);
	void calculate_outputm103(int);
	void calculate_outputm104(int);
	void calculate_outputm105(int);
	void calculate_outputm106(int);
	void calculate_outputm107(int);
	void calculate_outputm108(int);
	void calculate_outputm109(int);
	void calculate_outputm110(int);
	void calculate_outputm111(int);
	void calculate_outputm112(int);
	void calculate_outputm113(int);
	void calculate_outputm114(int);
	void calculate_outputm115(int);
	void calculate_outputm116(int);
	void calculate_outputm117(int);
	void calculate_outputm118(int);
	void calculate_outputm119(int);
	void calculate_outputm120(int);
	void calculate_outputm121(int);
	void calculate_outputm122(int);
	void calculate_outputm123(int);
	void calculate_outputm124(int);
	void calculate_outputm125(int);
	void calculate_outputm126(int);
	void calculate_outputm127(int);
	void calculate_outputm128(int);
	void calculate_outputm129(int);
	void calculate_outputm130(int);
	void calculate_outputm131(int);
	void calculate_outputm132(int);
	void calculate_outputm133(int);
	void calculate_outputm134(int);
	void calculate_outputm135(int);
	void calculate_outputm136(int);
	void calculate_outputm137(int);
	void calculate_outputm138(int);
	void calculate_outputm139(int);
	void calculate_outputm140(int);
	void calculate_outputm141(int);
	void calculate_outputm142(int);
	void calculate_outputm143(int);
	void calculate_outputm144(int);
	void calculate_outputm145(int);
	void calculate_outputm146(int);
	void calculate_outputm147(int);
	void calculate_outputm148(int);
	void calculate_outputm149(int);
	void calculate_outputm150(int);
	void calculate_outputm151(int);
	void calculate_outputm152(int);
	void calculate_outputm153(int);
	void calculate_outputm154(int);
	void calculate_outputm155(int);
	void calculate_outputm156(int);
	void calculate_outputm157(int);
	void calculate_outputm158(int);
	void calculate_outputm159(int);
	void calculate_outputm160(int);
	void calculate_outputm161(int);
	void calculate_outputm162(int);
	void calculate_outputm163(int);
	void calculate_outputm164(int);
	void calculate_outputm165(int);
	void calculate_outputm166(int);
	void calculate_outputm167(int);
	void calculate_outputm168(int);
	void calculate_outputm169(int);
	void calculate_outputm170(int);
	void calculate_outputm171(int);
	void calculate_outputm172(int);
	void calculate_outputm173(int);
	void calculate_outputm174(int);
	void calculate_outputm175(int);
	void calculate_outputm176(int);
	void calculate_outputm177(int);
	void calculate_outputm178(int);
	void calculate_outputm179(int);
	void calculate_outputm180(int);
	void calculate_outputm181(int);
	void calculate_outputm182(int);
	void calculate_outputm183(int);
	void calculate_outputm184(int);
	void calculate_outputm185(int);
	void calculate_outputm186(int);
	void calculate_outputm187(int);
	void calculate_outputm188(int);
	void calculate_outputm189(int);
	void calculate_outputm190(int);
	void calculate_outputm191(int);
	void calculate_outputm192(int);
	void calculate_outputm193(int);
	void calculate_outputm194(int);
	void calculate_outputm195(int);
	void calculate_outputm196(int);
	void calculate_outputm197(int);
	void calculate_outputm198(int);
	void calculate_outputm199(int);
	void calculate_outputm200(int);
	void calculate_outputm201(int);
	void calculate_outputm202(int);
	void calculate_outputm203(int);
	void calculate_outputm204(int);
	void calculate_outputm205(int);
	void calculate_outputm206(int);
	void calculate_outputm207(int);
	void calculate_outputm208(int);
	void calculate_outputm209(int);
	void calculate_outputm210(int);
	void calculate_outputm211(int);
	void calculate_outputm212(int);
	void calculate_outputm213(int);
	void calculate_outputm214(int);

	 int a159,a75,a101,a122,a136,a100,a35,a167,a61,a118;
	 int a49  = 33;
	 int a57 = 8;
	 int a106 = 10;
	 int a119  = 36;
	 int a188  = 33;
	 int a169 = 10;
	 int a24  = 33;
	 int a14 = 6;
	 int a132 = 5;
	 int a123  = 32;
	 int a178 = 9;
	 int a25  = 33;
	 int a121 = 14;
	 int a28 = 1;
	 int a38  = 35;
	 int a120  = 33;
	 int a141  = 33;
	 int cf = 1;
	 int a59  = 34;
	 int a70 = 11;
	 int a71 = 2;
	 int a65  = 33;
	 int a189 = 10;
	 int a3 = 1;
	 int a72  = 35;
	 int a92 = 4;
	 int a87 = 15;
	 int a135  = 33;
	 int a55 = 10;
	 int a18 = 4;
	 int a12  = 32;
	 int a79  = 33;
	 int a143  = 33;
	 int a30  = 32;
	 int a190 = 6;
	 int a1  = 33;
	 int a148 = 15;
	 int a33  = 33;
	 int a13  = 33;
	 int a40 = 13;
	 int a32  = 36;
	 int a31 = 1;
	 int a63 = 13;
	 int a168  = 33;
	 int a53 = 7;
	 int a174 = 1;
	 int a179  = 33;
	 int a48  = 33;
	 int a155 = 13;
	 int a56 = 11;
	 int a197 = 10;
	 int a52 = 6;
	 int a164  = 36;
	 int a83 = 8;
	 int a109  = 33;
	 int a69  = 33;
	 int a80 = 7;
	 int a111 = 2;
	 int a76 = 5;
	 int a34  = 33;
	 int a17  = 35;
	 int a176 = 1;
	 int a19 = -15;
	 int a7 = 1;
	 int a171 = 3;
	 int a95 = 1;
	 int a151 = 1;
	 int a105 = 3;
	 int a91 = 1;
	 int a134 = 3;
	 int a73 = 1;
	 int a195 = 1;
	 int a146 = 1;
	 int a130 = 1;
	 int a153 = -15;
	 int a107 = 1;
	 int a89 = -15;
	 int a58 = 3;
	 int a182 = 2;
	 int a127 = -15;
	 int a98 = 1;
	 int a10 = -15;
	 int a165 = 1;
	 int a47 = 1;
	 int a6 = -15;
	 int a11 = -15;
	 int a5 = 3;
	 int a78 = 1;


	void errorCheck() {
printf("POINT: 1\n");

	    if(((a63 == 8 && a40 == 8) && a35 == 35)){
printf("POINT: 2\n");
	    cf = 0;
	    //__VERIFIER_error(0);
	    }
printf("POINT: 3\n");

	    if(((a106 == 6 && a40 == 9) && a35 == 35)){
printf("POINT: 4\n");
	    cf = 0;
	    //__VERIFIER_error(1);
	    }
printf("POINT: 5\n");

	    if(((a28 == 7 && a123 == 35) && a35 == 34)){
printf("POINT: 6\n");
	    cf = 0;
	    //__VERIFIER_error(2);
	    }
printf("POINT: 7\n");

	    if(((a106 == 8 && a40 == 9) && a35 == 35)){
printf("POINT: 8\n");
	    cf = 0;
	    //__VERIFIER_error(3);
	    }
printf("POINT: 9\n");

	    if(((a63 == 14 && a40 == 8) && a35 == 35)){
printf("POINT: 10\n");
	    cf = 0;
	    //__VERIFIER_error(4);
	    }
printf("POINT: 11\n");

	    if(((a63 == 9 && a40 == 8) && a35 == 35)){
printf("POINT: 12\n");
	    cf = 0;
	    //__VERIFIER_error(5);
	    }
printf("POINT: 13\n");

	    if(((a40 == 11 && a136 == 15) && a35 == 32)){
printf("POINT: 14\n");
	    cf = 0;
	    //__VERIFIER_error(6);
	    }
printf("POINT: 15\n");

	    if(((a30 == 35 && a132 == 7) && a35 == 36)){
printf("POINT: 16\n");
	    cf = 0;
	    //__VERIFIER_error(7);
	    }
printf("POINT: 17\n");

	    if(((a178 == 6 && a123 == 33) && a35 == 34)){
printf("POINT: 18\n");
	    cf = 0;
	    //__VERIFIER_error(8);
	    }
printf("POINT: 19\n");

	    if(((a70 == 7 && a40 == 7) && a35 == 35)){
printf("POINT: 20\n");
	    cf = 0;
	    //__VERIFIER_error(9);
	    }
printf("POINT: 21\n");

	    if(((a12 == 36 && a132 == 10) && a35 == 36)){
printf("POINT: 22\n");
	    cf = 0;
	    //__VERIFIER_error(10);
	    }
printf("POINT: 23\n");

	    if(((a40 == 13 && a136 == 15) && a35 == 32)){
printf("POINT: 24\n");
	    cf = 0;
	    //__VERIFIER_error(11);
	    }
printf("POINT: 25\n");

	    if(((a61 == 35 && a148 == 14) && a35 == 33)){
printf("POINT: 26\n");
	    cf = 0;
	    //__VERIFIER_error(12);
	    }
printf("POINT: 27\n");

	    if(((a52 == 1 && a132 == 6) && a35 == 36)){
printf("POINT: 28\n");
	    cf = 0;
	    //__VERIFIER_error(13);
	    }
printf("POINT: 29\n");

	    if(((a155 == 12 && a136 == 16) && a35 == 32)){
printf("POINT: 30\n");
	    cf = 0;
	    //__VERIFIER_error(14);
	    }
printf("POINT: 31\n");

	    if(((a80 == 7 && a132 == 8) && a35 == 36)){
printf("POINT: 32\n");
	    cf = 0;
	    //__VERIFIER_error(15);
	    }
printf("POINT: 33\n");

	    if(((a30 == 36 && a132 == 7) && a35 == 36)){
printf("POINT: 34\n");
	    cf = 0;
	    //__VERIFIER_error(16);
	    }
printf("POINT: 35\n");

	    if(((a197 == 12 && a136 == 13) && a35 == 32)){
printf("POINT: 36\n");
	    cf = 0;
	    //__VERIFIER_error(17);
	    }
printf("POINT: 37\n");

	    if(((a28 == 6 && a123 == 35) && a35 == 34)){
printf("POINT: 38\n");
	    cf = 0;
	    //__VERIFIER_error(18);
	    }
printf("POINT: 39\n");

	    if(((a119 == 35 && a148 == 12) && a35 == 33)){
printf("POINT: 40\n");
	    cf = 0;
	    //__VERIFIER_error(19);
	    }
printf("POINT: 41\n");

	    if(((a122 == 10 && a40 == 12) && a35 == 35)){
printf("POINT: 42\n");
	    cf = 0;
	    //__VERIFIER_error(20);
	    }
printf("POINT: 43\n");

	    if(((a119 == 36 && a148 == 12) && a35 == 33)){
printf("POINT: 44\n");
	    cf = 0;
	    //__VERIFIER_error(21);
	    }
printf("POINT: 45\n");

	    if(((a121 == 15 && a136 == 17) && a35 == 32)){
printf("POINT: 46\n");
	    cf = 0;
	    //__VERIFIER_error(22);
	    }
printf("POINT: 47\n");

	    if(((a28 == 5 && a40 == 6) && a35 == 35)){
printf("POINT: 48\n");
	    cf = 0;
	    //__VERIFIER_error(23);
	    }
printf("POINT: 49\n");

	    if(((a106 == 10 && a40 == 9) && a35 == 35)){
printf("POINT: 50\n");
	    cf = 0;
	    //__VERIFIER_error(24);
	    }
printf("POINT: 51\n");

	    if(((a164 == 36 && a136 == 10) && a35 == 32)){
printf("POINT: 52\n");
	    cf = 0;
	    //__VERIFIER_error(25);
	    }
printf("POINT: 53\n");

	    if(((a87 == 12 && a148 == 13) && a35 == 33)){
printf("POINT: 54\n");
	    cf = 0;
	    //__VERIFIER_error(26);
	    }
printf("POINT: 55\n");

	    if(((a63 == 13 && a40 == 8) && a35 == 35)){
printf("POINT: 56\n");
	    cf = 0;
	    //__VERIFIER_error(27);
	    }
printf("POINT: 57\n");

	    if(((a38 == 35 && a148 == 10) && a35 == 33)){
printf("POINT: 58\n");
	    cf = 0;
	    //__VERIFIER_error(28);
	    }
printf("POINT: 59\n");

	    if(((a61 == 32 && a148 == 14) && a35 == 33)){
printf("POINT: 60\n");
	    cf = 0;
	    //__VERIFIER_error(29);
	    }
printf("POINT: 61\n");

	    if(((a75 == 35 && a136 == 12) && a35 == 32)){
printf("POINT: 62\n");
	    cf = 0;
	    //__VERIFIER_error(30);
	    }
printf("POINT: 63\n");

	    if(((a56 == 9 && a132 == 9) && a35 == 36)){
printf("POINT: 64\n");
	    cf = 0;
	    //__VERIFIER_error(31);
	    }
printf("POINT: 65\n");

	    if(((a122 == 11 && a40 == 12) && a35 == 35)){
printf("POINT: 66\n");
	    cf = 0;
	    //__VERIFIER_error(32);
	    }
printf("POINT: 67\n");

	    if(((a14 == 8 && a123 == 32) && a35 == 34)){
printf("POINT: 68\n");
	    cf = 0;
	    //__VERIFIER_error(33);
	    }
printf("POINT: 69\n");

	    if(((a55 == 4 && a148 == 16) && a35 == 33)){
printf("POINT: 70\n");
	    cf = 0;
	    //__VERIFIER_error(34);
	    }
printf("POINT: 71\n");

	    if(((a55 == 8 && a148 == 16) && a35 == 33)){
printf("POINT: 72\n");
	    cf = 0;
	    //__VERIFIER_error(35);
	    }
printf("POINT: 73\n");

	    if(((a143 == 34 && a40 == 10) && a35 == 35)){
printf("POINT: 74\n");
	    cf = 0;
	    //__VERIFIER_error(36);
	    }
printf("POINT: 75\n");

	    if(((a188 == 35 && a40 == 11) && a35 == 35)){
printf("POINT: 76\n");
	    cf = 0;
	    //__VERIFIER_error(37);
	    }
printf("POINT: 77\n");

	    if(((a197 == 17 && a136 == 13) && a35 == 32)){
printf("POINT: 78\n");
	    cf = 0;
	    //__VERIFIER_error(38);
	    }
printf("POINT: 79\n");

	    if(((a56 == 15 && a132 == 9) && a35 == 36)){
printf("POINT: 80\n");
	    cf = 0;
	    //__VERIFIER_error(39);
	    }
printf("POINT: 81\n");

	    if(((a28 == 8 && a40 == 6) && a35 == 35)){
printf("POINT: 82\n");
	    cf = 0;
	    //__VERIFIER_error(40);
	    }
printf("POINT: 83\n");

	    if(((a70 == 5 && a40 == 7) && a35 == 35)){
printf("POINT: 84\n");
	    cf = 0;
	    //__VERIFIER_error(41);
	    }
printf("POINT: 85\n");

	    if(((a56 == 8 && a132 == 9) && a35 == 36)){
printf("POINT: 86\n");
	    cf = 0;
	    //__VERIFIER_error(42);
	    }
printf("POINT: 87\n");

	    if(((a59 == 32 && a132 == 11) && a35 == 36)){
printf("POINT: 88\n");
	    cf = 0;
	    //__VERIFIER_error(43);
	    }
printf("POINT: 89\n");

	    if(((a87 == 15 && a148 == 13) && a35 == 33)){
printf("POINT: 90\n");
	    cf = 0;
	    //__VERIFIER_error(44);
	    }
printf("POINT: 91\n");

	    if(((a28 == 2 && a123 == 35) && a35 == 34)){
printf("POINT: 92\n");
	    cf = 0;
	    //__VERIFIER_error(45);
	    }
printf("POINT: 93\n");

	    if(((a61 == 36 && a148 == 14) && a35 == 33)){
printf("POINT: 94\n");
	    cf = 0;
	    //__VERIFIER_error(46);
	    }
printf("POINT: 95\n");

	    if(((a155 == 15 && a136 == 16) && a35 == 32)){
printf("POINT: 96\n");
	    cf = 0;
	    //__VERIFIER_error(47);
	    }
printf("POINT: 97\n");

	    if(((a87 == 16 && a148 == 13) && a35 == 33)){
printf("POINT: 98\n");
	    cf = 0;
	    //__VERIFIER_error(48);
	    }
printf("POINT: 99\n");

	    if(((a87 == 13 && a148 == 13) && a35 == 33)){
printf("POINT: 100\n");
	    cf = 0;
	    //__VERIFIER_error(49);
	    }
printf("POINT: 101\n");

	    if(((a72 == 34 && a132 == 12) && a35 == 36)){
printf("POINT: 102\n");
	    cf = 0;
	    //__VERIFIER_error(50);
	    }
printf("POINT: 103\n");

	    if(((a63 == 10 && a40 == 8) && a35 == 35)){
printf("POINT: 104\n");
	    cf = 0;
	    //__VERIFIER_error(51);
	    }
printf("POINT: 105\n");

	    if(((a80 == 8 && a132 == 8) && a35 == 36)){
printf("POINT: 106\n");
	    cf = 0;
	    //__VERIFIER_error(52);
	    }
printf("POINT: 107\n");

	    if(((a164 == 32 && a136 == 10) && a35 == 32)){
printf("POINT: 108\n");
	    cf = 0;
	    //__VERIFIER_error(53);
	    }
printf("POINT: 109\n");

	    if(((a52 == 8 && a132 == 6) && a35 == 36)){
printf("POINT: 110\n");
	    cf = 0;
	    //__VERIFIER_error(54);
	    }
printf("POINT: 111\n");

	    if(((a80 == 5 && a132 == 8) && a35 == 36)){
printf("POINT: 112\n");
	    cf = 0;
	    //__VERIFIER_error(55);
	    }
printf("POINT: 113\n");

	    if(((a70 == 4 && a148 == 11) && a35 == 33)){
printf("POINT: 114\n");
	    cf = 0;
	    //__VERIFIER_error(56);
	    }
printf("POINT: 115\n");

	    if(((a17 == 36 && a148 == 15) && a35 == 33)){
printf("POINT: 116\n");
	    cf = 0;
	    //__VERIFIER_error(57);
	    }
printf("POINT: 117\n");

	    if(((a28 == 1 && a40 == 6) && a35 == 35)){
printf("POINT: 118\n");
	    cf = 0;
	    //__VERIFIER_error(58);
	    }
printf("POINT: 119\n");

	    if(((a121 == 16 && a136 == 17) && a35 == 32)){
printf("POINT: 120\n");
	    cf = 0;
	    //__VERIFIER_error(59);
	    }
printf("POINT: 121\n");

	    if(((a168 == 34 && a123 == 34) && a35 == 34)){
printf("POINT: 122\n");
	    cf = 0;
	    //__VERIFIER_error(60);
	    }
printf("POINT: 123\n");

	    if(((a40 == 8 && a136 == 15) && a35 == 32)){
printf("POINT: 124\n");
	    cf = 0;
	    //__VERIFIER_error(61);
	    }
printf("POINT: 125\n");

	    if(((a197 == 14 && a136 == 13) && a35 == 32)){
printf("POINT: 126\n");
	    cf = 0;
	    //__VERIFIER_error(62);
	    }
printf("POINT: 127\n");

	    if(((a40 == 6 && a136 == 15) && a35 == 32)){
printf("POINT: 128\n");
	    cf = 0;
	    //__VERIFIER_error(63);
	    }
printf("POINT: 129\n");

	    if(((a83 == 8 && a148 == 9) && a35 == 33)){
printf("POINT: 130\n");
	    cf = 0;
	    //__VERIFIER_error(64);
	    }
printf("POINT: 131\n");

	    if(((a52 == 3 && a132 == 6) && a35 == 36)){
printf("POINT: 132\n");
	    cf = 0;
	    //__VERIFIER_error(65);
	    }
printf("POINT: 133\n");

	    if(((a70 == 6 && a40 == 7) && a35 == 35)){
printf("POINT: 134\n");
	    cf = 0;
	    //__VERIFIER_error(66);
	    }
printf("POINT: 135\n");

	    if(((a40 == 12 && a136 == 15) && a35 == 32)){
printf("POINT: 136\n");
	    cf = 0;
	    //__VERIFIER_error(67);
	    }
printf("POINT: 137\n");

	    if(((a83 == 13 && a148 == 9) && a35 == 33)){
printf("POINT: 138\n");
	    cf = 0;
	    //__VERIFIER_error(68);
	    }
printf("POINT: 139\n");

	    if(((a17 == 33 && a148 == 15) && a35 == 33)){
printf("POINT: 140\n");
	    cf = 0;
	    //__VERIFIER_error(69);
	    }
printf("POINT: 141\n");

	    if(((a33 == 33 && a136 == 14) && a35 == 32)){
printf("POINT: 142\n");
	    cf = 0;
	    //__VERIFIER_error(70);
	    }
printf("POINT: 143\n");

	    if(((a17 == 34 && a148 == 15) && a35 == 33)){
printf("POINT: 144\n");
	    cf = 0;
	    //__VERIFIER_error(71);
	    }
printf("POINT: 145\n");

	    if(((a33 == 36 && a136 == 14) && a35 == 32)){
printf("POINT: 146\n");
	    cf = 0;
	    //__VERIFIER_error(72);
	    }
printf("POINT: 147\n");

	    if(((a32 == 34 && a40 == 13) && a35 == 35)){
printf("POINT: 148\n");
	    cf = 0;
	    //__VERIFIER_error(73);
	    }
printf("POINT: 149\n");

	    if(((a52 == 2 && a132 == 6) && a35 == 36)){
printf("POINT: 150\n");
	    cf = 0;
	    //__VERIFIER_error(74);
	    }
printf("POINT: 151\n");

	    if(((a168 == 32 && a123 == 34) && a35 == 34)){
printf("POINT: 152\n");
	    cf = 0;
	    //__VERIFIER_error(75);
	    }
printf("POINT: 153\n");

	    if(((a155 == 16 && a136 == 16) && a35 == 32)){
printf("POINT: 154\n");
	    cf = 0;
	    //__VERIFIER_error(76);
	    }
printf("POINT: 155\n");

	    if(((a188 == 33 && a40 == 11) && a35 == 35)){
printf("POINT: 156\n");
	    cf = 0;
	    //__VERIFIER_error(77);
	    }
printf("POINT: 157\n");

	    if(((a197 == 15 && a136 == 13) && a35 == 32)){
printf("POINT: 158\n");
	    cf = 0;
	    //__VERIFIER_error(78);
	    }
printf("POINT: 159\n");

	    if(((a14 == 2 && a123 == 32) && a35 == 34)){
printf("POINT: 160\n");
	    cf = 0;
	    //__VERIFIER_error(79);
	    }
printf("POINT: 161\n");

	    if(((a155 == 11 && a136 == 16) && a35 == 32)){
printf("POINT: 162\n");
	    cf = 0;
	    //__VERIFIER_error(80);
	    }
printf("POINT: 163\n");

	    if(((a119 == 33 && a148 == 12) && a35 == 33)){
printf("POINT: 164\n");
	    cf = 0;
	    //__VERIFIER_error(81);
	    }
printf("POINT: 165\n");

	    if(((a28 == 7 && a40 == 6) && a35 == 35)){
printf("POINT: 166\n");
	    cf = 0;
	    //__VERIFIER_error(82);
	    }
printf("POINT: 167\n");

	    if(((a83 == 15 && a148 == 9) && a35 == 33)){
printf("POINT: 168\n");
	    cf = 0;
	    //__VERIFIER_error(83);
	    }
printf("POINT: 169\n");

	    if(((a164 == 35 && a136 == 10) && a35 == 32)){
printf("POINT: 170\n");
	    cf = 0;
	    //__VERIFIER_error(84);
	    }
printf("POINT: 171\n");

	    if(((a178 == 9 && a123 == 33) && a35 == 34)){
printf("POINT: 172\n");
	    cf = 0;
	    //__VERIFIER_error(85);
	    }
printf("POINT: 173\n");

	    if(((a75 == 36 && a136 == 12) && a35 == 32)){
printf("POINT: 174\n");
	    cf = 0;
	    //__VERIFIER_error(86);
	    }
printf("POINT: 175\n");

	    if(((a197 == 16 && a136 == 13) && a35 == 32)){
printf("POINT: 176\n");
	    cf = 0;
	    //__VERIFIER_error(87);
	    }
printf("POINT: 177\n");

	    if(((a55 == 7 && a148 == 16) && a35 == 33)){
printf("POINT: 178\n");
	    cf = 0;
	    //__VERIFIER_error(88);
	    }
printf("POINT: 179\n");

	    if(((a188 == 36 && a40 == 11) && a35 == 35)){
printf("POINT: 180\n");
	    cf = 0;
	    //__VERIFIER_error(89);
	    }
printf("POINT: 181\n");

	    if(((a87 == 11 && a148 == 13) && a35 == 33)){
printf("POINT: 182\n");
	    cf = 0;
	    //__VERIFIER_error(90);
	    }
printf("POINT: 183\n");

	    if(((a178 == 10 && a123 == 33) && a35 == 34)){
printf("POINT: 184\n");
	    cf = 0;
	    //__VERIFIER_error(91);
	    }
printf("POINT: 185\n");

	    if(((a179 == 36 && a132 == 5) && a35 == 36)){
printf("POINT: 186\n");
	    cf = 0;
	    //__VERIFIER_error(92);
	    }
printf("POINT: 187\n");

	    if(((a168 == 33 && a123 == 34) && a35 == 34)){
printf("POINT: 188\n");
	    cf = 0;
	    //__VERIFIER_error(93);
	    }
printf("POINT: 189\n");

	    if(((a80 == 3 && a132 == 8) && a35 == 36)){
printf("POINT: 190\n");
	    cf = 0;
	    //__VERIFIER_error(94);
	    }
printf("POINT: 191\n");

	    if(((a49 == 32 && a123 == 36) && a35 == 34)){
printf("POINT: 192\n");
	    cf = 0;
	    //__VERIFIER_error(95);
	    }
printf("POINT: 193\n");

	    if(((a33 == 32 && a136 == 14) && a35 == 32)){
printf("POINT: 194\n");
	    cf = 0;
	    //__VERIFIER_error(96);
	    }
printf("POINT: 195\n");

	    if(((a28 == 4 && a123 == 35) && a35 == 34)){
printf("POINT: 196\n");
	    cf = 0;
	    //__VERIFIER_error(97);
	    }
printf("POINT: 197\n");

	    if(((a14 == 5 && a123 == 32) && a35 == 34)){
printf("POINT: 198\n");
	    cf = 0;
	    //__VERIFIER_error(98);
	    }
printf("POINT: 199\n");

	    if(((a178 == 11 && a123 == 33) && a35 == 34)){
printf("POINT: 200\n");
	    cf = 0;
	    //__VERIFIER_error(99);
	    }
	}
 void calculate_outputm40(int input) {
printf("POINT: 201\n");

    if(((a3 == 1 && (a120 == 33 && a159 == 33)) && (a3 == 1 && ((( cf==1  && (input == 5)) && a101 == 3) && a34 == 33)))) {
printf("POINT: 202\n");
printf("POINT: 203\n");

	if((a73 + 20) > a73){
printf("POINT: 204\n");
	a73  +=  2 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a167 = 2;
    	a53 = 7;
    	a92 = 6;
    	a1 = 33 ;
    	a120 = 33 ;
    	a24 = 33 ;
    	a76 = 7;
    	a174 = 3;
    	a31 = 3;
    	a65 = 34 ;
    	a118 = 33 ;
    	a189 = 10;
    	a71 = 2;
    	a141 = 33 ;
    	a168 = 35 ;
    	a190 = 8;
    	a169 = 12;
    	a18 = 6;
    	a34 = 34 ;
    	a3 = 1;
    	a57 = 10;
    	a109 = 34 ;
    	a35 = 34 ;
    	a159 = 34 ;
    	a123 = 34 ;
    	a79 = 34 ;
    	a69 = 33 ;
    	a111 = 2;
    	a135 = 34 ;
    	a13 = 33 ;
    	a25 = 34 ;
    	a48 = 34 ;
    	a101 = 5; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 205\n");

    if(((((a3 == 1 && (a13 == 33 && ( cf==1  && (input == 1)))) && a118 == 33) && a159 == 33) && (a31 == 1 && a65 == 33))) {
printf("POINT: 206\n");
printf("POINT: 207\n");

	if((a195 - 20) < a195){
printf("POINT: 208\n");
	a195  -=  2 ;}
	 else{	
	a195  -=  0;}
printf("POINT: 209\n");

	if((a58 - 20) < a58){
printf("POINT: 210\n");
	a58  -=  1 ;}
	 else{	
	a58  -=  0;}
    	cf = 0;
    	a76 = 7;
    	a24 = 33 ;
    	a135 = 33 ;
    	a79 = 33 ;
    	a71 = 2;
    	a159 = 32 ;
    	a48 = 33 ;
    	a119 = 32 ;
    	a118 = 32 ;
    	a167 = 2;
    	a148 = 12; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 211\n");

    if((((a120 == 33 && (((input == 4) &&  cf==1 ) && a25 == 33)) && (a189 == 10 && (a69 == 33 && (a69 == 33 && a111 == 2)))) && a195 <= -29)) {
printf("POINT: 212\n");
printf("POINT: 213\n");

	if((a171 - 20) < a171){
printf("POINT: 214\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a189 = 11;
    	a101 = 4;
    	a118 = 32 ;
    	a35 = 32 ;
    	a190 = 7;
    	a174 = 2;
    	a141 = 32 ;
    	a164 = 32 ;
    	a169 = 11;
    	a111 = 3;
    	a92 = 5;
    	a136 = 10; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 215\n");

    if(((((a34 == 33 && a118 == 33) && a34 == 33) && (a57 == 8 && (a76 == 5 && (a13 == 33 && ( cf==1  && (input == 3)))))) && a146 == 2582)) {
printf("POINT: 216\n");
printf("POINT: 217\n");

	if((a95 - 20) < a95){
printf("POINT: 218\n");
	a95  -=  2 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a40 = 9;
    	a106 = 8; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 219\n");

    if(((a3 == 1 && ((( cf==1  && (input == 2)) && a189 == 10) && a92 == 4)) && ((a18 == 4 && a18 == 4) && a65 == 33))) {
printf("POINT: 220\n");
printf("POINT: 221\n");

	if((a19 + 20) > a19){
printf("POINT: 222\n");
	a19  +=  2 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 223\n");

	if((a58 + 20) > a58){
printf("POINT: 224\n");
	a58  +=  2 ;}
	 else{	
	a58  +=  0;}
printf("POINT: 225\n");

	if((a98 - 20) < a98){
printf("POINT: 226\n");
	a98  -=  4 ;}
	 else{	
	a98  -=  0;}
printf("POINT: 227\n");

	if((a78 - 20) < a78){
printf("POINT: 228\n");
	a78  -=  4 ;}
	 else{	
	a78  -=  0;}
printf("POINT: 229\n");

	if((a195 + 20) > a195){
printf("POINT: 230\n");
	a195  +=  2 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a69 = 34 ;
    	a48 = 33 ;
    	a120 = 34 ;
    	a92 = 4;
    	a65 = 34 ;
    	a148 = 16;
    	a189 = 10;
    	a13 = 34 ;
    	a159 = 33 ;
    	a24 = 33 ;
    	a167 = 4;
    	a3 = 3;
    	a169 = 12;
    	a79 = 34 ;
    	a135 = 33 ;
    	a57 = 10;
    	a1 = 33 ;
    	a55 = 5; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm1(int input) {
printf("POINT: 231\n");

    if(((a190 == 6 && ((a13 == 33 && (a120 == 33 && (( cf==1  && a83 == 14) && a71 == 2))) && a71 == 2)) && a101 == 3)) {
printf("POINT: 232\n");
    	calculate_outputm40(input);
    } 
}
 void calculate_outputm42(int input) {
printf("POINT: 233\n");

    if(((a141 == 33 && (( cf==1  && (input == 3)) && a1 == 33)) && (a31 == 1 && ((a190 == 6 && a159 == 33) && a18 == 4)))) {
printf("POINT: 234\n");
printf("POINT: 235\n");

	if((a95 - 20) < a95){
printf("POINT: 236\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a57 = 10;
    	a190 = 8;
    	a48 = 34 ;
    	a79 = 34 ;
    	a92 = 6;
    	a65 = 34 ;
    	a101 = 5;
    	a123 = 34 ;
    	a135 = 34 ;
    	a31 = 3;
    	a168 = 32 ;
    	a109 = 34 ;
    	a35 = 34 ;
    	a174 = 3; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 237\n");

    if(((a109 == 33 && a65 == 33) && ((a48 == 33 && (a79 == 33 && (( cf==1  && (input == 1)) && a135 == 33))) && a1 == 33))) {
printf("POINT: 238\n");
printf("POINT: 239\n");

	if((a134 + 20) > a134){
printf("POINT: 240\n");
	a134  +=  2 ;}
	 else{	
	a134  +=  0;}
printf("POINT: 241\n");

	if((a130 + 20) > a130){
printf("POINT: 242\n");
	a130  +=  4 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 243\n");

	if((a182 + 20) > a182){
printf("POINT: 244\n");
	a182  +=  2 ;}
	 else{	
	a182  +=  0;}
printf("POINT: 245\n");

	if((a47 - 20) < a47){
printf("POINT: 246\n");
	a47  -=  2 ;}
	 else{	
	a47  -=  0;}
printf("POINT: 247\n");

	if((a5 + 20) > a5){
printf("POINT: 248\n");
	a5  +=  2 ;}
	 else{	
	a5  +=  0;}
    	cf = 0;
    	a57 = 9;
    	a35 = 36 ;
    	a1 = 32 ;
    	a111 = 3;
    	a101 = 4;
    	a18 = 5;
    	a48 = 32 ;
    	a13 = 32 ;
    	a92 = 5;
    	a159 = 32 ;
    	a174 = 2;
    	a65 = 32 ;
    	a34 = 32 ;
    	a69 = 32 ;
    	a53 = 8;
    	a169 = 11;
    	a76 = 6;
    	a72 = 36 ;
    	a31 = 2;
    	a190 = 7;
    	a109 = 32 ;
    	a141 = 32 ;
    	a25 = 32 ;
    	a79 = 32 ;
    	a135 = 32 ;
    	a120 = 32 ;
    	a167 = 3;
    	a24 = 32 ;
    	a3 = 2;
    	a132 = 12; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 249\n");

    if((((a79 == 33 && ( cf==1  && (input == 4))) && a111 == 2) && ((a31 == 1 && (a3 == 1 && a31 == 1)) && a13 == 33))) {
printf("POINT: 250\n");
    	cf = 0;
    	a53 = 7;
    	a25 = 33 ;
    	a79 = 34 ;
    	a65 = 32 ;
    	a118 = 33 ;
    	a109 = 34 ;
    	a34 = 34 ;
    	a189 = 10;
    	a3 = 2;
    	a148 = 16;
    	a76 = 5;
    	a69 = 33 ;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 251\n");

    if(((a167 == 2 && (((input == 5) &&  cf==1 ) && a101 == 3)) && ((a174 == 1 && (a57 == 8 && a24 == 33)) && a92 == 4))) {
printf("POINT: 252\n");
printf("POINT: 253\n");

	if((a73 + 20) > a73){
printf("POINT: 254\n");
	a73  +=  1 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a71 = 4;
    	a190 = 8;
    	a118 = 34 ;
    	a24 = 34 ;
    	a174 = 3;
    	a65 = 34 ;
    	a79 = 34 ;
    	a1 = 32 ;
    	a92 = 5;
    	a167 = 4;
    	a109 = 34 ;
    	a13 = 34 ;
    	a120 = 34 ;
    	a101 = 5;
    	a40 = 12;
    	a111 = 4;
    	a18 = 6;
    	a35 = 35 ;
    	a31 = 3;
    	a3 = 3;
    	a57 = 10;
    	a141 = 34 ;
    	a159 = 34 ;
    	a135 = 34 ;
    	a169 = 12;
    	a34 = 34 ;
    	a48 = 34 ;
    	a122 = 13; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm43(int input) {
printf("POINT: 255\n");

    if(((a118 == 33 && a13 == 33) && (a101 == 3 && ((a189 == 10 && (a135 == 33 && ((input == 1) &&  cf==1 ))) && a57 == 8)))) {
printf("POINT: 256\n");
    	cf = 0;
    	a141 = 32 ;
    	a118 = 32 ;
    	a35 = 36 ;
    	a109 = 32 ;
    	a57 = 9;
    	a30 = 33 ;
    	a167 = 3;
    	a189 = 12;
    	a101 = 4;
    	a190 = 8;
    	a79 = 32 ;
    	a13 = 32 ;
    	a135 = 32 ;
    	a18 = 5;
    	a76 = 7;
    	a174 = 2;
    	a34 = 32 ;
    	a169 = 11;
    	a111 = 3;
    	a31 = 2;
    	a132 = 7; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm45(int input) {
printf("POINT: 257\n");

    if(((a69 == 33 && (((input == 4) &&  cf==1 ) && a65 == 33)) && (((a189 == 10 && a65 == 33) && a31 == 1) && a76 == 5))) {
printf("POINT: 258\n");
printf("POINT: 259\n");

	if((a73 - 20) < a73){
printf("POINT: 260\n");
	a73  -=  1 ;}
	 else{	
	a73  -=  0;}
printf("POINT: 261\n");

	if((a153 + 20) > a153){
printf("POINT: 262\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 263\n");

	if((a107 - 20) < a107){
printf("POINT: 264\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 265\n");

	if((a10 + 20) > a10){
printf("POINT: 266\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 267\n");

	if((a11 + 20) > a11){
printf("POINT: 268\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a167 = 4;
    	a65 = 33 ;
    	a17 = 32 ;
    	a92 = 6;
    	a53 = 13;
    	a71 = 7;
    	a109 = 35 ;
    	a1 = 34 ;
    	a101 = 3;
    	a118 = 32 ;
    	a148 = 15; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 269\n");

    if((((a13 == 33 && a174 == 1) && a190 == 6) && (a25 == 33 && (a101 == 3 && (( cf==1  && (input == 3)) && a76 == 5))))) {
printf("POINT: 270\n");
printf("POINT: 271\n");

	if((a19 + 20) > a19){
printf("POINT: 272\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 273\n");

	if((a7 + 20) > a7){
printf("POINT: 274\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 275\n");

	if((a146 - 20) < a146){
printf("POINT: 276\n");
	a146  -=  3 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 277\n");

	if((a153 + 20) > a153){
printf("POINT: 278\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 279\n");

	if((a107 + 20) > a107){
printf("POINT: 280\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 281\n");

	if((a127 + 20) > a127){
printf("POINT: 282\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 283\n");

	if((a165 - 20) < a165){
printf("POINT: 284\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a136 = 15;
    	a40 = 12; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 285\n");

    if(((a169 == 10 && (a167 == 2 && ((input == 1) &&  cf==1 ))) && (a189 == 10 && ((a92 == 4 && a13 == 33) && a189 == 10)))) {
printf("POINT: 286\n");
printf("POINT: 287\n");

	if((a19 + 20) > a19){
printf("POINT: 288\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 289\n");

	if((a130 + 20) > a130){
printf("POINT: 290\n");
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 291\n");

	if((a107 + 20) > a107){
printf("POINT: 292\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 293\n");

	if((a10 + 20) > a10){
printf("POINT: 294\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 295\n");

	if((a165 + 20) > a165){
printf("POINT: 296\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a33 = 33 ;
    	a35 = 32 ;
    	a136 = 14; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 297\n");

    if(((a18 == 4 && ((a48 == 33 && a92 == 4) && a120 == 33)) && (a53 == 7 && (( cf==1  && (input == 5)) && a76 == 5)))) {
printf("POINT: 298\n");
printf("POINT: 299\n");

	if((a19 + 20) > a19){
printf("POINT: 300\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 301\n");

	if((a73 - 20) < a73){
printf("POINT: 302\n");
	a73  -=  2 ;}
	 else{	
	a73  -=  0;}
printf("POINT: 303\n");

	if((a127 + 20) > a127){
printf("POINT: 304\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 305\n");

	if((a10 + 20) > a10){
printf("POINT: 306\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a71 = 9;
    	a57 = 10;
    	a92 = 7;
    	a69 = 35 ;
    	a35 = 32 ;
    	a190 = 9;
    	a34 = 36 ;
    	a13 = 33 ;
    	a135 = 34 ;
    	a136 = 13;
    	a174 = 4;
    	a25 = 34 ;
    	a109 = 36 ;
    	a53 = 12;
    	a120 = 33 ;
    	a189 = 13;
    	a1 = 33 ;
    	a169 = 12;
    	a18 = 11;
    	a48 = 35 ;
    	a167 = 2;
    	a159 = 36 ;
    	a101 = 5;
    	a76 = 12;
    	a111 = 8;
    	a141 = 34 ;
    	a24 = 34 ;
    	a31 = 6;
    	a79 = 36 ;
    	a118 = 36 ;
    	a65 = 33 ;
    	a3 = 8;
    	a197 = 13; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 307\n");

    if(((a25 == 33 && (a57 == 8 && ((( cf==1  && (input == 2)) && a25 == 33) && a65 == 33))) && (a48 == 33 && a169 == 10))) {
printf("POINT: 308\n");
printf("POINT: 309\n");

	if((a19 + 20) > a19){
printf("POINT: 310\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 311\n");

	if((a105 - 20) < a105){
printf("POINT: 312\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
printf("POINT: 313\n");

	if((a130 - 20) < a130){
printf("POINT: 314\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 315\n");

	if((a153 + 20) > a153){
printf("POINT: 316\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 317\n");

	if((a127 + 20) > a127){
printf("POINT: 318\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 319\n");

	if((a10 + 20) > a10){
printf("POINT: 320\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a148 = 16;
    	a55 = 7; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm2(int input) {
printf("POINT: 321\n");

    if(((a174 == 1 && (a159 == 33 && (a159 == 33 && (a92 == 4 && a1 == 33)))) && (( cf==1  && a38 == 33) && a120 == 33))) {
printf("POINT: 322\n");
    	calculate_outputm42(input);
    } 
printf("POINT: 323\n");

    if((((a34 == 33 && (a76 == 5 && a141 == 33)) && a18 == 4) && ((a135 == 33 && (a38 == 32 &&  cf==1 )) && a79 == 33))) {
printf("POINT: 324\n");
    	calculate_outputm43(input);
    } 
printf("POINT: 325\n");

    if((((( cf==1  && a38 == 36) && a111 == 2) && a25 == 33) && (a141 == 33 && (a118 == 33 && (a109 == 33 && a1 == 33))))) {
printf("POINT: 326\n");
    	calculate_outputm45(input);
    } 
}
 void calculate_outputm47(int input) {
printf("POINT: 327\n");

    if(((a189 == 10 && (a71 == 2 && a71 == 2)) && (((a174 == 1 && ((input == 1) &&  cf==1 )) && a25 == 33) && a109 == 33))) {
printf("POINT: 328\n");
printf("POINT: 329\n");

	if((a105 + 20) > a105){
printf("POINT: 330\n");
	a105  +=  2 ;}
	 else{	
	a105  +=  0;}
printf("POINT: 331\n");

	if((a73 - 20) < a73){
printf("POINT: 332\n");
	a73  -=  2 ;}
	 else{	
	a73  -=  0;}
printf("POINT: 333\n");

	if((a153 + 20) > a153){
printf("POINT: 334\n");
	a153  +=  2 ;}
	 else{	
	a153  +=  0;}
    	cf = 0;
    	a109 = 34 ;
    	a148 = 16;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm48(int input) {
printf("POINT: 335\n");

    if((((( cf==1  && (input == 5)) && a71 == 2) && a118 == 33) && (a101 == 3 && ((a79 == 33 && a111 == 2) && a24 == 33)))) {
printf("POINT: 336\n");
printf("POINT: 337\n");

	if((a19 + 20) > a19){
printf("POINT: 338\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 339\n");

	if((a7 + 20) > a7){
printf("POINT: 340\n");
	a7  +=  1 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 341\n");

	if((a130 - 20) < a130){
printf("POINT: 342\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 343\n");

	if((a153 + 20) > a153){
printf("POINT: 344\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 345\n");

	if((a107 - 20) < a107){
printf("POINT: 346\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 347\n");

	if((a10 + 20) > a10){
printf("POINT: 348\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 349\n");

	if((a165 - 20) < a165){
printf("POINT: 350\n");
	a165  -=  3 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a40 = 6;
    	a35 = 35 ;
    	a28 = 5; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 351\n");

    if(((a34 == 33 && (((input == 1) &&  cf==1 ) && a79 == 33)) && (a31 == 1 && ((a189 == 10 && a34 == 33) && a25 == 33)))) {
printf("POINT: 352\n");
printf("POINT: 353\n");

	if((a19 + 20) > a19){
printf("POINT: 354\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 355\n");

	if((a7 + 20) > a7){
printf("POINT: 356\n");
	a7  +=  2 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 357\n");

	if((a130 - 20) < a130){
printf("POINT: 358\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 359\n");

	if((a153 + 20) > a153){
printf("POINT: 360\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 361\n");

	if((a107 + 20) > a107){
printf("POINT: 362\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 363\n");

	if((a10 + 20) > a10){
printf("POINT: 364\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
printf("POINT: 365\n");

    	if((a174 == 5 && a100 == 35)) {
printf("POINT: 366\n");
    	a120 = 34 ;
    	a48 = 36 ;
    	a24 = 35 ;
    	a92 = 9;
    	a167 = 5;
    	a69 = 35 ;
    	a57 = 11;
    	a159 = 35 ;
    	a31 = 5;
    	a109 = 33 ;
    	a111 = 2;
    	a18 = 9;
    	a118 = 35 ;
    	a189 = 17;
    	a79 = 36 ;
    	a72 = 36 ;
    	a190 = 6;
    	a13 = 34 ;
    	a141 = 35 ;
    	a35 = 36 ;
    	a101 = 5;
    	a25 = 34 ;
    	a169 = 10;
    	a174 = 8;
    	a34 = 33 ;
    	a3 = 3;
    	a132 = 12; 
    	}else {
printf("POINT: 368\n");
    	a148 = 9;
    	a83 = 13;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 369\n");

    if((((a159 == 33 && a111 == 2) && a71 == 2) && (a3 == 1 && ((a18 == 4 && ( cf==1  && (input == 2))) && a190 == 6)))) {
printf("POINT: 370\n");
printf("POINT: 371\n");

	if((a176 + 20) > a176){
printf("POINT: 372\n");
	a176  +=  2 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 373\n");

	if((a19 + 20) > a19){
printf("POINT: 374\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 375\n");

	if((a153 + 20) > a153){
printf("POINT: 376\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 377\n");

	if((a47 + 20) > a47){
printf("POINT: 378\n");
	a47  +=  4 ;}
	 else{	
	a47  +=  0;}
printf("POINT: 379\n");

	if((a6 + 20) > a6){
printf("POINT: 380\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 381\n");

    	if((!(a53 == 7) || ((a48 == 32 && a71 == 4) && a25 == 33))) {
printf("POINT: 382\n");
    	a189 = 12;
    	a101 = 10;
    	a57 = 12;
    	a174 = 4;
    	a169 = 17;
    	a48 = 33 ;
    	a3 = 5;
    	a109 = 33 ;
    	a25 = 35 ;
    	a13 = 36 ;
    	a35 = 32 ;
    	a167 = 8;
    	a79 = 33 ;
    	a18 = 7;
    	a71 = 6;
    	a159 = 34 ;
    	a24 = 35 ;
    	a92 = 4;
    	a118 = 35 ;
    	a120 = 36 ;
    	a69 = 35 ;
    	a141 = 33 ;
    	a190 = 11;
    	a136 = 16;
    	a155 = 10; 
    	}else {
printf("POINT: 384\n");
    	a111 = 5;
    	a35 = 32 ;
    	a48 = 36 ;
    	a79 = 35 ;
    	a3 = 6;
    	a174 = 7;
    	a167 = 6;
    	a92 = 9;
    	a159 = 36 ;
    	a190 = 13;
    	a24 = 36 ;
    	a169 = 16;
    	a164 = 35 ;
    	a141 = 34 ;
    	a25 = 33 ;
    	a101 = 3;
    	a136 = 10;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 385\n");

    if((((((input == 4) &&  cf==1 ) && a57 == 8) && a24 == 33) && (a48 == 33 && (a167 == 2 && (a31 == 1 && a169 == 10))))) {
printf("POINT: 386\n");
printf("POINT: 387\n");

	if((a176 + 20) > a176){
printf("POINT: 388\n");
	a176  +=  3 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 389\n");

	if((a19 + 20) > a19){
printf("POINT: 390\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 391\n");

	if((a107 - 20) < a107){
printf("POINT: 392\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 393\n");

	if((a127 + 20) > a127){
printf("POINT: 394\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 395\n");

	if((a165 - 20) < a165){
printf("POINT: 396\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 397\n");

	if((a6 + 20) > a6){
printf("POINT: 398\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
printf("POINT: 399\n");

	if((a11 + 20) > a11){
printf("POINT: 400\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 401\n");

    	if((!(a155 == 13) && ((!(a14 == 2) && a52 == 2) ||  cf==1 ))) {
printf("POINT: 402\n");
    	a33 = 36 ;
    	a35 = 32 ;
    	a136 = 14; 
    	}else {
printf("POINT: 404\n");
    	a169 = 13;
    	a118 = 35 ;
    	a189 = 10;
    	a3 = 1;
    	a141 = 33 ;
    	a71 = 7;
    	a167 = 7;
    	a111 = 5;
    	a109 = 33 ;
    	a18 = 8;
    	a174 = 5;
    	a69 = 33 ;
    	a190 = 13;
    	a120 = 35 ;
    	a101 = 7;
    	a159 = 33 ;
    	a48 = 35 ;
    	a57 = 14;
    	a24 = 34 ;
    	a34 = 36 ;
    	a25 = 34 ;
    	a79 = 33 ;
    	a13 = 33 ;
    	a31 = 3;
    	a92 = 9;
    	a72 = 35 ;
    	a35 = 36 ;
    	a132 = 12;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 405\n");

    if((((a92 == 4 && (a167 == 2 && (a109 == 33 && a111 == 2))) && a101 == 3) && (a3 == 1 && ((input == 3) &&  cf==1 )))) {
printf("POINT: 406\n");
printf("POINT: 407\n");

	if((a19 + 20) > a19){
printf("POINT: 408\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 409\n");

	if((a153 + 20) > a153){
printf("POINT: 410\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 411\n");

	if((a107 + 20) > a107){
printf("POINT: 412\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 413\n");

	if((a127 + 20) > a127){
printf("POINT: 414\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 415\n");

	if((a10 + 20) > a10){
printf("POINT: 416\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 417\n");

	if((a165 + 20) > a165){
printf("POINT: 418\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 419\n");

	if((a6 + 20) > a6){
printf("POINT: 420\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a148 = 13;
    	a87 = 16; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm49(int input) {
printf("POINT: 421\n");

    if((((a167 == 2 && (a167 == 2 && (a25 == 33 && a34 == 33))) && a53 == 7) && (( cf==1  && (input == 1)) && a109 == 33))) {
printf("POINT: 422\n");
printf("POINT: 423\n");

	if((a171 - 20) < a171){
printf("POINT: 424\n");
	a171  -=  1 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a79 = 34 ;
    	a76 = 6;
    	a48 = 34 ;
    	a120 = 34 ;
    	a53 = 9;
    	a123 = 32 ;
    	a3 = 2;
    	a169 = 12;
    	a1 = 34 ;
    	a57 = 10;
    	a65 = 34 ;
    	a25 = 34 ;
    	a35 = 34 ;
    	a24 = 34 ;
    	a174 = 3;
    	a109 = 34 ;
    	a13 = 34 ;
    	a190 = 8;
    	a92 = 6;
    	a69 = 34 ;
    	a31 = 3;
    	a111 = 4;
    	a141 = 34 ;
    	a189 = 12;
    	a18 = 6;
    	a167 = 4;
    	a34 = 34 ;
    	a135 = 34 ;
    	a14 = 4; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 425\n");

    if(((a1 == 33 && (a135 == 33 && ((input == 4) &&  cf==1 ))) && (a13 == 33 && (a25 == 33 && (a76 == 5 && a1 == 33))))) {
printf("POINT: 426\n");
printf("POINT: 427\n");

	if((a105 - 20) < a105){
printf("POINT: 428\n");
	a105  -=  1 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a13 = 32 ;
    	a69 = 32 ;
    	a92 = 6;
    	a48 = 32 ;
    	a132 = 9;
    	a109 = 34 ;
    	a135 = 32 ;
    	a25 = 32 ;
    	a159 = 32 ;
    	a167 = 3;
    	a57 = 9;
    	a118 = 32 ;
    	a111 = 3;
    	a190 = 7;
    	a141 = 32 ;
    	a31 = 2;
    	a53 = 8;
    	a174 = 2;
    	a34 = 32 ;
    	a76 = 6;
    	a1 = 32 ;
    	a101 = 4;
    	a120 = 32 ;
    	a18 = 5;
    	a79 = 32 ;
    	a35 = 36 ;
    	a189 = 11;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 429\n");

    if(((a31 == 1 && (a57 == 8 && ( cf==1  && (input == 5)))) && (a69 == 33 && (a79 == 33 && (a120 == 33 && a174 == 1))))) {
printf("POINT: 430\n");
printf("POINT: 431\n");

	if((a151 + 20) > a151){
printf("POINT: 432\n");
	a151  +=  4 ;}
	 else{	
	a151  +=  0;}
    	cf = 0;
    	a189 = 12;
    	a135 = 34 ;
    	a69 = 32 ;
    	a48 = 34 ;
    	a1 = 34 ;
    	a13 = 32 ;
    	a190 = 7;
    	a18 = 6;
    	a31 = 3;
    	a174 = 3;
    	a79 = 34 ;
    	a141 = 32 ;
    	a35 = 34 ;
    	a167 = 3;
    	a25 = 34 ;
    	a53 = 9;
    	a123 = 33 ;
    	a120 = 32 ;
    	a92 = 6;
    	a178 = 7; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm3(int input) {
printf("POINT: 433\n");

    if(((a135 == 33 && (a92 == 4 && a1 == 33)) && (((a25 == 33 && ( cf==1  && a70 == 6)) && a71 == 2) && a25 == 33))) {
printf("POINT: 434\n");
    	calculate_outputm47(input);
    } 
printf("POINT: 435\n");

    if((((a169 == 10 && (a31 == 1 && (a24 == 33 && (a24 == 33 && a71 == 2)))) && a69 == 33) && (a70 == 8 &&  cf==1 ))) {
printf("POINT: 436\n");
    	calculate_outputm48(input);
    } 
printf("POINT: 437\n");

    if(((((a48 == 33 && a92 == 4) && a1 == 33) && a34 == 33) && (a79 == 33 && ((a70 == 10 &&  cf==1 ) && a189 == 10)))) {
printf("POINT: 438\n");
    	calculate_outputm49(input);
    } 
}
 void calculate_outputm51(int input) {
printf("POINT: 439\n");

    if(((((( cf==1  && (input == 1)) && a65 == 33) && a189 == 10) && ((a31 == 1 && (a167 == 2 && a174 == 1)) && a120 == 33)) && (a6 % 2==0))) {
printf("POINT: 440\n");
printf("POINT: 441\n");

	if((a7 - 20) < a7){
printf("POINT: 442\n");
	a7  -=  2 ;}
	 else{	
	a7  -=  0;}
    	cf = 0;
    	a132 = 6;
    	a35 = 36 ;
    	a52 = 2; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 443\n");

    if((((a167 == 2 && ((a34 == 33 && ( cf==1  && (input == 4))) && a120 == 33)) && a69 == 33) && (a18 == 4 && a34 == 33))) {
printf("POINT: 444\n");
printf("POINT: 445\n");

	if((a95 + 20) > a95){
printf("POINT: 446\n");
	a95  +=  2 ;}
	 else{	
	a95  +=  0;}
printf("POINT: 447\n");

	if((a89 + 20) > a89){
printf("POINT: 448\n");
	a89  +=  2 ;}
	 else{	
	a89  +=  0;}
printf("POINT: 449\n");

	if((a6 + 20) > a6){
printf("POINT: 450\n");
	a6  +=  2 ;}
	 else{	
	a6  +=  0;}
printf("POINT: 451\n");

	if((a91 + 20) > a91){
printf("POINT: 452\n");
	a91  +=  3 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a31 = 2;
    	a13 = 32 ;
    	a174 = 2;
    	a24 = 32 ;
    	a53 = 8;
    	a18 = 5;
    	a3 = 2;
    	a34 = 32 ;
    	a57 = 9;
    	a69 = 34 ;
    	a35 = 36 ;
    	a48 = 32 ;
    	a111 = 3;
    	a167 = 3;
    	a141 = 32 ;
    	a190 = 8;
    	a65 = 32 ;
    	a109 = 32 ;
    	a79 = 32 ;
    	a169 = 11;
    	a101 = 4;
    	a92 = 6;
    	a25 = 32 ;
    	a120 = 32 ;
    	a135 = 32 ;
    	a189 = 12;
    	a30 = 33 ;
    	a132 = 7; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 453\n");

    if((((a65 == 33 && ((( cf==1  && (input == 2)) && a141 == 33) && a101 == 3)) && ((a174 == 1 && a189 == 10) && a79 == 33)) && a5 >= 3)) {
printf("POINT: 454\n");
printf("POINT: 455\n");

	if((a134 - 20) < a134){
printf("POINT: 456\n");
	a134  -=  2 ;}
	 else{	
	a134  -=  0;}
    	cf = 0;
    	a38 = 35 ;
    	a148 = 10; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 457\n");

    if((((a109 == 33 && (a189 == 10 && (a48 == 33 && (a24 == 33 && (a34 == 33 && a24 == 33))))) && ((input == 3) &&  cf==1 )) && (a11 % 2==0))) {
printf("POINT: 458\n");
printf("POINT: 459\n");

	if((a95 - 20) < a95){
printf("POINT: 460\n");
	a95  -=  2 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a123 = 33 ;
    	a35 = 34 ;
    	a178 = 6; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 461\n");

    if((((a31 == 1 && ((( cf==1  && (input == 5)) && a48 == 33) && a57 == 8)) && (a174 == 1 && (a57 == 8 && a141 == 33))) && a78 <= -13)) {
printf("POINT: 462\n");
    	cf = 0;
    	a141 = 32 ;
    	a189 = 11;
    	a174 = 2;
    	a25 = 32 ;
    	a48 = 32 ;
    	a167 = 3;
    	a190 = 7;
    	a101 = 4;
    	a92 = 5;
    	a57 = 9;
    	a35 = 32 ;
    	a169 = 11;
    	a53 = 8;
    	a136 = 17;
    	a121 = 16; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm4(int input) {
printf("POINT: 463\n");

    if(((a53 == 7 && (a92 == 4 && a174 == 1)) && ((a174 == 1 && (a109 == 33 && (a119 == 32 &&  cf==1 ))) && a24 == 33))) {
printf("POINT: 464\n");
    	calculate_outputm51(input);
    } 
}
 void calculate_outputm57(int input) {
printf("POINT: 465\n");

    if(((a189 == 10 && (((((input == 1) &&  cf==1 ) && a111 == 2) && a118 == 33) && a92 == 4)) && (a18 == 4 && a57 == 8))) {
printf("POINT: 466\n");
printf("POINT: 467\n");

	if((a105 + 20) > a105){
printf("POINT: 468\n");
	a105  +=  2 ;}
	 else{	
	a105  +=  0;}
printf("POINT: 469\n");

	if((a73 - 20) < a73){
printf("POINT: 470\n");
	a73  -=  2 ;}
	 else{	
	a73  -=  0;}
printf("POINT: 471\n");

	if((a153 + 20) > a153){
printf("POINT: 472\n");
	a153  +=  2 ;}
	 else{	
	a153  +=  0;}
    	cf = 0;
    	a148 = 16;
    	a79 = 34 ;
    	a3 = 2;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm5(int input) {
printf("POINT: 473\n");

    if(((((a79 == 33 && ((a87 == 14 &&  cf==1 ) && a92 == 4)) && a3 == 1) && a1 == 33) && (a159 == 33 && a79 == 33))) {
printf("POINT: 474\n");
    	calculate_outputm57(input);
    } 
}
 void calculate_outputm60(int input) {
printf("POINT: 475\n");

    if(((a53 == 7 && (a190 == 6 && a57 == 8)) && (a120 == 33 && (a189 == 10 && (((input == 1) &&  cf==1 ) && a159 == 33))))) {
printf("POINT: 476\n");
printf("POINT: 477\n");

	if((a195 - 20) < a195){
printf("POINT: 478\n");
	a195  -=  2 ;}
	 else{	
	a195  -=  0;}
    	cf = 0;
printf("POINT: 479\n");

    	if((!(a63 == 7) && (((a169 == 17 || !(a69 == 33)) || a132 == 10) && !(a61 == 35)))) {
printf("POINT: 480\n");
    	a48 = 33 ;
    	a169 = 10;
    	a119 = 32 ;
    	a159 = 32 ;
    	a76 = 7;
    	a71 = 2;
    	a118 = 32 ;
    	a135 = 33 ;
    	a1 = 32 ;
    	a148 = 12; 
    	}else {
printf("POINT: 482\n");
    	a34 = 34 ;
    	a123 = 35 ;
    	a109 = 34 ;
    	a76 = 7;
    	a71 = 4;
    	a65 = 34 ;
    	a189 = 11;
    	a167 = 4;
    	a135 = 34 ;
    	a31 = 3;
    	a111 = 4;
    	a159 = 34 ;
    	a69 = 34 ;
    	a174 = 3;
    	a1 = 34 ;
    	a190 = 8;
    	a101 = 5;
    	a92 = 6;
    	a53 = 9;
    	a141 = 34 ;
    	a25 = 34 ;
    	a48 = 34 ;
    	a169 = 12;
    	a24 = 34 ;
    	a18 = 6;
    	a118 = 32 ;
    	a120 = 34 ;
    	a35 = 34 ;
    	a79 = 34 ;
    	a28 = 3;
    	}printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 483\n");

    if(((a141 == 33 && a69 == 33) && ((a18 == 4 && (a101 == 3 && (((input == 5) &&  cf==1 ) && a1 == 33))) && a31 == 1))) {
printf("POINT: 484\n");
printf("POINT: 485\n");

	if((a58 - 20) < a58){
printf("POINT: 486\n");
	a58  -=  1 ;}
	 else{	
	a58  -=  0;}
    	cf = 0;
    	a101 = 5;
    	a169 = 12;
    	a53 = 7;
    	a71 = 2;
    	a3 = 1;
    	a92 = 6;
    	a31 = 3;
    	a174 = 3;
    	a69 = 33 ;
    	a65 = 34 ;
    	a34 = 34 ;
    	a25 = 34 ;
    	a111 = 2;
    	a57 = 10;
    	a13 = 33 ;
    	a48 = 34 ;
    	a79 = 34 ;
    	a190 = 8;
    	a18 = 6;
    	a168 = 35 ;
    	a135 = 34 ;
    	a167 = 2;
    	a189 = 10;
    	a120 = 33 ;
    	a24 = 33 ;
    	a1 = 33 ;
    	a35 = 34 ;
    	a159 = 34 ;
    	a123 = 34 ;
    	a141 = 33 ;
    	a118 = 33 ;
    	a109 = 34 ;
    	a76 = 7; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 487\n");

    if(((a34 == 33 && ((a13 == 33 && a71 == 2) && a109 == 33)) && (a92 == 4 && (( cf==1  && (input == 2)) && a57 == 8)))) {
printf("POINT: 488\n");
printf("POINT: 489\n");

	if((a19 + 20) > a19){
printf("POINT: 490\n");
	a19  +=  2 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 491\n");

	if((a58 + 20) > a58){
printf("POINT: 492\n");
	a58  +=  2 ;}
	 else{	
	a58  +=  0;}
printf("POINT: 493\n");

	if((a98 - 20) < a98){
printf("POINT: 494\n");
	a98  -=  4 ;}
	 else{	
	a98  -=  0;}
printf("POINT: 495\n");

	if((a78 - 20) < a78){
printf("POINT: 496\n");
	a78  -=  4 ;}
	 else{	
	a78  -=  0;}
    	cf = 0;
    	a69 = 34 ;
    	a148 = 16;
    	a189 = 10;
    	a57 = 10;
    	a13 = 34 ;
    	a167 = 4;
    	a79 = 34 ;
    	a92 = 4;
    	a3 = 3;
    	a65 = 34 ;
    	a48 = 33 ;
    	a169 = 12;
    	a159 = 33 ;
    	a135 = 33 ;
    	a1 = 33 ;
    	a24 = 33 ;
    	a120 = 34 ;
    	a55 = 5; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 497\n");

    if(((((a76 == 5 && a174 == 1) && a69 == 33) && (a57 == 8 && ((( cf==1  && (input == 4)) && a18 == 4) && a109 == 33))) && a195 <= -29)) {
printf("POINT: 498\n");
printf("POINT: 499\n");

	if((a195 + 20) > a195){
printf("POINT: 500\n");
	a195  +=  3 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a141 = 32 ;
    	a118 = 32 ;
    	a35 = 32 ;
    	a167 = 3;
    	a24 = 32 ;
    	a92 = 5;
    	a174 = 2;
    	a164 = 32 ;
    	a79 = 32 ;
    	a111 = 3;
    	a190 = 7;
    	a101 = 4;
    	a189 = 11;
    	a136 = 10; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 501\n");

    if((((a189 == 10 && (a24 == 33 && (((input == 3) &&  cf==1 ) && a109 == 33))) && (a71 == 2 && (a71 == 2 && a111 == 2))) && a146 == 2582)) {
printf("POINT: 502\n");
printf("POINT: 503\n");

	if((a182 - 20) < a182){
printf("POINT: 504\n");
	a182  -=  3 ;}
	 else{	
	a182  -=  0;}
    	cf = 0;
    	a40 = 9;
    	a35 = 35 ;
    	a106 = 8; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm62(int input) {
printf("POINT: 505\n");

    if((((((input == 3) &&  cf==1 ) && a189 == 10) && a135 == 33) && (((a118 == 33 && a190 == 6) && a92 == 4) && a92 == 4))) {
printf("POINT: 506\n");
printf("POINT: 507\n");

	if((a176 + 20) > a176){
printf("POINT: 508\n");
	a176  +=  3 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 509\n");

	if((a19 + 20) > a19){
printf("POINT: 510\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 511\n");

	if((a7 + 20) > a7){
printf("POINT: 512\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 513\n");

	if((a153 + 20) > a153){
printf("POINT: 514\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 515\n");

	if((a107 + 20) > a107){
printf("POINT: 516\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 517\n");

	if((a127 + 20) > a127){
printf("POINT: 518\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 519\n");

	if((a10 + 20) > a10){
printf("POINT: 520\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 521\n");

	if((a6 + 20) > a6){
printf("POINT: 522\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 523\n");

    	if(a76 == 9) {
printf("POINT: 524\n");
    	a61 = 36 ; 
    	}else {
printf("POINT: 526\n");
    	a35 = 35 ;
    	a40 = 8;
    	a63 = 14;
    	}printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 527\n");

    if(((a24 == 33 && (( cf==1  && (input == 2)) && a174 == 1)) && (a101 == 3 && ((a18 == 4 && a53 == 7) && a167 == 2)))) {
printf("POINT: 528\n");
printf("POINT: 529\n");

	if((a176 + 20) > a176){
printf("POINT: 530\n");
	a176  +=  2 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 531\n");

	if((a19 + 20) > a19){
printf("POINT: 532\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 533\n");

	if((a153 + 20) > a153){
printf("POINT: 534\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 535\n");

	if((a107 + 20) > a107){
printf("POINT: 536\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 537\n");

	if((a127 + 20) > a127){
printf("POINT: 538\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 539\n");

	if((a10 + 20) > a10){
printf("POINT: 540\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 541\n");

	if((a5 - 20) < a5){
printf("POINT: 542\n");
	a5  -=  1 ;}
	 else{	
	a5  -=  0;}
    	cf = 0;
    	a101 = 10;
    	a190 = 10;
    	a169 = 10;
    	a69 = 35 ;
    	a111 = 8;
    	a31 = 3;
    	a120 = 33 ;
    	a167 = 3;
    	a141 = 33 ;
    	a135 = 33 ;
    	a13 = 34 ;
    	a132 = 9;
    	a76 = 12;
    	a35 = 36 ;
    	a189 = 14;
    	a92 = 8;
    	a1 = 32 ;
    	a57 = 10;
    	a48 = 36 ;
    	a109 = 33 ;
    	a24 = 34 ;
    	a118 = 34 ;
    	a71 = 5;
    	a53 = 13;
    	a18 = 10;
    	a174 = 4;
    	a56 = 13; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 543\n");

    if(((a71 == 2 && ((((input == 4) &&  cf==1 ) && a109 == 33) && a71 == 2)) && ((a53 == 7 && a167 == 2) && a48 == 33))) {
printf("POINT: 544\n");
printf("POINT: 545\n");

	if((a176 - 20) < a176){
printf("POINT: 546\n");
	a176  -=  1 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 547\n");

	if((a19 + 20) > a19){
printf("POINT: 548\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 549\n");

	if((a153 + 20) > a153){
printf("POINT: 550\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 551\n");

	if((a182 - 20) < a182){
printf("POINT: 552\n");
	a182  -=  4 ;}
	 else{	
	a182  -=  0;}
printf("POINT: 553\n");

	if((a10 + 20) > a10){
printf("POINT: 554\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a174 = 5;
    	a167 = 8;
    	a136 = 13;
    	a48 = 33 ;
    	a190 = 9;
    	a57 = 13;
    	a35 = 32 ;
    	a111 = 4;
    	a101 = 3;
    	a141 = 33 ;
    	a76 = 9;
    	a169 = 15;
    	a18 = 7;
    	a31 = 8;
    	a197 = 15; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 555\n");

    if((((a141 == 33 && a174 == 1) && a76 == 5) && (a13 == 33 && ((( cf==1  && (input == 5)) && a109 == 33) && a48 == 33)))) {
printf("POINT: 556\n");
printf("POINT: 557\n");

	if((a176 - 20) < a176){
printf("POINT: 558\n");
	a176  -=  3 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 559\n");

	if((a19 + 20) > a19){
printf("POINT: 560\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 561\n");

	if((a151 + 20) > a151){
printf("POINT: 562\n");
	a151  +=  3 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 563\n");

	if((a153 + 20) > a153){
printf("POINT: 564\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 565\n");

	if((a107 + 20) > a107){
printf("POINT: 566\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 567\n");

	if((a127 + 20) > a127){
printf("POINT: 568\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 569\n");

	if((a10 + 20) > a10){
printf("POINT: 570\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a148 = 13;
    	a87 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 571\n");

    if(((a189 == 10 && a135 == 33) && ((a109 == 33 && ((( cf==1  && (input == 1)) && a111 == 2) && a57 == 8)) && a120 == 33))) {
printf("POINT: 572\n");
printf("POINT: 573\n");

	if((a19 + 20) > a19){
printf("POINT: 574\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 575\n");

	if((a195 + 20) > a195){
printf("POINT: 576\n");
	a195  +=  3 ;}
	 else{	
	a195  +=  0;}
printf("POINT: 577\n");

	if((a153 + 20) > a153){
printf("POINT: 578\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 579\n");

	if((a10 + 20) > a10){
printf("POINT: 580\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a40 = 8;
    	a63 = 8; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm6(int input) {
printf("POINT: 581\n");

    if(((a61 == 33 &&  cf==1 ) && (a118 == 33 && ((a31 == 1 && ((a24 == 33 && a57 == 8) && a79 == 33)) && a76 == 5)))) {
printf("POINT: 582\n");
    	calculate_outputm60(input);
    } 
printf("POINT: 583\n");

    if(((a24 == 33 && a18 == 4) && ((a53 == 7 && (a101 == 3 && (a31 == 1 && ( cf==1  && a61 == 34)))) && a169 == 10))) {
printf("POINT: 584\n");
    	calculate_outputm62(input);
    } 
}
 void calculate_outputm66(int input) {
printf("POINT: 585\n");

    if(((a34 == 33 && ( cf==1  && (input == 3))) && (a111 == 2 && (a48 == 33 && (a189 == 10 && (a76 == 5 && a169 == 10)))))) {
printf("POINT: 586\n");
printf("POINT: 587\n");

	if((a19 + 20) > a19){
printf("POINT: 588\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 589\n");

	if((a134 + 20) > a134){
printf("POINT: 590\n");
	a134  +=  2 ;}
	 else{	
	a134  +=  0;}
printf("POINT: 591\n");

	if((a153 + 20) > a153){
printf("POINT: 592\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 593\n");

	if((a107 - 20) < a107){
printf("POINT: 594\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 595\n");

	if((a127 + 20) > a127){
printf("POINT: 596\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 597\n");

	if((a10 + 20) > a10){
printf("POINT: 598\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a169 = 14;
    	a25 = 35 ;
    	a120 = 36 ;
    	a71 = 3;
    	a35 = 36 ;
    	a118 = 33 ;
    	a31 = 7;
    	a190 = 11;
    	a53 = 12;
    	a12 = 35 ;
    	a189 = 14;
    	a174 = 8;
    	a24 = 32 ;
    	a57 = 8;
    	a76 = 8;
    	a135 = 32 ;
    	a69 = 34 ;
    	a3 = 1;
    	a79 = 35 ;
    	a159 = 34 ;
    	a18 = 7;
    	a109 = 35 ;
    	a65 = 35 ;
    	a34 = 36 ;
    	a141 = 36 ;
    	a48 = 36 ;
    	a13 = 36 ;
    	a111 = 4;
    	a132 = 10; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 599\n");

    if(((a18 == 4 && (a57 == 8 && (a174 == 1 && a159 == 33))) && (a190 == 6 && (((input == 2) &&  cf==1 ) && a189 == 10)))) {
printf("POINT: 600\n");
printf("POINT: 601\n");

	if((a19 + 20) > a19){
printf("POINT: 602\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 603\n");

	if((a7 + 20) > a7){
printf("POINT: 604\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 605\n");

	if((a153 + 20) > a153){
printf("POINT: 606\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 607\n");

	if((a107 + 20) > a107){
printf("POINT: 608\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 609\n");

	if((a127 + 20) > a127){
printf("POINT: 610\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 611\n");

	if((a10 + 20) > a10){
printf("POINT: 612\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a40 = 9;
    	a35 = 35 ;
    	a106 = 8; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 613\n");

    if((((a189 == 10 && ((input == 5) &&  cf==1 )) && a18 == 4) && (((a76 == 5 && a190 == 6) && a111 == 2) && a159 == 33))) {
printf("POINT: 614\n");
printf("POINT: 615\n");

	if((a19 + 20) > a19){
printf("POINT: 616\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 617\n");

	if((a146 + 20) > a146){
printf("POINT: 618\n");
	a146  +=  2 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 619\n");

	if((a153 + 20) > a153){
printf("POINT: 620\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 621\n");

	if((a107 + 20) > a107){
printf("POINT: 622\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 623\n");

	if((a127 + 20) > a127){
printf("POINT: 624\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 625\n");

	if((a165 + 20) > a165){
printf("POINT: 626\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
printf("POINT: 627\n");

    	if((a100 == 36 || (a111 == 4 && !(a76 == 8)))) {
printf("POINT: 628\n");
    	a25 = 35 ;
    	a79 = 36 ;
    	a120 = 33 ;
    	a101 = 6;
    	a1 = 32 ;
    	a141 = 36 ;
    	a135 = 36 ;
    	a35 = 34 ;
    	a167 = 8;
    	a159 = 36 ;
    	a31 = 1;
    	a69 = 36 ;
    	a190 = 11;
    	a48 = 36 ;
    	a174 = 2;
    	a189 = 11;
    	a18 = 9;
    	a92 = 9;
    	a123 = 33 ;
    	a13 = 35 ;
    	a178 = 7; 
    	}else {
printf("POINT: 630\n");
    	a31 = 4;
    	a13 = 36 ;
    	a1 = 36 ;
    	a24 = 33 ;
    	a35 = 35 ;
    	a120 = 36 ;
    	a169 = 11;
    	a141 = 32 ;
    	a48 = 36 ;
    	a111 = 8;
    	a174 = 5;
    	a167 = 9;
    	a190 = 12;
    	a18 = 8;
    	a34 = 36 ;
    	a189 = 11;
    	a57 = 12;
    	a79 = 35 ;
    	a32 = 35 ;
    	a25 = 36 ;
    	a101 = 4;
    	a92 = 4;
    	a76 = 11;
    	a69 = 33 ;
    	a159 = 36 ;
    	a135 = 33 ;
    	a40 = 13;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 631\n");

    if((((( cf==1  && (input == 4)) && a120 == 33) && a189 == 10) && (a25 == 33 && ((a120 == 33 && a18 == 4) && a135 == 33)))) {
printf("POINT: 632\n");
printf("POINT: 633\n");

	if((a19 + 20) > a19){
printf("POINT: 634\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 635\n");

	if((a91 + 20) > a91){
printf("POINT: 636\n");
	a91  +=  4 ;}
	 else{	
	a91  +=  0;}
printf("POINT: 637\n");

	if((a153 + 20) > a153){
printf("POINT: 638\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 639\n");

	if((a107 - 20) < a107){
printf("POINT: 640\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 641\n");

	if((a165 + 20) > a165){
printf("POINT: 642\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a18 = 4;
    	a34 = 35 ;
    	a167 = 3;
    	a123 = 36 ;
    	a135 = 33 ;
    	a79 = 32 ;
    	a48 = 36 ;
    	a101 = 8;
    	a31 = 6;
    	a76 = 5;
    	a111 = 6;
    	a174 = 8;
    	a92 = 9;
    	a35 = 34 ;
    	a25 = 36 ;
    	a49 = 32 ; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 643\n");

    if((((((input == 1) &&  cf==1 ) && a18 == 4) && a69 == 33) && (a120 == 33 && ((a190 == 6 && a120 == 33) && a79 == 33)))) {
printf("POINT: 644\n");
printf("POINT: 645\n");

	if((a19 + 20) > a19){
printf("POINT: 646\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 647\n");

	if((a134 - 20) < a134){
printf("POINT: 648\n");
	a134  -=  3 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 649\n");

	if((a153 + 20) > a153){
printf("POINT: 650\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 651\n");

	if((a107 + 20) > a107){
printf("POINT: 652\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 653\n");

	if((a127 + 20) > a127){
printf("POINT: 654\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 655\n");

	if((a10 + 20) > a10){
printf("POINT: 656\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a136 = 13;
    	a35 = 32 ;
    	a169 = 15;
    	a25 = 35 ;
    	a34 = 33 ;
    	a141 = 36 ;
    	a174 = 8;
    	a69 = 35 ;
    	a48 = 33 ;
    	a120 = 33 ;
    	a190 = 8;
    	a13 = 33 ;
    	a57 = 8;
    	a197 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm68(int input) {
printf("POINT: 657\n");

    if(((a71 == 2 && ((a101 == 3 && (a53 == 7 && ( cf==1  && (input == 3)))) && a13 == 33)) && (a159 == 33 && a141 == 33))) {
printf("POINT: 658\n");
    	cf = 0;
    	a1 = 32 ;
    	a24 = 32 ;
    	a53 = 8;
    	a65 = 32 ;
    	a71 = 2;
    	a92 = 6;
    	a25 = 32 ;
    	a3 = 2;
    	a159 = 32 ;
    	a48 = 32 ;
    	a69 = 34 ;
    	a38 = 32 ;
    	a120 = 32 ;
    	a148 = 10; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm7(int input) {
printf("POINT: 659\n");

    if((((a17 == 32 &&  cf==1 ) && a189 == 10) && (((a76 == 5 && (a79 == 33 && a57 == 8)) && a169 == 10) && a24 == 33))) {
printf("POINT: 660\n");
    	calculate_outputm66(input);
    } 
printf("POINT: 661\n");

    if(((a1 == 33 && ((a189 == 10 && ( cf==1  && a17 == 35)) && a24 == 33)) && (a1 == 33 && (a135 == 33 && a24 == 33)))) {
printf("POINT: 662\n");
    	calculate_outputm68(input);
    } 
}
 void calculate_outputm71(int input) {
printf("POINT: 663\n");

    if(((a76 == 5 && ((((input == 1) &&  cf==1 ) && a118 == 33) && a71 == 2)) && (a18 == 4 && (a109 == 33 && a101 == 3)))) {
printf("POINT: 664\n");
printf("POINT: 665\n");

	if((a171 + 20) > a171){
printf("POINT: 666\n");
	a171  +=  2 ;}
	 else{	
	a171  +=  0;}
printf("POINT: 667\n");

	if((a10 + 20) > a10){
printf("POINT: 668\n");
	a10  +=  2 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 669\n");

	if((a11 + 20) > a11){
printf("POINT: 670\n");
	a11  +=  2 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a174 = 3;
    	a35 = 35 ;
    	a40 = 12;
    	a109 = 34 ;
    	a34 = 34 ;
    	a101 = 5;
    	a76 = 7;
    	a118 = 34 ;
    	a111 = 4;
    	a190 = 8;
    	a122 = 6; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm72(int input) {
printf("POINT: 671\n");

    if(((a159 == 33 && (a24 == 33 && (( cf==1  && (input == 4)) && a76 == 5))) && ((a118 == 33 && a92 == 4) && a76 == 5))) {
printf("POINT: 672\n");
printf("POINT: 673\n");

	if((a182 - 20) < a182){
printf("POINT: 674\n");
	a182  -=  2 ;}
	 else{	
	a182  -=  0;}
    	cf = 0;
    	a118 = 32 ;
    	a111 = 3;
    	a132 = 9;
    	a76 = 6;
    	a35 = 36 ;
    	a48 = 32 ;
    	a120 = 32 ;
    	a3 = 3;
    	a79 = 32 ;
    	a174 = 2;
    	a189 = 11;
    	a190 = 7;
    	a159 = 32 ;
    	a169 = 11;
    	a13 = 32 ;
    	a34 = 32 ;
    	a25 = 32 ;
    	a53 = 8;
    	a31 = 2;
    	a71 = 3;
    	a135 = 32 ;
    	a69 = 32 ;
    	a92 = 6;
    	a18 = 5;
    	a101 = 4;
    	a141 = 32 ;
    	a57 = 9;
    	a167 = 3;
    	a1 = 32 ;
    	a24 = 32 ;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 675\n");

    if(((a92 == 4 && (a31 == 1 && ((input == 1) &&  cf==1 ))) && (((a135 == 33 && a174 == 1) && a135 == 33) && a53 == 7))) {
printf("POINT: 676\n");
printf("POINT: 677\n");

	if((a151 - 20) < a151){
printf("POINT: 678\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
    	cf = 0;
printf("POINT: 679\n");

    	if(((a49 == 33 && (a148 == 9 || a100 == 32)) || a34 == 32)) {
printf("POINT: 680\n");
    	a190 = 7;
    	a53 = 8;
    	a76 = 6;
    	a34 = 32 ;
    	a109 = 34 ;
    	a167 = 3;
    	a18 = 5;
    	a120 = 34 ;
    	a79 = 32 ;
    	a25 = 32 ;
    	a118 = 32 ;
    	a174 = 2;
    	a111 = 3;
    	a159 = 32 ;
    	a24 = 32 ;
    	a71 = 3;
    	a48 = 32 ;
    	a132 = 6;
    	a101 = 4;
    	a69 = 32 ;
    	a35 = 36 ;
    	a57 = 9;
    	a13 = 32 ;
    	a141 = 32 ;
    	a1 = 32 ;
    	a135 = 32 ;
    	a52 = 7; 
    	}else {
printf("POINT: 682\n");
    	a48 = 32 ;
    	a190 = 7;
    	a34 = 32 ;
    	a101 = 4;
    	a159 = 32 ;
    	a69 = 32 ;
    	a167 = 3;
    	a76 = 6;
    	a65 = 34 ;
    	a24 = 32 ;
    	a141 = 32 ;
    	a120 = 34 ;
    	a109 = 32 ;
    	a79 = 32 ;
    	a71 = 3;
    	a169 = 11;
    	a118 = 32 ;
    	a136 = 17;
    	a189 = 11;
    	a92 = 5;
    	a111 = 3;
    	a57 = 9;
    	a35 = 32 ;
    	a174 = 2;
    	a1 = 32 ;
    	a53 = 8;
    	a135 = 32 ;
    	a121 = 13;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 683\n");

    if((((a167 == 2 && ( cf==1  && (input == 5))) && (a31 == 1 && (a135 == 33 && ((a13 == 33 && a1 == 33) && a111 == 2)))) && a73 <= -27)) {
printf("POINT: 684\n");
printf("POINT: 685\n");

	if((a171 - 20) < a171){
printf("POINT: 686\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a92 = 5;
    	a159 = 32 ;
    	a164 = 35 ;
    	a169 = 11;
    	a141 = 32 ;
    	a101 = 4;
    	a174 = 2;
    	a190 = 7;
    	a79 = 32 ;
    	a111 = 3;
    	a48 = 32 ;
    	a24 = 32 ;
    	a25 = 32 ;
    	a35 = 32 ;
    	a167 = 3;
    	a136 = 10; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 687\n");

    if((((a57 == 8 && (a120 == 33 && a101 == 3)) && (((( cf==1  && (input == 3)) && a189 == 10) && a141 == 33) && a169 == 10)) && a134 >= 29)) {
printf("POINT: 688\n");
printf("POINT: 689\n");

	if((a73 + 20) > a73){
printf("POINT: 690\n");
	a73  +=  3 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a101 = 5;
    	a169 = 12;
    	a123 = 35 ;
    	a31 = 3;
    	a92 = 6;
    	a57 = 10;
    	a159 = 34 ;
    	a18 = 6;
    	a167 = 4;
    	a48 = 34 ;
    	a35 = 34 ;
    	a174 = 3;
    	a25 = 34 ;
    	a28 = 6; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 691\n");

    if(((a76 == 5 && ((input == 2) &&  cf==1 )) && ((a169 == 10 && (a69 == 33 && (a159 == 33 && a69 == 33))) && a48 == 33))) {
printf("POINT: 692\n");
printf("POINT: 693\n");

	if((a91 + 20) > a91){
printf("POINT: 694\n");
	a91  +=  3 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
printf("POINT: 695\n");

    	if((a87 == 13 && (!(a1 == 34) && (a49 == 32 && !(a53 == 8))))) {
printf("POINT: 696\n");
    	a135 = 34 ;
    	a31 = 3;
    	a35 = 35 ;
    	a13 = 34 ;
    	a71 = 4;
    	a18 = 6;
    	a118 = 34 ;
    	a24 = 34 ;
    	a53 = 9;
    	a76 = 7;
    	a1 = 34 ;
    	a48 = 32 ;
    	a3 = 3;
    	a189 = 12;
    	a69 = 34 ;
    	a92 = 5;
    	a190 = 8;
    	a159 = 34 ;
    	a40 = 7;
    	a169 = 12;
    	a65 = 34 ;
    	a57 = 10;
    	a111 = 4;
    	a101 = 5;
    	a25 = 32 ;
    	a120 = 34 ;
    	a167 = 4;
    	a174 = 3;
    	a70 = 8; 
    	}else {
printf("POINT: 698\n");
    	a48 = 32 ;
    	a1 = 32 ;
    	a69 = 32 ;
    	a135 = 32 ;
    	a174 = 2;
    	a169 = 11;
    	a53 = 8;
    	a189 = 11;
    	a190 = 7;
    	a25 = 32 ;
    	a57 = 9;
    	a13 = 32 ;
    	a179 = 32 ;
    	a159 = 34 ;
    	a35 = 36 ;
    	a24 = 32 ;
    	a167 = 3;
    	a76 = 7;
    	a92 = 5;
    	a34 = 32 ;
    	a141 = 32 ;
    	a101 = 4;
    	a118 = 32 ;
    	a71 = 3;
    	a109 = 32 ;
    	a111 = 4;
    	a120 = 34 ;
    	a79 = 32 ;
    	a132 = 5;
    	}printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm75(int input) {
printf("POINT: 699\n");

    if(((a169 == 10 && (a169 == 10 && a92 == 4)) && (a24 == 33 && (a57 == 8 && (((input == 1) &&  cf==1 ) && a57 == 8))))) {
printf("POINT: 700\n");
    	cf = 0;
    	a111 = 3;
    	a18 = 5;
    	a35 = 36 ;
    	a174 = 2;
    	a24 = 32 ;
    	a190 = 8;
    	a169 = 11;
    	a13 = 32 ;
    	a135 = 32 ;
    	a120 = 32 ;
    	a25 = 32 ;
    	a31 = 3;
    	a53 = 8;
    	a92 = 5;
    	a57 = 9;
    	a141 = 32 ;
    	a118 = 32 ;
    	a76 = 6;
    	a71 = 3;
    	a132 = 6;
    	a52 = 6; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm8(int input) {
printf("POINT: 701\n");

    if(((a111 == 2 && ( cf==1  && a55 == 5)) && (a135 == 33 && (((a34 == 33 && a53 == 7) && a101 == 3) && a141 == 33)))) {
printf("POINT: 702\n");
    	calculate_outputm71(input);
    } 
printf("POINT: 703\n");

    if((((a48 == 33 && a92 == 4) && a159 == 33) && (a48 == 33 && (((a55 == 6 &&  cf==1 ) && a24 == 33) && a1 == 33)))) {
printf("POINT: 704\n");
    	calculate_outputm72(input);
    } 
printf("POINT: 705\n");

    if(((a118 == 33 && (a55 == 9 &&  cf==1 )) && (a120 == 33 && ((a141 == 33 && (a53 == 7 && a76 == 5)) && a13 == 33)))) {
printf("POINT: 706\n");
    	calculate_outputm75(input);
    } 
}
 void calculate_outputm76(int input) {
printf("POINT: 707\n");

    if(((a25 == 32 && (a18 == 5 && (a76 == 6 && (a159 == 32 && a53 == 8)))) && (( cf==1  && (input == 4)) && a101 == 4))) {
printf("POINT: 708\n");
printf("POINT: 709\n");

	if((a19 + 20) > a19){
printf("POINT: 710\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 711\n");

	if((a146 + 20) > a146){
printf("POINT: 712\n");
	a146  +=  2 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 713\n");

	if((a130 - 20) < a130){
printf("POINT: 714\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 715\n");

	if((a153 + 20) > a153){
printf("POINT: 716\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 717\n");

	if((a107 - 20) < a107){
printf("POINT: 718\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 719\n");

	if((a127 + 20) > a127){
printf("POINT: 720\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 721\n");

	if((a10 + 20) > a10){
printf("POINT: 722\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 723\n");

	if((a165 - 20) < a165){
printf("POINT: 724\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 725\n");

	if((a11 + 20) > a11){
printf("POINT: 726\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 727\n");

    	if(((!(a30 == 35) || (a52 == 7 && !(a32 == 35))) || !(a49 == 36))) {
printf("POINT: 728\n");
    	a35 = 33 ;
    	a61 = 32 ;
    	a148 = 14; 
    	}else {
printf("POINT: 730\n");
    	a61 = 32 ;
    	a35 = 33 ;
    	a148 = 14;
    	}printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 731\n");

    if(((a167 == 3 && a1 == 32) && ((((a71 == 3 && ( cf==1  && (input == 2))) && a109 == 32) && a3 == 2) && a111 == 3))) {
printf("POINT: 732\n");
printf("POINT: 733\n");

	if((a19 + 20) > a19){
printf("POINT: 734\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 735\n");

	if((a153 + 20) > a153){
printf("POINT: 736\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 737\n");

	if((a58 - 20) < a58){
printf("POINT: 738\n");
	a58  -=  1 ;}
	 else{	
	a58  -=  0;}
printf("POINT: 739\n");

	if((a127 + 20) > a127){
printf("POINT: 740\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 741\n");

	if((a10 + 20) > a10){
printf("POINT: 742\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 743\n");

	if((a11 + 20) > a11){
printf("POINT: 744\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a148 = 13;
    	a35 = 33 ;
    	a87 = 11; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 745\n");

    if(((a13 == 32 && (((input == 5) &&  cf==1 ) && a18 == 5)) && (a189 == 11 && ((a53 == 8 && a69 == 32) && a65 == 32)))) {
printf("POINT: 746\n");
printf("POINT: 747\n");

	if((a19 + 20) > a19){
printf("POINT: 748\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 749\n");

	if((a95 - 20) < a95){
printf("POINT: 750\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
printf("POINT: 751\n");

	if((a146 - 20) < a146){
printf("POINT: 752\n");
	a146  -=  1 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 753\n");

	if((a153 + 20) > a153){
printf("POINT: 754\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 755\n");

	if((a107 + 20) > a107){
printf("POINT: 756\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 757\n");

	if((a127 + 20) > a127){
printf("POINT: 758\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a34 = 36 ;
    	a31 = 6;
    	a136 = 16;
    	a111 = 5;
    	a71 = 3;
    	a155 = 10; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 759\n");

    if(((((( cf==1  && (input == 3)) && a118 == 32) && a13 == 32) && a34 == 32) && ((a13 == 32 && a13 == 32) && a135 == 32))) {
printf("POINT: 760\n");
printf("POINT: 761\n");

	if((a19 + 20) > a19){
printf("POINT: 762\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 763\n");

	if((a107 + 20) > a107){
printf("POINT: 764\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 765\n");

	if((a127 + 20) > a127){
printf("POINT: 766\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 767\n");

	if((a165 + 20) > a165){
printf("POINT: 768\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
printf("POINT: 769\n");

    	if(a87 == 9) {
printf("POINT: 770\n");
    	a189 = 17;
    	a31 = 4;
    	a35 = 36 ;
    	a141 = 35 ;
    	a159 = 34 ;
    	a12 = 35 ;
    	a190 = 10;
    	a34 = 35 ;
    	a109 = 36 ;
    	a135 = 32 ;
    	a24 = 35 ;
    	a53 = 8;
    	a71 = 3;
    	a132 = 10; 
    	}else {
printf("POINT: 772\n");
    	a1 = 36 ;
    	a3 = 2;
    	a18 = 11;
    	a135 = 36 ;
    	a79 = 32 ;
    	a109 = 34 ;
    	a13 = 32 ;
    	a120 = 32 ;
    	a167 = 7;
    	a48 = 36 ;
    	a159 = 35 ;
    	a118 = 32 ;
    	a190 = 7;
    	a101 = 4;
    	a188 = 32 ;
    	a57 = 11;
    	a53 = 13;
    	a76 = 6;
    	a69 = 36 ;
    	a34 = 33 ;
    	a24 = 32 ;
    	a71 = 4;
    	a169 = 16;
    	a65 = 32 ;
    	a35 = 35 ;
    	a174 = 3;
    	a92 = 10;
    	a141 = 32 ;
    	a189 = 16;
    	a25 = 32 ;
    	a111 = 7;
    	a40 = 11;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 773\n");

    if(((a189 == 11 && ( cf==1  && (input == 1))) && (a169 == 11 && ((a13 == 32 && (a24 == 32 && a169 == 11)) && a79 == 32)))) {
printf("POINT: 774\n");
printf("POINT: 775\n");

	if((a19 + 20) > a19){
printf("POINT: 776\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 777\n");

	if((a107 + 20) > a107){
printf("POINT: 778\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 779\n");

	if((a6 + 20) > a6){
printf("POINT: 780\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
printf("POINT: 781\n");

	if((a78 + 20) > a78){
printf("POINT: 782\n");
	a78  +=  3 ;}
	 else{	
	a78  +=  0;}
    	cf = 0;
    	a25 = 32 ;
    	a101 = 3;
    	a135 = 32 ;
    	a92 = 7;
    	a174 = 5;
    	a35 = 34 ;
    	a69 = 34 ;
    	a118 = 36 ;
    	a79 = 33 ;
    	a189 = 11;
    	a123 = 33 ;
    	a1 = 32 ;
    	a167 = 6;
    	a141 = 36 ;
    	a18 = 4;
    	a120 = 34 ;
    	a159 = 32 ;
    	a53 = 8;
    	a190 = 8;
    	a48 = 35 ;
    	a13 = 36 ;
    	a178 = 7; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm78(int input) {
printf("POINT: 783\n");

    if((((a120 == 32 && ((a109 == 32 && ((input == 5) &&  cf==1 )) && a57 == 9)) && ((a189 == 11 && a190 == 7) && a71 == 3)) && a73 <= -27)) {
printf("POINT: 784\n");
printf("POINT: 785\n");

	if((a47 + 20) > a47){
printf("POINT: 786\n");
	a47  +=  1 ;}
	 else{	
	a47  +=  0;}
    	cf = 0;
    	a164 = 35 ; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 787\n");

    if(((a169 == 11 && ((a79 == 32 && a190 == 7) && a118 == 32)) && (a111 == 3 && (((input == 1) &&  cf==1 ) && a24 == 32)))) {
printf("POINT: 788\n");
printf("POINT: 789\n");

	if((a151 - 20) < a151){
printf("POINT: 790\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
    	cf = 0;
    	a31 = 1;
    	a109 = 34 ;
    	a92 = 4;
    	a132 = 6;
    	a35 = 36 ;
    	a169 = 10;
    	a189 = 10;
    	a120 = 34 ;
    	a52 = 7; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 791\n");

    if((((a174 == 2 && ((a92 == 5 && (a34 == 32 && a25 == 32)) && a18 == 5)) && (a65 == 32 && ( cf==1  && (input == 3)))) && a134 >= 29)) {
printf("POINT: 792\n");
printf("POINT: 793\n");

	if((a58 - 20) < a58){
printf("POINT: 794\n");
	a58  -=  4 ;}
	 else{	
	a58  -=  0;}
    	cf = 0;
    	a92 = 6;
    	a169 = 12;
    	a159 = 34 ;
    	a25 = 34 ;
    	a79 = 34 ;
    	a174 = 3;
    	a123 = 35 ;
    	a48 = 34 ;
    	a167 = 4;
    	a109 = 34 ;
    	a18 = 6;
    	a34 = 34 ;
    	a31 = 3;
    	a57 = 10;
    	a101 = 5;
    	a35 = 34 ;
    	a28 = 6; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 795\n");

    if(((a135 == 32 && a101 == 4) && (((a167 == 3 && (( cf==1  && (input == 4)) && a169 == 11)) && a111 == 3) && a18 == 5))) {
printf("POINT: 796\n");
printf("POINT: 797\n");

	if((a105 - 20) < a105){
printf("POINT: 798\n");
	a105  -=  3 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a3 = 3;
    	a109 = 34 ;
    	a92 = 6;
    	a35 = 36 ;
    	a132 = 9;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 799\n");

    if(((((((input == 2) &&  cf==1 ) && a79 == 32) && a159 == 32) && a189 == 11) && ((a53 == 8 && a18 == 5) && a169 == 11))) {
printf("POINT: 800\n");
printf("POINT: 801\n");

	if((a195 + 20) > a195){
printf("POINT: 802\n");
	a195  +=  1 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a53 = 9;
    	a48 = 34 ;
    	a111 = 4;
    	a25 = 34 ;
    	a118 = 34 ;
    	a169 = 12;
    	a174 = 3;
    	a76 = 7;
    	a109 = 34 ;
    	a190 = 8;
    	a71 = 4;
    	a101 = 5;
    	a3 = 3;
    	a189 = 10;
    	a13 = 34 ;
    	a79 = 34 ;
    	a120 = 34 ;
    	a92 = 6;
    	a57 = 10;
    	a159 = 34 ;
    	a18 = 6;
    	a31 = 3;
    	a24 = 34 ;
    	a65 = 34 ;
    	a34 = 34 ;
    	a123 = 32 ;
    	a35 = 34 ;
    	a69 = 34 ;
    	a14 = 6; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm9(int input) {
printf("POINT: 803\n");

    if(((a57 == 9 && (a76 == 6 && (a24 == 32 && ( cf==1  && a164 == 33)))) && (a120 == 32 && (a174 == 2 && a13 == 32)))) {
printf("POINT: 804\n");
    	calculate_outputm76(input);
    } 
printf("POINT: 805\n");

    if(((a31 == 2 && (a31 == 2 && (a118 == 32 && a120 == 32))) && (a3 == 2 && (a69 == 32 && (a164 == 34 &&  cf==1 ))))) {
printf("POINT: 806\n");
    	calculate_outputm78(input);
    } 
}
 void calculate_outputm81(int input) {
printf("POINT: 807\n");

    if(((a48 == 32 && (a109 == 32 && a53 == 8)) && ((a69 == 32 && (((input == 4) &&  cf==1 ) && a1 == 32)) && a53 == 8))) {
printf("POINT: 808\n");
printf("POINT: 809\n");

	if((a19 + 20) > a19){
printf("POINT: 810\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 811\n");

	if((a153 + 20) > a153){
printf("POINT: 812\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
    	cf = 0;
printf("POINT: 813\n");

    	if(((a59 == 35 || a148 == 9) && a106 == 7)) {
printf("POINT: 814\n");
    	a25 = 33 ;
    	a3 = 3;
    	a35 = 35 ;
    	a69 = 35 ;
    	a65 = 35 ;
    	a111 = 5;
    	a174 = 1;
    	a118 = 35 ;
    	a76 = 5;
    	a40 = 7;
    	a57 = 8;
    	a79 = 35 ;
    	a53 = 14;
    	a189 = 16;
    	a120 = 36 ;
    	a24 = 35 ;
    	a31 = 8;
    	a190 = 11;
    	a109 = 33 ;
    	a101 = 7;
    	a18 = 10;
    	a1 = 35 ;
    	a167 = 5;
    	a141 = 33 ;
    	a48 = 35 ;
    	a70 = 9; 
    	}else {
printf("POINT: 816\n");
    	a189 = 14;
    	a174 = 8;
    	a65 = 34 ;
    	a3 = 4;
    	a57 = 9;
    	a169 = 12;
    	a111 = 5;
    	a141 = 35 ;
    	a25 = 34 ;
    	a135 = 35 ;
    	a118 = 32 ;
    	a101 = 9;
    	a120 = 34 ;
    	a109 = 34 ;
    	a34 = 32 ;
    	a159 = 34 ;
    	a92 = 11;
    	a31 = 2;
    	a13 = 32 ;
    	a148 = 9;
    	a35 = 33 ;
    	a76 = 12;
    	a69 = 36 ;
    	a18 = 10;
    	a190 = 13;
    	a53 = 13;
    	a83 = 14;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 817\n");

    if((((a79 == 32 && a189 == 11) && a167 == 3) && (((a111 == 3 && ((input == 2) &&  cf==1 )) && a31 == 2) && a1 == 32))) {
printf("POINT: 818\n");
printf("POINT: 819\n");

	if((a176 - 20) < a176){
printf("POINT: 820\n");
	a176  -=  2 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 821\n");

	if((a19 + 20) > a19){
printf("POINT: 822\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 823\n");

	if((a130 + 20) > a130){
printf("POINT: 824\n");
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 825\n");

	if((a153 + 20) > a153){
printf("POINT: 826\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 827\n");

	if((a107 + 20) > a107){
printf("POINT: 828\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 829\n");

	if((a58 - 20) < a58){
printf("POINT: 830\n");
	a58  -=  1 ;}
	 else{	
	a58  -=  0;}
printf("POINT: 831\n");

	if((a127 + 20) > a127){
printf("POINT: 832\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a53 = 7;
    	a25 = 36 ;
    	a79 = 36 ;
    	a48 = 36 ;
    	a174 = 4;
    	a101 = 4;
    	a109 = 36 ;
    	a123 = 34 ;
    	a31 = 1;
    	a76 = 5;
    	a190 = 6;
    	a69 = 33 ;
    	a57 = 14;
    	a65 = 33 ;
    	a35 = 34 ;
    	a168 = 32 ; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 833\n");

    if(((a174 == 2 && (a76 == 6 && a120 == 32)) && ((a79 == 32 && (a118 == 32 && ((input == 1) &&  cf==1 ))) && a57 == 9))) {
printf("POINT: 834\n");
printf("POINT: 835\n");

	if((a19 + 20) > a19){
printf("POINT: 836\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 837\n");

	if((a91 + 20) > a91){
printf("POINT: 838\n");
	a91  +=  2 ;}
	 else{	
	a91  +=  0;}
printf("POINT: 839\n");

	if((a146 + 20) > a146){
printf("POINT: 840\n");
	a146  +=  1 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 841\n");

	if((a130 + 20) > a130){
printf("POINT: 842\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 843\n");

	if((a153 + 20) > a153){
printf("POINT: 844\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 845\n");

	if((a107 + 20) > a107){
printf("POINT: 846\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 847\n");

	if((a127 + 20) > a127){
printf("POINT: 848\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 849\n");

	if((a10 + 20) > a10){
printf("POINT: 850\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 851\n");

	if((a165 - 20) < a165){
printf("POINT: 852\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a40 = 8;
    	a35 = 35 ;
    	a63 = 13; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 853\n");

    if(((a141 == 32 && ((input == 5) &&  cf==1 )) && ((((a79 == 32 && a169 == 11) && a79 == 32) && a69 == 32) && a18 == 5))) {
printf("POINT: 854\n");
printf("POINT: 855\n");

	if((a176 + 20) > a176){
printf("POINT: 856\n");
	a176  +=  3 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 857\n");

	if((a19 + 20) > a19){
printf("POINT: 858\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 859\n");

	if((a171 - 20) < a171){
printf("POINT: 860\n");
	a171  -=  1 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 861\n");

	if((a153 + 20) > a153){
printf("POINT: 862\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 863\n");

	if((a107 - 20) < a107){
printf("POINT: 864\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 865\n");

	if((a10 + 20) > a10){
printf("POINT: 866\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 867\n");

	if((a6 + 20) > a6){
printf("POINT: 868\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 869\n");

    	if(((a30 == 33 || a189 == 17) || a143 == 32)) {
printf("POINT: 870\n");
    	a31 = 6;
    	a13 = 34 ;
    	a159 = 36 ;
    	a92 = 8;
    	a53 = 10;
    	a3 = 7;
    	a34 = 36 ;
    	a111 = 5;
    	a118 = 33 ;
    	a136 = 16;
    	a109 = 35 ;
    	a135 = 33 ;
    	a155 = 17; 
    	}else {
printf("POINT: 872\n");
    	a35 = 35 ;
    	a25 = 32 ;
    	a76 = 11;
    	a3 = 5;
    	a118 = 32 ;
    	a32 = 32 ;
    	a48 = 35 ;
    	a24 = 34 ;
    	a18 = 7;
    	a111 = 8;
    	a174 = 7;
    	a57 = 11;
    	a79 = 35 ;
    	a109 = 35 ;
    	a31 = 1;
    	a141 = 36 ;
    	a190 = 7;
    	a169 = 14;
    	a167 = 7;
    	a189 = 17;
    	a69 = 35 ;
    	a65 = 35 ;
    	a120 = 33 ;
    	a53 = 13;
    	a71 = 8;
    	a101 = 9;
    	a40 = 13;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 873\n");

    if(((a69 == 32 && (((a118 == 32 && a25 == 32) && a65 == 32) && a111 == 3)) && (( cf==1  && (input == 3)) && a3 == 2))) {
printf("POINT: 874\n");
printf("POINT: 875\n");

	if((a19 + 20) > a19){
printf("POINT: 876\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 877\n");

	if((a105 - 20) < a105){
printf("POINT: 878\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
printf("POINT: 879\n");

	if((a153 + 20) > a153){
printf("POINT: 880\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 881\n");

	if((a127 + 20) > a127){
printf("POINT: 882\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a189 = 15;
    	a92 = 7;
    	a71 = 2;
    	a31 = 6;
    	a12 = 33 ;
    	a135 = 33 ;
    	a35 = 36 ;
    	a13 = 35 ;
    	a132 = 10; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm10(int input) {
printf("POINT: 883\n");

    if(((a53 == 8 && a24 == 32) && (a25 == 32 && ((a190 == 7 && (( cf==1  && a100 == 33) && a79 == 32)) && a141 == 32)))) {
printf("POINT: 884\n");
    	calculate_outputm81(input);
    } 
}
 void calculate_outputm85(int input) {
printf("POINT: 885\n");

    if((((a111 == 3 && a118 == 32) && a31 == 2) && (((((input == 1) &&  cf==1 ) && a135 == 32) && a25 == 32) && a189 == 11))) {
printf("POINT: 886\n");
printf("POINT: 887\n");

	if((a19 + 20) > a19){
printf("POINT: 888\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 889\n");

	if((a153 + 20) > a153){
printf("POINT: 890\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 891\n");

	if((a107 + 20) > a107){
printf("POINT: 892\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 893\n");

	if((a58 - 20) < a58){
printf("POINT: 894\n");
	a58  -=  4 ;}
	 else{	
	a58  -=  0;}
printf("POINT: 895\n");

	if((a127 + 20) > a127){
printf("POINT: 896\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 897\n");

	if((a10 + 20) > a10){
printf("POINT: 898\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 899\n");

	if((a165 - 20) < a165){
printf("POINT: 900\n");
	a165  -=  3 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
printf("POINT: 901\n");

    	if(a119 == 36) {
printf("POINT: 902\n");
    	a13 = 36 ;
    	a120 = 34 ;
    	a132 = 8;
    	a35 = 36 ;
    	a167 = 2;
    	a3 = 4;
    	a57 = 11;
    	a80 = 10; 
    	}else {
printf("POINT: 904\n");
    	a188 = 33 ;
    	a35 = 35 ;
    	a40 = 11;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 905\n");

    if(((a1 == 32 && a13 == 32) && (a167 == 3 && (a31 == 2 && ((a69 == 32 && ((input == 5) &&  cf==1 )) && a1 == 32))))) {
printf("POINT: 906\n");
printf("POINT: 907\n");

	if((a176 - 20) < a176){
printf("POINT: 908\n");
	a176  -=  1 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 909\n");

	if((a19 + 20) > a19){
printf("POINT: 910\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 911\n");

	if((a171 - 20) < a171){
printf("POINT: 912\n");
	a171  -=  2 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 913\n");

	if((a153 + 20) > a153){
printf("POINT: 914\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 915\n");

	if((a107 - 20) < a107){
printf("POINT: 916\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 917\n");

	if((a127 + 20) > a127){
printf("POINT: 918\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 919\n");

	if((a10 + 20) > a10){
printf("POINT: 920\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 921\n");

	if((a165 + 20) > a165){
printf("POINT: 922\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a148 = 11;
    	a35 = 33 ;
    	a70 = 4; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 923\n");

    if((((( cf==1  && (input == 4)) && a65 == 32) && a101 == 4) && ((a141 == 32 && (a135 == 32 && a79 == 32)) && a48 == 32))) {
printf("POINT: 924\n");
printf("POINT: 925\n");

	if((a19 + 20) > a19){
printf("POINT: 926\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 927\n");

	if((a151 + 20) > a151){
printf("POINT: 928\n");
	a151  +=  1 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 929\n");

	if((a153 + 20) > a153){
printf("POINT: 930\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 931\n");

	if((a107 - 20) < a107){
printf("POINT: 932\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 933\n");

	if((a127 + 20) > a127){
printf("POINT: 934\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 935\n");

	if((a10 + 20) > a10){
printf("POINT: 936\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
printf("POINT: 937\n");

    	if(((a31 == 3 || (!(a178 == 12) && (a174 == 4 && a56 == 13))) || a13 == 32)) {
printf("POINT: 938\n");
    	a35 = 35 ;
    	a40 = 6;
    	a28 = 5; 
    	}else {
printf("POINT: 940\n");
    	a25 = 35 ;
    	a190 = 7;
    	a135 = 35 ;
    	a48 = 33 ;
    	a79 = 36 ;
    	a101 = 9;
    	a31 = 1;
    	a13 = 33 ;
    	a111 = 8;
    	a3 = 2;
    	a24 = 35 ;
    	a65 = 33 ;
    	a123 = 32 ;
    	a92 = 5;
    	a18 = 11;
    	a159 = 35 ;
    	a76 = 10;
    	a71 = 5;
    	a57 = 10;
    	a189 = 12;
    	a109 = 32 ;
    	a141 = 32 ;
    	a35 = 34 ;
    	a167 = 5;
    	a1 = 33 ;
    	a53 = 11;
    	a174 = 5;
    	a120 = 36 ;
    	a14 = 7;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 941\n");

    if(((((input == 2) &&  cf==1 ) && a141 == 32) && (((a135 == 32 && (a76 == 6 && a111 == 3)) && a118 == 32) && a57 == 9))) {
printf("POINT: 942\n");
printf("POINT: 943\n");

	if((a19 + 20) > a19){
printf("POINT: 944\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 945\n");

	if((a195 + 20) > a195){
printf("POINT: 946\n");
	a195  +=  3 ;}
	 else{	
	a195  +=  0;}
printf("POINT: 947\n");

	if((a107 - 20) < a107){
printf("POINT: 948\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 949\n");

	if((a127 + 20) > a127){
printf("POINT: 950\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 951\n");

	if((a10 + 20) > a10){
printf("POINT: 952\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 953\n");

	if((a165 + 20) > a165){
printf("POINT: 954\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a34 = 32 ;
    	a136 = 16;
    	a71 = 2;
    	a31 = 7;
    	a111 = 7;
    	a155 = 10; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 955\n");

    if(((a71 == 3 && (((input == 3) &&  cf==1 ) && a24 == 32)) && ((a13 == 32 && (a189 == 11 && a18 == 5)) && a141 == 32))) {
printf("POINT: 956\n");
printf("POINT: 957\n");

	if((a19 + 20) > a19){
printf("POINT: 958\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 959\n");

	if((a73 + 20) > a73){
printf("POINT: 960\n");
	a73  +=  4 ;}
	 else{	
	a73  +=  0;}
printf("POINT: 961\n");

	if((a153 + 20) > a153){
printf("POINT: 962\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 963\n");

	if((a107 + 20) > a107){
printf("POINT: 964\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 965\n");

	if((a127 + 20) > a127){
printf("POINT: 966\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a35 = 34 ;
    	a123 = 34 ;
    	a168 = 34 ; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm12(int input) {
printf("POINT: 967\n");

    if(((a92 == 5 && ((a189 == 11 && (a135 == 32 && a24 == 32)) && a120 == 32)) && ((a197 == 13 &&  cf==1 ) && a69 == 32))) {
printf("POINT: 968\n");
    	calculate_outputm85(input);
    } 
}
 void calculate_outputm92(int input) {
printf("POINT: 969\n");

    if((((a101 == 4 && ((a79 == 32 && a120 == 32) && a18 == 5)) && a18 == 5) && (((input == 5) &&  cf==1 ) && a120 == 32))) {
printf("POINT: 970\n");
    	cf = 0;
printf("POINT: 971\n");

    	if(((a178 == 13 && a3 == 1) || a120 == 36)) {
printf("POINT: 972\n");
    	a190 = 8;
    	a132 = 6;
    	a35 = 36 ;
    	a31 = 3;
    	a52 = 6; 
    	}else {
printf("POINT: 974\n");
    	a189 = 12;
    	a30 = 33 ;
    	a190 = 8;
    	a71 = 2;
    	a35 = 36 ;
    	a69 = 34 ;
    	a76 = 7;
    	a92 = 6;
    	a132 = 7;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 975\n");

    if((a159 == 32 && ((a79 == 32 && (((((input == 4) &&  cf==1 ) && a159 == 32) && a167 == 3) && a31 == 2)) && a13 == 32))) {
printf("POINT: 976\n");
printf("POINT: 977\n");

	if((a7 - 20) < a7){
printf("POINT: 978\n");
	a7  -=  4 ;}
	 else{	
	a7  -=  0;}
    	cf = 0;
    	a30 = 33 ;
    	a190 = 8;
    	a92 = 6;
    	a69 = 34 ;
    	a71 = 2;
    	a35 = 36 ;
    	a76 = 7;
    	a189 = 12;
    	a132 = 7; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm13(int input) {
printf("POINT: 979\n");

    if((((a33 == 34 &&  cf==1 ) && a1 == 32) && (a174 == 2 && ((a167 == 3 && (a120 == 32 && a174 == 2)) && a79 == 32)))) {
printf("POINT: 980\n");
    	calculate_outputm92(input);
    } 
}
 void calculate_outputm95(int input) {
printf("POINT: 981\n");

    if(((a3 == 2 && ((a31 == 2 && (a111 == 3 && a24 == 32)) && a18 == 5)) && (a31 == 2 && ((input == 2) &&  cf==1 )))) {
printf("POINT: 982\n");
printf("POINT: 983\n");

	if((a91 + 20) > a91){
printf("POINT: 984\n");
	a91  +=  1 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a69 = 34 ;
    	a190 = 8;
    	a76 = 7;
    	a30 = 33 ;
    	a35 = 36 ;
    	a132 = 7; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm97(int input) {
printf("POINT: 985\n");

    if(((a159 == 32 && ((input == 4) &&  cf==1 )) && (a141 == 32 && (a76 == 6 && (a57 == 9 && (a174 == 2 && a57 == 9)))))) {
printf("POINT: 986\n");
printf("POINT: 987\n");

	if((a73 + 20) > a73){
printf("POINT: 988\n");
	a73  +=  2 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a18 = 5;
    	a35 = 36 ;
    	a132 = 9;
    	a3 = 3;
    	a109 = 34 ;
    	a92 = 6;
    	a31 = 2;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 989\n");

    if(((a69 == 32 && ((a135 == 32 && a34 == 32) && a101 == 4)) && ((a92 == 5 && ( cf==1  && (input == 1))) && a34 == 32))) {
printf("POINT: 990\n");
printf("POINT: 991\n");

	if((a151 - 20) < a151){
printf("POINT: 992\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
printf("POINT: 993\n");

	if((a95 - 20) < a95){
printf("POINT: 994\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a189 = 10;
    	a120 = 34 ;
    	a35 = 36 ;
    	a92 = 4;
    	a18 = 5;
    	a132 = 6;
    	a169 = 10;
    	a31 = 1;
    	a109 = 34 ;
    	a52 = 7; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 995\n");

    if((((a57 == 9 && ((((input == 5) &&  cf==1 ) && a76 == 6) && a190 == 7)) && (a34 == 32 && (a24 == 32 && a25 == 32))) && a73 <= -27)) {
printf("POINT: 996\n");
    	cf = 0;
    	a164 = 35 ;
    	a136 = 10; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 997\n");

    if((((a167 == 3 && (a189 == 11 && ( cf==1  && (input == 3)))) && (a1 == 32 && ((a101 == 4 && a71 == 3) && a169 == 11))) && a134 >= 29)) {
printf("POINT: 998\n");
printf("POINT: 999\n");

	if((a151 + 20) > a151){
printf("POINT: 1000\n");
	a151  +=  3 ;}
	 else{	
	a151  +=  0;}
    	cf = 0;
    	a174 = 3;
    	a48 = 34 ;
    	a123 = 35 ;
    	a169 = 12;
    	a92 = 6;
    	a79 = 34 ;
    	a57 = 10;
    	a159 = 34 ;
    	a109 = 34 ;
    	a101 = 5;
    	a167 = 4;
    	a35 = 34 ;
    	a34 = 34 ;
    	a25 = 34 ;
    	a28 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1001\n");

    if(((a79 == 32 && (( cf==1  && (input == 2)) && a169 == 11)) && (a69 == 32 && (a169 == 11 && (a92 == 5 && a135 == 32))))) {
printf("POINT: 1002\n");
    	cf = 0;
    	a31 = 2;
    	a35 = 36 ;
    	a190 = 6;
    	a109 = 34 ;
    	a179 = 33 ;
    	a24 = 34 ;
    	a18 = 4;
    	a132 = 5; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm14(int input) {
printf("POINT: 1003\n");

    if((((a18 == 5 && (a40 == 7 &&  cf==1 )) && a109 == 32) && (a1 == 32 && ((a48 == 32 && a48 == 32) && a18 == 5)))) {
printf("POINT: 1004\n");
    	calculate_outputm95(input);
    } 
printf("POINT: 1005\n");

    if((((a109 == 32 && ((a48 == 32 && ( cf==1  && a40 == 9)) && a48 == 32)) && a48 == 32) && (a65 == 32 && a79 == 32))) {
printf("POINT: 1006\n");
    	calculate_outputm97(input);
    } 
}
 void calculate_outputm101(int input) {
printf("POINT: 1007\n");

    if((((a53 == 8 && (a25 == 32 && (a169 == 11 && a159 == 32))) && a24 == 32) && (((input == 1) &&  cf==1 ) && a169 == 11))) {
printf("POINT: 1008\n");
printf("POINT: 1009\n");

	if((a176 + 20) > a176){
printf("POINT: 1010\n");
	a176  +=  2 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 1011\n");

	if((a19 + 20) > a19){
printf("POINT: 1012\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1013\n");

	if((a130 - 20) < a130){
printf("POINT: 1014\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1015\n");

	if((a165 - 20) < a165){
printf("POINT: 1016\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a32 = 34 ;
    	a35 = 35 ;
    	a40 = 13; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1017\n");

    if((((a13 == 32 && a48 == 32) && a79 == 32) && (a159 == 32 && ((( cf==1  && (input == 3)) && a174 == 2) && a190 == 7)))) {
printf("POINT: 1018\n");
printf("POINT: 1019\n");

	if((a107 - 20) < a107){
printf("POINT: 1020\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1021\n");

	if((a58 - 20) < a58){
printf("POINT: 1022\n");
	a58  -=  3 ;}
	 else{	
	a58  -=  0;}
printf("POINT: 1023\n");

	if((a127 + 20) > a127){
printf("POINT: 1024\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1025\n");

	if((a10 + 20) > a10){
printf("POINT: 1026\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1027\n");

	if((a165 + 20) > a165){
printf("POINT: 1028\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 1029\n");

	if((a6 + 20) > a6){
printf("POINT: 1030\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a136 = 15;
    	a40 = 11; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1031\n");

    if(((a3 == 2 && a159 == 32) && (a174 == 2 && (a101 == 4 && (a190 == 7 && (a79 == 32 && ((input == 5) &&  cf==1 ))))))) {
printf("POINT: 1032\n");
printf("POINT: 1033\n");

	if((a19 + 20) > a19){
printf("POINT: 1034\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1035\n");

	if((a7 + 20) > a7){
printf("POINT: 1036\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 1037\n");

	if((a130 + 20) > a130){
printf("POINT: 1038\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1039\n");

	if((a153 + 20) > a153){
printf("POINT: 1040\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1041\n");

	if((a107 - 20) < a107){
printf("POINT: 1042\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1043\n");

	if((a10 + 20) > a10){
printf("POINT: 1044\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1045\n");

	if((a6 + 20) > a6){
printf("POINT: 1046\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 1047\n");

    	if((((a121 == 11 && a61 == 34) && a63 == 13) && !(a70 == 4))) {
printf("POINT: 1048\n");
    	a167 = 8;
    	a13 = 34 ;
    	a25 = 36 ;
    	a174 = 6;
    	a38 = 35 ;
    	a3 = 3;
    	a190 = 13;
    	a169 = 16;
    	a57 = 15;
    	a141 = 35 ;
    	a109 = 34 ;
    	a18 = 5;
    	a35 = 33 ;
    	a148 = 10; 
    	}else {
printf("POINT: 1050\n");
    	a35 = 36 ;
    	a132 = 6;
    	a52 = 3;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1051\n");

    if(((a24 == 32 && ( cf==1  && (input == 4))) && (a118 == 32 && (a101 == 4 && ((a1 == 32 && a190 == 7) && a169 == 11))))) {
printf("POINT: 1052\n");
printf("POINT: 1053\n");

	if((a19 + 20) > a19){
printf("POINT: 1054\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1055\n");

	if((a171 - 20) < a171){
printf("POINT: 1056\n");
	a171  -=  2 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 1057\n");

	if((a153 + 20) > a153){
printf("POINT: 1058\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1059\n");

	if((a107 + 20) > a107){
printf("POINT: 1060\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1061\n");

	if((a127 + 20) > a127){
printf("POINT: 1062\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
printf("POINT: 1063\n");

    	if((!(a164 == 34) || a167 == 9)) {
printf("POINT: 1064\n");
    	a136 = 17;
    	a31 = 1;
    	a111 = 5;
    	a109 = 33 ;
    	a24 = 36 ;
    	a34 = 34 ;
    	a121 = 10; 
    	}else {
printf("POINT: 1066\n");
    	a35 = 33 ;
    	a148 = 11;
    	a70 = 4;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1067\n");

    if((((a190 == 7 && (((input == 2) &&  cf==1 ) && a169 == 11)) && a189 == 11) && (a109 == 32 && (a69 == 32 && a109 == 32)))) {
printf("POINT: 1068\n");
printf("POINT: 1069\n");

	if((a19 + 20) > a19){
printf("POINT: 1070\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1071\n");

	if((a171 - 20) < a171){
printf("POINT: 1072\n");
	a171  -=  2 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 1073\n");

	if((a146 - 20) < a146){
printf("POINT: 1074\n");
	a146  -=  1 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 1075\n");

	if((a107 - 20) < a107){
printf("POINT: 1076\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1077\n");

	if((a10 + 20) > a10){
printf("POINT: 1078\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1079\n");

	if((a165 - 20) < a165){
printf("POINT: 1080\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a35 = 34 ;
    	a123 = 35 ;
    	a28 = 4; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm104(int input) {
printf("POINT: 1081\n");

    if(((a57 == 9 && (a111 == 3 && (a120 == 32 && a118 == 32))) && ((((input == 2) &&  cf==1 ) && a118 == 32) && a141 == 32))) {
printf("POINT: 1082\n");
printf("POINT: 1083\n");

	if((a182 - 20) < a182){
printf("POINT: 1084\n");
	a182  -=  4 ;}
	 else{	
	a182  -=  0;}
    	cf = 0;
printf("POINT: 1085\n");

    	if((!(a65 == 34) && (!(a12 == 34) && (a155 == 17 || (a59 == 32 || a169 == 14))))) {
printf("POINT: 1086\n");
    	a159 = 34 ;
    	a190 = 8;
    	a34 = 34 ;
    	a57 = 10;
    	a120 = 34 ;
    	a13 = 34 ;
    	a118 = 34 ;
    	a24 = 34 ;
    	a169 = 12;
    	a40 = 8;
    	a111 = 4;
    	a71 = 4;
    	a31 = 3;
    	a167 = 4;
    	a189 = 12;
    	a35 = 35 ;
    	a101 = 5;
    	a3 = 2;
    	a174 = 3;
    	a48 = 34 ;
    	a92 = 6;
    	a109 = 34 ;
    	a135 = 34 ;
    	a79 = 34 ;
    	a65 = 34 ;
    	a1 = 34 ;
    	a63 = 7; 
    	}else {
printf("POINT: 1088\n");
    	a48 = 33 ;
    	a174 = 1;
    	a111 = 2;
    	a18 = 4;
    	a120 = 33 ;
    	a1 = 33 ;
    	a35 = 33 ;
    	a57 = 8;
    	a38 = 33 ;
    	a71 = 2;
    	a101 = 3;
    	a159 = 33 ;
    	a141 = 33 ;
    	a34 = 33 ;
    	a189 = 12;
    	a65 = 33 ;
    	a167 = 2;
    	a190 = 6;
    	a148 = 10;
    	}printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm107(int input) {
printf("POINT: 1089\n");

    if((((((a120 == 32 && a76 == 6) && a25 == 32) && a169 == 11) && ((( cf==1  && (input == 2)) && a135 == 32) && a174 == 2)) && a182 >= 4)) {
printf("POINT: 1090\n");
printf("POINT: 1091\n");

	if((a195 + 20) > a195){
printf("POINT: 1092\n");
	a195  +=  4 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a189 = 10;
    	a18 = 4;
    	a25 = 33 ;
    	a24 = 33 ;
    	a174 = 1;
    	a148 = 13;
    	a101 = 3;
    	a57 = 8;
    	a190 = 6;
    	a35 = 33 ;
    	a92 = 4;
    	a79 = 33 ;
    	a13 = 33 ;
    	a141 = 33 ;
    	a169 = 10;
    	a87 = 13; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1093\n");

    if(((a169 == 11 && ((( cf==1  && (input == 5)) && a25 == 32) && a159 == 32)) && (a57 == 9 && (a174 == 2 && a167 == 3)))) {
printf("POINT: 1094\n");
    	cf = 0;
    	a76 = 7;
    	a69 = 34 ;
    	a169 = 12;
    	a71 = 4;
    	a101 = 5;
    	a35 = 35 ;
    	a141 = 34 ;
    	a40 = 9;
    	a79 = 34 ;
    	a189 = 12;
    	a120 = 34 ;
    	a34 = 34 ;
    	a135 = 34 ;
    	a1 = 34 ;
    	a53 = 9;
    	a111 = 4;
    	a13 = 34 ;
    	a57 = 10;
    	a174 = 3;
    	a65 = 34 ;
    	a190 = 8;
    	a18 = 6;
    	a92 = 6;
    	a48 = 34 ;
    	a24 = 34 ;
    	a159 = 34 ;
    	a25 = 34 ;
    	a167 = 4;
    	a3 = 3;
    	a31 = 3;
    	a106 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1095\n");

    if((((a24 == 32 && (( cf==1  && (input == 4)) && a92 == 5)) && (a79 == 32 && ((a190 == 7 && a92 == 5) && a159 == 32))) && a98 <= -5)) {
printf("POINT: 1096\n");
printf("POINT: 1097\n");

	if((a171 - 20) < a171){
printf("POINT: 1098\n");
	a171  -=  3 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a25 = 33 ;
    	a57 = 8;
    	a159 = 33 ;
    	a148 = 16;
    	a48 = 33 ;
    	a18 = 4;
    	a189 = 10;
    	a174 = 1;
    	a141 = 33 ;
    	a190 = 6;
    	a35 = 33 ;
    	a24 = 33 ;
    	a135 = 33 ;
    	a55 = 7; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1099\n");

    if(((((((input == 3) &&  cf==1 ) && a34 == 32) && a92 == 5) && (((a167 == 3 && a174 == 2) && a189 == 11) && a159 == 32)) && (a127 % 2==0))) {
printf("POINT: 1100\n");
printf("POINT: 1101\n");

	if((a47 + 20) > a47){
printf("POINT: 1102\n");
	a47  +=  3 ;}
	 else{	
	a47  +=  0;}
    	cf = 0;
    	a148 = 13;
    	a35 = 33 ;
    	a87 = 12; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1103\n");

    if((((((((input == 1) &&  cf==1 ) && a92 == 5) && a69 == 32) && a92 == 5) && (a65 == 32 && (a48 == 32 && a13 == 32))) && (a10 % 2==0))) {
printf("POINT: 1104\n");
printf("POINT: 1105\n");

	if((a91 + 20) > a91){
printf("POINT: 1106\n");
	a91  +=  1 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a17 = 36 ;
    	a148 = 15; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm15(int input) {
printf("POINT: 1107\n");

    if(((a135 == 32 && (a65 == 32 && ((a190 == 7 && a3 == 2) && a13 == 32))) && (a24 == 32 && (a155 == 10 &&  cf==1 )))) {
printf("POINT: 1108\n");
    	calculate_outputm101(input);
    } 
printf("POINT: 1109\n");

    if(((((a34 == 32 && (a101 == 4 && (a155 == 13 &&  cf==1 ))) && a71 == 3) && a190 == 7) && (a48 == 32 && a65 == 32))) {
printf("POINT: 1110\n");
    	calculate_outputm104(input);
    } 
printf("POINT: 1111\n");

    if(((a48 == 32 && (a155 == 17 &&  cf==1 )) && (((a189 == 11 && (a13 == 32 && a48 == 32)) && a159 == 32) && a190 == 7))) {
printf("POINT: 1112\n");
    	calculate_outputm107(input);
    } 
}
 void calculate_outputm108(int input) {
printf("POINT: 1113\n");

    if((((a53 == 8 && a79 == 32) && a189 == 11) && ((a57 == 9 && (a111 == 3 && ( cf==1  && (input == 2)))) && a13 == 32))) {
printf("POINT: 1114\n");
printf("POINT: 1115\n");

	if((a7 - 20) < a7){
printf("POINT: 1116\n");
	a7  -=  1 ;}
	 else{	
	a7  -=  0;}
    	cf = 0;
printf("POINT: 1117\n");

    	if(((a106 == 6 && (!(a79 == 35) || a63 == 9)) && a143 == 34)) {
printf("POINT: 1118\n");
    	a92 = 5;
    	a35 = 36 ;
    	a71 = 3;
    	a190 = 8;
    	a34 = 32 ;
    	a76 = 6;
    	a1 = 32 ;
    	a24 = 32 ;
    	a25 = 32 ;
    	a31 = 3;
    	a109 = 32 ;
    	a120 = 32 ;
    	a159 = 32 ;
    	a169 = 11;
    	a135 = 32 ;
    	a132 = 6;
    	a52 = 6; 
    	}else {
printf("POINT: 1120\n");
    	a92 = 6;
    	a24 = 32 ;
    	a30 = 33 ;
    	a169 = 11;
    	a35 = 36 ;
    	a109 = 32 ;
    	a69 = 34 ;
    	a31 = 2;
    	a34 = 32 ;
    	a135 = 32 ;
    	a190 = 8;
    	a159 = 32 ;
    	a189 = 12;
    	a76 = 7;
    	a1 = 32 ;
    	a120 = 32 ;
    	a25 = 32 ;
    	a132 = 7;
    	}printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1121\n");

    if(((a57 == 9 && ((((a69 == 32 && a79 == 32) && a13 == 32) && a190 == 7) && a69 == 32)) && ( cf==1  && (input == 1)))) {
printf("POINT: 1122\n");
    	cf = 0;
printf("POINT: 1123\n");

    	if((a79 == 36 && (!(a53 == 10) || (a132 == 5 && (a143 == 36 && !(a69 == 36)))))) {
printf("POINT: 1124\n");
    	a111 = 2;
    	a141 = 33 ;
    	a174 = 1;
    	a148 = 16;
    	a101 = 3;
    	a13 = 33 ;
    	a118 = 33 ;
    	a18 = 4;
    	a167 = 2;
    	a48 = 33 ;
    	a35 = 33 ;
    	a79 = 34 ;
    	a69 = 33 ;
    	a57 = 8;
    	a190 = 6;
    	a53 = 7;
    	a189 = 10;
    	a55 = 6; 
    	}else {
printf("POINT: 1126\n");
    	a167 = 4;
    	a76 = 6;
    	a18 = 6;
    	a101 = 5;
    	a53 = 9;
    	a48 = 34 ;
    	a69 = 34 ;
    	a135 = 34 ;
    	a159 = 34 ;
    	a120 = 34 ;
    	a92 = 6;
    	a57 = 10;
    	a174 = 3;
    	a79 = 34 ;
    	a13 = 34 ;
    	a190 = 8;
    	a141 = 34 ;
    	a24 = 34 ;
    	a31 = 3;
    	a35 = 34 ;
    	a111 = 4;
    	a189 = 12;
    	a169 = 12;
    	a1 = 34 ;
    	a118 = 34 ;
    	a123 = 32 ;
    	a25 = 34 ;
    	a71 = 3;
    	a65 = 34 ;
    	a14 = 4;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm109(int input) {
printf("POINT: 1127\n");

    if(((a92 == 5 && ((a174 == 2 && ( cf==1  && (input == 2))) && a101 == 4)) && ((a120 == 32 && a135 == 32) && a159 == 32))) {
printf("POINT: 1128\n");
printf("POINT: 1129\n");

	if((a176 - 20) < a176){
printf("POINT: 1130\n");
	a176  -=  3 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 1131\n");

	if((a19 + 20) > a19){
printf("POINT: 1132\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1133\n");

	if((a134 - 20) < a134){
printf("POINT: 1134\n");
	a134  -=  2 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 1135\n");

	if((a153 + 20) > a153){
printf("POINT: 1136\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1137\n");

	if((a107 - 20) < a107){
printf("POINT: 1138\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1139\n");

	if((a127 + 20) > a127){
printf("POINT: 1140\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1141\n");

	if((a165 - 20) < a165){
printf("POINT: 1142\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a35 = 36 ;
    	a30 = 35 ;
    	a132 = 7; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1143\n");

    if((((a167 == 3 && (a174 == 2 && a3 == 2)) && a76 == 6) && ((( cf==1  && (input == 1)) && a13 == 32) && a79 == 32))) {
printf("POINT: 1144\n");
printf("POINT: 1145\n");

	if((a19 + 20) > a19){
printf("POINT: 1146\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1147\n");

	if((a151 - 20) < a151){
printf("POINT: 1148\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
printf("POINT: 1149\n");

	if((a107 - 20) < a107){
printf("POINT: 1150\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1151\n");

	if((a127 + 20) > a127){
printf("POINT: 1152\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1153\n");

	if((a10 + 20) > a10){
printf("POINT: 1154\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a136 = 13;
    	a197 = 15; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1155\n");

    if((((( cf==1  && (input == 5)) && a169 == 11) && a111 == 3) && (a118 == 32 && ((a57 == 9 && a31 == 2) && a18 == 5)))) {
printf("POINT: 1156\n");
printf("POINT: 1157\n");

	if((a19 + 20) > a19){
printf("POINT: 1158\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1159\n");

	if((a195 + 20) > a195){
printf("POINT: 1160\n");
	a195  +=  4 ;}
	 else{	
	a195  +=  0;}
printf("POINT: 1161\n");

	if((a153 + 20) > a153){
printf("POINT: 1162\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1163\n");

	if((a127 + 20) > a127){
printf("POINT: 1164\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
printf("POINT: 1165\n");

    	if(a83 == 12) {
printf("POINT: 1166\n");
    	a18 = 7;
    	a135 = 35 ;
    	a120 = 34 ;
    	a190 = 12;
    	a35 = 36 ;
    	a76 = 7;
    	a169 = 13;
    	a92 = 8;
    	a179 = 34 ;
    	a71 = 9;
    	a31 = 7;
    	a109 = 34 ;
    	a132 = 5; 
    	}else {
printf("POINT: 1168\n");
    	a190 = 7;
    	a59 = 34 ;
    	a111 = 7;
    	a120 = 34 ;
    	a13 = 35 ;
    	a35 = 36 ;
    	a18 = 9;
    	a31 = 7;
    	a71 = 7;
    	a57 = 11;
    	a109 = 34 ;
    	a92 = 6;
    	a53 = 12;
    	a132 = 11;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1169\n");

    if(((a169 == 11 && (a25 == 32 && (a69 == 32 && (a3 == 2 && (a79 == 32 && a135 == 32))))) && ( cf==1  && (input == 3)))) {
printf("POINT: 1170\n");
printf("POINT: 1171\n");

	if((a19 + 20) > a19){
printf("POINT: 1172\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1173\n");

	if((a130 - 20) < a130){
printf("POINT: 1174\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1175\n");

	if((a153 + 20) > a153){
printf("POINT: 1176\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1177\n");

	if((a107 - 20) < a107){
printf("POINT: 1178\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1179\n");

	if((a127 + 20) > a127){
printf("POINT: 1180\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1181\n");

	if((a10 + 20) > a10){
printf("POINT: 1182\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1183\n");

	if((a47 + 20) > a47){
printf("POINT: 1184\n");
	a47  +=  3 ;}
	 else{	
	a47  +=  0;}
printf("POINT: 1185\n");

	if((a6 + 20) > a6){
printf("POINT: 1186\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a25 = 33 ;
    	a1 = 33 ;
    	a34 = 36 ;
    	a120 = 33 ;
    	a57 = 13;
    	a174 = 4;
    	a189 = 17;
    	a167 = 5;
    	a101 = 9;
    	a118 = 33 ;
    	a169 = 10;
    	a13 = 35 ;
    	a18 = 10;
    	a3 = 1;
    	a65 = 32 ;
    	a92 = 7;
    	a79 = 32 ;
    	a40 = 7;
    	a69 = 32 ;
    	a76 = 9;
    	a135 = 32 ;
    	a53 = 8;
    	a159 = 33 ;
    	a35 = 35 ;
    	a24 = 35 ;
    	a48 = 32 ;
    	a70 = 11; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1187\n");

    if(((a159 == 32 && ((a3 == 2 && a65 == 32) && a13 == 32)) && ((a120 == 32 && ((input == 4) &&  cf==1 )) && a159 == 32))) {
printf("POINT: 1188\n");
printf("POINT: 1189\n");

	if((a19 + 20) > a19){
printf("POINT: 1190\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1191\n");

	if((a153 + 20) > a153){
printf("POINT: 1192\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1193\n");

	if((a107 - 20) < a107){
printf("POINT: 1194\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1195\n");

	if((a127 + 20) > a127){
printf("POINT: 1196\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1197\n");

	if((a98 + 20) > a98){
printf("POINT: 1198\n");
	a98  +=  4 ;}
	 else{	
	a98  +=  0;}
    	cf = 0;
    	a132 = 9;
    	a35 = 36 ;
    	a56 = 9; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm110(int input) {
printf("POINT: 1199\n");

    if((((a69 == 32 && ((a109 == 32 && ( cf==1  && (input == 4))) && a118 == 32)) && ((a71 == 3 && a48 == 32) && a169 == 11)) && a98 <= -5)) {
printf("POINT: 1200\n");
printf("POINT: 1201\n");

	if((a105 - 20) < a105){
printf("POINT: 1202\n");
	a105  -=  1 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a189 = 10;
    	a35 = 33 ;
    	a111 = 2;
    	a53 = 7;
    	a57 = 8;
    	a174 = 1;
    	a24 = 33 ;
    	a190 = 6;
    	a135 = 33 ;
    	a141 = 33 ;
    	a148 = 16;
    	a71 = 2;
    	a159 = 33 ;
    	a48 = 33 ;
    	a55 = 7; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1203\n");

    if((((a76 == 6 && (a169 == 11 && (a24 == 32 && (( cf==1  && (input == 2)) && a71 == 3)))) && (a24 == 32 && a167 == 3)) && a182 >= 4)) {
printf("POINT: 1204\n");
    	cf = 0;
    	a92 = 4;
    	a111 = 2;
    	a3 = 1;
    	a174 = 1;
    	a141 = 33 ;
    	a24 = 33 ;
    	a79 = 33 ;
    	a35 = 33 ;
    	a169 = 10;
    	a57 = 8;
    	a189 = 10;
    	a148 = 13;
    	a101 = 3;
    	a190 = 6;
    	a87 = 13; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 1205\n");

    if(((((a174 == 2 && ((input == 3) &&  cf==1 )) && a111 == 3) && ((a159 == 32 && (a53 == 8 && a48 == 32)) && a101 == 4)) && (a127 % 2==0))) {
printf("POINT: 1206\n");
printf("POINT: 1207\n");

	if((a5 - 20) < a5){
printf("POINT: 1208\n");
	a5  -=  3 ;}
	 else{	
	a5  -=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a148 = 13;
    	a87 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1209\n");

    if((((((a34 == 32 && a92 == 5) && a34 == 32) && a111 == 3) && a167 == 3) && (( cf==1  && (input == 5)) && a101 == 4))) {
printf("POINT: 1210\n");
printf("POINT: 1211\n");

	if((a171 - 20) < a171){
printf("POINT: 1212\n");
	a171  -=  1 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a189 = 12;
    	a25 = 34 ;
    	a40 = 9;
    	a159 = 34 ;
    	a57 = 10;
    	a24 = 34 ;
    	a169 = 12;
    	a190 = 8;
    	a3 = 3;
    	a109 = 34 ;
    	a69 = 34 ;
    	a48 = 34 ;
    	a31 = 3;
    	a18 = 6;
    	a118 = 34 ;
    	a76 = 7;
    	a141 = 34 ;
    	a167 = 4;
    	a92 = 6;
    	a79 = 34 ;
    	a1 = 34 ;
    	a111 = 4;
    	a35 = 35 ;
    	a71 = 4;
    	a174 = 3;
    	a13 = 34 ;
    	a34 = 34 ;
    	a135 = 34 ;
    	a101 = 5;
    	a53 = 9;
    	a106 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1213\n");

    if((((a1 == 32 && (a1 == 32 && ( cf==1  && (input == 1)))) && (((a92 == 5 && a92 == 5) && a48 == 32) && a135 == 32)) && (a10 % 2==0))) {
printf("POINT: 1214\n");
printf("POINT: 1215\n");

	if((a47 + 20) > a47){
printf("POINT: 1216\n");
	a47  +=  2 ;}
	 else{	
	a47  +=  0;}
    	cf = 0;
    	a17 = 36 ;
    	a35 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm111(int input) {
printf("POINT: 1217\n");

    if(((a92 == 5 && a57 == 9) && ((((a3 == 2 && ( cf==1  && (input == 1))) && a76 == 6) && a18 == 5) && a120 == 32))) {
printf("POINT: 1218\n");
printf("POINT: 1219\n");

	if((a105 + 20) > a105){
printf("POINT: 1220\n");
	a105  +=  2 ;}
	 else{	
	a105  +=  0;}
printf("POINT: 1221\n");

	if((a73 - 20) < a73){
printf("POINT: 1222\n");
	a73  -=  2 ;}
	 else{	
	a73  -=  0;}
printf("POINT: 1223\n");

	if((a153 + 20) > a153){
printf("POINT: 1224\n");
	a153  +=  2 ;}
	 else{	
	a153  +=  0;}
    	cf = 0;
    	a53 = 7;
    	a148 = 16;
    	a18 = 4;
    	a120 = 33 ;
    	a48 = 33 ;
    	a92 = 4;
    	a101 = 3;
    	a31 = 1;
    	a190 = 6;
    	a35 = 33 ;
    	a118 = 33 ;
    	a34 = 34 ;
    	a141 = 33 ;
    	a167 = 2;
    	a174 = 1;
    	a57 = 8;
    	a76 = 5;
    	a189 = 10;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm16(int input) {
printf("POINT: 1225\n");

    if(((a3 == 2 && ((a121 == 9 &&  cf==1 ) && a57 == 9)) && (((a13 == 32 && a57 == 9) && a167 == 3) && a18 == 5))) {
printf("POINT: 1226\n");
    	calculate_outputm108(input);
    } 
printf("POINT: 1227\n");

    if((((a174 == 2 && a118 == 32) && a76 == 6) && (a118 == 32 && ((a3 == 2 && (a121 == 10 &&  cf==1 )) && a135 == 32)))) {
printf("POINT: 1228\n");
    	calculate_outputm109(input);
    } 
printf("POINT: 1229\n");

    if(((a3 == 2 && ((( cf==1  && a121 == 13) && a34 == 32) && a79 == 32)) && (a135 == 32 && (a48 == 32 && a48 == 32)))) {
printf("POINT: 1230\n");
    	calculate_outputm110(input);
    } 
printf("POINT: 1231\n");

    if(((a190 == 7 && (a65 == 32 && a31 == 2)) && (a34 == 32 && (a3 == 2 && (( cf==1  && a121 == 14) && a189 == 11))))) {
printf("POINT: 1232\n");
    	calculate_outputm111(input);
    } 
}
 void calculate_outputm115(int input) {
printf("POINT: 1233\n");

    if(((a53 == 9 && ((((input == 2) &&  cf==1 ) && a92 == 6) && a79 == 34)) && (a92 == 6 && (a189 == 12 && a118 == 34)))) {
printf("POINT: 1234\n");
printf("POINT: 1235\n");

	if((a91 - 20) < a91){
printf("POINT: 1236\n");
	a91  -=  2 ;}
	 else{	
	a91  -=  0;}
printf("POINT: 1237\n");

	if((a105 - 20) < a105){
printf("POINT: 1238\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a48 = 32 ;
    	a101 = 4;
    	a24 = 32 ;
    	a71 = 3;
    	a34 = 32 ;
    	a118 = 32 ;
    	a65 = 32 ;
    	a76 = 6;
    	a57 = 9;
    	a18 = 5;
    	a79 = 32 ;
    	a169 = 11;
    	a35 = 32 ;
    	a111 = 3;
    	a92 = 5;
    	a25 = 32 ;
    	a1 = 32 ;
    	a135 = 32 ;
    	a174 = 2;
    	a33 = 34 ;
    	a109 = 32 ;
    	a189 = 11;
    	a53 = 8;
    	a31 = 2;
    	a159 = 32 ;
    	a3 = 2;
    	a136 = 14; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm116(int input) {
printf("POINT: 1239\n");

    if((((a34 == 34 && a71 == 4) && a189 == 12) && ((a71 == 4 && (( cf==1  && (input == 2)) && a76 == 7)) && a3 == 3))) {
printf("POINT: 1240\n");
    	cf = 0;
    	a35 = 35 ;
    	a189 = 12;
    	a13 = 32 ;
    	a71 = 2;
    	a25 = 32 ;
    	a79 = 32 ;
    	a40 = 9;
    	a18 = 5;
    	a65 = 32 ;
    	a141 = 32 ;
    	a190 = 8;
    	a31 = 2;
    	a135 = 32 ;
    	a3 = 2;
    	a1 = 32 ;
    	a106 = 12; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1241\n");

    if((((a159 == 34 && (a18 == 6 && ((input == 1) &&  cf==1 ))) && a141 == 34) && (a141 == 34 && (a141 == 34 && a57 == 10)))) {
printf("POINT: 1242\n");
printf("POINT: 1243\n");

	if((a95 - 20) < a95){
printf("POINT: 1244\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
printf("POINT: 1245\n");

    	if((a79 == 33 || !(a188 == 36))) {
printf("POINT: 1246\n");
    	a190 = 6;
    	a167 = 2;
    	a92 = 4;
    	a118 = 33 ;
    	a48 = 33 ;
    	a69 = 33 ;
    	a3 = 1;
    	a79 = 33 ;
    	a53 = 7;
    	a148 = 13;
    	a71 = 2;
    	a31 = 1;
    	a189 = 10;
    	a111 = 2;
    	a135 = 33 ;
    	a35 = 33 ;
    	a24 = 33 ;
    	a169 = 10;
    	a141 = 33 ;
    	a57 = 8;
    	a18 = 4;
    	a120 = 33 ;
    	a25 = 33 ;
    	a159 = 33 ;
    	a101 = 3;
    	a174 = 1;
    	a76 = 5;
    	a87 = 14; 
    	}else {
printf("POINT: 1248\n");
    	a135 = 33 ;
    	a35 = 35 ;
    	a25 = 33 ;
    	a13 = 34 ;
    	a24 = 33 ;
    	a18 = 4;
    	a31 = 1;
    	a141 = 33 ;
    	a159 = 33 ;
    	a92 = 4;
    	a65 = 34 ;
    	a40 = 12;
    	a189 = 10;
    	a71 = 2;
    	a48 = 33 ;
    	a53 = 7;
    	a122 = 6;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm120(int input) {
printf("POINT: 1249\n");

    if(((a111 == 4 && ((a159 == 34 && a159 == 34) && a159 == 34)) && (a189 == 12 && (( cf==1  && (input == 2)) && a13 == 34)))) {
printf("POINT: 1250\n");
printf("POINT: 1251\n");

	if((a7 - 20) < a7){
printf("POINT: 1252\n");
	a7  -=  2 ;}
	 else{	
	a7  -=  0;}
    	cf = 0;
printf("POINT: 1253\n");

    	if(((((!(a3 == 1) && a83 == 12) || !(a71 == 7)) && !(a174 == 5)) && !(a28 == 4))) {
printf("POINT: 1254\n");
    	a18 = 5;
    	a71 = 4;
    	a57 = 10;
    	a35 = 35 ;
    	a34 = 34 ;
    	a141 = 32 ;
    	a65 = 34 ;
    	a169 = 12;
    	a53 = 9;
    	a109 = 34 ;
    	a40 = 8;
    	a1 = 34 ;
    	a63 = 7; 
    	}else {
printf("POINT: 1256\n");
    	a18 = 5;
    	a159 = 32 ;
    	a48 = 32 ;
    	a25 = 32 ;
    	a167 = 3;
    	a111 = 3;
    	a31 = 2;
    	a35 = 36 ;
    	a79 = 32 ;
    	a30 = 33 ;
    	a135 = 32 ;
    	a174 = 2;
    	a24 = 32 ;
    	a101 = 4;
    	a13 = 32 ;
    	a120 = 32 ;
    	a118 = 32 ;
    	a141 = 32 ;
    	a132 = 7;
    	}printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm17(int input) {
printf("POINT: 1257\n");

    if(((a18 == 6 && ((a174 == 3 && a1 == 34) && a92 == 6)) && ((a31 == 3 && (a178 == 7 &&  cf==1 )) && a189 == 12))) {
printf("POINT: 1258\n");
    	calculate_outputm115(input);
    } 
printf("POINT: 1259\n");

    if((( cf==1  && a178 == 8) && (a190 == 8 && ((a167 == 4 && (a118 == 34 && (a174 == 3 && a31 == 3))) && a174 == 3)))) {
printf("POINT: 1260\n");
    	calculate_outputm116(input);
    } 
printf("POINT: 1261\n");

    if((((a69 == 34 && a24 == 34) && a167 == 4) && (a120 == 34 && (a141 == 34 && (( cf==1  && a178 == 12) && a24 == 34))))) {
printf("POINT: 1262\n");
    	calculate_outputm120(input);
    } 
}
 void calculate_outputm122(int input) {
printf("POINT: 1263\n");

    if(((a65 == 34 && a135 == 34) && (a109 == 34 && (((a101 == 5 && ( cf==1  && (input == 1))) && a190 == 8) && a13 == 34)))) {
printf("POINT: 1264\n");
printf("POINT: 1265\n");

	if((a151 - 20) < a151){
printf("POINT: 1266\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
    	cf = 0;
printf("POINT: 1267\n");

    	if(a34 == 32) {
printf("POINT: 1268\n");
    	a48 = 32 ;
    	a136 = 17;
    	a167 = 3;
    	a24 = 32 ;
    	a135 = 32 ;
    	a118 = 32 ;
    	a34 = 32 ;
    	a53 = 8;
    	a141 = 32 ;
    	a35 = 32 ;
    	a169 = 11;
    	a69 = 32 ;
    	a25 = 33 ;
    	a189 = 11;
    	a31 = 1;
    	a79 = 32 ;
    	a111 = 3;
    	a101 = 4;
    	a57 = 9;
    	a190 = 7;
    	a1 = 32 ;
    	a159 = 32 ;
    	a18 = 4;
    	a109 = 32 ;
    	a92 = 5;
    	a174 = 2;
    	a13 = 33 ;
    	a121 = 13; 
    	}else {
printf("POINT: 1270\n");
    	a101 = 4;
    	a25 = 32 ;
    	a31 = 2;
    	a79 = 33 ;
    	a30 = 32 ;
    	a65 = 32 ;
    	a159 = 33 ;
    	a92 = 5;
    	a13 = 32 ;
    	a69 = 32 ;
    	a135 = 33 ;
    	a174 = 2;
    	a118 = 32 ;
    	a24 = 32 ;
    	a35 = 36 ;
    	a34 = 32 ;
    	a109 = 32 ;
    	a18 = 5;
    	a57 = 8;
    	a48 = 32 ;
    	a120 = 32 ;
    	a53 = 8;
    	a189 = 11;
    	a169 = 11;
    	a190 = 6;
    	a111 = 3;
    	a141 = 33 ;
    	a132 = 7;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1271\n");

    if((((a169 == 12 && (a141 == 34 && (( cf==1  && (input == 5)) && a48 == 34))) && (a190 == 8 && (a48 == 34 && a79 == 34))) && a73 <= -27)) {
printf("POINT: 1272\n");
printf("POINT: 1273\n");

	if((a151 + 20) > a151){
printf("POINT: 1274\n");
	a151  +=  3 ;}
	 else{	
	a151  +=  0;}
    	cf = 0;
    	a159 = 32 ;
    	a167 = 3;
    	a169 = 11;
    	a48 = 32 ;
    	a190 = 7;
    	a174 = 2;
    	a25 = 32 ;
    	a141 = 32 ;
    	a79 = 32 ;
    	a35 = 32 ;
    	a24 = 32 ;
    	a92 = 5;
    	a101 = 4;
    	a111 = 3;
    	a164 = 35 ;
    	a136 = 10; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1275\n");

    if(((a189 == 12 && (((( cf==1  && (input == 2)) && a34 == 34) && a34 == 34) && a69 == 34)) && (a120 == 34 && a79 == 34))) {
printf("POINT: 1276\n");
    	cf = 0;
printf("POINT: 1277\n");

    	if((a123 == 34 && (!(a3 == 3) && a87 == 13))) {
printf("POINT: 1278\n");
    	a13 = 32 ;
    	a57 = 9;
    	a118 = 32 ;
    	a179 = 33 ;
    	a69 = 32 ;
    	a92 = 5;
    	a169 = 11;
    	a34 = 32 ;
    	a167 = 3;
    	a189 = 11;
    	a1 = 32 ;
    	a18 = 4;
    	a31 = 2;
    	a120 = 32 ;
    	a25 = 32 ;
    	a35 = 36 ;
    	a174 = 2;
    	a48 = 32 ;
    	a101 = 4;
    	a190 = 6;
    	a65 = 32 ;
    	a159 = 32 ;
    	a79 = 32 ;
    	a111 = 3;
    	a141 = 32 ;
    	a53 = 8;
    	a135 = 32 ;
    	a132 = 5; 
    	}else {
printf("POINT: 1280\n");
    	a92 = 5;
    	a71 = 4;
    	a76 = 7;
    	a25 = 32 ;
    	a3 = 3;
    	a35 = 35 ;
    	a141 = 33 ;
    	a40 = 7;
    	a48 = 32 ;
    	a70 = 8;
    	}printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 1281\n");

    if((((a1 == 34 && (a13 == 34 && (a118 == 34 && ((input == 4) &&  cf==1 )))) && a189 == 12) && (a111 == 4 && a79 == 34))) {
printf("POINT: 1282\n");
printf("POINT: 1283\n");

	if((a105 - 20) < a105){
printf("POINT: 1284\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a132 = 9;
    	a13 = 32 ;
    	a25 = 32 ;
    	a101 = 4;
    	a48 = 32 ;
    	a118 = 32 ;
    	a135 = 32 ;
    	a34 = 32 ;
    	a111 = 3;
    	a190 = 7;
    	a18 = 5;
    	a79 = 32 ;
    	a53 = 8;
    	a120 = 32 ;
    	a159 = 32 ;
    	a174 = 2;
    	a69 = 32 ;
    	a65 = 32 ;
    	a167 = 3;
    	a1 = 32 ;
    	a3 = 3;
    	a141 = 32 ;
    	a31 = 2;
    	a35 = 36 ;
    	a189 = 11;
    	a169 = 11;
    	a24 = 32 ;
    	a57 = 9;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1285\n");

    if((((a31 == 3 && (( cf==1  && (input == 3)) && a109 == 34)) && (a57 == 10 && ((a31 == 3 && a174 == 3) && a31 == 3))) && a134 >= 29)) {
printf("POINT: 1286\n");
printf("POINT: 1287\n");

	if((a151 + 20) > a151){
printf("POINT: 1288\n");
	a151  +=  2 ;}
	 else{	
	a151  +=  0;}
    	cf = 0;
    	a123 = 35 ;
    	a28 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm124(int input) {
printf("POINT: 1289\n");

    if(((a92 == 6 && (a159 == 34 && a76 == 7)) && (((( cf==1  && (input == 4)) && a34 == 34) && a71 == 4) && a24 == 34))) {
printf("POINT: 1290\n");
printf("POINT: 1291\n");

	if((a95 - 20) < a95){
printf("POINT: 1292\n");
	a95  -=  4 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a141 = 32 ;
    	a31 = 2;
    	a35 = 35 ;
    	a135 = 32 ;
    	a189 = 12;
    	a79 = 32 ;
    	a25 = 32 ;
    	a65 = 32 ;
    	a1 = 32 ;
    	a190 = 8;
    	a167 = 4;
    	a3 = 2;
    	a40 = 9;
    	a13 = 32 ;
    	a71 = 2;
    	a18 = 5;
    	a106 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1293\n");

    if((((((input == 5) &&  cf==1 ) && a71 == 4) && a169 == 12) && (a18 == 6 && (a190 == 8 && (a31 == 3 && a174 == 3))))) {
printf("POINT: 1294\n");
    	cf = 0;
    	a57 = 9;
    	a25 = 32 ;
    	a53 = 8;
    	a18 = 5;
    	a109 = 32 ;
    	a3 = 2;
    	a13 = 32 ;
    	a48 = 32 ;
    	a24 = 32 ;
    	a101 = 4;
    	a135 = 32 ;
    	a35 = 32 ;
    	a33 = 34 ;
    	a189 = 11;
    	a65 = 32 ;
    	a111 = 3;
    	a120 = 32 ;
    	a76 = 6;
    	a31 = 2;
    	a69 = 32 ;
    	a34 = 32 ;
    	a118 = 32 ;
    	a174 = 2;
    	a190 = 7;
    	a92 = 5;
    	a159 = 32 ;
    	a71 = 3;
    	a169 = 11;
    	a79 = 32 ;
    	a136 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1295\n");

    if(((a53 == 9 && (((input == 1) &&  cf==1 ) && a65 == 34)) && (((a65 == 34 && a190 == 8) && a174 == 3) && a24 == 34))) {
printf("POINT: 1296\n");
printf("POINT: 1297\n");

	if((a105 - 20) < a105){
printf("POINT: 1298\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a40 = 12;
    	a135 = 33 ;
    	a71 = 2;
    	a92 = 4;
    	a18 = 4;
    	a167 = 4;
    	a159 = 33 ;
    	a141 = 33 ;
    	a24 = 33 ;
    	a53 = 7;
    	a35 = 35 ;
    	a31 = 1;
    	a1 = 33 ;
    	a25 = 33 ;
    	a48 = 33 ;
    	a122 = 6; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1299\n");

    if((((((((a169 == 12 && a111 == 4) && a79 == 34) && a101 == 5) && a53 == 9) && a65 == 34) && ( cf==1  && (input == 2))) && a165 == 3734)) {
printf("POINT: 1300\n");
printf("POINT: 1301\n");

	if((a95 + 20) > a95){
printf("POINT: 1302\n");
	a95  +=  2 ;}
	 else{	
	a95  +=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a17 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1303\n");

    if((((a159 == 34 && (a57 == 10 && (a13 == 34 && ((((input == 3) &&  cf==1 ) && a24 == 34) && a25 == 34)))) && a79 == 34) && a47 <= -1)) {
printf("POINT: 1304\n");
printf("POINT: 1305\n");

	if((a7 + 20) > a7){
printf("POINT: 1306\n");
	a7  +=  1 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a118 = 32 ;
    	a169 = 11;
    	a30 = 35 ;
    	a34 = 32 ;
    	a53 = 8;
    	a174 = 2;
    	a48 = 32 ;
    	a101 = 4;
    	a65 = 32 ;
    	a92 = 5;
    	a25 = 32 ;
    	a35 = 36 ;
    	a132 = 7; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm125(int input) {
printf("POINT: 1307\n");

    if((((a71 == 4 && (a159 == 34 && (a141 == 34 && ( cf==1  && (input == 3))))) && a1 == 34) && (a135 == 34 && a71 == 4))) {
printf("POINT: 1308\n");
printf("POINT: 1309\n");

	if((a19 + 20) > a19){
printf("POINT: 1310\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1311\n");

	if((a153 + 20) > a153){
printf("POINT: 1312\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1313\n");

	if((a127 + 20) > a127){
printf("POINT: 1314\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1315\n");

	if((a98 + 20) > a98){
printf("POINT: 1316\n");
	a98  +=  3 ;}
	 else{	
	a98  +=  0;}
printf("POINT: 1317\n");

	if((a11 + 20) > a11){
printf("POINT: 1318\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 1319\n");

    	if((a119 == 36 && ((a178 == 12 && a34 == 33) && !(a71 == 2)))) {
printf("POINT: 1320\n");
    	a35 = 35 ;
    	a40 = 12;
    	a122 = 10; 
    	}else {
printf("POINT: 1322\n");
    	a35 = 35 ;
    	a40 = 8;
    	a63 = 8;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1323\n");

    if(((((a18 == 6 && (( cf==1  && (input == 1)) && a13 == 34)) && a109 == 34) && a92 == 6) && (a65 == 34 && a92 == 6))) {
printf("POINT: 1324\n");
printf("POINT: 1325\n");

	if((a19 + 20) > a19){
printf("POINT: 1326\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1327\n");

	if((a130 + 20) > a130){
printf("POINT: 1328\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1329\n");

	if((a153 + 20) > a153){
printf("POINT: 1330\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1331\n");

	if((a107 - 20) < a107){
printf("POINT: 1332\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1333\n");

	if((a182 - 20) < a182){
printf("POINT: 1334\n");
	a182  -=  2 ;}
	 else{	
	a182  -=  0;}
printf("POINT: 1335\n");

	if((a127 + 20) > a127){
printf("POINT: 1336\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1337\n");

	if((a165 + 20) > a165){
printf("POINT: 1338\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 1339\n");

	if((a6 + 20) > a6){
printf("POINT: 1340\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a40 = 8;
    	a63 = 14; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1341\n");

    if(((a79 == 34 && ((a109 == 34 && ( cf==1  && (input == 5))) && a48 == 34)) && (a25 == 34 && (a167 == 4 && a76 == 7)))) {
printf("POINT: 1342\n");
printf("POINT: 1343\n");

	if((a19 + 20) > a19){
printf("POINT: 1344\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1345\n");

	if((a95 - 20) < a95){
printf("POINT: 1346\n");
	a95  -=  2 ;}
	 else{	
	a95  -=  0;}
printf("POINT: 1347\n");

	if((a107 - 20) < a107){
printf("POINT: 1348\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1349\n");

	if((a127 + 20) > a127){
printf("POINT: 1350\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
printf("POINT: 1351\n");

    	if(((!(a141 == 35) && ((a30 == 36 || a56 == 11) && !(a52 == 7))) || a61 == 34)) {
printf("POINT: 1352\n");
    	a135 = 35 ;
    	a24 = 32 ;
    	a48 = 34 ;
    	a159 = 36 ;
    	a174 = 2;
    	a111 = 3;
    	a53 = 9;
    	a141 = 32 ;
    	a18 = 5;
    	a31 = 3;
    	a25 = 34 ;
    	a148 = 16;
    	a71 = 7;
    	a35 = 33 ;
    	a55 = 7; 
    	}else {
printf("POINT: 1354\n");
    	a32 = 34 ;
    	a35 = 35 ;
    	a40 = 13;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1355\n");

    if((((a65 == 34 && a174 == 3) && a48 == 34) && (a65 == 34 && (a1 == 34 && (( cf==1  && (input == 4)) && a120 == 34))))) {
printf("POINT: 1356\n");
printf("POINT: 1357\n");

	if((a19 + 20) > a19){
printf("POINT: 1358\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1359\n");

	if((a130 + 20) > a130){
printf("POINT: 1360\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1361\n");

	if((a153 + 20) > a153){
printf("POINT: 1362\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1363\n");

	if((a107 + 20) > a107){
printf("POINT: 1364\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1365\n");

	if((a127 + 20) > a127){
printf("POINT: 1366\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1367\n");

	if((a165 + 20) > a165){
printf("POINT: 1368\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 1369\n");

	if((a5 - 20) < a5){
printf("POINT: 1370\n");
	a5  -=  4 ;}
	 else{	
	a5  -=  0;}
    	cf = 0;
printf("POINT: 1371\n");

    	if((!(a111 == 9) && ((!(a61 == 32) && (!(a188 == 36) || a12 == 33)) &&  cf!=1 ))) {
printf("POINT: 1372\n");
    	a24 = 34 ;
    	a79 = 33 ;
    	a13 = 36 ;
    	a92 = 11;
    	a101 = 7;
    	a159 = 34 ;
    	a109 = 35 ;
    	a120 = 35 ;
    	a189 = 17;
    	a111 = 8;
    	a65 = 35 ;
    	a174 = 7;
    	a141 = 34 ;
    	a71 = 8;
    	a167 = 7;
    	a57 = 13;
    	a132 = 6;
    	a190 = 10;
    	a3 = 1;
    	a48 = 34 ;
    	a1 = 35 ;
    	a25 = 36 ;
    	a135 = 36 ;
    	a53 = 13;
    	a18 = 6;
    	a76 = 12;
    	a31 = 1;
    	a35 = 36 ;
    	a52 = 5; 
    	}else {
printf("POINT: 1374\n");
    	a123 = 33 ;
    	a178 = 10;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1375\n");

    if(((a13 == 34 && a3 == 3) && ((a92 == 6 && (a1 == 34 && (( cf==1  && (input == 2)) && a18 == 6))) && a76 == 7))) {
printf("POINT: 1376\n");
printf("POINT: 1377\n");

	if((a19 + 20) > a19){
printf("POINT: 1378\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
    	cf = 0;
    	a132 = 6;
    	a35 = 36 ;
    	a52 = 3; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm18(int input) {
printf("POINT: 1379\n");

    if(((a169 == 12 && ((a120 == 34 && (a111 == 4 && ( cf==1  && a14 == 4))) && a118 == 34)) && (a57 == 10 && a169 == 12))) {
printf("POINT: 1380\n");
    	calculate_outputm122(input);
    } 
printf("POINT: 1381\n");

    if((((a118 == 34 && a31 == 3) && a18 == 6) && (a13 == 34 && (((a14 == 6 &&  cf==1 ) && a48 == 34) && a53 == 9)))) {
printf("POINT: 1382\n");
    	calculate_outputm124(input);
    } 
printf("POINT: 1383\n");

    if((((a135 == 34 && (a31 == 3 && (a76 == 7 && a159 == 34))) && a174 == 3) && ((a14 == 7 &&  cf==1 ) && a79 == 34))) {
printf("POINT: 1384\n");
    	calculate_outputm125(input);
    } 
}
 void calculate_outputm130(int input) {
printf("POINT: 1385\n");

    if(((a76 == 7 && (a159 == 34 && ((a18 == 6 && ((input == 5) &&  cf==1 )) && a169 == 12))) && (a190 == 8 && a174 == 3))) {
printf("POINT: 1386\n");
    	cf = 0;
printf("POINT: 1387\n");

    	if((a101 == 7 && a83 == 13)) {
printf("POINT: 1388\n");
    	a13 = 34 ;
    	a3 = 3;
    	a111 = 4;
    	a135 = 33 ;
    	a18 = 4;
    	a120 = 34 ;
    	a92 = 4;
    	a40 = 12;
    	a69 = 34 ;
    	a48 = 33 ;
    	a35 = 35 ;
    	a167 = 4;
    	a25 = 33 ;
    	a159 = 33 ;
    	a118 = 34 ;
    	a31 = 1;
    	a122 = 6; 
    	}else {
printf("POINT: 1390\n");
    	a25 = 33 ;
    	a76 = 5;
    	a79 = 33 ;
    	a57 = 8;
    	a148 = 13;
    	a135 = 33 ;
    	a31 = 1;
    	a174 = 1;
    	a169 = 10;
    	a159 = 33 ;
    	a190 = 6;
    	a101 = 3;
    	a48 = 33 ;
    	a65 = 32 ;
    	a92 = 4;
    	a18 = 4;
    	a35 = 33 ;
    	a87 = 14;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm131(int input) {
printf("POINT: 1391\n");

    if(((a71 == 4 && (((a111 == 4 && ( cf==1  && (input == 1))) && a65 == 34) && a25 == 34)) && (a189 == 12 && a101 == 5))) {
printf("POINT: 1392\n");
printf("POINT: 1393\n");

	if((a19 + 20) > a19){
printf("POINT: 1394\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1395\n");

	if((a7 + 20) > a7){
printf("POINT: 1396\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 1397\n");

	if((a146 + 20) > a146){
printf("POINT: 1398\n");
	a146  +=  3 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 1399\n");

	if((a130 - 20) < a130){
printf("POINT: 1400\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1401\n");

	if((a107 + 20) > a107){
printf("POINT: 1402\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
    	cf = 0;
    	a57 = 11;
    	a31 = 4;
    	a92 = 6;
    	a35 = 33 ;
    	a65 = 35 ;
    	a159 = 36 ;
    	a71 = 4;
    	a118 = 36 ;
    	a79 = 34 ;
    	a174 = 4;
    	a135 = 32 ;
    	a25 = 35 ;
    	a167 = 7;
    	a18 = 6;
    	a189 = 15;
    	a109 = 35 ;
    	a1 = 34 ;
    	a141 = 32 ;
    	a24 = 34 ;
    	a76 = 11;
    	a48 = 36 ;
    	a53 = 9;
    	a61 = 34 ;
    	a101 = 8;
    	a190 = 10;
    	a169 = 13;
    	a111 = 7;
    	a13 = 32 ;
    	a34 = 36 ;
    	a120 = 34 ;
    	a148 = 14; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1403\n");

    if(((a13 == 34 && ((((input == 2) &&  cf==1 ) && a65 == 34) && a190 == 8)) && ((a31 == 3 && a190 == 8) && a159 == 34))) {
printf("POINT: 1404\n");
printf("POINT: 1405\n");

	if((a19 + 20) > a19){
printf("POINT: 1406\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1407\n");

	if((a151 + 20) > a151){
printf("POINT: 1408\n");
	a151  +=  4 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 1409\n");

	if((a153 + 20) > a153){
printf("POINT: 1410\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1411\n");

	if((a107 - 20) < a107){
printf("POINT: 1412\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1413\n");

	if((a10 + 20) > a10){
printf("POINT: 1414\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1415\n");

	if((a165 + 20) > a165){
printf("POINT: 1416\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
printf("POINT: 1417\n");

    	if((!(a122 == 9) || a55 == 9)) {
printf("POINT: 1418\n");
    	a92 = 10;
    	a25 = 35 ;
    	a24 = 34 ;
    	a48 = 36 ;
    	a65 = 36 ;
    	a31 = 3;
    	a1 = 35 ;
    	a135 = 35 ;
    	a3 = 6;
    	a190 = 13;
    	a189 = 14;
    	a34 = 36 ;
    	a76 = 11;
    	a174 = 5;
    	a118 = 34 ;
    	a71 = 5;
    	a13 = 35 ;
    	a53 = 12;
    	a101 = 6;
    	a18 = 10;
    	a167 = 9;
    	a169 = 17;
    	a79 = 35 ;
    	a33 = 34 ;
    	a109 = 34 ;
    	a111 = 5;
    	a159 = 33 ;
    	a57 = 11;
    	a35 = 32 ;
    	a136 = 14; 
    	}else {
printf("POINT: 1420\n");
    	a35 = 36 ;
    	a12 = 36 ;
    	a132 = 10;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1421\n");

    if(((a48 == 34 && a167 == 4) && (a1 == 34 && ((a31 == 3 && (( cf==1  && (input == 4)) && a159 == 34)) && a79 == 34)))) {
printf("POINT: 1422\n");
printf("POINT: 1423\n");

	if((a176 + 20) > a176){
printf("POINT: 1424\n");
	a176  +=  3 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 1425\n");

	if((a19 + 20) > a19){
printf("POINT: 1426\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1427\n");

	if((a130 - 20) < a130){
printf("POINT: 1428\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1429\n");

	if((a153 + 20) > a153){
printf("POINT: 1430\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1431\n");

	if((a107 - 20) < a107){
printf("POINT: 1432\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1433\n");

	if((a10 + 20) > a10){
printf("POINT: 1434\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a123 = 35 ;
    	a28 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1435\n");

    if(((a65 == 34 && (((input == 5) &&  cf==1 ) && a79 == 34)) && (a79 == 34 && ((a53 == 9 && a65 == 34) && a118 == 34)))) {
printf("POINT: 1436\n");
printf("POINT: 1437\n");

	if((a19 + 20) > a19){
printf("POINT: 1438\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1439\n");

	if((a7 + 20) > a7){
printf("POINT: 1440\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 1441\n");

	if((a146 + 20) > a146){
printf("POINT: 1442\n");
	a146  +=  1 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 1443\n");

	if((a130 + 20) > a130){
printf("POINT: 1444\n");
	a130  +=  2 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1445\n");

	if((a153 + 20) > a153){
printf("POINT: 1446\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1447\n");

	if((a127 + 20) > a127){
printf("POINT: 1448\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1449\n");

	if((a11 + 20) > a11){
printf("POINT: 1450\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 1451\n");

    	if((!(a65 == 35) || (!(a32 == 36) && a49 == 33))) {
printf("POINT: 1452\n");
    	a18 = 10;
    	a53 = 12;
    	a34 = 34 ;
    	a189 = 14;
    	a24 = 34 ;
    	a109 = 36 ;
    	a71 = 9;
    	a13 = 34 ;
    	a136 = 15;
    	a31 = 3;
    	a135 = 34 ;
    	a65 = 33 ;
    	a48 = 33 ;
    	a79 = 33 ;
    	a120 = 35 ;
    	a25 = 35 ;
    	a174 = 3;
    	a167 = 5;
    	a118 = 36 ;
    	a57 = 8;
    	a159 = 35 ;
    	a111 = 5;
    	a190 = 10;
    	a92 = 7;
    	a35 = 32 ;
    	a169 = 10;
    	a1 = 35 ;
    	a101 = 6;
    	a40 = 7; 
    	}else {
printf("POINT: 1454\n");
    	a141 = 36 ;
    	a71 = 8;
    	a57 = 13;
    	a3 = 7;
    	a169 = 13;
    	a53 = 12;
    	a65 = 33 ;
    	a76 = 6;
    	a69 = 36 ;
    	a123 = 33 ;
    	a34 = 36 ;
    	a92 = 4;
    	a120 = 32 ;
    	a190 = 12;
    	a109 = 33 ;
    	a1 = 33 ;
    	a178 = 12;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1455\n");

    if((((a71 == 4 && (a159 == 34 && a53 == 9)) && a24 == 34) && ((a25 == 34 && ( cf==1  && (input == 3))) && a111 == 4))) {
printf("POINT: 1456\n");
printf("POINT: 1457\n");

	if((a19 + 20) > a19){
printf("POINT: 1458\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1459\n");

	if((a107 + 20) > a107){
printf("POINT: 1460\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1461\n");

	if((a127 + 20) > a127){
printf("POINT: 1462\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
printf("POINT: 1463\n");

    	if((a53 == 13 && a122 == 13)) {
printf("POINT: 1464\n");
    	a35 = 35 ;
    	a40 = 9;
    	a106 = 8; 
    	}else {
printf("POINT: 1466\n");
    	a1 = 35 ;
    	a25 = 36 ;
    	a24 = 35 ;
    	a92 = 9;
    	a132 = 8;
    	a111 = 6;
    	a3 = 7;
    	a189 = 17;
    	a13 = 33 ;
    	a18 = 9;
    	a118 = 35 ;
    	a190 = 11;
    	a31 = 5;
    	a169 = 10;
    	a167 = 8;
    	a65 = 35 ;
    	a101 = 9;
    	a71 = 8;
    	a174 = 8;
    	a159 = 36 ;
    	a48 = 35 ;
    	a109 = 33 ;
    	a79 = 33 ;
    	a34 = 35 ;
    	a35 = 36 ;
    	a135 = 32 ;
    	a80 = 6;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm19(int input) {
printf("POINT: 1467\n");

    if(((a109 == 34 && (a109 == 34 && (a31 == 3 && (a168 == 35 &&  cf==1 )))) && (a174 == 3 && (a92 == 6 && a109 == 34)))) {
printf("POINT: 1468\n");
    	calculate_outputm130(input);
    } 
printf("POINT: 1469\n");

    if(((((a189 == 12 && a71 == 4) && a18 == 6) && a174 == 3) && (((a168 == 36 &&  cf==1 ) && a24 == 34) && a92 == 6))) {
printf("POINT: 1470\n");
    	calculate_outputm131(input);
    } 
}
 void calculate_outputm132(int input) {
printf("POINT: 1471\n");

    if(((a25 == 34 && (a167 == 4 && a76 == 7)) && (a167 == 4 && ((a141 == 34 && ((input == 3) &&  cf==1 )) && a65 == 34)))) {
printf("POINT: 1472\n");
printf("POINT: 1473\n");

	if((a176 + 20) > a176){
printf("POINT: 1474\n");
	a176  +=  1 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 1475\n");

	if((a19 + 20) > a19){
printf("POINT: 1476\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1477\n");

	if((a151 + 20) > a151){
printf("POINT: 1478\n");
	a151  +=  2 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 1479\n");

	if((a130 - 20) < a130){
printf("POINT: 1480\n");
	a130  -=  1 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1481\n");

	if((a107 - 20) < a107){
printf("POINT: 1482\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1483\n");

	if((a127 + 20) > a127){
printf("POINT: 1484\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1485\n");

	if((a165 + 20) > a165){
printf("POINT: 1486\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a164 = 36 ;
    	a136 = 10; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 1487\n");

    if((((a189 == 12 && (a24 == 34 && ((input == 2) &&  cf==1 ))) && a167 == 4) && (a159 == 34 && (a167 == 4 && a25 == 34)))) {
printf("POINT: 1488\n");
printf("POINT: 1489\n");

	if((a19 + 20) > a19){
printf("POINT: 1490\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1491\n");

	if((a91 - 20) < a91){
printf("POINT: 1492\n");
	a91  -=  1 ;}
	 else{	
	a91  -=  0;}
printf("POINT: 1493\n");

	if((a130 + 20) > a130){
printf("POINT: 1494\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1495\n");

	if((a107 + 20) > a107){
printf("POINT: 1496\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1497\n");

	if((a127 + 20) > a127){
printf("POINT: 1498\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1499\n");

	if((a10 + 20) > a10){
printf("POINT: 1500\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a143 = 34 ;
    	a35 = 35 ;
    	a40 = 10; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1501\n");

    if((((a169 == 12 && ((a1 == 34 && a65 == 34) && a190 == 8)) && a65 == 34) && (( cf==1  && (input == 1)) && a169 == 12))) {
printf("POINT: 1502\n");
printf("POINT: 1503\n");

	if((a19 + 20) > a19){
printf("POINT: 1504\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1505\n");

	if((a130 - 20) < a130){
printf("POINT: 1506\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1507\n");

	if((a153 + 20) > a153){
printf("POINT: 1508\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1509\n");

	if((a127 + 20) > a127){
printf("POINT: 1510\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1511\n");

	if((a98 + 20) > a98){
printf("POINT: 1512\n");
	a98  +=  2 ;}
	 else{	
	a98  +=  0;}
printf("POINT: 1513\n");

	if((a11 + 20) > a11){
printf("POINT: 1514\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a25 = 36 ;
    	a101 = 9;
    	a190 = 12;
    	a24 = 35 ;
    	a35 = 33 ;
    	a174 = 7;
    	a31 = 8;
    	a169 = 12;
    	a148 = 13;
    	a141 = 36 ;
    	a13 = 34 ;
    	a189 = 16;
    	a79 = 34 ;
    	a18 = 5;
    	a87 = 13; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1515\n");

    if(((((a76 == 7 && (a18 == 6 && ( cf==1  && (input == 5)))) && a69 == 34) && a13 == 34) && (a159 == 34 && a34 == 34))) {
printf("POINT: 1516\n");
printf("POINT: 1517\n");

	if((a176 - 20) < a176){
printf("POINT: 1518\n");
	a176  -=  1 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 1519\n");

	if((a19 + 20) > a19){
printf("POINT: 1520\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1521\n");

	if((a171 - 20) < a171){
printf("POINT: 1522\n");
	a171  -=  1 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 1523\n");

	if((a153 + 20) > a153){
printf("POINT: 1524\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1525\n");

	if((a107 - 20) < a107){
printf("POINT: 1526\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1527\n");

	if((a10 + 20) > a10){
printf("POINT: 1528\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a118 = 35 ;
    	a35 = 35 ;
    	a48 = 33 ;
    	a3 = 1;
    	a111 = 3;
    	a79 = 36 ;
    	a109 = 33 ;
    	a57 = 13;
    	a65 = 34 ;
    	a53 = 14;
    	a18 = 11;
    	a92 = 10;
    	a40 = 6;
    	a28 = 3; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1529\n");

    if((((((a71 == 4 && (a101 == 5 && a25 == 34)) && a189 == 12) && a159 == 34) && a18 == 6) && ( cf==1  && (input == 4)))) {
printf("POINT: 1530\n");
printf("POINT: 1531\n");

	if((a19 + 20) > a19){
printf("POINT: 1532\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1533\n");

	if((a151 + 20) > a151){
printf("POINT: 1534\n");
	a151  +=  1 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 1535\n");

	if((a153 + 20) > a153){
printf("POINT: 1536\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1537\n");

	if((a107 - 20) < a107){
printf("POINT: 1538\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1539\n");

	if((a127 + 20) > a127){
printf("POINT: 1540\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a25 = 36 ;
    	a189 = 15;
    	a190 = 11;
    	a141 = 35 ;
    	a169 = 14;
    	a57 = 12;
    	a136 = 17;
    	a1 = 33 ;
    	a167 = 8;
    	a48 = 33 ;
    	a101 = 9;
    	a174 = 3;
    	a35 = 32 ;
    	a92 = 6;
    	a121 = 16; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm134(int input) {
printf("POINT: 1541\n");

    if((((a76 == 7 && (a141 == 34 && a101 == 5)) && (((a92 == 6 && ((input == 5) &&  cf==1 )) && a92 == 6) && a53 == 9)) && a78 <= -13)) {
printf("POINT: 1542\n");
printf("POINT: 1543\n");

	if((a95 - 20) < a95){
printf("POINT: 1544\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a174 = 2;
    	a35 = 32 ;
    	a190 = 7;
    	a1 = 32 ;
    	a57 = 9;
    	a25 = 32 ;
    	a141 = 32 ;
    	a53 = 8;
    	a136 = 17;
    	a101 = 4;
    	a167 = 3;
    	a169 = 11;
    	a92 = 5;
    	a48 = 32 ;
    	a121 = 16; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1545\n");

    if(((((((input == 2) &&  cf==1 ) && a190 == 8) && a141 == 34) && ((a18 == 6 && (a76 == 7 && a135 == 34)) && a18 == 6)) && a5 >= 3)) {
printf("POINT: 1546\n");
    	cf = 0;
    	a167 = 2;
    	a31 = 1;
    	a169 = 10;
    	a190 = 6;
    	a18 = 4;
    	a38 = 35 ;
    	a141 = 33 ;
    	a111 = 2;
    	a34 = 33 ;
    	a35 = 33 ;
    	a25 = 33 ;
    	a109 = 33 ;
    	a174 = 1;
    	a148 = 10; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1547\n");

    if((((a31 == 3 && a71 == 4) && (a167 == 4 && ((a76 == 7 && (( cf==1  && (input == 3)) && a174 == 3)) && a109 == 34))) && (a11 % 2==0))) {
printf("POINT: 1548\n");
printf("POINT: 1549\n");

	if((a105 - 20) < a105){
printf("POINT: 1550\n");
	a105  -=  4 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a123 = 33 ;
    	a178 = 6; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1551\n");

    if((((a31 == 3 && a18 == 6) && a1 == 34) && ((a111 == 4 && (a92 == 6 && ( cf==1  && (input == 4)))) && a25 == 34))) {
printf("POINT: 1552\n");
printf("POINT: 1553\n");

	if((a95 + 20) > a95){
printf("POINT: 1554\n");
	a95  +=  2 ;}
	 else{	
	a95  +=  0;}
printf("POINT: 1555\n");

	if((a89 + 20) > a89){
printf("POINT: 1556\n");
	a89  +=  2 ;}
	 else{	
	a89  +=  0;}
printf("POINT: 1557\n");

	if((a6 + 20) > a6){
printf("POINT: 1558\n");
	a6  +=  2 ;}
	 else{	
	a6  +=  0;}
printf("POINT: 1559\n");

	if((a7 + 20) > a7){
printf("POINT: 1560\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a141 = 32 ;
    	a35 = 35 ;
    	a189 = 12;
    	a13 = 34 ;
    	a118 = 34 ;
    	a3 = 2;
    	a18 = 5;
    	a57 = 10;
    	a40 = 8;
    	a63 = 7; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1561\n");

    if(((((a111 == 4 && (a76 == 7 && ((input == 1) &&  cf==1 ))) && a18 == 6) && ((a120 == 34 && a174 == 3) && a92 == 6)) && (a6 % 2==0))) {
printf("POINT: 1562\n");
    	cf = 0;
    	a35 = 36 ;
    	a132 = 6;
    	a52 = 2; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm20(int input) {
printf("POINT: 1563\n");

    if(((a13 == 34 && (a135 == 34 && (a190 == 8 && a79 == 34))) && (a101 == 5 && ((a28 == 1 &&  cf==1 ) && a71 == 4)))) {
printf("POINT: 1564\n");
    	calculate_outputm132(input);
    } 
printf("POINT: 1565\n");

    if(((a169 == 12 && (((a28 == 3 &&  cf==1 ) && a159 == 34) && a31 == 3)) && (a109 == 34 && (a111 == 4 && a169 == 12)))) {
printf("POINT: 1566\n");
    	calculate_outputm134(input);
    } 
}
 void calculate_outputm139(int input) {
printf("POINT: 1567\n");

    if(((a24 == 34 && (a159 == 34 && (a69 == 34 && a25 == 34))) && ((a109 == 34 && ( cf==1  && (input == 3))) && a120 == 34))) {
printf("POINT: 1568\n");
printf("POINT: 1569\n");

	if((a19 + 20) > a19){
printf("POINT: 1570\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1571\n");

	if((a107 - 20) < a107){
printf("POINT: 1572\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1573\n");

	if((a10 + 20) > a10){
printf("POINT: 1574\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1575\n");

	if((a165 - 20) < a165){
printf("POINT: 1576\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a123 = 35 ;
    	a28 = 7; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1577\n");

    if(((a71 == 4 && (a169 == 12 && ((a25 == 34 && a190 == 8) && a53 == 9))) && (a25 == 34 && ( cf==1  && (input == 1))))) {
printf("POINT: 1578\n");
printf("POINT: 1579\n");

	if((a19 + 20) > a19){
printf("POINT: 1580\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1581\n");

	if((a134 - 20) < a134){
printf("POINT: 1582\n");
	a134  -=  1 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 1583\n");

	if((a146 - 20) < a146){
printf("POINT: 1584\n");
	a146  -=  3 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 1585\n");

	if((a107 + 20) > a107){
printf("POINT: 1586\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1587\n");

	if((a127 + 20) > a127){
printf("POINT: 1588\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1589\n");

	if((a10 + 20) > a10){
printf("POINT: 1590\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1591\n");

	if((a165 + 20) > a165){
printf("POINT: 1592\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a25 = 34 ;
    	a76 = 11;
    	a169 = 14;
    	a190 = 9;
    	a48 = 33 ;
    	a57 = 8;
    	a101 = 3;
    	a79 = 35 ;
    	a111 = 5;
    	a141 = 34 ;
    	a1 = 35 ;
    	a35 = 32 ;
    	a31 = 8;
    	a136 = 13;
    	a167 = 4;
    	a174 = 5;
    	a197 = 15; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1593\n");

    if(((a57 == 10 && (a169 == 12 && (a174 == 3 && ((input == 4) &&  cf==1 )))) && ((a53 == 9 && a141 == 34) && a111 == 4))) {
printf("POINT: 1594\n");
printf("POINT: 1595\n");

	if((a176 - 20) < a176){
printf("POINT: 1596\n");
	a176  -=  2 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 1597\n");

	if((a19 + 20) > a19){
printf("POINT: 1598\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1599\n");

	if((a105 - 20) < a105){
printf("POINT: 1600\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
printf("POINT: 1601\n");

	if((a146 - 20) < a146){
printf("POINT: 1602\n");
	a146  -=  2 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 1603\n");

	if((a153 + 20) > a153){
printf("POINT: 1604\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1605\n");

	if((a107 - 20) < a107){
printf("POINT: 1606\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1607\n");

	if((a127 + 20) > a127){
printf("POINT: 1608\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
printf("POINT: 1609\n");

    	if(((!(a174 == 1) || (( cf==1  && a120 == 32) && !(a164 == 36))) || a189 == 16)) {
printf("POINT: 1610\n");
    	a35 = 35 ;
    	a40 = 8;
    	a63 = 14; 
    	}else {
printf("POINT: 1612\n");
    	a123 = 33 ;
    	a178 = 6;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1613\n");

    if((((a31 == 3 && ((a65 == 34 && a53 == 9) && a120 == 34)) && a174 == 3) && (((input == 5) &&  cf==1 ) && a71 == 4))) {
printf("POINT: 1614\n");
printf("POINT: 1615\n");

	if((a130 - 20) < a130){
printf("POINT: 1616\n");
	a130  -=  1 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1617\n");

	if((a153 + 20) > a153){
printf("POINT: 1618\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1619\n");

	if((a107 + 20) > a107){
printf("POINT: 1620\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1621\n");

	if((a10 + 20) > a10){
printf("POINT: 1622\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1623\n");

	if((a5 + 20) > a5){
printf("POINT: 1624\n");
	a5  +=  1 ;}
	 else{	
	a5  +=  0;}
    	cf = 0;
printf("POINT: 1625\n");

    	if((a119 == 35 || a53 == 12)) {
printf("POINT: 1626\n");
    	a136 = 15;
    	a35 = 32 ;
    	a40 = 6; 
    	}else {
printf("POINT: 1628\n");
    	a167 = 8;
    	a18 = 10;
    	a13 = 33 ;
    	a123 = 33 ;
    	a69 = 34 ;
    	a190 = 6;
    	a141 = 34 ;
    	a120 = 33 ;
    	a178 = 7;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1629\n");

    if(((a189 == 12 && a1 == 34) && ((((((input == 2) &&  cf==1 ) && a25 == 34) && a48 == 34) && a34 == 34) && a48 == 34))) {
printf("POINT: 1630\n");
printf("POINT: 1631\n");

	if((a19 + 20) > a19){
printf("POINT: 1632\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1633\n");

	if((a153 + 20) > a153){
printf("POINT: 1634\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1635\n");

	if((a107 + 20) > a107){
printf("POINT: 1636\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1637\n");

	if((a127 + 20) > a127){
printf("POINT: 1638\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1639\n");

	if((a10 + 20) > a10){
printf("POINT: 1640\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1641\n");

	if((a5 - 20) < a5){
printf("POINT: 1642\n");
	a5  -=  4 ;}
	 else{	
	a5  -=  0;}
    	cf = 0;
printf("POINT: 1643\n");

    	if((a18 == 9 || ((!(a69 == 34) && a111 == 2) || a109 == 32))) {
printf("POINT: 1644\n");
    	a35 = 33 ;
    	a148 = 13;
    	a87 = 12; 
    	}else {
printf("POINT: 1646\n");
    	a148 = 9;
    	a35 = 33 ;
    	a83 = 15;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm21(int input) {
printf("POINT: 1647\n");

    if(((a34 == 34 && (a71 == 4 && ((a49 == 35 &&  cf==1 ) && a169 == 12))) && ((a101 == 5 && a13 == 34) && a159 == 34))) {
printf("POINT: 1648\n");
    	calculate_outputm139(input);
    } 
}
 void calculate_outputm141(int input) {
printf("POINT: 1649\n");

    if((((a118 == 34 && a189 == 12) && a69 == 34) && (((( cf==1  && (input == 1)) && a111 == 4) && a57 == 10) && a25 == 34))) {
printf("POINT: 1650\n");
printf("POINT: 1651\n");

	if((a176 - 20) < a176){
printf("POINT: 1652\n");
	a176  -=  1 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 1653\n");

	if((a19 + 20) > a19){
printf("POINT: 1654\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1655\n");

	if((a153 + 20) > a153){
printf("POINT: 1656\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1657\n");

	if((a107 - 20) < a107){
printf("POINT: 1658\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1659\n");

	if((a127 + 20) > a127){
printf("POINT: 1660\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1661\n");

	if((a10 + 20) > a10){
printf("POINT: 1662\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1663\n");

	if((a6 + 20) > a6){
printf("POINT: 1664\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a53 = 10;
    	a25 = 35 ;
    	a159 = 34 ;
    	a31 = 6;
    	a118 = 36 ;
    	a92 = 11;
    	a13 = 33 ;
    	a135 = 36 ;
    	a76 = 10;
    	a35 = 36 ;
    	a1 = 35 ;
    	a174 = 7;
    	a101 = 9;
    	a71 = 9;
    	a167 = 8;
    	a57 = 14;
    	a141 = 35 ;
    	a34 = 34 ;
    	a189 = 14;
    	a24 = 33 ;
    	a132 = 8;
    	a3 = 3;
    	a169 = 16;
    	a190 = 10;
    	a120 = 35 ;
    	a69 = 36 ;
    	a111 = 8;
    	a80 = 10; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1665\n");

    if(((a190 == 8 && (a92 == 6 && ((input == 3) &&  cf==1 ))) && (((a111 == 4 && a13 == 34) && a69 == 34) && a1 == 34))) {
printf("POINT: 1666\n");
printf("POINT: 1667\n");

	if((a19 + 20) > a19){
printf("POINT: 1668\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1669\n");

	if((a7 + 20) > a7){
printf("POINT: 1670\n");
	a7  +=  2 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 1671\n");

	if((a130 + 20) > a130){
printf("POINT: 1672\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1673\n");

	if((a153 + 20) > a153){
printf("POINT: 1674\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1675\n");

	if((a127 + 20) > a127){
printf("POINT: 1676\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1677\n");

	if((a165 + 20) > a165){
printf("POINT: 1678\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a118 = 35 ;
    	a189 = 16;
    	a35 = 33 ;
    	a69 = 33 ;
    	a92 = 7;
    	a71 = 4;
    	a111 = 8;
    	a31 = 5;
    	a13 = 35 ;
    	a174 = 8;
    	a190 = 7;
    	a25 = 35 ;
    	a101 = 9;
    	a38 = 32 ;
    	a3 = 1;
    	a53 = 13;
    	a57 = 12;
    	a169 = 16;
    	a167 = 7;
    	a135 = 32 ;
    	a109 = 34 ;
    	a159 = 33 ;
    	a24 = 34 ;
    	a65 = 36 ;
    	a34 = 35 ;
    	a18 = 8;
    	a79 = 32 ;
    	a120 = 33 ;
    	a1 = 34 ;
    	a48 = 36 ;
    	a141 = 34 ;
    	a76 = 8;
    	a148 = 10; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 1679\n");

    if(((a69 == 34 && ( cf==1  && (input == 5))) && ((a101 == 5 && ((a169 == 12 && a57 == 10) && a76 == 7)) && a71 == 4))) {
printf("POINT: 1680\n");
printf("POINT: 1681\n");

	if((a19 + 20) > a19){
printf("POINT: 1682\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1683\n");

	if((a95 - 20) < a95){
printf("POINT: 1684\n");
	a95  -=  2 ;}
	 else{	
	a95  -=  0;}
printf("POINT: 1685\n");

	if((a153 + 20) > a153){
printf("POINT: 1686\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1687\n");

	if((a127 + 20) > a127){
printf("POINT: 1688\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a28 = 8; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1689\n");

    if(((a190 == 8 && (a31 == 3 && (a174 == 3 && (a167 == 4 && a189 == 12)))) && (a3 == 3 && ( cf==1  && (input == 4))))) {
printf("POINT: 1690\n");
printf("POINT: 1691\n");

	if((a19 + 20) > a19){
printf("POINT: 1692\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1693\n");

	if((a7 + 20) > a7){
printf("POINT: 1694\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 1695\n");

	if((a153 + 20) > a153){
printf("POINT: 1696\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1697\n");

	if((a127 + 20) > a127){
printf("POINT: 1698\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1699\n");

	if((a10 + 20) > a10){
printf("POINT: 1700\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1701\n");

	if((a165 - 20) < a165){
printf("POINT: 1702\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 1703\n");

	if((a11 + 20) > a11){
printf("POINT: 1704\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a132 = 8;
    	a35 = 36 ;
    	a80 = 8; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 1705\n");

    if(((a1 == 34 && ((((input == 2) &&  cf==1 ) && a76 == 7) && a167 == 4)) && (a53 == 9 && (a135 == 34 && a71 == 4)))) {
printf("POINT: 1706\n");
printf("POINT: 1707\n");

	if((a19 + 20) > a19){
printf("POINT: 1708\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1709\n");

	if((a195 - 20) < a195){
printf("POINT: 1710\n");
	a195  -=  1 ;}
	 else{	
	a195  -=  0;}
printf("POINT: 1711\n");

	if((a153 + 20) > a153){
printf("POINT: 1712\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1713\n");

	if((a6 + 20) > a6){
printf("POINT: 1714\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a40 = 8;
    	a63 = 10; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm22(int input) {
printf("POINT: 1715\n");

    if(((a189 == 12 && (a31 == 3 && a189 == 12)) && (((( cf==1  && a28 == 3) && a25 == 34) && a13 == 34) && a69 == 34))) {
printf("POINT: 1716\n");
    	calculate_outputm141(input);
    } 
}
 void calculate_outputm145(int input) {
printf("POINT: 1717\n");

    if((((a13 == 34 && (a101 == 5 && a65 == 34)) && a169 == 12) && ((((input == 4) &&  cf==1 ) && a109 == 34) && a57 == 10))) {
printf("POINT: 1718\n");
printf("POINT: 1719\n");

	if((a7 + 20) > a7){
printf("POINT: 1720\n");
	a7  +=  1 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a65 = 32 ;
    	a57 = 9;
    	a174 = 2;
    	a34 = 32 ;
    	a159 = 32 ;
    	a135 = 32 ;
    	a132 = 9;
    	a101 = 4;
    	a76 = 6;
    	a118 = 32 ;
    	a18 = 5;
    	a35 = 36 ;
    	a167 = 3;
    	a13 = 32 ;
    	a48 = 32 ;
    	a169 = 11;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm149(int input) {
printf("POINT: 1721\n");

    if((((a65 == 34 && a167 == 4) && a34 == 34) && (((( cf==1  && (input == 5)) && a109 == 34) && a111 == 4) && a34 == 34))) {
printf("POINT: 1722\n");
printf("POINT: 1723\n");

	if((a182 - 20) < a182){
printf("POINT: 1724\n");
	a182  -=  2 ;}
	 else{	
	a182  -=  0;}
    	cf = 0;
    	a92 = 5;
    	a79 = 32 ;
    	a1 = 32 ;
    	a109 = 32 ;
    	a57 = 9;
    	a169 = 11;
    	a174 = 2;
    	a34 = 32 ;
    	a111 = 3;
    	a53 = 8;
    	a118 = 32 ;
    	a101 = 4;
    	a69 = 32 ;
    	a167 = 3;
    	a33 = 34 ;
    	a141 = 32 ;
    	a35 = 32 ;
    	a25 = 32 ;
    	a18 = 5;
    	a76 = 6;
    	a13 = 32 ;
    	a190 = 7;
    	a189 = 11;
    	a65 = 32 ;
    	a159 = 32 ;
    	a135 = 32 ;
    	a71 = 3;
    	a24 = 32 ;
    	a3 = 2;
    	a120 = 32 ;
    	a31 = 2;
    	a136 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1725\n");

    if(((((a167 == 4 && (( cf==1  && (input == 3)) && a189 == 12)) && a31 == 3) && (a135 == 34 && (a57 == 10 && a101 == 5))) && a47 <= -1)) {
printf("POINT: 1726\n");
printf("POINT: 1727\n");

	if((a95 - 20) < a95){
printf("POINT: 1728\n");
	a95  -=  4 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a1 = 32 ;
    	a65 = 32 ;
    	a34 = 32 ;
    	a118 = 32 ;
    	a169 = 11;
    	a30 = 35 ;
    	a135 = 32 ;
    	a174 = 2;
    	a167 = 3;
    	a53 = 8;
    	a101 = 4;
    	a35 = 36 ;
    	a132 = 7; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1729\n");

    if((((a18 == 6 && (a169 == 12 && (( cf==1  && (input == 2)) && a190 == 8))) && ((a71 == 4 && a101 == 5) && a57 == 10)) && a165 == 3734)) {
printf("POINT: 1730\n");
printf("POINT: 1731\n");

	if((a91 + 20) > a91){
printf("POINT: 1732\n");
	a91  +=  3 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a17 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1733\n");

    if((((a190 == 8 && (a71 == 4 && ( cf==1  && (input == 4)))) && a53 == 9) && (a135 == 34 && (a167 == 4 && a57 == 10)))) {
printf("POINT: 1734\n");
printf("POINT: 1735\n");

	if((a134 - 20) < a134){
printf("POINT: 1736\n");
	a134  -=  1 ;}
	 else{	
	a134  -=  0;}
    	cf = 0;
    	a141 = 32 ;
    	a92 = 6;
    	a25 = 32 ;
    	a190 = 8;
    	a189 = 12;
    	a13 = 32 ;
    	a3 = 2;
    	a135 = 32 ;
    	a31 = 2;
    	a18 = 5;
    	a40 = 9;
    	a1 = 32 ;
    	a79 = 32 ;
    	a71 = 2;
    	a65 = 32 ;
    	a48 = 34 ;
    	a106 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1737\n");

    if(((a109 == 34 && (a31 == 3 && (a118 == 34 && (a57 == 10 && a1 == 34)))) && (a169 == 12 && ( cf==1  && (input == 1))))) {
printf("POINT: 1738\n");
printf("POINT: 1739\n");

	if((a7 + 20) > a7){
printf("POINT: 1740\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
printf("POINT: 1741\n");

    	if((a118 == 36 || a49 == 34)) {
printf("POINT: 1742\n");
    	a148 = 11;
    	a167 = 2;
    	a69 = 33 ;
    	a189 = 10;
    	a79 = 34 ;
    	a159 = 33 ;
    	a1 = 33 ;
    	a120 = 33 ;
    	a18 = 4;
    	a111 = 2;
    	a53 = 7;
    	a92 = 4;
    	a109 = 33 ;
    	a169 = 10;
    	a3 = 2;
    	a118 = 33 ;
    	a48 = 33 ;
    	a65 = 32 ;
    	a31 = 1;
    	a135 = 33 ;
    	a35 = 33 ;
    	a24 = 33 ;
    	a57 = 8;
    	a101 = 3;
    	a174 = 1;
    	a13 = 33 ;
    	a25 = 33 ;
    	a34 = 34 ;
    	a190 = 6;
    	a71 = 2;
    	a76 = 5;
    	a70 = 6; 
    	}else {
printf("POINT: 1744\n");
    	a34 = 32 ;
    	a141 = 32 ;
    	a118 = 32 ;
    	a71 = 2;
    	a135 = 33 ;
    	a24 = 33 ;
    	a136 = 17;
    	a167 = 3;
    	a25 = 33 ;
    	a190 = 7;
    	a159 = 33 ;
    	a3 = 2;
    	a76 = 6;
    	a13 = 33 ;
    	a31 = 2;
    	a1 = 33 ;
    	a18 = 5;
    	a57 = 9;
    	a69 = 33 ;
    	a111 = 2;
    	a174 = 2;
    	a189 = 11;
    	a101 = 4;
    	a53 = 8;
    	a120 = 32 ;
    	a169 = 10;
    	a35 = 32 ;
    	a65 = 32 ;
    	a121 = 14;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm150(int input) {
printf("POINT: 1745\n");

    if(((((a189 == 12 && (a79 == 34 && (a190 == 8 && a79 == 34))) && a79 == 34) && (a79 == 34 && ((input == 3) &&  cf==1 ))) && a146 == 2582)) {
printf("POINT: 1746\n");
printf("POINT: 1747\n");

	if((a95 - 20) < a95){
printf("POINT: 1748\n");
	a95  -=  2 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a40 = 9;
    	a106 = 8; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 1749\n");

    if((((a167 == 4 && ((input == 5) &&  cf==1 )) && a101 == 5) && ((a25 == 34 && (a69 == 34 && a31 == 3)) && a141 == 34))) {
printf("POINT: 1750\n");
printf("POINT: 1751\n");

	if((a105 - 20) < a105){
printf("POINT: 1752\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a25 = 32 ;
    	a174 = 2;
    	a120 = 32 ;
    	a53 = 8;
    	a71 = 2;
    	a92 = 5;
    	a111 = 2;
    	a18 = 5;
    	a13 = 33 ;
    	a65 = 32 ;
    	a48 = 32 ;
    	a190 = 7;
    	a31 = 2;
    	a189 = 11;
    	a79 = 34 ;
    	a101 = 4;
    	a24 = 33 ;
    	a109 = 32 ;
    	a167 = 3;
    	a34 = 32 ;
    	a35 = 36 ;
    	a141 = 32 ;
    	a76 = 6;
    	a59 = 33 ;
    	a159 = 33 ;
    	a118 = 32 ;
    	a69 = 33 ;
    	a135 = 33 ;
    	a3 = 2;
    	a132 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1753\n");

    if(((((a34 == 34 && ((input == 2) &&  cf==1 )) && a92 == 6) && a69 == 34) && ((a118 == 34 && a189 == 12) && a109 == 34))) {
printf("POINT: 1754\n");
printf("POINT: 1755\n");

	if((a19 + 20) > a19){
printf("POINT: 1756\n");
	a19  +=  2 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1757\n");

	if((a58 + 20) > a58){
printf("POINT: 1758\n");
	a58  +=  2 ;}
	 else{	
	a58  +=  0;}
printf("POINT: 1759\n");

	if((a98 - 20) < a98){
printf("POINT: 1760\n");
	a98  -=  4 ;}
	 else{	
	a98  -=  0;}
printf("POINT: 1761\n");

	if((a78 - 20) < a78){
printf("POINT: 1762\n");
	a78  -=  4 ;}
	 else{	
	a78  -=  0;}
    	cf = 0;
    	a92 = 4;
    	a76 = 5;
    	a69 = 34 ;
    	a48 = 33 ;
    	a31 = 1;
    	a57 = 10;
    	a135 = 33 ;
    	a167 = 4;
    	a25 = 33 ;
    	a159 = 33 ;
    	a111 = 2;
    	a1 = 33 ;
    	a174 = 1;
    	a18 = 4;
    	a65 = 34 ;
    	a109 = 33 ;
    	a35 = 33 ;
    	a120 = 34 ;
    	a190 = 6;
    	a101 = 3;
    	a189 = 10;
    	a169 = 12;
    	a79 = 34 ;
    	a118 = 33 ;
    	a34 = 33 ;
    	a148 = 16;
    	a24 = 33 ;
    	a13 = 34 ;
    	a3 = 3;
    	a141 = 33 ;
    	a55 = 5; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1763\n");

    if((((((a92 == 6 && (a159 == 34 && a135 == 34)) && a24 == 34) && a167 == 4) && (((input == 4) &&  cf==1 ) && a79 == 34)) && a195 <= -29)) {
printf("POINT: 1764\n");
printf("POINT: 1765\n");

	if((a7 + 20) > a7){
printf("POINT: 1766\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a164 = 32 ;
    	a167 = 3;
    	a79 = 32 ;
    	a35 = 32 ;
    	a135 = 32 ;
    	a92 = 5;
    	a141 = 32 ;
    	a174 = 2;
    	a24 = 32 ;
    	a118 = 32 ;
    	a189 = 11;
    	a190 = 7;
    	a111 = 3;
    	a48 = 32 ;
    	a101 = 4;
    	a136 = 10; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1767\n");

    if((((a111 == 4 && (a109 == 34 && a141 == 34)) && a48 == 34) && (a120 == 34 && (a24 == 34 && ( cf==1  && (input == 1)))))) {
printf("POINT: 1768\n");
printf("POINT: 1769\n");

	if((a195 - 20) < a195){
printf("POINT: 1770\n");
	a195  -=  2 ;}
	 else{	
	a195  -=  0;}
    	cf = 0;
    	a13 = 33 ;
    	a24 = 34 ;
    	a69 = 34 ;
    	a65 = 34 ;
    	a57 = 8;
    	a123 = 35 ;
    	a1 = 34 ;
    	a71 = 4;
    	a169 = 12;
    	a189 = 11;
    	a118 = 32 ;
    	a35 = 34 ;
    	a53 = 9;
    	a28 = 3; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm151(int input) {
printf("POINT: 1771\n");

    if(((a1 == 34 && (a65 == 34 && (a76 == 7 && a48 == 34))) && ((a79 == 34 && ( cf==1  && (input == 3))) && a53 == 9))) {
printf("POINT: 1772\n");
printf("POINT: 1773\n");

	if((a19 + 20) > a19){
printf("POINT: 1774\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1775\n");

	if((a105 - 20) < a105){
printf("POINT: 1776\n");
	a105  -=  4 ;}
	 else{	
	a105  -=  0;}
printf("POINT: 1777\n");

	if((a130 - 20) < a130){
printf("POINT: 1778\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1779\n");

	if((a153 + 20) > a153){
printf("POINT: 1780\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1781\n");

	if((a107 + 20) > a107){
printf("POINT: 1782\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1783\n");

	if((a127 + 20) > a127){
printf("POINT: 1784\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1785\n");

	if((a10 + 20) > a10){
printf("POINT: 1786\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1787\n");

	if((a6 + 20) > a6){
printf("POINT: 1788\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 1789\n");

    	if(a59 == 36) {
printf("POINT: 1790\n");
    	a40 = 6;
    	a28 = 5; 
    	}else {
printf("POINT: 1792\n");
    	a13 = 35 ;
    	a24 = 35 ;
    	a40 = 9;
    	a141 = 35 ;
    	a31 = 4;
    	a111 = 2;
    	a189 = 11;
    	a169 = 11;
    	a190 = 7;
    	a25 = 36 ;
    	a106 = 11;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1793\n");

    if(((a174 == 3 && (a169 == 12 && (((input == 4) &&  cf==1 ) && a65 == 34))) && ((a18 == 6 && a48 == 34) && a18 == 6))) {
printf("POINT: 1794\n");
printf("POINT: 1795\n");

	if((a19 + 20) > a19){
printf("POINT: 1796\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1797\n");

	if((a171 + 20) > a171){
printf("POINT: 1798\n");
	a171  +=  1 ;}
	 else{	
	a171  +=  0;}
printf("POINT: 1799\n");

	if((a153 + 20) > a153){
printf("POINT: 1800\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1801\n");

	if((a107 + 20) > a107){
printf("POINT: 1802\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1803\n");

	if((a10 + 20) > a10){
printf("POINT: 1804\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1805\n");

	if((a165 + 20) > a165){
printf("POINT: 1806\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a136 = 16;
    	a35 = 32 ;
    	a155 = 15; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1807\n");

    if((((input == 5) &&  cf==1 ) && (a18 == 6 && ((((a135 == 34 && a169 == 12) && a65 == 34) && a13 == 34) && a159 == 34)))) {
printf("POINT: 1808\n");
printf("POINT: 1809\n");

	if((a19 + 20) > a19){
printf("POINT: 1810\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1811\n");

	if((a95 + 20) > a95){
printf("POINT: 1812\n");
	a95  +=  1 ;}
	 else{	
	a95  +=  0;}
printf("POINT: 1813\n");

	if((a146 - 20) < a146){
printf("POINT: 1814\n");
	a146  -=  1 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 1815\n");

	if((a130 - 20) < a130){
printf("POINT: 1816\n");
	a130  -=  1 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 1817\n");

	if((a153 + 20) > a153){
printf("POINT: 1818\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1819\n");

	if((a127 + 20) > a127){
printf("POINT: 1820\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1821\n");

	if((a10 + 20) > a10){
printf("POINT: 1822\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1823\n");

	if((a165 + 20) > a165){
printf("POINT: 1824\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 1825\n");

	if((a6 + 20) > a6){
printf("POINT: 1826\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 1827\n");

    	if((!(a40 == 10) && (((!(a121 == 15) || a123 == 33) || !(a18 == 5)) || a56 == 11))) {
printf("POINT: 1828\n");
    	a120 = 33 ;
    	a174 = 7;
    	a65 = 35 ;
    	a79 = 34 ;
    	a13 = 33 ;
    	a132 = 8;
    	a135 = 36 ;
    	a48 = 35 ;
    	a109 = 35 ;
    	a189 = 16;
    	a1 = 33 ;
    	a169 = 10;
    	a159 = 36 ;
    	a101 = 8;
    	a167 = 9;
    	a34 = 35 ;
    	a69 = 35 ;
    	a76 = 9;
    	a118 = 35 ;
    	a35 = 36 ;
    	a25 = 35 ;
    	a92 = 10;
    	a71 = 4;
    	a18 = 11;
    	a80 = 6; 
    	}else {
printf("POINT: 1830\n");
    	a174 = 7;
    	a79 = 34 ;
    	a57 = 15;
    	a101 = 7;
    	a136 = 13;
    	a48 = 33 ;
    	a18 = 10;
    	a35 = 32 ;
    	a169 = 10;
    	a76 = 11;
    	a25 = 36 ;
    	a1 = 34 ;
    	a167 = 2;
    	a197 = 15;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1831\n");

    if(((a65 == 34 && (a25 == 34 && a167 == 4)) && (a101 == 5 && ((a101 == 5 && ( cf==1  && (input == 2))) && a69 == 34)))) {
printf("POINT: 1832\n");
printf("POINT: 1833\n");

	if((a176 - 20) < a176){
printf("POINT: 1834\n");
	a176  -=  3 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 1835\n");

	if((a19 + 20) > a19){
printf("POINT: 1836\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1837\n");

	if((a151 + 20) > a151){
printf("POINT: 1838\n");
	a151  +=  2 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 1839\n");

	if((a153 + 20) > a153){
printf("POINT: 1840\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1841\n");

	if((a107 - 20) < a107){
printf("POINT: 1842\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1843\n");

	if((a165 - 20) < a165){
printf("POINT: 1844\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
printf("POINT: 1845\n");

    	if((!(a135 == 33) && (!(a70 == 8) && ((!(a33 == 32) && a135 == 32) || a178 == 8)))) {
printf("POINT: 1846\n");
    	a120 = 36 ;
    	a53 = 12;
    	a141 = 34 ;
    	a118 = 35 ;
    	a25 = 36 ;
    	a135 = 36 ;
    	a31 = 5;
    	a159 = 35 ;
    	a169 = 16;
    	a190 = 9;
    	a101 = 7;
    	a167 = 5;
    	a174 = 8;
    	a3 = 4;
    	a92 = 6;
    	a65 = 33 ;
    	a189 = 15;
    	a148 = 13;
    	a35 = 33 ;
    	a69 = 35 ;
    	a1 = 34 ;
    	a111 = 5;
    	a79 = 34 ;
    	a71 = 9;
    	a24 = 34 ;
    	a76 = 10;
    	a57 = 13;
    	a48 = 35 ;
    	a18 = 5;
    	a13 = 32 ;
    	a87 = 14; 
    	}else {
printf("POINT: 1848\n");
    	a1 = 34 ;
    	a92 = 9;
    	a31 = 7;
    	a141 = 32 ;
    	a135 = 32 ;
    	a40 = 12;
    	a190 = 11;
    	a25 = 34 ;
    	a48 = 36 ;
    	a53 = 12;
    	a71 = 3;
    	a159 = 32 ;
    	a189 = 13;
    	a111 = 9;
    	a24 = 36 ;
    	a18 = 8;
    	a122 = 6;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1849\n");

    if(((a189 == 12 && (a53 == 9 && (((input == 1) &&  cf==1 ) && a57 == 10))) && (a118 == 34 && (a118 == 34 && a18 == 6)))) {
printf("POINT: 1850\n");
printf("POINT: 1851\n");

	if((a19 + 20) > a19){
printf("POINT: 1852\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1853\n");

	if((a107 - 20) < a107){
printf("POINT: 1854\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a148 = 13;
    	a87 = 15; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm23(int input) {
printf("POINT: 1855\n");

    if(((a48 == 34 && (((a167 == 4 && a76 == 7) && a13 == 34) && a135 == 34)) && ((a70 == 4 &&  cf==1 ) && a159 == 34))) {
printf("POINT: 1856\n");
    	calculate_outputm145(input);
    } 
printf("POINT: 1857\n");

    if(((a71 == 4 && ((((a70 == 8 &&  cf==1 ) && a101 == 5) && a65 == 34) && a79 == 34)) && (a34 == 34 && a3 == 3))) {
printf("POINT: 1858\n");
    	calculate_outputm149(input);
    } 
printf("POINT: 1859\n");

    if((((a18 == 6 && (a65 == 34 && (a70 == 9 &&  cf==1 ))) && a65 == 34) && ((a34 == 34 && a92 == 6) && a92 == 6))) {
printf("POINT: 1860\n");
    	calculate_outputm150(input);
    } 
printf("POINT: 1861\n");

    if(((a189 == 12 && (a70 == 11 &&  cf==1 )) && ((a25 == 34 && (a53 == 9 && (a71 == 4 && a79 == 34))) && a34 == 34))) {
printf("POINT: 1862\n");
    	calculate_outputm151(input);
    } 
}
 void calculate_outputm152(int input) {
printf("POINT: 1863\n");

    if((((a135 == 34 && a24 == 34) && a53 == 9) && (a79 == 34 && ((a190 == 8 && ((input == 5) &&  cf==1 )) && a79 == 34)))) {
printf("POINT: 1864\n");
printf("POINT: 1865\n");

	if((a7 + 20) > a7){
printf("POINT: 1866\n");
	a7  +=  1 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a18 = 6;
    	a40 = 12;
    	a92 = 5;
    	a141 = 34 ;
    	a3 = 3;
    	a1 = 32 ;
    	a122 = 13; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 1867\n");

    if(((a111 == 4 && (a13 == 34 && (a79 == 34 && a189 == 12))) && (a53 == 9 && (a189 == 12 && ((input == 4) &&  cf==1 ))))) {
printf("POINT: 1868\n");
    	cf = 0;
    	a167 = 2;
    	a13 = 33 ;
    	a35 = 33 ;
    	a141 = 33 ;
    	a1 = 33 ;
    	a57 = 8;
    	a174 = 1;
    	a25 = 33 ;
    	a31 = 1;
    	a148 = 16;
    	a18 = 4;
    	a24 = 33 ;
    	a159 = 33 ;
    	a69 = 33 ;
    	a169 = 10;
    	a53 = 7;
    	a135 = 33 ;
    	a65 = 32 ;
    	a71 = 2;
    	a92 = 4;
    	a111 = 2;
    	a190 = 6;
    	a118 = 33 ;
    	a101 = 3;
    	a76 = 5;
    	a189 = 10;
    	a120 = 33 ;
    	a48 = 33 ;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1869\n");

    if((((a53 == 9 && ((( cf==1  && (input == 1)) && a109 == 34) && a118 == 34)) && a111 == 4) && (a120 == 34 && a118 == 34))) {
printf("POINT: 1870\n");
printf("POINT: 1871\n");

	if((a134 + 20) > a134){
printf("POINT: 1872\n");
	a134  +=  2 ;}
	 else{	
	a134  +=  0;}
printf("POINT: 1873\n");

	if((a130 + 20) > a130){
printf("POINT: 1874\n");
	a130  +=  4 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1875\n");

	if((a182 + 20) > a182){
printf("POINT: 1876\n");
	a182  +=  2 ;}
	 else{	
	a182  +=  0;}
printf("POINT: 1877\n");

	if((a47 - 20) < a47){
printf("POINT: 1878\n");
	a47  -=  2 ;}
	 else{	
	a47  -=  0;}
printf("POINT: 1879\n");

	if((a5 + 20) > a5){
printf("POINT: 1880\n");
	a5  +=  2 ;}
	 else{	
	a5  +=  0;}
    	cf = 0;
    	a120 = 32 ;
    	a13 = 32 ;
    	a101 = 4;
    	a25 = 32 ;
    	a109 = 32 ;
    	a169 = 11;
    	a72 = 36 ;
    	a135 = 32 ;
    	a167 = 3;
    	a174 = 2;
    	a118 = 32 ;
    	a34 = 32 ;
    	a190 = 7;
    	a57 = 9;
    	a111 = 3;
    	a48 = 32 ;
    	a159 = 32 ;
    	a71 = 2;
    	a31 = 2;
    	a65 = 32 ;
    	a35 = 36 ;
    	a1 = 32 ;
    	a92 = 5;
    	a76 = 6;
    	a79 = 32 ;
    	a53 = 8;
    	a24 = 32 ;
    	a69 = 32 ;
    	a132 = 12; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1881\n");

    if((((a71 == 4 && (a24 == 34 && ((input == 3) &&  cf==1 ))) && a76 == 7) && (a92 == 6 && (a48 == 34 && a169 == 12)))) {
printf("POINT: 1882\n");
    	cf = 0;
    	a123 = 34 ;
    	a35 = 34 ;
    	a168 = 32 ; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm24(int input) {
printf("POINT: 1883\n");

    if(((a1 == 34 && ((a109 == 34 && (a63 == 7 &&  cf==1 )) && a71 == 4)) && ((a174 == 3 && a101 == 5) && a167 == 4))) {
printf("POINT: 1884\n");
    	calculate_outputm152(input);
    } 
}
 void calculate_outputm161(int input) {
printf("POINT: 1885\n");

    if(((a135 == 34 && a3 == 3) && ((a92 == 6 && (a109 == 34 && (((input == 1) &&  cf==1 ) && a18 == 6))) && a111 == 4))) {
printf("POINT: 1886\n");
printf("POINT: 1887\n");

	if((a91 - 20) < a91){
printf("POINT: 1888\n");
	a91  -=  1 ;}
	 else{	
	a91  -=  0;}
    	cf = 0;
printf("POINT: 1889\n");

    	if((a169 == 10 || (a55 == 11 || !(a135 == 33)))) {
printf("POINT: 1890\n");
    	a71 = 3;
    	a3 = 2;
    	a35 = 34 ;
    	a76 = 6;
    	a123 = 32 ;
    	a14 = 4; 
    	}else {
printf("POINT: 1892\n");
    	a1 = 32 ;
    	a159 = 32 ;
    	a34 = 32 ;
    	a13 = 32 ;
    	a57 = 9;
    	a111 = 3;
    	a35 = 32 ;
    	a65 = 32 ;
    	a71 = 3;
    	a3 = 2;
    	a109 = 32 ;
    	a189 = 11;
    	a120 = 32 ;
    	a79 = 32 ;
    	a69 = 32 ;
    	a164 = 34 ;
    	a76 = 6;
    	a53 = 8;
    	a48 = 32 ;
    	a141 = 32 ;
    	a24 = 32 ;
    	a118 = 32 ;
    	a25 = 32 ;
    	a101 = 4;
    	a31 = 2;
    	a18 = 5;
    	a169 = 11;
    	a92 = 5;
    	a190 = 7;
    	a174 = 2;
    	a167 = 3;
    	a135 = 32 ;
    	a136 = 10;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1893\n");

    if(((((((input == 4) &&  cf==1 ) && a159 == 34) && a159 == 34) && a159 == 34) && ((a69 == 34 && a48 == 34) && a71 == 4))) {
printf("POINT: 1894\n");
printf("POINT: 1895\n");

	if((a127 + 20) > a127){
printf("POINT: 1896\n");
	a127  +=  2 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1897\n");

	if((a91 + 20) > a91){
printf("POINT: 1898\n");
	a91  +=  2 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a65 = 32 ;
    	a3 = 2;
    	a71 = 2;
    	a135 = 32 ;
    	a18 = 5;
    	a31 = 2;
    	a189 = 12;
    	a25 = 32 ;
    	a79 = 32 ;
    	a141 = 32 ;
    	a1 = 32 ;
    	a190 = 8;
    	a13 = 32 ;
    	a106 = 12; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 1899\n");

    if(((((a48 == 34 && ((input == 2) &&  cf==1 )) && a120 == 34) && a79 == 34) && ((a120 == 34 && a1 == 34) && a159 == 34))) {
printf("POINT: 1900\n");
printf("POINT: 1901\n");

	if((a171 - 20) < a171){
printf("POINT: 1902\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a190 = 6;
    	a92 = 4;
    	a24 = 33 ;
    	a1 = 33 ;
    	a25 = 33 ;
    	a18 = 4;
    	a65 = 32 ;
    	a167 = 2;
    	a174 = 1;
    	a69 = 33 ;
    	a53 = 7;
    	a148 = 13;
    	a169 = 10;
    	a76 = 5;
    	a13 = 33 ;
    	a111 = 2;
    	a135 = 33 ;
    	a189 = 10;
    	a120 = 33 ;
    	a71 = 2;
    	a141 = 33 ;
    	a118 = 33 ;
    	a159 = 33 ;
    	a101 = 3;
    	a35 = 33 ;
    	a57 = 8;
    	a48 = 33 ;
    	a79 = 33 ;
    	a3 = 1;
    	a31 = 1;
    	a87 = 14; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm162(int input) {
printf("POINT: 1903\n");

    if(((((input == 1) &&  cf==1 ) && a109 == 34) && ((((a159 == 34 && a24 == 34) && a167 == 4) && a120 == 34) && a174 == 3))) {
printf("POINT: 1904\n");
printf("POINT: 1905\n");

	if((a146 + 20) > a146){
printf("POINT: 1906\n");
	a146  +=  6 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 1907\n");

	if((a95 - 20) < a95){
printf("POINT: 1908\n");
	a95  -=  3 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a30 = 33 ;
    	a57 = 9;
    	a53 = 8;
    	a24 = 32 ;
    	a174 = 2;
    	a118 = 32 ;
    	a34 = 32 ;
    	a167 = 3;
    	a169 = 11;
    	a48 = 32 ;
    	a120 = 32 ;
    	a109 = 32 ;
    	a101 = 4;
    	a159 = 32 ;
    	a111 = 3;
    	a35 = 36 ;
    	a132 = 7; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm25(int input) {
printf("POINT: 1909\n");

    if((((a106 == 11 &&  cf==1 ) && a57 == 10) && ((a65 == 34 && (a76 == 7 && (a118 == 34 && a118 == 34))) && a18 == 6))) {
printf("POINT: 1910\n");
    	calculate_outputm161(input);
    } 
printf("POINT: 1911\n");

    if((((a169 == 12 && a69 == 34) && a92 == 6) && (a101 == 5 && (a111 == 4 && (a24 == 34 && ( cf==1  && a106 == 12)))))) {
printf("POINT: 1912\n");
    	calculate_outputm162(input);
    } 
}
 void calculate_outputm163(int input) {
printf("POINT: 1913\n");

    if((((a189 == 12 && ((a141 == 34 && a174 == 3) && a169 == 12)) && a135 == 34) && (a111 == 4 && ((input == 1) &&  cf==1 )))) {
printf("POINT: 1914\n");
printf("POINT: 1915\n");

	if((a19 + 20) > a19){
printf("POINT: 1916\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1917\n");

	if((a7 + 20) > a7){
printf("POINT: 1918\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 1919\n");

	if((a107 + 20) > a107){
printf("POINT: 1920\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1921\n");

	if((a165 + 20) > a165){
printf("POINT: 1922\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a35 = 36 ;
    	a132 = 6;
    	a52 = 1; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1923\n");

    if(((a190 == 8 && (a174 == 3 && ( cf==1  && (input == 5)))) && (((a92 == 6 && a57 == 10) && a159 == 34) && a3 == 3))) {
printf("POINT: 1924\n");
printf("POINT: 1925\n");

	if((a19 + 20) > a19){
printf("POINT: 1926\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1927\n");

	if((a153 + 20) > a153){
printf("POINT: 1928\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1929\n");

	if((a107 + 20) > a107){
printf("POINT: 1930\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1931\n");

	if((a127 + 20) > a127){
printf("POINT: 1932\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1933\n");

	if((a10 + 20) > a10){
printf("POINT: 1934\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1935\n");

	if((a47 - 20) < a47){
printf("POINT: 1936\n");
	a47  -=  2 ;}
	 else{	
	a47  -=  0;}
    	cf = 0;
printf("POINT: 1937\n");

    	if((!(a72 == 35) && ((a40 == 13 || (a167 == 9 && a190 == 10)) || !(a135 == 33)))) {
printf("POINT: 1938\n");
    	a136 = 13;
    	a57 = 10;
    	a190 = 11;
    	a1 = 34 ;
    	a31 = 1;
    	a167 = 4;
    	a174 = 7;
    	a101 = 7;
    	a141 = 35 ;
    	a35 = 32 ;
    	a169 = 17;
    	a76 = 12;
    	a79 = 33 ;
    	a111 = 5;
    	a197 = 15; 
    	}else {
printf("POINT: 1940\n");
    	a76 = 8;
    	a111 = 3;
    	a167 = 3;
    	a65 = 34 ;
    	a13 = 34 ;
    	a57 = 9;
    	a190 = 10;
    	a109 = 36 ;
    	a141 = 35 ;
    	a31 = 7;
    	a174 = 6;
    	a92 = 6;
    	a159 = 33 ;
    	a18 = 10;
    	a79 = 33 ;
    	a135 = 34 ;
    	a169 = 17;
    	a61 = 34 ;
    	a118 = 35 ;
    	a71 = 8;
    	a24 = 34 ;
    	a34 = 35 ;
    	a101 = 9;
    	a1 = 34 ;
    	a3 = 1;
    	a48 = 35 ;
    	a35 = 33 ;
    	a53 = 12;
    	a189 = 14;
    	a120 = 34 ;
    	a148 = 14;
    	}printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 1941\n");

    if(((a69 == 34 && ((a190 == 8 && ( cf==1  && (input == 2))) && a101 == 5)) && (a79 == 34 && (a1 == 34 && a1 == 34)))) {
printf("POINT: 1942\n");
printf("POINT: 1943\n");

	if((a19 + 20) > a19){
printf("POINT: 1944\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1945\n");

	if((a153 + 20) > a153){
printf("POINT: 1946\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1947\n");

	if((a107 + 20) > a107){
printf("POINT: 1948\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1949\n");

	if((a78 + 20) > a78){
printf("POINT: 1950\n");
	a78  +=  3 ;}
	 else{	
	a78  +=  0;}
    	cf = 0;
    	a132 = 9;
    	a35 = 36 ;
    	a56 = 15; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 1951\n");

    if((( cf==1  && (input == 4)) && (a31 == 3 && ((((a69 == 34 && a65 == 34) && a189 == 12) && a1 == 34) && a65 == 34)))) {
printf("POINT: 1952\n");
printf("POINT: 1953\n");

	if((a19 + 20) > a19){
printf("POINT: 1954\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1955\n");

	if((a151 + 20) > a151){
printf("POINT: 1956\n");
	a151  +=  4 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 1957\n");

	if((a130 + 20) > a130){
printf("POINT: 1958\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 1959\n");

	if((a153 + 20) > a153){
printf("POINT: 1960\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1961\n");

	if((a107 + 20) > a107){
printf("POINT: 1962\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1963\n");

	if((a165 + 20) > a165){
printf("POINT: 1964\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 1965\n");

	if((a6 + 20) > a6){
printf("POINT: 1966\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a17 = 33 ;
    	a35 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 1967\n");

    if((((a76 == 7 && ((input == 3) &&  cf==1 )) && a13 == 34) && (a120 == 34 && (a141 == 34 && (a118 == 34 && a34 == 34))))) {
printf("POINT: 1968\n");
printf("POINT: 1969\n");

	if((a176 + 20) > a176){
printf("POINT: 1970\n");
	a176  +=  3 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 1971\n");

	if((a19 + 20) > a19){
printf("POINT: 1972\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1973\n");

	if((a105 - 20) < a105){
printf("POINT: 1974\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
printf("POINT: 1975\n");

	if((a153 + 20) > a153){
printf("POINT: 1976\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1977\n");

	if((a107 + 20) > a107){
printf("POINT: 1978\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 1979\n");

	if((a127 + 20) > a127){
printf("POINT: 1980\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 1981\n");

	if((a10 + 20) > a10){
printf("POINT: 1982\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a169 = 12;
    	a25 = 34 ;
    	a190 = 11;
    	a101 = 6;
    	a111 = 3;
    	a118 = 32 ;
    	a159 = 36 ;
    	a135 = 36 ;
    	a189 = 12;
    	a69 = 34 ;
    	a24 = 35 ;
    	a174 = 2;
    	a167 = 7;
    	a57 = 12;
    	a120 = 32 ;
    	a18 = 11;
    	a76 = 10;
    	a1 = 32 ;
    	a35 = 33 ;
    	a53 = 13;
    	a65 = 33 ;
    	a3 = 5;
    	a92 = 9;
    	a31 = 2;
    	a79 = 34 ;
    	a48 = 36 ;
    	a71 = 8;
    	a148 = 13;
    	a141 = 34 ;
    	a13 = 34 ;
    	a87 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm165(int input) {
printf("POINT: 1983\n");

    if(((a69 == 34 && ((a65 == 34 && ( cf==1  && (input == 3))) && a141 == 34)) && (a111 == 4 && (a48 == 34 && a34 == 34)))) {
printf("POINT: 1984\n");
printf("POINT: 1985\n");

	if((a19 + 20) > a19){
printf("POINT: 1986\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 1987\n");

	if((a95 + 20) > a95){
printf("POINT: 1988\n");
	a95  +=  2 ;}
	 else{	
	a95  +=  0;}
printf("POINT: 1989\n");

	if((a153 + 20) > a153){
printf("POINT: 1990\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 1991\n");

	if((a107 - 20) < a107){
printf("POINT: 1992\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 1993\n");

	if((a10 + 20) > a10){
printf("POINT: 1994\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 1995\n");

	if((a165 - 20) < a165){
printf("POINT: 1996\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 1997\n");

	if((a11 + 20) > a11){
printf("POINT: 1998\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 1999\n");

    	if((a141 == 35 || a17 == 33)) {
printf("POINT: 2000\n");
    	a57 = 12;
    	a1 = 33 ;
    	a53 = 10;
    	a71 = 9;
    	a3 = 4;
    	a40 = 7;
    	a169 = 17;
    	a70 = 9; 
    	}else {
printf("POINT: 2002\n");
    	a31 = 4;
    	a174 = 7;
    	a135 = 35 ;
    	a190 = 11;
    	a167 = 9;
    	a53 = 8;
    	a141 = 36 ;
    	a34 = 34 ;
    	a25 = 35 ;
    	a48 = 33 ;
    	a101 = 6;
    	a69 = 35 ;
    	a189 = 11;
    	a65 = 36 ;
    	a35 = 33 ;
    	a111 = 4;
    	a92 = 11;
    	a169 = 13;
    	a120 = 36 ;
    	a57 = 9;
    	a18 = 7;
    	a159 = 35 ;
    	a3 = 7;
    	a118 = 32 ;
    	a148 = 9;
    	a109 = 35 ;
    	a71 = 6;
    	a76 = 10;
    	a1 = 34 ;
    	a13 = 36 ;
    	a24 = 34 ;
    	a79 = 33 ;
    	a83 = 14;
    	}printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2003\n");

    if(((a174 == 3 && a48 == 34) && (a167 == 4 && (a167 == 4 && (a190 == 8 && (((input == 5) &&  cf==1 ) && a69 == 34)))))) {
printf("POINT: 2004\n");
printf("POINT: 2005\n");

	if((a19 + 20) > a19){
printf("POINT: 2006\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2007\n");

	if((a91 + 20) > a91){
printf("POINT: 2008\n");
	a91  +=  2 ;}
	 else{	
	a91  +=  0;}
printf("POINT: 2009\n");

	if((a153 + 20) > a153){
printf("POINT: 2010\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2011\n");

	if((a107 + 20) > a107){
printf("POINT: 2012\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2013\n");

	if((a10 + 20) > a10){
printf("POINT: 2014\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2015\n");

	if((a165 + 20) > a165){
printf("POINT: 2016\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a13 = 33 ;
    	a69 = 33 ;
    	a101 = 7;
    	a132 = 9;
    	a118 = 34 ;
    	a167 = 8;
    	a141 = 36 ;
    	a53 = 14;
    	a35 = 36 ;
    	a79 = 36 ;
    	a169 = 13;
    	a57 = 11;
    	a71 = 6;
    	a189 = 13;
    	a65 = 35 ;
    	a1 = 33 ;
    	a34 = 33 ;
    	a76 = 7;
    	a111 = 5;
    	a48 = 36 ;
    	a18 = 9;
    	a174 = 3;
    	a24 = 33 ;
    	a31 = 1;
    	a135 = 36 ;
    	a120 = 36 ;
    	a190 = 12;
    	a25 = 33 ;
    	a159 = 35 ;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2017\n");

    if((((( cf==1  && (input == 4)) && a57 == 10) && a3 == 3) && (a76 == 7 && (a135 == 34 && (a1 == 34 && a118 == 34))))) {
printf("POINT: 2018\n");
printf("POINT: 2019\n");

	if((a176 + 20) > a176){
printf("POINT: 2020\n");
	a176  +=  2 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 2021\n");

	if((a19 + 20) > a19){
printf("POINT: 2022\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2023\n");

	if((a153 + 20) > a153){
printf("POINT: 2024\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2025\n");

	if((a107 - 20) < a107){
printf("POINT: 2026\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2027\n");

	if((a127 + 20) > a127){
printf("POINT: 2028\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a118 = 36 ;
    	a174 = 6;
    	a31 = 7;
    	a169 = 12;
    	a3 = 5;
    	a61 = 33 ;
    	a24 = 35 ;
    	a35 = 33 ;
    	a25 = 36 ;
    	a13 = 35 ;
    	a159 = 36 ;
    	a111 = 9;
    	a109 = 32 ;
    	a167 = 4;
    	a120 = 32 ;
    	a69 = 35 ;
    	a92 = 10;
    	a18 = 6;
    	a76 = 11;
    	a57 = 9;
    	a1 = 36 ;
    	a48 = 36 ;
    	a65 = 34 ;
    	a79 = 34 ;
    	a189 = 17;
    	a71 = 8;
    	a190 = 12;
    	a34 = 36 ;
    	a101 = 4;
    	a135 = 34 ;
    	a53 = 8;
    	a141 = 36 ;
    	a148 = 14; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2029\n");

    if((((a118 == 34 && (a189 == 12 && a34 == 34)) && a25 == 34) && ((a92 == 6 && ( cf==1  && (input == 2))) && a141 == 34))) {
printf("POINT: 2030\n");
printf("POINT: 2031\n");

	if((a19 + 20) > a19){
printf("POINT: 2032\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2033\n");

	if((a171 - 20) < a171){
printf("POINT: 2034\n");
	a171  -=  2 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 2035\n");

	if((a153 + 20) > a153){
printf("POINT: 2036\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2037\n");

	if((a107 + 20) > a107){
printf("POINT: 2038\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
    	cf = 0;
    	a132 = 8;
    	a35 = 36 ;
    	a80 = 5; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2039\n");

    if(((a48 == 34 && ((a169 == 12 && (a174 == 3 && a141 == 34)) && a167 == 4)) && (a169 == 12 && ( cf==1  && (input == 1))))) {
printf("POINT: 2040\n");
printf("POINT: 2041\n");

	if((a19 + 20) > a19){
printf("POINT: 2042\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2043\n");

	if((a130 - 20) < a130){
printf("POINT: 2044\n");
	a130  -=  1 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 2045\n");

	if((a107 - 20) < a107){
printf("POINT: 2046\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2047\n");

	if((a127 + 20) > a127){
printf("POINT: 2048\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2049\n");

	if((a10 + 20) > a10){
printf("POINT: 2050\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2051\n");

	if((a165 + 20) > a165){
printf("POINT: 2052\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 2053\n");

	if((a6 + 20) > a6){
printf("POINT: 2054\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a75 = 35 ;
    	a35 = 32 ;
    	a136 = 12; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm26(int input) {
printf("POINT: 2055\n");

    if(((a141 == 34 && (a31 == 3 && ( cf==1  && a143 == 33))) && (a109 == 34 && ((a174 == 3 && a53 == 9) && a24 == 34)))) {
printf("POINT: 2056\n");
    	calculate_outputm163(input);
    } 
printf("POINT: 2057\n");

    if(((a111 == 4 && (a69 == 34 && (( cf==1  && a143 == 35) && a118 == 34))) && ((a174 == 3 && a31 == 3) && a24 == 34))) {
printf("POINT: 2058\n");
    	calculate_outputm165(input);
    } 
}
 void calculate_outputm167(int input) {
printf("POINT: 2059\n");

    if(((a120 == 34 && a31 == 3) && ((a92 == 6 && ((a169 == 12 && ((input == 2) &&  cf==1 )) && a3 == 3)) && a57 == 10))) {
printf("POINT: 2060\n");
printf("POINT: 2061\n");

	if((a182 - 20) < a182){
printf("POINT: 2062\n");
	a182  -=  1 ;}
	 else{	
	a182  -=  0;}
    	cf = 0;
    	a31 = 1;
    	a38 = 33 ;
    	a57 = 8;
    	a159 = 33 ;
    	a169 = 10;
    	a34 = 33 ;
    	a3 = 1;
    	a141 = 33 ;
    	a35 = 33 ;
    	a135 = 33 ;
    	a92 = 4;
    	a167 = 2;
    	a101 = 3;
    	a65 = 33 ;
    	a118 = 32 ;
    	a120 = 33 ;
    	a148 = 10; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm27(int input) {
printf("POINT: 2063\n");

    if((((a188 == 32 &&  cf==1 ) && a118 == 34) && (((a25 == 34 && (a169 == 12 && a57 == 10)) && a76 == 7) && a101 == 5))) {
printf("POINT: 2064\n");
    	calculate_outputm167(input);
    } 
}
 void calculate_outputm170(int input) {
printf("POINT: 2065\n");

    if((((a65 == 34 && (( cf==1  && (input == 1)) && a111 == 4)) && a76 == 7) && (a34 == 34 && (a169 == 12 && a120 == 34)))) {
printf("POINT: 2066\n");
printf("POINT: 2067\n");

	if((a105 + 20) > a105){
printf("POINT: 2068\n");
	a105  +=  2 ;}
	 else{	
	a105  +=  0;}
printf("POINT: 2069\n");

	if((a73 - 20) < a73){
printf("POINT: 2070\n");
	a73  -=  2 ;}
	 else{	
	a73  -=  0;}
printf("POINT: 2071\n");

	if((a153 + 20) > a153){
printf("POINT: 2072\n");
	a153  +=  2 ;}
	 else{	
	a153  +=  0;}
    	cf = 0;
    	a76 = 5;
    	a3 = 2;
    	a169 = 10;
    	a65 = 32 ;
    	a148 = 16;
    	a118 = 33 ;
    	a35 = 33 ;
    	a120 = 33 ;
    	a174 = 1;
    	a111 = 2;
    	a69 = 33 ;
    	a167 = 2;
    	a57 = 8;
    	a190 = 6;
    	a13 = 33 ;
    	a101 = 3;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm171(int input) {
printf("POINT: 2073\n");

    if((((a57 == 10 && ((( cf==1  && (input == 4)) && a31 == 3) && a120 == 34)) && a34 == 34) && (a18 == 6 && a71 == 4))) {
printf("POINT: 2074\n");
printf("POINT: 2075\n");

	if((a127 + 20) > a127){
printf("POINT: 2076\n");
	a127  +=  2 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a189 = 12;
    	a3 = 2;
    	a25 = 32 ;
    	a13 = 32 ;
    	a18 = 5;
    	a71 = 2;
    	a79 = 32 ;
    	a135 = 32 ;
    	a190 = 8;
    	a31 = 2;
    	a141 = 32 ;
    	a65 = 32 ;
    	a1 = 32 ;
    	a40 = 9;
    	a106 = 12; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2077\n");

    if(((( cf==1  && (input == 1)) && a101 == 5) && ((((a109 == 34 && a76 == 7) && a120 == 34) && a159 == 34) && a141 == 34))) {
printf("POINT: 2078\n");
    	cf = 0;
    	a76 = 6;
    	a123 = 32 ;
    	a71 = 3;
    	a35 = 34 ;
    	a14 = 4; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2079\n");

    if((((a18 == 6 && ( cf==1  && (input == 2))) && a48 == 34) && (a111 == 4 && (a18 == 6 && (a69 == 34 && a53 == 9))))) {
printf("POINT: 2080\n");
printf("POINT: 2081\n");

	if((a98 + 20) > a98){
printf("POINT: 2082\n");
	a98  +=  1 ;}
	 else{	
	a98  +=  0;}
    	cf = 0;
    	a13 = 33 ;
    	a189 = 10;
    	a101 = 3;
    	a18 = 4;
    	a111 = 2;
    	a169 = 10;
    	a174 = 1;
    	a120 = 33 ;
    	a35 = 33 ;
    	a141 = 33 ;
    	a25 = 33 ;
    	a57 = 8;
    	a76 = 5;
    	a48 = 33 ;
    	a190 = 6;
    	a1 = 33 ;
    	a3 = 1;
    	a79 = 33 ;
    	a167 = 2;
    	a69 = 33 ;
    	a71 = 2;
    	a118 = 33 ;
    	a24 = 33 ;
    	a135 = 33 ;
    	a53 = 7;
    	a31 = 1;
    	a159 = 33 ;
    	a148 = 13;
    	a92 = 4;
    	a65 = 32 ;
    	a87 = 14; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm174(int input) {
printf("POINT: 2083\n");

    if(((((a31 == 3 && a167 == 4) && a31 == 3) && ((a189 == 12 && (((input == 1) &&  cf==1 ) && a65 == 34)) && a71 == 4)) && a95 >= 7)) {
printf("POINT: 2084\n");
printf("POINT: 2085\n");

	if((a58 - 20) < a58){
printf("POINT: 2086\n");
	a58  -=  4 ;}
	 else{	
	a58  -=  0;}
    	cf = 0;
    	a188 = 35 ;
    	a40 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2087\n");

    if((((((a31 == 3 && a53 == 9) && a24 == 34) && a34 == 34) && (a159 == 34 && (((input == 5) &&  cf==1 ) && a141 == 34))) && a105 >= 21)) {
printf("POINT: 2088\n");
printf("POINT: 2089\n");

	if((a7 + 20) > a7){
printf("POINT: 2090\n");
	a7  +=  1 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a40 = 9;
    	a106 = 6; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2091\n");

    if(((((a71 == 4 && (a48 == 34 && a174 == 3)) && a159 == 34) && (a31 == 3 && (a109 == 34 && ( cf==1  && (input == 4))))) && a91 <= -23)) {
printf("POINT: 2092\n");
printf("POINT: 2093\n");

	if((a134 - 20) < a134){
printf("POINT: 2094\n");
	a134  -=  1 ;}
	 else{	
	a134  -=  0;}
    	cf = 0;
    	a141 = 32 ;
    	a57 = 9;
    	a69 = 32 ;
    	a25 = 32 ;
    	a169 = 11;
    	a136 = 13;
    	a190 = 7;
    	a34 = 32 ;
    	a174 = 2;
    	a167 = 3;
    	a120 = 32 ;
    	a48 = 32 ;
    	a101 = 4;
    	a13 = 32 ;
    	a35 = 32 ;
    	a197 = 14; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2095\n");

    if((((a120 == 34 && ((a25 == 34 && (a69 == 34 && a190 == 8)) && a13 == 34)) && (( cf==1  && (input == 3)) && a189 == 12)) && a151 <= -11)) {
printf("POINT: 2096\n");
    	cf = 0;
    	a49 = 32 ;
    	a123 = 36 ;
    	a35 = 34 ;
    	a92 = 6; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2097\n");

    if((((a101 == 5 && (a76 == 7 && ( cf==1  && (input == 2)))) && a135 == 34) && (a118 == 34 && (a169 == 12 && a3 == 3)))) {
printf("POINT: 2098\n");
    	cf = 0;
    	a25 = 32 ;
    	a13 = 32 ;
    	a169 = 11;
    	a111 = 3;
    	a35 = 36 ;
    	a141 = 32 ;
    	a3 = 2;
    	a34 = 32 ;
    	a18 = 5;
    	a79 = 32 ;
    	a120 = 32 ;
    	a65 = 32 ;
    	a109 = 32 ;
    	a72 = 33 ;
    	a135 = 32 ;
    	a159 = 32 ;
    	a167 = 3;
    	a174 = 2;
    	a101 = 4;
    	a76 = 6;
    	a69 = 32 ;
    	a48 = 32 ;
    	a24 = 32 ;
    	a118 = 32 ;
    	a132 = 12; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm28(int input) {
printf("POINT: 2099\n");

    if((((a13 == 34 && (a111 == 4 && a57 == 10)) && a69 == 34) && (a3 == 3 && (a111 == 4 && ( cf==1  && a122 == 6))))) {
printf("POINT: 2100\n");
    	calculate_outputm170(input);
    } 
printf("POINT: 2101\n");

    if(((a57 == 10 && (( cf==1  && a122 == 9) && a174 == 3)) && (a174 == 3 && ((a141 == 34 && a174 == 3) && a31 == 3)))) {
printf("POINT: 2102\n");
    	calculate_outputm171(input);
    } 
printf("POINT: 2103\n");

    if(((a71 == 4 && (((a159 == 34 && ( cf==1  && a122 == 13)) && a25 == 34) && a18 == 6)) && (a34 == 34 && a189 == 12))) {
printf("POINT: 2104\n");
    	calculate_outputm174(input);
    } 
}
 void calculate_outputm175(int input) {
printf("POINT: 2105\n");

    if(((((a53 == 9 && (a31 == 3 && a109 == 34)) && a76 == 7) && (a111 == 4 && (( cf==1  && (input == 4)) && a141 == 34))) && a98 <= -5)) {
printf("POINT: 2106\n");
printf("POINT: 2107\n");

	if((a73 + 20) > a73){
printf("POINT: 2108\n");
	a73  +=  2 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a159 = 33 ;
    	a135 = 33 ;
    	a174 = 1;
    	a18 = 4;
    	a31 = 1;
    	a111 = 2;
    	a25 = 33 ;
    	a35 = 33 ;
    	a53 = 7;
    	a189 = 10;
    	a71 = 2;
    	a148 = 16;
    	a141 = 33 ;
    	a55 = 7; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 2109\n");

    if((((a118 == 34 && (a135 == 34 && (a65 == 34 && a34 == 34))) && (a141 == 34 && (((input == 3) &&  cf==1 ) && a34 == 34))) && (a127 % 2==0))) {
printf("POINT: 2110\n");
    	cf = 0;
    	a148 = 13;
    	a35 = 33 ;
    	a87 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2111\n");

    if((((a65 == 34 && ((a53 == 9 && (a118 == 34 && a13 == 34)) && a141 == 34)) && (( cf==1  && (input == 2)) && a25 == 34)) && a182 >= 4)) {
printf("POINT: 2112\n");
printf("POINT: 2113\n");

	if((a134 - 20) < a134){
printf("POINT: 2114\n");
	a134  -=  1 ;}
	 else{	
	a134  -=  0;}
    	cf = 0;
    	a3 = 1;
    	a174 = 1;
    	a148 = 13;
    	a25 = 33 ;
    	a18 = 4;
    	a92 = 4;
    	a101 = 3;
    	a189 = 10;
    	a31 = 1;
    	a141 = 33 ;
    	a35 = 33 ;
    	a169 = 10;
    	a111 = 2;
    	a13 = 33 ;
    	a87 = 13; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2115\n");

    if(((a101 == 5 && ((a135 == 34 && (a3 == 3 && a109 == 34)) && a3 == 3)) && (( cf==1  && (input == 5)) && a169 == 12))) {
printf("POINT: 2116\n");
printf("POINT: 2117\n");

	if((a78 + 20) > a78){
printf("POINT: 2118\n");
	a78  +=  1 ;}
	 else{	
	a78  +=  0;}
    	cf = 0;
    	a40 = 12;
    	a79 = 34 ;
    	a3 = 2;
    	a135 = 34 ;
    	a25 = 34 ;
    	a189 = 12;
    	a65 = 34 ;
    	a24 = 34 ;
    	a57 = 10;
    	a48 = 34 ;
    	a190 = 8;
    	a1 = 34 ;
    	a122 = 9; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2119\n");

    if((((a69 == 34 && (a174 == 3 && ((a92 == 6 && (a25 == 34 && a71 == 4)) && a65 == 34))) && ((input == 1) &&  cf==1 )) && (a10 % 2==0))) {
printf("POINT: 2120\n");
    	cf = 0;
    	a35 = 33 ;
    	a17 = 36 ;
    	a148 = 15; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm177(int input) {
printf("POINT: 2121\n");

    if(((a159 == 34 && ( cf==1  && (input == 1))) && ((a71 == 4 && (a92 == 6 && (a120 == 34 && a141 == 34))) && a57 == 10))) {
printf("POINT: 2122\n");
printf("POINT: 2123\n");

	if((a134 - 20) < a134){
printf("POINT: 2124\n");
	a134  -=  2 ;}
	 else{	
	a134  -=  0;}
    	cf = 0;
printf("POINT: 2125\n");

    	if(((!(a14 == 1) || (a122 == 13 || a48 == 33)) && !(a52 == 1))) {
printf("POINT: 2126\n");
    	a53 = 8;
    	a109 = 32 ;
    	a79 = 32 ;
    	a76 = 6;
    	a3 = 2;
    	a136 = 15;
    	a65 = 32 ;
    	a34 = 32 ;
    	a120 = 32 ;
    	a48 = 32 ;
    	a167 = 3;
    	a190 = 7;
    	a101 = 4;
    	a174 = 2;
    	a169 = 11;
    	a71 = 3;
    	a118 = 32 ;
    	a141 = 32 ;
    	a57 = 9;
    	a135 = 32 ;
    	a189 = 11;
    	a13 = 32 ;
    	a25 = 32 ;
    	a159 = 32 ;
    	a1 = 32 ;
    	a35 = 32 ;
    	a92 = 5;
    	a40 = 9; 
    	}else {
printf("POINT: 2128\n");
    	a24 = 34 ;
    	a35 = 34 ;
    	a71 = 3;
    	a3 = 2;
    	a69 = 34 ;
    	a123 = 32 ;
    	a111 = 4;
    	a76 = 6;
    	a14 = 4;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2129\n");

    if(((a48 == 34 && ((input == 5) &&  cf==1 )) && ((((a109 == 34 && a189 == 12) && a190 == 8) && a159 == 34) && a101 == 5))) {
printf("POINT: 2130\n");
printf("POINT: 2131\n");

	if((a171 + 20) > a171){
printf("POINT: 2132\n");
	a171  +=  2 ;}
	 else{	
	a171  +=  0;}
    	cf = 0;
    	a13 = 32 ;
    	a167 = 3;
    	a141 = 32 ;
    	a69 = 32 ;
    	a35 = 34 ;
    	a120 = 32 ;
    	a123 = 33 ;
    	a190 = 7;
    	a178 = 7; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2133\n");

    if(((a76 == 7 && ((input == 4) &&  cf==1 )) && (a174 == 3 && (a169 == 12 && ((a3 == 3 && a18 == 6) && a13 == 34))))) {
printf("POINT: 2134\n");
printf("POINT: 2135\n");

	if((a171 - 20) < a171){
printf("POINT: 2136\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a48 = 32 ;
    	a174 = 2;
    	a101 = 4;
    	a57 = 9;
    	a190 = 7;
    	a141 = 32 ;
    	a71 = 3;
    	a167 = 3;
    	a169 = 11;
    	a120 = 32 ;
    	a65 = 32 ;
    	a135 = 32 ;
    	a189 = 11;
    	a18 = 5;
    	a34 = 32 ;
    	a1 = 32 ;
    	a35 = 36 ;
    	a53 = 8;
    	a76 = 6;
    	a132 = 9;
    	a25 = 32 ;
    	a118 = 32 ;
    	a13 = 32 ;
    	a31 = 2;
    	a159 = 32 ;
    	a79 = 32 ;
    	a56 = 11; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm29(int input) {
printf("POINT: 2137\n");

    if(((a31 == 3 && a13 == 34) && (a69 == 34 && (a159 == 34 && (a141 == 34 && (a101 == 5 && ( cf==1  && a32 == 32))))))) {
printf("POINT: 2138\n");
    	calculate_outputm175(input);
    } 
printf("POINT: 2139\n");

    if(((a65 == 34 && (a109 == 34 && a48 == 34)) && (a48 == 34 && (a31 == 3 && (a71 == 4 && (a32 == 35 &&  cf==1 )))))) {
printf("POINT: 2140\n");
    	calculate_outputm177(input);
    } 
}
 void calculate_outputm178(int input) {
printf("POINT: 2141\n");

    if(((( cf==1  && (input == 2)) && ((a141 == 32 && ((a57 == 9 && (a3 == 2 && a13 == 32)) && a118 == 32)) && a69 == 32)) && a165 == 3734)) {
printf("POINT: 2142\n");
printf("POINT: 2143\n");

	if((a171 - 20) < a171){
printf("POINT: 2144\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a17 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2145\n");

    if(((a167 == 3 && a169 == 11) && ((a167 == 3 && ((a167 == 3 && ((input == 4) &&  cf==1 )) && a65 == 32)) && a25 == 32))) {
printf("POINT: 2146\n");
    	cf = 0;
    	a92 = 6;
    	a35 = 35 ;
    	a118 = 34 ;
    	a40 = 9;
    	a190 = 8;
    	a159 = 34 ;
    	a18 = 5;
    	a189 = 12;
    	a101 = 5;
    	a31 = 2;
    	a69 = 34 ;
    	a71 = 2;
    	a120 = 34 ;
    	a48 = 34 ;
    	a65 = 32 ;
    	a79 = 32 ;
    	a169 = 12;
    	a141 = 32 ;
    	a13 = 32 ;
    	a1 = 32 ;
    	a25 = 32 ;
    	a3 = 2;
    	a135 = 32 ;
    	a34 = 34 ;
    	a174 = 3;
    	a111 = 4;
    	a167 = 4;
    	a53 = 9;
    	a76 = 7;
    	a57 = 10;
    	a106 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2147\n");

    if((((a159 == 32 && ( cf==1  && (input == 1))) && a169 == 11) && (a169 == 11 && (a1 == 32 && (a120 == 32 && a111 == 3))))) {
printf("POINT: 2148\n");
printf("POINT: 2149\n");

	if((a151 + 20) > a151){
printf("POINT: 2150\n");
	a151  +=  1 ;}
	 else{	
	a151  +=  0;}
    	cf = 0;
    	a79 = 34 ;
    	a71 = 2;
    	a174 = 1;
    	a135 = 33 ;
    	a101 = 3;
    	a57 = 8;
    	a3 = 2;
    	a1 = 33 ;
    	a159 = 33 ;
    	a189 = 10;
    	a169 = 10;
    	a167 = 2;
    	a120 = 33 ;
    	a53 = 7;
    	a48 = 33 ;
    	a31 = 1;
    	a92 = 4;
    	a109 = 33 ;
    	a25 = 33 ;
    	a34 = 34 ;
    	a69 = 33 ;
    	a35 = 33 ;
    	a111 = 2;
    	a118 = 33 ;
    	a13 = 33 ;
    	a24 = 33 ;
    	a65 = 32 ;
    	a76 = 5;
    	a148 = 11;
    	a141 = 33 ;
    	a70 = 6; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2151\n");

    if(((a31 == 2 && (a76 == 6 && a189 == 11)) && (a169 == 11 && ((a92 == 5 && ( cf==1  && (input == 5))) && a34 == 32)))) {
printf("POINT: 2152\n");
    	cf = 0;
    	a65 = 32 ;
    	a190 = 7;
    	a3 = 2;
    	a111 = 3;
    	a33 = 34 ;
    	a109 = 32 ;
    	a35 = 32 ;
    	a71 = 3;
    	a34 = 32 ;
    	a189 = 11;
    	a92 = 5;
    	a18 = 5;
    	a25 = 32 ;
    	a169 = 11;
    	a135 = 32 ;
    	a24 = 32 ;
    	a76 = 6;
    	a118 = 32 ;
    	a57 = 9;
    	a53 = 8;
    	a136 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2153\n");

    if(((((a111 == 3 && ( cf==1  && (input == 3))) && a111 == 3) && (a92 == 5 && (a141 == 32 && (a120 == 32 && a65 == 32)))) && a47 <= -1)) {
printf("POINT: 2154\n");
printf("POINT: 2155\n");

	if((a98 + 20) > a98){
printf("POINT: 2156\n");
	a98  +=  4 ;}
	 else{	
	a98  +=  0;}
    	cf = 0;
    	a30 = 35 ;
    	a132 = 7; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm179(int input) {
printf("POINT: 2157\n");

    if(((((( cf==1  && (input == 2)) && a53 == 8) && a53 == 8) && (a69 == 32 && (a24 == 32 && (a53 == 8 && a57 == 9)))) && a165 == 3734)) {
printf("POINT: 2158\n");
printf("POINT: 2159\n");

	if((a7 + 20) > a7){
printf("POINT: 2160\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a17 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2161\n");

    if((((a174 == 2 && a65 == 32) && (a189 == 11 && (a118 == 32 && (a135 == 32 && (( cf==1  && (input == 3)) && a101 == 4))))) && a47 <= -1)) {
printf("POINT: 2162\n");
printf("POINT: 2163\n");

	if((a95 - 20) < a95){
printf("POINT: 2164\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a30 = 35 ;
    	a132 = 7; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2165\n");

    if(((a79 == 32 && a57 == 9) && (a24 == 32 && (a48 == 32 && (a57 == 9 && (a71 == 3 && ( cf==1  && (input == 5)))))))) {
printf("POINT: 2166\n");
printf("POINT: 2167\n");

	if((a182 + 20) > a182){
printf("POINT: 2168\n");
	a182  +=  2 ;}
	 else{	
	a182  +=  0;}
    	cf = 0;
    	a34 = 32 ;
    	a35 = 32 ;
    	a18 = 5;
    	a118 = 32 ;
    	a3 = 2;
    	a189 = 11;
    	a24 = 32 ;
    	a25 = 32 ;
    	a71 = 3;
    	a33 = 34 ;
    	a135 = 32 ;
    	a169 = 11;
    	a53 = 8;
    	a31 = 2;
    	a76 = 6;
    	a109 = 32 ;
    	a57 = 9;
    	a65 = 32 ;
    	a92 = 5;
    	a159 = 32 ;
    	a111 = 3;
    	a120 = 32 ;
    	a136 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2169\n");

    if(((((a57 == 9 && a190 == 7) && a118 == 32) && a101 == 4) && (a167 == 3 && (a13 == 32 && ( cf==1  && (input == 4)))))) {
printf("POINT: 2170\n");
    	cf = 0;
    	a13 = 32 ;
    	a118 = 34 ;
    	a25 = 32 ;
    	a34 = 34 ;
    	a169 = 12;
    	a92 = 6;
    	a71 = 2;
    	a141 = 32 ;
    	a174 = 3;
    	a40 = 9;
    	a190 = 8;
    	a79 = 32 ;
    	a65 = 32 ;
    	a69 = 34 ;
    	a167 = 4;
    	a18 = 5;
    	a1 = 32 ;
    	a48 = 34 ;
    	a189 = 12;
    	a135 = 32 ;
    	a3 = 2;
    	a35 = 35 ;
    	a57 = 10;
    	a53 = 9;
    	a24 = 34 ;
    	a31 = 2;
    	a109 = 34 ;
    	a101 = 5;
    	a106 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2171\n");

    if(((a135 == 32 && (((a174 == 2 && (a48 == 32 && a109 == 32)) && a13 == 32) && a141 == 32)) && ( cf==1  && (input == 1)))) {
printf("POINT: 2172\n");
printf("POINT: 2173\n");

	if((a105 - 20) < a105){
printf("POINT: 2174\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a34 = 34 ;
    	a141 = 33 ;
    	a159 = 33 ;
    	a101 = 3;
    	a111 = 2;
    	a35 = 33 ;
    	a109 = 33 ;
    	a92 = 4;
    	a135 = 33 ;
    	a167 = 2;
    	a118 = 33 ;
    	a24 = 33 ;
    	a120 = 33 ;
    	a79 = 34 ;
    	a69 = 33 ;
    	a57 = 8;
    	a1 = 33 ;
    	a3 = 2;
    	a76 = 5;
    	a189 = 10;
    	a169 = 10;
    	a71 = 2;
    	a53 = 7;
    	a65 = 32 ;
    	a148 = 11;
    	a13 = 33 ;
    	a25 = 33 ;
    	a48 = 33 ;
    	a174 = 1;
    	a190 = 6;
    	a70 = 6; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm180(int input) {
printf("POINT: 2175\n");

    if((((a53 == 8 && (a109 == 32 && (a57 == 9 && a1 == 32))) && a111 == 3) && (((input == 3) &&  cf==1 ) && a111 == 3))) {
printf("POINT: 2176\n");
    	cf = 0;
    	a35 = 33 ;
    	a111 = 2;
    	a57 = 8;
    	a53 = 7;
    	a174 = 1;
    	a13 = 33 ;
    	a118 = 33 ;
    	a141 = 33 ;
    	a71 = 2;
    	a148 = 16;
    	a25 = 33 ;
    	a55 = 9; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm30(int input) {
printf("POINT: 2177\n");

    if(((((a48 == 32 && a174 == 2) && a31 == 2) && a34 == 32) && (a48 == 32 && (( cf==1  && a179 == 33) && a135 == 32)))) {
printf("POINT: 2178\n");
    	calculate_outputm178(input);
    } 
printf("POINT: 2179\n");

    if(((a79 == 32 && (a71 == 3 && ((a189 == 11 && (a179 == 32 &&  cf==1 )) && a92 == 5))) && (a57 == 9 && a92 == 5))) {
printf("POINT: 2180\n");
    	calculate_outputm179(input);
    } 
printf("POINT: 2181\n");

    if(((a57 == 9 && (a3 == 2 && (a71 == 3 && ((a179 == 34 &&  cf==1 ) && a174 == 2)))) && (a189 == 11 && a141 == 32))) {
printf("POINT: 2182\n");
    	calculate_outputm180(input);
    } 
}
 void calculate_outputm185(int input) {
printf("POINT: 2183\n");

    if(((a76 == 6 && (a167 == 3 && ((a79 == 32 && ( cf==1  && (input == 4))) && a189 == 11))) && (a189 == 11 && a1 == 32))) {
printf("POINT: 2184\n");
printf("POINT: 2185\n");

	if((a19 + 20) > a19){
printf("POINT: 2186\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2187\n");

	if((a153 + 20) > a153){
printf("POINT: 2188\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2189\n");

	if((a107 - 20) < a107){
printf("POINT: 2190\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2191\n");

	if((a10 + 20) > a10){
printf("POINT: 2192\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2193\n");

	if((a6 + 20) > a6){
printf("POINT: 2194\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a17 = 36 ;
    	a35 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2195\n");

    if((((a31 == 2 && ( cf==1  && (input == 3))) && a159 == 32) && ((a109 == 32 && (a25 == 32 && a1 == 32)) && a167 == 3))) {
printf("POINT: 2196\n");
printf("POINT: 2197\n");

	if((a176 + 20) > a176){
printf("POINT: 2198\n");
	a176  +=  2 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 2199\n");

	if((a19 + 20) > a19){
printf("POINT: 2200\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2201\n");

	if((a151 + 20) > a151){
printf("POINT: 2202\n");
	a151  +=  3 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 2203\n");

	if((a153 + 20) > a153){
printf("POINT: 2204\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2205\n");

	if((a107 + 20) > a107){
printf("POINT: 2206\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2207\n");

	if((a127 + 20) > a127){
printf("POINT: 2208\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2209\n");

	if((a10 + 20) > a10){
printf("POINT: 2210\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a57 = 8;
    	a3 = 6;
    	a53 = 12;
    	a92 = 7;
    	a132 = 8;
    	a135 = 33 ;
    	a80 = 6; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2211\n");

    if(((a76 == 6 && (a79 == 32 && a92 == 5)) && (a57 == 9 && ((( cf==1  && (input == 5)) && a24 == 32) && a118 == 32)))) {
printf("POINT: 2212\n");
printf("POINT: 2213\n");

	if((a19 + 20) > a19){
printf("POINT: 2214\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2215\n");

	if((a153 + 20) > a153){
printf("POINT: 2216\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2217\n");

	if((a107 + 20) > a107){
printf("POINT: 2218\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2219\n");

	if((a165 - 20) < a165){
printf("POINT: 2220\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a40 = 12;
    	a35 = 35 ;
    	a122 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2221\n");

    if(((a101 == 4 && (a101 == 4 && (a24 == 32 && (a65 == 32 && ( cf==1  && (input == 1)))))) && (a118 == 32 && a92 == 5))) {
printf("POINT: 2222\n");
printf("POINT: 2223\n");

	if((a176 + 20) > a176){
printf("POINT: 2224\n");
	a176  +=  3 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 2225\n");

	if((a19 + 20) > a19){
printf("POINT: 2226\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2227\n");

	if((a107 - 20) < a107){
printf("POINT: 2228\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2229\n");

	if((a127 + 20) > a127){
printf("POINT: 2230\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2231\n");

	if((a6 + 20) > a6){
printf("POINT: 2232\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 2233\n");

    	if(((!(a87 == 11) && ((!(a111 == 6) && a174 == 1) && a143 == 32)) && a35 == 36)) {
printf("POINT: 2234\n");
    	a190 = 6;
    	a31 = 1;
    	a52 = 6; 
    	}else {
printf("POINT: 2236\n");
    	a13 = 34 ;
    	a57 = 11;
    	a1 = 36 ;
    	a38 = 33 ;
    	a120 = 35 ;
    	a25 = 35 ;
    	a31 = 2;
    	a111 = 9;
    	a48 = 34 ;
    	a35 = 33 ;
    	a3 = 5;
    	a76 = 12;
    	a71 = 7;
    	a190 = 10;
    	a101 = 9;
    	a167 = 7;
    	a109 = 35 ;
    	a135 = 36 ;
    	a18 = 6;
    	a141 = 34 ;
    	a53 = 11;
    	a69 = 36 ;
    	a169 = 12;
    	a34 = 32 ;
    	a92 = 5;
    	a189 = 17;
    	a24 = 34 ;
    	a174 = 3;
    	a159 = 35 ;
    	a65 = 36 ;
    	a79 = 34 ;
    	a148 = 10;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2237\n");

    if(((a31 == 2 && ((a31 == 2 && a53 == 8) && a79 == 32)) && ((a48 == 32 && ((input == 2) &&  cf==1 )) && a135 == 32))) {
printf("POINT: 2238\n");
printf("POINT: 2239\n");

	if((a19 + 20) > a19){
printf("POINT: 2240\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2241\n");

	if((a130 + 20) > a130){
printf("POINT: 2242\n");
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2243\n");

	if((a153 + 20) > a153){
printf("POINT: 2244\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2245\n");

	if((a182 - 20) < a182){
printf("POINT: 2246\n");
	a182  -=  3 ;}
	 else{	
	a182  -=  0;}
printf("POINT: 2247\n");

	if((a127 + 20) > a127){
printf("POINT: 2248\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2249\n");

	if((a10 + 20) > a10){
printf("POINT: 2250\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2251\n");

	if((a165 + 20) > a165){
printf("POINT: 2252\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 2253\n");

	if((a6 + 20) > a6){
printf("POINT: 2254\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 2255\n");

    	if(a148 == 13) {
printf("POINT: 2256\n");
    	a179 = 34 ;
    	a76 = 6;
    	a120 = 32 ;
    	a18 = 5;
    	a31 = 3;
    	a24 = 36 ;
    	a92 = 6;
    	a169 = 17;
    	a135 = 36 ;
    	a190 = 7;
    	a132 = 5; 
    	}else {
printf("POINT: 2258\n");
    	a35 = 33 ;
    	a119 = 35 ;
    	a148 = 12;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm186(int input) {
printf("POINT: 2259\n");

    if(((a71 == 3 && a57 == 9) && ((a69 == 32 && ((( cf==1  && (input == 5)) && a25 == 32) && a69 == 32)) && a53 == 8))) {
printf("POINT: 2260\n");
printf("POINT: 2261\n");

	if((a7 + 20) > a7){
printf("POINT: 2262\n");
	a7  +=  1 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a79 = 34 ;
    	a65 = 34 ;
    	a118 = 34 ;
    	a53 = 9;
    	a76 = 7;
    	a69 = 34 ;
    	a174 = 3;
    	a48 = 34 ;
    	a34 = 34 ;
    	a167 = 4;
    	a24 = 34 ;
    	a189 = 12;
    	a71 = 4;
    	a3 = 3;
    	a159 = 34 ;
    	a40 = 12;
    	a169 = 12;
    	a35 = 35 ;
    	a135 = 34 ;
    	a111 = 4;
    	a109 = 34 ;
    	a141 = 34 ;
    	a13 = 34 ;
    	a18 = 6;
    	a101 = 5;
    	a57 = 10;
    	a120 = 34 ;
    	a25 = 34 ;
    	a122 = 13; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2263\n");

    if(((a118 == 32 && (((input == 4) &&  cf==1 ) && a69 == 32)) && (a92 == 5 && ((a135 == 32 && a120 == 32) && a1 == 32)))) {
printf("POINT: 2264\n");
printf("POINT: 2265\n");

	if((a171 - 20) < a171){
printf("POINT: 2266\n");
	a171  -=  2 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
printf("POINT: 2267\n");

    	if((a106 == 9 || (!(a61 == 32) && (a75 == 36 && a35 == 34)))) {
printf("POINT: 2268\n");
    	a31 = 2;
    	a164 = 34 ;
    	a35 = 32 ;
    	a190 = 7;
    	a136 = 10; 
    	}else {
printf("POINT: 2270\n");
    	a48 = 34 ;
    	a34 = 34 ;
    	a120 = 34 ;
    	a92 = 6;
    	a1 = 34 ;
    	a123 = 32 ;
    	a57 = 10;
    	a111 = 4;
    	a169 = 12;
    	a53 = 9;
    	a174 = 3;
    	a118 = 34 ;
    	a189 = 12;
    	a167 = 4;
    	a135 = 34 ;
    	a35 = 34 ;
    	a159 = 34 ;
    	a13 = 34 ;
    	a101 = 5;
    	a18 = 6;
    	a69 = 34 ;
    	a24 = 34 ;
    	a79 = 34 ;
    	a25 = 34 ;
    	a65 = 34 ;
    	a141 = 34 ;
    	a109 = 34 ;
    	a14 = 4;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2271\n");

    if(((a169 == 11 && (a57 == 9 && a167 == 3)) && (a159 == 32 && (a18 == 5 && (((input == 1) &&  cf==1 ) && a109 == 32))))) {
printf("POINT: 2272\n");
printf("POINT: 2273\n");

	if((a134 + 20) > a134){
printf("POINT: 2274\n");
	a134  +=  2 ;}
	 else{	
	a134  +=  0;}
printf("POINT: 2275\n");

	if((a130 + 20) > a130){
printf("POINT: 2276\n");
	a130  +=  4 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2277\n");

	if((a182 + 20) > a182){
printf("POINT: 2278\n");
	a182  +=  2 ;}
	 else{	
	a182  +=  0;}
printf("POINT: 2279\n");

	if((a47 - 20) < a47){
printf("POINT: 2280\n");
	a47  -=  2 ;}
	 else{	
	a47  -=  0;}
printf("POINT: 2281\n");

	if((a5 + 20) > a5){
printf("POINT: 2282\n");
	a5  +=  2 ;}
	 else{	
	a5  +=  0;}
    	cf = 0;
    	a72 = 36 ;
    	a71 = 2;
    	a190 = 7;
    	a31 = 2;
    	a189 = 12;
    	a132 = 12; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2283\n");

    if((a79 == 32 && (((((a120 == 32 && ( cf==1  && (input == 3))) && a189 == 11) && a13 == 32) && a25 == 32) && a92 == 5))) {
printf("POINT: 2284\n");
printf("POINT: 2285\n");

	if((a134 - 20) < a134){
printf("POINT: 2286\n");
	a134  -=  2 ;}
	 else{	
	a134  -=  0;}
    	cf = 0;
    	a48 = 34 ;
    	a65 = 34 ;
    	a109 = 34 ;
    	a57 = 10;
    	a101 = 5;
    	a53 = 9;
    	a25 = 34 ;
    	a79 = 34 ;
    	a35 = 34 ;
    	a69 = 34 ;
    	a123 = 34 ;
    	a76 = 7;
    	a168 = 32 ;
    	a135 = 34 ;
    	a174 = 3;
    	a92 = 6; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm187(int input) {
printf("POINT: 2287\n");

    if((((((a57 == 9 && a159 == 32) && a18 == 5) && a24 == 32) && ((a159 == 32 && ( cf==1  && (input == 3))) && a167 == 3)) && (a127 % 2==0))) {
printf("POINT: 2288\n");
printf("POINT: 2289\n");

	if((a58 - 20) < a58){
printf("POINT: 2290\n");
	a58  -=  2 ;}
	 else{	
	a58  -=  0;}
    	cf = 0;
    	a148 = 13;
    	a35 = 33 ;
    	a87 = 12; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2291\n");

    if(((((a190 == 7 && ((((input == 4) &&  cf==1 ) && a79 == 32) && a174 == 2)) && a111 == 3) && (a71 == 3 && a135 == 32)) && a98 <= -5)) {
printf("POINT: 2292\n");
printf("POINT: 2293\n");

	if((a73 + 20) > a73){
printf("POINT: 2294\n");
	a73  +=  4 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a48 = 33 ;
    	a25 = 33 ;
    	a35 = 33 ;
    	a141 = 33 ;
    	a135 = 33 ;
    	a71 = 2;
    	a159 = 33 ;
    	a18 = 4;
    	a53 = 7;
    	a148 = 16;
    	a24 = 33 ;
    	a57 = 8;
    	a190 = 6;
    	a174 = 1;
    	a111 = 2;
    	a55 = 7; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2295\n");

    if((((a18 == 5 && (((a111 == 3 && a53 == 8) && a3 == 2) && a3 == 2)) && (a159 == 32 && ((input == 1) &&  cf==1 ))) && (a10 % 2==0))) {
printf("POINT: 2296\n");
printf("POINT: 2297\n");

	if((a78 - 20) < a78){
printf("POINT: 2298\n");
	a78  -=  2 ;}
	 else{	
	a78  -=  0;}
    	cf = 0;
    	a17 = 36 ;
    	a35 = 33 ;
    	a148 = 15; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2299\n");

    if((((( cf==1  && (input == 2)) && a79 == 32) && (a69 == 32 && (((a25 == 32 && a65 == 32) && a167 == 3) && a3 == 2))) && a182 >= 4)) {
printf("POINT: 2300\n");
printf("POINT: 2301\n");

	if((a91 + 20) > a91){
printf("POINT: 2302\n");
	a91  +=  4 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a18 = 4;
    	a148 = 13;
    	a101 = 3;
    	a141 = 33 ;
    	a190 = 6;
    	a57 = 8;
    	a25 = 33 ;
    	a3 = 1;
    	a13 = 33 ;
    	a35 = 33 ;
    	a111 = 2;
    	a79 = 33 ;
    	a24 = 33 ;
    	a174 = 1;
    	a87 = 13; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2303\n");

    if((((a76 == 6 && (((input == 5) &&  cf==1 ) && a53 == 8)) && a101 == 4) && ((a159 == 32 && a13 == 32) && a141 == 32))) {
printf("POINT: 2304\n");
printf("POINT: 2305\n");

	if((a91 + 20) > a91){
printf("POINT: 2306\n");
	a91  +=  3 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a169 = 12;
    	a35 = 35 ;
    	a65 = 34 ;
    	a40 = 12;
    	a141 = 34 ;
    	a18 = 6;
    	a159 = 34 ;
    	a71 = 4;
    	a57 = 10;
    	a135 = 34 ;
    	a111 = 4;
    	a92 = 6;
    	a25 = 34 ;
    	a101 = 5;
    	a13 = 34 ;
    	a69 = 34 ;
    	a79 = 34 ;
    	a167 = 4;
    	a189 = 12;
    	a24 = 34 ;
    	a34 = 34 ;
    	a190 = 8;
    	a48 = 34 ;
    	a76 = 7;
    	a118 = 34 ;
    	a3 = 2;
    	a1 = 34 ;
    	a174 = 3;
    	a53 = 9;
    	a31 = 3;
    	a122 = 9; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm31(int input) {
printf("POINT: 2307\n");

    if(((a159 == 32 && ((a1 == 32 && a190 == 7) && a24 == 32)) && ((a18 == 5 && (a52 == 5 &&  cf==1 )) && a111 == 3))) {
printf("POINT: 2308\n");
    	calculate_outputm185(input);
    } 
printf("POINT: 2309\n");

    if(((a25 == 32 && (a71 == 3 && a92 == 5)) && (a1 == 32 && (a71 == 3 && (a71 == 3 && (a52 == 6 &&  cf==1 )))))) {
printf("POINT: 2310\n");
    	calculate_outputm186(input);
    } 
printf("POINT: 2311\n");

    if((((a1 == 32 && (a13 == 32 && ( cf==1  && a52 == 7))) && a111 == 3) && ((a18 == 5 && a48 == 32) && a34 == 32))) {
printf("POINT: 2312\n");
    	calculate_outputm187(input);
    } 
}
 void calculate_outputm189(int input) {
printf("POINT: 2313\n");

    if(((a118 == 32 && (a65 == 32 && (a24 == 32 && (((input == 3) &&  cf==1 ) && a109 == 32)))) && (a135 == 32 && a31 == 2))) {
printf("POINT: 2314\n");
    	cf = 0;
    	a135 = 34 ;
    	a168 = 32 ;
    	a79 = 34 ;
    	a25 = 34 ;
    	a35 = 34 ;
    	a109 = 34 ;
    	a48 = 34 ;
    	a123 = 34 ;
    	a65 = 34 ;
    	a57 = 10;
    	a174 = 3;
    	a101 = 5;
    	a53 = 9;
    	a31 = 3; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 2315\n");

    if((((a120 == 32 && (a13 == 32 && ((input == 4) &&  cf==1 ))) && a34 == 32) && ((a24 == 32 && a34 == 32) && a141 == 32))) {
printf("POINT: 2316\n");
printf("POINT: 2317\n");

	if((a195 + 20) > a195){
printf("POINT: 2318\n");
	a195  +=  4 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a13 = 33 ;
    	a53 = 7;
    	a148 = 16;
    	a1 = 33 ;
    	a109 = 34 ;
    	a111 = 2;
    	a167 = 2;
    	a174 = 1;
    	a48 = 33 ;
    	a76 = 5;
    	a118 = 33 ;
    	a57 = 8;
    	a169 = 10;
    	a79 = 34 ;
    	a31 = 1;
    	a120 = 33 ;
    	a159 = 33 ;
    	a190 = 6;
    	a141 = 33 ;
    	a92 = 4;
    	a18 = 4;
    	a24 = 33 ;
    	a25 = 33 ;
    	a189 = 10;
    	a34 = 34 ;
    	a101 = 3;
    	a135 = 33 ;
    	a35 = 33 ;
    	a69 = 33 ;
    	a55 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2319\n");

    if(((a174 == 2 && ((a79 == 32 && a79 == 32) && a48 == 32)) && ((((input == 1) &&  cf==1 ) && a79 == 32) && a57 == 9))) {
printf("POINT: 2320\n");
printf("POINT: 2321\n");

	if((a134 + 20) > a134){
printf("POINT: 2322\n");
	a134  +=  2 ;}
	 else{	
	a134  +=  0;}
printf("POINT: 2323\n");

	if((a130 + 20) > a130){
printf("POINT: 2324\n");
	a130  +=  4 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2325\n");

	if((a182 + 20) > a182){
printf("POINT: 2326\n");
	a182  +=  2 ;}
	 else{	
	a182  +=  0;}
printf("POINT: 2327\n");

	if((a47 - 20) < a47){
printf("POINT: 2328\n");
	a47  -=  2 ;}
	 else{	
	a47  -=  0;}
printf("POINT: 2329\n");

	if((a5 + 20) > a5){
printf("POINT: 2330\n");
	a5  +=  2 ;}
	 else{	
	a5  +=  0;}
    	cf = 0;
    	a72 = 36 ;
    	a92 = 5;
    	a190 = 7;
    	a76 = 6;
    	a69 = 32 ;
    	a132 = 12; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2331\n");

    if(((((a1 == 32 && (a141 == 32 && a111 == 3)) && a111 == 3) && a101 == 4) && (((input == 5) &&  cf==1 ) && a31 == 2))) {
printf("POINT: 2332\n");
printf("POINT: 2333\n");

	if((a171 - 20) < a171){
printf("POINT: 2334\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a111 = 4;
    	a13 = 34 ;
    	a35 = 35 ;
    	a57 = 10;
    	a118 = 34 ;
    	a40 = 12;
    	a135 = 34 ;
    	a24 = 34 ;
    	a3 = 3;
    	a169 = 12;
    	a65 = 34 ;
    	a174 = 3;
    	a141 = 34 ;
    	a109 = 34 ;
    	a18 = 6;
    	a79 = 34 ;
    	a92 = 5;
    	a159 = 34 ;
    	a120 = 34 ;
    	a48 = 34 ;
    	a71 = 4;
    	a53 = 9;
    	a25 = 34 ;
    	a167 = 4;
    	a101 = 5;
    	a34 = 34 ;
    	a31 = 3;
    	a122 = 13; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm190(int input) {
printf("POINT: 2335\n");

    if(((((( cf==1  && (input == 3)) && a109 == 32) && a92 == 5) && (((a13 == 32 && a24 == 32) && a31 == 2) && a71 == 3)) && (a127 % 2==0))) {
printf("POINT: 2336\n");
    	cf = 0;
    	a148 = 13;
    	a35 = 33 ;
    	a87 = 12; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2337\n");

    if((((a118 == 32 && a101 == 4) && a174 == 2) && ((a76 == 6 && (a189 == 11 && ((input == 5) &&  cf==1 ))) && a109 == 32))) {
printf("POINT: 2338\n");
printf("POINT: 2339\n");

	if((a91 + 20) > a91){
printf("POINT: 2340\n");
	a91  +=  2 ;}
	 else{	
	a91  +=  0;}
    	cf = 0;
    	a101 = 5;
    	a79 = 34 ;
    	a141 = 34 ;
    	a120 = 34 ;
    	a92 = 6;
    	a13 = 34 ;
    	a189 = 12;
    	a111 = 4;
    	a135 = 34 ;
    	a48 = 34 ;
    	a31 = 3;
    	a35 = 35 ;
    	a174 = 3;
    	a65 = 34 ;
    	a118 = 34 ;
    	a25 = 34 ;
    	a34 = 34 ;
    	a24 = 34 ;
    	a3 = 3;
    	a159 = 34 ;
    	a190 = 8;
    	a18 = 6;
    	a71 = 4;
    	a109 = 34 ;
    	a57 = 10;
    	a53 = 9;
    	a169 = 12;
    	a40 = 9;
    	a69 = 34 ;
    	a76 = 7;
    	a106 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2341\n");

    if((((a120 == 32 && (((input == 1) &&  cf==1 ) && a24 == 32)) && (a69 == 32 && ((a34 == 32 && a3 == 2) && a189 == 11))) && (a10 % 2==0))) {
printf("POINT: 2342\n");
printf("POINT: 2343\n");

	if((a171 - 20) < a171){
printf("POINT: 2344\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a17 = 36 ;
    	a148 = 15; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2345\n");

    if((((a53 == 8 && a65 == 32) && ((((((input == 4) &&  cf==1 ) && a120 == 32) && a25 == 32) && a48 == 32) && a189 == 11)) && a98 <= -5)) {
printf("POINT: 2346\n");
    	cf = 0;
    	a189 = 10;
    	a174 = 1;
    	a24 = 33 ;
    	a25 = 33 ;
    	a48 = 33 ;
    	a18 = 4;
    	a148 = 16;
    	a71 = 2;
    	a53 = 7;
    	a31 = 1;
    	a35 = 33 ;
    	a111 = 2;
    	a55 = 7; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2347\n");

    if(((((a109 == 32 && a48 == 32) && a18 == 5) && (a31 == 2 && ((a92 == 5 && ( cf==1  && (input == 2))) && a189 == 11))) && a182 >= 4)) {
printf("POINT: 2348\n");
printf("POINT: 2349\n");

	if((a105 - 20) < a105){
printf("POINT: 2350\n");
	a105  -=  3 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a189 = 10;
    	a35 = 33 ;
    	a25 = 33 ;
    	a18 = 4;
    	a174 = 1;
    	a169 = 10;
    	a24 = 33 ;
    	a92 = 4;
    	a101 = 3;
    	a31 = 1;
    	a3 = 1;
    	a13 = 33 ;
    	a111 = 2;
    	a148 = 13;
    	a87 = 13; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm32(int input) {
printf("POINT: 2351\n");

    if(((a79 == 32 && (((a18 == 5 && a31 == 2) && a65 == 32) && a1 == 32)) && ((a30 == 33 &&  cf==1 ) && a118 == 32))) {
printf("POINT: 2352\n");
    	calculate_outputm189(input);
    } 
printf("POINT: 2353\n");

    if((((a92 == 5 && (a30 == 32 &&  cf==1 )) && a111 == 3) && ((a13 == 32 && (a92 == 5 && a24 == 32)) && a48 == 32))) {
printf("POINT: 2354\n");
    	calculate_outputm190(input);
    } 
}
 void calculate_outputm194(int input) {
printf("POINT: 2355\n");

    if(((a190 == 7 && (a159 == 32 && ( cf==1  && (input == 5)))) && (a13 == 32 && (a34 == 32 && (a13 == 32 && a57 == 9))))) {
printf("POINT: 2356\n");
printf("POINT: 2357\n");

	if((a19 + 20) > a19){
printf("POINT: 2358\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2359\n");

	if((a151 - 20) < a151){
printf("POINT: 2360\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
printf("POINT: 2361\n");

	if((a146 - 20) < a146){
printf("POINT: 2362\n");
	a146  -=  1 ;}
	 else{	
	a146  -=  0;}
printf("POINT: 2363\n");

	if((a153 + 20) > a153){
printf("POINT: 2364\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2365\n");

	if((a107 + 20) > a107){
printf("POINT: 2366\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a136 = 17;
    	a121 = 15; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2367\n");

    if(((a57 == 9 && ((a159 == 32 && (a53 == 8 && ((input == 1) &&  cf==1 ))) && a34 == 32)) && (a118 == 32 && a13 == 32))) {
printf("POINT: 2368\n");
printf("POINT: 2369\n");

	if((a19 + 20) > a19){
printf("POINT: 2370\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2371\n");

	if((a151 + 20) > a151){
printf("POINT: 2372\n");
	a151  +=  4 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 2373\n");

	if((a130 + 20) > a130){
printf("POINT: 2374\n");
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2375\n");

	if((a153 + 20) > a153){
printf("POINT: 2376\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2377\n");

	if((a107 - 20) < a107){
printf("POINT: 2378\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2379\n");

	if((a165 + 20) > a165){
printf("POINT: 2380\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
printf("POINT: 2381\n");

    	if((!(a122 == 9) && (((!(a100 == 33) || a197 == 17) && a40 == 11) || !(a169 == 16)))) {
printf("POINT: 2382\n");
    	a24 = 36 ;
    	a25 = 32 ;
    	a189 = 14;
    	a13 = 36 ;
    	a190 = 6;
    	a48 = 35 ;
    	a111 = 5;
    	a35 = 34 ;
    	a135 = 35 ;
    	a34 = 36 ;
    	a118 = 35 ;
    	a123 = 34 ;
    	a101 = 9;
    	a109 = 36 ;
    	a71 = 8;
    	a57 = 9;
    	a169 = 13;
    	a1 = 32 ;
    	a159 = 33 ;
    	a174 = 1;
    	a53 = 12;
    	a65 = 35 ;
    	a92 = 10;
    	a167 = 3;
    	a79 = 35 ;
    	a168 = 36 ; 
    	}else {
printf("POINT: 2384\n");
    	a40 = 8;
    	a35 = 35 ;
    	a63 = 13;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2385\n");

    if(((a174 == 2 && ((((input == 4) &&  cf==1 ) && a190 == 7) && a65 == 32)) && (a167 == 3 && (a120 == 32 && a53 == 8)))) {
printf("POINT: 2386\n");
printf("POINT: 2387\n");

	if((a19 + 20) > a19){
printf("POINT: 2388\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2389\n");

	if((a7 + 20) > a7){
printf("POINT: 2390\n");
	a7  +=  2 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 2391\n");

	if((a130 + 20) > a130){
printf("POINT: 2392\n");
	a130  +=  2 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2393\n");

	if((a153 + 20) > a153){
printf("POINT: 2394\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2395\n");

	if((a127 + 20) > a127){
printf("POINT: 2396\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2397\n");

	if((a6 + 20) > a6){
printf("POINT: 2398\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 2399\n");

    	if(a106 == 12) {
printf("POINT: 2400\n");
    	a80 = 7; 
    	}else {
printf("POINT: 2402\n");
    	a12 = 36 ;
    	a132 = 10;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2403\n");

    if(((((a25 == 32 && ((input == 2) &&  cf==1 )) && a48 == 32) && a141 == 32) && ((a25 == 32 && a135 == 32) && a174 == 2))) {
printf("POINT: 2404\n");
printf("POINT: 2405\n");

	if((a19 + 20) > a19){
printf("POINT: 2406\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2407\n");

	if((a153 + 20) > a153){
printf("POINT: 2408\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2409\n");

	if((a107 + 20) > a107){
printf("POINT: 2410\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2411\n");

	if((a127 + 20) > a127){
printf("POINT: 2412\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2413\n");

	if((a11 + 20) > a11){
printf("POINT: 2414\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 2415\n");

    	if((a167 == 9 && ((!(a18 == 6) || (a1 == 34 && !(a38 == 32))) && !(a59 == 36)))) {
printf("POINT: 2416\n");
    	a18 = 9;
    	a120 = 33 ;
    	a13 = 35 ;
    	a167 = 8;
    	a3 = 3;
    	a31 = 7;
    	a57 = 15;
    	a80 = 10; 
    	}else {
printf("POINT: 2418\n");
    	a35 = 34 ;
    	a48 = 36 ;
    	a101 = 9;
    	a174 = 1;
    	a123 = 36 ;
    	a71 = 7;
    	a111 = 5;
    	a76 = 5;
    	a53 = 8;
    	a79 = 32 ;
    	a34 = 35 ;
    	a92 = 7;
    	a167 = 3;
    	a25 = 33 ;
    	a135 = 32 ;
    	a49 = 32 ;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2419\n");

    if(((a25 == 32 && (a65 == 32 && a34 == 32)) && (a1 == 32 && ((a135 == 32 && ((input == 3) &&  cf==1 )) && a34 == 32)))) {
printf("POINT: 2420\n");
printf("POINT: 2421\n");

	if((a19 + 20) > a19){
printf("POINT: 2422\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2423\n");

	if((a151 + 20) > a151){
printf("POINT: 2424\n");
	a151  +=  3 ;}
	 else{	
	a151  +=  0;}
printf("POINT: 2425\n");

	if((a146 + 20) > a146){
printf("POINT: 2426\n");
	a146  +=  2 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 2427\n");

	if((a153 + 20) > a153){
printf("POINT: 2428\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2429\n");

	if((a107 - 20) < a107){
printf("POINT: 2430\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a136 = 16;
    	a155 = 11; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm196(int input) {
printf("POINT: 2431\n");

    if(((a189 == 11 && (a34 == 32 && a101 == 4)) && (a109 == 32 && (a190 == 7 && (((input == 5) &&  cf==1 ) && a118 == 32))))) {
printf("POINT: 2432\n");
printf("POINT: 2433\n");

	if((a176 - 20) < a176){
printf("POINT: 2434\n");
	a176  -=  3 ;}
	 else{	
	a176  -=  0;}
printf("POINT: 2435\n");

	if((a19 + 20) > a19){
printf("POINT: 2436\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2437\n");

	if((a171 - 20) < a171){
printf("POINT: 2438\n");
	a171  -=  3 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 2439\n");

	if((a153 + 20) > a153){
printf("POINT: 2440\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2441\n");

	if((a107 - 20) < a107){
printf("POINT: 2442\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2443\n");

	if((a127 + 20) > a127){
printf("POINT: 2444\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2445\n");

	if((a10 + 20) > a10){
printf("POINT: 2446\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2447\n");

	if((a11 + 20) > a11){
printf("POINT: 2448\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a12 = 36 ;
    	a132 = 10; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2449\n");

    if(((((a71 == 3 && (a118 == 32 && a76 == 6)) && a25 == 32) && a111 == 3) && (a71 == 3 && ((input == 2) &&  cf==1 )))) {
printf("POINT: 2450\n");
printf("POINT: 2451\n");

	if((a19 + 20) > a19){
printf("POINT: 2452\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2453\n");

	if((a7 + 20) > a7){
printf("POINT: 2454\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 2455\n");

	if((a153 + 20) > a153){
printf("POINT: 2456\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2457\n");

	if((a107 + 20) > a107){
printf("POINT: 2458\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2459\n");

	if((a127 + 20) > a127){
printf("POINT: 2460\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
    	cf = 0;
    	a65 = 36 ;
    	a174 = 8;
    	a34 = 33 ;
    	a111 = 5;
    	a48 = 36 ;
    	a167 = 6;
    	a18 = 9;
    	a40 = 9;
    	a69 = 36 ;
    	a101 = 8;
    	a35 = 35 ;
    	a76 = 6;
    	a118 = 36 ;
    	a106 = 6; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2461\n");

    if((((a34 == 32 && (a31 == 2 && a13 == 32)) && a189 == 11) && ((( cf==1  && (input == 3)) && a109 == 32) && a159 == 32))) {
printf("POINT: 2462\n");
printf("POINT: 2463\n");

	if((a19 + 20) > a19){
printf("POINT: 2464\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2465\n");

	if((a153 + 20) > a153){
printf("POINT: 2466\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2467\n");

	if((a107 + 20) > a107){
printf("POINT: 2468\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2469\n");

	if((a127 + 20) > a127){
printf("POINT: 2470\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2471\n");

	if((a11 + 20) > a11){
printf("POINT: 2472\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 2473\n");

    	if(((a30 == 35 && !(a63 == 10)) || a101 == 8)) {
printf("POINT: 2474\n");
    	a72 = 34 ;
    	a132 = 12; 
    	}else {
printf("POINT: 2476\n");
    	a111 = 5;
    	a141 = 32 ;
    	a25 = 34 ;
    	a189 = 17;
    	a18 = 9;
    	a57 = 13;
    	a13 = 35 ;
    	a169 = 17;
    	a3 = 4;
    	a35 = 33 ;
    	a148 = 13;
    	a24 = 34 ;
    	a79 = 36 ;
    	a174 = 7;
    	a190 = 12;
    	a101 = 6;
    	a31 = 6;
    	a87 = 13;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2477\n");

    if(((((a34 == 32 && a76 == 6) && a18 == 5) && a120 == 32) && (a48 == 32 && (a34 == 32 && ( cf==1  && (input == 4)))))) {
printf("POINT: 2478\n");
printf("POINT: 2479\n");

	if((a176 + 20) > a176){
printf("POINT: 2480\n");
	a176  +=  1 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 2481\n");

	if((a19 + 20) > a19){
printf("POINT: 2482\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2483\n");

	if((a146 + 20) > a146){
printf("POINT: 2484\n");
	a146  +=  2 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 2485\n");

	if((a130 - 20) < a130){
printf("POINT: 2486\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 2487\n");

	if((a153 + 20) > a153){
printf("POINT: 2488\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2489\n");

	if((a107 - 20) < a107){
printf("POINT: 2490\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2491\n");

	if((a98 + 20) > a98){
printf("POINT: 2492\n");
	a98  +=  2 ;}
	 else{	
	a98  +=  0;}
printf("POINT: 2493\n");

	if((a10 + 20) > a10){
printf("POINT: 2494\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a101 = 5;
    	a111 = 6;
    	a79 = 32 ;
    	a3 = 7;
    	a57 = 11;
    	a169 = 13;
    	a18 = 8;
    	a31 = 5;
    	a13 = 34 ;
    	a148 = 13;
    	a174 = 3;
    	a25 = 34 ;
    	a189 = 16;
    	a190 = 11;
    	a24 = 32 ;
    	a141 = 35 ;
    	a35 = 33 ;
    	a87 = 13; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2495\n");

    if(((((((input == 1) &&  cf==1 ) && a71 == 3) && a79 == 32) && a167 == 3) && (a34 == 32 && (a69 == 32 && a141 == 32)))) {
printf("POINT: 2496\n");
printf("POINT: 2497\n");

	if((a19 + 20) > a19){
printf("POINT: 2498\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2499\n");

	if((a7 + 20) > a7){
printf("POINT: 2500\n");
	a7  +=  2 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 2501\n");

	if((a153 + 20) > a153){
printf("POINT: 2502\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2503\n");

	if((a10 + 20) > a10){
printf("POINT: 2504\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2505\n");

	if((a6 + 20) > a6){
printf("POINT: 2506\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
printf("POINT: 2507\n");

	if((a11 + 20) > a11){
printf("POINT: 2508\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
printf("POINT: 2509\n");

    	if((a71 == 7 || a174 == 4)) {
printf("POINT: 2510\n");
    	a135 = 32 ; 
    	}else {
printf("POINT: 2512\n");
    	a18 = 9;
    	a48 = 32 ;
    	a71 = 7;
    	a111 = 3;
    	a65 = 33 ;
    	a174 = 4;
    	a13 = 35 ;
    	a101 = 3;
    	a189 = 15;
    	a31 = 6;
    	a92 = 11;
    	a79 = 32 ;
    	a159 = 36 ;
    	a1 = 32 ;
    	a3 = 4;
    	a169 = 10;
    	a109 = 32 ;
    	a35 = 34 ;
    	a190 = 7;
    	a167 = 5;
    	a34 = 33 ;
    	a24 = 33 ;
    	a123 = 34 ;
    	a25 = 36 ;
    	a118 = 36 ;
    	a168 = 36 ;
    	}printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm199(int input) {
printf("POINT: 2513\n");

    if((((a79 == 32 && (a189 == 11 && ((input == 3) &&  cf==1 ))) && a189 == 11) && (a92 == 5 && (a92 == 5 && a31 == 2)))) {
printf("POINT: 2514\n");
printf("POINT: 2515\n");

	if((a19 + 20) > a19){
printf("POINT: 2516\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2517\n");

	if((a73 + 20) > a73){
printf("POINT: 2518\n");
	a73  +=  2 ;}
	 else{	
	a73  +=  0;}
printf("POINT: 2519\n");

	if((a153 + 20) > a153){
printf("POINT: 2520\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2521\n");

	if((a107 - 20) < a107){
printf("POINT: 2522\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2523\n");

	if((a10 + 20) > a10){
printf("POINT: 2524\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a148 = 13;
    	a87 = 16; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2525\n");

    if((((((input == 2) &&  cf==1 ) && a53 == 8) && a159 == 32) && (a69 == 32 && (a76 == 6 && (a118 == 32 && a101 == 4))))) {
printf("POINT: 2526\n");
printf("POINT: 2527\n");

	if((a19 + 20) > a19){
printf("POINT: 2528\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2529\n");

	if((a151 - 20) < a151){
printf("POINT: 2530\n");
	a151  -=  2 ;}
	 else{	
	a151  -=  0;}
printf("POINT: 2531\n");

	if((a153 + 20) > a153){
printf("POINT: 2532\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2533\n");

	if((a127 + 20) > a127){
printf("POINT: 2534\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2535\n");

	if((a10 + 20) > a10){
printf("POINT: 2536\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2537\n");

	if((a165 + 20) > a165){
printf("POINT: 2538\n");
	a165  +=  3 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 2539\n");

	if((a6 + 20) > a6){
printf("POINT: 2540\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a40 = 6;
    	a28 = 5; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2541\n");

    if(((a1 == 32 && ((a111 == 3 && (a65 == 32 && (a190 == 7 && a118 == 32))) && a24 == 32)) && ( cf==1  && (input == 5)))) {
printf("POINT: 2542\n");
printf("POINT: 2543\n");

	if((a19 + 20) > a19){
printf("POINT: 2544\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2545\n");

	if((a134 - 20) < a134){
printf("POINT: 2546\n");
	a134  -=  3 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 2547\n");

	if((a130 + 20) > a130){
printf("POINT: 2548\n");
	a130  +=  2 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2549\n");

	if((a107 + 20) > a107){
printf("POINT: 2550\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2551\n");

	if((a165 - 20) < a165){
printf("POINT: 2552\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 2553\n");

	if((a11 + 20) > a11){
printf("POINT: 2554\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a18 = 10;
    	a31 = 2;
    	a3 = 3;
    	a80 = 4; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2555\n");

    if((((a92 == 5 && a118 == 32) && a25 == 32) && (a1 == 32 && ((( cf==1  && (input == 1)) && a48 == 32) && a18 == 5)))) {
printf("POINT: 2556\n");
printf("POINT: 2557\n");

	if((a19 + 20) > a19){
printf("POINT: 2558\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2559\n");

	if((a130 + 20) > a130){
printf("POINT: 2560\n");
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2561\n");

	if((a58 - 20) < a58){
printf("POINT: 2562\n");
	a58  -=  1 ;}
	 else{	
	a58  -=  0;}
printf("POINT: 2563\n");

	if((a127 + 20) > a127){
printf("POINT: 2564\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2565\n");

	if((a6 + 20) > a6){
printf("POINT: 2566\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a143 = 34 ;
    	a40 = 10; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 2567\n");

    if((((a109 == 32 && a24 == 32) && a1 == 32) && (a34 == 32 && (a141 == 32 && (a135 == 32 && ( cf==1  && (input == 4))))))) {
printf("POINT: 2568\n");
printf("POINT: 2569\n");

	if((a19 + 20) > a19){
printf("POINT: 2570\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2571\n");

	if((a171 - 20) < a171){
printf("POINT: 2572\n");
	a171  -=  1 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 2573\n");

	if((a130 + 20) > a130){
printf("POINT: 2574\n");
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2575\n");

	if((a153 + 20) > a153){
printf("POINT: 2576\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2577\n");

	if((a107 + 20) > a107){
printf("POINT: 2578\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2579\n");

	if((a165 - 20) < a165){
printf("POINT: 2580\n");
	a165  -=  1 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
printf("POINT: 2581\n");

    	if((a179 == 34 && ((a40 == 9 && a100 == 34) || a118 == 35))) {
printf("POINT: 2582\n");
    	a35 = 32 ;
    	a136 = 17;
    	a121 = 15; 
    	}else {
printf("POINT: 2584\n");
    	a100 = 33 ;
    	a35 = 32 ;
    	a135 = 32 ;
    	a92 = 8;
    	a34 = 36 ;
    	a13 = 32 ;
    	a71 = 3;
    	a159 = 33 ;
    	a136 = 11;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm33(int input) {
printf("POINT: 2585\n");

    if(((a111 == 3 && (a169 == 11 && (a118 == 32 && (a92 == 5 && ( cf==1  && a80 == 4))))) && (a25 == 32 && a71 == 3))) {
printf("POINT: 2586\n");
    	calculate_outputm194(input);
    } 
printf("POINT: 2587\n");

    if((((((a141 == 32 && a1 == 32) && a18 == 5) && a69 == 32) && a13 == 32) && (a141 == 32 && ( cf==1  && a80 == 6)))) {
printf("POINT: 2588\n");
    	calculate_outputm196(input);
    } 
printf("POINT: 2589\n");

    if(((a101 == 4 && (a80 == 10 &&  cf==1 )) && ((a71 == 3 && ((a190 == 7 && a174 == 2) && a31 == 2)) && a174 == 2))) {
printf("POINT: 2590\n");
    	calculate_outputm199(input);
    } 
}
 void calculate_outputm202(int input) {
printf("POINT: 2591\n");

    if(((a57 == 9 && ( cf==1  && (input == 2))) && (a53 == 8 && ((a71 == 3 && (a34 == 32 && a189 == 11)) && a57 == 9)))) {
printf("POINT: 2592\n");
printf("POINT: 2593\n");

	if((a7 + 20) > a7){
printf("POINT: 2594\n");
	a7  +=  3 ;}
	 else{	
	a7  +=  0;}
    	cf = 0;
    	a34 = 34 ;
    	a159 = 34 ;
    	a135 = 34 ;
    	a57 = 10;
    	a48 = 34 ;
    	a76 = 7;
    	a118 = 34 ;
    	a40 = 7;
    	a3 = 3;
    	a13 = 34 ;
    	a79 = 32 ;
    	a101 = 5;
    	a1 = 32 ;
    	a167 = 4;
    	a25 = 32 ;
    	a174 = 3;
    	a92 = 6;
    	a141 = 32 ;
    	a24 = 32 ;
    	a120 = 32 ;
    	a69 = 32 ;
    	a35 = 35 ;
    	a189 = 11;
    	a18 = 6;
    	a169 = 12;
    	a31 = 2;
    	a53 = 8;
    	a65 = 34 ;
    	a71 = 3;
    	a111 = 3;
    	a190 = 7;
    	a70 = 4; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2595\n");

    if(((a111 == 3 && (( cf==1  && (input == 5)) && a159 == 32)) && (a48 == 32 && ((a71 == 3 && a13 == 32) && a25 == 32)))) {
printf("POINT: 2596\n");
printf("POINT: 2597\n");

	if((a151 + 20) > a151){
printf("POINT: 2598\n");
	a151  +=  1 ;}
	 else{	
	a151  +=  0;}
    	cf = 0;
    	a76 = 5;
    	a109 = 34 ;
    	a3 = 2;
    	a34 = 34 ;
    	a24 = 33 ;
    	a136 = 17;
    	a31 = 1;
    	a1 = 33 ;
    	a120 = 33 ;
    	a65 = 32 ;
    	a169 = 10;
    	a35 = 32 ;
    	a92 = 4;
    	a25 = 33 ;
    	a135 = 33 ;
    	a159 = 33 ;
    	a71 = 2;
    	a121 = 9; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
printf("POINT: 2599\n");

    if(((((a189 == 11 && (( cf==1  && (input == 3)) && a1 == 32)) && a25 == 32) && ((a118 == 32 && a111 == 3) && a159 == 32)) && (a89 % 2==0))) {
printf("POINT: 2600\n");
printf("POINT: 2601\n");

	if((a195 + 20) > a195){
printf("POINT: 2602\n");
	a195  +=  4 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a132 = 6;
    	a52 = 1; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2603\n");

    if(((((a118 == 32 && ( cf==1  && (input == 1))) && a111 == 3) && a13 == 32) && ((a24 == 32 && a79 == 32) && a159 == 32))) {
printf("POINT: 2604\n");
printf("POINT: 2605\n");

	if((a107 + 20) > a107){
printf("POINT: 2606\n");
	a107  +=  4 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2607\n");

	if((a47 + 20) > a47){
printf("POINT: 2608\n");
	a47  +=  2 ;}
	 else{	
	a47  +=  0;}
    	cf = 0;
printf("POINT: 2609\n");

    	if((!(a132 == 12) && (!(a65 == 33) || (a83 == 13 && !(a188 == 35))))) {
printf("POINT: 2610\n");
    	a101 = 5;
    	a189 = 12;
    	a32 = 35 ;
    	a169 = 12;
    	a48 = 34 ;
    	a111 = 3;
    	a31 = 3;
    	a18 = 6;
    	a1 = 34 ;
    	a57 = 10;
    	a120 = 34 ;
    	a71 = 4;
    	a141 = 34 ;
    	a25 = 34 ;
    	a135 = 34 ;
    	a76 = 7;
    	a69 = 32 ;
    	a65 = 34 ;
    	a174 = 3;
    	a35 = 35 ;
    	a13 = 34 ;
    	a167 = 4;
    	a79 = 34 ;
    	a34 = 34 ;
    	a24 = 32 ;
    	a159 = 34 ;
    	a190 = 8;
    	a53 = 9;
    	a118 = 34 ;
    	a40 = 13; 
    	}else {
printf("POINT: 2612\n");
    	a92 = 4;
    	a167 = 2;
    	a190 = 6;
    	a79 = 33 ;
    	a109 = 33 ;
    	a135 = 33 ;
    	a31 = 1;
    	a48 = 33 ;
    	a111 = 2;
    	a53 = 7;
    	a118 = 34 ;
    	a35 = 33 ;
    	a25 = 33 ;
    	a174 = 1;
    	a1 = 33 ;
    	a76 = 5;
    	a120 = 33 ;
    	a57 = 8;
    	a141 = 33 ;
    	a34 = 33 ;
    	a101 = 5;
    	a18 = 4;
    	a189 = 10;
    	a159 = 34 ;
    	a148 = 11;
    	a13 = 33 ;
    	a69 = 33 ;
    	a70 = 10;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2613\n");

    if((((a48 == 32 && a65 == 32) && (a111 == 3 && (((((input == 4) &&  cf==1 ) && a174 == 2) && a141 == 32) && a174 == 2))) && a58 >= 1)) {
printf("POINT: 2614\n");
printf("POINT: 2615\n");

	if((a95 - 20) < a95){
printf("POINT: 2616\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a136 = 13;
    	a197 = 15; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm203(int input) {
printf("POINT: 2617\n");

    if((((a190 == 7 && a111 == 3) && a120 == 32) && (a120 == 32 && (a34 == 32 && (( cf==1  && (input == 4)) && a34 == 32))))) {
printf("POINT: 2618\n");
printf("POINT: 2619\n");

	if((a19 + 20) > a19){
printf("POINT: 2620\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2621\n");

	if((a171 - 20) < a171){
printf("POINT: 2622\n");
	a171  -=  2 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 2623\n");

	if((a153 + 20) > a153){
printf("POINT: 2624\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2625\n");

	if((a107 + 20) > a107){
printf("POINT: 2626\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2627\n");

	if((a10 + 20) > a10){
printf("POINT: 2628\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2629\n");

	if((a165 + 20) > a165){
printf("POINT: 2630\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
printf("POINT: 2631\n");

	if((a11 + 20) > a11){
printf("POINT: 2632\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a25 = 32 ;
    	a35 = 35 ;
    	a13 = 36 ;
    	a69 = 33 ;
    	a109 = 35 ;
    	a190 = 11;
    	a118 = 33 ;
    	a31 = 6;
    	a71 = 6;
    	a3 = 7;
    	a101 = 7;
    	a141 = 35 ;
    	a34 = 32 ;
    	a40 = 6;
    	a111 = 2;
    	a57 = 8;
    	a174 = 6;
    	a169 = 16;
    	a92 = 4;
    	a76 = 5;
    	a24 = 32 ;
    	a159 = 36 ;
    	a28 = 3; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2633\n");

    if(((a159 == 32 && (a174 == 2 && ( cf==1  && (input == 1)))) && (((a13 == 32 && a174 == 2) && a120 == 32) && a57 == 9))) {
printf("POINT: 2634\n");
printf("POINT: 2635\n");

	if((a19 + 20) > a19){
printf("POINT: 2636\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2637\n");

	if((a153 + 20) > a153){
printf("POINT: 2638\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2639\n");

	if((a107 + 20) > a107){
printf("POINT: 2640\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2641\n");

	if((a127 + 20) > a127){
printf("POINT: 2642\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2643\n");

	if((a6 + 20) > a6){
printf("POINT: 2644\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a179 = 36 ;
    	a132 = 5; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2645\n");

    if(((a3 == 2 && (a118 == 32 && (a101 == 4 && (a92 == 5 && a141 == 32)))) && (((input == 5) &&  cf==1 ) && a65 == 32))) {
printf("POINT: 2646\n");
printf("POINT: 2647\n");

	if((a19 + 20) > a19){
printf("POINT: 2648\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2649\n");

	if((a73 + 20) > a73){
printf("POINT: 2650\n");
	a73  +=  2 ;}
	 else{	
	a73  +=  0;}
printf("POINT: 2651\n");

	if((a153 + 20) > a153){
printf("POINT: 2652\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2653\n");

	if((a107 + 20) > a107){
printf("POINT: 2654\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2655\n");

	if((a127 + 20) > a127){
printf("POINT: 2656\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2657\n");

	if((a10 + 20) > a10){
printf("POINT: 2658\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2659\n");

	if((a165 + 20) > a165){
printf("POINT: 2660\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a18 = 5;
    	a34 = 35 ;
    	a31 = 6;
    	a48 = 32 ;
    	a57 = 11;
    	a174 = 2;
    	a123 = 35 ;
    	a101 = 10;
    	a35 = 34 ;
    	a25 = 35 ;
    	a159 = 33 ;
    	a79 = 35 ;
    	a92 = 11;
    	a169 = 17;
    	a28 = 6; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2661\n");

    if((((a71 == 3 && (a25 == 32 && ((((input == 2) &&  cf==1 ) && a3 == 2) && a141 == 32))) && a76 == 6) && a92 == 5)) {
printf("POINT: 2662\n");
printf("POINT: 2663\n");

	if((a19 + 20) > a19){
printf("POINT: 2664\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2665\n");

	if((a134 - 20) < a134){
printf("POINT: 2666\n");
	a134  -=  3 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 2667\n");

	if((a130 + 20) > a130){
printf("POINT: 2668\n");
	a130  +=  2 ;}
	 else{	
	a130  +=  0;}
printf("POINT: 2669\n");

	if((a153 + 20) > a153){
printf("POINT: 2670\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2671\n");

	if((a107 + 20) > a107){
printf("POINT: 2672\n");
	a107  +=  1 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2673\n");

	if((a127 + 20) > a127){
printf("POINT: 2674\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2675\n");

	if((a6 + 20) > a6){
printf("POINT: 2676\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
printf("POINT: 2677\n");

    	if((((!(a135 == 32) && a136 == 15) && !(a159 == 36)) || a24 == 36)) {
printf("POINT: 2678\n");
    	a109 = 35 ;
    	a53 = 9;
    	a31 = 4;
    	a35 = 32 ;
    	a189 = 12;
    	a135 = 35 ;
    	a1 = 33 ;
    	a164 = 33 ;
    	a167 = 7;
    	a136 = 10; 
    	}else {
printf("POINT: 2680\n");
    	a79 = 33 ;
    	a118 = 33 ;
    	a174 = 1;
    	a92 = 4;
    	a141 = 36 ;
    	a57 = 11;
    	a48 = 36 ;
    	a111 = 2;
    	a159 = 33 ;
    	a71 = 9;
    	a3 = 7;
    	a190 = 11;
    	a69 = 34 ;
    	a31 = 7;
    	a120 = 35 ;
    	a18 = 4;
    	a35 = 35 ;
    	a13 = 35 ;
    	a76 = 11;
    	a169 = 16;
    	a32 = 35 ;
    	a25 = 36 ;
    	a65 = 33 ;
    	a101 = 4;
    	a24 = 35 ;
    	a34 = 36 ;
    	a40 = 13;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2681\n");

    if(((a71 == 3 && (a3 == 2 && a25 == 32)) && (((((input == 3) &&  cf==1 ) && a34 == 32) && a57 == 9) && a24 == 32))) {
printf("POINT: 2682\n");
printf("POINT: 2683\n");

	if((a19 + 20) > a19){
printf("POINT: 2684\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2685\n");

	if((a105 - 20) < a105){
printf("POINT: 2686\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
printf("POINT: 2687\n");

	if((a130 - 20) < a130){
printf("POINT: 2688\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 2689\n");

	if((a153 + 20) > a153){
printf("POINT: 2690\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2691\n");

	if((a107 + 20) > a107){
printf("POINT: 2692\n");
	a107  +=  3 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2693\n");

	if((a127 + 20) > a127){
printf("POINT: 2694\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2695\n");

	if((a11 + 20) > a11){
printf("POINT: 2696\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a148 = 9;
    	a83 = 8; 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm34(int input) {
printf("POINT: 2697\n");

    if(((a135 == 32 && ((a141 == 32 && ( cf==1  && a56 == 11)) && a169 == 11)) && ((a141 == 32 && a101 == 4) && a141 == 32))) {
printf("POINT: 2698\n");
    	calculate_outputm202(input);
    } 
printf("POINT: 2699\n");

    if((((a174 == 2 && a79 == 32) && a18 == 5) && (a34 == 32 && (a111 == 3 && (a57 == 9 && ( cf==1  && a56 == 13)))))) {
printf("POINT: 2700\n");
    	calculate_outputm203(input);
    } 
}
 void calculate_outputm205(int input) {
printf("POINT: 2701\n");

    if(((a190 == 7 && a18 == 5) && (((a57 == 9 && (a53 == 8 && ((input == 2) &&  cf==1 ))) && a79 == 32) && a3 == 2))) {
printf("POINT: 2702\n");
printf("POINT: 2703\n");

	if((a19 + 20) > a19){
printf("POINT: 2704\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2705\n");

	if((a7 + 20) > a7){
printf("POINT: 2706\n");
	a7  +=  4 ;}
	 else{	
	a7  +=  0;}
printf("POINT: 2707\n");

	if((a153 + 20) > a153){
printf("POINT: 2708\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2709\n");

	if((a107 - 20) < a107){
printf("POINT: 2710\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2711\n");

	if((a127 + 20) > a127){
printf("POINT: 2712\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2713\n");

	if((a10 + 20) > a10){
printf("POINT: 2714\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
printf("POINT: 2715\n");

    	if((a18 == 7 && (((a63 == 8 && a48 == 34) && a61 == 34) && a70 == 7))) {
printf("POINT: 2716\n");
    	a92 = 8;
    	a79 = 35 ;
    	a57 = 10;
    	a141 = 36 ;
    	a190 = 12;
    	a111 = 6;
    	a24 = 34 ;
    	a148 = 13;
    	a18 = 6;
    	a3 = 6;
    	a35 = 33 ;
    	a25 = 35 ;
    	a101 = 9;
    	a174 = 5;
    	a169 = 11;
    	a13 = 34 ;
    	a87 = 13; 
    	}else {
printf("POINT: 2718\n");
    	a132 = 6;
    	a52 = 1;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2719\n");

    if(((a167 == 3 && (a48 == 32 && (a65 == 32 && a118 == 32))) && (a13 == 32 && (( cf==1  && (input == 1)) && a118 == 32)))) {
printf("POINT: 2720\n");
printf("POINT: 2721\n");

	if((a19 + 20) > a19){
printf("POINT: 2722\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2723\n");

	if((a130 - 20) < a130){
printf("POINT: 2724\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 2725\n");

	if((a153 + 20) > a153){
printf("POINT: 2726\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2727\n");

	if((a107 - 20) < a107){
printf("POINT: 2728\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2729\n");

	if((a127 + 20) > a127){
printf("POINT: 2730\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2731\n");

	if((a165 - 20) < a165){
printf("POINT: 2732\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 2733\n");

	if((a78 + 20) > a78){
printf("POINT: 2734\n");
	a78  +=  4 ;}
	 else{	
	a78  +=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a40 = 6;
    	a28 = 1; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2735\n");

    if(((a167 == 3 && (a79 == 32 && (a118 == 32 && ((input == 3) &&  cf==1 )))) && ((a174 == 2 && a135 == 32) && a109 == 32))) {
printf("POINT: 2736\n");
printf("POINT: 2737\n");

	if((a19 + 20) > a19){
printf("POINT: 2738\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2739\n");

	if((a171 - 20) < a171){
printf("POINT: 2740\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
printf("POINT: 2741\n");

	if((a130 - 20) < a130){
printf("POINT: 2742\n");
	a130  -=  2 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 2743\n");

	if((a153 + 20) > a153){
printf("POINT: 2744\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2745\n");

	if((a107 + 20) > a107){
printf("POINT: 2746\n");
	a107  +=  2 ;}
	 else{	
	a107  +=  0;}
printf("POINT: 2747\n");

	if((a127 + 20) > a127){
printf("POINT: 2748\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2749\n");

	if((a10 + 20) > a10){
printf("POINT: 2750\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2751\n");

	if((a6 + 20) > a6){
printf("POINT: 2752\n");
	a6  +=  1 ;}
	 else{	
	a6  +=  0;}
    	cf = 0;
    	a148 = 9;
    	a35 = 33 ;
    	a83 = 15; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2753\n");

    if(((a71 == 3 && (a65 == 32 && (a79 == 32 && a69 == 32))) && (a118 == 32 && (((input == 5) &&  cf==1 ) && a65 == 32)))) {
printf("POINT: 2754\n");
printf("POINT: 2755\n");

	if((a19 + 20) > a19){
printf("POINT: 2756\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2757\n");

	if((a130 - 20) < a130){
printf("POINT: 2758\n");
	a130  -=  3 ;}
	 else{	
	a130  -=  0;}
printf("POINT: 2759\n");

	if((a153 + 20) > a153){
printf("POINT: 2760\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2761\n");

	if((a107 - 20) < a107){
printf("POINT: 2762\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2763\n");

	if((a127 + 20) > a127){
printf("POINT: 2764\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2765\n");

	if((a165 + 20) > a165){
printf("POINT: 2766\n");
	a165  +=  1 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
printf("POINT: 2767\n");

    	if((a35 == 35 && a76 == 5)) {
printf("POINT: 2768\n");
    	a35 = 32 ;
    	a34 = 33 ;
    	a3 = 1;
    	a31 = 8;
    	a159 = 34 ;
    	a189 = 10;
    	a136 = 13;
    	a197 = 13; 
    	}else {
printf("POINT: 2770\n");
    	a24 = 34 ;
    	a167 = 5;
    	a1 = 33 ;
    	a48 = 33 ;
    	a79 = 33 ;
    	a53 = 8;
    	a92 = 5;
    	a169 = 15;
    	a35 = 35 ;
    	a76 = 5;
    	a3 = 4;
    	a118 = 35 ;
    	a69 = 36 ;
    	a109 = 35 ;
    	a71 = 6;
    	a101 = 4;
    	a65 = 33 ;
    	a18 = 8;
    	a174 = 4;
    	a13 = 35 ;
    	a25 = 32 ;
    	a31 = 1;
    	a135 = 32 ;
    	a40 = 7;
    	a57 = 13;
    	a120 = 36 ;
    	a189 = 16;
    	a70 = 11;
    	}printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2771\n");

    if((((a69 == 32 && a69 == 32) && a79 == 32) && (((( cf==1  && (input == 4)) && a57 == 9) && a76 == 6) && a24 == 32))) {
printf("POINT: 2772\n");
printf("POINT: 2773\n");

	if((a19 + 20) > a19){
printf("POINT: 2774\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2775\n");

	if((a134 - 20) < a134){
printf("POINT: 2776\n");
	a134  -=  2 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 2777\n");

	if((a153 + 20) > a153){
printf("POINT: 2778\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2779\n");

	if((a107 - 20) < a107){
printf("POINT: 2780\n");
	a107  -=  2 ;}
	 else{	
	a107  -=  0;}
    	cf = 0;
printf("POINT: 2781\n");

    	if((a1 == 32 && (!(a32 == 34) || ((a121 == 11 || a1 == 35) && a72 == 34)))) {
printf("POINT: 2782\n");
    	a35 = 33 ;
    	a61 = 36 ;
    	a148 = 14; 
    	}else {
printf("POINT: 2784\n");
    	a35 = 34 ;
    	a123 = 33 ;
    	a178 = 9;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm206(int input) {
printf("POINT: 2785\n");

    if(((((( cf==1  && (input == 2)) && a57 == 9) && a1 == 32) && a169 == 11) && (a3 == 2 && (a76 == 6 && a92 == 5)))) {
printf("POINT: 2786\n");
    	cf = 0;
    	a174 = 1;
    	a57 = 8;
    	a76 = 7;
    	a3 = 1;
    	a38 = 33 ;
    	a48 = 33 ;
    	a120 = 33 ;
    	a167 = 2;
    	a25 = 34 ;
    	a65 = 33 ;
    	a169 = 10;
    	a101 = 3;
    	a1 = 33 ;
    	a111 = 2;
    	a35 = 33 ;
    	a69 = 34 ;
    	a92 = 4;
    	a18 = 4;
    	a13 = 33 ;
    	a79 = 33 ;
    	a148 = 10; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm35(int input) {
printf("POINT: 2787\n");

    if(((a1 == 32 && a167 == 3) && (a120 == 32 && (a79 == 32 && (((a12 == 33 &&  cf==1 ) && a169 == 11) && a141 == 32))))) {
printf("POINT: 2788\n");
    	calculate_outputm205(input);
    } 
printf("POINT: 2789\n");

    if(((a174 == 2 && (a13 == 32 && a18 == 5)) && (a120 == 32 && ((a118 == 32 && (a12 == 35 &&  cf==1 )) && a79 == 32)))) {
printf("POINT: 2790\n");
    	calculate_outputm206(input);
    } 
}
 void calculate_outputm208(int input) {
printf("POINT: 2791\n");

    if((((a1 == 32 && ((a141 == 32 && a174 == 2) && a174 == 2)) && a18 == 5) && (((input == 5) &&  cf==1 ) && a120 == 32))) {
printf("POINT: 2792\n");
    	cf = 0;
    	a109 = 34 ;
    	a25 = 33 ;
    	a35 = 32 ;
    	a1 = 33 ;
    	a136 = 17;
    	a169 = 10;
    	a121 = 14; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm210(int input) {
printf("POINT: 2793\n");

    if((((input == 3) &&  cf==1 ) && (a48 == 32 && (a141 == 32 && ((a169 == 11 && (a65 == 32 && a135 == 32)) && a76 == 6))))) {
printf("POINT: 2794\n");
    	cf = 0;
    	a76 = 5;
    	a35 = 33 ;
    	a141 = 33 ;
    	a118 = 33 ;
    	a148 = 16;
    	a174 = 1;
    	a135 = 33 ;
    	a169 = 10;
    	a25 = 33 ;
    	a55 = 9; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm36(int input) {
printf("POINT: 2795\n");

    if(((a76 == 6 && (a18 == 5 && a169 == 11)) && (a167 == 3 && (a92 == 5 && ((a59 == 33 &&  cf==1 ) && a57 == 9))))) {
printf("POINT: 2796\n");
    	calculate_outputm208(input);
    } 
printf("POINT: 2797\n");

    if((((a101 == 4 && a65 == 32) && a76 == 6) && (a141 == 32 && ((a25 == 32 && ( cf==1  && a59 == 34)) && a169 == 11)))) {
printf("POINT: 2798\n");
    	calculate_outputm210(input);
    } 
}
 void calculate_outputm211(int input) {
printf("POINT: 2799\n");

    if((((a92 == 5 && (a3 == 2 && (( cf==1  && (input == 1)) && a13 == 32))) && a69 == 32) && (a13 == 32 && a1 == 32))) {
printf("POINT: 2800\n");
    	cf = 0;
    	a3 = 3;
    	a123 = 33 ;
    	a1 = 33 ;
    	a25 = 34 ;
    	a13 = 33 ;
    	a109 = 34 ;
    	a111 = 4;
    	a18 = 6;
    	a92 = 6;
    	a141 = 34 ;
    	a69 = 34 ;
    	a79 = 34 ;
    	a76 = 7;
    	a120 = 34 ;
    	a159 = 34 ;
    	a34 = 34 ;
    	a169 = 12;
    	a53 = 9;
    	a48 = 34 ;
    	a101 = 5;
    	a174 = 3;
    	a35 = 34 ;
    	a167 = 4;
    	a24 = 34 ;
    	a135 = 34 ;
    	a65 = 32 ;
    	a118 = 34 ;
    	a178 = 8; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2801\n");

    if((((((input == 5) &&  cf==1 ) && a25 == 32) && a167 == 3) && (((a111 == 3 && a18 == 5) && a1 == 32) && a76 == 6))) {
printf("POINT: 2802\n");
printf("POINT: 2803\n");

	if((a195 + 20) > a195){
printf("POINT: 2804\n");
	a195  +=  1 ;}
	 else{	
	a195  +=  0;}
    	cf = 0;
    	a18 = 4;
    	a169 = 12;
    	a92 = 6;
    	a101 = 5;
    	a109 = 33 ;
    	a159 = 34 ;
    	a35 = 35 ;
    	a71 = 2;
    	a141 = 34 ;
    	a69 = 34 ;
    	a76 = 7;
    	a48 = 33 ;
    	a3 = 3;
    	a135 = 34 ;
    	a53 = 9;
    	a167 = 4;
    	a65 = 34 ;
    	a111 = 2;
    	a24 = 33 ;
    	a13 = 33 ;
    	a25 = 34 ;
    	a189 = 12;
    	a34 = 34 ;
    	a188 = 32 ;
    	a79 = 33 ;
    	a120 = 34 ;
    	a1 = 33 ;
    	a174 = 1;
    	a118 = 34 ;
    	a190 = 6;
    	a40 = 11; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2805\n");

    if((((( cf==1  && (input == 2)) && a34 == 32) && (a109 == 32 && (((a24 == 32 && a135 == 32) && a69 == 32) && a76 == 6))) && a130 == 8112)) {
printf("POINT: 2806\n");
printf("POINT: 2807\n");

	if((a73 + 20) > a73){
printf("POINT: 2808\n");
	a73  +=  2 ;}
	 else{	
	a73  +=  0;}
    	cf = 0;
    	a35 = 34 ;
    	a123 = 33 ;
    	a178 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2809\n");

    if((((a159 == 32 && a120 == 32) && (a18 == 5 && (a18 == 5 && ((a92 == 5 && ( cf==1  && (input == 4))) && a18 == 5)))) && a107 == 9648)) {
printf("POINT: 2810\n");
printf("POINT: 2811\n");

	if((a105 - 20) < a105){
printf("POINT: 2812\n");
	a105  -=  2 ;}
	 else{	
	a105  -=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a136 = 16;
    	a155 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2813\n");

    if((((a169 == 11 && ((a24 == 32 && a111 == 3) && a111 == 3)) && ((a48 == 32 && ( cf==1  && (input == 3))) && a79 == 32)) && (a153 % 2==0))) {
printf("POINT: 2814\n");
printf("POINT: 2815\n");

	if((a95 - 20) < a95){
printf("POINT: 2816\n");
	a95  -=  4 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a35 = 33 ;
    	a148 = 16;
    	a55 = 4; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm213(int input) {
printf("POINT: 2817\n");

    if(((a18 == 5 && (a120 == 32 && (a3 == 2 && a18 == 5))) && ((( cf==1  && (input == 5)) && a65 == 32) && a31 == 2))) {
printf("POINT: 2818\n");
printf("POINT: 2819\n");

	if((a19 + 20) > a19){
printf("POINT: 2820\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2821\n");

	if((a134 - 20) < a134){
printf("POINT: 2822\n");
	a134  -=  1 ;}
	 else{	
	a134  -=  0;}
printf("POINT: 2823\n");

	if((a146 + 20) > a146){
printf("POINT: 2824\n");
	a146  +=  3 ;}
	 else{	
	a146  +=  0;}
printf("POINT: 2825\n");

	if((a107 - 20) < a107){
printf("POINT: 2826\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2827\n");

	if((a165 - 20) < a165){
printf("POINT: 2828\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
printf("POINT: 2829\n");

	if((a11 + 20) > a11){
printf("POINT: 2830\n");
	a11  +=  1 ;}
	 else{	
	a11  +=  0;}
    	cf = 0;
    	a132 = 6;
    	a52 = 8; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
printf("POINT: 2831\n");

    if(((a120 == 32 && (a71 == 3 && ( cf==1  && (input == 1)))) && (a111 == 3 && ((a69 == 32 && a1 == 32) && a13 == 32)))) {
printf("POINT: 2832\n");
printf("POINT: 2833\n");

	if((a19 + 20) > a19){
printf("POINT: 2834\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2835\n");

	if((a107 - 20) < a107){
printf("POINT: 2836\n");
	a107  -=  1 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2837\n");

	if((a10 + 20) > a10){
printf("POINT: 2838\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2839\n");

	if((a165 - 20) < a165){
printf("POINT: 2840\n");
	a165  -=  2 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a148 = 16;
    	a35 = 33 ;
    	a55 = 8; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2841\n");

    if((((a174 == 2 && a53 == 8) && a190 == 7) && ((a167 == 3 && (((input == 2) &&  cf==1 ) && a167 == 3)) && a57 == 9))) {
printf("POINT: 2842\n");
printf("POINT: 2843\n");

	if((a19 + 20) > a19){
printf("POINT: 2844\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2845\n");

	if((a95 - 20) < a95){
printf("POINT: 2846\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
printf("POINT: 2847\n");

	if((a153 + 20) > a153){
printf("POINT: 2848\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2849\n");

	if((a127 + 20) > a127){
printf("POINT: 2850\n");
	a127  +=  1 ;}
	 else{	
	a127  +=  0;}
printf("POINT: 2851\n");

	if((a10 + 20) > a10){
printf("POINT: 2852\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
printf("POINT: 2853\n");

    	if((a83 == 10 && !(a57 == 13))) {
printf("POINT: 2854\n");
    	a57 = 9;
    	a111 = 6;
    	a18 = 8;
    	a53 = 9;
    	a92 = 10;
    	a71 = 9;
    	a120 = 34 ;
    	a31 = 3;
    	a13 = 32 ;
    	a59 = 34 ;
    	a190 = 9;
    	a132 = 11; 
    	}else {
printf("POINT: 2856\n");
    	a18 = 7;
    	a31 = 2;
    	a190 = 10;
    	a179 = 34 ;
    	a92 = 7;
    	a135 = 34 ;
    	a76 = 11;
    	a169 = 12;
    	a120 = 35 ;
    	a132 = 5;
    	}printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2857\n");

    if(((a13 == 32 && (a53 == 8 && ((input == 4) &&  cf==1 ))) && (((a57 == 9 && a76 == 6) && a141 == 32) && a159 == 32))) {
printf("POINT: 2858\n");
printf("POINT: 2859\n");

	if((a19 + 20) > a19){
printf("POINT: 2860\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2861\n");

	if((a91 - 20) < a91){
printf("POINT: 2862\n");
	a91  -=  2 ;}
	 else{	
	a91  -=  0;}
printf("POINT: 2863\n");

	if((a153 + 20) > a153){
printf("POINT: 2864\n");
	a153  +=  1 ;}
	 else{	
	a153  +=  0;}
printf("POINT: 2865\n");

	if((a107 - 20) < a107){
printf("POINT: 2866\n");
	a107  -=  3 ;}
	 else{	
	a107  -=  0;}
printf("POINT: 2867\n");

	if((a10 + 20) > a10){
printf("POINT: 2868\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
printf("POINT: 2869\n");

	if((a165 + 20) > a165){
printf("POINT: 2870\n");
	a165  +=  2 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
    	a35 = 35 ;
    	a40 = 6;
    	a28 = 1; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
printf("POINT: 2871\n");

    if(((a79 == 32 && (a141 == 32 && a48 == 32)) && (((((input == 3) &&  cf==1 ) && a65 == 32) && a65 == 32) && a159 == 32))) {
printf("POINT: 2872\n");
printf("POINT: 2873\n");

	if((a19 + 20) > a19){
printf("POINT: 2874\n");
	a19  +=  1 ;}
	 else{	
	a19  +=  0;}
printf("POINT: 2875\n");

	if((a98 + 20) > a98){
printf("POINT: 2876\n");
	a98  +=  2 ;}
	 else{	
	a98  +=  0;}
printf("POINT: 2877\n");

	if((a10 + 20) > a10){
printf("POINT: 2878\n");
	a10  +=  1 ;}
	 else{	
	a10  +=  0;}
    	cf = 0;
printf("POINT: 2879\n");

    	if((!(a100 == 32) && a65 == 35)) {
printf("POINT: 2880\n");
    	a148 = 13;
    	a35 = 33 ;
    	a87 = 16; 
    	}else {
printf("POINT: 2882\n");
    	a40 = 7;
    	a35 = 35 ;
    	a70 = 7;
    	}printf("%d\n", 24); // fflush(stdout); 
    } 
}
 void calculate_outputm214(int input) {
printf("POINT: 2883\n");

    if((((a53 == 8 && (a135 == 32 && a174 == 2)) && ((a169 == 11 && (((input == 2) &&  cf==1 ) && a3 == 2)) && a31 == 2)) && a176 == 9030)) {
printf("POINT: 2884\n");
printf("POINT: 2885\n");

	if((a5 - 20) < a5){
printf("POINT: 2886\n");
	a5  -=  4 ;}
	 else{	
	a5  -=  0;}
    	cf = 0;
    	a35 = 34 ;
    	a123 = 35 ;
    	a28 = 2; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2887\n");

    if(((a24 == 32 && (a79 == 32 && (a111 == 3 && (a190 == 7 && a118 == 32)))) && (( cf==1  && (input == 5)) && a65 == 32))) {
printf("POINT: 2888\n");
printf("POINT: 2889\n");

	if((a176 + 20) > a176){
printf("POINT: 2890\n");
	a176  +=  4 ;}
	 else{	
	a176  +=  0;}
printf("POINT: 2891\n");

	if((a165 + 20) > a165){
printf("POINT: 2892\n");
	a165  +=  4 ;}
	 else{	
	a165  +=  0;}
    	cf = 0;
printf("POINT: 2893\n");

    	if((a1 == 36 && a189 == 12)) {
printf("POINT: 2894\n");
    	a25 = 34 ;
    	a24 = 34 ;
    	a118 = 34 ;
    	a65 = 34 ;
    	a120 = 34 ;
    	a141 = 34 ;
    	a18 = 6;
    	a167 = 4;
    	a79 = 34 ;
    	a92 = 6;
    	a3 = 1;
    	a174 = 3;
    	a101 = 5;
    	a31 = 3;
    	a69 = 34 ;
    	a111 = 4;
    	a40 = 7;
    	a135 = 34 ;
    	a35 = 35 ;
    	a13 = 34 ;
    	a34 = 34 ;
    	a109 = 34 ;
    	a1 = 32 ;
    	a76 = 7;
    	a53 = 7;
    	a190 = 8;
    	a48 = 34 ;
    	a159 = 34 ;
    	a57 = 9;
    	a70 = 9; 
    	}else {
printf("POINT: 2896\n");
    	a35 = 33 ;
    	a141 = 33 ;
    	a13 = 33 ;
    	a92 = 4;
    	a118 = 33 ;
    	a34 = 33 ;
    	a3 = 1;
    	a65 = 33 ;
    	a190 = 6;
    	a120 = 33 ;
    	a25 = 33 ;
    	a76 = 5;
    	a69 = 33 ;
    	a57 = 8;
    	a109 = 33 ;
    	a111 = 2;
    	a169 = 10;
    	a101 = 3;
    	a159 = 33 ;
    	a148 = 9;
    	a18 = 4;
    	a189 = 10;
    	a174 = 1;
    	a31 = 1;
    	a53 = 7;
    	a83 = 14;
    	}printf("%d\n", 20); // fflush(stdout); 
    } 
printf("POINT: 2897\n");

    if((((a101 == 4 && ((input == 4) &&  cf==1 )) && (a169 == 11 && ((a120 == 32 && (a1 == 32 && a65 == 32)) && a109 == 32))) && a171 >= 7)) {
printf("POINT: 2898\n");
printf("POINT: 2899\n");

	if((a171 - 20) < a171){
printf("POINT: 2900\n");
	a171  -=  4 ;}
	 else{	
	a171  -=  0;}
    	cf = 0;
    	a190 = 6;
    	a34 = 33 ;
    	a57 = 8;
    	a174 = 1;
    	a135 = 33 ;
    	a111 = 2;
    	a1 = 33 ;
    	a118 = 33 ;
    	a24 = 33 ;
    	a35 = 33 ;
    	a119 = 36 ;
    	a159 = 33 ;
    	a167 = 2;
    	a18 = 4;
    	a69 = 33 ;
    	a65 = 33 ;
    	a141 = 33 ;
    	a31 = 1;
    	a148 = 12; 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
printf("POINT: 2901\n");

    if((((a3 == 2 && (( cf==1  && (input == 1)) && a57 == 9)) && ((a141 == 32 && (a65 == 32 && a159 == 32)) && a24 == 32)) && (a19 % 2==0))) {
printf("POINT: 2902\n");
printf("POINT: 2903\n");

	if((a95 - 20) < a95){
printf("POINT: 2904\n");
	a95  -=  1 ;}
	 else{	
	a95  -=  0;}
    	cf = 0;
    	a35 = 32 ;
    	a136 = 15;
    	a40 = 11; 
    	 printf("%d\n", 24); // fflush(stdout); 
    } 
printf("POINT: 2905\n");

    if((((a167 == 3 && (a65 == 32 && ((a69 == 32 && a48 == 32) && a79 == 32))) && (a135 == 32 && ((input == 3) &&  cf==1 ))) && a7 <= -5)) {
printf("POINT: 2906\n");
printf("POINT: 2907\n");

	if((a98 + 20) > a98){
printf("POINT: 2908\n");
	a98  +=  1 ;}
	 else{	
	a98  +=  0;}
    	cf = 0;
    	a132 = 8;
    	a80 = 3; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm37(int input) {
printf("POINT: 2909\n");

    if(((a167 == 3 && ((a72 == 33 &&  cf==1 ) && a25 == 32)) && (((a111 == 3 && a169 == 11) && a13 == 32) && a79 == 32))) {
printf("POINT: 2910\n");
    	calculate_outputm211(input);
    } 
printf("POINT: 2911\n");

    if(((a174 == 2 && (a120 == 32 && ((a72 == 35 &&  cf==1 ) && a135 == 32))) && ((a3 == 2 && a159 == 32) && a57 == 9))) {
printf("POINT: 2912\n");
    	calculate_outputm213(input);
    } 
printf("POINT: 2913\n");

    if(((((a72 == 36 &&  cf==1 ) && a69 == 32) && a34 == 32) && (a13 == 32 && (a65 == 32 && (a141 == 32 && a53 == 8))))) {
printf("POINT: 2914\n");
    	calculate_outputm214(input);
    } 
}

 void calculate_output(int input) {
        cf = 1;

printf("POINT: 2915\n");

    if(((a190 == 6 && (a174 == 1 && a141 == 33)) && ((a18 == 4 && ((a35 == 33 &&  cf==1 ) && a31 == 1)) && a111 == 2))) {
printf("POINT: 2916\n");
printf("POINT: 2917\n");

    	if(((((a111 == 2 && (a148 == 9 &&  cf==1 )) && a169 == 10) && a18 == 4) && ((a25 == 33 && a189 == 10) && a159 == 33))) {
printf("POINT: 2918\n");
    		calculate_outputm1(input);
    	} 
printf("POINT: 2919\n");

    	if(((a148 == 10 &&  cf==1 ) && (a34 == 33 && (a169 == 10 && (((a167 == 2 && a109 == 33) && a57 == 8) && a174 == 1))))) {
printf("POINT: 2920\n");
    		calculate_outputm2(input);
    	} 
printf("POINT: 2921\n");

    	if(((a31 == 1 && (( cf==1  && a148 == 11) && a120 == 33)) && ((a189 == 10 && (a190 == 6 && a48 == 33)) && a13 == 33))) {
printf("POINT: 2922\n");
    		calculate_outputm3(input);
    	} 
printf("POINT: 2923\n");

    	if((((a34 == 33 && (((a135 == 33 && a57 == 8) && a34 == 33) && a24 == 33)) && a167 == 2) && (a148 == 12 &&  cf==1 ))) {
printf("POINT: 2924\n");
    		calculate_outputm4(input);
    	} 
printf("POINT: 2925\n");

    	if(((a31 == 1 && (a3 == 1 && a79 == 33)) && ((a189 == 10 && ((a148 == 13 &&  cf==1 ) && a24 == 33)) && a111 == 2))) {
printf("POINT: 2926\n");
    		calculate_outputm5(input);
    	} 
printf("POINT: 2927\n");

    	if((a111 == 2 && ((((a167 == 2 && (a92 == 4 && ( cf==1  && a148 == 14))) && a109 == 33) && a101 == 3) && a189 == 10))) {
printf("POINT: 2928\n");
    		calculate_outputm6(input);
    	} 
printf("POINT: 2929\n");

    	if((((a174 == 1 && (a141 == 33 && a79 == 33)) && a13 == 33) && ((a189 == 10 && (a148 == 15 &&  cf==1 )) && a31 == 1))) {
printf("POINT: 2930\n");
    		calculate_outputm7(input);
    	} 
printf("POINT: 2931\n");

    	if((((a53 == 7 && (a71 == 2 && a135 == 33)) && a141 == 33) && ((( cf==1  && a148 == 16) && a25 == 33) && a31 == 1))) {
printf("POINT: 2932\n");
    		calculate_outputm8(input);
    	} 
    } 
printf("POINT: 2933\n");

    if((((a174 == 2 && (a35 == 32 &&  cf==1 )) && a190 == 7) && (a141 == 32 && ((a101 == 4 && a167 == 3) && a48 == 32)))) {
printf("POINT: 2934\n");
printf("POINT: 2935\n");

    	if(((a24 == 32 && ((a92 == 5 && a167 == 3) && a111 == 3)) && ((( cf==1  && a136 == 10) && a169 == 11) && a79 == 32))) {
printf("POINT: 2936\n");
    		calculate_outputm9(input);
    	} 
printf("POINT: 2937\n");

    	if(((a190 == 7 && a25 == 32) && (a65 == 32 && ((a79 == 32 && (a120 == 32 && (a136 == 11 &&  cf==1 ))) && a167 == 3)))) {
printf("POINT: 2938\n");
    		calculate_outputm10(input);
    	} 
printf("POINT: 2939\n");

    	if(((a25 == 32 && (((a174 == 2 && a167 == 3) && a57 == 9) && a1 == 32)) && (a169 == 11 && ( cf==1  && a136 == 13)))) {
printf("POINT: 2940\n");
    		calculate_outputm12(input);
    	} 
printf("POINT: 2941\n");

    	if(((a48 == 32 && (a69 == 32 && (a1 == 32 && (a79 == 32 && a31 == 2)))) && (a13 == 32 && (a136 == 14 &&  cf==1 )))) {
printf("POINT: 2942\n");
    		calculate_outputm13(input);
    	} 
printf("POINT: 2943\n");

    	if((((( cf==1  && a136 == 15) && a118 == 32) && a57 == 9) && (((a69 == 32 && a3 == 2) && a76 == 6) && a53 == 8))) {
printf("POINT: 2944\n");
    		calculate_outputm14(input);
    	} 
printf("POINT: 2945\n");

    	if(((a57 == 9 && a189 == 11) && (a120 == 32 && (a1 == 32 && ((a18 == 5 && (a136 == 16 &&  cf==1 )) && a159 == 32))))) {
printf("POINT: 2946\n");
    		calculate_outputm15(input);
    	} 
printf("POINT: 2947\n");

    	if(((a118 == 32 && (a189 == 11 && ((a53 == 8 && a57 == 9) && a167 == 3))) && (a118 == 32 && (a136 == 17 &&  cf==1 )))) {
printf("POINT: 2948\n");
    		calculate_outputm16(input);
    	} 
    } 
printf("POINT: 2949\n");

    if(((a25 == 34 && a101 == 5) && ((((( cf==1  && a35 == 34) && a48 == 34) && a174 == 3) && a79 == 34) && a31 == 3))) {
printf("POINT: 2950\n");
printf("POINT: 2951\n");

    	if(((a18 == 6 && (a118 == 34 && a25 == 34)) && ((a159 == 34 && ((a123 == 33 &&  cf==1 ) && a25 == 34)) && a135 == 34))) {
printf("POINT: 2952\n");
    		calculate_outputm17(input);
    	} 
printf("POINT: 2953\n");

    	if((((a31 == 3 && a111 == 4) && a53 == 9) && (((a24 == 34 && ( cf==1  && a123 == 32)) && a174 == 3) && a92 == 6))) {
printf("POINT: 2954\n");
    		calculate_outputm18(input);
    	} 
printf("POINT: 2955\n");

    	if((((a48 == 34 && a109 == 34) && a65 == 34) && ((((a123 == 34 &&  cf==1 ) && a31 == 3) && a135 == 34) && a57 == 10))) {
printf("POINT: 2956\n");
    		calculate_outputm19(input);
    	} 
printf("POINT: 2957\n");

    	if((((a109 == 34 && (a169 == 12 && (a18 == 6 && (a123 == 35 &&  cf==1 )))) && a167 == 4) && (a34 == 34 && a169 == 12))) {
printf("POINT: 2958\n");
    		calculate_outputm20(input);
    	} 
printf("POINT: 2959\n");

    	if(((a111 == 4 && ((a71 == 4 && a167 == 4) && a76 == 7)) && ((( cf==1  && a123 == 36) && a111 == 4) && a71 == 4))) {
printf("POINT: 2960\n");
    		calculate_outputm21(input);
    	} 
    } 
printf("POINT: 2961\n");

    if(((a76 == 7 && ((a35 == 35 &&  cf==1 ) && a101 == 5)) && (a118 == 34 && ((a34 == 34 && a118 == 34) && a167 == 4)))) {
printf("POINT: 2962\n");
printf("POINT: 2963\n");

    	if((((((a189 == 12 && a141 == 34) && a31 == 3) && a159 == 34) && a169 == 12) && (( cf==1  && a40 == 6) && a24 == 34))) {
printf("POINT: 2964\n");
    		calculate_outputm22(input);
    	} 
printf("POINT: 2965\n");

    	if(((((a159 == 34 && ((( cf==1  && a40 == 7) && a174 == 3) && a65 == 34)) && a13 == 34) && a34 == 34) && a18 == 6)) {
printf("POINT: 2966\n");
    		calculate_outputm23(input);
    	} 
printf("POINT: 2967\n");

    	if(((a167 == 4 && (a31 == 3 && ((a57 == 10 && (a159 == 34 && a76 == 7)) && a135 == 34))) && (a40 == 8 &&  cf==1 ))) {
printf("POINT: 2968\n");
    		calculate_outputm24(input);
    	} 
printf("POINT: 2969\n");

    	if(((a69 == 34 && (a57 == 10 && (( cf==1  && a40 == 9) && a48 == 34))) && ((a53 == 9 && a111 == 4) && a174 == 3))) {
printf("POINT: 2970\n");
    		calculate_outputm25(input);
    	} 
printf("POINT: 2971\n");

    	if(((a111 == 4 && (a53 == 9 && (a79 == 34 && a111 == 4))) && (((a40 == 10 &&  cf==1 ) && a71 == 4) && a31 == 3))) {
printf("POINT: 2972\n");
    		calculate_outputm26(input);
    	} 
printf("POINT: 2973\n");

    	if(((a118 == 34 && (a167 == 4 && a141 == 34)) && ((a135 == 34 && (a65 == 34 && ( cf==1  && a40 == 11))) && a159 == 34))) {
printf("POINT: 2974\n");
    		calculate_outputm27(input);
    	} 
printf("POINT: 2975\n");

    	if(((( cf==1  && a40 == 12) && a174 == 3) && ((a190 == 8 && ((a174 == 3 && a101 == 5) && a120 == 34)) && a13 == 34))) {
printf("POINT: 2976\n");
    		calculate_outputm28(input);
    	} 
printf("POINT: 2977\n");

    	if(((((( cf==1  && a40 == 13) && a189 == 12) && a167 == 4) && a169 == 12) && ((a18 == 6 && a109 == 34) && a159 == 34))) {
printf("POINT: 2978\n");
    		calculate_outputm29(input);
    	} 
    } 
printf("POINT: 2979\n");

    if(((((a48 == 32 && ( cf==1  && a35 == 36)) && a25 == 32) && a174 == 2) && (a118 == 32 && (a65 == 32 && a101 == 4)))) {
printf("POINT: 2980\n");
printf("POINT: 2981\n");

    	if((((a71 == 3 && a71 == 3) && a13 == 32) && (((( cf==1  && a132 == 5) && a65 == 32) && a79 == 32) && a34 == 32))) {
printf("POINT: 2982\n");
    		calculate_outputm30(input);
    	} 
printf("POINT: 2983\n");

    	if((((a69 == 32 && (a174 == 2 && a76 == 6)) && a24 == 32) && ((( cf==1  && a132 == 6) && a69 == 32) && a69 == 32))) {
printf("POINT: 2984\n");
    		calculate_outputm31(input);
    	} 
printf("POINT: 2985\n");

    	if(((a65 == 32 && (( cf==1  && a132 == 7) && a48 == 32)) && (a25 == 32 && ((a169 == 11 && a53 == 8) && a34 == 32)))) {
printf("POINT: 2986\n");
    		calculate_outputm32(input);
    	} 
printf("POINT: 2987\n");

    	if(((((a132 == 8 &&  cf==1 ) && a79 == 32) && a76 == 6) && (a169 == 11 && (a24 == 32 && (a101 == 4 && a65 == 32))))) {
printf("POINT: 2988\n");
    		calculate_outputm33(input);
    	} 
printf("POINT: 2989\n");

    	if(((a120 == 32 && (a132 == 9 &&  cf==1 )) && ((((a118 == 32 && a34 == 32) && a169 == 11) && a24 == 32) && a31 == 2))) {
printf("POINT: 2990\n");
    		calculate_outputm34(input);
    	} 
printf("POINT: 2991\n");

    	if((((a111 == 3 && (a92 == 5 && a167 == 3)) && a111 == 3) && ((( cf==1  && a132 == 10) && a118 == 32) && a69 == 32))) {
printf("POINT: 2992\n");
    		calculate_outputm35(input);
    	} 
printf("POINT: 2993\n");

    	if(((a25 == 32 && ((a48 == 32 && a109 == 32) && a101 == 4)) && ((a189 == 11 && ( cf==1  && a132 == 11)) && a118 == 32))) {
printf("POINT: 2994\n");
    		calculate_outputm36(input);
    	} 
printf("POINT: 2995\n");

    	if((((a92 == 5 && (a111 == 3 && ( cf==1  && a132 == 12))) && a13 == 32) && ((a141 == 32 && a118 == 32) && a18 == 5))) {
printf("POINT: 2996\n");
    		calculate_outputm37(input);
    	} 
    } 
    errorCheck();

printf("POINT: 2997\n");

    if((cf==1)) 
printf("POINT: 2998\n");
    {
    
    }
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}


int main()
{
kappa = 0;
    // main i/o-loop
/*   int symb;   */
printf("POINT: 2999\n");

    for (int FLAG=0;FLAG<BOUND;FLAG++)
printf("POINT: 3000\n");
    {
          int symb = nondet_int(); __CPROVER_input("symb",symb);
        // operate eca engine
printf("POINT: 3001\n");
__CPROVER_input("a159",a159);
__CPROVER_input("a75",a75);
__CPROVER_input("a101",a101);
__CPROVER_input("a122",a122);
__CPROVER_input("a136",a136);
__CPROVER_input("a100",a100);
__CPROVER_input("a35",a35);
__CPROVER_input("a167",a167);
__CPROVER_input("a61",a61);
__CPROVER_input("a118",a118);
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a159,a75,a101,a122,a136,a100,a35,a167,a61,a118);
          if((symb != 2) && (symb != 4) && (symb != 1) && (symb != 5) && (symb != 3))
printf("POINT: 3002\n");
          printf("This is return -2 \n");
        calculate_output(symb);
        printf("%d",symb);
    }
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a159,a75,a101,a122,a136,a100,a35,a167,a61,a118);    
 return 0;

}


