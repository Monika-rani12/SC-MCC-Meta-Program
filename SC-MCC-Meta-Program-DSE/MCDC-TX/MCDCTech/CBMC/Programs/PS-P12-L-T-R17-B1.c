#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>

    #define BOUND 1

	// inputs
	int inputs[] = {13,12,2,5,15,11,7,9,6,14,10,4,8,1,3};

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
	void calculate_outputm215(int);
	void calculate_outputm216(int);
	void calculate_outputm217(int);
	void calculate_outputm218(int);
	void calculate_outputm219(int);
	void calculate_outputm220(int);
	void calculate_outputm221(int);
	void calculate_outputm222(int);
	void calculate_outputm223(int);
	void calculate_outputm224(int);
	void calculate_outputm225(int);
	void calculate_outputm226(int);
	void calculate_outputm227(int);
	void calculate_outputm228(int);
	void calculate_outputm229(int);
	void calculate_outputm230(int);
	void calculate_outputm231(int);
	void calculate_outputm232(int);
	void calculate_outputm233(int);
	void calculate_outputm234(int);
	void calculate_outputm235(int);
	void calculate_outputm236(int);
	void calculate_outputm237(int);
	void calculate_outputm238(int);
	void calculate_outputm239(int);
	void calculate_outputm240(int);

int a351,a86,a329,a154,a182,a99,a286,a132,a282,a125;
	 
	 int a336[] = {49,50,51,52,53,54};
	 int a366[] = {55,56,57,58,59,60};
	 int a377[] = {61,62,63,64,65,66};
	 int *a350 = a336;
	 
	 int a343[] = {3,4,5,6,7,8,9,10};
	 
	 int a397[] = {6,7,8,9,10,11};
	 int a371[] = {12,13,14,15,16,17};
	 int a293[] = {18,19,20,21,22,23};
	 int *a368 = a397;
	 
	 int a98[] = {44,45,46,47,48,49};
	 int a53[] = {50,51,52,53,54,55};
	 int a116[] = {56,57,58,59,60,61};
	 int *a181 = a53;
	 
	 int a271 = 10;
	 int a161 = 7;
	 int a151 = 14;
	 int a180 = 1;
	 int a219 = 3;
	 int a380[] = {6,7,8,9,10,11,12,13};
	 int a32 = 11;
	 int a227  = 33;
	 int a20  = 36;
	 int a21  = 36;
	 int a170  = 34;
	 int cf = 1;
	 int a80 = 10;
	 int a141 = 95;
	 int a206  = 33;
	 int a93 = 9;
	 int a349  = 35;
	 int a54[] = {12,13,14,15,16,17};
	 int a25[] = {18,19,20,21,22,23};
	 int a167[] = {24,25,26,27,28,29};
	 int *a100 = a167;
	 int a97 = 241;
	 int a110[] = {12,13,14,15,16,17};
	 int a37[] = {18,19,20,21,22,23};
	 int a81[] = {24,25,26,27,28,29};
	 int *a139 = a110;
	 int a263  = 32;
	 int a29[] = {2,3,4,5,6,7,8,9};
	 int a121  = 36;
	 int a26[] = {8,9,10,11,12,13,14,15};
	 int a108[] = {4,5,6,7,8,9,10,11};
	 int a75  = 35;
	 int a264 = 16;
	 int a143 = 4;
	 int a115 = 3;
	 int a43[] = {99,100,101,102,103,104};
	 int a105[] = {105,106,107,108,109,110};
	 int a117[] = {111,112,113,114,115,116};
	 int *a188 = a117;
	 int a56  = 34;
	 int a59[] = {6,7,8,9,10,11,12,13};
	 int a24[] = {49,50,51,52,53,54};
	 int a184[] = {55,56,57,58,59,60};
	 int a8[] = {61,62,63,64,65,66};
	 int *a90 = a24;
	 int a279[] = {1,2,3,4,5,6,7,8};
	 int a176[] = {2,3,4,5,6,7,8,9};
	 int a298[] = {2,3,4,5,6,7,8,9};
	 int a396 = -75;
	 int a112 = 11;
	 int a321[] = {29,30,31,32,33,34};
	 int a295[] = {35,36,37,38,39,40};
	 int a273[] = {41,42,43,44,45,46};
	 int *a315 = a321;
	 int a111 = 9;
	 int a268  = 33;
	 int a163 = 291;
	 int a91[] = {8,9,10,11,12,13,14,15};
	 int a311 = 2;
	 int a60[] = {5,6,7,8,9,10,11,12};
	 int a157 = 12;
	 int a70[] = {42,43,44,45,46,47};
	 int a10[] = {48,49,50,51,52,53};
	 int a198[] = {54,55,56,57,58,59};
	 int *a33 = a10;
	 int a47 = 12;
	 int a328 = 1;
	 int a28 = 5;
	 int a155 = 136;
	 int a131 = 4;
	 int a15  = 33;
	 int a357 = 8;
	 int a169 = -167;
	 int a267 = 7;
	 int a166 = 14;
	 int a195[] = {2,3,4,5,6,7,8,9};
	 int a164[] = {1,2,3,4,5,6,7,8};
	 int a130 = 9;
	 int a64[] = {8,9,10,11,12,13,14,15};
	 int a290[] = {10,11,12,13,14,15,16,17};
	 int a156 = 11;
	 int a297[] = {14,15,16,17,18,19};
	 int a270[] = {20,21,22,23,24,25};
	 int a399[] = {26,27,28,29,30,31};
	 int *a288 = a297;
	 int a185[] = {1,2,3,4,5,6,7,8};
	 int a96[] = {72,73,74,75,76,77};
	 int a22[] = {78,79,80,81,82,83};
	 int a72[] = {84,85,86,87,88,89};
	 int *a0 = a22;
	 int a129 = 11;
	 int a331 = 6;
	 int a340 = 5;
	 int a223 = 3;
	 int a394 = 10;
	 int a144  = 34;
	 int a136 = 7;
	 int a67 = 36;
	 int a173 = 1;
	 int a45 = 0;
	 int a39 = 1;
	 int a102 = 1;
	 int a178 = 0;
	 int a13 = 1;
	 int a175 = 1;
	 int a189 = 0;
	 int a40 = 1;
	 int a88 = 2;
	 int a120 = 1;
	 int a113 = 3;
	 int a153 = 0;
	 int a199 = 1;
	 int a57 = 1;
	 int a190 = 2;
	 int a171 = 1;
	 int a1 = 1;
	 int a78 = 0;
	 int a84 = 2;
	 int a2 = 2;
	 int a50 = 3;
	 int a58 = 1;


	void errorCheck() {
printf("POINT: 1\n");

	    if(((a86 == 7 && a156 == 11) && a28 == a60[1])){
printf("POINT: 2\n");
	    cf = 0;
	    
	    }
printf("POINT: 3\n");

	    if(((a130 == a29[0] && a93 == 12) && a28 == a60[7])){
printf("POINT: 4\n");
	    cf = 0;
	    
	    }
printf("POINT: 5\n");

	    if(((a20 == 33 && (108 == a188[3])) && a28 == a60[3])){
printf("POINT: 6\n");
	    cf = 0;
	    
	    }
printf("POINT: 7\n");

	    if(((a75 == 34 && ((70 < a155) && (103 >= a155))) && a28 == a60[6])){
printf("POINT: 8\n");
	    cf = 0;
	    
	    }
printf("POINT: 9\n");

	    if(((a351 == 34 && a264 == a290[4]) && a28 == a60[4])){
printf("POINT: 10\n");
	    cf = 0;
	    
	    }
printf("POINT: 11\n");

	    if(((a170 == 35 && ((-36 < a125) && (168 >= a125))) && a28 == a60[5])){
printf("POINT: 12\n");
	    cf = 0;
	    
	    }
printf("POINT: 13\n");

	    if(((a129 == a108[5] && a56 == 36) && a28 == a60[2])){
printf("POINT: 14\n");
	    cf = 0;
	    
	    }
printf("POINT: 15\n");

	    if(((a130 == a29[7] && a93 == 12) && a28 == a60[7])){
printf("POINT: 16\n");
	    cf = 0;
	    
	    }
printf("POINT: 17\n");

	    if(((a111 == a195[4] && a56 == 34) && a28 == a60[2])){
printf("POINT: 18\n");
	    cf = 0;
	    
	    }
printf("POINT: 19\n");

	    if(((120 < a67 && a93 == 15) && a28 == a60[7])){
printf("POINT: 20\n");
	    cf = 0;
	    
	    }
printf("POINT: 21\n");

	    if(((a154 == 13 && 210 < a125) && a28 == a60[5])){
printf("POINT: 22\n");
	    cf = 0;
	    
	    }
printf("POINT: 23\n");

	    if((((64 == a90[3]) && a264 == a290[6]) && a28 == a60[4])){
printf("POINT: 24\n");
	    cf = 0;
	    
	    }
printf("POINT: 25\n");

	    if(((a132 == a91[5] && a264 == a290[7]) && a28 == a60[4])){
printf("POINT: 26\n");
	    cf = 0;
	    
	    }
printf("POINT: 27\n");

	    if(((a154 == 10 && 210 < a125) && a28 == a60[5])){
printf("POINT: 28\n");
	    cf = 0;
	    
	    }
printf("POINT: 29\n");

	    if((((53 == a181[3]) && a180 == a164[2]) && a28 == a60[0])){
printf("POINT: 30\n");
	    cf = 0;
	    
	    }
printf("POINT: 31\n");

	    if(((a136 == 8 && (102 == a188[3])) && a28 == a60[3])){
printf("POINT: 32\n");
	    cf = 0;
	    
	    }
printf("POINT: 33\n");

	    if(((a182 == a59[3] && a180 == a164[6]) && a28 == a60[0])){
printf("POINT: 34\n");
	    cf = 0;
	    
	    }
printf("POINT: 35\n");

	    if(((a20 == 35 && (108 == a188[3])) && a28 == a60[3])){
printf("POINT: 36\n");
	    cf = 0;
	    
	    }
printf("POINT: 37\n");

	    if(((a47 == 16 && 212 < a155) && a28 == a60[6])){
printf("POINT: 38\n");
	    cf = 0;
	    
	    }
printf("POINT: 39\n");

	    if(((a263 == 33 && a93 == 13) && a28 == a60[7])){
printf("POINT: 40\n");
	    cf = 0;
	    
	    }
printf("POINT: 41\n");

	    if(((a99 == 11 && a93 == 16) && a28 == a60[7])){
printf("POINT: 42\n");
	    cf = 0;
	    
	    }
printf("POINT: 43\n");

	    if(((a182 == a59[7] && a180 == a164[6]) && a28 == a60[0])){
printf("POINT: 44\n");
	    cf = 0;
	    
	    }
printf("POINT: 45\n");

	    if(((a136 == 13 && (102 == a188[3])) && a28 == a60[3])){
printf("POINT: 46\n");
	    cf = 0;
	    
	    }
printf("POINT: 47\n");

	    if((((75 == a0[3]) && a56 == 35) && a28 == a60[2])){
printf("POINT: 48\n");
	    cf = 0;
	    
	    }
printf("POINT: 49\n");

	    if(((a80 == 10 && a125 <=  -36) && a28 == a60[5])){
printf("POINT: 50\n");
	    cf = 0;
	    
	    }
printf("POINT: 51\n");

	    if(((a131 == 5 && a156 == 9) && a28 == a60[1])){
printf("POINT: 52\n");
	    cf = 0;
	    
	    }
printf("POINT: 53\n");

	    if(((a267 == 6 && a93 == 10) && a28 == a60[7])){
printf("POINT: 54\n");
	    cf = 0;
	    
	    }
printf("POINT: 55\n");

	    if(((a47 == 13 && 212 < a155) && a28 == a60[6])){
printf("POINT: 56\n");
	    cf = 0;
	    
	    }
printf("POINT: 57\n");

	    if(((a151 == 10 && a156 == 13) && a28 == a60[1])){
printf("POINT: 58\n");
	    cf = 0;
	    
	    }
printf("POINT: 59\n");

	    if(((a21 == 35 && a264 == a290[1]) && a28 == a60[4])){
printf("POINT: 60\n");
	    cf = 0;
	    
	    }
printf("POINT: 61\n");

	    if(((a111 == a195[5] && a56 == 34) && a28 == a60[2])){
printf("POINT: 62\n");
	    cf = 0;
	    
	    }
printf("POINT: 63\n");

	    if(((a97 <=  -88 && a180 == a164[3]) && a28 == a60[0])){
printf("POINT: 64\n");
	    cf = 0;
	    
	    }
printf("POINT: 65\n");

	    if(((a263 == 32 && a93 == 13) && a28 == a60[7])){
printf("POINT: 66\n");
	    cf = 0;
	    
	    }
printf("POINT: 67\n");

	    if((((51 == a33[3]) && a93 == 9) && a28 == a60[7])){
printf("POINT: 68\n");
	    cf = 0;
	    
	    }
printf("POINT: 69\n");

	    if(((a157 == a64[7] && a156 == 12) && a28 == a60[1])){
printf("POINT: 70\n");
	    cf = 0;
	    
	    }
printf("POINT: 71\n");

	    if(((a115 == a185[7] && a156 == 7) && a28 == a60[1])){
printf("POINT: 72\n");
	    cf = 0;
	    
	    }
printf("POINT: 73\n");

	    if(((a75 == 36 && a180 == a164[5]) && a28 == a60[0])){
printf("POINT: 74\n");
	    cf = 0;
	    
	    }
printf("POINT: 75\n");

	    if((((24 == a100[0]) && ((168 < a125) && (210 >= a125))) && a28 == a60[5])){
printf("POINT: 76\n");
	    cf = 0;
	    
	    }
printf("POINT: 77\n");

	    if((((45 == a181[1]) && a180 == a164[2]) && a28 == a60[0])){
printf("POINT: 78\n");
	    cf = 0;
	    
	    }
printf("POINT: 79\n");

	    if(((a161 == 6 && a56 == 32) && a28 == a60[2])){
printf("POINT: 80\n");
	    cf = 0;
	    
	    }
printf("POINT: 81\n");

	    if(((a15 == 32 && a180 == a164[1]) && a28 == a60[0])){
printf("POINT: 82\n");
	    cf = 0;
	    
	    }
printf("POINT: 83\n");

	    if(((a130 == a29[5] && a93 == 12) && a28 == a60[7])){
printf("POINT: 84\n");
	    cf = 0;
	    
	    }
printf("POINT: 85\n");

	    if(((a132 == a91[6] && a264 == a290[7]) && a28 == a60[4])){
printf("POINT: 86\n");
	    cf = 0;
	    
	    }
printf("POINT: 87\n");

	    if(((a161 == 2 && a56 == 32) && a28 == a60[2])){
printf("POINT: 88\n");
	    cf = 0;
	    
	    }
printf("POINT: 89\n");

	    if(((a161 == 3 && a56 == 32) && a28 == a60[2])){
printf("POINT: 90\n");
	    cf = 0;
	    
	    }
printf("POINT: 91\n");

	    if(((a161 == 8 && a56 == 32) && a28 == a60[2])){
printf("POINT: 92\n");
	    cf = 0;
	    
	    }
printf("POINT: 93\n");

	    if(((a129 == a108[2] && a56 == 36) && a28 == a60[2])){
printf("POINT: 94\n");
	    cf = 0;
	    
	    }
printf("POINT: 95\n");

	    if(((a156 == 13 && (115 == a188[4])) && a28 == a60[3])){
printf("POINT: 96\n");
	    cf = 0;
	    
	    }
printf("POINT: 97\n");

	    if(((a112 == 7 && a180 == a164[0]) && a28 == a60[0])){
printf("POINT: 98\n");
	    cf = 0;
	    
	    }
printf("POINT: 99\n");

	    if(((a144 == 36 && a264 == a290[2]) && a28 == a60[4])){
printf("POINT: 100\n");
	    cf = 0;
	    
	    }
printf("POINT: 101\n");

	    if(((a349 == 32 && a93 == 11) && a28 == a60[7])){
printf("POINT: 102\n");
	    cf = 0;
	    
	    }
printf("POINT: 103\n");

	    if(((a151 == 13 && a156 == 13) && a28 == a60[1])){
printf("POINT: 104\n");
	    cf = 0;
	    
	    }
printf("POINT: 105\n");

	    if(((a129 == a108[1] && a56 == 36) && a28 == a60[2])){
printf("POINT: 106\n");
	    cf = 0;
	    
	    }
printf("POINT: 107\n");

	    if(((a143 == a176[6] && a264 == a290[3]) && a28 == a60[4])){
printf("POINT: 108\n");
	    cf = 0;
	    
	    }
printf("POINT: 109\n");

	    if(((a15 == 35 && a180 == a164[1]) && a28 == a60[0])){
printf("POINT: 110\n");
	    cf = 0;
	    
	    }
printf("POINT: 111\n");

	    if(((a351 == 35 && a264 == a290[4]) && a28 == a60[4])){
printf("POINT: 112\n");
	    cf = 0;
	    
	    }
printf("POINT: 113\n");

	    if(((a115 == a185[2] && a156 == 7) && a28 == a60[1])){
printf("POINT: 114\n");
	    cf = 0;
	    
	    }
printf("POINT: 115\n");

	    if(((a151 == 15 && a156 == 13) && a28 == a60[1])){
printf("POINT: 116\n");
	    cf = 0;
	    
	    }
printf("POINT: 117\n");

	    if(((a136 == 9 && (102 == a188[3])) && a28 == a60[3])){
printf("POINT: 118\n");
	    cf = 0;
	    
	    }
printf("POINT: 119\n");

	    if(((a267 == 10 && a93 == 10) && a28 == a60[7])){
printf("POINT: 120\n");
	    cf = 0;
	    
	    }
printf("POINT: 121\n");

	    if((((54 == a33[0]) && a93 == 9) && a28 == a60[7])){
printf("POINT: 122\n");
	    cf = 0;
	    
	    }
printf("POINT: 123\n");

	    if(((a132 == a91[4] && a264 == a290[7]) && a28 == a60[4])){
printf("POINT: 124\n");
	    cf = 0;
	    
	    }
printf("POINT: 125\n");

	    if(((a166 == a26[7] && a56 == 33) && a28 == a60[2])){
printf("POINT: 126\n");
	    cf = 0;
	    
	    }
printf("POINT: 127\n");

	    if(((a351 == 36 && a264 == a290[4]) && a28 == a60[4])){
printf("POINT: 128\n");
	    cf = 0;
	    
	    }
printf("POINT: 129\n");

	    if(((a80 == 14 && a125 <=  -36) && a28 == a60[5])){
printf("POINT: 130\n");
	    cf = 0;
	    
	    }
printf("POINT: 131\n");

	    if(((a157 == a64[5] && a156 == 12) && a28 == a60[1])){
printf("POINT: 132\n");
	    cf = 0;
	    
	    }
printf("POINT: 133\n");

	    if(((a21 == 36 && a264 == a290[1]) && a28 == a60[4])){
printf("POINT: 134\n");
	    cf = 0;
	    
	    }
printf("POINT: 135\n");

	    if(((a75 == 35 && ((70 < a155) && (103 >= a155))) && a28 == a60[6])){
printf("POINT: 136\n");
	    cf = 0;
	    
	    }
printf("POINT: 137\n");

	    if(((((-161 < a169) && (13 >= a169)) && a264 == a290[5]) && a28 == a60[4])){
printf("POINT: 138\n");
	    cf = 0;
	    
	    }
printf("POINT: 139\n");

	    if(((a115 == a185[5] && a156 == 7) && a28 == a60[1])){
printf("POINT: 140\n");
	    cf = 0;
	    
	    }
printf("POINT: 141\n");

	    if(((a151 == 14 && a156 == 13) && a28 == a60[1])){
printf("POINT: 142\n");
	    cf = 0;
	    
	    }
printf("POINT: 143\n");

	    if(((a115 == a185[4] && a156 == 7) && a28 == a60[1])){
printf("POINT: 144\n");
	    cf = 0;
	    
	    }
printf("POINT: 145\n");

	    if(((a75 == 36 && ((70 < a155) && (103 >= a155))) && a28 == a60[6])){
printf("POINT: 146\n");
	    cf = 0;
	    
	    }
printf("POINT: 147\n");

	    if(((a32 == 16 && a264 == a290[0]) && a28 == a60[4])){
printf("POINT: 148\n");
	    cf = 0;
	    
	    }
printf("POINT: 149\n");

	    if(((a182 == a59[2] && a180 == a164[6]) && a28 == a60[0])){
printf("POINT: 150\n");
	    cf = 0;
	    
	    }
printf("POINT: 151\n");

	    if(((a182 == a59[4] && a180 == a164[6]) && a28 == a60[0])){
printf("POINT: 152\n");
	    cf = 0;
	    
	    }
printf("POINT: 153\n");

	    if((((24 == a139[0]) && a93 == 14) && a28 == a60[7])){
printf("POINT: 154\n");
	    cf = 0;
	    
	    }
printf("POINT: 155\n");

	    if(((a131 == 3 && a156 == 9) && a28 == a60[1])){
printf("POINT: 156\n");
	    cf = 0;
	    
	    }
printf("POINT: 157\n");

	    if(((a157 == a64[2] && a156 == 12) && a28 == a60[1])){
printf("POINT: 158\n");
	    cf = 0;
	    
	    }
printf("POINT: 159\n");

	    if(((a157 == a64[1] && a156 == 12) && a28 == a60[1])){
printf("POINT: 160\n");
	    cf = 0;
	    
	    }
printf("POINT: 161\n");

	    if(((a93 == 11 && a180 == a164[4]) && a28 == a60[0])){
printf("POINT: 162\n");
	    cf = 0;
	    
	    }
printf("POINT: 163\n");

	    if(((a143 == a176[2] && a264 == a290[3]) && a28 == a60[4])){
printf("POINT: 164\n");
	    cf = 0;
	    
	    }
printf("POINT: 165\n");

	    if(((a86 == 3 && a156 == 10) && a28 == a60[1])){
printf("POINT: 166\n");
	    cf = 0;
	    
	    }
printf("POINT: 167\n");

	    if(((a143 == a176[0] && a264 == a290[3]) && a28 == a60[4])){
printf("POINT: 168\n");
	    cf = 0;
	    
	    }
printf("POINT: 169\n");

	    if(((((191 < a163) && (280 >= a163)) && a180 == a164[7]) && a28 == a60[0])){
printf("POINT: 170\n");
	    cf = 0;
	    
	    }
printf("POINT: 171\n");

	    if(((a75 == 33 && ((70 < a155) && (103 >= a155))) && a28 == a60[6])){
printf("POINT: 172\n");
	    cf = 0;
	    
	    }
printf("POINT: 173\n");

	    if(((a263 == 35 && a93 == 13) && a28 == a60[7])){
printf("POINT: 174\n");
	    cf = 0;
	    
	    }
printf("POINT: 175\n");

	    if((((49 == a90[0]) && a264 == a290[6]) && a28 == a60[4])){
printf("POINT: 176\n");
	    cf = 0;
	    
	    }
printf("POINT: 177\n");

	    if(((a56 == 32 && ((103 < a155) && (212 >= a155))) && a28 == a60[6])){
printf("POINT: 178\n");
	    cf = 0;
	    
	    }
printf("POINT: 179\n");

	    if(((a67 <=  48 && a93 == 15) && a28 == a60[7])){
printf("POINT: 180\n");
	    cf = 0;
	    
	    }
printf("POINT: 181\n");

	    if(((a112 == 14 && a180 == a164[0]) && a28 == a60[0])){
printf("POINT: 182\n");
	    cf = 0;
	    
	    }
printf("POINT: 183\n");

	    if(((((76 < a67) && (120 >= a67)) && a93 == 15) && a28 == a60[7])){
printf("POINT: 184\n");
	    cf = 0;
	    
	    }
printf("POINT: 185\n");

	    if(((((33 < a141) && (92 >= a141)) && a156 == 8) && a28 == a60[1])){
printf("POINT: 186\n");
	    cf = 0;
	    
	    }
printf("POINT: 187\n");

	    if(((a112 == 13 && a180 == a164[0]) && a28 == a60[0])){
printf("POINT: 188\n");
	    cf = 0;
	    
	    }
printf("POINT: 189\n");

	    if(((a154 == 12 && 210 < a125) && a28 == a60[5])){
printf("POINT: 190\n");
	    cf = 0;
	    
	    }
printf("POINT: 191\n");

	    if(((a349 == 35 && a93 == 11) && a28 == a60[7])){
printf("POINT: 192\n");
	    cf = 0;
	    
	    }
printf("POINT: 193\n");

	    if(((((-88 < a97) && (77 >= a97)) && a180 == a164[3]) && a28 == a60[0])){
printf("POINT: 194\n");
	    cf = 0;
	    
	    }
printf("POINT: 195\n");

	    if(((a20 == 36 && (108 == a188[3])) && a28 == a60[3])){
printf("POINT: 196\n");
	    cf = 0;
	    
	    }
printf("POINT: 197\n");

	    if(((a141 <=  -53 && a156 == 8) && a28 == a60[1])){
printf("POINT: 198\n");
	    cf = 0;
	    
	    }
printf("POINT: 199\n");

	    if(((a130 == a29[1] && a93 == 12) && a28 == a60[7])){
printf("POINT: 200\n");
	    cf = 0;
	    
	    }
	}
 void calculate_outputm50(int input) {
printf("POINT: 201\n");

    if((((a394 == 10 && ((a227 == 33 && (( cf==1  && a112 == 8) && a180 == a164[0])) && a282 == 33)) && a271 == 10) && (input == inputs[14] && (a396 <=  -72 && (a28 == a60[0] && a268 == 33))))) {
printf("POINT: 202\n");
    	cf = 0;
    	a227 = 32 ;
    	a156 = (a394 - -3);
    	a331 = a380[(a156 + -12)];
    	a329 = ((((((a329 * a286) % 14999) % 79) - 75) - 1) + 1);
    	a268 = 32 ;
    	a311 = a298[((a271 / a156) - -1)];
    	a328 = a279[(a156 - 12)];
    	a394 = (a156 - 2);
    	a28 = a60[(a219 + -2)];
    	a151 = (a357 + 7);
    	a282 = 32 ;
    	a206 = 32 ;
    	a315 = a295;
    	a357 = (a151 + -6); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 203\n");

    if(((a227 == 33 && (a396 <=  -72 && ((11 == a368[5]) && (a357 == 8 && input == inputs[0])))) && (a311 == a298[0] && (a271 == 10 && ((( cf==1  && a28 == a60[0]) && a112 == 8) && a180 == a164[0]))))) {
printf("POINT: 204\n");
    	cf = 0;
    	a28 = a60[(a357 - 2)];
    	a206 = 32 ;
    	a268 = 32 ;
    	a368 = a371;
    	a223 = a343[((a112 / a219) - 1)];
    	a350 = a366;
    	a282 = 32 ;
    	a328 = a279[(a219 + -2)];
    	a394 = 11;
    	a219 = (a112 - 4);
    	a288 = a270;
    	a271 = 11;
    	a21 = 32 ;
    	a155 = (((((a329 * a340) % 14999) + -14979) + 11854) + -11875);
    	a311 = a298[(a271 + -10)];
    	a396 = (((((a286 * a286) % 43) + -26) + -19857) + 19855);
    	a227 = 32 ;
    	a357 = (a394 + -2);
    	a315 = a295;
    	a331 = a380[(a357 - 8)];
    	a340 = ((((((a340 * a286) % 14999) % 15) - -36) / 5) - -42);
    	a329 = ((((((a329 * a396) % 14999) % 79) - 75) - 2) + 1); 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm51(int input) {
printf("POINT: 205\n");

    if((((((a329 <=  -156 && (( cf==1  && a180 == a164[0]) && input == inputs[12])) && a286 <=  -79) && a282 == 33) && a271 == 10) && (((a28 == a60[0] && a223 == a343[0]) && a112 == 11) && a340 <=  21))) {
printf("POINT: 206\n");
    	cf = 0;
    	a32 = (a394 + 7);
    	a28 = a60[(a357 + -4)];
    	a264 = a290[(a357 - 8)];
    	a331 = a380[(a357 + -6)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 207\n");

    if(((a219 == 3 && ((a396 <=  -72 && a311 == a298[0]) && a282 == 33)) && (a328 == a279[0] && ((19 == a288[5]) && (((a112 == 11 && (a180 == a164[0] &&  cf==1 )) && a28 == a60[0]) && input == inputs[8]))))) {
printf("POINT: 208\n");
    	cf = 0;
printf("POINT: 209\n");

    	if((!(a99 == 12) && a129 == a108[6])) {
printf("POINT: 210\n");
    	a271 = ((a112 / a112) - -11);
    	a315 = a273;
    	a223 = a343[((a271 + a394) - 20)];
    	a268 = 34 ;
    	a286 = ((((((a286 * a396) % 14999) % 103) + 119) - -13) + 48);
    	a340 = ((((((a340 * a329) % 14999) * 2) % 37) - -90) + 0);
    	a331 = a380[(a271 - 10)];
    	a166 = a26[(a394 + -6)];
    	a28 = a60[(a219 + -1)];
    	a350 = a377;
    	a357 = (a112 + -1);
    	a206 = 34 ;
    	a56 = 33 ;
    	a394 = a271;
    	a328 = a279[((a271 - a271) + 2)];
    	a282 = 34 ;
    	a219 = (a357 + -5);
    	a329 = (((((((a329 * a396) % 14999) + -20640) % 83) - -93) * 9) / 10);
    	a368 = a293;
    	a288 = a399;
    	a396 = ((((((a396 % 103) - -189) * 5) * 5) % 103) + 53); 
    	}else {
printf("POINT: 212\n");
    	a286 = ((((((a286 * a329) % 14999) % 80) - 58) - 6) - -51);
    	a125 = (((((((a340 * a396) % 14999) % 101) - -66) + 27428) * 1) + -27427);
    	a28 = a60[(a219 + 2)];
    	a227 = 32 ;
    	a315 = a295;
    	a219 = (a357 + -4);
    	a368 = a371;
    	a394 = ((a112 * a357) - 77);
    	a340 = (((((a286 * a286) - 10309) * 1) % 15) - -52);
    	a328 = a279[(a357 + -7)];
    	a268 = 32 ;
    	a288 = a270;
    	a350 = a366;
    	a329 = ((((((a286 * a286) + 10532) - -3796) + 6042) % 79) - 135);
    	a311 = a298[(a357 - 7)];
    	a223 = a343[(a271 / a357)];
    	a271 = (a357 - -3);
    	a170 = 33 ;
    	a357 = 9;
    	}printf("%d\n", 20);  
    } 
}
 void calculate_outputm1(int input) {
printf("POINT: 213\n");

    if((((a223 == a343[0] && ( cf==1  && a112 == 8)) && a311 == a298[0]) && (((19 == a288[5]) && (a331 == a380[0] && a357 == 8)) && a206 == 33))) {
printf("POINT: 214\n");
    	calculate_outputm50(input);
    } 
printf("POINT: 215\n");

    if(((a328 == a279[0] && a286 <=  -79) && (a357 == 8 && (a206 == 33 && ((32 == a315[3]) && (( cf==1  && a112 == 11) && a227 == 33)))))) {
printf("POINT: 216\n");
    	calculate_outputm51(input);
    } 
}
 void calculate_outputm54(int input) {
printf("POINT: 217\n");

    if(((a328 == a279[0] && a28 == a60[0]) && (a311 == a298[0] && (a286 <=  -79 && ((a282 == 33 && ((19 == a288[5]) && ((( cf==1  && a180 == a164[1]) && input == inputs[13]) && a15 == 33))) && a206 == 33))))) {
printf("POINT: 218\n");
    	a1 += (a1 + 20) > a1 ? 2 : 0;
printf("POINT: 220\n");
    	cf = 0;
printf("POINT: 221\n");

    	if(((a121 == 35 && a166 == a26[5]) || a166 == a26[4])) {
printf("POINT: 222\n");
    	a329 = ((((((a286 * a286) % 14999) / 5) % 79) - 144) - 3);
    	a328 = a279[(a219 + -2)];
    	a311 = a298[(a357 - 7)];
    	a28 = a60[(a219 - 2)];
    	a396 = (((((((a396 * a329) % 14999) + -8584) * 1) * 1) % 43) - 26);
    	a156 = (a219 - -4);
    	a223 = a343[(a219 - 2)];
    	a115 = a185[(a271 - 10)];
    	a350 = a366;
    	a282 = 32 ;
    	a340 = ((((((a396 * a286) % 14999) % 15) - -36) / 5) + 19);
    	a206 = 32 ;
    	a268 = 32 ;
    	a271 = (a357 - -3);
    	a227 = 32 ;
    	a288 = a270;
    	a331 = a380[(a394 - 9)];
    	a394 = ((a219 - a357) + 16);
    	a286 = ((((((a286 * a340) % 14999) % 80) + 3) + -1) - -2);
    	a219 = ((a357 / a357) - -3);
    	a368 = a371;
    	a357 = 9; 
    	}else {
printf("POINT: 224\n");
    	a28 = a60[(a219 - -4)];
    	a99 = (a219 + 5);
    	a93 = (a394 + 6);
    	}printf("%d\n", 23);  
    } 
printf("POINT: 225\n");

    if(((a311 == a298[0] && (((a340 <=  21 && input == inputs[7]) && a329 <=  -156) && a331 == a380[0])) && (a357 == 8 && ((((a15 == 33 &&  cf==1 ) && a28 == a60[0]) && a227 == 33) && a180 == a164[1])))) {
printf("POINT: 226\n");
    	cf = 0;
    	a67 = (((((a286 * a340) % 14999) + -14962) / 5) - 6040);
    	a93 = ((a394 - a271) - -15);
    	a28 = a60[(a394 - 3)]; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm2(int input) {
printf("POINT: 227\n");

    if((((a394 == 10 && a396 <=  -72) && a286 <=  -79) && (a227 == 33 && ((54 == a350[5]) && ((a15 == 33 &&  cf==1 ) && a331 == a380[0]))))) {
printf("POINT: 228\n");
    	calculate_outputm54(input);
    } 
}
 void calculate_outputm61(int input) {
printf("POINT: 229\n");

    if(((((a331 == a380[0] && a268 == 33) && a396 <=  -72) && a357 == 8) && (input == inputs[14] && ((((a180 == a164[3] && (239 < a97 &&  cf==1 )) && a328 == a279[0]) && (54 == a350[5])) && a28 == a60[0])))) {
printf("POINT: 230\n");
    	cf = 0;
    	a112 = ((a219 * a219) - 2);
    	a180 = a164[(a357 + -8)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 231\n");

    if((((a180 == a164[3] && ((a219 == 3 && ((a28 == a60[0] && (( cf==1  && input == inputs[8]) && 239 < a97)) && (19 == a288[5]))) && a206 == 33)) && a329 <=  -156) && (a396 <=  -72 && a311 == a298[0]))) {
printf("POINT: 232\n");
    	cf = 0;
    	a264 = a290[(a357 + -8)];
    	a32 = ((a394 * a357) + -63);
    	a28 = a60[((a394 / a271) + 3)];
    	a331 = a380[((a394 * a394) - 98)]; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm4(int input) {
printf("POINT: 233\n");

    if((((11 == a368[5]) && (a206 == 33 && (239 < a97 &&  cf==1 ))) && (a396 <=  -72 && (a286 <=  -79 && (a268 == 33 && a328 == a279[0]))))) {
printf("POINT: 234\n");
    	calculate_outputm61(input);
    } 
}
 void calculate_outputm62(int input) {
printf("POINT: 235\n");

    if((((a357 == 8 && (a180 == a164[4] && ((a93 == 9 && (input == inputs[7] && (a28 == a60[0] &&  cf==1 ))) && (54 == a350[5])))) && a206 == 33) && ((11 == a368[5]) && (a286 <=  -79 && a282 == 33)))) {
printf("POINT: 236\n");
    	a173 += (a173 + 20) > a173 ? 6 : 0;
printf("POINT: 238\n");
    	a45 -= (a45 - 20) < a45 ? 2 : 0;
printf("POINT: 240\n");
    	a58 -= (a58 - 20) < a58 ? 4 : 0;
printf("POINT: 242\n");
    	cf = 0;
    	a93 = ((a394 + a219) - 3); 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm63(int input) {
printf("POINT: 243\n");

    if(((19 == a288[5]) && (((((a340 <=  21 && (((a180 == a164[4] && ( cf==1  && a93 == 10)) && input == inputs[0]) && a28 == a60[0])) && a227 == 33) && a268 == 33) && a396 <=  -72) && a331 == a380[0]))) {
printf("POINT: 244\n");
    	cf = 0;
    	a28 = a60[(a93 + -6)];
    	a144 = 36 ;
    	a264 = a290[(a271 - 8)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 245\n");

    if(((a357 == 8 && ((19 == a288[5]) && (a394 == 10 && ((a28 == a60[0] && (a329 <=  -156 && (11 == a368[5]))) && a396 <=  -72)))) && ((( cf==1  && input == inputs[4]) && a93 == 10) && a180 == a164[4]))) {
printf("POINT: 246\n");
    	a39 += (a39 + 20) > a39 ? 6 : 0;
printf("POINT: 248\n");
    	cf = 0;
    	a351 = 32 ;
    	a286 = ((((((a286 * a329) % 14999) / 5) % 80) - 40) - 25);
    	a264 = a290[(a271 - 6)];
    	a28 = a60[(a394 + -6)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 249\n");

    if(((((32 == a315[3]) && (a329 <=  -156 && (a268 == 33 && a28 == a60[0]))) && (a206 == 33 && (a394 == 10 && ((54 == a350[5]) && (input == inputs[6] && (( cf==1  && a93 == 10) && a180 == a164[4])))))) && a173 == 10)) {
printf("POINT: 250\n");
    	cf = 0;
    	a264 = a290[((a271 * a219) - 25)];
    	a169 = ((((((a340 * a396) % 14999) % 86) - 74) + 2) - 1);
    	a28 = a60[(a93 + -6)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 251\n");

    if(((a271 == 10 && ((( cf==1  && input == inputs[12]) && a93 == 10) && (19 == a288[5]))) && ((a311 == a298[0] && (a329 <=  -156 && (a28 == a60[0] && (a180 == a164[4] && a227 == 33)))) && a268 == 33))) {
printf("POINT: 252\n");
    	cf = 0;
    	a56 = 34 ;
    	a223 = a343[(a271 - 8)];
    	a394 = (a357 + 4);
    	a311 = a298[((a394 - a357) + -2)];
    	a286 = (((((((a340 * a340) % 14999) * 2) + 3) * 1) % 103) - -187);
    	a396 = ((((((((a286 * a329) % 14999) % 103) - -120) * 5) * 5) % 103) - -58);
    	a111 = a195[((a271 + a219) + -7)];
    	a227 = 34 ;
    	a219 = (a271 - 5);
    	a206 = 34 ;
    	a350 = a377;
    	a282 = 34 ;
    	a28 = a60[(a93 + -8)];
    	a328 = a279[(a394 + -10)];
    	a329 = (((((((a329 * a396) % 14999) % 83) - -86) * 1) + -22502) + 22503);
    	a340 = ((((58 * 5) * 5) * 5) + -7121);
    	a288 = a399;
    	a315 = a273;
    	a368 = a293;
    	a331 = a380[((a93 / a93) + 1)];
    	a357 = (a394 + -2);
    	a268 = 34 ;
    	a271 = a394; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm65(int input) {
printf("POINT: 253\n");

    if(((a394 == 10 && ((54 == a350[5]) && ((input == inputs[5] && (a93 == 12 &&  cf==1 )) && a180 == a164[4]))) && (a396 <=  -72 && ((a28 == a60[0] && (a268 == 33 && a206 == 33)) && (19 == a288[5]))))) {
printf("POINT: 254\n");
    	cf = 0;
    	a180 = a164[((a271 * a394) + -98)];
    	a181 = a98; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 255\n");

    if((((input == inputs[7] && (a268 == 33 && (( cf==1  && a28 == a60[0]) && a180 == a164[4]))) && a396 <=  -72) && (((a328 == a279[0] && (a394 == 10 && a93 == 12)) && (54 == a350[5])) && a227 == 33))) {
printf("POINT: 256\n");
    	cf = 0;
printf("POINT: 257\n");

    	if((!(a328 == a279[7]) || a115 == a185[4])) {
printf("POINT: 258\n");
    	a112 = (a357 + 6);
    	a180 = a164[(a271 - 10)]; 
    	}else {
printf("POINT: 260\n");
    	a155 = (((((((a340 * a340) % 14999) + -13083) % 14893) + 15105) / 5) - -17397);
    	a28 = a60[(a219 + 3)];
    	a47 = (a93 - -1);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 261\n");

    if(((((32 == a315[3]) && (a28 == a60[0] && (input == inputs[1] && a328 == a279[0]))) && a311 == a298[0]) && (((a268 == 33 && (a180 == a164[4] && ( cf==1  && a93 == 12))) && a357 == 8) && a282 == 33))) {
printf("POINT: 262\n");
    	cf = 0;
printf("POINT: 263\n");

    	if((17 == a100[5])) {
printf("POINT: 264\n");
    	a368 = a397;
    	a28 = a60[(a357 - 7)];
    	a329 = (((a329 / 5) + -6444) + -11201);
    	a311 = a298[0];
    	a394 = 12;
    	a219 = 8;
    	a157 = a64[((a271 + a357) + -14)];
    	a396 = (((((a396 - 0) % 14964) + -72) * 10) / 9);
    	a286 = (((((a286 % 103) + 268) - 18593) + -509) + 19064);
    	a340 = (((a340 + 24882) / 5) - -8381);
    	a328 = a279[3];
    	a357 = 8;
    	a282 = 36 ;
    	a268 = 33 ;
    	a288 = a297;
    	a156 = (a271 - -2);
    	a227 = 35 ;
    	a350 = a377;
    	a206 = 33 ;
    	a331 = a380[4];
    	a315 = a321;
    	a271 = 16; 
    	}else {
printf("POINT: 266\n");
    	a47 = (a394 - -3);
    	a28 = a60[((a219 - a357) + 11)];
    	a155 = ((((((a340 * a329) % 14999) * 2) * 1) % 14893) - -15105);
    	}printf("%d\n", 18);  
    } 
printf("POINT: 267\n");

    if(((a93 == 12 && ((a311 == a298[0] && a331 == a380[0]) && (19 == a288[5]))) && ((((11 == a368[5]) && ((a180 == a164[4] && (input == inputs[11] &&  cf==1 )) && a340 <=  21)) && a271 == 10) && a28 == a60[0]))) {
printf("POINT: 268\n");
    	cf = 0;
    	a180 = a164[(a219 + -3)];
    	a112 = (a271 - 3); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 269\n");

    if((((32 == a315[3]) && (a357 == 8 && ((( cf==1  && a180 == a164[4]) && input == inputs[9]) && (11 == a368[5])))) && (a328 == a279[0] && (((a223 == a343[0] && a340 <=  21) && a28 == a60[0]) && a93 == 12)))) {
printf("POINT: 270\n");
    	cf = 0;
    	a125 = (((((a329 * a286) % 14999) - -12744) - 37520) + -2628);
    	a350 = a377;
    	a331 = a380[4];
    	a368 = a397;
    	a288 = a297;
    	a328 = a279[7];
    	a396 = (((((a396 % 14887) - -15111) * 1) / 5) - -19408);
    	a340 = ((((a340 * 1) % 37) + 92) + 1);
    	a206 = 36 ;
    	a268 = 35 ;
    	a315 = a273;
    	a329 = ((((a329 * 1) % 14914) - -15085) * 1);
    	a28 = a60[(a219 - -2)];
    	a357 = 11;
    	a80 = ((a219 / a219) + 10);
    	a271 = 10;
    	a394 = 16;
    	a227 = 36 ;
    	a311 = a298[4];
    	a282 = 36 ;
    	a223 = a343[3];
    	a219 = 7;
    	a286 = (((((a286 * 1) * 1) * 1) % 14854) + 15145); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 271\n");

    if(((a227 == 33 && (a28 == a60[0] && (a206 == 33 && (a286 <=  -79 && (( cf==1  && a180 == a164[4]) && input == inputs[6]))))) && ((((11 == a368[5]) && (54 == a350[5])) && a357 == 8) && a93 == 12))) {
printf("POINT: 272\n");
    	cf = 0;
printf("POINT: 273\n");

    	if((a161 == 2 && (115 == a188[4]))) {
printf("POINT: 274\n");
    	a223 = a343[7];
    	a28 = a60[((a219 * a394) + -28)];
    	a396 = (((((a396 * 1) / 5) / 5) % 43) - -10);
    	a227 = 35 ;
    	a311 = a298[7];
    	a286 = (((((((a286 % 14854) + 15145) * 10) / 9) / 5) * 46) / 10);
    	a331 = a380[7];
    	a282 = 33 ;
    	a268 = 33 ;
    	a56 = 35 ;
    	a340 = (((((a340 - 0) + 23179) - -994) % 15010) - 14988);
    	a368 = a397;
    	a288 = a297;
    	a271 = 16;
    	a329 = (((((a329 + 0) * 1) * 1) % 14914) + 15085);
    	a0 = a72;
    	a328 = a279[3];
    	a206 = 32 ;
    	a357 = 8;
    	a315 = a295;
    	a350 = a366;
    	a219 = 3;
    	a394 = 17; 
    	}else {
printf("POINT: 276\n");
    	a268 = 33 ;
    	a328 = a279[6];
    	a329 = ((((((a329 % 14914) - -15085) * 10) / 9) - 24073) + 36662);
    	a350 = a377;
    	a28 = a60[(a93 - 11)];
    	a368 = a293;
    	a206 = 34 ;
    	a331 = a380[0];
    	a115 = a185[(a271 - a394)];
    	a288 = a297;
    	a227 = 34 ;
    	a286 = (((((a286 % 14854) - -15145) + 507) * 10) / 9);
    	a340 = ((((a340 % 37) - -92) / 5) - -95);
    	a357 = 8;
    	a219 = 5;
    	a282 = 34 ;
    	a223 = a343[5];
    	a394 = 14;
    	a311 = a298[6];
    	a156 = ((a93 / a271) - -6);
    	a396 = ((((a396 % 14887) + 15111) * 1) + 4544);
    	a271 = 16;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 277\n");

    if(((a340 <=  21 && (a331 == a380[0] && (a180 == a164[4] && a329 <=  -156))) && ((((a206 == 33 && (( cf==1  && input == inputs[10]) && a28 == a60[0])) && a219 == 3) && a93 == 12) && (54 == a350[5])))) {
printf("POINT: 278\n");
    	cf = 0;
printf("POINT: 279\n");

    	if((!(a151 == 11) && ((a161 == 5 || !(a223 == 5)) && a328 == 5))) {
printf("POINT: 280\n");
    	a271 = 10;
    	a28 = a60[(a394 + -9)];
    	a350 = a336;
    	a206 = 33 ;
    	a311 = a298[7];
    	a219 = 5;
    	a282 = 35 ;
    	a156 = (a357 + 6);
    	a357 = 12;
    	a368 = a397;
    	a286 = ((((a286 % 14960) + -79) - 10710) * 1);
    	a315 = a273;
    	a396 = ((((a396 % 14964) + -72) * 1) + -5132);
    	a331 = a380[0];
    	a227 = 35 ;
    	a328 = a279[7];
    	a288 = a297;
    	a121 = 34 ;
    	a340 = ((((a340 * 1) % 15010) - 14988) + -2);
    	a223 = a343[0];
    	a268 = 35 ;
    	a329 = ((((a329 % 14914) - -15085) * 1) + 2479);
    	a394 = 12; 
    	}else {
printf("POINT: 282\n");
    	a93 = ((a271 + a394) - 10);
    	a340 = ((((a340 * 1) * 1) % 15010) - 14988);
    	a28 = a60[((a357 + a219) + -4)];
    	a267 = (a93 - 6);
    	}printf("%d\n", 20);  
    } 
printf("POINT: 283\n");

    if(((((a271 == 10 && a328 == a279[0]) && a340 <=  21) && a223 == a343[0]) && (a93 == 12 && ((19 == a288[5]) && (a180 == a164[4] && ((input == inputs[14] && (a28 == a60[0] &&  cf==1 )) && a331 == a380[0])))))) {
printf("POINT: 284\n");
    	cf = 0;
    	a93 = (a357 - -2); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 285\n");

    if(((((((a93 == 12 &&  cf==1 ) && input == inputs[8]) && a180 == a164[4]) && a28 == a60[0]) && a357 == 8) && ((a311 == a298[0] && ((54 == a350[5]) && (a271 == 10 && (11 == a368[5])))) && (19 == a288[5])))) {
printf("POINT: 286\n");
    	cf = 0;
    	a282 = 36 ;
    	a288 = a270;
    	a28 = a60[((a357 + a394) - 16)];
    	a227 = 35 ;
    	a396 = ((((a396 % 14887) - -15111) * 1) * 1);
    	a311 = a298[4];
    	a206 = 36 ;
    	a350 = a336;
    	a315 = a321;
    	a56 = 34 ;
    	a219 = 10;
    	a329 = ((((a329 % 79) + 1) - -20520) - 20518);
    	a357 = 11;
    	a111 = a195[((a394 - a271) - -6)];
    	a271 = 13;
    	a328 = a279[7];
    	a286 = ((((((a286 % 14960) + -79) * 10) / 9) + 9694) + -15649);
    	a268 = 32 ;
    	a223 = a343[7];
    	a340 = ((((a340 * 1) + 10639) % 15) + 36);
    	a368 = a397;
    	a331 = a380[0];
    	a394 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 287\n");

    if((((a268 == 33 && (a271 == 10 && (54 == a350[5]))) && a396 <=  -72) && (a394 == 10 && ((a180 == a164[4] && (((input == inputs[0] &&  cf==1 ) && a93 == 12) && a28 == a60[0])) && a357 == 8)))) {
printf("POINT: 288\n");
    	a173 += (a173 + 20) > a173 ? 1 : 0;
printf("POINT: 290\n");
    	cf = 0;
    	a32 = (a271 - -1);
    	a264 = a290[(a219 - 3)];
    	a368 = a293;
    	a329 = (((a329 + 0) / 5) - -6228);
    	a394 = 16;
    	a282 = 34 ;
    	a331 = a380[7];
    	a328 = a279[7];
    	a28 = a60[(a32 + -7)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 291\n");

    if(((a28 == a60[0] && (a394 == 10 && (a223 == a343[0] && (54 == a350[5])))) && ((((((a93 == 12 &&  cf==1 ) && a180 == a164[4]) && input == inputs[13]) && a286 <=  -79) && a329 <=  -156) && a357 == 8))) {
printf("POINT: 292\n");
    	cf = 0;
printf("POINT: 293\n");

    	if((!(a161 == 8) || ((!(a28 == 7) || a112 == 7) || !(a223 == a343[6])))) {
printf("POINT: 294\n");
    	a28 = a60[((a271 + a271) + -16)];
    	a143 = a176[(a93 + -10)];
    	a264 = a290[a219]; 
    	}else {
printf("POINT: 296\n");
    	a28 = a60[(a219 - -1)];
    	a132 = a91[(a357 + -5)];
    	a206 = 35 ;
    	a264 = a290[(a271 + -3)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 297\n");

    if((((a329 <=  -156 && (input == inputs[4] && (a28 == a60[0] && (a180 == a164[4] &&  cf==1 )))) && a219 == 3) && (a227 == 33 && (a357 == 8 && (a93 == 12 && (a271 == 10 && a328 == a279[0])))))) {
printf("POINT: 298\n");
    	cf = 0;
    	a154 = ((a219 / a271) - -12);
    	a328 = a279[5];
    	a219 = 8;
    	a125 = (((((a329 * a396) % 14999) - -14240) - -339) - -62);
    	a223 = a343[7];
    	a268 = 33 ;
    	a271 = 17;
    	a206 = 35 ;
    	a340 = ((((a340 % 14935) + 15064) / 5) + 1691);
    	a286 = ((((a286 % 14960) + -79) * 1) * 1);
    	a28 = a60[((a154 - a357) - -1)];
    	a394 = 12;
    	a396 = (((((a396 % 14887) + 15111) * 10) / 9) * 1);
    	a368 = a293;
    	a311 = a298[6];
    	a357 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 299\n");

    if(((((a340 <=  21 && a329 <=  -156) && a268 == 33) && (32 == a315[3])) && ((a227 == 33 && ((input == inputs[2] && (a28 == a60[0] && ( cf==1  && a93 == 12))) && a180 == a164[4])) && a271 == 10))) {
printf("POINT: 300\n");
    	cf = 0;
printf("POINT: 301\n");

    	if(((a141 <=  -53 || a130 == a29[2]) && a32 == 11)) {
printf("POINT: 302\n");
    	a286 = ((((((a286 % 103) - -208) * 5) * 5) % 103) - -178);
    	a368 = a293;
    	a350 = a377;
    	a268 = 34 ;
    	a357 = 8;
    	a28 = a60[(a219 + -2)];
    	a329 = ((((a329 % 14914) - -15085) + 4216) * 1);
    	a328 = a279[4];
    	a315 = a321;
    	a311 = a298[3];
    	a331 = a380[4];
    	a157 = a64[(a271 + -6)];
    	a394 = 14;
    	a288 = a399;
    	a227 = 33 ;
    	a282 = 34 ;
    	a396 = ((((a396 % 14964) - 72) - 10075) + -4320);
    	a206 = 36 ;
    	a219 = 6;
    	a156 = a93;
    	a340 = (((((a340 / 5) * 5) / 5) % 37) - -92);
    	a271 = 15; 
    	}else {
printf("POINT: 304\n");
    	a28 = a60[(a357 - 7)];
    	a156 = ((a394 * a93) + -110);
    	a86 = a219;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 305\n");

    if((((a180 == a164[4] && (a93 == 12 && ((a28 == a60[0] &&  cf==1 ) && input == inputs[12]))) && (32 == a315[3])) && ((a394 == 10 && (a396 <=  -72 && (a286 <=  -79 && a329 <=  -156))) && a282 == 33))) {
printf("POINT: 306\n");
    	cf = 0;
    	a154 = (a93 + -2);
    	a28 = a60[(a154 - 5)];
    	a125 = ((((((a329 * a396) % 14999) + -19056) * 10) / -9) - -6989); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 307\n");

    if(((a286 <=  -79 && (a331 == a380[0] && (((a180 == a164[4] &&  cf==1 ) && a93 == 12) && input == inputs[3]))) && (a223 == a343[0] && (((a340 <=  21 && a396 <=  -72) && a28 == a60[0]) && a328 == a279[0])))) {
printf("POINT: 308\n");
    	cf = 0;
    	a180 = a164[((a357 - a357) + 6)];
    	a182 = a59[(a271 - 7)]; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm66(int input) {
printf("POINT: 309\n");

    if(((a93 == 13 && (((input == inputs[7] &&  cf==1 ) && a180 == a164[4]) && a394 == 10)) && ((54 == a350[5]) && (((a396 <=  -72 && (a28 == a60[0] && a227 == 33)) && a223 == a343[0]) && a206 == 33)))) {
printf("POINT: 310\n");
    	cf = 0;
    	 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 311\n");

    if(((a282 == 33 && (a180 == a164[4] && (a93 == 13 && (((a329 <=  -156 && a223 == a343[0]) && a328 == a279[0]) && a311 == a298[0])))) && ((( cf==1  && a28 == a60[0]) && input == inputs[3]) && a206 == 33))) {
printf("POINT: 312\n");
    	cf = 0;
    	a156 = (a93 + -1);
    	a286 = (((((((a286 * a329) % 14999) + 13308) + -31281) / 5) % 80) - -52);
    	a157 = a64[(a156 - a271)];
    	a340 = ((((((((a340 * a396) % 14999) % 15) - -38) + -2) * 5) % 15) + 30);
    	a329 = (((((((a396 * a396) % 14999) + 4365) / 5) * 5) % 79) + -90);
    	a311 = a298[(a156 / a357)];
    	a328 = a279[(a357 - 8)];
    	a28 = a60[(a156 - 11)];
    	a394 = ((a219 / a219) - -10);
    	a227 = 32 ;
    	a282 = 32 ;
    	a331 = a380[(a156 - 11)]; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm5(int input) {
printf("POINT: 313\n");

    if((((a329 <=  -156 && ((a223 == a343[0] && (a93 == 9 &&  cf==1 )) && a227 == 33)) && a268 == 33) && (a396 <=  -72 && a271 == 10))) {
printf("POINT: 314\n");
    	calculate_outputm62(input);
    } 
printf("POINT: 315\n");

    if((((a268 == 33 && (a329 <=  -156 && (a396 <=  -72 && (11 == a368[5])))) && a282 == 33) && ((32 == a315[3]) && ( cf==1  && a93 == 10)))) {
printf("POINT: 316\n");
    	calculate_outputm63(input);
    } 
printf("POINT: 317\n");

    if(((11 == a368[5]) && (((19 == a288[5]) && (a329 <=  -156 && ((( cf==1  && a93 == 12) && a227 == 33) && a311 == a298[0]))) && a331 == a380[0]))) {
printf("POINT: 318\n");
    	calculate_outputm65(input);
    } 
printf("POINT: 319\n");

    if(((a311 == a298[0] && a227 == 33) && ((a340 <=  21 && (a396 <=  -72 && (a331 == a380[0] && ( cf==1  && a93 == 13)))) && a394 == 10))) {
printf("POINT: 320\n");
    	calculate_outputm66(input);
    } 
}
 void calculate_outputm68(int input) {
printf("POINT: 321\n");

    if((((a271 == 10 && (a286 <=  -79 && input == inputs[9])) && a182 == a59[0]) && ((a282 == 33 && (a357 == 8 && ((( cf==1  && a180 == a164[6]) && a28 == a60[0]) && a223 == a343[0]))) && (54 == a350[5])))) {
printf("POINT: 322\n");
    	cf = 0;
    	a28 = a60[((a394 / a357) + 6)];
    	a286 = ((((((a286 * a340) % 14999) % 80) + 1) / 5) / 5);
    	a93 = a394;
    	a267 = (a271 + -7); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 323\n");

    if(((a328 == a279[0] && (a311 == a298[0] && (a396 <=  -72 && ((( cf==1  && a182 == a59[0]) && a28 == a60[0]) && a180 == a164[6])))) && (a271 == 10 && ((a329 <=  -156 && input == inputs[7]) && a206 == 33)))) {
printf("POINT: 324\n");
    	cf = 0;
    	a368 = a371;
    	a227 = 32 ;
    	a329 = (((((((a396 * a396) % 14999) + 9706) * 1) + -33272) % 79) + -36);
    	a396 = ((((((((a396 * a329) % 14999) % 43) + -26) - 2) * 5) % 43) - 27);
    	a28 = a60[(a271 - 7)];
    	a206 = 32 ;
    	a328 = a279[(a394 - 9)];
    	a286 = ((((((a286 * a329) % 14999) - -8004) / 5) % 80) + 2);
    	a350 = a366;
    	a340 = (((((a329 * a329) % 15) - -36) + 0) * 1);
    	a20 = 34 ;
    	a357 = (a394 + -1);
    	a282 = 32 ;
    	a223 = a343[(a394 - 9)];
    	a311 = a298[(a394 + -9)];
    	a268 = 32 ;
    	a271 = (a394 - -1);
    	a188 = a105;
    	a288 = a270;
    	a219 = (a394 + -6);
    	a315 = a295;
    	a331 = a380[(a394 + -9)];
    	a394 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 325\n");

    if((((54 == a350[5]) && (((a182 == a59[0] && (11 == a368[5])) && input == inputs[0]) && a286 <=  -79)) && ((a271 == 10 && ((a28 == a60[0] && ( cf==1  && a180 == a164[6])) && a394 == 10)) && a396 <=  -72))) {
printf("POINT: 326\n");
    	cf = 0;
    	a350 = a366;
    	a340 = (((((39 * 5) + -143) / 5) * 39) / 10);
    	a286 = ((((((a340 * a340) + 14721) - 14780) * 5) % 80) + -37);
    	a268 = 32 ;
    	a329 = ((((((a286 * a286) + -1211) - -7018) + -11282) % 79) - 75);
    	a396 = ((((((a396 * a329) % 14999) * 2) % 43) - 28) - -2);
    	a288 = a270;
    	a357 = ((a394 * a394) - 91);
    	a223 = a343[(a394 - 9)];
    	a156 = (a271 + 1);
    	a328 = a279[((a394 * a394) + -99)];
    	a331 = a380[(a394 - 9)];
    	a315 = a295;
    	a219 = ((a394 * a394) - 96);
    	a227 = 32 ;
    	a368 = a371;
    	a271 = ((a394 + a394) + -9);
    	a282 = 32 ;
    	a28 = a60[(a394 - 9)];
    	a311 = a298[(a394 - 9)];
    	a86 = (a156 - 7);
    	a394 = 11; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm72(int input) {
printf("POINT: 327\n");

    if(((a340 <=  21 && (a329 <=  -156 && (a396 <=  -72 && (a331 == a380[0] && input == inputs[3])))) && (((a182 == a59[6] && (a28 == a60[0] && ( cf==1  && a180 == a164[6]))) && a227 == 33) && a286 <=  -79))) {
printf("POINT: 328\n");
    	cf = 0;
    	a93 = (a271 + 1);
    	a180 = a164[((a394 / a357) + 3)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 329\n");

    if(((a328 == a279[0] && (((a28 == a60[0] && ((input == inputs[10] && ( cf==1  && a182 == a59[6])) && a180 == a164[6])) && a357 == 8) && a396 <=  -72)) && ((a331 == a380[0] && a206 == 33) && a394 == 10))) {
printf("POINT: 330\n");
    	cf = 0;
    	a32 = ((a219 * a219) + 8);
    	a331 = a380[((a32 * a357) - 134)];
    	a264 = a290[(a357 - 8)];
    	a28 = a60[((a357 - a32) + 13)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 331\n");

    if(((((32 == a315[3]) && (( cf==1  && a182 == a59[6]) && a28 == a60[0])) && input == inputs[1]) && (a268 == 33 && ((19 == a288[5]) && (((a329 <=  -156 && a180 == a164[6]) && (11 == a368[5])) && a396 <=  -72))))) {
printf("POINT: 332\n");
    	cf = 0;
    	a264 = a290[(a357 - 8)];
    	a32 = (a394 - -7);
    	a28 = a60[((a394 + a32) - 23)];
    	a331 = a380[(a357 - 6)]; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm7(int input) {
printf("POINT: 333\n");

    if((((32 == a315[3]) && (a219 == 3 && ((a182 == a59[0] &&  cf==1 ) && a396 <=  -72))) && ((a357 == 8 && a268 == 33) && a227 == 33))) {
printf("POINT: 334\n");
    	calculate_outputm68(input);
    } 
printf("POINT: 335\n");

    if((((11 == a368[5]) && (19 == a288[5])) && (((a331 == a380[0] && (a329 <=  -156 && (a182 == a59[6] &&  cf==1 ))) && a357 == 8) && a394 == 10))) {
printf("POINT: 336\n");
    	calculate_outputm72(input);
    } 
}
 void calculate_outputm74(int input) {
printf("POINT: 337\n");

    if(((((a163 <=  191 && (a331 == a380[0] && (a268 == 33 && a180 == a164[7]))) && (54 == a350[5])) && a206 == 33) && ((32 == a315[3]) && (a396 <=  -72 && ((a28 == a60[0] &&  cf==1 ) && input == inputs[3]))))) {
printf("POINT: 338\n");
    	cf = 0;
    	a267 = ((a394 * a357) + -70);
    	a28 = a60[((a357 / a357) - -6)];
    	a93 = a271; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 339\n");

    if((((((a311 == a298[0] && a227 == 33) && input == inputs[2]) && a28 == a60[0]) && a329 <=  -156) && (a268 == 33 && (a206 == 33 && (a271 == 10 && (a180 == a164[7] && (a163 <=  191 &&  cf==1 ))))))) {
printf("POINT: 340\n");
    	cf = 0;
    	a223 = a343[2];
    	a227 = 36 ;
    	a115 = a185[((a271 - a219) + -1)];
    	a340 = ((((a340 % 15010) - 14988) - 3) + 0);
    	a315 = a321;
    	a282 = 36 ;
    	a368 = a293;
    	a329 = (((((a329 % 83) - -153) * 5) % 83) - -36);
    	a28 = a60[(a357 - 7)];
    	a156 = (a219 - -4);
    	a328 = a279[5];
    	a357 = 11;
    	a288 = a297;
    	a286 = (((((a286 % 14960) - 79) / 5) * 53) / 10);
    	a350 = a336;
    	a206 = 34 ;
    	a331 = a380[3];
    	a311 = a298[2];
    	a271 = 17;
    	a394 = 10;
    	a396 = (((a396 / 5) / 5) + -5109);
    	a268 = 35 ;
    	a219 = 5; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 341\n");

    if((((a28 == a60[0] && ((a396 <=  -72 && a219 == 3) && a180 == a164[7])) && a227 == 33) && (a282 == 33 && (a286 <=  -79 && (a394 == 10 && ((input == inputs[1] &&  cf==1 ) && a163 <=  191)))))) {
printf("POINT: 342\n");
    	cf = 0;
printf("POINT: 343\n");

    	if(((3 < a329) && (171 >= a329))) {
printf("POINT: 344\n");
    	a28 = a60[((a219 / a357) - -6)];
    	a155 = (((((a329 * a329) % 14999) - -13114) - 18098) + 16012);
    	a47 = (a271 - -3); 
    	}else {
printf("POINT: 346\n");
    	a163 = ((((((((a163 * a286) % 14999) / 5) % 44) - -235) * 5) % 44) + 214);
    	}printf("%d\n", 23);  
    } 
printf("POINT: 347\n");

    if(((((a357 == 8 && ((a311 == a298[0] && a180 == a164[7]) && a163 <=  191)) && a282 == 33) && a328 == a279[0]) && (((( cf==1  && input == inputs[9]) && a28 == a60[0]) && a219 == 3) && a329 <=  -156))) {
printf("POINT: 348\n");
    	cf = 0;
    	a115 = a185[(a357 - 6)];
    	a28 = a60[(a219 - 2)];
    	a156 = (a219 - -4); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 349\n");

    if(((a180 == a164[7] && ((((( cf==1  && a28 == a60[0]) && a163 <=  191) && a206 == 33) && a394 == 10) && a282 == 33)) && (((54 == a350[5]) && (a219 == 3 && a271 == 10)) && input == inputs[8]))) {
printf("POINT: 350\n");
    	cf = 0;
    	a263 = 35 ;
    	a93 = (a271 + 3);
    	a28 = a60[(a357 - 1)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 351\n");

    if((((32 == a315[3]) && (a227 == 33 && (a271 == 10 && ((input == inputs[6] &&  cf==1 ) && a180 == a164[7])))) && (a268 == 33 && (a311 == a298[0] && (a28 == a60[0] && (a163 <=  191 && a340 <=  21)))))) {
printf("POINT: 352\n");
    	cf = 0;
    	a93 = ((a394 / a219) + 7);
    	a28 = a60[((a357 - a93) - -9)];
    	a267 = a394; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 353\n");

    if(((a268 == 33 && (a223 == a343[0] && (a219 == 3 && (a282 == 33 && a28 == a60[0])))) && ((((11 == a368[5]) && ((input == inputs[7] &&  cf==1 ) && a163 <=  191)) && a180 == a164[7]) && a206 == 33))) {
printf("POINT: 354\n");
    	cf = 0;
    	a28 = a60[((a271 - a357) - 1)];
    	a156 = (a219 - -8);
    	a86 = (a156 - 4); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 355\n");

    if(((a268 == 33 && (((54 == a350[5]) && a163 <=  191) && input == inputs[5])) && (((a396 <=  -72 && (a219 == 3 && (a180 == a164[7] && (a28 == a60[0] &&  cf==1 )))) && a331 == a380[0]) && a357 == 8))) {
printf("POINT: 356\n");
    	cf = 0;
    	a28 = a60[(a271 - 3)];
    	a340 = ((((a340 % 14935) + 15064) * 1) * 1);
    	a93 = (a357 + 2);
    	a267 = (a357 + -4); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 357\n");

    if(((input == inputs[11] && (((11 == a368[5]) && ((32 == a315[3]) && a282 == 33)) && a206 == 33)) && ((a180 == a164[7] && ((( cf==1  && a28 == a60[0]) && a163 <=  191) && a329 <=  -156)) && a394 == 10))) {
printf("POINT: 358\n");
    	cf = 0;
    	a97 = ((((((a340 * a163) % 14999) + 6401) % 14956) + -15043) + -1);
    	a180 = a164[((a357 * a219) - 21)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 359\n");

    if(((a331 == a380[0] && ((a206 == 33 && ((11 == a368[5]) && (a340 <=  21 && (input == inputs[14] && (a180 == a164[7] &&  cf==1 ))))) && a163 <=  191)) && (a28 == a60[0] && (a286 <=  -79 && a268 == 33)))) {
printf("POINT: 360\n");
    	cf = 0;
printf("POINT: 361\n");

    	if(((a206 == 32 && a264 == a290[4]) && !(a180 == 2))) {
printf("POINT: 362\n");
    	a340 = ((((a340 % 14935) - -15064) * 1) + 0);
    	a268 = 36 ;
    	a28 = a60[((a271 - a271) + 1)];
    	a288 = a399;
    	a311 = a298[4];
    	a331 = a380[7];
    	a328 = a279[2];
    	a357 = 13;
    	a350 = a377;
    	a282 = 33 ;
    	a156 = (a394 - 3);
    	a329 = ((((a329 % 83) + 96) - -63) / 5);
    	a271 = 12;
    	a206 = 36 ;
    	a368 = a397;
    	a394 = 16;
    	a219 = 9;
    	a286 = (((((a286 % 103) - -274) * 5) % 103) + 98);
    	a396 = ((((a396 * 1) - 0) / 5) - 16681);
    	a315 = a321;
    	a227 = 35 ;
    	a115 = a185[(a156 - 4)]; 
    	}else {
printf("POINT: 364\n");
    	a28 = a60[((a219 + a219) - 1)];
    	a288 = a297;
    	a154 = ((a394 / a357) + 10);
    	a268 = 36 ;
    	a396 = (((((a396 / 5) % 103) - -209) * 9) / 10);
    	a227 = 35 ;
    	a206 = 36 ;
    	a271 = 13;
    	a331 = a380[4];
    	a223 = a343[3];
    	a394 = 12;
    	a125 = (((((((a286 * a163) % 14999) % 14894) + 15104) + 1) / 5) + 1665);
    	a328 = a279[0];
    	a219 = 8;
    	a311 = a298[6];
    	a340 = (((a340 / 5) + -10059) + -12011);
    	a282 = 35 ;
    	a350 = a377;
    	a368 = a397;
    	a286 = ((((a286 % 103) + 213) / 5) + 148);
    	a315 = a273;
    	a329 = (((((a329 % 83) - -149) / 5) + -27457) + 27498);
    	a357 = 12;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 365\n");

    if((((a286 <=  -79 && a282 == 33) && a223 == a343[0]) && ((a357 == 8 && (a340 <=  21 && ((((a28 == a60[0] &&  cf==1 ) && input == inputs[12]) && a163 <=  191) && a180 == a164[7]))) && (19 == a288[5])))) {
printf("POINT: 366\n");
    	cf = 0;
    	a28 = a60[(a394 - 9)];
    	a156 = (a357 - -3);
    	a86 = (a156 - 4); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 367\n");

    if(((a286 <=  -79 && ((a219 == 3 && ((a163 <=  191 && (input == inputs[4] && ( cf==1  && a28 == a60[0]))) && a180 == a164[7])) && a271 == 10)) && (a340 <=  21 && (a357 == 8 && (54 == a350[5]))))) {
printf("POINT: 368\n");
    	cf = 0;
printf("POINT: 369\n");

    	if(a331 == a380[0]) {
printf("POINT: 370\n");
    	a328 = a279[2];
    	a350 = a336;
    	a288 = a399;
    	a315 = a273;
    	a282 = 33 ;
    	a223 = a343[7];
    	a311 = a298[6];
    	a156 = a357;
    	a396 = ((((a396 % 14964) - 72) - 7038) / 5);
    	a206 = 35 ;
    	a357 = 15;
    	a394 = 12;
    	a28 = a60[(a271 + -9)];
    	a219 = 10;
    	a227 = 34 ;
    	a331 = a380[0];
    	a286 = ((((a286 % 14854) - -15145) * 1) * 1);
    	a268 = 36 ;
    	a141 = ((((((a329 * a329) % 14999) - -7112) + -18893) / 5) + 25150);
    	a271 = 10;
    	a368 = a293;
    	a340 = ((((a340 % 14935) + 15064) * 1) + 0);
    	a329 = ((((((a329 * 1) % 83) + 159) * 5) % 83) - -16); 
    	}else {
printf("POINT: 372\n");
    	a180 = a164[((a219 - a219) - -6)];
    	a182 = a59[((a357 + a219) - 7)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 373\n");

    if(((a163 <=  191 && ((11 == a368[5]) && ((a268 == 33 && a286 <=  -79) && a227 == 33))) && (input == inputs[0] && ((a206 == 33 && ((a180 == a164[7] &&  cf==1 ) && a28 == a60[0])) && a394 == 10)))) {
printf("POINT: 374\n");
    	cf = 0;
    	a99 = ((a394 + a219) + -2);
    	a93 = (a99 + 5);
    	a28 = a60[(a219 - -4)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 375\n");

    if(((((((( cf==1  && input == inputs[10]) && a163 <=  191) && (11 == a368[5])) && (32 == a315[3])) && a271 == 10) && a180 == a164[7]) && ((54 == a350[5]) && ((a223 == a343[0] && a28 == a60[0]) && a329 <=  -156)))) {
printf("POINT: 376\n");
    	cf = 0;
    	a182 = a59[(a271 - 8)];
    	a180 = a164[(a271 - 4)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 377\n");

    if((a282 == 33 && (a180 == a164[7] && (a268 == 33 && ((((32 == a315[3]) && (a394 == 10 && ((a163 <=  191 && (a28 == a60[0] &&  cf==1 )) && input == inputs[13]))) && a223 == a343[0]) && a271 == 10))))) {
printf("POINT: 378\n");
    	cf = 0;
    	a264 = a290[(a271 + -6)];
    	a351 = 35 ;
    	a28 = a60[(a219 - -1)]; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm76(int input) {
printf("POINT: 379\n");

    if((((32 == a315[3]) && (input == inputs[10] && ((a28 == a60[0] && (a180 == a164[7] &&  cf==1 )) && a357 == 8))) && (((280 < a163) && (314 >= a163)) && (a328 == a279[0] && (a394 == 10 && (a268 == 33 && a311 == a298[0])))))) {
printf("POINT: 380\n");
    	cf = 0;
printf("POINT: 381\n");

    	if((((48 < a67) && (76 >= a67)) || (a143 == a176[7] || (57 == a350[2])))) {
printf("POINT: 382\n");
    	a143 = a176[(a394 + -10)];
    	a264 = a290[(a394 - 7)];
    	a28 = a60[(a219 + 1)]; 
    	}else {
printf("POINT: 384\n");
    	a156 = (a219 - -5);
    	a141 = (((((((a396 * a396) % 14999) % 29) - -53) * 10) / 9) - -1);
    	a28 = a60[(a357 - 7)];
    	}printf("%d\n", 19);  
    } 
printf("POINT: 385\n");

    if((((a340 <=  21 && (( cf==1  && ((280 < a163) && (314 >= a163))) && input == inputs[5])) && (11 == a368[5])) && (((a282 == 33 && ((a180 == a164[7] && a206 == 33) && a28 == a60[0])) && a227 == 33) && a396 <=  -72))) {
printf("POINT: 386\n");
    	cf = 0;
printf("POINT: 387\n");

    	if((a111 == 6 && a154 == 11)) {
printf("POINT: 388\n");
    	a155 = (((((((a329 * a396) % 14999) - -2098) % 16) + 75) - 5679) - -5680);
    	a75 = 33 ;
    	a28 = a60[(a357 - 2)]; 
    	}else {
printf("POINT: 390\n");
    	a264 = a290[(a357 + -2)];
    	a28 = a60[(a271 - 6)];
    	a90 = a24;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 391\n");

    if((((a219 == 3 && (a28 == a60[0] && (a331 == a380[0] && ((280 < a163) && (314 >= a163))))) && a396 <=  -72) && (a271 == 10 && ((a286 <=  -79 && (( cf==1  && a180 == a164[7]) && input == inputs[8])) && a282 == 33)))) {
printf("POINT: 392\n");
    	cf = 0;
printf("POINT: 393\n");

    	if(a311 == 4) {
printf("POINT: 394\n");
    	a93 = ((a219 - a357) + 14);
    	a33 = a198;
    	a28 = a60[(a93 + -2)]; 
    	}else {
printf("POINT: 396\n");
    	a328 = a279[5];
    	a357 = 15;
    	a331 = a380[5];
    	a311 = a298[0];
    	a340 = ((((a340 * 1) % 14935) + 15064) * 1);
    	a329 = ((((a329 / 5) + 2994) / 5) + 19885);
    	a282 = 36 ;
    	a268 = 33 ;
    	a286 = (((((a286 % 14960) - 79) * 1) - -2237) + -7581);
    	a28 = a60[(a271 - 9)];
    	a227 = 33 ;
    	a157 = a64[((a394 - a394) - -2)];
    	a156 = (a394 - -2);
    	a394 = 12;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 397\n");

    if(((a271 == 10 && (a227 == 33 && (((280 < a163) && (314 >= a163)) && ((32 == a315[3]) && (a206 == 33 && (a328 == a279[0] && a268 == 33)))))) && ((( cf==1  && a180 == a164[7]) && a28 == a60[0]) && input == inputs[0]))) {
printf("POINT: 398\n");
    	cf = 0;
printf("POINT: 399\n");

    	if((!(54 == a350[5]) || (((!(a331 == a380[3]) || a86 == 3) && !(a99 == 14)) || !(a75 == 33)))) {
printf("POINT: 400\n");
    	a271 = 17;
    	a206 = 35 ;
    	a396 = ((((a396 % 14887) + 15111) + -9677) + 18896);
    	a28 = a60[(a357 + -6)];
    	a311 = a298[5];
    	a350 = a336;
    	a227 = 33 ;
    	a161 = (a394 - 6);
    	a268 = 33 ;
    	a288 = a297;
    	a329 = ((((a329 / 5) - 19562) * -1) / 10);
    	a282 = 32 ;
    	a286 = (((((a286 - 0) % 80) - -54) - 5849) + 5806);
    	a219 = 6;
    	a357 = 13;
    	a328 = a279[6];
    	a331 = a380[3];
    	a223 = a343[3];
    	a315 = a295;
    	a56 = 32 ;
    	a394 = 17; 
    	}else {
printf("POINT: 402\n");
    	a115 = a185[(a357 - 8)];
    	a206 = 34 ;
    	a28 = a60[((a357 + a394) + -17)];
    	a268 = 34 ;
    	a227 = 35 ;
    	a156 = (a271 + -3);
    	a329 = (((a329 / 5) + 19835) / 5);
    	a286 = ((((a286 % 14960) - 79) * 1) * 1);
    	a223 = a343[7];
    	a340 = ((((a340 / 5) + 690) % 37) - -90);
    	a282 = 34 ;
    	a350 = a377;
    	a396 = (((((a396 % 14887) + 15111) * 1) * 10) / 9);
    	a394 = 13;
    	a288 = a297;
    	a331 = a380[2];
    	a219 = 7;
    	a311 = a298[6];
    	a328 = a279[3];
    	a357 = 10;
    	a368 = a293;
    	a271 = 16;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 403\n");

    if((((a311 == a298[0] && (a180 == a164[7] && ((a282 == 33 && a223 == a343[0]) && input == inputs[2]))) && a268 == 33) && ((a340 <=  21 && (( cf==1  && a28 == a60[0]) && ((280 < a163) && (314 >= a163)))) && (32 == a315[3])))) {
printf("POINT: 404\n");
    	cf = 0;
    	a156 = (a357 - 1);
    	a28 = a60[(a357 + -7)];
    	a115 = a185[(a156 - 5)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 405\n");

    if(((a331 == a380[0] && a311 == a298[0]) && (a282 == 33 && ((11 == a368[5]) && ((input == inputs[4] && (a219 == 3 && (((((280 < a163) && (314 >= a163)) &&  cf==1 ) && a180 == a164[7]) && a28 == a60[0]))) && a340 <=  21))))) {
printf("POINT: 406\n");
    	cf = 0;
    	a206 = 35 ;
    	a125 = ((((((a396 * a396) % 14999) - 23146) % 101) + 156) - -5);
    	a311 = a298[5];
    	a28 = a60[((a357 * a394) + -75)];
    	a368 = a293;
    	a282 = 36 ;
    	a328 = a279[7];
    	a271 = 15;
    	a219 = 8;
    	a350 = a377;
    	a286 = ((((a286 % 103) - -270) / 5) + 99);
    	a315 = a273;
    	a329 = (((((a329 % 14914) + 15085) * 1) * 10) / 9);
    	a288 = a297;
    	a394 = 16;
    	a331 = a380[6];
    	a357 = 10;
    	a170 = 34 ;
    	a227 = 34 ;
    	a268 = 34 ;
    	a340 = ((((a340 / 5) + -6754) + 26796) - 38296);
    	a223 = a343[5];
    	a396 = ((((a396 + 30066) / 5) % 103) - -19); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 407\n");

    if(((a271 == 10 && ((a223 == a343[0] && ((input == inputs[6] && (((280 < a163) && (314 >= a163)) && ( cf==1  && a28 == a60[0]))) && (54 == a350[5]))) && a331 == a380[0])) && ((a286 <=  -79 && (32 == a315[3])) && a180 == a164[7]))) {
printf("POINT: 408\n");
    	cf = 0;
printf("POINT: 409\n");

    	if(((a263 == 33 || a331 == a380[0]) || a115 == a185[7])) {
printf("POINT: 410\n");
    	a28 = a60[(a271 + -6)];
    	a351 = 36 ;
    	a264 = a290[(a394 - 6)]; 
    	}else {
printf("POINT: 412\n");
    	a143 = a176[(a357 - 4)];
    	a264 = a290[((a394 / a357) + 2)];
    	a28 = a60[(a271 + -6)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 413\n");

    if(((a227 == 33 && (a282 == 33 && ((32 == a315[3]) && (a394 == 10 && a206 == 33)))) && (((280 < a163) && (314 >= a163)) && ((((a180 == a164[7] &&  cf==1 ) && input == inputs[3]) && a271 == 10) && a28 == a60[0])))) {
printf("POINT: 414\n");
    	cf = 0;
    	a75 = 33 ;
    	a28 = a60[(a219 + 3)];
    	a155 = (((((((a329 * a286) % 14999) / 5) % 16) - -87) - -11324) + -11325); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 415\n");

    if((((((((280 < a163) && (314 >= a163)) && ((a180 == a164[7] && (input == inputs[1] &&  cf==1 )) && a329 <=  -156)) && a28 == a60[0]) && a311 == a298[0]) && (32 == a315[3])) && ((54 == a350[5]) && (a282 == 33 && a394 == 10)))) {
printf("POINT: 416\n");
    	cf = 0;
printf("POINT: 417\n");

    	if(( cf!=1  && (a267 == 4 || (15 == a368[3])))) {
printf("POINT: 418\n");
    	a311 = a298[5];
    	a28 = a60[a219];
    	a282 = 34 ;
    	a315 = a321;
    	a268 = 36 ;
    	a20 = 34 ;
    	a350 = a377;
    	a223 = a343[2];
    	a329 = (((((a329 - -5759) % 14922) + -15077) - -22387) - 22387);
    	a288 = a399;
    	a368 = a397;
    	a219 = 3;
    	a328 = a279[2];
    	a340 = (((((a340 % 37) - -91) + -21112) * 1) + 21112);
    	a286 = ((((a286 * 1) * 1) % 14854) + 15145);
    	a206 = 33 ;
    	a271 = 17;
    	a357 = 11;
    	a227 = 34 ;
    	a394 = 15;
    	a331 = a380[3];
    	a396 = ((((a396 % 14887) + 15111) * 1) - -11600);
    	a188 = a105; 
    	}else {
printf("POINT: 420\n");
    	a271 = 17;
    	a56 = 36 ;
    	a155 = (((((((a340 * a340) % 14999) * 2) / 5) / 5) % 54) + 158);
    	a282 = 35 ;
    	a268 = 33 ;
    	a329 = ((((a329 % 14914) + 15085) - -6737) - -3679);
    	a219 = 10;
    	a206 = 35 ;
    	a286 = ((((((a286 % 14960) + -79) - 6571) + 29708) * -1) / 10);
    	a227 = 35 ;
    	a331 = a380[2];
    	a315 = a321;
    	a368 = a397;
    	a396 = (((((a396 % 103) - -192) + -19) - 13096) + 13140);
    	a394 = 17;
    	a28 = a60[(a357 - 2)];
    	a350 = a377;
    	a340 = ((((a340 % 14935) + 15064) - 0) + 0);
    	a328 = a279[0];
    	a223 = a343[0];
    	a311 = a298[6];
    	a288 = a399;
    	a357 = 15;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 421\n");

    if(((a286 <=  -79 && (((a394 == 10 && (a268 == 33 && a206 == 33)) && ((280 < a163) && (314 >= a163))) && a329 <=  -156)) && (input == inputs[14] && (a227 == 33 && ((a180 == a164[7] &&  cf==1 ) && a28 == a60[0]))))) {
printf("POINT: 422\n");
    	cf = 0;
    	a125 = ((((((a329 * a340) % 14999) - 14137) + -487) / 5) + -20711);
    	a28 = a60[((a271 + a271) - 15)];
    	a80 = (a219 + 11); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 423\n");

    if(((a396 <=  -72 && ((11 == a368[5]) && ((((280 < a163) && (314 >= a163)) && (a180 == a164[7] &&  cf==1 )) && a329 <=  -156))) && ((input == inputs[12] && ((a28 == a60[0] && a357 == 8) && a227 == 33)) && a282 == 33))) {
printf("POINT: 424\n");
    	cf = 0;
    	a93 = (a219 - -6);
    	a28 = a60[((a357 * a219) + -17)];
    	a33 = a10; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 425\n");

    if((((a394 == 10 && (((a227 == 33 && a180 == a164[7]) && input == inputs[9]) && a340 <=  21)) && (19 == a288[5])) && (a282 == 33 && ((((280 < a163) && (314 >= a163)) && ( cf==1  && a28 == a60[0])) && a311 == a298[0])))) {
printf("POINT: 426\n");
    	cf = 0;
printf("POINT: 427\n");

    	if(((a15 == 32 || ((a56 == 33 || !(a182 == 12)) || !(a156 == 11))) && a97 <=  -88)) {
printf("POINT: 428\n");
    	a75 = 33 ;
    	a155 = (((((((a329 * a163) % 14999) % 16) - -86) + 0) - 24538) - -24539);
    	a28 = a60[((a357 + a219) + -5)]; 
    	}else {
printf("POINT: 430\n");
    	a264 = a290[(a357 - 5)];
    	a143 = a176[(a271 + -4)];
    	a28 = a60[((a357 + a357) - 12)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 431\n");

    if((((a282 == 33 && (a331 == a380[0] && ((( cf==1  && ((280 < a163) && (314 >= a163))) && a28 == a60[0]) && a357 == 8))) && a206 == 33) && (((19 == a288[5]) && (input == inputs[7] && (11 == a368[5]))) && a180 == a164[7]))) {
printf("POINT: 432\n");
    	cf = 0;
printf("POINT: 433\n");

    	if((!(a157 == a64[1]) && (!(a151 == 17) || (a136 == 13 || (129 < a340 || a111 == a195[5]))))) {
printf("POINT: 434\n");
    	a311 = a298[6];
    	a268 = 33 ;
    	a315 = a321;
    	a288 = a297;
    	a331 = a380[4];
    	a223 = a343[5];
    	a28 = a60[(a394 + -8)];
    	a227 = 32 ;
    	a271 = 11;
    	a161 = (a219 - -1);
    	a357 = 12;
    	a328 = a279[0];
    	a282 = 35 ;
    	a286 = ((((a286 + 5803) % 14960) + -15038) + -1);
    	a394 = 11;
    	a206 = 32 ;
    	a396 = ((((a396 / 5) + 25356) * 10) / 9);
    	a350 = a366;
    	a329 = (((a329 / 5) / 5) + 22166);
    	a56 = 32 ;
    	a219 = 6; 
    	}else {
printf("POINT: 436\n");
    	a28 = a60[(a357 - 4)];
    	a351 = 35 ;
    	a264 = a290[(a271 - 6)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 437\n");

    if(((((a282 == 33 && ((a180 == a164[7] &&  cf==1 ) && input == inputs[11])) && a340 <=  21) && (11 == a368[5])) && (a28 == a60[0] && (((280 < a163) && (314 >= a163)) && (a227 == 33 && (a206 == 33 && (19 == a288[5]))))))) {
printf("POINT: 438\n");
    	cf = 0;
printf("POINT: 439\n");

    	if((a130 == 7 || ((a47 == 12 && !(a56 == 33)) || !(a282 == 33)))) {
printf("POINT: 440\n");
    	a328 = a279[7];
    	a282 = 32 ;
    	a396 = ((((a396 + 15196) % 43) - 27) / 5);
    	a286 = ((((a286 + 19929) * 1) % 80) - -3);
    	a329 = ((((a329 % 14922) - 156) - 10729) * 1);
    	a311 = a298[5];
    	a223 = a343[3];
    	a206 = 33 ;
    	a161 = (a357 + -4);
    	a315 = a321;
    	a219 = 4;
    	a56 = 32 ;
    	a227 = 36 ;
    	a28 = a60[(a394 - 8)];
    	a394 = 14;
    	a271 = 14;
    	a268 = 33 ;
    	a350 = a336;
    	a331 = a380[5];
    	a288 = a297;
    	a357 = 14; 
    	}else {
printf("POINT: 442\n");
    	a28 = a60[(a219 - -4)];
    	a93 = (a357 - -8);
    	a99 = (a271 + -2);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 443\n");

    if((((a271 == 10 && ((a219 == 3 && ((((280 < a163) && (314 >= a163)) &&  cf==1 ) && input == inputs[13])) && a180 == a164[7])) && a28 == a60[0]) && (((19 == a288[5]) && (a223 == a343[0] && (32 == a315[3]))) && a329 <=  -156))) {
printf("POINT: 444\n");
    	cf = 0;
    	a28 = a60[(a357 - 4)];
    	a132 = a91[((a394 - a357) - -4)];
    	a264 = a290[((a394 * a394) - 93)]; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm8(int input) {
printf("POINT: 445\n");

    if((((a357 == 8 && ((a286 <=  -79 && (a219 == 3 && (a163 <=  191 &&  cf==1 ))) && a206 == 33)) && a328 == a279[0]) && a329 <=  -156)) {
printf("POINT: 446\n");
    	calculate_outputm74(input);
    } 
printf("POINT: 447\n");

    if((((54 == a350[5]) && (((280 < a163) && (314 >= a163)) &&  cf==1 )) && (a271 == 10 && (a311 == a298[0] && ((a328 == a279[0] && a219 == 3) && a223 == a343[0]))))) {
printf("POINT: 448\n");
    	calculate_outputm76(input);
    } 
}
 void calculate_outputm77(int input) {
printf("POINT: 449\n");

    if((((a328 == a279[1] && (input == inputs[7] && (( cf==1  && a28 == a60[1]) && a115 == a185[0]))) && a156 == 7) && (((((57 == a350[2]) && ((-72 < a396) && (16 >= a396))) && (15 == a368[3])) && a311 == a298[1]) && a227 == 32))) {
printf("POINT: 450\n");
    	a84 -= (a84 - 20) < a84 ? 1 : 0;
printf("POINT: 452\n");
    	cf = 0;
    	a315 = a295;
    	a21 = 32 ;
    	a28 = a60[((a394 + a357) - 14)];
    	a155 = ((((((a340 * a329) * 3) - -12349) * 2) % 15035) + -14964); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 453\n");

    if(((a223 == a343[1] && (a311 == a298[1] && (57 == a350[2]))) && (((((a328 == a279[1] && (input == inputs[12] && (a115 == a185[0] &&  cf==1 ))) && a28 == a60[1]) && a357 == 9) && a156 == 7) && a268 == 32))) {
printf("POINT: 454\n");
    	cf = 0;
    	a227 = 33 ;
    	a180 = a164[((a357 + a219) - 12)];
    	a394 = (a156 + 3);
    	a288 = a297;
    	a219 = (a394 - 7);
    	a350 = a336;
    	a28 = a60[(a156 - 7)];
    	a223 = a343[(a271 - 11)];
    	a368 = a397;
    	a206 = 33 ;
    	a396 = ((((((a396 * a286) + -21193) - 2065) - -44361) * -1) / 10);
    	a340 = ((((a340 * a286) + -4562) - 13789) / 5);
    	a311 = a298[(a156 + -7)];
    	a329 = ((((((a329 * a396) % 14999) % 14922) - 15077) + -1) + -1);
    	a268 = 33 ;
    	a286 = ((((((a286 * a340) % 14999) - 223) % 14960) - 15038) - 3);
    	a331 = a380[(a219 - 3)];
    	a15 = 33 ;
    	a357 = (a394 + -2);
    	a328 = a279[(a219 - 3)];
    	a282 = 33 ;
    	a271 = a394; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 455\n");

    if((((a206 == 32 && (((a331 == a380[1] && (input == inputs[0] && (a28 == a60[1] && (a115 == a185[0] &&  cf==1 )))) && a156 == 7) && a282 == 32)) && a394 == 11) && (((21 < a340) && (53 >= a340)) && a271 == 11))) {
printf("POINT: 456\n");
    	cf = 0;
    	a156 = (a271 - 3);
    	a28 = a60[(a357 - 6)];
    	a315 = a295;
    	a188 = a117; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm78(int input) {
printf("POINT: 457\n");

    if((((((a28 == a60[1] &&  cf==1 ) && input == inputs[9]) && a115 == a185[1]) && a227 == 32) && ((a331 == a380[1] && (((a357 == 9 && ((21 < a340) && (53 >= a340))) && a156 == 7) && (37 == a315[2]))) && a219 == 4))) {
printf("POINT: 458\n");
    	cf = 0;
    	a112 = ((a156 + a394) + -4);
    	a28 = a60[(a357 - 9)];
    	a180 = a164[((a394 / a271) - 1)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 459\n");

    if(((((a28 == a60[1] && (input == inputs[14] &&  cf==1 )) && ((-156 < a329) && (3 >= a329))) && a282 == 32) && ((a115 == a185[1] && (((a206 == 32 && a227 == 32) && a311 == a298[1]) && a156 == 7)) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 460\n");
    	cf = 0;
printf("POINT: 461\n");

    	if((a111 == a195[0] && (a143 == 7 || (55 == a90[0])))) {
printf("POINT: 462\n");
    	a271 = 17;
    	a311 = a298[4];
    	a288 = a399;
    	a15 = 33 ;
    	a206 = 32 ;
    	a329 = ((((a329 % 79) + -75) + -2) + 1);
    	a180 = a164[((a219 * a357) - 35)];
    	a331 = a380[5];
    	a286 = (((a286 + 22555) / 5) * 5);
    	a223 = a343[2];
    	a368 = a293;
    	a28 = a60[(a394 + -11)];
    	a282 = 32 ;
    	a350 = a366;
    	a227 = 36 ;
    	a315 = a295;
    	a268 = 35 ;
    	a328 = a279[6];
    	a394 = 14;
    	a340 = (((a340 + 22467) * 1) - -2018);
    	a357 = 12;
    	a396 = ((((a396 - -22129) * 1) + 1783) + -23754);
    	a219 = 6; 
    	}else {
printf("POINT: 464\n");
    	a282 = 36 ;
    	a350 = a366;
    	a155 = ((((((a329 * a396) % 54) + 158) * 1) + -9131) + 9130);
    	a56 = 35 ;
    	a28 = a60[(a219 + 2)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 465\n");

    if(((((a268 == 32 && a223 == a343[1]) && (37 == a315[2])) && (15 == a368[3])) && ((((a115 == a185[1] && ((input == inputs[4] &&  cf==1 ) && a28 == a60[1])) && a156 == 7) && a328 == a279[1]) && a357 == 9))) {
printf("POINT: 466\n");
    	cf = 0;
    	a141 = (((((a286 * a329) % 29) - -62) + 0) - 0);
    	a156 = (a219 - -4); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 467\n");

    if(((((21 < a340) && (53 >= a340)) && (a311 == a298[1] && (a328 == a279[1] && (((15 == a368[3]) && (a156 == 7 && (a115 == a185[1] &&  cf==1 ))) && input == inputs[3])))) && (((-79 < a286) && (83 >= a286)) && (a282 == 32 && a28 == a60[1])))) {
printf("POINT: 468\n");
    	cf = 0;
    	a157 = a64[((a219 / a219) - -6)];
    	a156 = (a271 - -1); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 469\n");

    if(((21 == a288[1]) && (((((-72 < a396) && (16 >= a396)) && (((((input == inputs[12] && (a115 == a185[1] &&  cf==1 )) && a156 == 7) && a28 == a60[1]) && ((-79 < a286) && (83 >= a286))) && a328 == a279[1])) && a227 == 32) && (57 == a350[2])))) {
printf("POINT: 470\n");
    	cf = 0;
printf("POINT: 471\n");

    	if(((a121 == 33 && (!(a132 == 11) || (212 < a155 || a182 == 7))) && a21 == 36)) {
printf("POINT: 472\n");
    	a154 = (a357 - -1);
    	a28 = a60[((a156 / a154) + 5)];
    	a125 = ((((((a329 * a396) / 5) - -17458) - 30611) * -1) / 10); 
    	}else {
printf("POINT: 474\n");
    	a331 = a380[7];
    	a396 = (((a396 / 5) / 5) + 14);
    	a268 = 36 ;
    	a93 = ((a219 + a219) + 6);
    	a340 = (((a340 + 3069) / 5) * 5);
    	a288 = a270;
    	a223 = a343[6];
    	a139 = a37;
    	a282 = 36 ;
    	a206 = 35 ;
    	a28 = a60[(a93 - 7)];
    	a350 = a377;
    	a271 = 17;
    	a328 = a279[1];
    	a227 = 35 ;
    	a311 = a298[6];
    	a368 = a371;
    	a357 = 9;
    	a315 = a295;
    	a329 = (((a329 - 26130) * 1) - -36232);
    	a394 = 12;
    	a286 = ((((a286 + 184) / 5) + -14827) - -15028);
    	a219 = 8;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 475\n");

    if(((a394 == 11 && (a328 == a279[1] && (a115 == a185[1] && ( cf==1  && a28 == a60[1])))) && ((((a156 == 7 && (a271 == 11 && a357 == 9)) && (21 == a288[1])) && input == inputs[2]) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 476\n");
    	cf = 0;
    	a350 = a366;
    	a223 = a343[5];
    	a156 = (a219 - -4);
    	a141 = (((((((a340 * a340) / 5) * 10) / 9) / 5) * 45) / 10); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 477\n");

    if(((((-72 < a396) && (16 >= a396)) && (((( cf==1  && a115 == a185[1]) && input == inputs[10]) && a156 == 7) && ((21 < a340) && (53 >= a340)))) && (((a206 == 32 && (a268 == 32 && a311 == a298[1])) && a28 == a60[1]) && a282 == 32))) {
printf("POINT: 478\n");
    	cf = 0;
printf("POINT: 479\n");

    	if(a349 == 32) {
printf("POINT: 480\n");
    	a227 = 34 ;
    	a340 = ((((a340 % 15) + 30) + 6) + 3);
    	a206 = 36 ;
    	a93 = (a219 + 6);
    	a331 = a380[5];
    	a223 = a343[5];
    	a268 = 35 ;
    	a267 = ((a271 + a271) - 14);
    	a329 = (((a329 + 16579) - 33596) + 32360);
    	a28 = a60[((a357 / a267) + 6)];
    	a350 = a366;
    	a288 = a399;
    	a394 = 15;
    	a219 = 8;
    	a271 = 13;
    	a368 = a371;
    	a286 = ((((a286 - 14765) / 5) * -1) / 10);
    	a328 = a279[2];
    	a396 = (((a396 + 22944) * 1) * 1);
    	a282 = 36 ;
    	a311 = a298[1];
    	a315 = a273;
    	a357 = 11; 
    	}else {
printf("POINT: 482\n");
    	a28 = a60[((a156 - a156) + 3)];
    	a20 = 33 ;
    	a188 = a105;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 483\n");

    if((((37 == a315[2]) && ((a282 == 32 && ((( cf==1  && input == inputs[5]) && a115 == a185[1]) && ((-156 < a329) && (3 >= a329)))) && ((-72 < a396) && (16 >= a396)))) && (a219 == 4 && ((a156 == 7 && ((21 < a340) && (53 >= a340))) && a28 == a60[1])))) {
printf("POINT: 484\n");
    	cf = 0;
printf("POINT: 485\n");

    	if(((a263 == 33 && ((a170 == 33 && a132 == 11) && !(a182 == a59[0]))) && a112 == 10)) {
printf("POINT: 486\n");
    	a115 = a185[(a271 + -4)]; 
    	}else {
printf("POINT: 488\n");
    	a155 = ((((((a286 * a340) / 5) - 15269) * 1) % 16) - -86);
    	a75 = 34 ;
    	a28 = a60[((a271 / a394) - -5)];
    	}printf("%d\n", 26);  
    } 
printf("POINT: 489\n");

    if(((((((input == inputs[0] &&  cf==1 ) && a115 == a185[1]) && a331 == a380[1]) && a28 == a60[1]) && a206 == 32) && (a328 == a279[1] && ((((-79 < a286) && (83 >= a286)) && ((37 == a315[2]) && (57 == a350[2]))) && a156 == 7)))) {
printf("POINT: 490\n");
    	cf = 0;
    	a286 = ((((a286 % 80) - -2) + 1) / 5);
    	a357 = 15;
    	a396 = (((a396 - -18437) + 4208) - -1389);
    	a315 = a273;
    	a328 = a279[5];
    	a368 = a293;
    	a28 = a60[((a156 / a156) + -1)];
    	a180 = a164[((a219 * a156) + -24)];
    	a227 = 34 ;
    	a394 = 17;
    	a331 = a380[4];
    	a329 = ((((a329 + 8082) * 3) - 37765) - -22270);
    	a311 = a298[1];
    	a93 = (a156 - -4);
    	a288 = a399;
    	a340 = ((((a340 + 24903) - -392) / 5) + -5008);
    	a219 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 491\n");

    if(((((21 < a340) && (53 >= a340)) && (((a156 == 7 && ( cf==1  && input == inputs[11])) && a28 == a60[1]) && a115 == a185[1])) && ((57 == a350[2]) && (a357 == 9 && (a331 == a380[1] && (((-156 < a329) && (3 >= a329)) && a206 == 32)))))) {
printf("POINT: 492\n");
    	a13 += (a13 + 20) > a13 ? 3 : 0;
printf("POINT: 494\n");
    	cf = 0;
printf("POINT: 495\n");

    	if((!(a182 == a59[5]) && ((( cf!=1  || a267 == 7) || a394 == 11) || !(a99 == 9)))) {
printf("POINT: 496\n");
    	a331 = a380[5];
    	a315 = a321;
    	a350 = a336;
    	a357 = 9;
    	a56 = 32 ;
    	a219 = 10;
    	a161 = (a271 - 9);
    	a396 = ((((a396 / 5) * 5) - 756) + 756);
    	a28 = a60[(a394 + -9)];
    	a368 = a371;
    	a223 = a343[1];
    	a328 = a279[6];
    	a286 = (((((a286 % 80) + 2) * 5) % 80) - -3);
    	a206 = 36 ;
    	a268 = 35 ;
    	a329 = (((((a329 * 5) - -2922) + 16940) % 79) - 112);
    	a394 = 15; 
    	}else {
printf("POINT: 498\n");
    	a28 = a60[((a394 * a156) + -75)];
    	a56 = 32 ;
    	a161 = (a219 + -1);
    	}printf("%d\n", 19);  
    } 
printf("POINT: 499\n");

    if(((a268 == 32 && ((a219 == 4 && (a28 == a60[1] && (a115 == a185[1] && (input == inputs[13] &&  cf==1 )))) && a156 == 7)) && ((57 == a350[2]) && ((a311 == a298[1] && a328 == a279[1]) && a227 == 32)))) {
printf("POINT: 500\n");
    	cf = 0;
printf("POINT: 501\n");

    	if((291 < a286 && a151 == 13)) {
printf("POINT: 502\n");
    	a331 = a380[4];
    	a350 = a377;
    	a311 = a298[5];
    	a328 = a279[3];
    	a28 = a60[(a394 - 4)];
    	a223 = a343[2];
    	a206 = 34 ;
    	a329 = ((((a329 / 5) + 4560) * 5) + -22639);
    	a340 = ((((a340 - -25260) + -25806) / 5) + 25145);
    	a219 = 6;
    	a282 = 34 ;
    	a227 = 32 ;
    	a130 = a29[((a357 - a357) + 1)];
    	a93 = ((a271 + a357) - 8);
    	a357 = 13; 
    	}else {
printf("POINT: 504\n");
    	a28 = a60[(a357 - 6)];
    	a20 = 36 ;
    	a188 = a105;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 505\n");

    if(((((21 < a340) && (53 >= a340)) && (a115 == a185[1] && ((15 == a368[3]) && (((-156 < a329) && (3 >= a329)) && a219 == 4)))) && (a331 == a380[1] && ((((input == inputs[8] &&  cf==1 ) && a28 == a60[1]) && a156 == 7) && a206 == 32)))) {
printf("POINT: 506\n");
    	cf = 0;
    	a28 = a60[(a357 - 2)];
    	a130 = a29[(a357 + -2)];
    	a93 = (a394 - -1); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 507\n");

    if((((((((a28 == a60[1] &&  cf==1 ) && a115 == a185[1]) && input == inputs[7]) && a219 == 4) && a282 == 32) && a227 == 32) && ((a271 == 11 && ((37 == a315[2]) && a156 == 7)) && a331 == a380[1]))) {
printf("POINT: 508\n");
    	cf = 0;
    	a132 = a91[((a271 * a271) + -115)];
    	a264 = a290[(a394 + -4)];
    	a329 = (((((a329 - -164) + 4) * 5) % 83) + 84);
    	a268 = 36 ;
    	a227 = 36 ;
    	a357 = 9;
    	a28 = a60[(a271 + -7)];
    	a311 = a298[1];
    	a331 = a380[5];
    	a219 = 7;
    	a368 = a371;
    	a223 = a343[7];
    	a328 = a279[6];
    	a350 = a377;
    	a340 = (((a340 - -34) + 24497) - 24496);
    	a271 = 13; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 509\n");

    if((((a227 == 32 && ((((a115 == a185[1] &&  cf==1 ) && input == inputs[1]) && a156 == 7) && a328 == a279[1])) && a28 == a60[1]) && (((a331 == a380[1] && ((-79 < a286) && (83 >= a286))) && a311 == a298[1]) && a206 == 32))) {
printf("POINT: 510\n");
    	a50 -= (a50 - 20) < a50 ? 2 : 0;
printf("POINT: 512\n");
    	cf = 0;
    	a188 = a43;
    	a28 = a60[(a219 - 1)];
    	a136 = (a394 - 3); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 513\n");

    if((((((-79 < a286) && (83 >= a286)) && a271 == 11) && a357 == 9) && (a219 == 4 && (a331 == a380[1] && ((((a28 == a60[1] && ( cf==1  && input == inputs[6])) && a115 == a185[1]) && ((-72 < a396) && (16 >= a396))) && a156 == 7))))) {
printf("POINT: 514\n");
    	a173 -= (a173 - 20) < a173 ? 3 : 0;
printf("POINT: 516\n");
    	a2 -= (a2 - 20) < a2 ? 1 : 0;
printf("POINT: 518\n");
    	cf = 0;
    	a223 = a343[2];
    	a268 = 34 ;
    	a132 = a91[((a156 / a156) + 5)];
    	a311 = a298[3];
    	a264 = a290[((a219 - a357) - -12)];
    	a357 = 11;
    	a350 = a366;
    	a271 = 13;
    	a329 = ((((a329 * 5) - -16352) % 83) - -6);
    	a368 = a371;
    	a328 = a279[3];
    	a227 = 34 ;
    	a28 = a60[((a156 + a394) - 14)];
    	a340 = ((((a340 / 5) - -40) * 9) / 10);
    	a331 = a380[4];
    	a219 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm80(int input) {
printf("POINT: 519\n");

    if(((((a206 == 32 && a115 == a185[3]) && (37 == a315[2])) && ((((((( cf==1  && input == inputs[11]) && a156 == 7) && (21 == a288[1])) && (57 == a350[2])) && a28 == a60[1]) && a394 == 11) && ((21 < a340) && (53 >= a340)))) && a88 == 4)) {
printf("POINT: 520\n");
    	cf = 0;
    	a331 = a380[(a357 - a357)];
    	a28 = a60[(a271 - a394)];
    	a350 = a336;
    	a329 = ((((a329 * a340) + -16212) - 401) + 2348);
    	a268 = 33 ;
    	a315 = a321;
    	a368 = a397;
    	a112 = (a156 - -6);
    	a180 = a164[(a219 + -4)];
    	a394 = (a357 + 1);
    	a227 = 33 ;
    	a328 = a279[((a219 + a357) - 13)];
    	a311 = a298[((a357 / a357) - 1)];
    	a219 = (a357 - 6);
    	a340 = ((((a340 * a286) - 25604) * 1) / 5); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 521\n");

    if(((a331 == a380[1] && (a328 == a279[1] && (input == inputs[13] && ((-72 < a396) && (16 >= a396))))) && ((57 == a350[2]) && ((a219 == 4 && ((15 == a368[3]) && (a115 == a185[3] && ( cf==1  && a28 == a60[1])))) && a156 == 7)))) {
printf("POINT: 522\n");
    	cf = 0;
    	a227 = 33 ;
    	a288 = a297;
    	a180 = a164[(a219 + -3)];
    	a328 = a279[((a219 + a394) + -15)];
    	a350 = a336;
    	a206 = 33 ;
    	a28 = a60[(a219 + -4)];
    	a340 = (((((a340 * a329) + -19584) / 5) * 10) / 9);
    	a219 = (a357 + -6);
    	a368 = a397;
    	a331 = a380[(a271 - 11)];
    	a315 = a321;
    	a15 = 32 ;
    	a396 = ((((a396 * a329) + -21056) - 5155) - 1216);
    	a286 = ((((a286 * a329) - 16859) + -136) + -67);
    	a329 = (((((a329 * a340) % 14999) / 5) + -648) - 11336); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 523\n");

    if(((a227 == 32 && (a282 == 32 && (((-72 < a396) && (16 >= a396)) && a156 == 7))) && (((37 == a315[2]) && (((( cf==1  && a28 == a60[1]) && a115 == a185[3]) && (57 == a350[2])) && input == inputs[5])) && a328 == a279[1]))) {
printf("POINT: 524\n");
    	cf = 0;
    	a155 = ((((a396 * a396) + -13681) / 5) * 5);
    	a28 = a60[(a156 - 1)];
    	a21 = 32 ;
    	a223 = a343[((a219 * a394) + -43)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 525\n");

    if(((a206 == 32 && ((37 == a315[2]) && ((((-156 < a329) && (3 >= a329)) && input == inputs[10]) && a28 == a60[1]))) && (a311 == a298[1] && ((a271 == 11 && (( cf==1  && a115 == a185[3]) && a156 == 7)) && (21 == a288[1]))))) {
printf("POINT: 526\n");
    	a178 += (a178 + 20) > a178 ? 4 : 0;
printf("POINT: 528\n");
    	a40 -= (a40 - 20) < a40 ? 4 : 0;
printf("POINT: 530\n");
    	a50 += (a50 + 20) > a50 ? 2 : 0;
printf("POINT: 532\n");
    	cf = 0;
    	a223 = a343[(a271 - 9)];
    	a350 = a377;
    	a141 = ((((((a340 * a286) * 5) - 2161) - -2392) % 14953) - -15045);
    	a156 = (a394 - 3); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 533\n");

    if((((((21 < a340) && (53 >= a340)) && ((37 == a315[2]) && ((((-79 < a286) && (83 >= a286)) && (a227 == 32 && (a156 == 7 && a219 == 4))) && a328 == a279[1]))) && (a115 == a185[3] && (a28 == a60[1] && (input == inputs[8] &&  cf==1 )))) && a113 == 9)) {
printf("POINT: 534\n");
    	cf = 0;
    	a227 = 33 ;
    	a271 = (a219 + 6);
    	a357 = ((a219 * a219) + -8);
    	a368 = a397;
    	a180 = a164[((a156 + a156) + -11)];
    	a97 = (((((a329 * a286) % 82) + -5) - -19575) + -19574);
    	a286 = (((((a396 * a329) * 2) * 1) + 3532) + -25702);
    	a268 = 33 ;
    	a340 = (((((a340 * a286) % 14999) + -2637) + -8754) + -3261);
    	a28 = a60[((a219 * a394) - 44)];
    	a315 = a321;
    	a331 = a380[(a271 + -10)];
    	a219 = (a271 - 7);
    	a288 = a297;
    	a329 = (((((a329 * a396) * 2) - 22730) - -16072) - 18041);
    	a282 = 33 ;
    	a396 = ((((a396 / 5) - -29742) * -1) / 10); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 535\n");

    if((((a227 == 32 && ((a115 == a185[3] && (((21 < a340) && (53 >= a340)) && ((a28 == a60[1] && ( cf==1  && a156 == 7)) && a331 == a380[1]))) && a328 == a279[1])) && (a282 == 32 && (a311 == a298[1] && input == inputs[2]))) && a120 <= -15)) {
printf("POINT: 536\n");
    	cf = 0;
    	a206 = 33 ;
    	a329 = ((((a329 * a286) - 17033) + -78) * 1);
    	a130 = a29[((a394 + a271) - 21)];
    	a357 = (a156 - -1);
    	a328 = a279[(a271 + -11)];
    	a93 = (a394 + 1);
    	a227 = 33 ;
    	a340 = ((((a340 * a396) + -19490) * 1) / 5);
    	a311 = a298[(a156 - 7)];
    	a350 = a336;
    	a282 = 33 ;
    	a28 = a60[a156];
    	a219 = ((a156 / a156) + 2);
    	a331 = a380[(a156 - 7)]; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm83(int input) {
printf("POINT: 537\n");

    if(((input == inputs[2] && (a115 == a185[6] && (((((a156 == 7 && ( cf==1  && a28 == a60[1])) && ((21 < a340) && (53 >= a340))) && a357 == 9) && ((-72 < a396) && (16 >= a396))) && a328 == a279[1]))) && (((-79 < a286) && (83 >= a286)) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 538\n");
    	cf = 0;
    	a328 = a279[3];
    	a56 = 32 ;
    	a315 = a321;
    	a357 = 9;
    	a206 = 32 ;
    	a161 = (a219 + -2);
    	a223 = a343[1];
    	a368 = a371;
    	a286 = (((a286 - -26278) / 5) + 18011);
    	a268 = 33 ;
    	a394 = 16;
    	a350 = a336;
    	a28 = a60[(a271 + -9)];
    	a329 = (((a329 * 5) - -18046) + 3129);
    	a396 = ((((a396 - -3994) + -14647) * 10) / 9);
    	a331 = a380[4];
    	a219 = 10; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 539\n");

    if((((a206 == 32 && ((((15 == a368[3]) && a115 == a185[6]) && a394 == 11) && ((-79 < a286) && (83 >= a286)))) && ((21 < a340) && (53 >= a340))) && (((a156 == 7 && ( cf==1  && a28 == a60[1])) && input == inputs[9]) && (37 == a315[2])))) {
printf("POINT: 540\n");
    	cf = 0;
printf("POINT: 541\n");

    	if((a264 == 12 || a121 == 35)) {
printf("POINT: 542\n");
    	a315 = a321;
    	a368 = a371;
    	a311 = a298[3];
    	a329 = (((a329 + 6932) - -20697) + -17449);
    	a286 = ((((a286 % 80) + 3) - 1) + 2);
    	a396 = (((((a396 % 43) - 28) + 1) - 19883) - -19883);
    	a268 = 34 ;
    	a282 = 36 ;
    	a288 = a399;
    	a93 = (a219 - -12);
    	a219 = 10;
    	a99 = ((a357 + a357) - 5);
    	a206 = 36 ;
    	a350 = a366;
    	a328 = a279[2];
    	a271 = 17;
    	a223 = a343[6];
    	a227 = 34 ;
    	a331 = a380[5];
    	a394 = 13;
    	a340 = ((((a340 / 5) + 13877) - -3003) + -16784);
    	a28 = a60[(a357 + -2)];
    	a357 = 13; 
    	}else {
printf("POINT: 544\n");
    	a357 = 15;
    	a311 = a298[0];
    	a329 = ((((a329 * 5) / 5) / 5) + 18968);
    	a227 = 36 ;
    	a396 = (((a396 + -16082) * 1) / 5);
    	a328 = a279[5];
    	a368 = a397;
    	a350 = a336;
    	a286 = (((((a286 % 80) - -1) - -2) + -5383) + 5382);
    	a223 = a343[1];
    	a331 = a380[5];
    	a315 = a295;
    	a394 = 14;
    	a340 = (((a340 / 5) - -26489) - -2130);
    	a271 = 16;
    	a288 = a297;
    	a28 = a60[(a219 - 2)];
    	a206 = 35 ;
    	a56 = 33 ;
    	a166 = a26[(a219 + -2)];
    	a282 = 33 ;
    	a219 = 3;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 545\n");

    if(((((a206 == 32 && (a115 == a185[6] && (input == inputs[4] &&  cf==1 ))) && a223 == a343[1]) && (37 == a315[2])) && (((a331 == a380[1] && (a156 == 7 && a394 == 11)) && a28 == a60[1]) && (15 == a368[3])))) {
printf("POINT: 546\n");
    	cf = 0;
    	a28 = a60[(a271 - a156)];
    	a32 = (a219 + 12);
    	a264 = a290[(a271 - 11)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 547\n");

    if(((a227 == 32 && ((a311 == a298[1] && (((a156 == 7 &&  cf==1 ) && a115 == a185[6]) && a28 == a60[1])) && a219 == 4)) && (((input == inputs[3] && (21 == a288[1])) && ((-79 < a286) && (83 >= a286))) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 548\n");
    	cf = 0;
    	a125 = ((((a396 * a396) - -18629) + 1568) - -4131);
    	a28 = a60[((a271 * a219) - 39)];
    	a154 = ((a357 + a394) - 7); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 549\n");

    if(((a328 == a279[1] && ((a227 == 32 && (a156 == 7 && a331 == a380[1])) && a28 == a60[1])) && ((a219 == 4 && ((input == inputs[0] && ( cf==1  && a115 == a185[6])) && a282 == 32)) && a223 == a343[1]))) {
printf("POINT: 550\n");
    	cf = 0;
    	a223 = a343[5];
    	a115 = a185[(a219 + -1)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 551\n");

    if(((a357 == 9 && (a268 == 32 && (a311 == a298[1] && ((( cf==1  && a28 == a60[1]) && a156 == 7) && input == inputs[14])))) && (((a394 == 11 && a115 == a185[6]) && ((-72 < a396) && (16 >= a396))) && a271 == 11))) {
printf("POINT: 552\n");
    	cf = 0;
printf("POINT: 553\n");

    	if((!(a86 == 8) || (a157 == a64[0] || a157 == a64[3]))) {
printf("POINT: 554\n");
    	a130 = a29[((a271 + a219) - 8)];
    	a28 = a60[(a357 - 2)];
    	a93 = ((a156 - a271) - -16); 
    	}else {
printf("POINT: 556\n");
    	a156 = (a271 + -2);
    	a131 = (a219 + -1);
    	}printf("%d\n", 20);  
    } 
printf("POINT: 557\n");

    if(((((a206 == 32 && a156 == 7) && a282 == 32) && a268 == 32) && ((((-72 < a396) && (16 >= a396)) && ((((input == inputs[11] &&  cf==1 ) && a28 == a60[1]) && a357 == 9) && a115 == a185[6])) && a219 == 4))) {
printf("POINT: 558\n");
    	cf = 0;
    	a28 = a60[(a394 + -9)];
    	a56 = 36 ;
    	a129 = a108[(a271 + -6)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 559\n");

    if(((a311 == a298[1] && (a331 == a380[1] && (a328 == a279[1] && (a206 == 32 && (21 == a288[1]))))) && (((input == inputs[12] && (( cf==1  && a115 == a185[6]) && a156 == 7)) && a28 == a60[1]) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 560\n");
    	cf = 0;
printf("POINT: 561\n");

    	if((((55 == a90[0]) || a155 <=  70) && a311 == a298[6])) {
printf("POINT: 562\n");
    	a115 = a185[((a394 + a271) - 15)]; 
    	}else {
printf("POINT: 564\n");
    	a263 = 32 ;
    	a93 = (a271 - -2);
    	a28 = a60[(a394 - 4)];
    	}printf("%d\n", 24);  
    } 
printf("POINT: 565\n");

    if((((((a115 == a185[6] &&  cf==1 ) && a28 == a60[1]) && a268 == 32) && a357 == 9) && (a227 == 32 && (a271 == 11 && (((-79 < a286) && (83 >= a286)) && (a156 == 7 && (((-72 < a396) && (16 >= a396)) && input == inputs[8]))))))) {
printf("POINT: 566\n");
    	cf = 0;
    	a143 = a176[(a394 + -5)];
    	a264 = a290[(a357 - 6)];
    	a28 = a60[(a271 - 7)]; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 567\n");

    if((((a115 == a185[6] && ((a206 == 32 && ((a28 == a60[1] &&  cf==1 ) && a156 == 7)) && a328 == a279[1])) && (21 == a288[1])) && ((((21 < a340) && (53 >= a340)) && (a282 == 32 && a223 == a343[1])) && input == inputs[6]))) {
printf("POINT: 568\n");
    	a13 -= (a13 - 20) < a13 ? 3 : 0;
printf("POINT: 570\n");
    	cf = 0;
    	a93 = (a394 + 1);
    	a328 = a279[4];
    	a130 = a29[(a156 / a219)];
    	a331 = a380[5];
    	a206 = 36 ;
    	a223 = a343[6];
    	a357 = 14;
    	a28 = a60[((a394 / a93) - -7)];
    	a227 = 36 ;
    	a350 = a377;
    	a311 = a298[7];
    	a329 = (((a329 - -167) + 1) + -3);
    	a340 = ((((a340 + 33) + 33) + -27738) + 27720);
    	a282 = 34 ;
    	a219 = 8; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 571\n");

    if((((((-79 < a286) && (83 >= a286)) && (input == inputs[7] && a357 == 9)) && a268 == 32) && (a331 == a380[1] && ((57 == a350[2]) && ((a156 == 7 && (( cf==1  && a28 == a60[1]) && a115 == a185[6])) && a223 == a343[1]))))) {
printf("POINT: 572\n");
    	a40 -= (a40 - 20) < a40 ? 1 : 0;
printf("POINT: 574\n");
    	cf = 0;
printf("POINT: 575\n");

    	if(((a130 == a29[5] && a223 == a343[3]) && !(a130 == 5))) {
printf("POINT: 576\n");
    	a28 = a60[(a357 - 5)];
    	a143 = a176[((a357 / a219) + -2)];
    	a264 = a290[(a219 - 1)]; 
    	}else {
printf("POINT: 578\n");
    	a331 = a380[6];
    	a180 = a164[(a394 + -9)];
    	a350 = a366;
    	a315 = a273;
    	a227 = 34 ;
    	a329 = (((a329 + 19178) - 1011) / 5);
    	a268 = 32 ;
    	a394 = 15;
    	a28 = a60[(a219 - 4)];
    	a219 = 10;
    	a282 = 32 ;
    	a206 = 35 ;
    	a396 = ((((a396 / 5) * 5) - -24166) - 23962);
    	a328 = a279[2];
    	a368 = a371;
    	a181 = a53;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 579\n");

    if((((((((15 == a368[3]) && a282 == 32) && a394 == 11) && input == inputs[5]) && a156 == 7) && a268 == 32) && ((a206 == 32 && (a115 == a185[6] && (a28 == a60[1] &&  cf==1 ))) && a227 == 32))) {
printf("POINT: 580\n");
    	cf = 0;
    	a264 = a290[(a219 + 3)];
    	a331 = a380[6];
    	a329 = (((a329 * 5) + 7093) - -18902);
    	a286 = (((a286 - -197) + 21756) - 21772);
    	a28 = a60[(a271 + -7)];
    	a328 = a279[7];
    	a223 = a343[1];
    	a268 = 34 ;
    	a282 = 36 ;
    	a227 = 36 ;
    	a368 = a371;
    	a357 = 9;
    	a271 = 15;
    	a340 = ((((a340 * 5) * 10) / 8) + 18935);
    	a132 = a91[(a219 + 1)];
    	a350 = a377;
    	a219 = 7; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 581\n");

    if((((21 == a288[1]) && (((-156 < a329) && (3 >= a329)) && ((((-72 < a396) && (16 >= a396)) && (((21 < a340) && (53 >= a340)) && (15 == a368[3]))) && a328 == a279[1]))) && (input == inputs[13] && (a115 == a185[6] && (a156 == 7 && (a28 == a60[1] &&  cf==1 )))))) {
printf("POINT: 582\n");
    	cf = 0;
printf("POINT: 583\n");

    	if(((!(a115 == 4) && a131 == 10) && !(a144 == 34))) {
printf("POINT: 584\n");
    	a125 = (((((a329 * a396) + -27472) + -4) - -18166) - 2535);
    	a80 = (a357 - -1);
    	a28 = a60[(a394 - 6)]; 
    	}else {
printf("POINT: 586\n");
    	a315 = a295;
    	a368 = a371;
    	a56 = 32 ;
    	a396 = (((a396 / 5) - -7) + -61);
    	a329 = ((((a329 + -4054) % 79) + 3) - 3);
    	a350 = a366;
    	a223 = a343[7];
    	a328 = a279[6];
    	a357 = 9;
    	a161 = (a394 + -9);
    	a286 = (((a286 - 1552) / 5) + -122);
    	a28 = a60[((a156 * a219) - 26)];
    	a219 = 7;
    	a206 = 36 ;
    	a331 = a380[1];
    	a268 = 36 ;
    	a394 = 14;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 587\n");

    if(((a219 == 4 && (((15 == a368[3]) && (((a115 == a185[6] && ((a156 == 7 &&  cf==1 ) && input == inputs[10])) && a357 == 9) && a282 == 32)) && (37 == a315[2]))) && (a28 == a60[1] && a331 == a380[1]))) {
printf("POINT: 588\n");
    	cf = 0;
printf("POINT: 589\n");

    	if((a111 == a195[3] && a328 == a279[0])) {
printf("POINT: 590\n");
    	a93 = (a357 - -5);
    	a28 = a60[(a394 - 4)];
    	a139 = a81; 
    	}else {
printf("POINT: 592\n");
    	a28 = a60[(a156 - 4)];
    	a136 = ((a394 - a156) + 8);
    	a188 = a43;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 593\n");

    if((((((-79 < a286) && (83 >= a286)) && (a268 == 32 && ((((21 < a340) && (53 >= a340)) && a271 == 11) && input == inputs[1]))) && a282 == 32) && (a206 == 32 && (a28 == a60[1] && (a115 == a185[6] && ( cf==1  && a156 == 7)))))) {
printf("POINT: 594\n");
    	cf = 0;
    	a157 = a64[((a271 + a394) + -20)];
    	a156 = ((a394 * a357) + -87); 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm9(int input) {
printf("POINT: 595\n");

    if((((((-72 < a396) && (16 >= a396)) && (a115 == a185[0] &&  cf==1 )) && (21 == a288[1])) && (((a223 == a343[1] && a311 == a298[1]) && ((-79 < a286) && (83 >= a286))) && ((21 < a340) && (53 >= a340))))) {
printf("POINT: 596\n");
    	calculate_outputm77(input);
    } 
printf("POINT: 597\n");

    if((((a311 == a298[1] && (a357 == 9 && (15 == a368[3]))) && a331 == a380[1]) && ((((-156 < a329) && (3 >= a329)) && ( cf==1  && a115 == a185[1])) && (21 == a288[1])))) {
printf("POINT: 598\n");
    	calculate_outputm78(input);
    } 
printf("POINT: 599\n");

    if((((a115 == a185[3] &&  cf==1 ) && (37 == a315[2])) && (((15 == a368[3]) && ((((21 < a340) && (53 >= a340)) && (21 == a288[1])) && a328 == a279[1])) && a227 == 32))) {
printf("POINT: 600\n");
    	calculate_outputm80(input);
    } 
printf("POINT: 601\n");

    if((((( cf==1  && a115 == a185[6]) && a206 == 32) && (15 == a368[3])) && ((a282 == 32 && (((-72 < a396) && (16 >= a396)) && a219 == 4)) && a328 == a279[1]))) {
printf("POINT: 602\n");
    	calculate_outputm83(input);
    } 
}
 void calculate_outputm87(int input) {
printf("POINT: 603\n");

    if((((a271 == 11 && (((-79 < a286) && (83 >= a286)) && ((((21 < a340) && (53 >= a340)) && a219 == 4) && 92 < a141))) && a394 == 11) && (((a28 == a60[1] && (input == inputs[0] &&  cf==1 )) && a156 == 8) && a282 == 32))) {
printf("POINT: 604\n");
    	a113 += (a113 + 20) > a113 ? 1 : 0;
printf("POINT: 606\n");
    	cf = 0;
    	a20 = 32 ;
    	a28 = a60[((a357 - a219) + -2)];
    	a350 = a366;
    	a223 = a343[(a394 - 10)];
    	a188 = a105; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 607\n");

    if(((((-156 < a329) && (3 >= a329)) && (((((((92 < a141 &&  cf==1 ) && input == inputs[12]) && ((21 < a340) && (53 >= a340))) && a394 == 11) && a156 == 8) && (37 == a315[2])) && a206 == 32)) && (a28 == a60[1] && a311 == a298[1]))) {
printf("POINT: 608\n");
    	cf = 0;
    	a219 = ((a357 - a156) + 4);
    	a161 = (a357 + -7);
    	a206 = 34 ;
    	a268 = 34 ;
    	a56 = 32 ;
    	a329 = ((((((a329 * a340) % 83) + 88) - -11810) + -31551) - -19741);
    	a394 = ((a219 / a271) - -12);
    	a331 = a380[(a219 - 3)];
    	a315 = a273;
    	a286 = ((((((a286 * a141) % 14999) % 103) - -186) - 0) * 1);
    	a396 = (((((a396 * a340) % 103) + 119) + 0) - -2);
    	a328 = a279[(a357 + -7)];
    	a368 = a293;
    	a28 = a60[a161];
    	a357 = (a219 + a219); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 609\n");

    if((((37 == a315[2]) && (((a311 == a298[1] && (( cf==1  && input == inputs[10]) && a156 == 8)) && ((-72 < a396) && (16 >= a396))) && a28 == a60[1])) && (((-79 < a286) && (83 >= a286)) && ((a357 == 9 && 92 < a141) && ((-156 < a329) && (3 >= a329)))))) {
printf("POINT: 610\n");
    	a88 += (a88 + 20) > a88 ? 1 : 0;
printf("POINT: 612\n");
    	cf = 0;
    	a154 = a394;
    	a28 = a60[(a154 + -6)];
    	a350 = a366;
    	a125 = (((((a329 * a141) % 14999) - 849) / 5) + 15689);
    	a223 = a343[(a219 + -3)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 613\n");

    if(((((21 < a340) && (53 >= a340)) && ((( cf==1  && 92 < a141) && input == inputs[6]) && a282 == 32)) && ((37 == a315[2]) && (a328 == a279[1] && ((a156 == 8 && (a357 == 9 && a28 == a60[1])) && a227 == 32))))) {
printf("POINT: 614\n");
    	a13 -= (a13 - 20) < a13 ? 4 : 0;
printf("POINT: 616\n");
    	a120 -= (a120 - 20) < a120 ? 4 : 0;
printf("POINT: 618\n");
    	cf = 0;
    	a56 = 32 ;
    	a329 = (((((((a141 * a141) % 14999) % 83) + 49) + 8381) + 18891) - 27271);
    	a219 = ((a394 * a394) + -116);
    	a286 = ((((((a286 * a329) + -4889) - -1241) - -5312) % 103) + 187);
    	a394 = (a219 + 7);
    	a331 = a380[((a357 / a357) - -1)];
    	a340 = (((((((a340 * a141) % 14999) % 37) + 77) - 9) * 10) / 9);
    	a315 = a273;
    	a271 = (a357 - -3);
    	a328 = a279[(a219 + -3)];
    	a368 = a293;
    	a282 = 34 ;
    	a288 = a399;
    	a161 = (a156 + -3);
    	a28 = a60[(a357 + -7)];
    	a206 = 34 ;
    	a311 = a298[((a219 * a219) + -23)];
    	a268 = 34 ;
    	a396 = (((((a396 * a329) % 103) - -121) + -1) - 1);
    	a357 = (a219 + 5); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm10(int input) {
printf("POINT: 619\n");

    if((((21 == a288[1]) && a219 == 4) && ((a394 == 11 && ((( cf==1  && 92 < a141) && a268 == 32) && ((-79 < a286) && (83 >= a286)))) && a271 == 11))) {
printf("POINT: 620\n");
    	calculate_outputm87(input);
    } 
}
 void calculate_outputm90(int input) {
printf("POINT: 621\n");

    if(((a206 == 32 && ((a328 == a279[1] && a223 == a343[1]) && a131 == 10)) && (input == inputs[10] && (a227 == 32 && ((a282 == 32 && (a28 == a60[1] && (a156 == 9 &&  cf==1 ))) && ((21 < a340) && (53 >= a340))))))) {
printf("POINT: 622\n");
    	a120 += (a120 + 20) > a120 ? 2 : 0;
printf("POINT: 624\n");
    	cf = 0;
    	a156 = (a357 - -3);
    	a157 = a64[(a357 + -4)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 625\n");

    if(((((-72 < a396) && (16 >= a396)) && (((input == inputs[8] && (( cf==1  && a156 == 9) && a131 == 10)) && a28 == a60[1]) && a357 == 9)) && ((((-79 < a286) && (83 >= a286)) && (a223 == a343[1] && ((21 < a340) && (53 >= a340)))) && a268 == 32))) {
printf("POINT: 626\n");
    	a113 += (a113 + 20) > a113 ? 1 : 0;
printf("POINT: 628\n");
    	cf = 0;
    	a86 = (a271 - 7);
    	a156 = ((a86 + a219) + 2); 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 629\n");

    if((((((15 == a368[3]) && (a156 == 9 && ((21 == a288[1]) && a206 == 32))) && a223 == a343[1]) && a331 == a380[1]) && (a131 == 10 && ((57 == a350[2]) && ((input == inputs[2] &&  cf==1 ) && a28 == a60[1]))))) {
printf("POINT: 630\n");
    	cf = 0;
    	a28 = a60[(a271 - 7)];
    	a351 = 36 ;
    	a264 = a290[((a131 - a394) - -5)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 631\n");

    if((((a223 == a343[1] && (a311 == a298[1] && ((-79 < a286) && (83 >= a286)))) && (57 == a350[2])) && ((((a206 == 32 && (a28 == a60[1] && ( cf==1  && a131 == 10))) && a156 == 9) && input == inputs[13]) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 632\n");
    	cf = 0;
printf("POINT: 633\n");

    	if(((((-36 < a125) && (168 >= a125)) &&  cf!=1 ) || ((33 < a141) && (92 >= a141)))) {
printf("POINT: 634\n");
    	a86 = (a271 + -4);
    	a368 = a371;
    	a156 = (a271 - 1); 
    	}else {
printf("POINT: 636\n");
    	a331 = a380[5];
    	a227 = 35 ;
    	a311 = a298[6];
    	a315 = a273;
    	a357 = 11;
    	a28 = a60[((a219 + a131) + -10)];
    	a169 = ((((a340 * a329) - 11356) + 10618) * 3);
    	a264 = a290[((a219 / a131) + 5)];
    	a219 = 7;
    	a394 = 16;
    	a223 = a343[6];
    	a350 = a377;
    	a328 = a279[4];
    	a268 = 36 ;
    	a368 = a293;
    	a271 = 13;
    	a288 = a270;
    	a282 = 32 ;
    	a286 = (((a286 + 203) - -22666) + -22695);
    	a329 = ((((((a329 + -19852) % 79) - 40) * 5) % 79) - -2);
    	a206 = 32 ;
    	a396 = ((((a396 % 43) - 26) + -24444) + 24441);
    	a340 = (((((a340 % 15) + 36) - 5) / 5) + 21);
    	}printf("%d\n", 19);  
    } 
printf("POINT: 637\n");

    if((((a28 == a60[1] && ((input == inputs[14] && ( cf==1  && a131 == 10)) && (21 == a288[1]))) && a227 == 32) && ((a311 == a298[1] && ((a282 == 32 && a156 == 9) && ((21 < a340) && (53 >= a340)))) && a219 == 4))) {
printf("POINT: 638\n");
    	cf = 0;
printf("POINT: 639\n");

    	if((a131 == 4 || (a328 == a279[4] && a132 == 10))) {
printf("POINT: 640\n");
    	a351 = 36 ;
    	a28 = a60[((a131 / a357) + 3)];
    	a264 = a290[(a394 + -7)]; 
    	}else {
printf("POINT: 642\n");
    	a115 = a185[((a357 + a131) - 17)];
    	a156 = (a394 + -4);
    	}printf("%d\n", 20);  
    } 
printf("POINT: 643\n");

    if(((a156 == 9 && (a268 == 32 && ((((-156 < a329) && (3 >= a329)) && (input == inputs[9] && ( cf==1  && a131 == 10))) && a28 == a60[1]))) && ((21 == a288[1]) && ((a328 == a279[1] && a206 == 32) && (15 == a368[3]))))) {
printf("POINT: 644\n");
    	cf = 0;
printf("POINT: 645\n");

    	if((a157 == a64[4] || a311 == 7)) {
printf("POINT: 646\n");
    	a20 = 32 ;
    	a28 = a60[((a219 - a131) + 9)];
    	a188 = a105; 
    	}else {
printf("POINT: 648\n");
    	a56 = 33 ;
    	a155 = (((((a329 * a286) % 54) + 158) * 1) * 1);
    	a28 = a60[(a271 + -5)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 649\n");

    if(((input == inputs[1] && (((-72 < a396) && (16 >= a396)) && (a131 == 10 && ( cf==1  && a28 == a60[1])))) && (((a156 == 9 && (a357 == 9 && (a227 == 32 && a223 == a343[1]))) && a282 == 32) && a394 == 11))) {
printf("POINT: 650\n");
    	cf = 0;
    	a271 = 15;
    	a331 = a380[1];
    	a206 = 34 ;
    	a223 = a343[5];
    	a227 = 32 ;
    	a311 = a298[2];
    	a282 = 32 ;
    	a93 = (a394 - -2);
    	a28 = a60[(a131 + -10)];
    	a180 = a164[a219];
    	a368 = a293;
    	a315 = a273;
    	a288 = a270;
    	a286 = (((((a286 + -18863) - -19026) * 5) % 103) + 112);
    	a396 = (((a396 / 5) + 11534) - -1365);
    	a350 = a377;
    	a328 = a279[3];
    	a219 = 4;
    	a340 = (((a340 + 18541) / 5) + 17111);
    	a329 = ((((a329 * 5) % 83) + 88) - 2);
    	a394 = 15; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 651\n");

    if(((input == inputs[5] && (a156 == 9 && ((( cf==1  && a131 == 10) && a28 == a60[1]) && a328 == a279[1]))) && (((a311 == a298[1] && (a357 == 9 && (15 == a368[3]))) && a268 == 32) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 652\n");
    	cf = 0;
    	a121 = 33 ;
    	a156 = ((a394 / a271) - -13); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 653\n");

    if((((37 == a315[2]) && (a206 == 32 && ((a223 == a343[1] && (15 == a368[3])) && a28 == a60[1]))) && ((a331 == a380[1] && (((a156 == 9 &&  cf==1 ) && a131 == 10) && input == inputs[12])) && (57 == a350[2])))) {
printf("POINT: 654\n");
    	cf = 0;
    	a182 = a59[(a131 + -6)];
    	a180 = a164[((a131 + a271) + -15)];
    	a28 = a60[(a271 + -10)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 655\n");

    if(((a131 == 10 && ( cf==1  && input == inputs[0])) && (((((21 == a288[1]) && ((a156 == 9 && (((-79 < a286) && (83 >= a286)) && a227 == 32)) && a28 == a60[1])) && (57 == a350[2])) && a328 == a279[1]) && a219 == 4))) {
printf("POINT: 656\n");
    	a153 += (a153 + 20) > a153 ? 1 : 0;
printf("POINT: 658\n");
    	cf = 0;
    	a351 = 34 ;
    	a28 = a60[(a131 + -6)];
    	a264 = a290[((a394 - a156) - -2)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 659\n");

    if((((15 == a368[3]) && ((37 == a315[2]) && (a206 == 32 && ((a223 == a343[1] && (57 == a350[2])) && a311 == a298[1])))) && (a28 == a60[1] && (input == inputs[7] && (( cf==1  && a131 == 10) && a156 == 9))))) {
printf("POINT: 660\n");
    	cf = 0;
    	a86 = ((a156 * a156) + -76);
    	a156 = (a219 - -6); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 661\n");

    if(((a223 == a343[1] && (((a282 == 32 && a28 == a60[1]) && input == inputs[4]) && a227 == 32)) && (a328 == a279[1] && (((a131 == 10 && ( cf==1  && a156 == 9)) && ((-156 < a329) && (3 >= a329))) && a206 == 32)))) {
printf("POINT: 662\n");
    	cf = 0;
    	a93 = a271;
    	a349 = 32 ;
    	a28 = a60[((a93 * a271) - 114)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 663\n");

    if(((a156 == 9 && (((21 < a340) && (53 >= a340)) && (((-72 < a396) && (16 >= a396)) && a223 == a343[1]))) && ((((a394 == 11 && (input == inputs[11] && ( cf==1  && a131 == 10))) && a28 == a60[1]) && a219 == 4) && a206 == 32))) {
printf("POINT: 664\n");
    	a199 += (a199 + 20) > a199 ? 1 : 0;
printf("POINT: 666\n");
    	cf = 0;
printf("POINT: 667\n");

    	if((!(a47 == 15) || ((19 == a368[1]) && 224 < a396))) {
printf("POINT: 668\n");
    	a121 = 33 ;
    	a156 = ((a131 + a131) + -6); 
    	}else {
printf("POINT: 670\n");
    	a157 = a64[((a219 + a131) - 10)];
    	a223 = a343[4];
    	a156 = (a271 - -1);
    	}printf("%d\n", 25);  
    } 
printf("POINT: 671\n");

    if(((((21 < a340) && (53 >= a340)) && (a131 == 10 && ((-72 < a396) && (16 >= a396)))) && (a282 == 32 && (a271 == 11 && (a156 == 9 && (((input == inputs[3] && ( cf==1  && a28 == a60[1])) && a223 == a343[1]) && a357 == 9)))))) {
printf("POINT: 672\n");
    	cf = 0;
printf("POINT: 673\n");

    	if((!(a268 == 32) && (!(a32 == 16) || a219 == 8))) {
printf("POINT: 674\n");
    	a267 = (a357 - -1);
    	a93 = ((a394 / a267) - -9);
    	a28 = a60[((a156 + a131) - 12)]; 
    	}else {
printf("POINT: 676\n");
    	a170 = 34 ;
    	a125 = ((((((a286 * a340) % 101) + 65) * 5) % 101) - -67);
    	a28 = a60[(a271 + -6)];
    	}printf("%d\n", 19);  
    } 
printf("POINT: 677\n");

    if((((57 == a350[2]) && (((a156 == 9 && (( cf==1  && a28 == a60[1]) && input == inputs[6])) && ((-156 < a329) && (3 >= a329))) && (15 == a368[3]))) && (a268 == 32 && ((37 == a315[2]) && (a131 == 10 && a328 == a279[1]))))) {
printf("POINT: 678\n");
    	cf = 0;
printf("POINT: 679\n");

    	if((a86 == 1 || !(a227 == 32))) {
printf("POINT: 680\n");
    	a156 = (a131 + 1);
    	a86 = (a357 - 2); 
    	}else {
printf("POINT: 682\n");
    	a288 = a270;
    	a223 = a343[4];
    	a340 = ((((a340 % 15) + 22) + 21757) + -21747);
    	a28 = a60[((a131 + a131) + -20)];
    	a311 = a298[6];
    	a368 = a293;
    	a206 = 36 ;
    	a93 = ((a156 + a219) - 3);
    	a180 = a164[(a271 - 7)];
    	a328 = a279[7];
    	a268 = 36 ;
    	a227 = 35 ;
    	a350 = a366;
    	a329 = (((((a329 - -26837) + -48212) + 42957) % 79) + -90);
    	a331 = a380[7];
    	a271 = 11;
    	a357 = 13;
    	a396 = ((((((a396 - -122) * 10) / 9) * 5) % 103) - -67);
    	a394 = 15;
    	a286 = ((((a286 - -18355) * 10) / 9) * 1);
    	a315 = a273;
    	a282 = 36 ;
    	a219 = 5;
    	}printf("%d\n", 21);  
    } 
}
 void calculate_outputm11(int input) {
printf("POINT: 683\n");

    if((((((a131 == 10 &&  cf==1 ) && ((-79 < a286) && (83 >= a286))) && (57 == a350[2])) && a394 == 11) && ((((21 < a340) && (53 >= a340)) && a328 == a279[1]) && a331 == a380[1]))) {
printf("POINT: 684\n");
    	calculate_outputm90(input);
    } 
}
 void calculate_outputm92(int input) {
printf("POINT: 685\n");

    if(((a206 == 32 && (a86 == 4 && ((input == inputs[5] && (a28 == a60[1] &&  cf==1 )) && a219 == 4))) && ((57 == a350[2]) && (((((-79 < a286) && (83 >= a286)) && a223 == a343[1]) && a156 == 10) && a328 == a279[1])))) {
printf("POINT: 686\n");
    	cf = 0;
    	a282 = 32 ;
    	a286 = (((a286 - -6475) * 4) * 1);
    	a331 = a380[4];
    	a227 = 32 ;
    	a271 = 11;
    	a288 = a399;
    	a67 = ((((a396 * a329) + -15899) - 460) - 2499);
    	a357 = 12;
    	a206 = 32 ;
    	a340 = (((a340 + 21600) * 1) + -459);
    	a394 = 12;
    	a350 = a377;
    	a315 = a295;
    	a328 = a279[5];
    	a268 = 35 ;
    	a311 = a298[1];
    	a368 = a371;
    	a93 = (a219 + 11);
    	a28 = a60[(a219 + 3)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 687\n");

    if((((((21 == a288[1]) && (15 == a368[3])) && a357 == 9) && a394 == 11) && ((((((input == inputs[9] &&  cf==1 ) && a156 == 10) && ((-79 < a286) && (83 >= a286))) && a28 == a60[1]) && a86 == 4) && a282 == 32))) {
printf("POINT: 688\n");
    	cf = 0;
printf("POINT: 689\n");

    	if(((a357 == 15 && !(a136 == 7)) || !(a206 == 36))) {
printf("POINT: 690\n");
    	a315 = a273;
    	a268 = 35 ;
    	a368 = a371;
    	a288 = a399;
    	a396 = (((((a396 / 5) + 18277) + -28730) * -1) / 10);
    	a329 = (((((a329 + 1010) + -842) / 5) * 21) / 10);
    	a394 = 12;
    	a331 = a380[1];
    	a282 = 32 ;
    	a32 = ((a219 + a219) - -4);
    	a350 = a366;
    	a328 = a279[4];
    	a227 = 35 ;
    	a357 = 9;
    	a28 = a60[(a271 + -7)];
    	a340 = (((a340 - -65) / 5) * 5);
    	a311 = a298[3];
    	a223 = a343[6];
    	a264 = a290[(a32 + -12)];
    	a219 = 7;
    	a286 = ((((a286 - -168) * 5) % 103) + 149);
    	a206 = 35 ;
    	a271 = 13; 
    	}else {
printf("POINT: 692\n");
    	a219 = 3;
    	a311 = a298[3];
    	a111 = a195[((a357 + a86) - 12)];
    	a357 = 8;
    	a206 = 35 ;
    	a282 = 33 ;
    	a288 = a270;
    	a268 = 33 ;
    	a329 = (((a329 - -23863) * 1) / 5);
    	a315 = a321;
    	a286 = ((((a286 % 80) - -3) / 5) * 5);
    	a56 = 34 ;
    	a331 = a380[0];
    	a223 = a343[0];
    	a271 = 14;
    	a328 = a279[0];
    	a227 = 34 ;
    	a340 = (((((a340 / -5) * 10) / 9) * 10) / 9);
    	a28 = a60[(a394 + -9)];
    	a350 = a366;
    	a368 = a397;
    	a396 = ((((a396 * 5) / 5) / 5) - 18078);
    	a394 = 10;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 693\n");

    if(((a223 == a343[1] && (((21 < a340) && (53 >= a340)) && ((a86 == 4 && (21 == a288[1])) && a357 == 9))) && ((((-79 < a286) && (83 >= a286)) && (input == inputs[10] && (( cf==1  && a28 == a60[1]) && a156 == 10))) && a219 == 4))) {
printf("POINT: 694\n");
    	cf = 0;
printf("POINT: 695\n");

    	if(a156 == 12) {
printf("POINT: 696\n");
    	a264 = a290[(a219 - 4)];
    	a28 = a60[(a156 + -6)];
    	a32 = (a156 + 6); 
    	}else {
printf("POINT: 698\n");
    	a219 = 9;
    	a227 = 36 ;
    	a368 = a371;
    	a394 = 15;
    	a268 = 34 ;
    	a329 = (((((a329 - -159) - 0) * 5) % 83) + 73);
    	a340 = (((a340 - -25668) - 25593) - -1);
    	a267 = (a86 - 1);
    	a288 = a399;
    	a396 = (((((a396 % 43) - 26) * 5) % 43) - 27);
    	a331 = a380[6];
    	a206 = 32 ;
    	a328 = a279[2];
    	a223 = a343[6];
    	a282 = 36 ;
    	a315 = a273;
    	a357 = 9;
    	a271 = 16;
    	a311 = a298[6];
    	a93 = a156;
    	a350 = a377;
    	a28 = a60[(a86 - -3)];
    	}printf("%d\n", 18);  
    } 
printf("POINT: 699\n");

    if((((57 == a350[2]) && (((21 == a288[1]) && ((a223 == a343[1] && input == inputs[12]) && a28 == a60[1])) && ((-156 < a329) && (3 >= a329)))) && ((a227 == 32 && (a156 == 10 && ( cf==1  && a86 == 4))) && (15 == a368[3])))) {
printf("POINT: 700\n");
    	cf = 0;
    	a115 = a185[(a357 + -8)];
    	a156 = ((a394 / a219) - -5); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 701\n");

    if(((a311 == a298[1] && ((input == inputs[8] && ((( cf==1  && a86 == 4) && a28 == a60[1]) && a156 == 10)) && ((-156 < a329) && (3 >= a329)))) && (((-79 < a286) && (83 >= a286)) && ((a271 == 11 && a328 == a279[1]) && a219 == 4)))) {
printf("POINT: 702\n");
    	cf = 0;
    	a315 = a321;
    	a340 = ((((a340 + 27379) * 1) + 30) * -1);
    	a329 = ((((a329 % 79) + -76) + 1) - 1);
    	a56 = 35 ;
    	a357 = 11;
    	a28 = a60[(a219 + -2)];
    	a206 = 36 ;
    	a350 = a336;
    	a286 = ((((a286 % 80) - -3) - 18784) - -18782);
    	a328 = a279[5];
    	a394 = 13;
    	a331 = a380[3];
    	a396 = (((((a396 % 43) + -27) - 2) + -3306) - -3307);
    	a368 = a397;
    	a0 = a96; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 703\n");

    if(((((input == inputs[11] && (( cf==1  && a28 == a60[1]) && a86 == 4)) && (37 == a315[2])) && a156 == 10) && (((-79 < a286) && (83 >= a286)) && (a219 == 4 && ((a394 == 11 && (15 == a368[3])) && a328 == a279[1]))))) {
printf("POINT: 704\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 705\n");

    if((((a28 == a60[1] && (a331 == a380[1] && input == inputs[13])) && (37 == a315[2])) && (a357 == 9 && (((-79 < a286) && (83 >= a286)) && ((((a156 == 10 &&  cf==1 ) && a86 == 4) && (57 == a350[2])) && a268 == 32))))) {
printf("POINT: 706\n");
    	a84 -= (a84 - 20) < a84 ? 2 : 0;
printf("POINT: 708\n");
    	cf = 0;
    	a180 = a164[(a156 - 4)];
    	a182 = a59[((a156 - a394) - -3)];
    	a28 = a60[((a394 / a394) - 1)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 709\n");

    if((((a268 == 32 && a227 == 32) && ((-156 < a329) && (3 >= a329))) && (((((((a28 == a60[1] &&  cf==1 ) && a86 == 4) && (37 == a315[2])) && (21 == a288[1])) && input == inputs[2]) && a223 == a343[1]) && a156 == 10))) {
printf("POINT: 710\n");
    	cf = 0;
    	a156 = (a271 - -2);
    	a151 = ((a394 + a357) + -10); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 711\n");

    if(((((-72 < a396) && (16 >= a396)) && (a394 == 11 && (a271 == 11 && (a28 == a60[1] && (((21 < a340) && (53 >= a340)) && (a86 == 4 && ( cf==1  && a156 == 10))))))) && ((input == inputs[1] && (37 == a315[2])) && a268 == 32))) {
printf("POINT: 712\n");
    	cf = 0;
printf("POINT: 713\n");

    	if((((a111 == 7 && (a157 == 9 || a28 == a60[6])) || a264 == a290[1]) || !(a20 == 32))) {
printf("POINT: 714\n");
    	a80 = (a394 - -3);
    	a125 = (((((a286 * a329) + -13727) + -2255) - -19965) + -19165);
    	a28 = a60[(a219 - -1)]; 
    	}else {
printf("POINT: 716\n");
    	a396 = ((((a396 % 43) + -27) - -13233) + -13233);
    	a282 = 34 ;
    	a340 = ((((a340 % 15) + 35) + 2) + 2);
    	a328 = a279[5];
    	a180 = a164[((a86 / a394) - -1)];
    	a223 = a343[4];
    	a331 = a380[3];
    	a15 = 35 ;
    	a227 = 35 ;
    	a268 = 34 ;
    	a329 = ((((((a329 * 5) % 79) - 76) * 5) % 79) + -75);
    	a206 = 36 ;
    	a271 = 15;
    	a350 = a377;
    	a368 = a293;
    	a288 = a399;
    	a315 = a273;
    	a219 = 9;
    	a28 = a60[(a357 - 9)];
    	}printf("%d\n", 26);  
    } 
printf("POINT: 717\n");

    if((((21 == a288[1]) && (a331 == a380[1] && ((a311 == a298[1] && ((15 == a368[3]) && a268 == 32)) && a28 == a60[1]))) && (((a86 == 4 && (a156 == 10 &&  cf==1 )) && input == inputs[0]) && ((21 < a340) && (53 >= a340))))) {
printf("POINT: 718\n");
    	cf = 0;
printf("POINT: 719\n");

    	if((a157 == 9 || 291 < a286)) {
printf("POINT: 720\n");
    	a32 = (a86 + 12);
    	a264 = a290[((a271 / a394) + -1)];
    	a28 = a60[((a357 - a86) - 1)]; 
    	}else {
printf("POINT: 722\n");
    	a206 = 32 ;
    	a15 = 35 ;
    	a396 = ((((a396 % 43) - 28) / 5) + 8);
    	a329 = ((((a329 * 5) % 83) - -86) - 0);
    	a282 = 36 ;
    	a28 = a60[(a271 + -11)];
    	a368 = a371;
    	a219 = 4;
    	a315 = a273;
    	a223 = a343[5];
    	a268 = 36 ;
    	a331 = a380[6];
    	a227 = 34 ;
    	a350 = a366;
    	a288 = a270;
    	a328 = a279[2];
    	a340 = ((((a340 + 24016) - 23963) + 11058) + -11056);
    	a180 = a164[(a357 + -8)];
    	a271 = 13;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 723\n");

    if((((a282 == 32 && (((-156 < a329) && (3 >= a329)) && (a156 == 10 && (a219 == 4 && (a394 == 11 && (a28 == a60[1] && ( cf==1  && input == inputs[6]))))))) && ((-72 < a396) && (16 >= a396))) && ((57 == a350[2]) && a86 == 4))) {
printf("POINT: 724\n");
    	cf = 0;
printf("POINT: 725\n");

    	if(a267 == 4) {
printf("POINT: 726\n");
    	a264 = a290[(a271 + -10)];
    	a21 = 35 ;
    	a28 = a60[((a394 + a394) - 18)]; 
    	}else {
printf("POINT: 728\n");
    	a264 = a290[(a219 + 3)];
    	a132 = a91[((a394 + a394) + -18)];
    	a28 = a60[(a271 - 7)];
    	}printf("%d\n", 18);  
    } 
printf("POINT: 729\n");

    if((((((21 < a340) && (53 >= a340)) && (((a219 == 4 && (15 == a368[3])) && a223 == a343[1]) && a86 == 4)) && a271 == 11) && (((-72 < a396) && (16 >= a396)) && ((a28 == a60[1] && (input == inputs[7] &&  cf==1 )) && a156 == 10)))) {
printf("POINT: 730\n");
    	a199 -= (a199 - 20) < a199 ? 3 : 0;
printf("POINT: 732\n");
    	cf = 0;
    	a115 = a185[((a219 * a357) - 29)];
    	a156 = (a86 + 3); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 733\n");

    if((((((a28 == a60[1] && (21 == a288[1])) && a311 == a298[1]) && ((-156 < a329) && (3 >= a329))) && a271 == 11) && (((21 < a340) && (53 >= a340)) && ((a86 == 4 && (( cf==1  && input == inputs[14]) && a156 == 10)) && (37 == a315[2]))))) {
printf("POINT: 734\n");
    	cf = 0;
printf("POINT: 735\n");

    	if((!(a112 == 10) && (((224 < a396 && a112 == 9) || !(a130 == a29[0])) && a166 == a26[0]))) {
printf("POINT: 736\n");
    	a188 = a43;
    	a28 = a60[(a357 + -6)];
    	a136 = (a219 - -8); 
    	}else {
printf("POINT: 738\n");
    	a115 = a185[(a156 + -3)];
    	a156 = (a219 + 3);
    	}printf("%d\n", 22);  
    } 
printf("POINT: 739\n");

    if((((57 == a350[2]) && (a357 == 9 && (a328 == a279[1] && (a86 == 4 && (a28 == a60[1] &&  cf==1 ))))) && ((a156 == 10 && ((input == inputs[3] && a268 == 32) && ((-156 < a329) && (3 >= a329)))) && a206 == 32))) {
printf("POINT: 740\n");
    	cf = 0;
    	a125 = ((((a340 * a329) / 5) - 75) + -8618);
    	a80 = (a271 + 3);
    	a28 = a60[((a357 + a86) - 8)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 741\n");

    if(((((a28 == a60[1] && (input == inputs[4] &&  cf==1 )) && a86 == 4) && a394 == 11) && (a357 == 9 && (((37 == a315[2]) && (a156 == 10 && (a271 == 11 && a219 == 4))) && ((-156 < a329) && (3 >= a329)))))) {
printf("POINT: 742\n");
    	a78 -= (a78 - 20) < a78 ? 1 : 0;
printf("POINT: 744\n");
    	cf = 0;
    	a156 = (a357 + 4);
    	a188 = a117;
    	a28 = a60[((a394 + a357) + -17)]; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm93(int input) {
printf("POINT: 745\n");

    if((((( cf==1  && a156 == 10) && a86 == 5) && a271 == 11) && ((37 == a315[2]) && ((a28 == a60[1] && ((a206 == 32 && (a268 == 32 && input == inputs[12])) && ((-156 < a329) && (3 >= a329)))) && a394 == 11)))) {
printf("POINT: 746\n");
    	cf = 0;
printf("POINT: 747\n");

    	if(a151 == 10) {
printf("POINT: 748\n");
    	a28 = a60[(a271 + -8)];
    	a223 = a343[6];
    	a227 = 32 ;
    	a329 = (((a329 * 5) - -21038) / 5);
    	a188 = a117;
    	a156 = a394; 
    	}else {
printf("POINT: 750\n");
    	a115 = a185[(a156 + -3)];
    	a156 = ((a357 / a219) - -5);
    	}printf("%d\n", 18);  
    } 
printf("POINT: 751\n");

    if(((((((a86 == 5 && ( cf==1  && input == inputs[0])) && a28 == a60[1]) && (37 == a315[2])) && ((21 < a340) && (53 >= a340))) && (15 == a368[3])) && (a219 == 4 && (a331 == a380[1] && (((-79 < a286) && (83 >= a286)) && a156 == 10))))) {
printf("POINT: 752\n");
    	cf = 0;
printf("POINT: 753\n");

    	if(((88 == a0[4]) && (22 == a139[4]))) {
printf("POINT: 754\n");
    	a315 = a273;
    	a115 = a185[(a219 - 4)];
    	a156 = (a219 - -3); 
    	}else {
printf("POINT: 756\n");
    	a219 = 4;
    	a227 = 35 ;
    	a396 = ((((a396 - -96) * 5) % 103) + 99);
    	a93 = (a86 - -11);
    	a311 = a298[3];
    	a315 = a273;
    	a394 = 14;
    	a288 = a270;
    	a206 = 36 ;
    	a271 = 17;
    	a329 = ((((((a329 % 79) - 75) + 10532) * 2) % 79) + -136);
    	a357 = 12;
    	a223 = a343[6];
    	a99 = (a93 - 8);
    	a340 = (((((a340 % 15) - -25) * 10) / 9) + 2);
    	a282 = 32 ;
    	a286 = ((((a286 + 185) * 5) % 103) - -187);
    	a350 = a377;
    	a268 = 35 ;
    	a328 = a279[7];
    	a331 = a380[1];
    	a368 = a293;
    	a28 = a60[((a86 * a86) + -18)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 757\n");

    if(((((((-79 < a286) && (83 >= a286)) && (a394 == 11 && ((a156 == 10 && ( cf==1  && a86 == 5)) && a206 == 32))) && (21 == a288[1])) && input == inputs[13]) && ((a219 == 4 && a271 == 11) && a28 == a60[1]))) {
printf("POINT: 758\n");
    	cf = 0;
printf("POINT: 759\n");

    	if((!(a206 == 36) && (!(a219 == 10) && ((a180 == a164[3] || (108 == a188[3])) && !(a267 == 4))))) {
printf("POINT: 760\n");
    	a328 = a279[6];
    	a268 = 36 ;
    	a286 = (((a286 * 5) - -19220) + 10303);
    	a206 = 36 ;
    	a331 = a380[2];
    	a394 = 17;
    	a28 = a60[(a357 - 5)];
    	a368 = a293;
    	a315 = a295;
    	a311 = a298[2];
    	a340 = ((((a340 % 15) + 26) / 5) * 5);
    	a219 = 6;
    	a282 = 34 ;
    	a396 = (((((a396 * 5) * 5) / 5) % 43) - 27);
    	a350 = a366;
    	a351 = 32 ;
    	a264 = a290[(a271 + -7)];
    	a329 = ((((a329 + -5450) * -1) / 10) * 5);
    	a288 = a399;
    	a227 = 35 ;
    	a271 = 12;
    	a223 = a343[4];
    	a357 = 12; 
    	}else {
printf("POINT: 762\n");
    	a125 = (((((a286 * a286) - -17890) - 9870) * 10) / 9);
    	a28 = a60[a86];
    	a154 = ((a357 / a86) + 6);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 763\n");

    if(((input == inputs[2] && ((((-72 < a396) && (16 >= a396)) && (37 == a315[2])) && a156 == 10)) && (((((a86 == 5 && ( cf==1  && a28 == a60[1])) && a331 == a380[1]) && (21 == a288[1])) && a206 == 32) && a357 == 9))) {
printf("POINT: 764\n");
    	cf = 0;
    	a396 = ((((a396 % 43) - 28) + -1) - 0);
    	a368 = a371;
    	a282 = 34 ;
    	a311 = a298[4];
    	a350 = a336;
    	a328 = a279[1];
    	a271 = 14;
    	a93 = ((a86 - a394) + 17);
    	a219 = 10;
    	a268 = 34 ;
    	a329 = ((((a329 + 8436) / 5) + -12065) - -22930);
    	a394 = 11;
    	a331 = a380[1];
    	a349 = 34 ;
    	a288 = a270;
    	a340 = (((a340 + 14514) - -11329) + 1914);
    	a357 = 12;
    	a315 = a295;
    	a206 = 35 ;
    	a227 = 34 ;
    	a286 = (((a286 * 5) + 16650) - -7263);
    	a28 = a60[((a156 + a93) + -14)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 765\n");

    if((((((21 < a340) && (53 >= a340)) && (a394 == 11 && (((15 == a368[3]) && ((-156 < a329) && (3 >= a329))) && ((-72 < a396) && (16 >= a396))))) && a156 == 10) && (a328 == a279[1] && (a28 == a60[1] && ((input == inputs[7] &&  cf==1 ) && a86 == 5))))) {
printf("POINT: 766\n");
    	a39 -= (a39 - 20) < a39 ? 3 : 0;
printf("POINT: 768\n");
    	cf = 0;
    	a28 = a60[((a357 + a156) + -17)];
    	a161 = (a357 - 5);
    	a329 = (((((a329 - -8458) - 13417) / 5) * -2) / 10);
    	a350 = a336;
    	a396 = ((((a396 % 43) - 27) - -28875) + -28876);
    	a219 = 4;
    	a206 = 32 ;
    	a271 = 11;
    	a394 = 10;
    	a223 = a343[7];
    	a227 = 35 ;
    	a368 = a293;
    	a331 = a380[0];
    	a328 = a279[6];
    	a268 = 33 ;
    	a288 = a270;
    	a286 = ((((a286 - 12021) * 10) / 9) * 2);
    	a282 = 32 ;
    	a340 = ((((((a340 - -72) * 9) / 10) / 5) * 39) / 10);
    	a56 = 32 ;
    	a311 = a298[7];
    	a315 = a321;
    	a357 = 12; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 769\n");

    if(((a357 == 9 && (((57 == a350[2]) && (input == inputs[11] && (a86 == 5 &&  cf==1 ))) && a311 == a298[1])) && ((((a28 == a60[1] && ((-79 < a286) && (83 >= a286))) && a394 == 11) && a156 == 10) && (21 == a288[1])))) {
printf("POINT: 770\n");
    	cf = 0;
    	a264 = a290[(a357 + -8)];
    	a21 = 36 ;
    	a28 = a60[((a86 / a219) - -3)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 771\n");

    if(((a219 == 4 && ((15 == a368[3]) && ((a156 == 10 && (input == inputs[1] &&  cf==1 )) && a28 == a60[1]))) && ((21 == a288[1]) && (a271 == 11 && (a86 == 5 && (((-79 < a286) && (83 >= a286)) && a394 == 11)))))) {
printf("POINT: 772\n");
    	cf = 0;
printf("POINT: 773\n");

    	if((a166 == a26[1] || ((a143 == 9 && !(a268 == 35)) && !(41 == a315[0])))) {
printf("POINT: 774\n");
    	a396 = ((((a396 - 9084) * 3) % 43) - -13);
    	a350 = a366;
    	a271 = 13;
    	a328 = a279[3];
    	a331 = a380[1];
    	a315 = a273;
    	a144 = 36 ;
    	a227 = 35 ;
    	a206 = 34 ;
    	a264 = a290[(a357 - 7)];
    	a268 = 34 ;
    	a286 = ((((a286 % 80) + 2) + -10397) - -10398);
    	a223 = a343[3];
    	a28 = a60[((a156 * a219) + -36)];
    	a219 = 5; 
    	}else {
printf("POINT: 776\n");
    	a156 = (a271 + -4);
    	a115 = a185[((a86 * a394) + -51)];
    	}printf("%d\n", 25);  
    } 
printf("POINT: 777\n");

    if((((57 == a350[2]) && (input == inputs[14] && (a394 == 11 && ((a28 == a60[1] && ((a156 == 10 &&  cf==1 ) && a86 == 5)) && a206 == 32)))) && (((-72 < a396) && (16 >= a396)) && (a223 == a343[1] && a227 == 32)))) {
printf("POINT: 778\n");
    	cf = 0;
    	a151 = ((a156 * a394) - 95);
    	a156 = (a357 - -4); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 779\n");

    if(((a227 == 32 && ((21 == a288[1]) && a28 == a60[1])) && (a331 == a380[1] && (a328 == a279[1] && (a271 == 11 && ((a156 == 10 && (a86 == 5 && ( cf==1  && input == inputs[3]))) && a282 == 32)))))) {
printf("POINT: 780\n");
    	cf = 0;
    	a328 = a279[5];
    	a223 = a343[5];
    	a206 = 34 ;
    	a28 = a60[(a86 - 1)];
    	a350 = a366;
    	a286 = ((((a286 - -28701) + 990) - 44228) + 43301);
    	a396 = (((((a396 % 43) - 26) * 5) % 43) + -26);
    	a227 = 32 ;
    	a268 = 36 ;
    	a264 = a290[(a219 - 2)];
    	a271 = 13;
    	a144 = 36 ;
    	a315 = a295;
    	a331 = a380[5];
    	a219 = 9; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 781\n");

    if(((a271 == 11 && ((( cf==1  && a156 == 10) && a86 == 5) && a227 == 32)) && (input == inputs[10] && ((((a28 == a60[1] && ((-72 < a396) && (16 >= a396))) && (37 == a315[2])) && a282 == 32) && a394 == 11)))) {
printf("POINT: 782\n");
    	cf = 0;
    	a86 = ((a394 + a156) + -18); 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 783\n");

    if((((((input == inputs[6] && ((a357 == 9 && a227 == 32) && a156 == 10)) && (21 == a288[1])) && a394 == 11) && a206 == 32) && ((a28 == a60[1] && (a86 == 5 &&  cf==1 )) && a219 == 4))) {
printf("POINT: 784\n");
    	cf = 0;
    	a368 = a293;
    	a28 = a60[(a357 + -9)];
    	a328 = a279[3];
    	a288 = a399;
    	a219 = 7;
    	a315 = a273;
    	a227 = 34 ;
    	a331 = a380[1];
    	a396 = ((((a396 % 43) + -26) / 5) / 5);
    	a180 = a164[(a357 - 5)];
    	a329 = (((((a329 * 5) * 5) / 5) % 83) - -87);
    	a286 = ((((a286 + 186) + -5) + 5473) - 5471);
    	a340 = (((a340 - -66) + -11903) - -11886);
    	a93 = a394;
    	a311 = a298[1];
    	a394 = 15;
    	a357 = 11; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 785\n");

    if(((((((a156 == 10 && (a86 == 5 &&  cf==1 )) && a28 == a60[1]) && a311 == a298[1]) && a331 == a380[1]) && ((-72 < a396) && (16 >= a396))) && (((-156 < a329) && (3 >= a329)) && (a206 == 32 && (a268 == 32 && input == inputs[4]))))) {
printf("POINT: 786\n");
    	cf = 0;
    	a115 = a185[(a219 + -3)];
    	a156 = (a219 - -3); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 787\n");

    if((((a394 == 11 && (a223 == a343[1] && (a227 == 32 && a357 == 9))) && ((-79 < a286) && (83 >= a286))) && ((a86 == 5 && (a156 == 10 && (a28 == a60[1] && ( cf==1  && input == inputs[5])))) && (37 == a315[2])))) {
printf("POINT: 788\n");
    	cf = 0;
    	a394 = 17;
    	a271 = 16;
    	a206 = 36 ;
    	a268 = 36 ;
    	a227 = 35 ;
    	a163 = ((((a286 * a286) - 22077) / 5) + -4944);
    	a328 = a279[3];
    	a311 = a298[7];
    	a331 = a380[1];
    	a368 = a371;
    	a340 = ((((a340 / 5) + 38) * 5) + -187);
    	a329 = (((a329 + 9890) + 6184) * 1);
    	a180 = a164[((a156 * a156) - 93)];
    	a28 = a60[(a357 + -9)];
    	a350 = a377;
    	a219 = 8;
    	a223 = a343[7];
    	a396 = ((((a396 % 43) + -27) - -1) + -2);
    	a286 = ((((a286 * 5) * 5) % 80) + 1);
    	a288 = a399;
    	a282 = 36 ;
    	a315 = a273;
    	a357 = 9; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 789\n");

    if(((a394 == 11 && ((((-72 < a396) && (16 >= a396)) && a223 == a343[1]) && a156 == 10)) && (((-79 < a286) && (83 >= a286)) && (((a227 == 32 && (input == inputs[8] && (a86 == 5 &&  cf==1 ))) && a311 == a298[1]) && a28 == a60[1])))) {
printf("POINT: 790\n");
    	cf = 0;
    	a188 = a117;
    	a156 = ((a357 * a357) + -68);
    	a28 = a60[((a271 + a219) + -12)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 791\n");

    if((((37 == a315[2]) && (((a219 == 4 && input == inputs[9]) && ((-79 < a286) && (83 >= a286))) && (15 == a368[3]))) && (((-156 < a329) && (3 >= a329)) && (a268 == 32 && ((a86 == 5 && (a156 == 10 &&  cf==1 )) && a28 == a60[1]))))) {
printf("POINT: 792\n");
    	cf = 0;
    	a263 = 32 ;
    	a28 = a60[(a394 - 4)];
    	a93 = (a219 + 9); 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm94(int input) {
printf("POINT: 793\n");

    if((((a156 == 10 && (a219 == 4 && (a357 == 9 && (a223 == a343[1] && ((-72 < a396) && (16 >= a396)))))) && ((a311 == a298[1] && (((a28 == a60[1] &&  cf==1 ) && input == inputs[3]) && ((-79 < a286) && (83 >= a286)))) && a86 == 7)) && a171 <= -75)) {
printf("POINT: 794\n");
    	cf = 0;
    	a223 = a343[(a86 + -7)];
    	a328 = a279[(a271 + -11)];
    	a206 = 33 ;
    	a329 = ((((a340 * a340) + -8731) * 3) * 1);
    	a331 = a380[(a271 + -11)];
    	a282 = 33 ;
    	a286 = ((((((a286 * a329) % 14999) - 6564) - -17705) % 14960) + -15038);
    	a396 = ((((a396 * a340) - 4967) - 20286) - 933);
    	a271 = (a394 + -1);
    	a143 = a176[((a156 * a357) + -88)];
    	a350 = a336;
    	a264 = a290[(a394 - 8)];
    	a28 = a60[a219];
    	a268 = 33 ;
    	a219 = (a394 + -8);
    	a227 = 33 ;
    	a340 = (((((a340 * a286) % 14999) - 194) - 12047) / 5);
    	a394 = 10; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 795\n");

    if(((a282 == 32 && ((a394 == 11 && a206 == 32) && a86 == 7)) && (a223 == a343[1] && ((input == inputs[8] && ((21 == a288[1]) && (( cf==1  && a28 == a60[1]) && a156 == 10))) && ((-79 < a286) && (83 >= a286)))))) {
printf("POINT: 796\n");
    	cf = 0;
    	a396 = ((((32 * -23) / 10) * 5) * 5);
    	a315 = a321;
    	a282 = 33 ;
    	a227 = 33 ;
    	a329 = (((((a396 * a396) % 14999) + -12274) - 9338) * 1);
    	a268 = 33 ;
    	a206 = 33 ;
    	a286 = ((((a286 * a340) / 5) / 5) + -15599);
    	a328 = a279[(a394 - 11)];
    	a271 = a156;
    	a223 = a343[(a271 + -10)];
    	a264 = a290[(a219 + -1)];
    	a288 = a297;
    	a219 = ((a394 * a394) - 118);
    	a340 = (((((a396 * a329) % 14999) - -4708) * -1) + -5968);
    	a350 = a336;
    	a28 = a60[(a394 - 7)];
    	a143 = a176[(a86 + -3)];
    	a357 = (a394 + -3);
    	a311 = a298[(a357 / a394)];
    	a331 = a380[(a156 + -10)];
    	a394 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 797\n");

    if((((a28 == a60[1] && (a268 == 32 && a357 == 9)) && a282 == 32) && (((input == inputs[13] && (((a86 == 7 &&  cf==1 ) && a156 == 10) && a271 == 11)) && a206 == 32) && a223 == a343[1]))) {
printf("POINT: 798\n");
    	cf = 0;
    	a340 = ((((a340 * a396) * 5) - 9067) + -618);
    	a93 = ((a271 * a271) - 109);
    	a223 = a343[(a271 - 11)];
    	a130 = a29[((a219 * a271) - 39)];
    	a227 = 33 ;
    	a288 = a297;
    	a329 = ((((((a329 * a340) % 14999) * 2) % 14922) + -15077) * 1);
    	a350 = a336;
    	a219 = (a271 + -8);
    	a28 = a60[((a156 * a86) + -63)];
    	a357 = (a86 - -1);
    	a315 = a321;
    	a282 = 33 ;
    	a206 = 33 ;
    	a311 = a298[(a93 + -12)];
    	a328 = a279[(a271 - 11)];
    	a331 = a380[(a271 - 11)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 799\n");

    if(((a394 == 11 && ((((-79 < a286) && (83 >= a286)) && (input == inputs[5] && (a357 == 9 && (a219 == 4 && a156 == 10)))) && (57 == a350[2]))) && ((a86 == 7 && (a28 == a60[1] &&  cf==1 )) && (21 == a288[1])))) {
printf("POINT: 800\n");
    	cf = 0;
printf("POINT: 801\n");

    	if(a182 == a59[7]) {
printf("POINT: 802\n");
    	 
    	}else {
printf("POINT: 804\n");
    	a268 = 33 ;
    	a169 = ((((((a340 * a286) * 5) % 14919) - 15079) / 5) + -14338);
    	a206 = 33 ;
    	a282 = 33 ;
    	a340 = ((((a396 * a396) + -16470) + -2142) - 8284);
    	a311 = a298[(a357 - 9)];
    	a28 = a60[(a357 - 5)];
    	a357 = (a86 - -1);
    	a264 = a290[(a271 - 6)];
    	a329 = ((((a329 * a286) + -13769) + -1494) * 1);
    	a227 = 33 ;
    	a350 = a336;
    	a288 = a297;
    	a328 = a279[(a394 + -11)];
    	a331 = a380[((a156 / a219) + -2)];
    	a223 = a343[(a219 + -4)];
    	a315 = a321;
    	a286 = (((((a286 * a396) + -19396) * 1) * 10) / 9);
    	a271 = a156;
    	a394 = a156;
    	a219 = 3;
    	a396 = (((((a396 * a329) % 14999) / 5) + -22279) * 1);
    	}printf("%d\n", 24);  
    } 
printf("POINT: 805\n");

    if((((((a28 == a60[1] && ( cf==1  && input == inputs[7])) && a156 == 10) && a268 == 32) && a206 == 32) && ((a271 == 11 && (a86 == 7 && (a282 == 32 && ((-79 < a286) && (83 >= a286))))) && (57 == a350[2])))) {
printf("POINT: 806\n");
    	cf = 0;
    	a357 = a156;
    	a56 = 35 ;
    	a394 = (a357 + 2);
    	a268 = 34 ;
    	a271 = (a86 + 5);
    	a311 = a298[(a271 - 10)];
    	a368 = a293;
    	a328 = a279[((a394 * a357) - 118)];
    	a28 = a60[(a219 + -2)];
    	a350 = a377;
    	a206 = 34 ;
    	a219 = ((a394 / a357) - -4);
    	a340 = (((((a340 * a329) % 37) + 90) + 0) * 1);
    	a331 = a380[(a357 - 8)];
    	a286 = (((((((a286 * a396) % 103) - -187) - -2) * 5) % 103) - -163);
    	a315 = a273;
    	a396 = ((((((a396 * a340) + -6123) % 103) + 165) * 9) / 10);
    	a0 = a72; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm12(int input) {
printf("POINT: 807\n");

    if((((a282 == 32 && a357 == 9) && ((21 < a340) && (53 >= a340))) && ((a268 == 32 && (( cf==1  && a86 == 4) && a223 == a343[1])) && (15 == a368[3])))) {
printf("POINT: 808\n");
    	calculate_outputm92(input);
    } 
printf("POINT: 809\n");

    if(((((-79 < a286) && (83 >= a286)) && (a282 == 32 && (a271 == 11 && ((a86 == 5 &&  cf==1 ) && a311 == a298[1])))) && ((37 == a315[2]) && a331 == a380[1]))) {
printf("POINT: 810\n");
    	calculate_outputm93(input);
    } 
printf("POINT: 811\n");

    if(((( cf==1  && a86 == 7) && a357 == 9) && ((((((-79 < a286) && (83 >= a286)) && (57 == a350[2])) && a311 == a298[1]) && (37 == a315[2])) && a227 == 32))) {
printf("POINT: 812\n");
    	calculate_outputm94(input);
    } 
}
 void calculate_outputm95(int input) {
printf("POINT: 813\n");

    if(((a268 == 32 && (((( cf==1  && input == inputs[10]) && a28 == a60[1]) && a86 == 3) && a271 == 11)) && (a357 == 9 && ((21 == a288[1]) && ((a282 == 32 && a328 == a279[1]) && a156 == 11))))) {
printf("POINT: 814\n");
    	cf = 0;
printf("POINT: 815\n");

    	if((((11 == a368[5]) && (a219 == 5 || ((54 == a350[5]) && a28 == 8))) && a125 <=  -36)) {
printf("POINT: 816\n");
    	a288 = a399;
    	a396 = (((a396 * 5) - -3461) - -19894);
    	a125 = (((((a329 * a329) / 5) / 5) + -17533) + 22589);
    	a28 = a60[(a271 + -6)];
    	a154 = (a86 - -5);
    	a329 = (((((a329 + 165) * 5) + 23393) % 83) + 27); 
    	}else {
printf("POINT: 818\n");
    	a154 = ((a156 / a86) - -8);
    	a28 = a60[(a271 + -6)];
    	a125 = (((((a329 * a329) * 1) - -3149) - 27041) + 27075);
    	}printf("%d\n", 20);  
    } 
printf("POINT: 819\n");

    if(((((57 == a350[2]) && (a86 == 3 && (a331 == a380[1] && ((21 < a340) && (53 >= a340))))) && a227 == 32) && (((-79 < a286) && (83 >= a286)) && (((a156 == 11 && (input == inputs[13] &&  cf==1 )) && a271 == 11) && a28 == a60[1])))) {
printf("POINT: 820\n");
    	a189 += (a189 + 20) > a189 ? 3 : 0;
printf("POINT: 822\n");
    	cf = 0;
printf("POINT: 823\n");

    	if((a132 == a91[4] || !(a166 == 13))) {
printf("POINT: 824\n");
    	a47 = (a219 + 9);
    	a155 = ((((a329 * a396) / 5) + 2421) * 5);
    	a28 = a60[(a394 + -5)]; 
    	}else {
printf("POINT: 826\n");
    	a206 = 34 ;
    	a288 = a399;
    	a368 = a293;
    	a315 = a295;
    	a351 = 32 ;
    	a350 = a377;
    	a396 = (((a396 - -4770) * 5) - -676);
    	a328 = a279[6];
    	a329 = (((a329 + 413) - -9325) - -953);
    	a219 = 10;
    	a331 = a380[4];
    	a28 = a60[(a271 + -7)];
    	a268 = 32 ;
    	a311 = a298[7];
    	a357 = 11;
    	a223 = a343[7];
    	a264 = a290[((a394 + a156) - 18)];
    	a227 = 32 ;
    	a286 = (((((a286 + 196) * 9) / 10) * 10) / 9);
    	a340 = (((a340 + 15986) + 9011) - 16013);
    	a394 = 16;
    	a282 = 34 ;
    	a271 = 16;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 827\n");

    if(((((input == inputs[9] &&  cf==1 ) && a28 == a60[1]) && a282 == 32) && (a223 == a343[1] && (a311 == a298[1] && (a219 == 4 && ((((37 == a315[2]) && ((-156 < a329) && (3 >= a329))) && a156 == 11) && a86 == 3)))))) {
printf("POINT: 828\n");
    	cf = 0;
    	a75 = 36 ;
    	a155 = (((((a340 * a286) % 16) - -86) + -21284) - -21285);
    	a28 = a60[((a219 * a156) + -38)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 829\n");

    if(((a331 == a380[1] && (((-72 < a396) && (16 >= a396)) && (((a86 == 3 && ((( cf==1  && a156 == 11) && input == inputs[1]) && (15 == a368[3]))) && (37 == a315[2])) && ((-156 < a329) && (3 >= a329))))) && (a28 == a60[1] && a223 == a343[1]))) {
printf("POINT: 830\n");
    	cf = 0;
    	a154 = (a271 - 1);
    	a125 = ((((a340 * a286) + 22398) - -1839) / 5);
    	a28 = a60[(a156 - 6)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 831\n");

    if(((a28 == a60[1] && (a282 == 32 && (a328 == a279[1] && a219 == 4))) && ((((((input == inputs[12] &&  cf==1 ) && a86 == 3) && a394 == 11) && a156 == 11) && a357 == 9) && a268 == 32))) {
printf("POINT: 832\n");
    	cf = 0;
printf("POINT: 833\n");

    	if((!(a111 == 3) || (a268 == 35 && ((-36 < a125) && (168 >= a125))))) {
printf("POINT: 834\n");
    	a223 = a343[3];
    	a86 = (a394 - 6); 
    	}else {
printf("POINT: 836\n");
    	a56 = 34 ;
    	a286 = (((((a286 % 80) + 1) + 2) + 10671) + -10671);
    	a282 = 35 ;
    	a219 = 9;
    	a328 = a279[0];
    	a368 = a371;
    	a206 = 35 ;
    	a357 = 12;
    	a331 = a380[6];
    	a271 = 14;
    	a311 = a298[4];
    	a288 = a270;
    	a268 = 33 ;
    	a340 = (((a340 - -4817) * 5) + 4544);
    	a396 = (((a396 + -16240) / 5) - 23188);
    	a350 = a336;
    	a227 = 32 ;
    	a28 = a60[(a394 - 9)];
    	a111 = a195[(a86 + -2)];
    	a315 = a295;
    	a223 = a343[7];
    	a329 = (((((a329 + 29793) % 79) - 150) + -13821) - -13839);
    	a394 = 17;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 837\n");

    if(((((21 < a340) && (53 >= a340)) && (a223 == a343[1] && ((21 == a288[1]) && (a86 == 3 && ( cf==1  && a156 == 11))))) && ((37 == a315[2]) && (a28 == a60[1] && ((input == inputs[4] && a394 == 11) && ((-72 < a396) && (16 >= a396))))))) {
printf("POINT: 838\n");
    	cf = 0;
    	a288 = a399;
    	a15 = 32 ;
    	a219 = 7;
    	a180 = a164[(a357 - 8)];
    	a286 = (((a286 - -1242) * 5) + 10393);
    	a227 = 34 ;
    	a396 = (((a396 - 12529) / 5) + 6916);
    	a328 = a279[7];
    	a368 = a293;
    	a340 = ((((a340 - -64) + 1) + -27611) - -27592);
    	a331 = a380[4];
    	a329 = (((a329 - -6438) - -1157) - -16860);
    	a206 = 36 ;
    	a350 = a366;
    	a315 = a273;
    	a28 = a60[(a357 + -9)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 839\n");

    if(((((a227 == 32 && a268 == 32) && ((-156 < a329) && (3 >= a329))) && a86 == 3) && (input == inputs[2] && ((57 == a350[2]) && (a219 == 4 && (((-79 < a286) && (83 >= a286)) && (a156 == 11 && (a28 == a60[1] &&  cf==1 )))))))) {
printf("POINT: 840\n");
    	cf = 0;
    	a28 = a60[(a86 + 4)];
    	a349 = 35 ;
    	a93 = a156; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 841\n");

    if(((a282 == 32 && (((37 == a315[2]) && ((a328 == a279[1] && a223 == a343[1]) && a311 == a298[1])) && a271 == 11)) && ((a156 == 11 && ((a28 == a60[1] &&  cf==1 ) && a86 == 3)) && input == inputs[0]))) {
printf("POINT: 842\n");
    	cf = 0;
printf("POINT: 843\n");

    	if((((((53 < a340) && (129 >= a340)) || (11 == a368[5])) || 210 < a125) || !(a182 == 9))) {
printf("POINT: 844\n");
    	a396 = ((((((a396 + -15513) % 43) + 4) * 5) % 43) - 27);
    	a223 = a343[2];
    	a350 = a377;
    	a282 = 32 ;
    	a99 = (a394 - -3);
    	a28 = a60[((a357 * a99) - 119)];
    	a288 = a399;
    	a206 = 32 ;
    	a340 = (((((a340 % 15) - -30) - 3) * 10) / 9);
    	a227 = 32 ;
    	a93 = ((a219 + a271) + 1);
    	a368 = a293;
    	a315 = a273;
    	a271 = 14;
    	a268 = 32 ;
    	a286 = (((a286 - -182) - 4265) - -4251);
    	a329 = ((((((a329 + -6198) % 79) + -55) * 5) % 79) + 2);
    	a328 = a279[5];
    	a331 = a380[2];
    	a219 = 5;
    	a311 = a298[6];
    	a357 = 10;
    	a394 = 12; 
    	}else {
printf("POINT: 846\n");
    	a315 = a295;
    	a268 = 36 ;
    	a227 = 34 ;
    	a396 = (((((a396 % 43) + -28) + 8223) / 5) + -1655);
    	a286 = (((((a286 - -162) - -36) * 5) % 103) - -137);
    	a28 = a60[((a86 + a357) + -8)];
    	a350 = a377;
    	a288 = a270;
    	a264 = a290[(a357 - 9)];
    	a206 = 34 ;
    	a219 = 5;
    	a329 = ((((a329 + 28901) * 1) % 79) + -152);
    	a368 = a293;
    	a223 = a343[7];
    	a340 = (((((a340 - 27318) + -1784) + 19417) * -1) / 10);
    	a311 = a298[4];
    	a328 = a279[3];
    	a357 = 10;
    	a331 = a380[1];
    	a282 = 35 ;
    	a271 = 15;
    	a32 = (a394 + 2);
    	a394 = 15;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 847\n");

    if(((a223 == a343[1] && ((( cf==1  && a28 == a60[1]) && a156 == 11) && input == inputs[3])) && ((a86 == 3 && (a227 == 32 && ((a331 == a380[1] && ((-79 < a286) && (83 >= a286))) && ((-156 < a329) && (3 >= a329))))) && a268 == 32))) {
printf("POINT: 848\n");
    	cf = 0;
    	a223 = a343[5];
    	a315 = a273;
    	a93 = ((a357 + a357) - 8);
    	a219 = 7;
    	a282 = 32 ;
    	a340 = ((((a340 - 7955) / 5) * 10) / -9);
    	a227 = 36 ;
    	a28 = a60[(a156 + -4)];
    	a267 = ((a93 / a394) - -8);
    	a286 = (((a286 - -24127) + 2856) - -1286);
    	a311 = a298[7];
    	a331 = a380[7];
    	a396 = ((((a396 + 22775) * 1) * 10) / 9);
    	a350 = a366;
    	a206 = 32 ;
    	a328 = a279[6];
    	a288 = a270;
    	a271 = 11;
    	a357 = 10;
    	a268 = 34 ;
    	a368 = a293;
    	a329 = (((((a329 % 79) + -76) / 5) - -16384) - 16400);
    	a394 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 849\n");

    if((((((-79 < a286) && (83 >= a286)) && (a219 == 4 && a328 == a279[1])) && a268 == 32) && (input == inputs[8] && ((21 == a288[1]) && ((a86 == 3 && (( cf==1  && a156 == 11) && a28 == a60[1])) && ((-72 < a396) && (16 >= a396))))))) {
printf("POINT: 850\n");
    	cf = 0;
printf("POINT: 851\n");

    	if(((((!(a311 == 6) || a115 == a185[6]) || a75 == 32) && a161 == 6) && !(a227 == 35))) {
printf("POINT: 852\n");
    	a315 = a295;
    	a28 = a60[((a86 + a357) - 12)];
    	a282 = 34 ;
    	a368 = a371;
    	a223 = a343[6];
    	a329 = ((((a329 / 5) + 20312) + 6585) + -26905);
    	a340 = ((((a340 * 5) * 5) % 15) + 32);
    	a311 = a298[7];
    	a328 = a279[1];
    	a227 = 34 ;
    	a350 = a366;
    	a180 = a164[(a219 + -4)];
    	a112 = (a357 - 2);
    	a357 = 11;
    	a331 = a380[2];
    	a219 = 5; 
    	}else {
printf("POINT: 854\n");
    	a132 = a91[a219];
    	a28 = a60[(a156 - 7)];
    	a264 = a290[(a357 - 2)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 855\n");

    if(((((a28 == a60[1] && a311 == a298[1]) && ((-72 < a396) && (16 >= a396))) && a268 == 32) && ((21 == a288[1]) && ((37 == a315[2]) && (a282 == 32 && (((a156 == 11 &&  cf==1 ) && input == inputs[11]) && a86 == 3)))))) {
printf("POINT: 856\n");
    	a50 -= (a50 - 20) < a50 ? 2 : 0;
printf("POINT: 858\n");
    	cf = 0;
    	a28 = a60[((a394 * a394) - 117)];
    	a351 = 34 ;
    	a264 = a290[(a357 + -5)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 859\n");

    if(((a328 == a279[1] && (a268 == 32 && ((-156 < a329) && (3 >= a329)))) && (((21 < a340) && (53 >= a340)) && (((a357 == 9 && ((( cf==1  && input == inputs[5]) && a86 == 3) && a28 == a60[1])) && a156 == 11) && a227 == 32)))) {
printf("POINT: 860\n");
    	cf = 0;
    	a329 = ((((a329 - -166) - 4800) - -30023) + -25225);
    	a206 = 36 ;
    	a28 = a60[(a394 - 11)];
    	a180 = a164[(a357 + -7)];
    	a223 = a343[2];
    	a394 = 14;
    	a268 = 34 ;
    	a288 = a270;
    	a328 = a279[4];
    	a368 = a293;
    	a315 = a273;
    	a282 = 34 ;
    	a331 = a380[2];
    	a219 = 5;
    	a227 = 34 ;
    	a350 = a366;
    	a181 = a98; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 861\n");

    if((((input == inputs[7] && ((21 == a288[1]) && ((-79 < a286) && (83 >= a286)))) && a282 == 32) && ((15 == a368[3]) && (a328 == a279[1] && ((a86 == 3 && (( cf==1  && a156 == 11) && a28 == a60[1])) && a227 == 32))))) {
printf("POINT: 862\n");
    	cf = 0;
    	a227 = 32 ;
    	a329 = ((((a329 + 161) * 9) / 10) - -18);
    	a288 = a270;
    	a340 = (((((a340 + 62) * 10) / 9) / 5) - -85);
    	a396 = (((((a396 + 155) * 9) / 10) * 10) / 9);
    	a180 = a164[((a86 + a156) + -13)];
    	a15 = 32 ;
    	a286 = (((a286 * 5) + 11799) * 2);
    	a331 = a380[1];
    	a350 = a366;
    	a28 = a60[((a219 + a394) + -15)];
    	a368 = a293;
    	a206 = 35 ;
    	a315 = a295;
    	a328 = a279[1];
    	a219 = 6; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 863\n");

    if(((input == inputs[6] && ((a86 == 3 && (((a28 == a60[1] &&  cf==1 ) && a156 == 11) && a227 == 32)) && a394 == 11)) && ((a206 == 32 && (a282 == 32 && (57 == a350[2]))) && a223 == a343[1]))) {
printf("POINT: 864\n");
    	a120 += (a120 + 20) > a120 ? 2 : 0;
printf("POINT: 866\n");
    	cf = 0;
    	a288 = a399;
    	a329 = (((a329 + 28020) - -1080) - -623);
    	a396 = ((((a396 / 5) / 5) + 8222) + -8020);
    	a328 = a279[2];
    	a340 = (((a340 + 47) * 5) / 5);
    	a219 = 9;
    	a227 = 32 ;
    	a28 = a60[(a357 + -9)];
    	a180 = a164[((a271 + a156) + -22)];
    	a331 = a380[6];
    	a394 = 11;
    	a350 = a377;
    	a112 = ((a86 * a156) - 25);
    	a311 = a298[5];
    	a206 = 34 ;
    	a282 = 32 ;
    	a315 = a295;
    	a223 = a343[7];
    	a368 = a293;
    	a268 = 36 ;
    	a271 = 13;
    	a357 = 11; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 867\n");

    if(((a156 == 11 && (((input == inputs[14] && ( cf==1  && a28 == a60[1])) && a328 == a279[1]) && a282 == 32)) && (((-72 < a396) && (16 >= a396)) && (((a219 == 4 && a311 == a298[1]) && a268 == 32) && a86 == 3)))) {
printf("POINT: 868\n");
    	cf = 0;
    	a141 = ((((a396 * a396) - 8181) * 3) * 1);
    	a156 = ((a271 + a219) - 7); 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm96(int input) {
printf("POINT: 869\n");

    if(((((21 < a340) && (53 >= a340)) && ((a394 == 11 && a268 == 32) && a156 == 11)) && ((((a86 == 4 && ((a28 == a60[1] &&  cf==1 ) && input == inputs[9])) && a282 == 32) && a311 == a298[1]) && a331 == a380[1]))) {
printf("POINT: 870\n");
    	cf = 0;
    	a394 = (a357 - -3);
    	a328 = a279[(a394 + -10)];
    	a56 = 34 ;
    	a350 = a377;
    	a28 = a60[(a357 - 7)];
    	a368 = a293;
    	a219 = ((a394 * a394) + -139);
    	a111 = a195[((a156 + a271) + -21)];
    	a331 = a380[(a357 - 7)];
    	a340 = (((((a286 * a286) + 1648) * 3) % 37) + 92);
    	a227 = 33 ;
    	a311 = a298[(a86 + -2)];
    	a315 = a273;
    	a288 = a399;
    	a396 = ((((((a396 * a340) * 3) % 103) - -121) + -25328) - -25326);
    	a329 = (((((a329 * a340) + -8470) % 83) + 155) - 48);
    	a206 = 34 ;
    	a271 = (a357 - -3);
    	a268 = 34 ;
    	a282 = 34 ;
    	a223 = a343[(a219 - 3)];
    	a286 = ((((a286 / 5) + 139) * 9) / 10);
    	a357 = (a394 - 2); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 871\n");

    if(((((input == inputs[10] && (a28 == a60[1] &&  cf==1 )) && ((-72 < a396) && (16 >= a396))) && (57 == a350[2])) && (a219 == 4 && ((a156 == 11 && ((a86 == 4 && a331 == a380[1]) && (21 == a288[1]))) && a328 == a279[1])))) {
printf("POINT: 872\n");
    	cf = 0;
    	a157 = a64[(a156 + -7)];
    	a206 = 32 ;
    	a156 = ((a271 / a394) - -11);
    	a223 = a343[(a86 - 4)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 873\n");

    if((((((a282 == 32 && a328 == a279[1]) && a394 == 11) && ((-79 < a286) && (83 >= a286))) && a223 == a343[1]) && (((((-156 < a329) && (3 >= a329)) && (input == inputs[8] && ( cf==1  && a156 == 11))) && a28 == a60[1]) && a86 == 4))) {
printf("POINT: 874\n");
    	cf = 0;
    	a227 = 33 ;
    	a311 = a298[(a219 + -4)];
    	a368 = a397;
    	a328 = a279[((a156 / a156) + -1)];
    	a329 = ((((a329 * a340) - 10227) + 534) / 5);
    	a288 = a297;
    	a271 = ((a357 / a394) - -10);
    	a340 = (((((a286 * a396) + 18434) * 1) * 1) - 26538);
    	a28 = a60[(a86 - -3)];
    	a93 = (a394 - 2);
    	a33 = a10;
    	a357 = (a394 + -3);
    	a286 = (((((a286 * 5) - 18952) + 44331) * -1) / 10);
    	a282 = 33 ;
    	a331 = a380[(a394 - 11)]; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm97(int input) {
printf("POINT: 875\n");

    if(((a282 == 32 && ((15 == a368[3]) && (a268 == 32 && (((21 == a288[1]) && (a86 == 5 && ((57 == a350[2]) && a227 == 32))) && input == inputs[0])))) && (( cf==1  && a28 == a60[1]) && a156 == 11))) {
printf("POINT: 876\n");
    	cf = 0;
printf("POINT: 877\n");

    	if((!(a111 == 8) && a132 == a91[3])) {
printf("POINT: 878\n");
    	a350 = a377;
    	a111 = a195[((a271 * a156) - 120)];
    	a368 = a293;
    	a396 = (((((a396 * a286) % 103) - -121) + 10629) + -10629);
    	a329 = ((((((a329 * a286) % 83) + 86) + 0) - 9028) + 9030);
    	a56 = 34 ;
    	a311 = a298[(a394 + -9)];
    	a268 = 34 ;
    	a328 = a279[(a86 + -3)];
    	a315 = a273;
    	a206 = 34 ;
    	a28 = a60[(a219 - 2)];
    	a282 = 34 ;
    	a331 = a380[(a357 - 7)];
    	a357 = (a86 + 5);
    	a223 = a343[((a394 + a394) - 20)];
    	a271 = (a86 + 7);
    	a288 = a399;
    	a286 = ((((((a286 * a340) % 103) + 187) - -13836) - 39870) + 26035);
    	a227 = 33 ;
    	a219 = ((a394 * a394) - 116);
    	a340 = ((((((a340 * a396) - -1327) / 5) + 11197) % 37) + 78);
    	a394 = 12; 
    	}else {
printf("POINT: 880\n");

    	}printf("%d\n", 25);  
    } 
printf("POINT: 881\n");

    if(((a86 == 5 && (((a219 == 4 && (57 == a350[2])) && ((-72 < a396) && (16 >= a396))) && ((-156 < a329) && (3 >= a329)))) && (((a357 == 9 && (( cf==1  && a156 == 11) && input == inputs[4])) && a268 == 32) && a28 == a60[1]))) {
printf("POINT: 882\n");
    	cf = 0;
    	 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 883\n");

    if(((a328 == a279[1] && (a206 == 32 && (a357 == 9 && a394 == 11))) && ((21 == a288[1]) && (((a86 == 5 && (a28 == a60[1] && (a156 == 11 &&  cf==1 ))) && input == inputs[3]) && ((21 < a340) && (53 >= a340)))))) {
printf("POINT: 884\n");
    	cf = 0;
    	a219 = ((a86 + a86) + -7);
    	a282 = 33 ;
    	a227 = 33 ;
    	a357 = (a86 - -3);
    	a350 = a336;
    	a331 = a380[(a219 + -3)];
    	a368 = a397;
    	a271 = (a219 + 7);
    	a340 = ((((a286 * a286) + -20966) + -1975) / 5);
    	a268 = 33 ;
    	a264 = a290[(a86 + 2)];
    	a28 = a60[((a394 - a156) - -4)];
    	a328 = a279[(a357 - 8)];
    	a329 = ((((((a340 * a286) % 14999) % 14922) - 15077) * 1) - 1);
    	a132 = a91[((a86 - a86) - -5)];
    	a286 = (((((((a286 * a329) % 14999) % 14960) - 15038) * 1) + 6481) - 6483); 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm13(int input) {
printf("POINT: 885\n");

    if(((a331 == a380[1] && (((((21 < a340) && (53 >= a340)) && (a86 == 3 &&  cf==1 )) && a271 == 11) && a328 == a279[1])) && ((15 == a368[3]) && a219 == 4))) {
printf("POINT: 886\n");
    	calculate_outputm95(input);
    } 
printf("POINT: 887\n");

    if(((a223 == a343[1] && (((-156 < a329) && (3 >= a329)) && ( cf==1  && a86 == 4))) && (((-72 < a396) && (16 >= a396)) && (a311 == a298[1] && (a357 == 9 && a268 == 32))))) {
printf("POINT: 888\n");
    	calculate_outputm96(input);
    } 
printf("POINT: 889\n");

    if(((((-79 < a286) && (83 >= a286)) && (( cf==1  && a86 == 5) && a268 == 32)) && (a271 == 11 && (a282 == 32 && (((-72 < a396) && (16 >= a396)) && a206 == 32))))) {
printf("POINT: 890\n");
    	calculate_outputm97(input);
    } 
}
 void calculate_outputm99(int input) {
printf("POINT: 891\n");

    if(((((15 == a368[3]) && ((( cf==1  && a28 == a60[1]) && a156 == 12) && input == inputs[0])) && a282 == 32) && (((-72 < a396) && (16 >= a396)) && ((a157 == a64[0] && (a311 == a298[1] && a271 == 11)) && a206 == 32)))) {
printf("POINT: 892\n");
    	cf = 0;
printf("POINT: 893\n");

    	if(((a161 == 4 && (!(a351 == 32) || a131 == 4)) && !(a311 == a298[4]))) {
printf("POINT: 894\n");
    	a206 = 33 ;
    	a368 = a397;
    	a93 = (a394 + 5);
    	a311 = a298[(a271 - 11)];
    	a286 = ((((a286 * a340) + -11762) + -2582) + -497);
    	a329 = ((((a329 * a396) - 27439) * 1) * 1);
    	a268 = 33 ;
    	a394 = ((a219 * a93) + -54);
    	a328 = a279[((a93 * a93) - 256)];
    	a331 = a380[((a156 * a156) - 144)];
    	a99 = (a357 + 4);
    	a271 = (a219 + 6);
    	a282 = 33 ;
    	a315 = a273;
    	a227 = 33 ;
    	a396 = (((((a329 * a329) % 14999) - 20337) + -6882) / 5);
    	a28 = a60[(a93 - 9)];
    	a340 = (((((a340 * a286) % 14999) + -8931) + -5662) * 1);
    	a357 = (a219 + 4);
    	a219 = (a93 + -13); 
    	}else {
printf("POINT: 896\n");
    	a121 = 34 ;
    	a156 = (a394 - -3);
    	a288 = a270;
    	a350 = a366;
    	a223 = a343[(a156 + -13)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 897\n");

    if((((((((-79 < a286) && (83 >= a286)) && (a156 == 12 && (a28 == a60[1] &&  cf==1 ))) && a157 == a64[0]) && a311 == a298[1]) && input == inputs[5]) && (((a268 == 32 && a219 == 4) && ((-156 < a329) && (3 >= a329))) && a328 == a279[1]))) {
printf("POINT: 898\n");
    	cf = 0;
    	a155 = (((((a340 * a329) + 1226) % 16) - -86) + 0);
    	a288 = a270;
    	a75 = 32 ;
    	a350 = a366;
    	a223 = a343[(a156 - 11)];
    	a28 = a60[(a394 + -5)]; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm102(int input) {
printf("POINT: 899\n");

    if((((((21 < a340) && (53 >= a340)) && (a157 == a64[4] && ((-79 < a286) && (83 >= a286)))) && ((-72 < a396) && (16 >= a396))) && (a219 == 4 && ((((a156 == 12 && (a28 == a60[1] &&  cf==1 )) && a282 == 32) && input == inputs[6]) && a271 == 11)))) {
printf("POINT: 900\n");
    	cf = 0;
    	a264 = a290[(a271 + -11)];
    	a288 = a297;
    	a311 = a298[(a271 - 11)];
    	a340 = ((((a340 * a286) - 22063) * 1) - 3802);
    	a268 = 33 ;
    	a394 = ((a271 + a156) + -13);
    	a206 = 33 ;
    	a357 = (a219 - -4);
    	a286 = ((((((a340 * a396) % 14999) % 14960) + -15038) / 5) - 11903);
    	a368 = a397;
    	a32 = ((a219 - a219) - -17);
    	a227 = 33 ;
    	a315 = a321;
    	a329 = ((((((a329 * a396) - 12672) * 10) / 9) + 17498) + -26857);
    	a282 = 33 ;
    	a331 = a380[((a394 * a219) + -38)];
    	a350 = a336;
    	a219 = (a271 - 8);
    	a28 = a60[(a32 + -13)];
    	a328 = a279[(a271 - 11)];
    	a396 = (((86 / 5) - 7798) - 4392);
    	a271 = (a156 - 2); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 901\n");

    if(((a357 == 9 && ((21 == a288[1]) && (a28 == a60[1] && (a219 == 4 && (((a157 == a64[4] &&  cf==1 ) && input == inputs[8]) && (57 == a350[2])))))) && ((a282 == 32 && a268 == 32) && a156 == 12))) {
printf("POINT: 902\n");
    	cf = 0;
printf("POINT: 903\n");

    	if((a264 == a290[5] || (a131 == 8 || !(a111 == 4)))) {
printf("POINT: 904\n");
    	a182 = a59[(a394 - a271)];
    	a282 = 33 ;
    	a315 = a321;
    	a328 = a279[0];
    	a219 = 3;
    	a180 = a164[(a357 - 3)];
    	a368 = a397;
    	a340 = (((((a340 * a286) * 5) % 15010) - 14988) - 1);
    	a357 = ((a394 / a219) + 5);
    	a271 = 10;
    	a227 = 33 ;
    	a331 = a380[(a156 - a156)];
    	a329 = ((((a329 * a396) - 12420) + -5017) - -6190);
    	a28 = a60[((a156 / a394) - 1)];
    	a350 = a336;
    	a394 = 10;
    	a206 = 33 ;
    	a288 = a297;
    	a311 = a298[((a219 + a219) + -6)];
    	a268 = 33 ;
    	a286 = ((((a286 * a396) - 17684) - 4475) * 1);
    	a396 = ((((a396 - 21698) * 10) / 9) - 932); 
    	}else {
printf("POINT: 906\n");
    	a350 = a336;
    	a331 = a380[((a156 * a357) + -108)];
    	a93 = (a219 - -5);
    	a282 = 33 ;
    	a28 = a60[((a219 + a156) + -9)];
    	a315 = a321;
    	a33 = a70;
    	a268 = 33 ;
    	a311 = a298[(a156 - 12)];
    	a288 = a297;
    	a340 = ((((a340 * a286) - -2509) - 28368) / 5);
    	a286 = ((((a329 * a329) - 7617) - 16497) + -2054);
    	a328 = a279[(a394 - 11)];
    	a357 = (a156 - 4);
    	a396 = (((a396 - 29174) * 1) + 25414);
    	a368 = a397;
    	a329 = (((((((a329 * a340) % 14999) * 2) % 14922) + -15077) + 11819) + -11820);
    	a394 = ((a219 * a271) + -34);
    	a206 = 33 ;
    	a227 = 33 ;
    	a219 = (a271 + -8);
    	a271 = 10;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 907\n");

    if(((((37 == a315[2]) && (21 == a288[1])) && ((-156 < a329) && (3 >= a329))) && (a271 == 11 && (a268 == 32 && (a156 == 12 && (input == inputs[5] && (((a157 == a64[4] &&  cf==1 ) && a28 == a60[1]) && a328 == a279[1]))))))) {
printf("POINT: 908\n");
    	cf = 0;
    	a15 = 35 ;
    	a282 = 33 ;
    	a340 = (((((a340 * a329) * 3) - 709) - -25268) + -27985);
    	a28 = a60[((a156 / a394) - 1)];
    	a331 = a380[(a156 + -12)];
    	a315 = a321;
    	a329 = (((((a329 * a396) / 5) / 5) * 5) + -27131);
    	a271 = (a357 + 1);
    	a328 = a279[((a271 / a271) - 1)];
    	a288 = a297;
    	a206 = 33 ;
    	a368 = a397;
    	a268 = 33 ;
    	a180 = a164[(a219 - 3)];
    	a219 = (a357 - 6);
    	a350 = a336;
    	a227 = 33 ;
    	a396 = ((((((a396 * a340) % 14999) % 14964) + -15035) + -1) * 1); 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm14(int input) {
printf("POINT: 909\n");

    if((((((21 < a340) && (53 >= a340)) && (15 == a368[3])) && a331 == a380[1]) && ((37 == a315[2]) && (((-79 < a286) && (83 >= a286)) && (a227 == 32 && ( cf==1  && a157 == a64[0])))))) {
printf("POINT: 910\n");
    	calculate_outputm99(input);
    } 
printf("POINT: 911\n");

    if(((a227 == 32 && (((-156 < a329) && (3 >= a329)) && (a206 == 32 && ( cf==1  && a157 == a64[4])))) && ((((21 < a340) && (53 >= a340)) && (15 == a368[3])) && a282 == 32))) {
printf("POINT: 912\n");
    	calculate_outputm102(input);
    } 
}
 void calculate_outputm109(int input) {
printf("POINT: 913\n");

    if((((a331 == a380[1] && (input == inputs[9] && a282 == 32)) && a223 == a343[1]) && ((a206 == 32 && (((-79 < a286) && (83 >= a286)) && ((a28 == a60[1] && (a156 == 14 &&  cf==1 )) && a121 == 33))) && a227 == 32))) {
printf("POINT: 914\n");
    	cf = 0;
    	a264 = a290[(a357 + -6)];
    	a143 = a176[(a219 - -2)];
    	a28 = a60[(a394 - 7)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 915\n");

    if(((((-79 < a286) && (83 >= a286)) && a331 == a380[1]) && (((a223 == a343[1] && ((21 == a288[1]) && (a156 == 14 && ((a28 == a60[1] && ( cf==1  && input == inputs[14])) && a121 == 33)))) && a271 == 11) && (37 == a315[2])))) {
printf("POINT: 916\n");
    	cf = 0;
printf("POINT: 917\n");

    	if((a219 == 3 || 92 < a141)) {
printf("POINT: 918\n");
    	a396 = ((((a396 - 22992) * 10) / 9) - 1650);
    	a268 = 36 ;
    	a111 = a195[((a219 - a357) + 11)];
    	a282 = 32 ;
    	a271 = 17;
    	a357 = 12;
    	a350 = a336;
    	a331 = a380[5];
    	a56 = 34 ;
    	a223 = a343[4];
    	a311 = a298[7];
    	a288 = a297;
    	a394 = 11;
    	a28 = a60[((a219 - a219) + 2)];
    	a315 = a321;
    	a368 = a397;
    	a227 = 35 ;
    	a328 = a279[3];
    	a329 = (((a329 - 13100) - 8595) * 1);
    	a206 = 35 ;
    	a340 = (((a340 - 12993) + -16156) - 172);
    	a286 = ((((a286 / 5) * 5) / 5) - -17243);
    	a219 = 9; 
    	}else {
printf("POINT: 920\n");
    	a125 = ((((a286 * a329) / 5) + 12206) + 4629);
    	a28 = a60[(a156 - 9)];
    	a154 = (a219 - -8);
    	}printf("%d\n", 23);  
    } 
printf("POINT: 921\n");

    if(((((57 == a350[2]) && (a223 == a343[1] && (a311 == a298[1] && ((input == inputs[4] && (a28 == a60[1] &&  cf==1 )) && a121 == 33)))) && ((-72 < a396) && (16 >= a396))) && (((-156 < a329) && (3 >= a329)) && (a156 == 14 && a331 == a380[1])))) {
printf("POINT: 922\n");
    	cf = 0;
printf("POINT: 923\n");

    	if(((!(a227 == 33) || (a136 == 11 || (a268 == 35 || !(a151 == 14)))) && !(a130 == 2))) {
printf("POINT: 924\n");
    	a28 = a60[(a394 - 8)];
    	a156 = (a219 - -3);
    	a188 = a117; 
    	}else {
printf("POINT: 926\n");
    	a368 = a371;
    	a311 = a298[1];
    	a264 = a290[((a394 / a156) - -3)];
    	a227 = 32 ;
    	a28 = a60[(a394 + -7)];
    	a282 = 35 ;
    	a315 = a273;
    	a340 = (((a340 / 5) - -5224) / 5);
    	a286 = (((a286 + 186) + 12773) - 12757);
    	a329 = ((((a329 - -161) / 5) - -12227) - 12217);
    	a350 = a366;
    	a271 = 14;
    	a206 = 32 ;
    	a143 = a176[(a357 + -2)];
    	a331 = a380[1];
    	a394 = 12;
    	a268 = 34 ;
    	a219 = 4;
    	a328 = a279[1];
    	a223 = a343[6];
    	a396 = ((((a396 % 43) - 27) + -2) / 5);
    	a357 = 11;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 927\n");

    if(((input == inputs[0] && (a268 == 32 && (((37 == a315[2]) && a28 == a60[1]) && ((-72 < a396) && (16 >= a396))))) && (a219 == 4 && (a328 == a279[1] && (a227 == 32 && (a121 == 33 && (a156 == 14 &&  cf==1 ))))))) {
printf("POINT: 928\n");
    	cf = 0;
printf("POINT: 929\n");

    	if(((a93 == 15 || (a115 == 2 && a223 == a343[5])) && !(a264 == 17))) {
printf("POINT: 930\n");
    	a286 = ((((((a286 % 80) + 1) + 1) * 5) % 80) + 1);
    	a227 = 34 ;
    	a340 = (((((a340 + -11756) % 15) + 44) / 5) - -26);
    	a264 = a290[((a156 * a156) + -193)];
    	a219 = 5;
    	a368 = a371;
    	a268 = 34 ;
    	a396 = (((((a396 + 8883) - 8758) / 5) * 29) / 10);
    	a331 = a380[7];
    	a143 = a176[(a394 + -9)];
    	a223 = a343[2];
    	a350 = a366;
    	a28 = a60[(a271 + -7)];
    	a271 = 11;
    	a329 = (((a329 - 4287) - -4454) + -6);
    	a282 = 32 ;
    	a328 = a279[4];
    	a206 = 36 ;
    	a394 = 13; 
    	}else {
printf("POINT: 932\n");
    	a28 = a60[(a156 - 7)];
    	a130 = a29[((a156 + a219) - 11)];
    	a93 = ((a271 + a271) - 10);
    	}printf("%d\n", 22);  
    } 
printf("POINT: 933\n");

    if(((((input == inputs[12] && (a328 == a279[1] && a156 == 14)) && (15 == a368[3])) && ((21 < a340) && (53 >= a340))) && (a282 == 32 && (a394 == 11 && (((-79 < a286) && (83 >= a286)) && (( cf==1  && a121 == 33) && a28 == a60[1])))))) {
printf("POINT: 934\n");
    	cf = 0;
printf("POINT: 935\n");

    	if(a156 == 12) {
printf("POINT: 936\n");
    	a328 = a279[3];
    	a357 = 9;
    	a329 = ((((a329 + -20956) / 5) * 10) / 9);
    	a315 = a295;
    	a368 = a371;
    	a223 = a343[1];
    	a396 = ((((((a396 % 43) - 26) + -1) * 5) % 43) + -28);
    	a28 = a60[(a156 - 12)];
    	a331 = a380[7];
    	a350 = a366;
    	a161 = (a219 + -2);
    	a394 = 10;
    	a286 = (((a286 - -18484) + 1961) * 1);
    	a268 = 33 ;
    	a206 = 33 ;
    	a56 = 32 ;
    	a219 = 4; 
    	}else {
printf("POINT: 938\n");
    	a32 = (a156 + 2);
    	a28 = a60[((a219 * a219) + -12)];
    	a264 = a290[(a271 - 11)];
    	}printf("%d\n", 26);  
    } 
printf("POINT: 939\n");

    if((((((((a121 == 33 && (( cf==1  && a28 == a60[1]) && input == inputs[1])) && a156 == 14) && a206 == 32) && a282 == 32) && ((21 < a340) && (53 >= a340))) && a227 == 32) && (((-72 < a396) && (16 >= a396)) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 940\n");
    	cf = 0;
    	a141 = ((((a286 * a329) - 16666) - 426) * 1);
    	a156 = (a357 - 1); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 941\n");

    if(((a227 == 32 && (((15 == a368[3]) && a394 == 11) && a121 == 33)) && (a223 == a343[1] && (input == inputs[7] && ((((a156 == 14 &&  cf==1 ) && a28 == a60[1]) && a331 == a380[1]) && a311 == a298[1]))))) {
printf("POINT: 942\n");
    	cf = 0;
printf("POINT: 943\n");

    	if((!(a129 == 10) && a130 == a29[6])) {
printf("POINT: 944\n");
    	a180 = a164[(a357 - 3)];
    	a28 = a60[(a357 - 9)];
    	a182 = a59[(a156 + -11)]; 
    	}else {
printf("POINT: 946\n");
    	a156 = ((a271 * a219) - 34);
    	a86 = (a394 - 8);
    	}printf("%d\n", 22);  
    } 
printf("POINT: 947\n");

    if((((a271 == 11 && a219 == 4) && a328 == a279[1]) && ((((input == inputs[3] && ((a156 == 14 && (a28 == a60[1] &&  cf==1 )) && ((-79 < a286) && (83 >= a286)))) && a394 == 11) && (21 == a288[1])) && a121 == 33))) {
printf("POINT: 948\n");
    	cf = 0;
    	a315 = a295;
    	a268 = 35 ;
    	a368 = a371;
    	a219 = 4;
    	a329 = (((a329 / 5) - 20876) - 1671);
    	a56 = 36 ;
    	a223 = a343[3];
    	a28 = a60[(a357 + -7)];
    	a288 = a297;
    	a350 = a336;
    	a331 = a380[4];
    	a394 = 13;
    	a340 = (((((a340 % 15) - -29) + 13406) - 17124) - -3719);
    	a396 = (((a396 / 5) + -29853) + -57);
    	a286 = ((((a286 - 17736) + -3261) * 10) / 9);
    	a271 = 13;
    	a282 = 36 ;
    	a227 = 32 ;
    	a129 = a108[(a357 - 9)];
    	a206 = 36 ;
    	a328 = a279[6];
    	a357 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 949\n");

    if(((a394 == 11 && (a219 == 4 && ((a121 == 33 && (15 == a368[3])) && a311 == a298[1]))) && (((21 < a340) && (53 >= a340)) && ((37 == a315[2]) && ((( cf==1  && a28 == a60[1]) && input == inputs[13]) && a156 == 14))))) {
printf("POINT: 950\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 951\n");

    if(((a223 == a343[1] && ((a271 == 11 && (15 == a368[3])) && a227 == 32)) && ((((-156 < a329) && (3 >= a329)) && (a121 == 33 && ((a156 == 14 && ( cf==1  && input == inputs[10])) && a28 == a60[1]))) && a282 == 32))) {
printf("POINT: 952\n");
    	a45 -= (a45 - 20) < a45 ? 1 : 0;
printf("POINT: 954\n");
    	cf = 0;
printf("POINT: 955\n");

    	if((a170 == 32 || a144 == 32)) {
printf("POINT: 956\n");
    	a227 = 36 ;
    	a315 = a295;
    	a350 = a366;
    	a340 = ((((a340 - 29181) + -218) - -57138) - 34361);
    	a111 = a195[(a271 + -10)];
    	a396 = (((a396 - 15994) / 5) + 3146);
    	a28 = a60[((a219 + a271) - 13)];
    	a328 = a279[6];
    	a286 = (((a286 * 5) - 2998) - 4235);
    	a223 = a343[7];
    	a288 = a270;
    	a282 = 32 ;
    	a311 = a298[4];
    	a206 = 32 ;
    	a219 = 3;
    	a56 = 34 ;
    	a394 = 11;
    	a357 = 11;
    	a368 = a371;
    	a268 = 35 ;
    	a331 = a380[3];
    	a329 = (((((a329 - -20929) * 1) - -7805) % 79) - 84);
    	a271 = 16; 
    	}else {
printf("POINT: 958\n");
    	a32 = ((a219 * a156) - 44);
    	a264 = a290[(a271 - 11)];
    	a286 = (((((a286 + -14212) + 11845) / 5) * -7) / 10);
    	a288 = a270;
    	a315 = a273;
    	a206 = 34 ;
    	a223 = a343[2];
    	a368 = a371;
    	a311 = a298[1];
    	a396 = (((a396 + 123) - 16925) + 16935);
    	a329 = ((((a329 % 79) + -75) - 1) - 1);
    	a219 = 9;
    	a28 = a60[((a357 * a219) + -23)];
    	a271 = 11;
    	a340 = (((a340 - -8837) * 3) * 1);
    	a350 = a366;
    	a282 = 32 ;
    	a331 = a380[4];
    	a227 = 34 ;
    	a268 = 35 ;
    	a328 = a279[3];
    	a394 = 14;
    	a357 = 14;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 959\n");

    if(((input == inputs[11] && (a328 == a279[1] && (a227 == 32 && (a357 == 9 && (a311 == a298[1] && ((-156 < a329) && (3 >= a329))))))) && ((((a156 == 14 &&  cf==1 ) && a28 == a60[1]) && a121 == 33) && a394 == 11))) {
printf("POINT: 960\n");
    	cf = 0;
    	a156 = ((a271 * a357) - 92);
    	a115 = a185[(a156 - 1)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 961\n");

    if(((((( cf==1  && input == inputs[2]) && a156 == 14) && a268 == 32) && ((-156 < a329) && (3 >= a329))) && ((37 == a315[2]) && (a357 == 9 && (((a28 == a60[1] && (57 == a350[2])) && a121 == 33) && ((-72 < a396) && (16 >= a396))))))) {
printf("POINT: 962\n");
    	cf = 0;
printf("POINT: 963\n");

    	if(( cf==1  || (a223 == a343[5] && (a151 == 15 && a115 == 2)))) {
printf("POINT: 964\n");
    	a156 = (a271 - -2);
    	a151 = ((a357 / a394) + 15); 
    	}else {
printf("POINT: 966\n");
    	a156 = ((a394 / a357) - -12);
    	a188 = a117;
    	a28 = a60[((a156 + a219) - 14)];
    	}printf("%d\n", 24);  
    } 
printf("POINT: 967\n");

    if(((input == inputs[6] && ((21 == a288[1]) && a206 == 32)) && (((-156 < a329) && (3 >= a329)) && (((21 < a340) && (53 >= a340)) && ((37 == a315[2]) && (((a28 == a60[1] && (a121 == 33 &&  cf==1 )) && ((-79 < a286) && (83 >= a286))) && a156 == 14)))))) {
printf("POINT: 968\n");
    	cf = 0;
printf("POINT: 969\n");

    	if((a75 == 35 || a143 == a176[3])) {
printf("POINT: 970\n");
    	a368 = a293;
    	a86 = (a357 + -2);
    	a156 = ((a219 / a357) - -10); 
    	}else {
printf("POINT: 972\n");
    	a169 = ((((a329 * a286) / 5) / 5) + -12326);
    	a282 = 36 ;
    	a340 = ((((a340 + -23102) * 1) * -1) / 10);
    	a331 = a380[4];
    	a28 = a60[a219];
    	a264 = a290[((a394 / a357) - -4)];
    	a350 = a377;
    	a311 = a298[7];
    	a288 = a270;
    	a219 = 8;
    	a396 = ((((((a396 % 43) - 28) + -1) + 303) * -1) / 10);
    	a368 = a293;
    	a328 = a279[7];
    	a271 = 13;
    	a206 = 35 ;
    	a227 = 35 ;
    	a357 = 14;
    	a268 = 34 ;
    	a394 = 11;
    	a315 = a273;
    	a329 = (((((a329 + 19718) * 10) / 9) * 10) / 9);
    	a223 = a343[1];
    	a286 = (((a286 - -1548) * 5) - -19447);
    	}printf("%d\n", 20);  
    } 
printf("POINT: 973\n");

    if(((a121 == 33 && ((a357 == 9 && ((21 < a340) && (53 >= a340))) && ((-72 < a396) && (16 >= a396)))) && ((a219 == 4 && (a156 == 14 && ((a28 == a60[1] && ( cf==1  && input == inputs[8])) && (15 == a368[3])))) && a227 == 32))) {
printf("POINT: 974\n");
    	cf = 0;
    	a112 = (a394 + 2);
    	a28 = a60[((a156 * a394) + -154)];
    	a268 = 35 ;
    	a331 = a380[6];
    	a219 = 6;
    	a350 = a377;
    	a328 = a279[1];
    	a315 = a295;
    	a180 = a164[(a156 - 14)];
    	a329 = ((((a329 - -159) * 5) % 83) + 75);
    	a227 = 36 ;
    	a368 = a293;
    	a340 = ((((a340 * 5) % 37) + 88) + -12);
    	a311 = a298[3];
    	a394 = 16; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 975\n");

    if(((((a206 == 32 && (a121 == 33 && ((-156 < a329) && (3 >= a329)))) && a268 == 32) && (21 == a288[1])) && (a156 == 14 && (a219 == 4 && ((input == inputs[5] && (a28 == a60[1] &&  cf==1 )) && ((-79 < a286) && (83 >= a286))))))) {
printf("POINT: 976\n");
    	cf = 0;
    	a267 = (a271 - 5);
    	a93 = ((a156 - a271) + 7);
    	a28 = a60[(a156 - 7)]; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm110(int input) {
printf("POINT: 977\n");

    if((((a357 == 9 && (a121 == 34 && ((((a28 == a60[1] &&  cf==1 ) && input == inputs[7]) && a223 == a343[1]) && a156 == 14))) && (((a219 == 4 && (37 == a315[2])) && a271 == 11) && ((-156 < a329) && (3 >= a329)))) && a199 == 13)) {
printf("POINT: 978\n");
    	cf = 0;
    	a156 = (a357 + -2);
    	a115 = a185[((a271 + a357) + -13)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 979\n");

    if(((a357 == 9 && (a28 == a60[1] && (a156 == 14 && (37 == a315[2])))) && ((((21 == a288[1]) && ((15 == a368[3]) && (( cf==1  && input == inputs[0]) && a121 == 34))) && a394 == 11) && a219 == 4))) {
printf("POINT: 980\n");
    	cf = 0;
    	a350 = a336;
    	a288 = a297;
    	a157 = a64[(a219 - 4)];
    	a156 = ((a394 + a394) - 10);
    	a223 = a343[(a271 - 11)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 981\n");

    if((((a219 == 4 && (a206 == 32 && (((-79 < a286) && (83 >= a286)) && (((-156 < a329) && (3 >= a329)) && (((21 < a340) && (53 >= a340)) && a156 == 14))))) && ((57 == a350[2]) && ((a121 == 34 && ( cf==1  && input == inputs[8])) && a28 == a60[1]))) && a153 <= -36)) {
printf("POINT: 982\n");
    	cf = 0;
    	a131 = (a394 - 8);
    	a156 = (a219 - -5); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 983\n");

    if(((((a394 == 11 && (input == inputs[3] && (a121 == 34 && ((15 == a368[3]) && (a28 == a60[1] && ( cf==1  && a156 == 14)))))) && a206 == 32) && (57 == a350[2])) && (a328 == a279[1] && ((21 < a340) && (53 >= a340))))) {
printf("POINT: 984\n");
    	cf = 0;
    	a311 = a298[((a156 / a394) + -1)];
    	a28 = a60[((a357 / a271) - -7)];
    	a227 = 33 ;
    	a223 = a343[(a394 + -11)];
    	a268 = 33 ;
    	a219 = (a271 + -8);
    	a340 = (((a340 / 5) * -5) - 25403);
    	a99 = (a271 + 2);
    	a396 = ((((a396 * a286) - 22939) + -1156) / 5);
    	a93 = (a357 - -7);
    	a329 = ((((((a329 * a396) % 14999) % 14922) + -15077) / 5) - 5033);
    	a282 = 33 ;
    	a357 = ((a219 / a394) - -8);
    	a328 = a279[((a394 * a271) + -121)];
    	a368 = a397;
    	a286 = (((((((a340 * a340) % 14999) + 181) - -6620) + -16729) % 14960) + -15038);
    	a206 = 33 ;
    	a288 = a297;
    	a271 = ((a219 - a219) + 10);
    	a350 = a336;
    	a315 = a273;
    	a331 = a380[(a394 - 11)];
    	a394 = ((a219 - a219) + 10); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 985\n");

    if(((a331 == a380[1] && (((-156 < a329) && (3 >= a329)) && ((a121 == 34 && (a156 == 14 &&  cf==1 )) && a28 == a60[1]))) && (((-79 < a286) && (83 >= a286)) && (input == inputs[13] && (a206 == 32 && (a227 == 32 && a271 == 11)))))) {
printf("POINT: 986\n");
    	cf = 0;
    	a206 = 34 ;
    	a340 = (((((a286 * a286) % 37) - -90) * 1) + 0);
    	a394 = (a357 - -3);
    	a350 = a377;
    	a329 = (((((a340 * a286) - 13815) + 9927) % 83) + 86);
    	a28 = a60[(a271 + -9)];
    	a357 = (a271 + -1);
    	a331 = a380[(a394 - 10)];
    	a56 = 35 ;
    	a368 = a293;
    	a315 = a273;
    	a396 = ((((((a396 * a329) - -15406) % 103) - -101) - -29190) + -29203);
    	a328 = a279[(a394 + -10)];
    	a0 = a96;
    	a286 = (((((a286 * a340) - 1070) % 103) - -188) - 1); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 987\n");

    if(((a311 == a298[1] && (((a357 == 9 && a331 == a380[1]) && a28 == a60[1]) && a206 == 32)) && (a121 == 34 && ((a227 == 32 && (input == inputs[5] && ( cf==1  && a156 == 14))) && ((21 < a340) && (53 >= a340)))))) {
printf("POINT: 988\n");
    	a153 -= (a153 - 20) < a153 ? 4 : 0;
printf("POINT: 990\n");
    	a199 += (a199 + 20) > a199 ? 1 : 0;
printf("POINT: 992\n");
    	a57 += (a57 + 20) > a57 ? 2 : 0;
printf("POINT: 994\n");
    	a190 += (a190 + 20) > a190 ? 2 : 0;
printf("POINT: 996\n");
    	a1 += (a1 + 20) > a1 ? 1 : 0;
printf("POINT: 998\n");
    	a2 += (a2 + 20) > a2 ? 2 : 0;
printf("POINT: 1000\n");
    	cf = 0;
    	a288 = a297;
    	a157 = a64[((a219 + a394) + -15)];
    	a156 = (a357 + 3);
    	a350 = a336;
    	a223 = a343[((a271 + a357) - 20)]; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm16(int input) {
printf("POINT: 1001\n");

    if(((a328 == a279[1] && (((a121 == 33 &&  cf==1 ) && a331 == a380[1]) && a219 == 4)) && (a271 == 11 && (a282 == 32 && (37 == a315[2]))))) {
printf("POINT: 1002\n");
    	calculate_outputm109(input);
    } 
printf("POINT: 1003\n");

    if((((57 == a350[2]) && ((a271 == 11 && (a121 == 34 &&  cf==1 )) && ((-72 < a396) && (16 >= a396)))) && (a219 == 4 && (a311 == a298[1] && a206 == 32)))) {
printf("POINT: 1004\n");
    	calculate_outputm110(input);
    } 
}
 void calculate_outputm111(int input) {
printf("POINT: 1005\n");

    if(((((83 < a286) && (291 >= a286)) && (((16 < a396) && (224 >= a396)) && (((61 == a350[0]) && a166 == a26[1]) && a268 == 34))) && (a328 == a279[2] && (((input == inputs[5] && (a56 == 33 &&  cf==1 )) && a28 == a60[2]) && a271 == 12)))) {
printf("POINT: 1006\n");
    	cf = 0;
    	a282 = 32 ;
    	a288 = a270;
    	a75 = 32 ;
    	a286 = (((((((a329 * a329) % 80) + 2) * 9) / 10) * 9) / 10);
    	a206 = 32 ;
    	a394 = (a219 - -6);
    	a155 = (((((a340 * a396) % 16) + 81) + -6714) + 6706);
    	a315 = a295;
    	a357 = (a271 - 3);
    	a328 = a279[(a394 + -10)];
    	a28 = a60[(a219 - -1)];
    	a340 = (((((a329 * a286) % 15) + 37) + -1) - -2);
    	a396 = ((((((a286 * a329) / 5) % 43) + -27) - -16256) + -16257);
    	a223 = a343[((a394 - a219) - 5)];
    	a227 = 32 ;
    	a368 = a371;
    	a350 = a366;
    	a311 = a298[(a219 - 4)];
    	a268 = 32 ;
    	a331 = a380[((a394 - a394) - -1)];
    	a329 = (((((a329 * a286) - -791) % 79) - 75) - 1);
    	a271 = a394;
    	a219 = (a357 + -5); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1007\n");

    if(((a268 == 34 && ((((83 < a286) && (291 >= a286)) && ((53 < a340) && (129 >= a340))) && a328 == a279[2])) && (((3 < a329) && (171 >= a329)) && (a56 == 33 && (a394 == 12 && ((a166 == a26[1] && ( cf==1  && a28 == a60[2])) && input == inputs[0])))))) {
printf("POINT: 1008\n");
    	cf = 0;
    	a219 = ((a271 + a271) + -21);
    	a268 = 33 ;
    	a28 = a60[((a394 / a271) - -6)];
    	a357 = ((a271 + a271) - 16);
    	a350 = a336;
    	a331 = a380[(a219 + -3)];
    	a223 = a343[((a219 + a271) + -15)];
    	a93 = (a271 - -4);
    	a394 = (a271 - 2);
    	a329 = ((((((a329 * a396) % 14999) - 21063) * 1) - -8355) + -15117);
    	a282 = 33 ;
    	a340 = (((((a340 * a396) / 5) + 8127) * 2) + -43543);
    	a206 = 33 ;
    	a271 = ((a394 / a93) - -10);
    	a368 = a397;
    	a396 = (((((a396 * a286) % 14999) + -24082) / 5) - 13511);
    	a99 = (a93 + -3);
    	a328 = a279[(a219 - a219)];
    	a286 = (((((a286 - -22739) * -1) / 10) * 10) / 9); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm112(int input) {
printf("POINT: 1009\n");

    if(((((((53 < a340) && (129 >= a340)) && ((input == inputs[8] && ((61 == a350[0]) && a282 == 34)) && a166 == a26[2])) && ((3 < a329) && (171 >= a329))) && (((83 < a286) && (291 >= a286)) && ((a28 == a60[2] && ( cf==1  && a56 == 33)) && a206 == 34))) && a153 <= -36)) {
printf("POINT: 1010\n");
    	cf = 0;
    	a227 = 32 ;
    	a331 = a380[(a394 - 11)];
    	a282 = 32 ;
    	a396 = ((((((a396 * a329) % 14999) + -709) + 932) % 43) + -61);
    	a28 = a60[(a219 + -4)];
    	a131 = ((a357 + a219) - 12);
    	a350 = a366;
    	a357 = (a394 - 3);
    	a206 = 32 ;
    	a340 = ((((((a340 * a329) % 15) + 38) - -1) - 27981) + 27976);
    	a394 = ((a219 / a219) + 10);
    	a156 = ((a271 / a357) + 8);
    	a311 = a298[(a219 - 4)];
    	a286 = ((((((a286 * a329) % 14999) - -11983) + -25157) % 80) - -1);
    	a328 = a279[(a219 + -4)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1011\n");

    if(((a206 == 34 && (((3 < a329) && (171 >= a329)) && (a227 == 34 && ((((a166 == a26[2] &&  cf==1 ) && input == inputs[5]) && a394 == 12) && a28 == a60[2])))) && (((61 == a350[0]) && a56 == 33) && ((53 < a340) && (129 >= a340))))) {
printf("POINT: 1012\n");
    	a153 -= (a153 - 20) < a153 ? 4 : 0;
printf("POINT: 1014\n");
    	a199 += (a199 + 20) > a199 ? 1 : 0;
printf("POINT: 1016\n");
    	a57 += (a57 + 20) > a57 ? 2 : 0;
printf("POINT: 1018\n");
    	a190 += (a190 + 20) > a190 ? 2 : 0;
printf("POINT: 1020\n");
    	a1 += (a1 + 20) > a1 ? 1 : 0;
printf("POINT: 1022\n");
    	a2 += (a2 + 20) > a2 ? 2 : 0;
printf("POINT: 1024\n");
    	cf = 0;
printf("POINT: 1025\n");

    	if(((54 == a33[0]) || !(a166 == 14))) {
printf("POINT: 1026\n");
    	a28 = a60[(a271 + -11)];
    	a223 = a343[(a219 - 5)];
    	a156 = a394;
    	a329 = ((((((a329 * a340) % 79) + -146) * 5) % 79) + -39);
    	a311 = a298[((a394 + a271) + -23)];
    	a315 = a295;
    	a396 = (((((((a340 * a340) % 43) - 38) - 32) * 5) % 43) - 29);
    	a350 = a336;
    	a288 = a297;
    	a157 = a64[(a271 + -12)];
    	a282 = 32 ;
    	a368 = a371;
    	a286 = (((((((a286 * a340) % 14999) % 80) + 4) - 76) + 20435) + -20403);
    	a227 = 32 ;
    	a219 = (a271 + -8);
    	a271 = (a394 - 1);
    	a340 = (((((((a340 * a396) / 5) % 15) + 38) * 5) % 15) + 22);
    	a206 = 32 ;
    	a328 = a279[((a394 - a357) - 1)];
    	a331 = a380[((a357 * a357) + -99)];
    	a357 = (a394 - 3);
    	a394 = 11; 
    	}else {
printf("POINT: 1028\n");
    	a166 = a26[(a357 + -9)];
    	a268 = 34 ;
    	a288 = a297;
    	a227 = 33 ;
    	a311 = a298[(a394 - 12)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1029\n");

    if(((((19 == a368[1]) && (a206 == 34 && (41 == a315[0]))) && (a282 == 34 && (a223 == a343[2] && (((53 < a340) && (129 >= a340)) && (((a28 == a60[2] && (a56 == 33 &&  cf==1 )) && a166 == a26[2]) && input == inputs[7]))))) && a199 == 13)) {
printf("POINT: 1030\n");
    	a58 += (a58 + 20) > a58 ? 1 : 0;
printf("POINT: 1032\n");
    	cf = 0;
    	a227 = 32 ;
    	a340 = ((((((a340 * a396) % 15) - -27) / 5) + 7678) - 7633);
    	a328 = a279[(a219 + -4)];
    	a115 = a185[((a271 - a357) - -5)];
    	a357 = ((a271 * a271) + -135);
    	a28 = a60[((a357 * a357) + -80)];
    	a350 = a366;
    	a282 = 32 ;
    	a288 = a270;
    	a368 = a371;
    	a156 = (a394 - 5);
    	a329 = ((((((((a329 * a286) % 14999) + -27223) % 79) - -2) * 5) % 79) - 76);
    	a311 = a298[(a271 - 11)];
    	a271 = (a394 + -1);
    	a331 = a380[(a219 + -4)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1033\n");

    if(((a331 == a380[2] && ((((16 < a396) && (224 >= a396)) && a271 == 12) && a394 == 12)) && ((a28 == a60[2] && (((( cf==1  && a166 == a26[2]) && a56 == 33) && a311 == a298[2]) && input == inputs[0])) && a282 == 34))) {
printf("POINT: 1034\n");
    	cf = 0;
printf("POINT: 1035\n");

    	if((!(a143 == 8) || (!(a121 == 36) && (!(a264 == 15) && a144 == 35)))) {
printf("POINT: 1036\n");
    	a282 = 32 ;
    	a329 = ((((((a329 * a340) % 79) + -107) / 5) + -8769) + 8700);
    	a223 = a343[(a357 - 10)];
    	a331 = a380[(a357 - 9)];
    	a28 = a60[(a357 + -9)];
    	a156 = a394;
    	a286 = ((((((a286 * a340) % 14999) % 80) + -71) + -7) / 5);
    	a219 = (a394 + -8);
    	a157 = a64[(a394 + -12)];
    	a311 = a298[(a357 + -9)];
    	a350 = a336;
    	a206 = 32 ;
    	a315 = a295;
    	a394 = ((a271 * a271) - 133);
    	a288 = a297;
    	a340 = (((((((a340 * a396) * 1) % 15) + 27) * 5) % 15) - -23);
    	a396 = ((((((a396 * a329) % 14999) / 5) * 5) % 43) - 27);
    	a227 = 32 ;
    	a357 = (a271 - 3);
    	a328 = a279[((a271 * a271) + -143)];
    	a368 = a371;
    	a271 = 11; 
    	}else {
printf("POINT: 1038\n");
    	a268 = 34 ;
    	a227 = 33 ;
    	a288 = a297;
    	a311 = a298[(a271 + -12)];
    	a166 = a26[(a357 + -9)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1039\n");

    if(((a206 == 34 && ((a394 == 12 && ((31 == a288[5]) && ((3 < a329) && (171 >= a329)))) && a166 == a26[2])) && (a282 == 34 && (((input == inputs[3] && (a28 == a60[2] &&  cf==1 )) && a56 == 33) && a328 == a279[2])))) {
printf("POINT: 1040\n");
    	cf = 0;
printf("POINT: 1041\n");

    	if(212 < a155) {
printf("POINT: 1042\n");
    	a331 = a380[(a394 + -12)];
    	a357 = (a394 - 4);
    	a350 = a336;
    	a93 = (a219 - -11);
    	a227 = 33 ;
    	a219 = (a357 + -5);
    	a28 = a60[((a93 * a271) + -185)];
    	a329 = ((((((a329 * a396) % 14999) - 16957) * 10) / 9) - 7797);
    	a340 = ((((a340 * a396) - 16011) * 1) + -13180);
    	a271 = (a394 - 2);
    	a223 = a343[(a219 - 3)];
    	a206 = 33 ;
    	a286 = (((((a286 * a396) % 14999) + -23440) - 687) - 5365);
    	a328 = a279[((a394 * a394) + -144)];
    	a311 = a298[((a93 / a93) + -1)];
    	a288 = a297;
    	a99 = (a93 - 3);
    	a368 = a397;
    	a282 = 33 ;
    	a268 = 33 ;
    	a396 = ((((((a396 * a340) % 14999) - -13336) % 14964) + -15035) - 0);
    	a394 = 10; 
    	}else {
printf("POINT: 1044\n");

    	}printf("%d\n", 23);  
    } 
printf("POINT: 1045\n");

    if((((a219 == 5 && (a56 == 33 && (a357 == 10 && a206 == 34))) && ((53 < a340) && (129 >= a340))) && ((31 == a288[5]) && ((((a28 == a60[2] &&  cf==1 ) && input == inputs[13]) && a166 == a26[2]) && a394 == 12)))) {
printf("POINT: 1046\n");
    	cf = 0;
    	a56 = 35 ;
    	a0 = a96; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm113(int input) {
printf("POINT: 1047\n");

    if(((a331 == a380[2] && ((19 == a368[1]) && a282 == 34)) && (a328 == a279[2] && ((41 == a315[0]) && (((a56 == 33 && (( cf==1  && input == inputs[10]) && a166 == a26[4])) && a28 == a60[2]) && (31 == a288[5])))))) {
printf("POINT: 1048\n");
    	cf = 0;
    	a349 = 34 ;
    	a315 = a321;
    	a206 = 33 ;
    	a282 = 33 ;
    	a268 = 33 ;
    	a93 = (a394 + -1);
    	a329 = ((((((a329 * a340) * -8) / 10) - 3391) * 10) / 9);
    	a331 = a380[((a357 / a357) - 1)];
    	a223 = a343[(a93 - 10)];
    	a288 = a297;
    	a28 = a60[(a271 - 5)];
    	a328 = a279[(a271 + -12)];
    	a357 = (a93 + -3);
    	a219 = (a271 - 9);
    	a286 = (((((a340 * a340) * -1) / 10) / 5) - 2785);
    	a394 = (a271 - 2);
    	a396 = (((((a396 * a329) % 14999) + -231) * 1) * 1);
    	a340 = (((((a340 * a286) % 14999) + -4772) - -14919) + -19563); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1049\n");

    if((((((16 < a396) && (224 >= a396)) && ((input == inputs[3] && (a28 == a60[2] && (a166 == a26[4] && ( cf==1  && a56 == 33)))) && (41 == a315[0]))) && a268 == 34) && (((19 == a368[1]) && a394 == 12) && (31 == a288[5])))) {
printf("POINT: 1050\n");
    	cf = 0;
printf("POINT: 1051\n");

    	if(((!(a206 == 36) || (a32 == 14 || !(19 == a288[5]))) && !(a264 == a290[7]))) {
printf("POINT: 1052\n");
    	a219 = 3;
    	a328 = a279[(a219 - 3)];
    	a223 = a343[(a357 + -10)];
    	a282 = 33 ;
    	a206 = 33 ;
    	a368 = a397;
    	a268 = 33 ;
    	a28 = a60[(a394 - 8)];
    	a340 = (((((a340 * a286) % 14999) / 5) - -11474) / -5);
    	a357 = ((a219 / a219) - -7);
    	a143 = a176[(a271 + -5)];
    	a329 = ((((((a329 * a286) % 14999) / 5) - 20119) * 10) / 9);
    	a396 = (((((((a286 * a286) % 14999) + 2131) * -1) / 10) * 10) / 9);
    	a288 = a270;
    	a350 = a336;
    	a264 = a290[(a394 - 9)];
    	a315 = a321;
    	a271 = ((a219 * a219) - -1);
    	a331 = a380[(a219 - 3)];
    	a394 = ((a219 / a219) + 9);
    	a286 = (((((a286 * a396) % 14999) - 4047) - 9609) / 5); 
    	}else {
printf("POINT: 1054\n");
    	a271 = ((a219 / a219) + 10);
    	a311 = a298[(a271 + -10)];
    	a340 = (((((((a340 * a286) % 14999) - 3662) - -600) - 445) % 15) + 36);
    	a227 = 32 ;
    	a206 = 32 ;
    	a28 = a60[(a219 + -2)];
    	a223 = a343[((a357 - a271) - -2)];
    	a357 = ((a271 * a271) - 112);
    	a368 = a371;
    	a282 = 32 ;
    	a268 = 32 ;
    	a350 = a366;
    	a156 = (a394 - 5);
    	a396 = (((((((a396 * a340) % 43) + -40) - 7) * 5) % 43) - 29);
    	a328 = a279[(a271 - 10)];
    	a188 = a117;
    	a394 = (a219 + 6);
    	a331 = a380[(a271 + -10)];
    	a329 = ((((((a329 * a286) % 14999) % 79) + -99) * 5) / 5);
    	a288 = a270;
    	a286 = (((((((a286 * a340) % 80) + 1) * 5) - -1538) % 80) + -33);
    	a315 = a295;
    	a219 = ((a271 / a271) - -3);
    	}printf("%d\n", 20);  
    } 
}
 void calculate_outputm114(int input) {
printf("POINT: 1055\n");

    if(((((a223 == a343[2] && (a328 == a279[2] && (a28 == a60[2] && ( cf==1  && input == inputs[14])))) && ((53 < a340) && (129 >= a340))) && a166 == a26[5]) && ((61 == a350[0]) && (a206 == 34 && (a56 == 33 && (41 == a315[0])))))) {
printf("POINT: 1056\n");
    	a58 += (a58 + 20) > a58 ? 1 : 0;
printf("POINT: 1058\n");
    	cf = 0;
    	a368 = a397;
    	a350 = a336;
    	a223 = a343[(a271 - 12)];
    	a331 = a380[((a219 * a271) - 60)];
    	a282 = 33 ;
    	a28 = a60[(a219 + -5)];
    	a311 = a298[(a357 - 10)];
    	a112 = (a357 + -3);
    	a180 = a164[(a394 - 12)];
    	a340 = ((((((a340 * a286) % 14999) - 24717) + -3605) - -33696) + -27632);
    	a315 = a321;
    	a219 = (a271 - 9);
    	a329 = ((((((a329 * a286) % 14999) + -20343) + -1879) * 10) / 9);
    	a357 = 8;
    	a328 = a279[0]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1059\n");

    if(((((16 < a396) && (224 >= a396)) && (a206 == 34 && ((a166 == a26[5] && (((3 < a329) && (171 >= a329)) && input == inputs[8])) && a268 == 34))) && (((a28 == a60[2] && ( cf==1  && a56 == 33)) && ((53 < a340) && (129 >= a340))) && ((83 < a286) && (291 >= a286))))) {
printf("POINT: 1060\n");
    	cf = 0;
    	a206 = 33 ;
    	a219 = (a357 + -7);
    	a328 = a279[(a394 - 12)];
    	a32 = (a394 + 5);
    	a315 = a321;
    	a396 = ((((((a396 * a329) % 14999) + 1502) - -7652) * 1) - 38410);
    	a28 = a60[(a32 - 13)];
    	a223 = a343[(a219 - 3)];
    	a350 = a336;
    	a340 = ((((a329 * a329) - 29649) * 1) * 1);
    	a357 = ((a219 + a394) - 7);
    	a271 = (a219 - -7);
    	a268 = 33 ;
    	a288 = a297;
    	a286 = ((((((a286 * a340) % 14999) + -900) % 14960) - 15038) + 0);
    	a282 = 33 ;
    	a311 = a298[(a219 - 3)];
    	a329 = ((((((a329 * a340) % 14999) % 14922) - 15077) - 1) * 1);
    	a264 = a290[(a32 + -17)];
    	a368 = a397;
    	a394 = (a219 - -7); 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm17(int input) {
printf("POINT: 1061\n");

    if(((a219 == 5 && (a394 == 12 && ( cf==1  && a166 == a26[1]))) && ((19 == a368[1]) && ((41 == a315[0]) && (a271 == 12 && a357 == 10))))) {
printf("POINT: 1062\n");
    	calculate_outputm111(input);
    } 
printf("POINT: 1063\n");

    if((((((31 == a288[5]) && ((a166 == a26[2] &&  cf==1 ) && a206 == 34)) && a311 == a298[2]) && a227 == 34) && (((83 < a286) && (291 >= a286)) && (61 == a350[0])))) {
printf("POINT: 1064\n");
    	calculate_outputm112(input);
    } 
printf("POINT: 1065\n");

    if(((((61 == a350[0]) && a268 == 34) && a223 == a343[2]) && (((((83 < a286) && (291 >= a286)) && ( cf==1  && a166 == a26[4])) && (41 == a315[0])) && ((53 < a340) && (129 >= a340))))) {
printf("POINT: 1066\n");
    	calculate_outputm113(input);
    } 
printf("POINT: 1067\n");

    if(((((83 < a286) && (291 >= a286)) && (((31 == a288[5]) && a331 == a380[2]) && a271 == 12)) && (a219 == 5 && (a311 == a298[2] && (a166 == a26[5] &&  cf==1 ))))) {
printf("POINT: 1068\n");
    	calculate_outputm114(input);
    } 
}
 void calculate_outputm118(int input) {
printf("POINT: 1069\n");

    if((((((a223 == a343[2] && input == inputs[0]) && (41 == a315[0])) && a394 == 12) && (31 == a288[5])) && ((((a161 == 4 && (a28 == a60[2] &&  cf==1 )) && a56 == 32) && (61 == a350[0])) && ((3 < a329) && (171 >= a329))))) {
printf("POINT: 1070\n");
    	a50 -= (a50 - 20) < a50 ? 4 : 0;
printf("POINT: 1072\n");
    	cf = 0;
printf("POINT: 1073\n");

    	if((a131 == 4 && ((((83 < a286) && (291 >= a286)) || a129 == a108[3]) && !(a121 == 32)))) {
printf("POINT: 1074\n");
    	a331 = a380[((a357 / a357) - 1)];
    	a223 = a343[(a394 + -12)];
    	a396 = ((((((a396 * a286) % 14999) + -15076) * 1) * 10) / 9);
    	a329 = ((((((a329 * a340) % 14999) - 13623) % 14922) + -15077) * 1);
    	a328 = a279[(a219 + -5)];
    	a206 = 33 ;
    	a112 = (a357 + -2);
    	a28 = a60[((a271 / a357) - 1)];
    	a315 = a321;
    	a286 = (((((((a286 * a329) % 14999) - -8599) % 80) + 3) + -20871) + 20871);
    	a227 = 33 ;
    	a180 = a164[(a219 - 5)];
    	a271 = ((a394 + a161) - 6);
    	a268 = 33 ;
    	a282 = 33 ;
    	a350 = a336;
    	a219 = (a394 / a161);
    	a357 = (a394 + -4);
    	a311 = a298[((a394 / a394) - 1)];
    	a288 = a297;
    	a394 = 10; 
    	}else {
printf("POINT: 1076\n");
    	a286 = ((((((a286 * a329) % 14999) % 80) - -2) + 1) - 1);
    	a350 = a366;
    	a268 = 32 ;
    	a340 = (((((a286 * a286) + -4656) % 15) + 38) + -1);
    	a271 = (a219 + 6);
    	a227 = 32 ;
    	a329 = (((((a329 * a340) % 79) - 100) + 3460) - 3496);
    	a331 = a380[((a219 - a357) + 6)];
    	a223 = a343[((a271 + a271) + -21)];
    	a188 = a117;
    	a28 = a60[(a394 + -9)];
    	a156 = ((a161 / a357) - -8);
    	a328 = a279[(a271 + -10)];
    	a368 = a371;
    	a206 = 32 ;
    	a288 = a270;
    	a394 = (a219 - -6);
    	a315 = a295;
    	a282 = 32 ;
    	a396 = (((((a396 * a286) + -11687) + 11309) % 43) - 27);
    	a311 = a298[(a357 + -9)];
    	a357 = (a156 - -1);
    	a219 = 4;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 1077\n");

    if((((((a161 == 4 && (a28 == a60[2] &&  cf==1 )) && ((16 < a396) && (224 >= a396))) && ((83 < a286) && (291 >= a286))) && a223 == a343[2]) && ((a227 == 34 && (input == inputs[7] && (a56 == 32 && a331 == a380[2]))) && a271 == 12))) {
printf("POINT: 1078\n");
    	cf = 0;
    	a331 = a380[(a394 + -11)];
    	a21 = 32 ;
    	a268 = 32 ;
    	a340 = ((((20 / 5) + 37) * 9) / 10);
    	a282 = 32 ;
    	a350 = a366;
    	a155 = (((((a286 * a396) % 14999) - -583) * 1) - 26468);
    	a286 = (((((((a340 * a155) % 14999) % 80) - -2) + 2) + 9068) + -9070);
    	a329 = (((((a329 * a286) / 5) % 79) + -76) + -1);
    	a223 = a343[((a271 * a271) - 143)];
    	a28 = a60[((a357 * a219) + -44)];
    	a394 = ((a271 - a271) + 11);
    	a219 = (a271 - 8);
    	a368 = a371;
    	a206 = 32 ;
    	a311 = a298[(a271 + -11)];
    	a357 = (a271 - 3);
    	a315 = a295;
    	a328 = a279[(a161 + -3)];
    	a396 = ((((((a396 * a155) % 14999) + 12751) % 43) + -26) + -2);
    	a227 = 32 ;
    	a288 = a270;
    	a271 = 11; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1079\n");

    if((((a282 == 34 && input == inputs[12]) && a268 == 34) && ((((a227 == 34 && ((a161 == 4 && ( cf==1  && a28 == a60[2])) && ((16 < a396) && (224 >= a396)))) && a328 == a279[2]) && a56 == 32) && a311 == a298[2]))) {
printf("POINT: 1080\n");
    	cf = 0;
    	a368 = a371;
    	a268 = 32 ;
    	a28 = a60[(a219 - -1)];
    	a328 = a279[(a161 + -3)];
    	a223 = a343[((a271 - a357) + -1)];
    	a227 = 32 ;
    	a271 = (a219 + 6);
    	a282 = 33 ;
    	a340 = ((((61 + -35) + -1) * 9) / 10);
    	a155 = (((((((a396 * a329) % 14999) % 54) + 156) / 5) * 10) / 2);
    	a357 = (a219 - -4);
    	a350 = a336;
    	a206 = 32 ;
    	a286 = ((((((a286 * a340) % 80) + 4) - 2045) + -14498) + 16511);
    	a396 = ((((((a286 * a286) % 43) - 28) + -9271) - 17879) + 27150);
    	a329 = ((((((a329 * a340) + 16118) % 79) - 132) + -22871) + 22926);
    	a56 = 35 ;
    	a315 = a295;
    	a311 = a298[((a219 * a219) + -24)];
    	a331 = a380[((a394 / a219) + -1)];
    	a288 = a270;
    	a394 = (a219 + 6);
    	a219 = 4; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm119(int input) {
printf("POINT: 1081\n");

    if((((input == inputs[10] && (((a56 == 32 &&  cf==1 ) && a28 == a60[2]) && ((53 < a340) && (129 >= a340)))) && ((a328 == a279[2] && (((a206 == 34 && (61 == a350[0])) && a311 == a298[2]) && a161 == 5)) && (41 == a315[0]))) && a13 == -14)) {
printf("POINT: 1082\n");
    	cf = 0;
    	a156 = (a219 + 8);
    	a151 = ((a156 * a357) - 116);
    	a28 = a60[(a357 + -9)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1083\n");

    if(((((41 == a315[0]) && ((((19 == a368[1]) && a219 == 5) && input == inputs[7]) && ((53 < a340) && (129 >= a340)))) && (a328 == a279[2] && ((a161 == 5 && (( cf==1  && a28 == a60[2]) && a56 == 32)) && a311 == a298[2]))) && a102 == 10)) {
printf("POINT: 1084\n");
    	cf = 0;
    	a75 = 35 ;
    	a155 = ((((((a329 * a286) % 14999) % 16) - -82) + -14723) + 14723);
    	a28 = a60[(a271 - 6)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1085\n");

    if(((((16 < a396) && (224 >= a396)) && (a206 == 34 && ((a56 == 32 && (a161 == 5 && a394 == 12)) && ((83 < a286) && (291 >= a286))))) && (((input == inputs[12] && ( cf==1  && a28 == a60[2])) && a223 == a343[2]) && a311 == a298[2]))) {
printf("POINT: 1086\n");
    	cf = 0;
    	a156 = (a271 + 1);
    	a311 = a298[((a394 / a161) + -1)];
    	a350 = a366;
    	a219 = ((a156 * a394) + -152);
    	a28 = a60[(a394 - 9)];
    	a340 = (((((((a340 * a286) % 14999) / 5) % 15) + 26) + -370) - -377);
    	a328 = a279[((a394 - a156) - -2)];
    	a268 = 32 ;
    	a188 = a117;
    	a368 = a371;
    	a288 = a270;
    	a282 = 32 ;
    	a286 = ((((((a286 * a329) % 14999) / 5) % 80) + 4) + -24);
    	a315 = a295;
    	a357 = (a219 - -5); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1087\n");

    if(((a328 == a279[2] && (((a56 == 32 && ((a271 == 12 && ((83 < a286) && (291 >= a286))) && ((3 < a329) && (171 >= a329)))) && a219 == 5) && a161 == 5)) && ((a28 == a60[2] && (input == inputs[3] &&  cf==1 )) && (31 == a288[5])))) {
printf("POINT: 1088\n");
    	a175 -= (a175 - 20) < a175 ? 6 : 0;
printf("POINT: 1090\n");
    	a78 += (a78 + 20) > a78 ? 2 : 0;
printf("POINT: 1092\n");
    	cf = 0;
    	a368 = a371;
    	a282 = 32 ;
    	a141 = ((((a329 * a329) - -494) / 5) + 17441);
    	a340 = ((((((a141 * a141) % 14999) - 21522) - 2427) % 15) - -43);
    	a268 = 32 ;
    	a331 = a380[(a357 + -9)];
    	a156 = (a357 + -2);
    	a206 = 32 ;
    	a28 = a60[(a161 / a161)];
    	a396 = (((((a340 * a340) % 43) - 35) - -2) + -30);
    	a394 = (a219 - -6);
    	a286 = (((((((a396 * a141) % 14999) - -3975) / 5) + 11034) % 80) + 4);
    	a328 = a279[((a357 + a219) + -14)];
    	a329 = ((((((a286 * a141) % 14999) % 79) - 75) * 5) / 5);
    	a311 = a298[(a394 + -10)];
    	a315 = a295;
    	a271 = (a219 - -6);
    	a357 = (a219 + 4);
    	a288 = a270;
    	a219 = (a271 - 7); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1093\n");

    if((((((16 < a396) && (224 >= a396)) && (((((83 < a286) && (291 >= a286)) && a206 == 34) && input == inputs[9]) && (61 == a350[0]))) && (((41 == a315[0]) && (((a161 == 5 &&  cf==1 ) && a56 == 32) && a28 == a60[2])) && a328 == a279[2])) && a178 == -1)) {
printf("POINT: 1094\n");
    	cf = 0;
    	a21 = 35 ;
    	a28 = a60[(a271 - 8)];
    	a264 = a290[(a394 + -11)]; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm18(int input) {
printf("POINT: 1095\n");

    if((((a227 == 34 && ((a268 == 34 && (a161 == 4 &&  cf==1 )) && a357 == 10)) && (61 == a350[0])) && (a328 == a279[2] && (31 == a288[5])))) {
printf("POINT: 1096\n");
    	calculate_outputm118(input);
    } 
printf("POINT: 1097\n");

    if((((31 == a288[5]) && ((a282 == 34 && (a311 == a298[2] && (19 == a368[1]))) && a206 == 34)) && (( cf==1  && a161 == 5) && a357 == 10))) {
printf("POINT: 1098\n");
    	calculate_outputm119(input);
    } 
}
 void calculate_outputm122(int input) {
printf("POINT: 1099\n");

    if(((a328 == a279[2] && (a357 == 10 && (((a56 == 34 &&  cf==1 ) && input == inputs[0]) && a111 == a195[1]))) && (a219 == 5 && ((19 == a368[1]) && (a331 == a380[2] && (a28 == a60[2] && a206 == 34)))))) {
printf("POINT: 1100\n");
    	cf = 0;
    	a315 = a321;
    	a328 = a279[(a219 + -5)];
    	a264 = a290[(a219 / a357)];
    	a286 = (((((a286 * a396) % 14999) - 16497) - 6718) + -3292);
    	a357 = ((a219 + a219) - 2);
    	a32 = (a219 - -7);
    	a331 = a380[(a219 - 5)];
    	a282 = 33 ;
    	a350 = a336;
    	a368 = a397;
    	a223 = a343[(a32 - 12)];
    	a396 = ((((a329 * a329) * 1) + -29346) + -628);
    	a28 = a60[(a271 - 8)];
    	a268 = 33 ;
    	a288 = a297;
    	a394 = (a219 + 5);
    	a340 = ((((a340 * a329) + -24709) + 24524) * -1);
    	a206 = 33 ;
    	a271 = (a357 - -2);
    	a311 = a298[(a219 - a219)];
    	a329 = (((((a329 * a286) % 14999) - 11665) - 3250) * 1);
    	a219 = 3; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1101\n");

    if(((((31 == a288[5]) && ((((a28 == a60[2] &&  cf==1 ) && a111 == a195[1]) && a56 == 34) && a271 == 12)) && a331 == a380[2]) && ((a219 == 5 && (input == inputs[3] && (19 == a368[1]))) && (61 == a350[0])))) {
printf("POINT: 1102\n");
    	cf = 0;
    	a268 = 33 ;
    	a282 = 33 ;
    	a329 = ((((((a396 * a286) % 14999) - 20114) + -5375) * 10) / 9);
    	a340 = ((((((a340 * a329) % 14999) - -19495) * 1) + 5443) - 30549);
    	a132 = a91[a219];
    	a264 = a290[(a394 - 5)];
    	a223 = a343[(a271 + -12)];
    	a219 = ((a357 / a357) + 2);
    	a28 = a60[(a219 + 1)];
    	a368 = a397;
    	a350 = a336;
    	a331 = a380[(a357 - 10)];
    	a328 = a279[(a357 - a357)];
    	a271 = a357;
    	a286 = ((((((a286 * a340) % 14999) % 14960) - 15038) - 1) - 1);
    	a357 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1103\n");

    if(((((83 < a286) && (291 >= a286)) && (a223 == a343[2] && ((a328 == a279[2] && a357 == 10) && a28 == a60[2]))) && (((61 == a350[0]) && ((( cf==1  && a56 == 34) && input == inputs[4]) && a111 == a195[1])) && (31 == a288[5])))) {
printf("POINT: 1104\n");
    	cf = 0;
    	a28 = a60[(a394 - 8)];
    	a315 = a321;
    	a268 = 33 ;
    	a396 = (((1 - 23597) - 2459) + -3866);
    	a223 = a343[(a219 + -5)];
    	a32 = ((a271 + a271) - 12);
    	a206 = 33 ;
    	a286 = (((((a286 * a396) % 14999) + 5741) + -1246) - 8190);
    	a311 = a298[((a394 + a394) + -24)];
    	a350 = a336;
    	a288 = a297;
    	a264 = a290[(a219 + -5)];
    	a271 = a357;
    	a340 = ((((a340 * a329) - 29987) / 5) * 5);
    	a368 = a397;
    	a328 = a279[((a357 + a357) - 20)];
    	a329 = (((((a329 * a286) % 14999) - 6268) / 5) * 5);
    	a331 = a380[(a357 - 10)];
    	a219 = (a357 + -7);
    	a394 = a357;
    	a282 = 33 ;
    	a357 = 8; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm125(int input) {
printf("POINT: 1105\n");

    if(((((((31 == a288[5]) && (((53 < a340) && (129 >= a340)) && (( cf==1  && a28 == a60[2]) && a111 == a195[6]))) && (41 == a315[0])) && a394 == 12) && ((input == inputs[2] && (a56 == 34 && a331 == a380[2])) && a227 == 34)) && a39 == 0)) {
printf("POINT: 1106\n");
    	cf = 0;
    	a156 = (a357 - -3);
    	a151 = ((a219 - a156) + 21);
    	a28 = a60[((a394 * a271) - 143)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1107\n");

    if(((((((input == inputs[1] &&  cf==1 ) && a111 == a195[6]) && a271 == 12) && a28 == a60[2]) && (19 == a368[1])) && (a357 == 10 && (a268 == 34 && (a56 == 34 && (a282 == 34 && a311 == a298[2])))))) {
printf("POINT: 1108\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1109\n");

    if((((a227 == 34 && (a219 == 5 && ((( cf==1  && a56 == 34) && a111 == a195[6]) && a28 == a60[2]))) && ((3 < a329) && (171 >= a329))) && ((a271 == 12 && (a206 == 34 && ((83 < a286) && (291 >= a286)))) && input == inputs[8]))) {
printf("POINT: 1110\n");
    	cf = 0;
    	a350 = a336;
    	a331 = a380[0];
    	a93 = (a219 + 10);
    	a67 = ((((((a340 * a329) * 1) / 5) + 13316) % 21) + 78);
    	a394 = ((a271 / a271) + 9);
    	a206 = 33 ;
    	a315 = a321;
    	a311 = a298[0];
    	a28 = a60[((a357 / a93) - -7)];
    	a368 = a397;
    	a286 = (((((a286 * a340) % 14999) + -26002) + 6505) + -9202);
    	a227 = 33 ;
    	a288 = a297;
    	a357 = 8;
    	a328 = a279[0];
    	a340 = ((((a340 * a67) - -7799) - 7390) / -5); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1111\n");

    if(((((a111 == a195[6] && (a206 == 34 && a282 == 34)) && a311 == a298[2]) && a394 == 12) && (((16 < a396) && (224 >= a396)) && ((a28 == a60[2] && ((input == inputs[13] &&  cf==1 ) && a56 == 34)) && (31 == a288[5]))))) {
printf("POINT: 1112\n");
    	cf = 0;
    	a340 = ((((((a340 * a396) + -20903) - -6256) * 2) % 15) - -38);
    	a357 = 9;
    	a21 = 34 ;
    	a155 = (((((a329 * a286) % 14999) + -21215) / 5) + -8578);
    	a28 = a60[((a219 - a219) - -6)];
    	a315 = a321;
    	a396 = ((((((a340 * a329) % 43) + -67) - -7) * 10) / 9);
    	a288 = a297;
    	a227 = 32 ;
    	a286 = ((((((a329 * a340) % 80) + -32) + -26) + -14217) + 14233);
    	a282 = 33 ;
    	a331 = a380[(a271 - 11)];
    	a394 = (a219 - -6);
    	a206 = 33 ;
    	a271 = (a357 + 2);
    	a219 = 4;
    	a368 = a371;
    	a268 = 32 ;
    	a350 = a336;
    	a223 = a343[0];
    	a311 = a298[1];
    	a328 = a279[1];
    	a329 = ((((a329 * a340) * 3) - -2110) + -31316); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1113\n");

    if(((a268 == 34 && (a357 == 10 && (a56 == 34 && a331 == a380[2]))) && (a328 == a279[2] && (a223 == a343[2] && ((((a111 == a195[6] &&  cf==1 ) && input == inputs[0]) && ((3 < a329) && (171 >= a329))) && a28 == a60[2]))))) {
printf("POINT: 1114\n");
    	cf = 0;
printf("POINT: 1115\n");

    	if(((a111 == a195[3] && a331 == 8) || a97 <=  -88)) {
printf("POINT: 1116\n");
    	a155 = (((((a396 * a286) % 14999) + -9004) + -14401) + -1332);
    	a282 = 33 ;
    	a227 = 32 ;
    	a396 = ((((((a155 * a155) % 14999) / 5) - -13881) % 43) - 51);
    	a329 = ((((((a329 * a155) % 14999) % 14922) + -15077) + -1) + 0);
    	a206 = 33 ;
    	a368 = a371;
    	a328 = a279[(a271 / a271)];
    	a340 = (((((a340 * a396) * 3) - -10945) % 15) - -38);
    	a28 = a60[(a357 - 4)];
    	a350 = a336;
    	a223 = a343[((a271 + a271) - 24)];
    	a394 = ((a271 + a357) + -11);
    	a311 = a298[(a219 + -4)];
    	a315 = a321;
    	a21 = 34 ;
    	a288 = a297;
    	a268 = 32 ;
    	a331 = a380[(a271 + -11)];
    	a219 = (a271 - 8);
    	a286 = ((((((a340 * a155) % 14999) - 8592) % 80) + 1) + 0);
    	a357 = (a271 + -3);
    	a271 = a394; 
    	}else {
printf("POINT: 1118\n");
    	a315 = a321;
    	a93 = ((a219 + a357) + -6);
    	a227 = 33 ;
    	a350 = a336;
    	a394 = a357;
    	a357 = (a394 + -2);
    	a206 = 33 ;
    	a288 = a297;
    	a331 = a380[(a93 - 9)];
    	a28 = a60[(a271 + -12)];
    	a180 = a164[(a93 - 5)];
    	a396 = (((((a396 * a329) % 14999) + -4379) - 23311) * 1);
    	a286 = (((((a286 * a329) % 14999) - 26392) + -1105) + 4929);
    	a268 = 33 ;
    	a271 = ((a93 * a394) + -80);
    	a340 = ((((a340 * a329) / -5) - 9058) * 2);
    	a328 = a279[(a93 + -9)];
    	a223 = a343[(a93 + -9)];
    	a311 = a298[(a93 - 9)];
    	a219 = (a93 + -6);
    	a282 = 33 ;
    	a368 = a397;
    	a329 = (((((a329 * a286) % 14999) + -12004) - 569) + -450);
    	}printf("%d\n", 25);  
    } 
}
 void calculate_outputm126(int input) {
printf("POINT: 1119\n");

    if(((a206 == 34 && ((( cf==1  && input == inputs[9]) && a56 == 34) && a219 == 5)) && (a111 == a195[7] && ((31 == a288[5]) && ((a328 == a279[2] && (a28 == a60[2] && ((53 < a340) && (129 >= a340)))) && a394 == 12))))) {
printf("POINT: 1120\n");
    	cf = 0;
    	a396 = ((((a340 * a340) + -25546) + -346) - 5206);
    	a328 = a279[((a394 / a394) - 1)];
    	a311 = a298[(a394 - 12)];
    	a368 = a397;
    	a219 = ((a394 / a394) + 2);
    	a357 = ((a394 * a394) + -136);
    	a223 = a343[(a219 + -3)];
    	a271 = ((a219 / a394) + 10);
    	a286 = (((((((a286 * a340) % 14999) / 5) / 5) - -27272) % 80) - 52);
    	a329 = ((((((a329 * a396) % 14999) + -6517) * 10) / 9) / 5);
    	a206 = 33 ;
    	a282 = 33 ;
    	a331 = a380[(a271 + -10)];
    	a227 = 33 ;
    	a288 = a297;
    	a28 = a60[(a394 + -5)];
    	a340 = (((((a340 * a396) % 14999) + -10151) - 1074) * 1);
    	a350 = a336;
    	a93 = (a394 + -2);
    	a315 = a321;
    	a267 = (a394 + -9);
    	a394 = (a357 - -2); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1121\n");

    if(((a282 == 34 && (a219 == 5 && (a271 == 12 && (a28 == a60[2] && ( cf==1  && a111 == a195[7]))))) && ((((16 < a396) && (224 >= a396)) && (a56 == 34 && (a394 == 12 && input == inputs[0]))) && ((53 < a340) && (129 >= a340))))) {
printf("POINT: 1122\n");
    	cf = 0;
    	a86 = (a394 - 8);
    	a223 = a343[(a219 + -4)];
    	a328 = a279[(a394 + -11)];
    	a315 = a295;
    	a311 = a298[(a86 - 3)];
    	a219 = (a394 + -8);
    	a396 = ((((((a340 * a340) % 43) - 43) * 9) / 10) - 14);
    	a329 = (((((((a329 * a286) % 14999) % 79) + -101) / 5) * 9) / 10);
    	a350 = a366;
    	a286 = (((((a329 * a340) % 80) - -3) * 5) / 5);
    	a271 = (a86 + 7);
    	a227 = 32 ;
    	a206 = 33 ;
    	a282 = 32 ;
    	a288 = a270;
    	a28 = a60[(a357 + -9)];
    	a156 = (a394 + -1);
    	a340 = (((((((a340 * a396) + 27665) % 15) + 27) * 5) % 15) + 29);
    	a368 = a371;
    	a357 = (a394 + -3);
    	a268 = 32 ;
    	a331 = a380[((a394 * a156) - 131)];
    	a394 = a271; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1123\n");

    if((((61 == a350[0]) && (input == inputs[7] && ((a111 == a195[7] && (a56 == 34 &&  cf==1 )) && a227 == 34))) && ((a223 == a343[2] && ((19 == a368[1]) && (a28 == a60[2] && ((83 < a286) && (291 >= a286))))) && a219 == 5))) {
printf("POINT: 1124\n");
    	cf = 0;
printf("POINT: 1125\n");

    	if((55 == a90[0])) {
printf("POINT: 1126\n");
    	a268 = 32 ;
    	a396 = ((((((a340 * a340) % 43) + -41) + 4) + 14378) - 14397);
    	a286 = ((((((a396 * a340) % 80) + 3) / 5) - -25993) + -25946);
    	a206 = 32 ;
    	a271 = (a357 - -1);
    	a28 = a60[(a357 - 7)];
    	a288 = a270;
    	a315 = a295;
    	a219 = ((a357 / a357) + 3);
    	a311 = a298[(a357 - 9)];
    	a340 = ((((((a340 * a286) * 2) % 15) - -37) - -5594) - 5592);
    	a394 = ((a271 * a357) + -99);
    	a223 = a343[(a357 + -9)];
    	a328 = a279[(a357 - 9)];
    	a329 = ((((((a329 * a286) - 4948) / 5) - 12522) % 79) + -30);
    	a350 = a366;
    	a188 = a105;
    	a368 = a371;
    	a227 = 32 ;
    	a331 = a380[((a219 - a394) + 8)];
    	a20 = 34 ;
    	a282 = 32 ;
    	a357 = (a219 - -5); 
    	}else {
printf("POINT: 1128\n");
    	a155 = (((((((a286 * a329) % 14999) - 29068) + 39791) - -3995) % 54) + 124);
    	a394 = (a271 - 1);
    	a329 = (((((((a155 * a340) + -17383) % 79) - 75) * 5) % 79) + -76);
    	a315 = a295;
    	a223 = a343[(a394 - 10)];
    	a288 = a270;
    	a340 = ((((((a286 * a155) % 14999) - 28118) * 1) % 15) - -43);
    	a311 = a298[((a394 * a394) - 120)];
    	a268 = 32 ;
    	a328 = a279[((a394 - a394) - -1)];
    	a331 = a380[(a271 + -11)];
    	a357 = ((a219 / a271) + 9);
    	a28 = a60[(a271 + -6)];
    	a271 = a394;
    	a56 = 36 ;
    	a206 = 32 ;
    	a219 = (a394 + -7);
    	a227 = 32 ;
    	a350 = a366;
    	a368 = a371;
    	a282 = 32 ;
    	a286 = (((((((a286 * a396) % 14999) + 14068) / 5) + -28053) % 80) + 57);
    	a396 = ((((((a396 * a155) % 14999) + -14379) - 6499) % 43) - -2);
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm19(int input) {
printf("POINT: 1129\n");

    if(((a271 == 12 && (((a111 == a195[1] &&  cf==1 ) && ((53 < a340) && (129 >= a340))) && a268 == 34)) && ((41 == a315[0]) && (a282 == 34 && a223 == a343[2])))) {
printf("POINT: 1130\n");
    	calculate_outputm122(input);
    } 
printf("POINT: 1131\n");

    if((((((19 == a368[1]) && a223 == a343[2]) && a331 == a380[2]) && ((53 < a340) && (129 >= a340))) && ((a271 == 12 && (a111 == a195[6] &&  cf==1 )) && a394 == 12))) {
printf("POINT: 1132\n");
    	calculate_outputm125(input);
    } 
printf("POINT: 1133\n");

    if(((((3 < a329) && (171 >= a329)) && (a206 == 34 && (a394 == 12 && a357 == 10))) && ((31 == a288[5]) && (a331 == a380[2] && (a111 == a195[7] &&  cf==1 ))))) {
printf("POINT: 1134\n");
    	calculate_outputm126(input);
    } 
}
 void calculate_outputm128(int input) {
printf("POINT: 1135\n");

    if(((((53 < a340) && (129 >= a340)) && ((a271 == 12 && (input == inputs[0] && (a56 == 35 &&  cf==1 ))) && ((83 < a286) && (291 >= a286)))) && (a357 == 10 && (((a268 == 34 && (88 == a0[4])) && a28 == a60[2]) && (41 == a315[0]))))) {
printf("POINT: 1136\n");
    	a171 -= (a171 - 20) < a171 ? 4 : 0;
printf("POINT: 1138\n");
    	cf = 0;
printf("POINT: 1139\n");

    	if((((17 == a100[5]) || a151 == 17) || !(a206 == 35))) {
printf("POINT: 1140\n");
    	a86 = (a394 - 5);
    	a311 = a298[((a394 + a219) - 16)];
    	a368 = a397;
    	a268 = 32 ;
    	a156 = a357;
    	a315 = a295;
    	a396 = ((((((a396 * a286) % 14999) - -12850) % 43) + -33) + 2);
    	a350 = a366;
    	a357 = ((a219 / a219) - -8);
    	a206 = 32 ;
    	a340 = (((((a340 * a329) % 15) + 38) * 5) / 5);
    	a328 = a279[((a271 + a219) + -16)];
    	a271 = (a357 + 2);
    	a28 = a60[((a219 * a394) + -59)];
    	a286 = (((((a329 * a329) % 80) + 1) - -3) / 5);
    	a394 = (a156 + 1);
    	a331 = a380[(a219 - 4)];
    	a219 = ((a86 * a86) + -45); 
    	}else {
printf("POINT: 1142\n");
    	a315 = a321;
    	a286 = ((((((a340 * a340) * 10) / -9) / 5) * 10) / 9);
    	a331 = a380[0];
    	a227 = 33 ;
    	a282 = 33 ;
    	a357 = 8;
    	a264 = a290[(a219 + -2)];
    	a28 = a60[(a271 / a219)];
    	a311 = a298[(a357 - 8)];
    	a143 = a176[(a394 - 8)];
    	a271 = ((a357 - a357) + 10);
    	a268 = 33 ;
    	a396 = (((((a396 * a286) % 14999) + -87) * 1) + -3648);
    	a394 = ((a271 / a271) - -9);
    	a350 = a336;
    	a288 = a297;
    	a329 = ((((((a286 * a286) % 14999) - -13983) * -1) / 10) + -4409);
    	a206 = 33 ;
    	a328 = a279[(a357 - 8)];
    	a368 = a397;
    	a223 = a343[0];
    	a340 = (((((a340 * a329) % 14999) / 5) - -20197) + -38230);
    	a219 = 3;
    	}printf("%d\n", 18);  
    } 
}
 void calculate_outputm20(int input) {
printf("POINT: 1143\n");

    if((((((88 == a0[4]) &&  cf==1 ) && a206 == 34) && a311 == a298[2]) && ((a271 == 12 && (a328 == a279[2] && ((16 < a396) && (224 >= a396)))) && a394 == 12))) {
printf("POINT: 1144\n");
    	calculate_outputm128(input);
    } 
}
 void calculate_outputm129(int input) {
printf("POINT: 1145\n");

    if((((((16 < a396) && (224 >= a396)) && (a357 == 10 && (((31 == a288[5]) && (( cf==1  && a56 == 36) && a28 == a60[2])) && input == inputs[2]))) && (a206 == 34 && (a129 == a108[0] && (a282 == 34 && (61 == a350[0]))))) && a189 == -7)) {
printf("POINT: 1146\n");
    	cf = 0;
    	a264 = a290[(a219 / a271)];
    	a28 = a60[(a271 + -6)];
    	a32 = (a357 + 6); 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1147\n");

    if((((41 == a315[0]) && ((31 == a288[5]) && ((a129 == a108[0] && ( cf==1  && input == inputs[11])) && a56 == 36))) && ((((a227 == 34 && a394 == 12) && a28 == a60[2]) && a282 == 34) && a331 == a380[2]))) {
printf("POINT: 1148\n");
    	cf = 0;
    	a328 = a279[((a357 / a394) - -1)];
    	a350 = a366;
    	a282 = 32 ;
    	a227 = 32 ;
    	a206 = 32 ;
    	a155 = (((((a329 * a396) % 14999) + -25244) - 1813) + -2174);
    	a271 = (a219 + 6);
    	a331 = a380[((a357 - a357) - -1)];
    	a28 = a60[(a394 - 6)];
    	a315 = a295;
    	a286 = ((((((((a286 * a155) % 14999) % 80) - -2) - 1) * 5) % 80) + 3);
    	a329 = ((((36 + -36) - 28589) / 5) + 5646);
    	a340 = (((((8 * 10) / 3) + -1) * 5) - 97);
    	a219 = (a357 + -6);
    	a268 = 32 ;
    	a223 = a343[(a357 / a357)];
    	a21 = 32 ;
    	a288 = a270;
    	a368 = a371;
    	a394 = ((a271 + a357) + -10);
    	a396 = (((((((a396 * a340) % 43) - 57) * 5) + 2415) % 43) + -42);
    	a357 = 9; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1149\n");

    if(((a206 == 34 && ((31 == a288[5]) && (41 == a315[0]))) && ((((input == inputs[0] && (a268 == 34 && (( cf==1  && a129 == a108[0]) && a28 == a60[2]))) && a56 == 36) && a227 == 34) && a328 == a279[2]))) {
printf("POINT: 1150\n");
    	a78 -= (a78 - 20) < a78 ? 3 : 0;
printf("POINT: 1152\n");
    	cf = 0;
    	a21 = 32 ;
    	a357 = (a271 + -3);
    	a331 = a380[(a271 + -11)];
    	a227 = 32 ;
    	a219 = ((a357 + a357) - 14);
    	a394 = (a219 + 7);
    	a288 = a270;
    	a282 = 32 ;
    	a268 = 32 ;
    	a350 = a366;
    	a155 = ((((a340 * a396) + 482) - 29689) / 5);
    	a340 = (((97 + 21624) + -21670) - -1);
    	a329 = (((58 + -58) - -2) + -21);
    	a368 = a371;
    	a28 = a60[(a271 - 6)];
    	a206 = 32 ;
    	a396 = (((((a329 * a329) - -2423) / 5) % 43) - 32);
    	a286 = ((((((((a286 * a329) % 14999) + -563) % 80) + 1) * 5) % 80) + 1);
    	a328 = a279[(a271 - 11)];
    	a315 = a295;
    	a223 = a343[(a357 + -8)];
    	a271 = (a357 + 2); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1153\n");

    if(((((31 == a288[5]) && (((16 < a396) && (224 >= a396)) && (a28 == a60[2] && (61 == a350[0])))) && (a271 == 12 && (((a56 == 36 && (input == inputs[7] && ( cf==1  && a129 == a108[0]))) && a219 == 5) && a282 == 34))) && a175 == -10)) {
printf("POINT: 1154\n");
    	cf = 0;
    	a263 = 32 ;
    	a28 = a60[(a219 - -2)];
    	a93 = (a271 - -1); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1155\n");

    if((((31 == a288[5]) && ((a227 == 34 && ((3 < a329) && (171 >= a329))) && input == inputs[5])) && (((((a129 == a108[0] && (a56 == 36 &&  cf==1 )) && a28 == a60[2]) && a282 == 34) && a331 == a380[2]) && a268 == 34))) {
printf("POINT: 1156\n");
    	cf = 0;
    	a131 = ((a394 - a271) - -5);
    	a331 = a380[((a271 + a357) - 21)];
    	a315 = a295;
    	a28 = a60[(a131 / a219)];
    	a227 = 32 ;
    	a368 = a371;
    	a340 = (((((((a329 * a329) % 15) + 30) - -5) * 5) % 15) + 28);
    	a394 = (a131 - -6);
    	a268 = 32 ;
    	a286 = ((((((a286 * a396) % 14999) / 5) % 80) + -27) - 21);
    	a328 = a279[((a271 - a131) - 6)];
    	a329 = (((((((a329 * a396) % 14999) + -14610) % 79) - 75) + 3991) + -3992);
    	a206 = 32 ;
    	a357 = (a219 - -4);
    	a396 = (((((((a396 * a340) % 43) - 30) * 5) - -5715) % 43) + -61);
    	a219 = (a131 + -1);
    	a156 = (a394 + -2); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1157\n");

    if((((a28 == a60[2] && (41 == a315[0])) && (((3 < a329) && (171 >= a329)) && ((((((( cf==1  && a56 == 36) && input == inputs[10]) && a282 == 34) && a328 == a279[2]) && a271 == 12) && a223 == a343[2]) && a129 == a108[0]))) && a40 == -18)) {
printf("POINT: 1158\n");
    	cf = 0;
    	a93 = ((a394 * a219) - 44);
    	a99 = (a219 - -6);
    	a28 = a60[(a99 - 4)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1159\n");

    if((((41 == a315[0]) && (((((input == inputs[6] && (a56 == 36 &&  cf==1 )) && a268 == 34) && a219 == 5) && a28 == a60[2]) && ((3 < a329) && (171 >= a329)))) && (a206 == 34 && (a129 == a108[0] && a331 == a380[2])))) {
printf("POINT: 1160\n");
    	a102 += (a102 + 20) > a102 ? 4 : 0;
printf("POINT: 1162\n");
    	a189 -= (a189 - 20) < a189 ? 6 : 0;
printf("POINT: 1164\n");
    	a84 += (a84 + 20) > a84 ? 2 : 0;
printf("POINT: 1166\n");
    	cf = 0;
    	a141 = (((((a396 * a286) % 14999) + 9836) * 1) * 1);
    	a206 = 32 ;
    	a227 = 32 ;
    	a315 = a295;
    	a156 = (a357 - 2);
    	a219 = ((a394 - a394) - -4);
    	a328 = a279[((a394 - a219) + -7)];
    	a357 = (a219 - -5);
    	a286 = ((((((a340 * a141) % 14999) + 4136) / 5) % 80) - -2);
    	a331 = a380[(a219 + -3)];
    	a288 = a270;
    	a28 = a60[((a271 + a394) - 23)];
    	a271 = (a394 - 1);
    	a340 = ((((((a396 * a396) % 14999) / 5) % 15) + 33) - 4);
    	a268 = 32 ;
    	a282 = 32 ;
    	a394 = (a156 + 3);
    	a368 = a371;
    	a329 = ((((((a329 * a396) % 14999) - 27787) + 41335) % 79) + -140);
    	a396 = (((((((a396 * a141) % 14999) % 43) + -51) + -8504) / 5) + 1662); 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm132(int input) {
printf("POINT: 1167\n");

    if((((a28 == a60[2] && a328 == a279[2]) && input == inputs[3]) && ((((83 < a286) && (291 >= a286)) && (a331 == a380[2] && ((41 == a315[0]) && ((a129 == a108[4] && (a56 == 36 &&  cf==1 )) && a311 == a298[2])))) && a394 == 12))) {
printf("POINT: 1168\n");
    	cf = 0;
printf("POINT: 1169\n");

    	if((!(a111 == a195[0]) && (((115 == a188[4]) || a271 == 10) || !(a166 == a26[7])))) {
printf("POINT: 1170\n");
    	a282 = 34 ;
    	a357 = 8;
    	a206 = 33 ;
    	a311 = a298[7];
    	a28 = a60[(a394 - 6)];
    	a155 = ((((((a340 * a329) % 54) + 120) - -12034) / 5) + -2296);
    	a368 = a293;
    	a394 = 17;
    	a56 = 35 ;
    	a286 = (((((a286 - 21739) % 103) + 230) / 5) - -153);
    	a271 = 14;
    	a219 = 8;
    	a315 = a273;
    	a350 = a377;
    	a331 = a380[4];
    	a396 = (((a396 - -27912) - -981) + 488);
    	a268 = 34 ;
    	a340 = ((((a340 / 5) / 5) * 5) * -5);
    	a223 = a343[3];
    	a288 = a297;
    	a328 = a279[0];
    	a227 = 33 ;
    	a329 = ((((((a329 - -17127) % 83) + 66) * 5) % 83) - -67); 
    	}else {
printf("POINT: 1172\n");
    	a315 = a273;
    	a368 = a371;
    	a180 = a164[(a219 - 4)];
    	a28 = a60[((a394 + a394) + -24)];
    	a350 = a366;
    	a223 = a343[2];
    	a357 = 14;
    	a15 = 33 ;
    	a328 = a279[3];
    	a227 = 35 ;
    	a394 = 11;
    	a282 = 34 ;
    	a286 = (((((a286 * 5) * 5) - 11589) * -1) / 10);
    	a331 = a380[4];
    	a288 = a399;
    	a396 = (((((a396 - -12597) + 13151) * 1) % 103) + 118);
    	a268 = 36 ;
    	a206 = 32 ;
    	a311 = a298[7];
    	a271 = 12;
    	a340 = ((((a340 - -25049) / 5) / 5) - 975);
    	a329 = ((((a329 % 83) - -54) - 22755) - -22710);
    	a219 = 10;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1173\n");

    if(((a394 == 12 && (a56 == 36 && a328 == a279[2])) && ((((input == inputs[6] && (((a129 == a108[4] &&  cf==1 ) && a28 == a60[2]) && (41 == a315[0]))) && a311 == a298[2]) && a282 == 34) && a271 == 12))) {
printf("POINT: 1174\n");
    	a88 -= (a88 - 20) < a88 ? 4 : 0;
printf("POINT: 1176\n");
    	cf = 0;
printf("POINT: 1177\n");

    	if((a121 == 32 && (!(a154 == 14) && ((a157 == 11 && !(a143 == 6)) || !(a166 == a26[2]))))) {
printf("POINT: 1178\n");
    	a28 = a60[(a394 + -9)];
    	a136 = ((a271 / a271) + 7);
    	a188 = a43; 
    	}else {
printf("POINT: 1180\n");
    	a311 = a298[7];
    	a282 = 34 ;
    	a80 = (a394 + -1);
    	a268 = 33 ;
    	a350 = a336;
    	a368 = a293;
    	a28 = a60[((a80 / a357) - -4)];
    	a288 = a399;
    	a331 = a380[6];
    	a328 = a279[7];
    	a125 = (((((a286 * a329) % 14999) + 14716) + -39198) - 2081);
    	a286 = ((((a286 - -9988) - -7183) * 10) / 9);
    	a329 = (((((a329 * 431) / 10) + -8396) * -2) / 10);
    	a223 = a343[5];
    	a206 = 33 ;
    	a219 = 6;
    	a396 = ((((a396 * 5) * 10) / 3) - -14525);
    	a315 = a321;
    	a340 = (((((a340 % 37) + 68) - 12398) - 15782) + 28175);
    	a271 = 16;
    	a394 = 14;
    	a227 = 34 ;
    	a357 = 11;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 1181\n");

    if((((a129 == a108[4] && a357 == 10) && a223 == a343[2]) && (a328 == a279[2] && (a271 == 12 && (((83 < a286) && (291 >= a286)) && (a28 == a60[2] && (((16 < a396) && (224 >= a396)) && ((input == inputs[7] &&  cf==1 ) && a56 == 36)))))))) {
printf("POINT: 1182\n");
    	cf = 0;
    	a268 = 35 ;
    	a223 = a343[6];
    	a315 = a273;
    	a227 = 32 ;
    	a340 = ((((((a340 % 15) + 37) * 9) / 10) + 22800) + -22794);
    	a396 = (((((a396 * 5) % 43) - 70) * 9) / 10);
    	a28 = a60[(a357 - 3)];
    	a282 = 36 ;
    	a368 = a293;
    	a288 = a399;
    	a206 = 36 ;
    	a219 = 9;
    	a93 = ((a394 / a271) - -13);
    	a331 = a380[3];
    	a328 = a279[7];
    	a350 = a366;
    	a286 = ((((a286 + -19432) + -1224) % 103) + 267);
    	a329 = ((((a329 % 83) - -55) / 5) - -55);
    	a311 = a298[1];
    	a357 = 12;
    	a139 = a37;
    	a271 = 14;
    	a394 = 15; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1183\n");

    if((((a129 == a108[4] && (a28 == a60[2] &&  cf==1 )) && a223 == a343[2]) && ((((((a328 == a279[2] && a56 == 36) && input == inputs[4]) && (41 == a315[0])) && a357 == 10) && ((3 < a329) && (171 >= a329))) && a268 == 34))) {
printf("POINT: 1184\n");
    	cf = 0;
printf("POINT: 1185\n");

    	if(a156 == 14) {
printf("POINT: 1186\n");
    	a223 = a343[2];
    	a282 = 33 ;
    	a28 = a60[(a219 + -2)];
    	a329 = ((((a329 / 5) + 117) + 1415) - 1446);
    	a20 = 34 ;
    	a368 = a293;
    	a394 = 13;
    	a268 = 35 ;
    	a286 = (((((a286 - -16760) * 10) / -9) * 10) / 9);
    	a311 = a298[6];
    	a315 = a321;
    	a331 = a380[7];
    	a357 = 8;
    	a340 = (((a340 / 5) + -2298) + -10435);
    	a350 = a377;
    	a219 = 3;
    	a396 = ((((a396 / 5) - -16314) / 5) - 28466);
    	a288 = a399;
    	a271 = 17;
    	a328 = a279[2];
    	a206 = 36 ;
    	a227 = 34 ;
    	a188 = a105; 
    	}else {
printf("POINT: 1188\n");
    	a394 = 15;
    	a227 = 35 ;
    	a271 = 15;
    	a219 = 9;
    	a286 = ((((a286 - 25311) / 5) * -1) / 10);
    	a331 = a380[0];
    	a155 = (((((((a329 * a396) % 14999) - -12910) - -289) / 5) % 54) + 157);
    	a223 = a343[6];
    	a311 = a298[5];
    	a340 = ((((a340 - 8449) + -15000) % 37) - -91);
    	a28 = a60[(a357 - 4)];
    	a368 = a397;
    	a329 = (((((a329 * 431) / 10) * 4) + -2687) + 2999);
    	a288 = a399;
    	a328 = a279[6];
    	a350 = a377;
    	a206 = 35 ;
    	a268 = 36 ;
    	a282 = 34 ;
    	a315 = a321;
    	a396 = ((((((a396 % 103) - -42) * 9) / 10) * 10) / 9);
    	a357 = 8;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1189\n");

    if((((((3 < a329) && (171 >= a329)) && (((53 < a340) && (129 >= a340)) && (a328 == a279[2] && ((input == inputs[5] && (19 == a368[1])) && a28 == a60[2])))) && a223 == a343[2]) && (a227 == 34 && (a56 == 36 && (a129 == a108[4] &&  cf==1 ))))) {
printf("POINT: 1190\n");
    	cf = 0;
    	a56 = 32 ;
    	a161 = (a271 + -9); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1191\n");

    if(((((31 == a288[5]) && a206 == 34) && a328 == a279[2]) && ((a223 == a343[2] && (a56 == 36 && ((((a129 == a108[4] &&  cf==1 ) && a28 == a60[2]) && input == inputs[10]) && a357 == 10))) && ((16 < a396) && (224 >= a396))))) {
printf("POINT: 1192\n");
    	a40 += (a40 + 20) > a40 ? 2 : 0;
printf("POINT: 1194\n");
    	cf = 0;
printf("POINT: 1195\n");

    	if((!(57 == a350[2]) && (((a129 == 7 || a223 == 4) && !(a132 == a91[5])) && a56 == 34))) {
printf("POINT: 1196\n");
    	a329 = (((a329 * 5) - -15672) / 5);
    	a368 = a293;
    	a227 = 36 ;
    	a328 = a279[3];
    	a350 = a377;
    	a112 = ((a357 + a219) - 8);
    	a315 = a273;
    	a311 = a298[6];
    	a180 = a164[((a112 * a394) + -84)];
    	a219 = 6;
    	a28 = a60[((a219 / a219) + -1)];
    	a282 = 34 ;
    	a340 = (((((a340 * 10) / 4) / 5) + -22300) - -52063);
    	a223 = a343[5];
    	a331 = a380[3];
    	a357 = 9; 
    	}else {
printf("POINT: 1198\n");
    	a163 = (((((((a329 * a286) % 14999) % 44) - -233) - 19656) * 1) + 19624);
    	a28 = a60[(a357 - 10)];
    	a180 = a164[((a394 - a271) - -7)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1199\n");

    if((((a227 == 34 && (a311 == a298[2] && (41 == a315[0]))) && ((3 < a329) && (171 >= a329))) && (a282 == 34 && (((19 == a368[1]) && (((a129 == a108[4] &&  cf==1 ) && a56 == 36) && a28 == a60[2])) && input == inputs[13])))) {
printf("POINT: 1200\n");
    	cf = 0;
    	a188 = a43;
    	a28 = a60[(a357 + -7)];
    	a136 = (a357 - 1); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1201\n");

    if((((((a56 == 36 && a206 == 34) && a311 == a298[2]) && (19 == a368[1])) && input == inputs[2]) && (a268 == 34 && ((((a129 == a108[4] &&  cf==1 ) && a28 == a60[2]) && a328 == a279[2]) && a282 == 34)))) {
printf("POINT: 1202\n");
    	cf = 0;
    	a271 = 17;
    	a396 = ((((((a396 % 43) + -31) - 10) * 5) % 43) + -28);
    	a223 = a343[2];
    	a97 = (((((((a286 * a329) % 14999) - -12733) - 10850) + -28138) * -1) / 10);
    	a227 = 32 ;
    	a329 = ((((a329 * 431) / 10) - -15024) / 5);
    	a268 = 36 ;
    	a180 = a164[(a357 + -7)];
    	a219 = 9;
    	a28 = a60[(a394 + -12)];
    	a368 = a293;
    	a311 = a298[5];
    	a350 = a377;
    	a340 = ((((((a340 + -5889) % 37) + 109) * 5) % 37) + 69);
    	a286 = (((((a286 % 80) - -1) / 5) - 15008) + 14964);
    	a328 = a279[4];
    	a206 = 35 ;
    	a288 = a270;
    	a331 = a380[2];
    	a315 = a273;
    	a357 = 10;
    	a282 = 36 ;
    	a394 = 13; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1203\n");

    if(((a268 == 34 && (((a56 == 36 && (a129 == a108[4] &&  cf==1 )) && input == inputs[0]) && a311 == a298[2])) && (((31 == a288[5]) && (a28 == a60[2] && (a328 == a279[2] && a271 == 12))) && a219 == 5))) {
printf("POINT: 1204\n");
    	a199 -= (a199 - 20) < a199 ? 1 : 0;
printf("POINT: 1206\n");
    	cf = 0;
    	a206 = 34 ;
    	a93 = ((a394 + a357) - 7);
    	a331 = a380[7];
    	a227 = 35 ;
    	a350 = a377;
    	a288 = a270;
    	a67 = ((((a329 * a340) + -23803) * 1) * 1);
    	a340 = ((((a340 + 18034) - -7594) % 15) - -30);
    	a328 = a279[4];
    	a394 = 11;
    	a368 = a293;
    	a268 = 36 ;
    	a311 = a298[1];
    	a28 = a60[((a357 / a93) - -7)];
    	a282 = 32 ;
    	a315 = a295;
    	a286 = (((a286 / 5) / 5) + 240);
    	a271 = 15;
    	a357 = 14; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1207\n");

    if((((((a56 == 36 && (input == inputs[9] &&  cf==1 )) && a28 == a60[2]) && a206 == 34) && (31 == a288[5])) && (((a227 == 34 && (a129 == a108[4] && a311 == a298[2])) && ((83 < a286) && (291 >= a286))) && (19 == a368[1])))) {
printf("POINT: 1208\n");
    	a40 -= (a40 - 20) < a40 ? 2 : 0;
printf("POINT: 1210\n");
    	cf = 0;
    	a28 = a60[(a219 + -1)];
    	a32 = (a357 + 6);
    	a264 = a290[((a271 + a32) - 28)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1211\n");

    if((((a268 == 34 && ((a56 == 36 && (input == inputs[8] && ( cf==1  && a129 == a108[4]))) && a219 == 5)) && a282 == 34) && (((19 == a368[1]) && (a328 == a279[2] && a28 == a60[2])) && a223 == a343[2]))) {
printf("POINT: 1212\n");
    	cf = 0;
printf("POINT: 1213\n");

    	if((!(a271 == 16) && ((19 == a368[1]) || a166 == 12))) {
printf("POINT: 1214\n");
    	a227 = 35 ;
    	a328 = a279[2];
    	a329 = ((((a329 - -17677) / 5) - 3432) - -17817);
    	a223 = a343[7];
    	a93 = (a271 - -4);
    	a396 = (((a396 / 5) - -25245) * 1);
    	a271 = 17;
    	a286 = ((((a286 - -19218) * 1) / 5) + -3847);
    	a288 = a270;
    	a368 = a293;
    	a99 = (a394 - -3);
    	a311 = a298[2];
    	a315 = a295;
    	a282 = 35 ;
    	a350 = a366;
    	a268 = 36 ;
    	a219 = 9;
    	a357 = 12;
    	a206 = 36 ;
    	a340 = (((a340 - -5548) * 5) * 1);
    	a331 = a380[7];
    	a28 = a60[(a99 + -8)];
    	a394 = 11; 
    	}else {
printf("POINT: 1216\n");
    	a331 = a380[4];
    	a328 = a279[1];
    	a223 = a343[1];
    	a32 = (a394 + -2);
    	a268 = 35 ;
    	a206 = 34 ;
    	a315 = a273;
    	a28 = a60[(a357 + -6)];
    	a271 = 11;
    	a282 = 34 ;
    	a288 = a270;
    	a227 = 36 ;
    	a396 = (((a396 / 5) + 10863) * 2);
    	a311 = a298[4];
    	a350 = a377;
    	a286 = (((((a286 + 21095) - 42062) * 1) % 103) + 197);
    	a340 = (((a340 - -15409) + 7893) - -821);
    	a357 = 10;
    	a368 = a293;
    	a264 = a290[(a394 - 12)];
    	a219 = 10;
    	a329 = ((((((a329 % 83) - -58) + -6936) * 4) % 83) - -146);
    	a394 = 14;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1217\n");

    if(((a268 == 34 && (((83 < a286) && (291 >= a286)) && ((31 == a288[5]) && ((a56 == 36 && ( cf==1  && input == inputs[12])) && a129 == a108[4])))) && (a357 == 10 && ((19 == a368[1]) && (((53 < a340) && (129 >= a340)) && a28 == a60[2]))))) {
printf("POINT: 1218\n");
    	cf = 0;
printf("POINT: 1219\n");

    	if(((!(a223 == 9) || ((a340 <=  21 && a166 == a26[4]) && !(24 == a100[0]))) || a331 == 13)) {
printf("POINT: 1220\n");
    	a264 = a290[(a271 - 6)];
    	a90 = a8;
    	a28 = a60[(a271 - 8)]; 
    	}else {
printf("POINT: 1222\n");
    	a75 = 34 ;
    	a155 = ((((((a340 * a396) % 16) + 74) / 5) + 13597) + -13528);
    	a28 = a60[(a394 - 6)];
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1223\n");

    if((((61 == a350[0]) && ((41 == a315[0]) && ((a28 == a60[2] &&  cf==1 ) && a129 == a108[4]))) && (a56 == 36 && ((a357 == 10 && ((a206 == 34 && ((16 < a396) && (224 >= a396))) && input == inputs[11])) && a282 == 34)))) {
printf("POINT: 1224\n");
    	cf = 0;
printf("POINT: 1225\n");

    	if((a143 == a176[6] || ((75 == a0[3]) && !(a32 == 17)))) {
printf("POINT: 1226\n");
    	a340 = ((((a340 / 5) - 23389) * 1) + 23415);
    	a28 = a60[(a219 + -1)];
    	a329 = ((((a329 - -3891) / 5) * -1) / 10);
    	a311 = a298[6];
    	a223 = a343[5];
    	a227 = 36 ;
    	a286 = (((a286 + 5450) / 5) - -26464);
    	a264 = a290[(a394 - 12)];
    	a315 = a295;
    	a32 = (a357 + 3);
    	a350 = a366;
    	a331 = a380[7];
    	a396 = ((((((a396 % 43) + -42) + 6) * 5) % 43) - 26);
    	a357 = 15;
    	a268 = 32 ;
    	a368 = a371;
    	a328 = a279[4];
    	a206 = 32 ;
    	a219 = 5;
    	a288 = a270;
    	a282 = 35 ;
    	a271 = 17;
    	a394 = 12; 
    	}else {
printf("POINT: 1228\n");
    	a28 = a60[(a271 + -11)];
    	a156 = ((a219 * a394) + -48);
    	a157 = a64[(a394 + -5)];
    	}printf("%d\n", 26);  
    } 
printf("POINT: 1229\n");

    if((((a331 == a380[2] && (a129 == a108[4] && (((a28 == a60[2] &&  cf==1 ) && input == inputs[14]) && a56 == 36))) && a357 == 10) && (((a219 == 5 && a206 == 34) && ((83 < a286) && (291 >= a286))) && a282 == 34))) {
printf("POINT: 1230\n");
    	cf = 0;
    	a75 = 34 ;
    	a28 = a60[(a357 - 4)];
    	a155 = (((((((a340 * a329) % 16) - -85) * 9) / 10) / 5) + 77); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1231\n");

    if(((a56 == 36 && ((((input == inputs[1] &&  cf==1 ) && a28 == a60[2]) && (19 == a368[1])) && ((3 < a329) && (171 >= a329)))) && (a129 == a108[4] && ((61 == a350[0]) && ((a357 == 10 && ((53 < a340) && (129 >= a340))) && a271 == 12))))) {
printf("POINT: 1232\n");
    	cf = 0;
printf("POINT: 1233\n");

    	if((!(a311 == a298[6]) && (((!(a182 == a59[1]) && a136 == 8) || a151 == 12) || !(a311 == a298[2])))) {
printf("POINT: 1234\n");
    	a315 = a321;
    	a311 = a298[5];
    	a223 = a343[2];
    	a282 = 34 ;
    	a227 = 35 ;
    	a271 = 12;
    	a156 = ((a219 * a219) + -18);
    	a28 = a60[(a219 - 4)];
    	a331 = a380[0];
    	a268 = 34 ;
    	a206 = 33 ;
    	a219 = 10;
    	a286 = (((a286 - 9159) + 8150) / 5);
    	a328 = a279[4];
    	a329 = ((((a329 % 83) - -83) * 5) / 5);
    	a340 = (((a340 / 5) + -1941) * 5);
    	a368 = a397;
    	a394 = 14;
    	a396 = (((a396 - 1158) * 5) - 11584);
    	a350 = a336;
    	a288 = a399;
    	a357 = 10;
    	a115 = a185[(a156 + -4)]; 
    	}else {
printf("POINT: 1236\n");
    	a368 = a293;
    	a331 = a380[0];
    	a311 = a298[7];
    	a340 = ((((a340 + 6700) % 37) - -80) + 1);
    	a154 = ((a357 - a271) + 13);
    	a288 = a399;
    	a328 = a279[7];
    	a206 = 33 ;
    	a394 = 15;
    	a28 = a60[(a154 + -6)];
    	a227 = 34 ;
    	a350 = a377;
    	a329 = ((((a329 - 15207) - 8569) * 10) / 9);
    	a282 = 34 ;
    	a268 = 34 ;
    	a315 = a321;
    	a125 = (((((a396 * a286) % 14999) - -10961) + 335) * 1);
    	a271 = 13;
    	a219 = 6;
    	a286 = (((((a286 * 10) / -9) / 5) * 10) / 2);
    	a223 = a343[7];
    	a396 = ((((a396 / 5) - -26) + 22873) + -22757);
    	a357 = 15;
    	}printf("%d\n", 23);  
    } 
}
 void calculate_outputm21(int input) {
printf("POINT: 1237\n");

    if(((((19 == a368[1]) && (a227 == 34 && a328 == a279[2])) && ((83 < a286) && (291 >= a286))) && ((( cf==1  && a129 == a108[0]) && a219 == 5) && a394 == 12))) {
printf("POINT: 1238\n");
    	calculate_outputm129(input);
    } 
printf("POINT: 1239\n");

    if((((((16 < a396) && (224 >= a396)) && (a129 == a108[4] &&  cf==1 )) && a282 == 34) && (a268 == 34 && (((41 == a315[0]) && a271 == 12) && ((53 < a340) && (129 >= a340)))))) {
printf("POINT: 1240\n");
    	calculate_outputm132(input);
    } 
}
 void calculate_outputm136(int input) {
printf("POINT: 1241\n");

    if((((a271 == 11 && ((37 == a315[2]) && ((( cf==1  && input == inputs[11]) && (102 == a188[3])) && a28 == a60[3]))) && ((-72 < a396) && (16 >= a396))) && ((a219 == 4 && (a136 == 12 && a206 == 32)) && a227 == 32))) {
printf("POINT: 1242\n");
    	a120 += (a120 + 20) > a120 ? 1 : 0;
printf("POINT: 1244\n");
    	cf = 0;
printf("POINT: 1245\n");

    	if(((64 == a90[3]) && ((314 < a163 && !(a154 == 10)) || !(a328 == 5)))) {
printf("POINT: 1246\n");
    	a28 = a60[((a219 - a219) - -4)];
    	a143 = a176[(a357 - 9)];
    	a264 = a290[((a357 + a357) - 15)]; 
    	}else {
printf("POINT: 1248\n");
    	a286 = ((((a286 % 80) + 3) - -1) + -3);
    	a328 = a279[6];
    	a219 = 7;
    	a223 = a343[4];
    	a331 = a380[6];
    	a315 = a321;
    	a350 = a366;
    	a268 = 36 ;
    	a368 = a371;
    	a161 = (a271 - a357);
    	a206 = 35 ;
    	a329 = ((((a329 * 5) - 3268) * -1) / 10);
    	a394 = 13;
    	a396 = (((a396 - 29666) * 1) - 21);
    	a56 = 32 ;
    	a28 = a60[((a161 * a161) + -2)];
    	a357 = 12;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1249\n");

    if((((((( cf==1  && input == inputs[1]) && a136 == 12) && (102 == a188[3])) && a271 == 11) && a394 == 11) && (((a328 == a279[1] && ((21 == a288[1]) && ((21 < a340) && (53 >= a340)))) && a28 == a60[3]) && a219 == 4))) {
printf("POINT: 1250\n");
    	a39 -= (a39 - 20) < a39 ? 1 : 0;
printf("POINT: 1252\n");
    	cf = 0;
printf("POINT: 1253\n");

    	if((!(a271 == 17) && (a223 == 4 && a132 == a91[4]))) {
printf("POINT: 1254\n");
    	a396 = ((((a396 / 5) + -17) + -14304) + 14286);
    	a329 = (((a329 + 167) / 5) + 72);
    	a268 = 36 ;
    	a286 = ((((a286 + 172) * 5) % 103) + 154);
    	a264 = a290[(a394 - 8)];
    	a328 = a279[6];
    	a219 = 8;
    	a206 = 35 ;
    	a311 = a298[3];
    	a227 = 34 ;
    	a282 = 35 ;
    	a394 = 17;
    	a223 = a343[1];
    	a368 = a293;
    	a357 = 11;
    	a331 = a380[4];
    	a143 = a176[(a271 + -7)];
    	a340 = ((((a340 + 15838) * 10) / 9) - -9172);
    	a28 = a60[(a271 - 7)];
    	a315 = a273;
    	a350 = a377;
    	a288 = a270;
    	a271 = 16; 
    	}else {
printf("POINT: 1256\n");
    	a28 = a60[(a271 + -11)];
    	a180 = a164[(a271 + -11)];
    	a112 = (a136 + 2);
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1257\n");

    if((((((-72 < a396) && (16 >= a396)) && ((a357 == 9 && a28 == a60[3]) && (15 == a368[3]))) && a206 == 32) && (a331 == a380[1] && (((102 == a188[3]) && (a136 == 12 && (input == inputs[14] &&  cf==1 ))) && (37 == a315[2]))))) {
printf("POINT: 1258\n");
    	cf = 0;
    	a227 = 36 ;
    	a328 = a279[4];
    	a268 = 34 ;
    	a264 = a290[(a357 - 2)];
    	a350 = a366;
    	a223 = a343[1];
    	a329 = (((a329 + 23959) - 23797) + 3);
    	a282 = 32 ;
    	a28 = a60[((a136 - a394) - -3)];
    	a368 = a371;
    	a132 = a91[(a357 - a219)];
    	a340 = (((((a340 - 2884) * 5) * 2) % 37) - -103);
    	a331 = a380[6];
    	a286 = (((a286 - 21392) + 21592) + -3);
    	a271 = 11;
    	a219 = 5;
    	a357 = 14; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1259\n");

    if((((37 == a315[2]) && (a357 == 9 && (a394 == 11 && (a28 == a60[3] && (a136 == 12 && ((21 < a340) && (53 >= a340))))))) && ((((-79 < a286) && (83 >= a286)) && (((102 == a188[3]) &&  cf==1 ) && input == inputs[9])) && a311 == a298[1]))) {
printf("POINT: 1260\n");
    	a171 += (a171 + 20) > a171 ? 3 : 0;
printf("POINT: 1262\n");
    	a78 += (a78 + 20) > a78 ? 2 : 0;
printf("POINT: 1264\n");
    	cf = 0;
    	a136 = (a394 + 2); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1265\n");

    if(((((a311 == a298[1] && (a394 == 11 && (input == inputs[13] && a271 == 11))) && a223 == a343[1]) && a331 == a380[1]) && (((( cf==1  && (102 == a188[3])) && a136 == 12) && a28 == a60[3]) && a227 == 32))) {
printf("POINT: 1266\n");
    	cf = 0;
    	a21 = 32 ;
    	a28 = a60[((a219 * a357) + -30)];
    	a155 = ((((((a286 * a396) * 5) - 334) - 165) % 15035) + -14964); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1267\n");

    if((((37 == a315[2]) && (((21 < a340) && (53 >= a340)) && ((((a136 == 12 &&  cf==1 ) && a28 == a60[3]) && a223 == a343[1]) && a268 == 32))) && (a219 == 4 && ((((-72 < a396) && (16 >= a396)) && input == inputs[5]) && (102 == a188[3]))))) {
printf("POINT: 1268\n");
    	cf = 0;
    	a115 = a185[a219];
    	a28 = a60[(a271 + -10)];
    	a156 = (a136 - 5); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1269\n");

    if((((102 == a188[3]) && ((21 == a288[1]) && ((a268 == 32 && a271 == 11) && a227 == 32))) && ((((input == inputs[4] && (a136 == 12 &&  cf==1 )) && a28 == a60[3]) && (57 == a350[2])) && (15 == a368[3])))) {
printf("POINT: 1270\n");
    	cf = 0;
    	a28 = a60[((a219 * a394) - 44)];
    	a331 = a380[4];
    	a180 = a164[(a357 + -7)];
    	a219 = 5;
    	a268 = 32 ;
    	a368 = a293;
    	a315 = a295;
    	a282 = 36 ;
    	a181 = a98;
    	a206 = 34 ;
    	a288 = a270;
    	a227 = 36 ;
    	a223 = a343[3];
    	a328 = a279[6];
    	a350 = a366;
    	a329 = ((((a329 * 5) * 5) % 83) + 88);
    	a394 = 14; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1271\n");

    if(((a268 == 32 && ((102 == a188[3]) && (a357 == 9 && ((a136 == 12 &&  cf==1 ) && input == inputs[3])))) && (a394 == 11 && (((-72 < a396) && (16 >= a396)) && (((-79 < a286) && (83 >= a286)) && (a328 == a279[1] && a28 == a60[3])))))) {
printf("POINT: 1272\n");
    	a189 += (a189 + 20) > a189 ? 2 : 0;
printf("POINT: 1274\n");
    	cf = 0;
    	a264 = a290[(a394 + -11)];
    	a32 = (a357 - -7);
    	a28 = a60[(a271 - 7)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1275\n");

    if(((a282 == 32 && (( cf==1  && a28 == a60[3]) && (102 == a188[3]))) && ((15 == a368[3]) && ((((57 == a350[2]) && (a311 == a298[1] && (a206 == 32 && a136 == 12))) && a223 == a343[1]) && input == inputs[6])))) {
printf("POINT: 1276\n");
    	cf = 0;
    	a170 = 35 ;
    	a28 = a60[((a219 / a394) - -5)];
    	a125 = ((((((a340 * a396) % 101) - -67) - -18986) / 5) - 3690); 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1277\n");

    if((((((-79 < a286) && (83 >= a286)) && ((input == inputs[7] && (a136 == 12 &&  cf==1 )) && a219 == 4)) && (57 == a350[2])) && ((((21 < a340) && (53 >= a340)) && ((a328 == a279[1] && a28 == a60[3]) && (102 == a188[3]))) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 1278\n");
    	cf = 0;
    	a329 = ((((a329 / 5) - 22435) * 1) + 22586);
    	a368 = a371;
    	a28 = a60[((a136 - a357) + -3)];
    	a328 = a279[5];
    	a282 = 32 ;
    	a223 = a343[2];
    	a357 = 14;
    	a315 = a295;
    	a227 = 35 ;
    	a311 = a298[1];
    	a180 = a164[(a271 - 11)];
    	a331 = a380[5];
    	a219 = 9;
    	a340 = (((a340 + -26199) - 3070) - -46080);
    	a350 = a377;
    	a112 = (a271 - 4); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1279\n");

    if(((a328 == a279[1] && (((21 < a340) && (53 >= a340)) && ((( cf==1  && a28 == a60[3]) && a136 == 12) && input == inputs[12]))) && (a331 == a380[1] && ((102 == a188[3]) && ((a206 == 32 && (57 == a350[2])) && ((-72 < a396) && (16 >= a396))))))) {
printf("POINT: 1280\n");
    	cf = 0;
    	a219 = 10;
    	a331 = a380[6];
    	a282 = 33 ;
    	a28 = a60[(a357 - 7)];
    	a268 = 33 ;
    	a357 = 12;
    	a206 = 35 ;
    	a227 = 32 ;
    	a56 = 36 ;
    	a286 = ((((a286 + -1463) * 10) / 9) - 21515);
    	a288 = a297;
    	a396 = (((a396 - 2764) * 5) - 7657);
    	a328 = a279[6];
    	a315 = a295;
    	a223 = a343[4];
    	a394 = 11;
    	a350 = a336;
    	a368 = a397;
    	a340 = (((a340 / -5) * 5) / 5);
    	a129 = a108[(a271 + -7)];
    	a311 = a298[5];
    	a329 = ((((a329 + -3686) * -1) / 10) + 12394);
    	a271 = 13; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1281\n");

    if((((((( cf==1  && (102 == a188[3])) && a28 == a60[3]) && a311 == a298[1]) && a223 == a343[1]) && ((-156 < a329) && (3 >= a329))) && (a271 == 11 && (a136 == 12 && (a331 == a380[1] && (a328 == a279[1] && input == inputs[8])))))) {
printf("POINT: 1282\n");
    	cf = 0;
printf("POINT: 1283\n");

    	if(212 < a155) {
printf("POINT: 1284\n");
    	a141 = ((((((a396 * a396) % 29) - -63) + 1) - -20162) + -20162);
    	a156 = ((a357 - a271) - -10);
    	a28 = a60[(a156 - 7)]; 
    	}else {
printf("POINT: 1286\n");
    	a219 = 8;
    	a368 = a371;
    	a329 = (((a329 + 2862) - 325) / 5);
    	a28 = a60[(a271 + -7)];
    	a132 = a91[(a394 + -5)];
    	a357 = 9;
    	a331 = a380[7];
    	a223 = a343[2];
    	a264 = a290[(a136 - 5)];
    	a328 = a279[2];
    	a311 = a298[4];
    	a350 = a366;
    	a227 = 32 ;
    	a268 = 32 ;
    	a340 = (((a340 / 5) - -26968) - -1340);
    	a271 = 13;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 1287\n");

    if(((a28 == a60[3] && (((-156 < a329) && (3 >= a329)) && ((( cf==1  && (102 == a188[3])) && input == inputs[10]) && ((-72 < a396) && (16 >= a396))))) && ((a227 == 32 && (a223 == a343[1] && (a394 == 11 && a331 == a380[1]))) && a136 == 12))) {
printf("POINT: 1288\n");
    	cf = 0;
printf("POINT: 1289\n");

    	if((!(a143 == a176[1]) && a311 == a298[5])) {
printf("POINT: 1290\n");
    	a156 = (a219 - -3);
    	a28 = a60[((a136 - a136) - -1)];
    	a115 = a185[(a219 + 3)]; 
    	}else {
printf("POINT: 1292\n");
    	a28 = a60[(a394 - 11)];
    	a97 = (((((a340 * a329) + -17259) * 10) / 9) * 1);
    	a180 = a164[(a394 + -8)];
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1293\n");

    if(((((input == inputs[0] && ( cf==1  && a28 == a60[3])) && ((-72 < a396) && (16 >= a396))) && a271 == 11) && (a206 == 32 && ((a136 == 12 && (((102 == a188[3]) && a357 == 9) && a311 == a298[1])) && a227 == 32)))) {
printf("POINT: 1294\n");
    	cf = 0;
printf("POINT: 1295\n");

    	if((291 < a286 && ((a166 == a26[6] && (22 == a139[4])) && 120 < a67))) {
printf("POINT: 1296\n");
    	a315 = a273;
    	a311 = a298[1];
    	a350 = a366;
    	a331 = a380[7];
    	a396 = ((((a396 % 43) + -26) / 5) * 5);
    	a267 = (a219 - 1);
    	a93 = ((a394 / a394) + 9);
    	a394 = 12;
    	a357 = 12;
    	a28 = a60[(a271 + -4)];
    	a329 = ((((((a329 % 79) + -76) + -1) * 5) % 79) - 76);
    	a288 = a399;
    	a328 = a279[2];
    	a271 = 14;
    	a227 = 32 ;
    	a340 = ((((a340 / 5) - -84) + 3941) + -3931);
    	a206 = 32 ;
    	a368 = a371;
    	a282 = 35 ;
    	a223 = a343[5];
    	a268 = 36 ;
    	a219 = 7; 
    	}else {
printf("POINT: 1298\n");
    	a93 = (a136 - 2);
    	a28 = a60[(a93 - 3)];
    	a267 = a93;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 1299\n");

    if(((((((input == inputs[2] &&  cf==1 ) && a28 == a60[3]) && a268 == 32) && a394 == 11) && ((-72 < a396) && (16 >= a396))) && (a331 == a380[1] && (((a136 == 12 && (37 == a315[2])) && (102 == a188[3])) && (57 == a350[2]))))) {
printf("POINT: 1300\n");
    	cf = 0;
    	a271 = 11;
    	a357 = 12;
    	a223 = a343[1];
    	a32 = (a136 + -2);
    	a206 = 32 ;
    	a340 = ((((a340 - 23819) + 23880) / 5) - -48);
    	a331 = a380[3];
    	a394 = 17;
    	a227 = 34 ;
    	a268 = 34 ;
    	a282 = 36 ;
    	a288 = a270;
    	a396 = (((a396 - 1753) + 24776) / 5);
    	a329 = (((a329 - -16469) / 5) + -3212);
    	a315 = a273;
    	a368 = a371;
    	a286 = (((a286 / 5) - -12287) / 5);
    	a328 = a279[7];
    	a219 = 10;
    	a28 = a60[(a32 - 6)];
    	a311 = a298[7];
    	a350 = a377;
    	a264 = a290[(a136 + -12)]; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm22(int input) {
printf("POINT: 1301\n");

    if(((a357 == 9 && (a227 == 32 && ((a136 == 12 &&  cf==1 ) && a311 == a298[1]))) && (((21 == a288[1]) && ((-79 < a286) && (83 >= a286))) && a328 == a279[1]))) {
printf("POINT: 1302\n");
    	calculate_outputm136(input);
    } 
}
 void calculate_outputm139(int input) {
printf("POINT: 1303\n");

    if((((a328 == a279[1] && ((108 == a188[3]) && (a357 == 9 && ((15 == a368[3]) && (( cf==1  && input == inputs[7]) && a20 == 32))))) && ((a28 == a60[3] && (a311 == a298[1] && ((21 < a340) && (53 >= a340)))) && a331 == a380[1])) && a175 == -10)) {
printf("POINT: 1304\n");
    	cf = 0;
    	a263 = 32 ;
    	a93 = (a357 + 4);
    	a28 = a60[((a271 / a219) + 5)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1305\n");

    if((((((((21 < a340) && (53 >= a340)) && (input == inputs[5] && ( cf==1  && a20 == 32))) && ((-72 < a396) && (16 >= a396))) && (21 == a288[1])) && a282 == 32) && ((a28 == a60[3] && (a394 == 11 && (108 == a188[3]))) && a311 == a298[1]))) {
printf("POINT: 1306\n");
    	cf = 0;
    	a28 = a60[(a271 + -10)];
    	a156 = (a271 + -2);
    	a131 = (a156 - a219); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1307\n");

    if((((a227 == 32 && (((( cf==1  && a28 == a60[3]) && (108 == a188[3])) && a20 == 32) && input == inputs[6])) && ((-72 < a396) && (16 >= a396))) && (a268 == 32 && (((15 == a368[3]) && a282 == 32) && (57 == a350[2]))))) {
printf("POINT: 1308\n");
    	a102 += (a102 + 20) > a102 ? 4 : 0;
printf("POINT: 1310\n");
    	a189 -= (a189 - 20) < a189 ? 6 : 0;
printf("POINT: 1312\n");
    	a84 += (a84 + 20) > a84 ? 2 : 0;
printf("POINT: 1314\n");
    	cf = 0;
    	a350 = a377;
    	a156 = (a271 - 3);
    	a28 = a60[(a357 - 8)];
    	a223 = a343[(a219 - 2)];
    	a141 = ((((a340 * a340) + 17040) + 3358) * 1); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1315\n");

    if(((((a394 == 11 && a28 == a60[3]) && a331 == a380[1]) && (57 == a350[2])) && (((((( cf==1  && a20 == 32) && input == inputs[0]) && (108 == a188[3])) && a227 == 32) && (37 == a315[2])) && a311 == a298[1]))) {
printf("POINT: 1316\n");
    	cf = 0;
    	a155 = (((((a340 * a396) + -1743) + 3157) - -8600) + -29749);
    	a21 = 32 ;
    	a28 = a60[(a394 + -5)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1317\n");

    if(((((37 == a315[2]) && ((((((a28 == a60[3] && ( cf==1  && input == inputs[2])) && (108 == a188[3])) && a20 == 32) && ((-72 < a396) && (16 >= a396))) && a223 == a343[1]) && a219 == 4)) && (((-79 < a286) && (83 >= a286)) && a311 == a298[1])) && a189 == -7)) {
printf("POINT: 1318\n");
    	cf = 0;
    	a32 = (a219 + 12);
    	a28 = a60[(a32 + -12)];
    	a264 = a290[(a271 + -11)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1319\n");

    if(((a271 == 11 && (((21 < a340) && (53 >= a340)) && (((a28 == a60[3] && ((108 == a188[3]) && ( cf==1  && a20 == 32))) && a219 == 4) && input == inputs[11]))) && ((((-156 < a329) && (3 >= a329)) && ((-72 < a396) && (16 >= a396))) && a357 == 9))) {
printf("POINT: 1320\n");
    	cf = 0;
    	a155 = ((((a340 * a286) / 5) - -20052) / -5);
    	a21 = 32 ;
    	a28 = a60[(a219 + 2)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1321\n");

    if((((a282 == 32 && ((a271 == 11 && a28 == a60[3]) && a227 == 32)) && ((((57 == a350[2]) && (input == inputs[10] && (a20 == 32 && ( cf==1  && (108 == a188[3]))))) && a223 == a343[1]) && ((-72 < a396) && (16 >= a396)))) && a40 == -18)) {
printf("POINT: 1322\n");
    	cf = 0;
    	a93 = ((a394 / a219) - -14);
    	a28 = a60[((a271 + a394) + -14)];
    	a99 = ((a219 * a93) - 53); 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm140(int input) {
printf("POINT: 1323\n");

    if(((((-156 < a329) && (3 >= a329)) && ((a28 == a60[3] && ( cf==1  && input == inputs[7])) && (21 == a288[1]))) && ((((a206 == 32 && ((15 == a368[3]) && a20 == 34)) && (108 == a188[3])) && (57 == a350[2])) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 1324\n");
    	cf = 0;
    	a264 = a290[(a357 - 9)];
    	a311 = a298[(a357 + -9)];
    	a227 = 33 ;
    	a331 = a380[(a357 - 9)];
    	a32 = (a394 + 2);
    	a315 = a321;
    	a350 = a336;
    	a328 = a279[(a219 + -4)];
    	a223 = a343[(a271 + -11)];
    	a340 = ((((a340 * a396) - 21222) * 1) + -4477);
    	a28 = a60[(a394 + -7)];
    	a286 = (((((a286 * a329) + -15584) + 26317) + -7312) + -16202);
    	a394 = (a32 - 3);
    	a288 = a297;
    	a268 = 33 ;
    	a396 = (((((a286 * a286) % 14999) + -25559) - 2768) / 5);
    	a271 = ((a32 / a219) + 7);
    	a206 = 33 ;
    	a368 = a397;
    	a329 = ((((((a329 * a286) % 14999) * 2) + 2) / 5) - 19757);
    	a282 = 33 ;
    	a219 = ((a32 + a357) - 19);
    	a357 = ((a32 * a32) - 161); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1325\n");

    if(((a271 == 11 && (input == inputs[5] && (((-72 < a396) && (16 >= a396)) && ((((57 == a350[2]) && a282 == 32) && a28 == a60[3]) && a394 == 11)))) && ((( cf==1  && a20 == 34) && (108 == a188[3])) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 1326\n");
    	cf = 0;
    	a151 = (a271 + -1);
    	a28 = a60[(a394 + -10)];
    	a156 = ((a271 + a271) + -9); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1327\n");

    if((((((((-156 < a329) && (3 >= a329)) && (37 == a315[2])) && a268 == 32) && a328 == a279[1]) && a20 == 34) && (input == inputs[3] && (((-72 < a396) && (16 >= a396)) && (a394 == 11 && ((108 == a188[3]) && ( cf==1  && a28 == a60[3]))))))) {
printf("POINT: 1328\n");
    	cf = 0;
    	a125 = ((((a329 * a329) + 3517) + 1447) * 1);
    	a288 = a297;
    	a28 = a60[(a219 + 1)];
    	a154 = (a271 - 3);
    	a329 = (((((a329 * a340) - 18270) * 10) / 9) * 1);
    	a396 = ((((((a396 * a125) % 14999) - -7343) % 14964) + -15035) + 0); 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm23(int input) {
printf("POINT: 1329\n");

    if(((a20 == 32 &&  cf==1 ) && (a219 == 4 && ((21 == a288[1]) && (((((-72 < a396) && (16 >= a396)) && a311 == a298[1]) && a271 == 11) && (57 == a350[2])))))) {
printf("POINT: 1330\n");
    	calculate_outputm139(input);
    } 
printf("POINT: 1331\n");

    if(((a219 == 4 && (a227 == 32 && (a20 == 34 &&  cf==1 ))) && (((21 == a288[1]) && (((21 < a340) && (53 >= a340)) && a223 == a343[1])) && a282 == 32))) {
printf("POINT: 1332\n");
    	calculate_outputm140(input);
    } 
}
 void calculate_outputm143(int input) {
printf("POINT: 1333\n");

    if(((a268 == 32 && ((57 == a350[2]) && (15 == a368[3]))) && ((((21 == a288[1]) && (((21 < a340) && (53 >= a340)) && (a227 == 32 && ((input == inputs[2] &&  cf==1 ) && a28 == a60[3])))) && a156 == 7) && (115 == a188[4])))) {
printf("POINT: 1334\n");
    	cf = 0;
    	a80 = (a156 + 8);
    	a28 = a60[(a357 + -4)];
    	a227 = 33 ;
    	a125 = (((((a329 * a329) - 26133) - -726) * 10) / 9); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1335\n");

    if((((((21 < a340) && (53 >= a340)) && ((a156 == 7 && ((-79 < a286) && (83 >= a286))) && ((-72 < a396) && (16 >= a396)))) && a271 == 11) && ((((input == inputs[4] && ( cf==1  && a28 == a60[3])) && (115 == a188[4])) && a331 == a380[1]) && (21 == a288[1])))) {
printf("POINT: 1336\n");
    	cf = 0;
    	a157 = a64[(a357 + -9)];
    	a350 = a336;
    	a28 = a60[((a271 - a271) - -1)];
    	a223 = a343[(a394 - 11)];
    	a288 = a297;
    	a156 = ((a394 * a219) + -32); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1337\n");

    if(((((input == inputs[10] && ((115 == a188[4]) &&  cf==1 )) && ((-72 < a396) && (16 >= a396))) && a156 == 7) && (((-156 < a329) && (3 >= a329)) && ((((a28 == a60[3] && (57 == a350[2])) && a223 == a343[1]) && a394 == 11) && a331 == a380[1])))) {
printf("POINT: 1338\n");
    	cf = 0;
    	a28 = a60[(a394 - 10)];
    	a350 = a377;
    	a223 = a343[(a271 + -9)];
    	a141 = ((((a329 * a329) + 4548) - -363) * 1);
    	a156 = (a271 + -3); 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm144(int input) {
printf("POINT: 1339\n");

    if(((( cf==1  && a28 == a60[3]) && a156 == 8) && ((((((-72 < a396) && (16 >= a396)) && (((-79 < a286) && (83 >= a286)) && ((a219 == 4 && input == inputs[0]) && a223 == a343[1]))) && (115 == a188[4])) && (57 == a350[2])) && a357 == 9))) {
printf("POINT: 1340\n");
    	cf = 0;
    	a21 = 32 ;
    	a155 = ((((a329 * a396) + 9280) + -30231) / 5);
    	a28 = a60[((a357 + a156) + -11)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1341\n");

    if(((((15 == a368[3]) && (21 == a288[1])) && ((-79 < a286) && (83 >= a286))) && ((a331 == a380[1] && ((115 == a188[4]) && ((a328 == a279[1] && ((input == inputs[14] &&  cf==1 ) && a28 == a60[3])) && a156 == 8))) && a282 == 32))) {
printf("POINT: 1342\n");
    	cf = 0;
    	a156 = (a271 + 2);
    	a28 = a60[(a394 / a394)];
    	a151 = (a219 + 11); 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm145(int input) {
printf("POINT: 1343\n");

    if(((a271 == 11 && (a156 == 11 && (input == inputs[7] && ((115 == a188[4]) &&  cf==1 )))) && ((a311 == a298[1] && (a268 == 32 && ((a219 == 4 && a28 == a60[3]) && a357 == 9))) && (15 == a368[3])))) {
printf("POINT: 1344\n");
    	cf = 0;
    	a20 = 34 ;
    	a227 = 32 ;
    	a223 = a343[((a271 - a394) - -1)];
    	a329 = (((((a286 * a286) % 79) - 76) + -18529) - -18529);
    	a188 = a105; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1345\n");

    if(((a156 == 11 && (a282 == 32 && a331 == a380[1])) && ((((a268 == 32 && ((input == inputs[0] && ( cf==1  && (115 == a188[4]))) && a311 == a298[1])) && (21 == a288[1])) && a271 == 11) && a28 == a60[3]))) {
printf("POINT: 1346\n");
    	cf = 0;
    	a206 = 33 ;
    	a329 = ((((((a340 * a340) / 5) % 79) + -150) + -27757) + 27807);
    	a86 = (a394 + -7);
    	a223 = a343[(a357 + -8)];
    	a227 = 32 ;
    	a28 = a60[((a357 - a156) - -3)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1347\n");

    if(((a282 == 32 && (input == inputs[9] && ((-79 < a286) && (83 >= a286)))) && ((37 == a315[2]) && (((-72 < a396) && (16 >= a396)) && ((a156 == 11 && ((15 == a368[3]) && ((115 == a188[4]) && (a28 == a60[3] &&  cf==1 )))) && a206 == 32))))) {
printf("POINT: 1348\n");
    	cf = 0;
    	a267 = ((a219 * a156) - 41);
    	a350 = a336;
    	a268 = 33 ;
    	a340 = ((((a340 * a286) + -14832) + -6312) - 2765);
    	a282 = 33 ;
    	a219 = (a357 - 6);
    	a93 = ((a267 + a357) + -2);
    	a396 = ((((((a396 * a340) % 14999) - 3586) * 1) % 14964) - 15035);
    	a311 = a298[((a156 / a156) + -1)];
    	a331 = a380[(a357 + -9)];
    	a206 = 33 ;
    	a315 = a321;
    	a288 = a297;
    	a394 = (a156 - 1);
    	a368 = a397;
    	a328 = a279[((a357 - a267) + -6)];
    	a271 = ((a156 * a267) - 23);
    	a28 = a60[(a267 - -4)];
    	a357 = ((a267 / a267) + 7); 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm24(int input) {
printf("POINT: 1349\n");

    if(((a227 == 32 && (a357 == 9 && (a156 == 7 &&  cf==1 ))) && (a223 == a343[1] && (a282 == 32 && (((-72 < a396) && (16 >= a396)) && (21 == a288[1])))))) {
printf("POINT: 1350\n");
    	calculate_outputm143(input);
    } 
printf("POINT: 1351\n");

    if(((a268 == 32 && ((-156 < a329) && (3 >= a329))) && ((a311 == a298[1] && ((a282 == 32 && (a156 == 8 &&  cf==1 )) && (21 == a288[1]))) && a219 == 4))) {
printf("POINT: 1352\n");
    	calculate_outputm144(input);
    } 
printf("POINT: 1353\n");

    if(((a357 == 9 && (a156 == 11 &&  cf==1 )) && (a271 == 11 && (a206 == 32 && ((a311 == a298[1] && a394 == 11) && ((21 < a340) && (53 >= a340))))))) {
printf("POINT: 1354\n");
    	calculate_outputm145(input);
    } 
}
 void calculate_outputm147(int input) {
printf("POINT: 1355\n");

    if(((a227 == 33 && (((a28 == a60[4] && (a32 == 10 &&  cf==1 )) && input == inputs[12]) && a264 == a290[0])) && ((a268 == 33 && (a329 <=  -156 && (a394 == 10 && a396 <=  -72))) && a206 == 33))) {
printf("POINT: 1356\n");
    	cf = 0;
printf("POINT: 1357\n");

    	if((!(a115 == a185[4]) || a20 == 36)) {
printf("POINT: 1358\n");
    	a125 = (((((((a396 * a286) % 14999) % 101) - 17) - -40) * 9) / 10);
    	a271 = 12;
    	a311 = a298[0];
    	a288 = a399;
    	a357 = 13;
    	a227 = 34 ;
    	a170 = 33 ;
    	a219 = 9;
    	a340 = (((a340 + 0) / 5) - -10043);
    	a368 = a397;
    	a28 = a60[(a394 - 5)];
    	a268 = 33 ;
    	a328 = a279[0];
    	a223 = a343[7];
    	a329 = (((((a329 % 14922) - 156) * 1) + 715) - 6710);
    	a315 = a321;
    	a350 = a377;
    	a286 = ((((a286 - 0) / 5) + -23308) - -50891);
    	a394 = 14; 
    	}else {
printf("POINT: 1360\n");
    	a28 = a60[((a271 / a357) + 5)];
    	a75 = 35 ;
    	a155 = ((((((a396 * a396) % 14999) % 16) + 72) - 26756) - -26755);
    	}printf("%d\n", 21);  
    } 
printf("POINT: 1361\n");

    if((((19 == a288[5]) && (a28 == a60[4] && (a282 == 33 && (((a286 <=  -79 && a271 == 10) && a311 == a298[0]) && a264 == a290[0])))) && ((input == inputs[13] && (a32 == 10 &&  cf==1 )) && a357 == 8))) {
printf("POINT: 1362\n");
    	cf = 0;
printf("POINT: 1363\n");

    	if((!(a349 == 33) && (!(a180 == 7) || (a394 == 13 && a80 == 15)))) {
printf("POINT: 1364\n");
    	a286 = (((((a286 + 25643) % 14854) + 15145) / 5) + 8751);
    	a180 = a164[((a271 * a357) - 80)];
    	a112 = (a271 - 2);
    	a28 = a60[((a32 * a112) - 80)]; 
    	}else {
printf("POINT: 1366\n");
    	a264 = a290[((a32 + a357) + -11)];
    	a132 = a91[((a394 / a394) - -1)];
    	}printf("%d\n", 24);  
    } 
printf("POINT: 1367\n");

    if(((a328 == a279[0] && (input == inputs[6] && a340 <=  21)) && (a331 == a380[0] && (a219 == 3 && (a311 == a298[0] && ((((a32 == 10 &&  cf==1 ) && a28 == a60[4]) && a264 == a290[0]) && a357 == 8)))))) {
printf("POINT: 1368\n");
    	cf = 0;
    	a180 = a164[(a219 - 3)];
    	a112 = (a219 - -10);
    	a28 = a60[(a112 - 13)]; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1369\n");

    if((((a32 == 10 && ((a28 == a60[4] &&  cf==1 ) && input == inputs[0])) && a223 == a343[0]) && (a328 == a279[0] && ((a268 == 33 && (a264 == a290[0] && (a394 == 10 && a396 <=  -72))) && (19 == a288[5]))))) {
printf("POINT: 1370\n");
    	cf = 0;
printf("POINT: 1371\n");

    	if((54 == a33[0])) {
printf("POINT: 1372\n");
    	a350 = a336;
    	a286 = ((((a286 - -23543) % 80) - -2) - -1);
    	a331 = a380[7];
    	a28 = a60[(a357 - 6)];
    	a56 = 35 ;
    	a328 = a279[3];
    	a329 = ((((a329 % 14914) + 15085) - -6576) - -1400);
    	a206 = 33 ;
    	a396 = (((((a396 * 1) % 14887) + 15111) / 5) - -18773);
    	a340 = ((((a340 / 5) / 5) - -21648) - 34121);
    	a357 = 9;
    	a315 = a321;
    	a368 = a397;
    	a394 = 11;
    	a0 = a96; 
    	}else {
printf("POINT: 1374\n");
    	a125 = (((((a286 * a329) % 14999) / 5) / 5) + 5002);
    	a340 = ((((a340 * 1) % 15010) - 14988) + -2);
    	a311 = a298[3];
    	a223 = a343[4];
    	a288 = a297;
    	a396 = ((((((a396 % 103) - -145) * 10) / 9) * 10) / 9);
    	a28 = a60[((a219 + a219) + -1)];
    	a219 = 9;
    	a350 = a336;
    	a315 = a321;
    	a282 = 35 ;
    	a329 = (((a329 / 5) + -1081) * 4);
    	a227 = 34 ;
    	a328 = a279[6];
    	a154 = (a357 + -1);
    	a268 = 36 ;
    	a368 = a397;
    	a331 = a380[0];
    	a271 = 13;
    	a286 = (((((a286 - 0) % 103) + 208) + -13846) + 13840);
    	a206 = 35 ;
    	a394 = 15;
    	a357 = 11;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 1375\n");

    if(((((a32 == 10 && ((a28 == a60[4] &&  cf==1 ) && a264 == a290[0])) && (54 == a350[5])) && a206 == 33) && (a268 == 33 && ((a331 == a380[0] && (a329 <=  -156 && input == inputs[2])) && a271 == 10)))) {
printf("POINT: 1376\n");
    	cf = 0;
    	a28 = a60[((a394 * a32) + -93)];
    	a93 = (a394 - -4);
    	a139 = a110; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1377\n");

    if((((a271 == 10 && (a340 <=  21 && ((input == inputs[4] && ( cf==1  && a264 == a290[0])) && a28 == a60[4]))) && a331 == a380[0]) && (((32 == a315[3]) && (a32 == 10 && (11 == a368[5]))) && a282 == 33))) {
printf("POINT: 1378\n");
    	cf = 0;
printf("POINT: 1379\n");

    	if(((a206 == 32 || a154 == 14) || !(a115 == a185[5]))) {
printf("POINT: 1380\n");
    	a28 = a60[(a271 - 9)];
    	a157 = a64[(a219 + 4)];
    	a156 = ((a219 / a271) - -12); 
    	}else {
printf("POINT: 1382\n");
    	a125 = ((((((a396 * a340) % 14999) + 6285) - -500) % 14894) - -15104);
    	a28 = a60[(a394 - 5)];
    	a286 = ((((a286 * 1) % 14960) + -79) * 1);
    	a223 = a343[3];
    	a271 = 13;
    	a368 = a397;
    	a357 = 13;
    	a394 = 16;
    	a311 = a298[5];
    	a219 = 5;
    	a206 = 36 ;
    	a154 = (a32 - -2);
    	a340 = ((((a340 % 15010) + -14988) + 0) / 5);
    	a328 = a279[2];
    	a268 = 35 ;
    	a396 = ((((a396 % 14887) - -15111) - -2463) * 1);
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1383\n");

    if(((a282 == 33 && (a394 == 10 && ((54 == a350[5]) && ((a264 == a290[0] && (a32 == 10 && (a28 == a60[4] &&  cf==1 ))) && a227 == 33)))) && ((input == inputs[9] && a219 == 3) && a206 == 33))) {
printf("POINT: 1384\n");
    	cf = 0;
    	a328 = a279[6];
    	a286 = ((((a286 % 14960) - 79) - 519) + -6341);
    	a315 = a321;
    	a56 = 35 ;
    	a350 = a336;
    	a357 = 12;
    	a394 = 13;
    	a331 = a380[1];
    	a28 = a60[(a271 - 8)];
    	a396 = ((((a396 % 14964) + -72) - 1829) * 1);
    	a329 = (((a329 + 0) / 5) - 7540);
    	a340 = ((((a340 + 0) * 1) % 15010) - 14988);
    	a206 = 36 ;
    	a368 = a397;
    	a0 = a96; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1385\n");

    if((((19 == a288[5]) && ((a394 == 10 && a328 == a279[0]) && a340 <=  21)) && (a223 == a343[0] && ((a28 == a60[4] && ((a264 == a290[0] && ( cf==1  && input == inputs[5])) && a396 <=  -72)) && a32 == 10)))) {
printf("POINT: 1386\n");
    	cf = 0;
    	a315 = a321;
    	a282 = 34 ;
    	a206 = 35 ;
    	a28 = a60[(a32 + -7)];
    	a271 = 16;
    	a394 = 14;
    	a223 = a343[0];
    	a340 = ((((a340 / 5) % 37) - -91) - -1);
    	a368 = a293;
    	a286 = (((((a286 + 27849) / 5) / 5) % 103) - -186);
    	a328 = a279[5];
    	a219 = 6;
    	a20 = 33 ;
    	a350 = a336;
    	a188 = a105; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1387\n");

    if((((a282 == 33 && a340 <=  21) && a328 == a279[0]) && ((a394 == 10 && ((11 == a368[5]) && (a32 == 10 && (a264 == a290[0] && ((input == inputs[7] &&  cf==1 ) && a28 == a60[4]))))) && a271 == 10))) {
printf("POINT: 1388\n");
    	cf = 0;
    	a47 = ((a357 / a219) - -11);
    	a28 = a60[((a357 / a32) - -6)];
    	a155 = (((((a329 * a329) % 14999) - -11876) + 148) - -159); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1389\n");

    if(((((((a286 <=  -79 && ((( cf==1  && input == inputs[11]) && a28 == a60[4]) && a264 == a290[0])) && a32 == 10) && (54 == a350[5])) && a271 == 10) && a328 == a279[0]) && (a206 == 33 && a227 == 33))) {
printf("POINT: 1390\n");
    	cf = 0;
printf("POINT: 1391\n");

    	if((a99 == 15 || (!(a227 == 32) && (a154 == 10 || a32 == 14)))) {
printf("POINT: 1392\n");
    	a75 = 34 ;
    	a28 = a60[(a271 + -4)];
    	a155 = ((((((a340 * a340) % 14999) + -12498) % 16) + 86) - -2); 
    	}else {
printf("POINT: 1394\n");
    	a311 = a298[2];
    	a206 = 36 ;
    	a28 = a60[((a32 + a357) + -17)];
    	a282 = 35 ;
    	a227 = 35 ;
    	a328 = a279[7];
    	a156 = ((a394 / a271) - -12);
    	a151 = (a271 + 5);
    	a286 = ((((a286 % 14960) + -79) + -10457) - 108);
    	a268 = 36 ;
    	a329 = ((((a329 - 0) - 0) / 5) + -16970);
    	a315 = a321;
    	a331 = a380[0];
    	a357 = 11;
    	a394 = 13;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1395\n");

    if(((a396 <=  -72 && (((a282 == 33 && (a32 == 10 && ( cf==1  && a28 == a60[4]))) && (11 == a368[5])) && input == inputs[10])) && ((54 == a350[5]) && ((a286 <=  -79 && a271 == 10) && a264 == a290[0])))) {
printf("POINT: 1396\n");
    	cf = 0;
    	a206 = 35 ;
    	a132 = a91[((a394 * a271) - 97)];
    	a264 = a290[(a32 - 3)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1397\n");

    if((((32 == a315[3]) && ((( cf==1  && a264 == a290[0]) && input == inputs[3]) && a282 == 33)) && ((19 == a288[5]) && (a394 == 10 && ((a28 == a60[4] && (a311 == a298[0] && a32 == 10)) && a271 == 10))))) {
printf("POINT: 1398\n");
    	cf = 0;
printf("POINT: 1399\n");

    	if((!(24 == a100[0]) || (((77 < a97) && (239 >= a97)) && ((a80 == 9 || 291 < a286) && !(a219 == 5))))) {
printf("POINT: 1400\n");
    	a141 = ((((((a396 * a340) % 14999) % 14973) + -15025) + -3) - 0);
    	a331 = a380[5];
    	a340 = ((((a340 % 15010) + -14988) * 1) + -3);
    	a223 = a343[3];
    	a329 = ((((a329 + 0) % 14914) - -15085) - -4701);
    	a328 = a279[3];
    	a28 = a60[(a219 + -2)];
    	a311 = a298[0];
    	a288 = a297;
    	a394 = 12;
    	a357 = 13;
    	a368 = a397;
    	a268 = 35 ;
    	a227 = 33 ;
    	a156 = (a32 + -2);
    	a315 = a321;
    	a219 = 3; 
    	}else {
printf("POINT: 1402\n");
    	a282 = 35 ;
    	a340 = ((((a340 + 0) % 14935) + 15064) - 0);
    	a368 = a293;
    	a315 = a321;
    	a219 = 7;
    	a28 = a60[(a394 + -7)];
    	a350 = a377;
    	a223 = a343[0];
    	a206 = 34 ;
    	a20 = 33 ;
    	a328 = a279[5];
    	a188 = a105;
    	a286 = ((((a286 % 103) + 228) + 14153) - 14137);
    	a271 = 15;
    	a394 = 10;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1403\n");

    if(((a32 == 10 && (((a264 == a290[0] &&  cf==1 ) && input == inputs[1]) && a28 == a60[4])) && (a227 == 33 && (a311 == a298[0] && ((a268 == 33 && (a396 <=  -72 && a271 == 10)) && (19 == a288[5])))))) {
printf("POINT: 1404\n");
    	cf = 0;
    	a130 = a29[(a219 + 1)];
    	a28 = a60[((a394 * a394) + -93)];
    	a93 = (a271 - -2); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1405\n");

    if(((a219 == 3 && (a28 == a60[4] && (a282 == 33 && (a311 == a298[0] && ((input == inputs[14] &&  cf==1 ) && a264 == a290[0]))))) && ((a328 == a279[0] && (a271 == 10 && a32 == 10)) && a331 == a380[0]))) {
printf("POINT: 1406\n");
    	cf = 0;
    	a329 = ((((a329 * 1) + 10858) % 83) + 86);
    	a288 = a297;
    	a315 = a321;
    	a154 = (a357 + 3);
    	a394 = 10;
    	a125 = ((((((a340 * a340) % 14999) % 14894) - -15104) * 1) - 0);
    	a206 = 33 ;
    	a227 = 36 ;
    	a268 = 33 ;
    	a223 = a343[7];
    	a331 = a380[7];
    	a286 = (((((a286 + 1214) + -208) * 1) % 103) + 187);
    	a311 = a298[3];
    	a328 = a279[7];
    	a350 = a377;
    	a282 = 36 ;
    	a357 = 11;
    	a28 = a60[(a154 - 6)];
    	a396 = ((((a396 % 14887) - -15111) - -6343) * 1);
    	a368 = a293;
    	a219 = 10;
    	a271 = 16;
    	a340 = ((((a340 % 14935) - -15064) / 5) - -12864); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1407\n");

    if((((a206 == 33 && ((11 == a368[5]) && a357 == 8)) && a223 == a343[0]) && (((a32 == 10 && ((54 == a350[5]) && (( cf==1  && input == inputs[8]) && a264 == a290[0]))) && a28 == a60[4]) && a328 == a279[0]))) {
printf("POINT: 1408\n");
    	cf = 0;
    	a80 = (a271 + 4);
    	a125 = ((((((a329 * a340) % 14999) % 14982) + -15017) - 1) - 1);
    	a28 = a60[(a32 + -5)]; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm148(int input) {
printf("POINT: 1409\n");

    if(((a206 == 33 && (a286 <=  -79 && (a357 == 8 && (( cf==1  && input == inputs[10]) && a28 == a60[4])))) && ((((a264 == a290[0] && a340 <=  21) && (19 == a288[5])) && a32 == 11) && a223 == a343[0]))) {
printf("POINT: 1410\n");
    	cf = 0;
    	a394 = 11;
    	a21 = 32 ;
    	a288 = a270;
    	a223 = a343[(a394 - 10)];
    	a227 = 32 ;
    	a271 = a394;
    	a28 = a60[(a32 + -5)];
    	a219 = (a32 + -7);
    	a357 = (a271 + -2);
    	a268 = 32 ;
    	a311 = a298[((a32 * a219) + -43)];
    	a206 = 32 ;
    	a155 = (((((a340 * a396) % 14999) - 7459) - 7471) + -67);
    	a329 = (((((((a286 * a286) % 14999) / 5) - -11711) * 2) % 79) + -120);
    	a350 = a366;
    	a396 = ((((((a396 * a286) % 14999) % 43) - 39) / 5) + -47);
    	a315 = a295;
    	a340 = ((((((a340 * a286) % 14999) * 2) % 15) + 38) * 1);
    	a331 = a380[(a394 + -10)];
    	a286 = ((((((a286 * a329) % 14999) * 2) * 1) % 80) + 3); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1411\n");

    if(((a264 == a290[0] && ((input == inputs[7] && (a28 == a60[4] &&  cf==1 )) && a32 == 11)) && (a340 <=  21 && ((a268 == 33 && (((19 == a288[5]) && (32 == a315[3])) && a286 <=  -79)) && a223 == a343[0])))) {
printf("POINT: 1412\n");
    	cf = 0;
    	a206 = 34 ;
    	a311 = a298[((a219 * a357) + -22)];
    	a396 = ((((((a396 * a286) % 14999) % 103) + 102) / 5) * 5);
    	a350 = a377;
    	a56 = 34 ;
    	a111 = a195[(a219 + 2)];
    	a28 = a60[(a219 + -1)];
    	a268 = 34 ;
    	a315 = a273;
    	a357 = (a32 + -1);
    	a227 = 34 ;
    	a340 = (((((((a340 * a329) % 14999) - 9507) + 5761) / 5) % 37) + 92);
    	a286 = ((((((a286 * a396) % 14999) + -2476) % 103) + 192) + -4); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm149(int input) {
printf("POINT: 1413\n");

    if(((((a28 == a60[4] && ( cf==1  && input == inputs[0])) && (19 == a288[5])) && (54 == a350[5])) && ((a264 == a290[0] && ((a32 == 12 && (a328 == a279[0] && a223 == a343[0])) && a331 == a380[0])) && (11 == a368[5])))) {
printf("POINT: 1414\n");
    	cf = 0;
printf("POINT: 1415\n");

    	if(((a180 == 3 || (22 == a139[4])) && (24 == a139[0]))) {
printf("POINT: 1416\n");
    	a394 = (a271 - -2);
    	a111 = a195[(a357 - 7)];
    	a282 = 34 ;
    	a329 = (((60 * 5) * 5) + -1474);
    	a331 = a380[((a271 / a394) + 2)];
    	a268 = 34 ;
    	a328 = a279[((a394 - a394) - -2)];
    	a28 = a60[((a271 + a271) - 18)];
    	a350 = a377;
    	a357 = (a219 - -7);
    	a368 = a293;
    	a315 = a273;
    	a223 = a343[((a357 / a357) + 1)];
    	a56 = 34 ;
    	a286 = (((((((a286 * a340) % 14999) % 103) + 187) * 5) % 103) - -177);
    	a206 = 34 ;
    	a396 = ((((((((a396 * a286) % 14999) - -12336) % 103) + 121) * 5) % 103) - -75);
    	a311 = a298[(a32 - a271)];
    	a219 = (a271 + -5);
    	a288 = a399;
    	a340 = (((((((a340 * a396) % 14999) * 2) / 5) - -16332) % 37) - -84);
    	a271 = (a357 - -2); 
    	}else {
printf("POINT: 1418\n");
    	a328 = a279[(a394 - 9)];
    	a268 = 32 ;
    	a219 = (a357 + -4);
    	a282 = 32 ;
    	a331 = a380[(a219 - 3)];
    	a227 = 32 ;
    	a271 = ((a219 + a219) - -3);
    	a329 = ((((1 * 5) - 144) * 5) - -547);
    	a156 = (a32 - 1);
    	a28 = a60[((a394 - a32) - -3)];
    	a206 = 32 ;
    	a315 = a295;
    	a368 = a371;
    	a286 = ((((((a286 * a329) % 14999) % 80) + 3) / 5) * 5);
    	a396 = ((((((a396 * a286) % 14999) - 815) % 43) - 26) + -3);
    	a288 = a270;
    	a311 = a298[(a271 + -10)];
    	a357 = (a156 + -2);
    	a340 = ((((((((a340 * a396) % 14999) - -2887) % 15) - -38) * 5) % 15) - -23);
    	a350 = a366;
    	a86 = (a394 - 5);
    	a394 = 11;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1419\n");

    if(((a271 == 10 && (a28 == a60[4] && (input == inputs[4] && ( cf==1  && a264 == a290[0])))) && (((a227 == 33 && ((a286 <=  -79 && (54 == a350[5])) && a32 == 12)) && a357 == 8) && a394 == 10))) {
printf("POINT: 1420\n");
    	cf = 0;
printf("POINT: 1421\n");

    	if(((!(a161 == 6) || ((a394 == 13 || !(45 == a181[1])) && ((13 < a169) && (171 >= a169)))) && !(a263 == 34))) {
printf("POINT: 1422\n");
    	a340 = ((((((a396 * a396) % 14999) + 9327) + 1128) % 37) + 58);
    	a206 = 34 ;
    	a28 = a60[((a271 + a32) - 20)];
    	a329 = ((((((a340 * a340) % 83) - -64) * 10) / 9) - -5);
    	a56 = 34 ;
    	a286 = ((((((a286 * a340) % 14999) % 103) + 187) + -1) - -1);
    	a368 = a293;
    	a331 = a380[(a32 + -10)];
    	a282 = 34 ;
    	a268 = 34 ;
    	a223 = a343[(a32 - 10)];
    	a111 = a195[(a32 - 11)];
    	a394 = a32;
    	a315 = a273;
    	a357 = ((a219 + a219) + 4);
    	a396 = ((((((a396 * a329) % 14999) + -14601) % 103) - -207) / 5);
    	a311 = a298[(a219 - 1)];
    	a350 = a377;
    	a288 = a399;
    	a271 = ((a357 - a394) - -14);
    	a219 = (a394 + -7);
    	a328 = a279[((a32 * a32) + -142)]; 
    	}else {
printf("POINT: 1424\n");
    	a350 = a366;
    	a368 = a371;
    	a282 = 32 ;
    	a156 = (a394 - -1);
    	a271 = a156;
    	a328 = a279[(a156 - 10)];
    	a86 = ((a32 + a357) - 15);
    	a329 = ((((26 / 5) + -20) * 9) / 10);
    	a288 = a270;
    	a286 = (((((((a286 * a340) % 14999) * 2) + 3) * 1) % 80) + 1);
    	a311 = a298[(a156 - a394)];
    	a396 = ((((((a396 * a329) % 14999) % 43) + -28) + -1) / 5);
    	a331 = a380[(a219 + -2)];
    	a206 = 32 ;
    	a340 = (((((a396 * a329) * 2) / 5) % 15) + 36);
    	a227 = 32 ;
    	a357 = ((a394 / a271) - -9);
    	a28 = a60[((a156 - a394) + 1)];
    	a315 = a295;
    	a394 = a156;
    	a268 = 32 ;
    	a219 = (a271 - 7);
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1425\n");

    if((((((((11 == a368[5]) && a28 == a60[4]) && a227 == 33) && a357 == 8) && a219 == 3) && a223 == a343[0]) && (a394 == 10 && (((a32 == 12 &&  cf==1 ) && input == inputs[3]) && a264 == a290[0])))) {
printf("POINT: 1426\n");
    	cf = 0;
    	a264 = a290[((a219 + a32) - 8)];
    	a132 = a91[(a357 + -3)]; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm150(int input) {
printf("POINT: 1427\n");

    if((((19 == a288[5]) && ((a28 == a60[4] && (a329 <=  -156 && ((a32 == 13 &&  cf==1 ) && a264 == a290[0]))) && input == inputs[3])) && ((11 == a368[5]) && (a328 == a279[0] && (a227 == 33 && a271 == 10))))) {
printf("POINT: 1428\n");
    	cf = 0;
    	a180 = a164[((a219 + a271) + -9)];
    	a28 = a60[(a394 / a32)];
    	a93 = ((a219 / a32) + 11); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1429\n");

    if(((a311 == a298[0] && (a264 == a290[0] && ((input == inputs[10] &&  cf==1 ) && a32 == 13))) && ((a282 == 33 && (((a28 == a60[4] && a286 <=  -79) && a394 == 10) && a219 == 3)) && (54 == a350[5])))) {
printf("POINT: 1430\n");
    	cf = 0;
    	a32 = (a394 - -7);
    	a331 = a380[(a219 + -1)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1431\n");

    if(((a311 == a298[0] && ((a206 == 33 && ((input == inputs[1] && ( cf==1  && a264 == a290[0])) && a28 == a60[4])) && a227 == 33)) && (a396 <=  -72 && ((a32 == 13 && a223 == a343[0]) && (54 == a350[5]))))) {
printf("POINT: 1432\n");
    	cf = 0;
    	a331 = a380[(a271 + -8)];
    	a32 = ((a394 + a394) + -3); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm152(int input) {
printf("POINT: 1433\n");

    if(((a340 <=  21 && (a311 == a298[0] && ((((input == inputs[7] && ( cf==1  && a32 == 17)) && a219 == 3) && a264 == a290[0]) && a28 == a60[4]))) && (a268 == 33 && ((54 == a350[5]) && a328 == a279[0])))) {
printf("POINT: 1434\n");
    	cf = 0;
printf("POINT: 1435\n");

    	if((78 == a0[0])) {
printf("POINT: 1436\n");
    	a271 = (a32 - 5);
    	a56 = 34 ;
    	a368 = a293;
    	a227 = 34 ;
    	a288 = a399;
    	a111 = a195[(a219 + 4)];
    	a286 = (((((((a340 * a340) % 14999) % 103) - -188) - 2) - 20175) - -20177);
    	a206 = 34 ;
    	a357 = (a32 + -7);
    	a329 = (((((((a340 * a340) % 14999) + -10982) - 761) / 5) % 83) - -88);
    	a311 = a298[((a32 - a32) - -2)];
    	a350 = a377;
    	a282 = 34 ;
    	a223 = a343[(a357 + -8)];
    	a315 = a273;
    	a28 = a60[((a219 + a394) - 11)];
    	a328 = a279[((a271 + a271) + -22)];
    	a219 = (a271 - 7);
    	a396 = ((((((a396 * a286) % 14999) % 103) - -119) * 1) - -1);
    	a340 = (((((((a340 * a329) % 14999) % 37) + 91) / 5) - 12321) - -12402);
    	a394 = ((a32 + a357) - 15); 
    	}else {
printf("POINT: 1438\n");
    	a180 = a164[(a357 + -2)];
    	a331 = a380[(a357 / a394)];
    	a28 = a60[(a219 - 3)];
    	a182 = a59[((a32 - a394) + -7)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1439\n");

    if(((a286 <=  -79 && (a32 == 17 && a219 == 3)) && (((19 == a288[5]) && (((32 == a315[3]) && (input == inputs[9] && (( cf==1  && a28 == a60[4]) && a264 == a290[0]))) && a396 <=  -72)) && (11 == a368[5])))) {
printf("POINT: 1440\n");
    	cf = 0;
    	a311 = a298[(a394 + -9)];
    	a331 = a380[(a32 + -16)];
    	a357 = (a32 + -8);
    	a268 = 32 ;
    	a286 = ((((((a340 * a340) % 14999) % 80) + 3) - -1) / 5);
    	a227 = 32 ;
    	a155 = ((((((a340 * a329) % 14999) * 2) % 15035) - 14964) / 5);
    	a28 = a60[(a271 - 4)];
    	a219 = (a271 - 6);
    	a396 = ((((((((a396 * a286) % 14999) % 43) + -27) - 333) * 5) % 43) - -3);
    	a394 = ((a357 / a271) - -11);
    	a328 = a279[((a219 + a271) + -13)];
    	a271 = (a219 + 7);
    	a21 = 34 ;
    	a368 = a371;
    	a340 = (((((((a340 * a329) % 14999) - 2593) / 5) + 16638) % 15) + 34); 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm25(int input) {
printf("POINT: 1441\n");

    if(((a329 <=  -156 && (a331 == a380[0] && a282 == 33)) && (a271 == 10 && ((a223 == a343[0] && (a32 == 10 &&  cf==1 )) && a268 == 33)))) {
printf("POINT: 1442\n");
    	calculate_outputm147(input);
    } 
printf("POINT: 1443\n");

    if(((a268 == 33 && ((a271 == 10 && a227 == 33) && a357 == 8)) && (a219 == 3 && ((a32 == 11 &&  cf==1 ) && a311 == a298[0])))) {
printf("POINT: 1444\n");
    	calculate_outputm148(input);
    } 
printf("POINT: 1445\n");

    if(((a340 <=  21 && (a227 == 33 && a357 == 8)) && (a286 <=  -79 && (a396 <=  -72 && (( cf==1  && a32 == 12) && a206 == 33))))) {
printf("POINT: 1446\n");
    	calculate_outputm149(input);
    } 
printf("POINT: 1447\n");

    if(((a227 == 33 && (32 == a315[3])) && (a394 == 10 && (((a331 == a380[0] && ( cf==1  && a32 == 13)) && a268 == 33) && a206 == 33)))) {
printf("POINT: 1448\n");
    	calculate_outputm150(input);
    } 
printf("POINT: 1449\n");

    if(((a227 == 33 && (a396 <=  -72 && (a394 == 10 && ((a223 == a343[0] && (11 == a368[5])) && a282 == 33)))) && (a32 == 17 &&  cf==1 ))) {
printf("POINT: 1450\n");
    	calculate_outputm152(input);
    } 
}
 void calculate_outputm157(int input) {
printf("POINT: 1451\n");

    if(((a340 <=  21 && ((54 == a350[5]) && (a357 == 8 && (a396 <=  -72 && a264 == a290[3])))) && ((a286 <=  -79 && (((a143 == a176[1] &&  cf==1 ) && a28 == a60[4]) && input == inputs[7])) && a271 == 10))) {
printf("POINT: 1452\n");
    	cf = 0;
    	a282 = 36 ;
    	a206 = 33 ;
    	a131 = ((a394 + a271) - 10);
    	a156 = ((a131 - a394) - -9);
    	a331 = a380[6];
    	a357 = 12;
    	a288 = a399;
    	a223 = a343[6];
    	a311 = a298[4];
    	a350 = a336;
    	a268 = 34 ;
    	a28 = a60[(a219 - 2)];
    	a368 = a293;
    	a286 = (((a286 * 1) * 1) * 1);
    	a328 = a279[7];
    	a271 = 17;
    	a315 = a273;
    	a227 = 36 ;
    	a219 = 6;
    	a329 = ((((a329 % 14922) + -156) - 6347) * 1);
    	a396 = ((((a396 % 103) - -139) + 21096) + -21015);
    	a340 = ((((a340 + 18186) % 14935) + 15064) * 1);
    	a394 = 12; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1453\n");

    if(((a286 <=  -79 && ((( cf==1  && input == inputs[2]) && a28 == a60[4]) && a143 == a176[1])) && (((a396 <=  -72 && (a264 == a290[3] && ((19 == a288[5]) && (54 == a350[5])))) && a268 == 33) && a206 == 33))) {
printf("POINT: 1454\n");
    	cf = 0;
    	a28 = a60[(a357 + -5)];
    	a20 = 35 ;
    	a188 = a105; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1455\n");

    if((((a311 == a298[0] && (a28 == a60[4] && (a282 == 33 && a331 == a380[0]))) && a396 <=  -72) && ((a223 == a343[0] && (input == inputs[5] && (( cf==1  && a143 == a176[1]) && a264 == a290[3]))) && a329 <=  -156))) {
printf("POINT: 1456\n");
    	cf = 0;
    	a129 = a108[(a394 + -5)];
    	a56 = 36 ;
    	a28 = a60[(a394 + -8)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1457\n");

    if(((((a396 <=  -72 && ((11 == a368[5]) && (a206 == 33 && a28 == a60[4]))) && a357 == 8) && (19 == a288[5])) && ((input == inputs[1] && (a264 == a290[3] && (a143 == a176[1] &&  cf==1 ))) && a223 == a343[0]))) {
printf("POINT: 1458\n");
    	cf = 0;
printf("POINT: 1459\n");

    	if(((!(a331 == 10) && a143 == 4) || !(a223 == a343[0]))) {
printf("POINT: 1460\n");
    	a28 = a60[(a357 + -1)];
    	a93 = (a357 - -2);
    	a267 = a93; 
    	}else {
printf("POINT: 1462\n");
    	a155 = (((((a286 * a396) % 14999) + 12853) - -1978) * 1);
    	a28 = a60[(a357 + -2)];
    	a47 = (a219 + 13);
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1463\n");

    if(((a340 <=  21 && (a143 == a176[1] && ((a219 == 3 && a396 <=  -72) && a331 == a380[0]))) && ((input == inputs[4] && ((a264 == a290[3] && ( cf==1  && a28 == a60[4])) && (11 == a368[5]))) && (19 == a288[5])))) {
printf("POINT: 1464\n");
    	cf = 0;
    	a99 = ((a394 + a357) + -7);
    	a93 = (a357 + 8);
    	a28 = a60[(a99 - 4)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1465\n");

    if((((a264 == a290[3] && a268 == 33) && a328 == a279[0]) && (((a28 == a60[4] && (((input == inputs[14] && (a143 == a176[1] &&  cf==1 )) && a396 <=  -72) && a357 == 8)) && a219 == 3) && a206 == 33))) {
printf("POINT: 1466\n");
    	cf = 0;
    	a264 = a290[((a394 / a357) + 5)];
    	a90 = a24; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1467\n");

    if(((a396 <=  -72 && (a328 == a279[0] && (( cf==1  && a264 == a290[3]) && a28 == a60[4]))) && (((32 == a315[3]) && (a340 <=  21 && (((11 == a368[5]) && a143 == a176[1]) && input == inputs[3]))) && a223 == a343[0]))) {
printf("POINT: 1468\n");
    	a40 -= (a40 - 20) < a40 ? 1 : 0;
printf("POINT: 1470\n");
    	cf = 0;
    	a28 = a60[((a271 / a219) + 2)];
    	a125 = (((((((a286 * a340) % 14999) % 14894) - -15104) / 5) * 5) + 2);
    	a154 = ((a357 + a357) - 3); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1471\n");

    if(((a206 == 33 && ((11 == a368[5]) && a328 == a279[0])) && ((a396 <=  -72 && ((a28 == a60[4] && ((input == inputs[9] && (a264 == a290[3] &&  cf==1 )) && a143 == a176[1])) && a286 <=  -79)) && a223 == a343[0]))) {
printf("POINT: 1472\n");
    	cf = 0;
    	a286 = ((((a286 / 5) % 103) + 276) - -9);
    	a368 = a293;
    	a396 = ((((((a396 - -2810) % 103) - -120) * 5) % 103) - -31);
    	a315 = a321;
    	a340 = (((((a340 * 1) - -1) / 5) % 37) + 91);
    	a282 = 36 ;
    	a329 = (((((a329 * 1) + 0) + 0) % 83) + 146);
    	a328 = a279[3];
    	a219 = 3;
    	a268 = 36 ;
    	a311 = a298[6];
    	a288 = a297;
    	a28 = a60[(a271 + -9)];
    	a206 = 35 ;
    	a157 = a64[(a394 - 6)];
    	a156 = ((a271 + a394) + -8);
    	a394 = 17;
    	a227 = 34 ;
    	a331 = a380[2];
    	a357 = 14;
    	a350 = a377;
    	a271 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1473\n");

    if(((a264 == a290[3] && ((((19 == a288[5]) && a340 <=  21) && a143 == a176[1]) && a286 <=  -79)) && (((((input == inputs[12] &&  cf==1 ) && a28 == a60[4]) && (11 == a368[5])) && a357 == 8) && a328 == a279[0]))) {
printf("POINT: 1474\n");
    	cf = 0;
    	a75 = 34 ;
    	a28 = a60[(a219 + 3)];
    	a155 = (((((((a286 * a396) % 14999) + -10289) % 16) - -86) - 10732) + 10733); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1475\n");

    if((((((32 == a315[3]) && (( cf==1  && a28 == a60[4]) && a143 == a176[1])) && (11 == a368[5])) && a329 <=  -156) && (a282 == 33 && (a340 <=  21 && ((input == inputs[6] && (19 == a288[5])) && a264 == a290[3]))))) {
printf("POINT: 1476\n");
    	cf = 0;
    	a267 = ((a394 * a271) - 90);
    	a28 = a60[(a394 + -3)];
    	a93 = ((a357 / a219) + 8); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1477\n");

    if(((a271 == 10 && ((a264 == a290[3] && (a223 == a343[0] && a143 == a176[1])) && (19 == a288[5]))) && (a286 <=  -79 && ((((a28 == a60[4] &&  cf==1 ) && input == inputs[8]) && a206 == 33) && a340 <=  21)))) {
printf("POINT: 1478\n");
    	cf = 0;
    	a28 = a60[(a357 / a357)];
    	a156 = a394;
    	a86 = (a156 - 7); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1479\n");

    if(((a223 == a343[0] && (a329 <=  -156 && ((a311 == a298[0] && ((input == inputs[13] && ((a264 == a290[3] &&  cf==1 ) && a143 == a176[1])) && a28 == a60[4])) && a394 == 10))) && (a271 == 10 && a227 == 33))) {
printf("POINT: 1480\n");
    	a189 += (a189 + 20) > a189 ? 3 : 0;
printf("POINT: 1482\n");
    	cf = 0;
    	a264 = a290[(a394 - 4)];
    	a90 = a24; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1483\n");

    if(((a268 == 33 && (a264 == a290[3] && (((32 == a315[3]) && ((a282 == 33 && a394 == 10) && a357 == 8)) && input == inputs[11]))) && ((( cf==1  && a28 == a60[4]) && a143 == a176[1]) && (11 == a368[5])))) {
printf("POINT: 1484\n");
    	cf = 0;
printf("POINT: 1485\n");

    	if((a223 == a343[4] && a157 == a64[1])) {
printf("POINT: 1486\n");
    	a156 = (a394 + 3);
    	a28 = a60[((a394 / a219) - 2)];
    	a151 = (a156 - -1); 
    	}else {
printf("POINT: 1488\n");
    	a93 = a394;
    	a267 = a357;
    	a28 = a60[(a93 - 3)];
    	}printf("%d\n", 26);  
    } 
printf("POINT: 1489\n");

    if(((a28 == a60[4] && (a396 <=  -72 && (a328 == a279[0] && ((a331 == a380[0] && (a143 == a176[1] && (input == inputs[0] &&  cf==1 ))) && a264 == a290[3])))) && (a329 <=  -156 && (a227 == 33 && a271 == 10)))) {
printf("POINT: 1490\n");
    	cf = 0;
    	a328 = a279[0];
    	a156 = (a357 - -6);
    	a311 = a298[2];
    	a121 = 33 ;
    	a206 = 34 ;
    	a394 = 16;
    	a331 = a380[7];
    	a315 = a273;
    	a288 = a297;
    	a227 = 36 ;
    	a396 = (((((a396 % 14887) + 15111) * 1) * 10) / 9);
    	a282 = 34 ;
    	a219 = 6;
    	a286 = ((((a286 % 14854) + 15145) / 5) - -6088);
    	a368 = a293;
    	a223 = a343[3];
    	a329 = (((((a329 / 5) / 5) - 11975) % 83) + 107);
    	a28 = a60[((a271 * a357) + -79)];
    	a340 = ((((a340 % 15010) - 14988) - 2) - 0);
    	a268 = 36 ;
    	a350 = a336;
    	a357 = 11;
    	a271 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1491\n");

    if(((a396 <=  -72 && (a357 == 8 && (a271 == 10 && (((a264 == a290[3] && ((a143 == a176[1] &&  cf==1 ) && a28 == a60[4])) && input == inputs[10]) && (32 == a315[3]))))) && (a268 == 33 && a219 == 3))) {
printf("POINT: 1492\n");
    	cf = 0;
    	a264 = a290[((a357 + a394) - 11)];
    	a132 = a91[(a357 - 3)]; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm159(int input) {
printf("POINT: 1493\n");

    if((((54 == a350[5]) && (((a264 == a290[3] && a396 <=  -72) && a331 == a380[0]) && a206 == 33)) && (a219 == 3 && ((input == inputs[14] && (( cf==1  && a28 == a60[4]) && a143 == a176[3])) && (32 == a315[3]))))) {
printf("POINT: 1494\n");
    	cf = 0;
    	a112 = (a219 - -4);
    	a180 = a164[((a112 - a394) + 3)];
    	a28 = a60[(a394 - 10)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1495\n");

    if((((a206 == 33 && a268 == 33) && a271 == 10) && (a328 == a279[0] && (a219 == 3 && ((input == inputs[8] && ((a28 == a60[4] && ( cf==1  && a143 == a176[3])) && a311 == a298[0])) && a264 == a290[3]))))) {
printf("POINT: 1496\n");
    	cf = 0;
    	a331 = a380[(a271 - 8)];
    	a264 = a290[(a357 + -8)];
    	a32 = (a357 - -9); 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm160(int input) {
printf("POINT: 1497\n");

    if(((((a227 == 33 && (a143 == a176[4] && (11 == a368[5]))) && a329 <=  -156) && (32 == a315[3])) && (((a264 == a290[3] && ((input == inputs[7] &&  cf==1 ) && a28 == a60[4])) && a223 == a343[0]) && a219 == 3))) {
printf("POINT: 1498\n");
    	a57 -= (a57 - 20) < a57 ? 3 : 0;
printf("POINT: 1500\n");
    	cf = 0;
    	a56 = 35 ;
    	a315 = a273;
    	a288 = a270;
    	a286 = (((((((a286 * a396) % 14999) - 7665) / 5) - 19721) % 103) + 286);
    	a268 = 34 ;
    	a350 = a377;
    	a28 = a60[((a219 - a357) - -7)];
    	a329 = ((((((((a329 * a286) % 14999) + -8019) % 79) - 57) * 5) % 79) + 2);
    	a206 = 34 ;
    	a227 = 32 ;
    	a331 = a380[((a394 - a394) + 2)];
    	a357 = ((a271 + a271) - 10);
    	a340 = (((((((a340 * a396) % 14999) % 37) + 92) + -27125) + 40044) - 12919);
    	a396 = (((((((a286 * a286) % 14999) - 17924) - 9759) * 1) % 103) + 196);
    	a282 = 32 ;
    	a311 = a298[(a219 + -1)];
    	a394 = (a271 - -2);
    	a368 = a293;
    	a328 = a279[(a271 - 8)];
    	a223 = a343[(a271 + -9)];
    	a0 = a72;
    	a219 = ((a271 * a271) + -95);
    	a271 = 12; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1501\n");

    if((((((input == inputs[3] && ((a28 == a60[4] && (a143 == a176[4] &&  cf==1 )) && a264 == a290[3])) && a223 == a343[0]) && a328 == a279[0]) && (a394 == 10 && (((32 == a315[3]) && a329 <=  -156) && a340 <=  21))) && a171 <= -75)) {
printf("POINT: 1502\n");
    	cf = 0;
    	a143 = a176[((a394 / a394) - -1)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1503\n");

    if((((((a219 == 3 && ((54 == a350[5]) && a328 == a279[0])) && a268 == 33) && a206 == 33) && (32 == a315[3])) && (a264 == a290[3] && (a28 == a60[4] && (a143 == a176[4] && ( cf==1  && input == inputs[5])))))) {
printf("POINT: 1504\n");
    	cf = 0;
printf("POINT: 1505\n");

    	if(a331 == a380[4]) {
printf("POINT: 1506\n");
    	a331 = a380[(a357 + -7)];
    	a396 = (((40 / 5) * 5) + -87);
    	a340 = ((((((a340 * a396) % 14999) * 2) * 1) % 15) + 38);
    	a311 = a298[(a357 + -7)];
    	a28 = a60[((a357 - a357) - -1)];
    	a315 = a295;
    	a86 = ((a219 + a219) - -1);
    	a223 = a343[((a357 * a357) + -63)];
    	a227 = 32 ;
    	a156 = a394;
    	a350 = a366;
    	a206 = 32 ;
    	a394 = (a271 + 1);
    	a282 = 32 ;
    	a268 = 32 ;
    	a219 = (a271 - 6);
    	a328 = a279[((a271 - a271) + 1)];
    	a286 = ((((((a286 * a329) % 14999) % 80) - 64) + -12) + 9);
    	a329 = (((((((a329 * a340) % 14999) + 29039) / 5) + 22143) % 79) + -120);
    	a288 = a270;
    	a357 = (a271 - 1);
    	a271 = 11; 
    	}else {
printf("POINT: 1508\n");

    	}printf("%d\n", 24);  
    } 
printf("POINT: 1509\n");

    if(((a286 <=  -79 && (((32 == a315[3]) && a223 == a343[0]) && a264 == a290[3])) && (((11 == a368[5]) && ((a28 == a60[4] && (( cf==1  && input == inputs[13]) && a143 == a176[4])) && a328 == a279[0])) && a282 == 33))) {
printf("POINT: 1510\n");
    	cf = 0;
    	a93 = (a357 + 4);
    	a130 = a29[(a394 + -5)];
    	a28 = a60[((a271 / a219) + 4)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1511\n");

    if(((((((54 == a350[5]) && (( cf==1  && a264 == a290[3]) && a143 == a176[4])) && a329 <=  -156) && a219 == 3) && input == inputs[8]) && (a271 == 10 && (a28 == a60[4] && ((32 == a315[3]) && a227 == 33))))) {
printf("POINT: 1512\n");
    	cf = 0;
    	a169 = (((((a286 * a396) % 14999) - 24290) * 1) * 1);
    	a264 = a290[((a271 * a394) - 95)]; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm162(int input) {
printf("POINT: 1513\n");

    if((((((a268 == 33 && (( cf==1  && input == inputs[10]) && a143 == a176[7])) && a28 == a60[4]) && a264 == a290[3]) && a311 == a298[0]) && ((a394 == 10 && (a357 == 8 && a340 <=  21)) && a206 == 33))) {
printf("POINT: 1514\n");
    	cf = 0;
    	a311 = a298[(a394 - 9)];
    	a141 = ((((((a286 * a286) % 14999) - -812) - -7362) - 36356) - -38631);
    	a156 = ((a219 / a357) + 8);
    	a331 = a380[(a357 + -7)];
    	a328 = a279[(a357 + -7)];
    	a223 = a343[(a271 - 8)];
    	a206 = 32 ;
    	a28 = a60[(a394 - 9)];
    	a329 = ((((((a329 * a396) % 14999) + -23114) - -14614) % 79) - 75);
    	a394 = (a357 + 3);
    	a268 = 32 ;
    	a340 = ((((((a340 * a286) % 14999) * 2) % 15) + 38) - 2);
    	a282 = 32 ;
    	a350 = a377;
    	a368 = a371;
    	a227 = 32 ;
    	a396 = (((((((a396 * a286) % 14999) % 43) - 40) - 3) - 6359) + 6348);
    	a315 = a295;
    	a219 = ((a271 - a357) - -2);
    	a286 = ((((a286 % 80) + 9) - -19315) - 19312);
    	a271 = (a357 + 3);
    	a357 = 9; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1515\n");

    if(((a282 == 33 && (a143 == a176[7] && (a264 == a290[3] && (a28 == a60[4] &&  cf==1 )))) && ((a357 == 8 && (((a268 == 33 && input == inputs[4]) && (32 == a315[3])) && a340 <=  21)) && a396 <=  -72))) {
printf("POINT: 1516\n");
    	cf = 0;
    	a282 = 32 ;
    	a315 = a295;
    	a271 = (a394 + 1);
    	a206 = 32 ;
    	a268 = 32 ;
    	a311 = a298[(a219 - 2)];
    	a219 = (a271 + -7);
    	a286 = (((((((a340 * a340) % 14999) % 80) + 2) * 5) % 80) + 2);
    	a28 = a60[(a394 + -9)];
    	a227 = 32 ;
    	a331 = a380[(a394 - 9)];
    	a329 = (((((((a329 * a286) % 14999) + 9714) % 79) - 75) + -13516) - -13514);
    	a396 = ((((((((a396 * a286) % 14999) % 43) + -26) - 1) * 5) % 43) - 28);
    	a328 = a279[((a357 * a394) - 79)];
    	a157 = a64[(a357 - 8)];
    	a340 = ((((((a340 * a286) % 14999) % 15) + 37) - -2) - 2);
    	a156 = (a394 + 2);
    	a288 = a297;
    	a368 = a371;
    	a357 = (a394 - 1);
    	a394 = a271; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1517\n");

    if(((((input == inputs[2] && (a143 == a176[7] && ( cf==1  && a28 == a60[4]))) && a206 == 33) && a394 == 10) && (a340 <=  21 && (a271 == 10 && ((54 == a350[5]) && (a264 == a290[3] && a328 == a279[0])))))) {
printf("POINT: 1518\n");
    	cf = 0;
    	a394 = ((a357 - a219) + 6);
    	a286 = ((((((a286 * a340) % 14999) * 2) % 80) + 2) - -1);
    	a331 = a380[(a357 - 7)];
    	a223 = a343[(a219 - 2)];
    	a329 = ((((((((a329 * a340) % 14999) - -4431) % 79) + -76) * 5) % 79) + -75);
    	a28 = a60[(a219 - -2)];
    	a350 = a366;
    	a396 = ((((((((a396 * a340) % 14999) / 5) % 43) - 27) * 5) % 43) + -26);
    	a80 = (a357 - -7);
    	a328 = a279[(a219 - 2)];
    	a271 = (a357 - -3);
    	a206 = 32 ;
    	a125 = (((((((a340 * a340) % 14999) - -3703) + 1962) - -5936) % 14982) + -15017);
    	a311 = a298[(a271 + -10)];
    	a340 = (((((((a340 * a329) % 14999) + 501) % 15) + 37) - 23431) + 23430);
    	a315 = a295;
    	a219 = (a357 + -4);
    	a368 = a371;
    	a268 = 32 ;
    	a282 = 32 ;
    	a357 = (a394 - 2); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm28(int input) {
printf("POINT: 1519\n");

    if(((a286 <=  -79 && ((32 == a315[3]) && ((a328 == a279[0] && (11 == a368[5])) && a206 == 33))) && (a282 == 33 && (a143 == a176[1] &&  cf==1 )))) {
printf("POINT: 1520\n");
    	calculate_outputm157(input);
    } 
printf("POINT: 1521\n");

    if(((a219 == 3 && (((a143 == a176[3] &&  cf==1 ) && a396 <=  -72) && a340 <=  21)) && ((a206 == 33 && a311 == a298[0]) && a394 == 10))) {
printf("POINT: 1522\n");
    	calculate_outputm159(input);
    } 
printf("POINT: 1523\n");

    if(((( cf==1  && a143 == a176[4]) && a219 == 3) && (a286 <=  -79 && (((a329 <=  -156 && a311 == a298[0]) && (54 == a350[5])) && a340 <=  21)))) {
printf("POINT: 1524\n");
    	calculate_outputm160(input);
    } 
printf("POINT: 1525\n");

    if((((11 == a368[5]) && ((a396 <=  -72 && a282 == 33) && a311 == a298[0])) && ((54 == a350[5]) && (( cf==1  && a143 == a176[7]) && a268 == 33)))) {
printf("POINT: 1526\n");
    	calculate_outputm162(input);
    } 
}
 void calculate_outputm163(int input) {
printf("POINT: 1527\n");

    if((((a311 == a298[0] && ((input == inputs[3] && (a396 <=  -72 && a219 == 3)) && (54 == a350[5]))) && ((a282 == 33 && (a264 == a290[4] && (a28 == a60[4] && ( cf==1  && a351 == 32)))) && a223 == a343[0])) && a45 == -13)) {
printf("POINT: 1528\n");
    	cf = 0;
    	a28 = a60[(a271 + -9)];
    	a156 = (a271 - -2);
    	a157 = a64[((a156 - a394) + 5)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1529\n");

    if(((a227 == 33 && (a396 <=  -72 && (a351 == 32 && (((54 == a350[5]) && a329 <=  -156) && a264 == a290[4])))) && ((19 == a288[5]) && (a219 == 3 && (input == inputs[7] && ( cf==1  && a28 == a60[4])))))) {
printf("POINT: 1530\n");
    	cf = 0;
    	a340 = (((((((a286 * a329) % 14999) / 5) % 15) - -36) - -10580) - 10579);
    	a271 = ((a219 / a394) + 11);
    	a350 = a366;
    	a219 = (a271 + -7);
    	a223 = a343[((a394 + a394) + -19)];
    	a288 = a270;
    	a28 = a60[(a357 + -2)];
    	a331 = a380[((a271 * a357) - 87)];
    	a357 = (a271 + -2);
    	a206 = 32 ;
    	a268 = 32 ;
    	a311 = a298[((a394 * a394) + -99)];
    	a282 = 32 ;
    	a328 = a279[(a394 + -9)];
    	a368 = a371;
    	a21 = 32 ;
    	a227 = 32 ;
    	a396 = (((((((a396 * a340) % 14999) % 43) - 28) - 4267) - -12535) - 8267);
    	a315 = a295;
    	a155 = (((((a329 * a329) % 14999) - 28874) + -802) * 1);
    	a394 = a271;
    	a329 = ((((((a329 * a340) % 14999) % 79) - 76) + -18287) + 18286); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1531\n");

    if((((a227 == 33 && ((19 == a288[5]) && (((( cf==1  && a351 == 32) && input == inputs[8]) && a264 == a290[4]) && a271 == 10))) && a328 == a279[0]) && (a223 == a343[0] && (a357 == 8 && a28 == a60[4])))) {
printf("POINT: 1532\n");
    	cf = 0;
    	a268 = 32 ;
    	a155 = ((((((a396 * a329) % 14999) + -22343) * 1) * 10) / 9);
    	a219 = 4;
    	a311 = a298[(a271 + -9)];
    	a331 = a380[(a394 + -9)];
    	a340 = (((((((a340 * a329) % 14999) - 1302) + -773) - -12470) % 15) - -37);
    	a368 = a371;
    	a227 = 32 ;
    	a357 = ((a271 / a219) - -7);
    	a271 = ((a394 + a394) - 9);
    	a396 = ((((((a286 * a329) % 14999) % 43) - 27) / 5) / 5);
    	a21 = 34 ;
    	a28 = a60[(a394 + -4)];
    	a394 = ((a219 + a219) - -3);
    	a328 = a279[(a219 - 3)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1533\n");

    if(((a340 <=  21 && ((11 == a368[5]) && a268 == 33)) && ((((a282 == 33 && (a206 == 33 && (( cf==1  && a28 == a60[4]) && a351 == 32))) && input == inputs[0]) && a264 == a290[4]) && a271 == 10))) {
printf("POINT: 1534\n");
    	cf = 0;
    	a286 = ((((((a329 * a340) % 14999) - -3279) % 80) - -3) - 1); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1535\n");

    if((((54 == a350[5]) && (a264 == a290[4] && (input == inputs[14] &&  cf==1 ))) && ((a340 <=  21 && (a331 == a380[0] && (a351 == 32 && ((a357 == 8 && a396 <=  -72) && a28 == a60[4])))) && a223 == a343[0]))) {
printf("POINT: 1536\n");
    	a58 += (a58 + 20) > a58 ? 1 : 0;
printf("POINT: 1538\n");
    	cf = 0;
    	a180 = a164[(a271 - 8)];
    	a28 = a60[(a271 + -10)];
    	a181 = a53; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm29(int input) {
printf("POINT: 1539\n");

    if(((((( cf==1  && a351 == 32) && a223 == a343[0]) && a271 == 10) && a311 == a298[0]) && (a331 == a380[0] && (a357 == 8 && (32 == a315[3]))))) {
printf("POINT: 1540\n");
    	calculate_outputm163(input);
    } 
}
 void calculate_outputm167(int input) {
printf("POINT: 1541\n");

    if(((((input == inputs[13] &&  cf==1 ) && a28 == a60[4]) && a271 == 10) && (a227 == 33 && ((a357 == 8 && ((((19 == a288[5]) && a264 == a290[5]) && a169 <=  -161) && a311 == a298[0])) && a268 == 33)))) {
printf("POINT: 1542\n");
    	cf = 0;
    	a93 = (a394 + 2);
    	a130 = a29[(a93 - 7)];
    	a28 = a60[((a394 * a93) - 113)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1543\n");

    if((((a28 == a60[4] && ( cf==1  && input == inputs[5])) && a169 <=  -161) && ((a206 == 33 && (a329 <=  -156 && (a282 == 33 && (a264 == a290[5] && (a271 == 10 && a357 == 8))))) && (19 == a288[5])))) {
printf("POINT: 1544\n");
    	cf = 0;
printf("POINT: 1545\n");

    	if(((a311 == a298[3] || (45 == a181[1])) || !(a115 == 8))) {
printf("POINT: 1546\n");
    	a227 = 32 ;
    	a156 = (a357 - -2);
    	a340 = ((((((a340 * a169) % 14999) % 15) + 38) * 5) / 5);
    	a311 = a298[(a357 + -7)];
    	a206 = 32 ;
    	a331 = a380[((a394 * a394) - 99)];
    	a282 = 32 ;
    	a328 = a279[(a271 + -9)];
    	a288 = a270;
    	a271 = (a357 - -3);
    	a396 = (((((((a396 * a169) % 14999) % 43) - 30) + 3) - -24217) - 24245);
    	a86 = (a156 - 3);
    	a223 = a343[(a394 - 9)];
    	a350 = a366;
    	a329 = (((((((a329 * a340) % 14999) - -19520) % 79) - 80) * 9) / 10);
    	a219 = ((a156 / a394) + 3);
    	a286 = (((((((a286 * a169) % 14999) - 19894) * 1) * 1) % 80) - -34);
    	a28 = a60[(a394 - 9)];
    	a315 = a295;
    	a357 = ((a86 / a219) - -8);
    	a268 = 32 ;
    	a394 = ((a156 * a156) + -89); 
    	}else {
printf("POINT: 1548\n");

    	}printf("%d\n", 24);  
    } 
printf("POINT: 1549\n");

    if(((((a282 == 33 && (((a28 == a60[4] && ((a264 == a290[5] &&  cf==1 ) && input == inputs[3])) && a169 <=  -161) && (54 == a350[5]))) && a286 <=  -79) && (a223 == a343[0] && (a328 == a279[0] && a396 <=  -72))) && a171 <= -75)) {
printf("POINT: 1550\n");
    	cf = 0;
    	a264 = a290[(a271 - 7)];
    	a143 = a176[((a357 + a219) - 9)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1551\n");

    if((((a169 <=  -161 && (a264 == a290[5] &&  cf==1 )) && a223 == a343[0]) && (a271 == 10 && (a396 <=  -72 && ((input == inputs[7] && ((a286 <=  -79 && a282 == 33) && a28 == a60[4])) && a268 == 33))))) {
printf("POINT: 1552\n");
    	cf = 0;
    	a315 = a273;
    	a271 = (a394 + 2);
    	a340 = (((((((a340 * a169) % 14999) / 5) - -14805) / 5) % 37) - -83);
    	a227 = 32 ;
    	a286 = (((((a286 % 103) + 277) + 19221) * 1) + -19232);
    	a288 = a270;
    	a368 = a293;
    	a206 = 34 ;
    	a56 = 35 ;
    	a396 = (((((((a396 * a329) % 14999) % 103) - -116) + 4) - -26453) - 26505);
    	a328 = a279[(a357 + -6)];
    	a28 = a60[(a394 - 8)];
    	a331 = a380[(a219 - 1)];
    	a311 = a298[(a219 - 1)];
    	a350 = a377;
    	a223 = a343[(a394 + -9)];
    	a357 = (a271 - 2);
    	a268 = 34 ;
    	a329 = ((((((a286 * a286) % 14999) % 79) + -79) - 25099) + 25031);
    	a282 = 32 ;
    	a219 = (a271 - 7);
    	a394 = ((a271 / a271) - -11);
    	a0 = a72; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1553\n");

    if(((((a331 == a380[0] && (a169 <=  -161 && (a28 == a60[4] &&  cf==1 ))) && (54 == a350[5])) && (11 == a368[5])) && ((((a264 == a290[5] && a311 == a298[0]) && input == inputs[8]) && a268 == 33) && (19 == a288[5])))) {
printf("POINT: 1554\n");
    	cf = 0;
    	a223 = a343[((a219 - a219) - -1)];
    	a331 = a380[(a271 - 9)];
    	a282 = 32 ;
    	a311 = a298[(a219 + -2)];
    	a394 = (a271 + 1);
    	a315 = a295;
    	a328 = a279[(a219 / a219)];
    	a350 = a366;
    	a206 = 32 ;
    	a156 = (a357 - -2);
    	a28 = a60[(a271 - 9)];
    	a86 = ((a219 - a357) - -12);
    	a268 = 32 ;
    	a227 = 32 ;
    	a357 = ((a86 + a394) - 9);
    	a396 = (((((((a396 * a340) % 14999) - 3511) + -6872) / 5) % 43) - 28);
    	a288 = a270;
    	a340 = (((((((a340 * a286) % 14999) + 384) - -4694) * 1) % 15) - -38);
    	a219 = (a271 + -6);
    	a286 = ((((((a329 * a169) % 14999) / 5) - 5137) % 80) + 58);
    	a271 = 11;
    	a329 = (((((a329 % 79) + -51) * 9) / 10) / 5); 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm30(int input) {
printf("POINT: 1555\n");

    if(((a328 == a279[0] && (a396 <=  -72 && (a340 <=  21 && a311 == a298[0]))) && ((a357 == 8 && (a169 <=  -161 &&  cf==1 )) && a268 == 33))) {
printf("POINT: 1556\n");
    	calculate_outputm167(input);
    } 
}
 void calculate_outputm171(int input) {
printf("POINT: 1557\n");

    if((((((a28 == a60[4] && (((input == inputs[3] &&  cf==1 ) && a132 == a91[2]) && a264 == a290[7])) && a271 == 10) && (19 == a288[5])) && a282 == 33) && ((a396 <=  -72 && a328 == a279[0]) && a394 == 10))) {
printf("POINT: 1558\n");
    	cf = 0;
printf("POINT: 1559\n");

    	if((a166 == a26[3] || ((a111 == a195[1] || !(a271 == 14)) && !(a47 == 9)))) {
printf("POINT: 1560\n");
    	a351 = 35 ;
    	a264 = a290[(a219 - -1)]; 
    	}else {
printf("POINT: 1562\n");
    	a28 = a60[(a394 - 10)];
    	a182 = a59[(a219 - 1)];
    	a180 = a164[(a357 + -2)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1563\n");

    if(((a340 <=  21 && (((54 == a350[5]) && a268 == 33) && input == inputs[6])) && ((32 == a315[3]) && ((a28 == a60[4] && ((( cf==1  && a132 == a91[2]) && a264 == a290[7]) && a219 == 3)) && (11 == a368[5]))))) {
printf("POINT: 1564\n");
    	cf = 0;
printf("POINT: 1565\n");

    	if((a111 == 8 && (49 == a90[0]))) {
printf("POINT: 1566\n");
    	a156 = ((a394 / a394) - -11);
    	a268 = 35 ;
    	a282 = 35 ;
    	a286 = (((((a286 % 14854) + 15145) / 5) * 5) - -2173);
    	a227 = 36 ;
    	a311 = a298[5];
    	a394 = 17;
    	a28 = a60[(a156 - 11)];
    	a328 = a279[4];
    	a340 = ((((a340 / 5) - -21003) * 10) / 9);
    	a329 = (((((a329 - 0) % 14914) + 15085) + -8525) + 11288);
    	a357 = 13;
    	a331 = a380[0];
    	a157 = a64[(a156 - 10)]; 
    	}else {
printf("POINT: 1568\n");
    	a28 = a60[(a394 - 9)];
    	a156 = (a271 + 1);
    	a86 = (a219 + 4);
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1569\n");

    if(((((((input == inputs[5] && (a132 == a91[2] &&  cf==1 )) && a268 == 33) && a264 == a290[7]) && a206 == 33) && a357 == 8) && ((a28 == a60[4] && (a328 == a279[0] && a396 <=  -72)) && a331 == a380[0]))) {
printf("POINT: 1570\n");
    	cf = 0;
printf("POINT: 1571\n");

    	if((a331 == a380[0] || a132 == 9)) {
printf("POINT: 1572\n");
    	a28 = a60[(a219 + 4)];
    	a93 = (a271 + 2);
    	a130 = a29[((a357 - a93) - -9)]; 
    	}else {
printf("POINT: 1574\n");
    	a132 = a91[(a357 - 4)];
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1575\n");

    if(((((11 == a368[5]) && ((a28 == a60[4] && (input == inputs[9] && ( cf==1  && a132 == a91[2]))) && (54 == a350[5]))) && a357 == 8) && ((a206 == 33 && (a264 == a290[7] && a219 == 3)) && a331 == a380[0]))) {
printf("POINT: 1576\n");
    	cf = 0;
    	a328 = a279[3];
    	a282 = 33 ;
    	a286 = (((((a286 % 14960) + -79) + -2044) * 10) / 9);
    	a311 = a298[3];
    	a268 = 36 ;
    	a368 = a293;
    	a188 = a117;
    	a350 = a377;
    	a315 = a321;
    	a28 = a60[((a219 * a394) + -27)];
    	a227 = 34 ;
    	a219 = 9;
    	a288 = a399;
    	a156 = (a357 + 5);
    	a340 = ((((a340 % 37) - -91) + -10690) + 10689);
    	a357 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1577\n");

    if(((((a286 <=  -79 && (((a282 == 33 && (a331 == a380[0] && a132 == a91[2])) && a264 == a290[7]) && a219 == 3)) && a394 == 10) && a268 == 33) && (( cf==1  && a28 == a60[4]) && input == inputs[14]))) {
printf("POINT: 1578\n");
    	cf = 0;
printf("POINT: 1579\n");

    	if(((!(32 == a315[3]) || (a157 == 8 && a328 == a279[2])) || !(a311 == 5))) {
printf("POINT: 1580\n");
    	a93 = ((a219 + a394) + 2);
    	a67 = (((((a329 * a396) % 14999) + -25726) + -2232) * 1);
    	a28 = a60[((a271 / a271) + 6)]; 
    	}else {
printf("POINT: 1582\n");
    	a156 = (a219 + a394);
    	a328 = a279[5];
    	a340 = ((((a340 + 0) % 15010) + -14988) + -1);
    	a311 = a298[7];
    	a227 = 36 ;
    	a286 = (((((a286 % 14960) - 79) - 14755) - -33822) - 25370);
    	a350 = a377;
    	a268 = 33 ;
    	a288 = a297;
    	a282 = 36 ;
    	a368 = a293;
    	a315 = a321;
    	a357 = 13;
    	a188 = a117;
    	a28 = a60[(a394 - 8)];
    	a219 = 10;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1583\n");

    if(((((a132 == a91[2] && a271 == 10) && a219 == 3) && a282 == 33) && ((a206 == 33 && ((19 == a288[5]) && (((a264 == a290[7] &&  cf==1 ) && a28 == a60[4]) && a331 == a380[0]))) && input == inputs[12]))) {
printf("POINT: 1584\n");
    	a45 += (a45 + 20) > a45 ? 2 : 0;
printf("POINT: 1586\n");
    	cf = 0;
printf("POINT: 1587\n");

    	if((a180 == 2 && a227 == 33)) {
printf("POINT: 1588\n");
    	a154 = (a394 - -4);
    	a271 = 15;
    	a331 = a380[6];
    	a227 = 36 ;
    	a288 = a399;
    	a328 = a279[3];
    	a28 = a60[(a357 - 3)];
    	a286 = ((((a286 + 4251) % 103) - -188) * 1);
    	a350 = a377;
    	a223 = a343[7];
    	a282 = 36 ;
    	a311 = a298[2];
    	a125 = (((((a329 * a396) % 14999) - -7173) - -5894) - -818);
    	a396 = (((((a396 % 103) + 214) * 5) % 103) + 112);
    	a219 = 5;
    	a368 = a293;
    	a206 = 35 ;
    	a329 = (((((a329 / 5) + -21367) + 30033) * -1) / 10);
    	a315 = a273;
    	a268 = 36 ;
    	a340 = ((((a340 / 5) - 237) - -6182) + -27036);
    	a394 = 17;
    	a357 = 11; 
    	}else {
printf("POINT: 1590\n");
    	a28 = a60[(a394 - 10)];
    	a15 = 32 ;
    	a180 = a164[(a219 - 2)];
    	}printf("%d\n", 18);  
    } 
printf("POINT: 1591\n");

    if((((54 == a350[5]) && (a328 == a279[0] && ((input == inputs[0] &&  cf==1 ) && a264 == a290[7]))) && ((((a28 == a60[4] && (a132 == a91[2] && a311 == a298[0])) && a219 == 3) && (19 == a288[5])) && a329 <=  -156))) {
printf("POINT: 1592\n");
    	cf = 0;
    	a331 = a380[7];
    	a28 = a60[(a271 - 9)];
    	a286 = (((a286 / 5) + -12670) / 5);
    	a311 = a298[2];
    	a223 = a343[4];
    	a329 = ((((a329 % 14914) - -15085) + 13330) / 5);
    	a396 = ((((a396 % 103) + 182) + 24) / 5);
    	a156 = (a357 + 6);
    	a394 = 14;
    	a268 = 35 ;
    	a368 = a397;
    	a206 = 35 ;
    	a121 = 33 ;
    	a219 = 8;
    	a340 = ((((a340 % 15010) + -14988) - 2) - 1);
    	a315 = a321;
    	a350 = a336;
    	a227 = 35 ;
    	a328 = a279[6];
    	a282 = 34 ;
    	a288 = a297;
    	a357 = 14;
    	a271 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1593\n");

    if((((a219 == 3 && ((a329 <=  -156 && (a268 == 33 && input == inputs[2])) && a264 == a290[7])) && a271 == 10) && ((a328 == a279[0] && (a28 == a60[4] && (a132 == a91[2] &&  cf==1 ))) && a286 <=  -79))) {
printf("POINT: 1594\n");
    	cf = 0;
printf("POINT: 1595\n");

    	if(((280 < a163) && (314 >= a163))) {
printf("POINT: 1596\n");
    	a180 = a164[(a271 - 5)];
    	a75 = 36 ;
    	a28 = a60[(a271 + -10)]; 
    	}else {
printf("POINT: 1598\n");
    	a286 = (((a286 / 5) - 2398) + -4827);
    	a28 = a60[((a271 - a219) + -6)];
    	a311 = a298[5];
    	a227 = 33 ;
    	a206 = 36 ;
    	a156 = ((a271 - a357) + 9);
    	a357 = 14;
    	a223 = a343[7];
    	a315 = a273;
    	a368 = a293;
    	a271 = 14;
    	a331 = a380[7];
    	a394 = 12;
    	a268 = 36 ;
    	a396 = ((((a396 - -17167) % 103) - -119) - 0);
    	a288 = a399;
    	a328 = a279[6];
    	a282 = 35 ;
    	a86 = a219;
    	a329 = (((a329 / 5) + 17725) + 956);
    	a350 = a336;
    	a340 = ((((a340 % 37) - -91) - 28110) + 28110);
    	a219 = 3;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1599\n");

    if((((a219 == 3 && (a394 == 10 && (a264 == a290[7] && (32 == a315[3])))) && a331 == a380[0]) && (a227 == 33 && ((((a28 == a60[4] &&  cf==1 ) && a132 == a91[2]) && a282 == 33) && input == inputs[11])))) {
printf("POINT: 1600\n");
    	cf = 0;
    	a21 = 36 ;
    	a264 = a290[(a394 + -9)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1601\n");

    if((((((( cf==1  && input == inputs[1]) && a264 == a290[7]) && a223 == a343[0]) && a206 == 33) && (11 == a368[5])) && (a340 <=  21 && ((a28 == a60[4] && (a357 == 8 && a132 == a91[2])) && (54 == a350[5]))))) {
printf("POINT: 1602\n");
    	cf = 0;
printf("POINT: 1603\n");

    	if((a357 == 9 || (a157 == 15 || a223 == a343[4]))) {
printf("POINT: 1604\n");
    	a169 = ((((((a396 * a286) % 14999) % 86) + -90) + -13075) + 13087);
    	a264 = a290[(a219 - -2)]; 
    	}else {
printf("POINT: 1606\n");
    	a156 = (a219 + 6);
    	a282 = 36 ;
    	a286 = ((((a286 + 0) % 14854) + 15145) * 1);
    	a357 = 11;
    	a227 = 34 ;
    	a396 = ((((a396 + 0) % 14964) + -72) - 5553);
    	a268 = 33 ;
    	a131 = (a156 + 1);
    	a271 = 15;
    	a331 = a380[4];
    	a340 = ((((a340 - 0) * 1) % 15010) - 14988);
    	a368 = a293;
    	a311 = a298[5];
    	a28 = a60[(a394 + -9)];
    	a223 = a343[0];
    	a394 = 15;
    	a328 = a279[7];
    	a350 = a336;
    	a315 = a321;
    	a329 = (((((a329 - 0) % 14922) + -156) * 10) / 9);
    	a288 = a399;
    	a206 = 34 ;
    	a219 = 9;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1607\n");

    if(((((a357 == 8 && ((19 == a288[5]) && ((a268 == 33 && a282 == 33) && a264 == a290[7]))) && (11 == a368[5])) && a206 == 33) && ((a28 == a60[4] && ( cf==1  && a132 == a91[2])) && input == inputs[8]))) {
printf("POINT: 1608\n");
    	cf = 0;
printf("POINT: 1609\n");

    	if((!(a151 == 17) && a115 == 1)) {
printf("POINT: 1610\n");
    	a329 = ((((a329 * 1) % 79) - -1) / 5);
    	a331 = a380[3];
    	a315 = a295;
    	a394 = 14;
    	a161 = (a219 + 2);
    	a227 = 35 ;
    	a368 = a371;
    	a311 = a298[5];
    	a56 = 32 ;
    	a282 = 32 ;
    	a206 = 36 ;
    	a28 = a60[((a357 / a161) + 1)];
    	a268 = 35 ;
    	a286 = (((((a286 / 5) - -13157) + 12730) * -1) / 10);
    	a271 = 16;
    	a350 = a336;
    	a340 = (((((a340 % 15) - -38) * 1) + 20689) + -20688);
    	a328 = a279[3];
    	a223 = a343[3];
    	a288 = a297;
    	a396 = (((((a396 * 1) + 0) + 15569) % 14887) + 15111);
    	a219 = 4;
    	a357 = 15; 
    	}else {
printf("POINT: 1612\n");
    	a93 = (a357 + 3);
    	a349 = 35 ;
    	a28 = a60[(a219 - -4)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1613\n");

    if((((((a286 <=  -79 && (a394 == 10 && a28 == a60[4])) && a331 == a380[0]) && a268 == 33) && a396 <=  -72) && ((((a264 == a290[7] &&  cf==1 ) && a132 == a91[2]) && input == inputs[10]) && a206 == 33))) {
printf("POINT: 1614\n");
    	cf = 0;
    	a263 = 36 ;
    	a28 = a60[(a394 + -3)];
    	a93 = (a219 - -10); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1615\n");

    if(((a223 == a343[0] && ((a282 == 33 && (a264 == a290[7] && (((input == inputs[7] &&  cf==1 ) && a28 == a60[4]) && a227 == 33))) && a271 == 10)) && (a331 == a380[0] && (a132 == a91[2] && (19 == a288[5]))))) {
printf("POINT: 1616\n");
    	cf = 0;
    	a144 = 36 ;
    	a264 = a290[(a394 - 8)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1617\n");

    if(((a132 == a91[2] && (a223 == a343[0] && ((a331 == a380[0] && a394 == 10) && (54 == a350[5])))) && (a271 == 10 && (a328 == a279[0] && ((input == inputs[4] && (a28 == a60[4] &&  cf==1 )) && a264 == a290[7]))))) {
printf("POINT: 1618\n");
    	cf = 0;
    	a93 = ((a219 / a219) + 12);
    	a28 = a60[((a357 + a271) + -18)];
    	a180 = a164[(a93 + -9)];
    	a268 = 33 ;
    	a357 = 8; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1619\n");

    if(((a264 == a290[7] && (a311 == a298[0] && ((a206 == 33 && ((a28 == a60[4] &&  cf==1 ) && input == inputs[13])) && a132 == a91[2]))) && ((a227 == 33 && (a357 == 8 && a223 == a343[0])) && a268 == 33))) {
printf("POINT: 1620\n");
    	cf = 0;
printf("POINT: 1621\n");

    	if(((22 == a100[4]) && ((!(a86 == 1) && a357 == 12) || a328 == 6))) {
printf("POINT: 1622\n");
    	a288 = a297;
    	a156 = (a271 - 3);
    	a328 = a279[4];
    	a227 = 33 ;
    	a396 = (((((a396 % 103) + 145) - 15) - -12989) - 12938);
    	a331 = a380[6];
    	a268 = 34 ;
    	a28 = a60[((a271 + a357) - 15)];
    	a188 = a117;
    	a315 = a321;
    	a286 = (((((a286 % 14960) - 79) * 10) / 9) - 8760);
    	a311 = a298[6];
    	a350 = a336;
    	a394 = 15;
    	a223 = a343[3];
    	a357 = 13;
    	a340 = ((((a340 % 15010) - 14988) + -1) / 5);
    	a368 = a293;
    	a219 = 9;
    	a206 = 35 ;
    	a282 = 36 ;
    	a329 = (((((a329 % 83) + 136) * 5) % 83) - -41);
    	a271 = 14; 
    	}else {
printf("POINT: 1624\n");
    	a288 = a399;
    	a264 = a290[((a394 - a357) - -1)];
    	a143 = a176[(a271 - 3)];
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm172(int input) {
printf("POINT: 1625\n");

    if((((a28 == a60[4] && a357 == 8) && input == inputs[0]) && (((((a396 <=  -72 && (a264 == a290[7] && (a132 == a91[3] &&  cf==1 ))) && (54 == a350[5])) && a268 == 33) && a311 == a298[0]) && a331 == a380[0]))) {
printf("POINT: 1626\n");
    	cf = 0;
printf("POINT: 1627\n");

    	if(((((!(115 == a188[4]) || a143 == 7) || a286 <=  -79) && !(a130 == 3)) || a180 == a164[4])) {
printf("POINT: 1628\n");
    	a206 = 35 ;
    	a93 = (a271 - -2);
    	a130 = a29[((a219 * a219) - 5)];
    	a28 = a60[(a271 - 3)]; 
    	}else {
printf("POINT: 1630\n");
    	a180 = a164[((a357 + a271) - 18)];
    	a28 = a60[(a219 + -3)];
    	a112 = (a271 + 4);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1631\n");

    if((((32 == a315[3]) && (a311 == a298[0] && ((a394 == 10 && (a28 == a60[4] && (( cf==1  && a132 == a91[3]) && a264 == a290[7]))) && a357 == 8))) && ((input == inputs[8] && a271 == 10) && (19 == a288[5])))) {
printf("POINT: 1632\n");
    	cf = 0;
    	a286 = ((((a286 % 14854) - -15145) - 24700) + 26346);
    	a315 = a321;
    	a271 = 16;
    	a28 = a60[((a357 * a394) - 78)];
    	a311 = a298[3];
    	a282 = 36 ;
    	a350 = a336;
    	a219 = 10;
    	a368 = a371;
    	a396 = (((((a396 % 43) + 12) + 4820) - -9515) + -14357);
    	a331 = a380[6];
    	a227 = 32 ;
    	a56 = 36 ;
    	a129 = a108[(a394 - 9)];
    	a357 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1633\n");

    if(((a328 == a279[0] && ((((( cf==1  && input == inputs[1]) && a264 == a290[7]) && a28 == a60[4]) && a132 == a91[3]) && a357 == 8)) && (((a329 <=  -156 && a286 <=  -79) && a340 <=  21) && a227 == 33))) {
printf("POINT: 1634\n");
    	cf = 0;
    	a129 = a108[((a219 / a271) - -5)];
    	a56 = 36 ;
    	a28 = a60[(a219 - 1)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1635\n");

    if(((((input == inputs[7] && a223 == a343[0]) && a396 <=  -72) && a286 <=  -79) && ((a331 == a380[0] && ((a264 == a290[7] && ((a28 == a60[4] &&  cf==1 ) && a132 == a91[3])) && a329 <=  -156)) && (19 == a288[5])))) {
printf("POINT: 1636\n");
    	cf = 0;
printf("POINT: 1637\n");

    	if(((!(115 == a188[4]) || a282 == 35) || a129 == a108[3])) {
printf("POINT: 1638\n");
    	a141 = (((((((a396 * a329) % 14999) + 6065) % 29) - -55) * 10) / 9);
    	a156 = (a394 - 2);
    	a28 = a60[(a156 - 7)]; 
    	}else {
printf("POINT: 1640\n");
    	a28 = a60[(a357 - 8)];
    	a206 = 32 ;
    	a163 = ((((((a340 * a286) % 14999) - -13237) * 1) % 16) + 296);
    	a180 = a164[(a357 + -1)];
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1641\n");

    if(((((a227 == 33 && (input == inputs[9] && a394 == 10)) && a268 == 33) && a286 <=  -79) && (a223 == a343[0] && (((a28 == a60[4] && ( cf==1  && a264 == a290[7])) && a396 <=  -72) && a132 == a91[3])))) {
printf("POINT: 1642\n");
    	cf = 0;
printf("POINT: 1643\n");

    	if((!(15 == a368[3]) || (a132 == a91[4] || !(a56 == 34)))) {
printf("POINT: 1644\n");
    	a93 = ((a219 - a394) + 19);
    	a130 = a29[((a357 * a394) - 79)];
    	a206 = 32 ;
    	a28 = a60[(a357 + -1)]; 
    	}else {
printf("POINT: 1646\n");
    	a28 = a60[(a357 + -8)];
    	a206 = 35 ;
    	a93 = (a357 + 4);
    	a180 = a164[(a394 - 6)];
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1647\n");

    if(((((a28 == a60[4] && ((32 == a315[3]) && a311 == a298[0])) && a331 == a380[0]) && a282 == 33) && ((a132 == a91[3] && (a394 == 10 && (( cf==1  && input == inputs[13]) && a264 == a290[7]))) && a268 == 33))) {
printf("POINT: 1648\n");
    	cf = 0;
    	a32 = (a219 + 7);
    	a206 = 36 ;
    	a264 = a290[(a32 - 10)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1649\n");

    if((((a264 == a290[7] && (((a132 == a91[3] &&  cf==1 ) && a28 == a60[4]) && input == inputs[3])) && a271 == 10) && (a396 <=  -72 && ((32 == a315[3]) && ((a223 == a343[0] && (19 == a288[5])) && a219 == 3))))) {
printf("POINT: 1650\n");
    	a2 -= (a2 - 20) < a2 ? 3 : 0;
printf("POINT: 1652\n");
    	cf = 0;
    	a329 = (((((a329 % 83) - -140) * 5) % 83) + 14);
    	a156 = ((a219 * a271) - 23);
    	a268 = 34 ;
    	a340 = ((((a340 % 15010) + -14988) - 1) * 1);
    	a331 = a380[0];
    	a315 = a273;
    	a282 = 33 ;
    	a115 = a185[(a357 + -3)];
    	a227 = 35 ;
    	a328 = a279[0];
    	a311 = a298[2];
    	a286 = ((((((a286 % 14854) - -15145) / 5) * 5) * 11) / 10);
    	a206 = 34 ;
    	a271 = 13;
    	a357 = 14;
    	a28 = a60[((a394 - a271) + 2)];
    	a219 = 3; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1653\n");

    if((((32 == a315[3]) && ((a227 == 33 && (((( cf==1  && a264 == a290[7]) && a28 == a60[4]) && a132 == a91[3]) && input == inputs[5])) && a328 == a279[0])) && (a396 <=  -72 && (a340 <=  21 && a331 == a380[0])))) {
printf("POINT: 1654\n");
    	cf = 0;
printf("POINT: 1655\n");

    	if(a267 == 7) {
printf("POINT: 1656\n");
    	a288 = a297;
    	a357 = 14;
    	a206 = 36 ;
    	a394 = 17;
    	a156 = (a271 - 2);
    	a328 = a279[5];
    	a28 = a60[(a156 + -7)];
    	a331 = a380[7];
    	a271 = 13;
    	a286 = ((((a286 / 5) + -12599) % 103) + 242);
    	a368 = a397;
    	a219 = 7;
    	a223 = a343[4];
    	a350 = a366;
    	a141 = (((((a396 * a329) % 14999) - -13610) - -754) * 1);
    	a315 = a321;
    	a340 = (((((a340 + 19983) % 14935) - -15064) - 18144) + 18145);
    	a268 = 34 ;
    	a396 = (((((a396 * 1) / 5) / 5) % 103) - -204);
    	a227 = 33 ;
    	a282 = 33 ;
    	a311 = a298[4];
    	a329 = ((((a329 % 14922) - 156) + -7587) / 5); 
    	}else {
printf("POINT: 1658\n");
    	a350 = a336;
    	a340 = (((a340 / 5) - -12455) * 2);
    	a315 = a273;
    	a357 = 11;
    	a368 = a293;
    	a328 = a279[7];
    	a227 = 35 ;
    	a288 = a399;
    	a125 = ((((((a329 * a396) % 14999) + -24880) * 1) % 101) + 97);
    	a28 = a60[((a271 * a394) - 95)];
    	a170 = 33 ;
    	a311 = a298[7];
    	a206 = 35 ;
    	a268 = 36 ;
    	a271 = 10;
    	a223 = a343[2];
    	a329 = ((((((a329 % 83) - -170) * 5) - -8941) % 83) + 29);
    	a286 = ((((a286 * 1) % 14960) - 79) * 1);
    	a219 = 7;
    	a394 = 10;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1659\n");

    if(((a394 == 10 && ((a286 <=  -79 && (54 == a350[5])) && a28 == a60[4])) && ((((19 == a288[5]) && (a357 == 8 && (input == inputs[10] && ( cf==1  && a264 == a290[7])))) && a132 == a91[3]) && a311 == a298[0]))) {
printf("POINT: 1660\n");
    	a78 -= (a78 - 20) < a78 ? 1 : 0;
printf("POINT: 1662\n");
    	cf = 0;
    	a351 = 34 ;
    	a264 = a290[((a271 + a357) - 14)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1663\n");

    if(((((11 == a368[5]) && (((a271 == 10 && a396 <=  -72) && a132 == a91[3]) && a219 == 3)) && a227 == 33) && (((a28 == a60[4] && ( cf==1  && input == inputs[11])) && a311 == a298[0]) && a264 == a290[7]))) {
printf("POINT: 1664\n");
    	cf = 0;
    	a206 = 35 ;
    	a93 = ((a394 + a394) - 6);
    	a139 = a37;
    	a28 = a60[((a271 - a271) - -7)]; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1665\n");

    if((((54 == a350[5]) && (a394 == 10 && (a340 <=  21 && (a311 == a298[0] && (input == inputs[4] && (a329 <=  -156 && a227 == 33)))))) && ((a28 == a60[4] && ( cf==1  && a132 == a91[3])) && a264 == a290[7]))) {
printf("POINT: 1666\n");
    	cf = 0;
    	a32 = (a357 - -8);
    	a264 = a290[(a394 - 10)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1667\n");

    if((((a357 == 8 && ((a223 == a343[0] && ((a328 == a279[0] && a132 == a91[3]) && (19 == a288[5]))) && a329 <=  -156)) && a271 == 10) && (a264 == a290[7] && ((a28 == a60[4] &&  cf==1 ) && input == inputs[14])))) {
printf("POINT: 1668\n");
    	cf = 0;
    	a156 = (a219 - -10);
    	a28 = a60[((a219 + a219) - 5)];
    	a151 = (a394 - -4); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1669\n");

    if(((((a331 == a380[0] && a227 == 33) && a329 <=  -156) && (32 == a315[3])) && ((11 == a368[5]) && (a223 == a343[0] && (((a132 == a91[3] && (a264 == a290[7] &&  cf==1 )) && a28 == a60[4]) && input == inputs[2]))))) {
printf("POINT: 1670\n");
    	cf = 0;
printf("POINT: 1671\n");

    	if(a155 <=  70) {
printf("POINT: 1672\n");
    	a28 = a60[(a394 + -3)];
    	a263 = 36 ;
    	a206 = 36 ;
    	a93 = (a394 + 3); 
    	}else {
printf("POINT: 1674\n");
    	a28 = a60[(a394 + -3)];
    	a206 = 34 ;
    	a93 = ((a219 + a394) + 1);
    	a139 = a110;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1675\n");

    if(((((input == inputs[12] && (a286 <=  -79 && (a132 == a91[3] && (a264 == a290[7] &&  cf==1 )))) && a28 == a60[4]) && a340 <=  21) && (((54 == a350[5]) && (a328 == a279[0] && (32 == a315[3]))) && a331 == a380[0]))) {
printf("POINT: 1676\n");
    	cf = 0;
    	a93 = a271;
    	a28 = a60[(a93 - 3)];
    	a267 = (a271 - 4); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1677\n");

    if((((a132 == a91[3] && a329 <=  -156) && a286 <=  -79) && (a357 == 8 && ((a219 == 3 && (a311 == a298[0] && (a264 == a290[7] && (( cf==1  && input == inputs[6]) && a28 == a60[4])))) && a396 <=  -72)))) {
printf("POINT: 1678\n");
    	cf = 0;
    	a75 = 33 ;
    	a155 = (((((((a340 * a340) % 14999) - -3623) / 5) / 5) % 16) + 86);
    	a28 = a60[((a271 + a219) + -7)]; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm176(int input) {
printf("POINT: 1679\n");

    if((((54 == a350[5]) && (((a28 == a60[4] && ((a132 == a91[7] &&  cf==1 ) && a264 == a290[7])) && (11 == a368[5])) && input == inputs[10])) && ((a329 <=  -156 && (a268 == 33 && a396 <=  -72)) && a219 == 3))) {
printf("POINT: 1680\n");
    	cf = 0;
    	a357 = (a394 - 1);
    	a28 = a60[(a219 - -3)];
    	a219 = (a357 + -5);
    	a328 = a279[(a219 - 3)];
    	a368 = a371;
    	a315 = a295;
    	a155 = (((((a286 * a329) % 14999) - 28604) + -450) + -233);
    	a331 = a380[((a271 - a219) - 5)];
    	a282 = 32 ;
    	a311 = a298[((a271 * a357) + -89)];
    	a223 = a343[((a357 + a271) + -18)];
    	a227 = 32 ;
    	a21 = 32 ;
    	a206 = 32 ;
    	a394 = (a271 + 1);
    	a268 = 32 ;
    	a288 = a270;
    	a340 = ((((((a340 * a286) % 14999) % 15) - -38) - 27535) + 27534);
    	a329 = ((((((a329 * a286) % 14999) % 79) + -149) + -3) - -53);
    	a396 = ((((a396 % 43) + -10) + -16) + -2);
    	a286 = (((((a396 * a396) % 80) + 2) + -16378) - -16377);
    	a350 = a366;
    	a271 = (a357 - -2); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1681\n");

    if(((((11 == a368[5]) && (((( cf==1  && a28 == a60[4]) && input == inputs[7]) && a311 == a298[0]) && a264 == a290[7])) && a357 == 8) && ((a396 <=  -72 && ((32 == a315[3]) && (54 == a350[5]))) && a132 == a91[7]))) {
printf("POINT: 1682\n");
    	cf = 0;
    	a315 = a273;
    	a286 = ((((((a396 * a396) % 14999) % 103) + 110) - -19) - -11);
    	a340 = ((((((((a286 * a286) % 14999) / 5) % 37) + 81) / 5) * 34) / 10);
    	a56 = 34 ;
    	a28 = a60[(a394 - 8)];
    	a329 = ((((((((a329 * a340) % 14999) - -17388) % 83) - -28) * 5) % 83) + 78);
    	a111 = a195[(a219 + 2)];
    	a268 = 34 ;
    	a331 = a380[(a394 + -8)];
    	a357 = a394;
    	a396 = (((((((a396 * a340) % 14999) % 103) - -119) * 1) / 5) + 94);
    	a350 = a377;
    	a227 = 34 ;
    	a311 = a298[(a394 + -8)];
    	a394 = ((a271 - a271) - -12); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm32(int input) {
printf("POINT: 1683\n");

    if(((a331 == a380[0] && a271 == 10) && (((54 == a350[5]) && (a206 == 33 && (a219 == 3 && (a132 == a91[2] &&  cf==1 )))) && a396 <=  -72))) {
printf("POINT: 1684\n");
    	calculate_outputm171(input);
    } 
printf("POINT: 1685\n");

    if((((a394 == 10 && a331 == a380[0]) && (19 == a288[5])) && ((a282 == 33 && (( cf==1  && a132 == a91[3]) && a396 <=  -72)) && (54 == a350[5])))) {
printf("POINT: 1686\n");
    	calculate_outputm172(input);
    } 
printf("POINT: 1687\n");

    if(((((19 == a288[5]) && ((11 == a368[5]) && ( cf==1  && a132 == a91[7]))) && a282 == 33) && ((a329 <=  -156 && a328 == a279[0]) && a331 == a380[0]))) {
printf("POINT: 1688\n");
    	calculate_outputm176(input);
    } 
}
 void calculate_outputm177(int input) {
printf("POINT: 1689\n");

    if((((((-72 < a396) && (16 >= a396)) && ((a125 <=  -36 && (a80 == 9 &&  cf==1 )) && input == inputs[6])) && (a331 == a380[1] && ((((37 == a315[2]) && (a227 == 32 && a28 == a60[5])) && a394 == 11) && a219 == 4))) && a173 == 10)) {
printf("POINT: 1690\n");
    	cf = 0;
    	a264 = a290[(a271 - 6)];
    	a28 = a60[(a357 - 5)];
    	a169 = (((((a329 * a340) % 86) + -74) / 5) * 5); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1691\n");

    if((((a125 <=  -36 && ((a28 == a60[5] &&  cf==1 ) && input == inputs[4])) && a331 == a380[1]) && (((-156 < a329) && (3 >= a329)) && (((-79 < a286) && (83 >= a286)) && (((a219 == 4 && a394 == 11) && a227 == 32) && a80 == 9))))) {
printf("POINT: 1692\n");
    	a39 += (a39 + 20) > a39 ? 6 : 0;
printf("POINT: 1694\n");
    	cf = 0;
    	a286 = ((((((a286 * a125) % 14999) - -1088) + -121) % 80) + 1);
    	a340 = ((((a340 * a329) - 13054) + -3577) * 1);
    	a357 = ((a271 + a271) + -14);
    	a223 = a343[(a271 - 11)];
    	a268 = 33 ;
    	a351 = 32 ;
    	a315 = a321;
    	a206 = 33 ;
    	a28 = a60[a219];
    	a396 = ((((a396 * a329) / 5) - 27615) + -1887);
    	a288 = a297;
    	a331 = a380[(a271 - 11)];
    	a350 = a336;
    	a264 = a290[((a271 + a80) + -16)];
    	a329 = ((((((a329 * a125) % 14999) - -3148) * 1) % 14922) - 15077);
    	a311 = a298[(a219 - 4)];
    	a219 = ((a394 + a357) + -16);
    	a227 = 33 ;
    	a368 = a397;
    	a394 = (a271 + -1);
    	a328 = a279[(a271 - 11)];
    	a271 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1695\n");

    if((((a271 == 11 && (a311 == a298[1] && a328 == a279[1])) && ((-156 < a329) && (3 >= a329))) && ((15 == a368[3]) && (((((a125 <=  -36 &&  cf==1 ) && a28 == a60[5]) && ((-79 < a286) && (83 >= a286))) && input == inputs[0]) && a80 == 9)))) {
printf("POINT: 1696\n");
    	cf = 0;
    	a223 = a343[(a394 - 11)];
    	a286 = ((((a340 * a340) - 12690) - -17095) - 19081);
    	a315 = a321;
    	a350 = a336;
    	a206 = 33 ;
    	a28 = a60[((a271 * a219) - 40)];
    	a219 = ((a394 * a357) + -96);
    	a144 = 36 ;
    	a396 = (((((((a396 * a286) % 14999) % 14964) + -15035) - 2) / 5) - 20331);
    	a271 = ((a394 - a394) - -10);
    	a227 = 33 ;
    	a268 = 33 ;
    	a328 = a279[(a80 + -9)];
    	a264 = a290[(a80 + -7)];
    	a331 = a380[(a80 - 9)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1697\n");

    if((((a328 == a279[1] && input == inputs[12]) && a394 == 11) && (((-156 < a329) && (3 >= a329)) && ((((a28 == a60[5] && (( cf==1  && a80 == 9) && a125 <=  -36)) && (21 == a288[1])) && a223 == a343[1]) && ((21 < a340) && (53 >= a340)))))) {
printf("POINT: 1698\n");
    	cf = 0;
    	a328 = a279[(a394 + -9)];
    	a368 = a293;
    	a315 = a273;
    	a56 = 34 ;
    	a350 = a377;
    	a329 = ((((((a329 * a286) % 83) + 88) + -27483) + 16987) - -10496);
    	a357 = ((a394 * a394) + -111);
    	a396 = ((((((a396 * a329) % 103) + 120) * 1) + -9407) + 9407);
    	a206 = 34 ;
    	a223 = a343[((a357 / a394) + 2)];
    	a282 = 34 ;
    	a331 = a380[((a357 - a357) - -2)];
    	a340 = ((((((a340 * a286) % 37) - -90) * 5) % 37) - -58);
    	a28 = a60[(a394 - a80)];
    	a268 = 34 ;
    	a111 = a195[(a271 - 5)];
    	a219 = (a394 - 6);
    	a311 = a298[((a271 * a271) - 119)];
    	a271 = (a394 + 1);
    	a288 = a399;
    	a286 = ((((((((a286 * a125) % 14999) % 103) + 187) * 1) * 5) % 103) + 107);
    	a227 = 34 ;
    	a394 = ((a357 - a357) + 12); 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm179(int input) {
printf("POINT: 1699\n");

    if((((a331 == a380[1] && (a28 == a60[5] && (a125 <=  -36 && ( cf==1  && a80 == 11)))) && input == inputs[3]) && (a227 == 32 && (((-156 < a329) && (3 >= a329)) && ((a328 == a279[1] && (15 == a368[3])) && ((21 < a340) && (53 >= a340))))))) {
printf("POINT: 1700\n");
    	cf = 0;
    	a394 = 12;
    	a329 = (((a329 - -7288) + 9819) / 5);
    	a368 = a371;
    	a206 = 36 ;
    	a331 = a380[7];
    	a28 = a60[a219];
    	a32 = (a80 - 1);
    	a271 = 17;
    	a288 = a270;
    	a268 = 34 ;
    	a396 = (((a396 + 182) / 5) + 110);
    	a286 = ((((a286 + -29743) % 80) - -14) / 5);
    	a340 = ((((a340 / 5) + 118) * 9) / 10);
    	a315 = a273;
    	a282 = 34 ;
    	a264 = a290[(a357 - 9)];
    	a328 = a279[7];
    	a219 = 10;
    	a227 = 36 ;
    	a311 = a298[3];
    	a223 = a343[6];
    	a350 = a366;
    	a357 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1701\n");

    if((((a223 == a343[1] && (input == inputs[6] && a268 == 32)) && a271 == 11) && ((a282 == 32 && (a206 == 32 && (((a125 <=  -36 &&  cf==1 ) && a80 == 11) && a357 == 9))) && a28 == a60[5]))) {
printf("POINT: 1702\n");
    	cf = 0;
printf("POINT: 1703\n");

    	if(((((a129 == a108[7] || a75 == 32) && ((-156 < a329) && (3 >= a329))) || a157 == a64[2]) && a157 == 11)) {
printf("POINT: 1704\n");
    	a267 = (a219 - -6);
    	a93 = (a271 + -1);
    	a28 = a60[(a219 - -3)]; 
    	}else {
printf("POINT: 1706\n");
    	a67 = ((((a329 * a286) - 12046) - 3357) * 1);
    	a28 = a60[((a219 * a219) + -9)];
    	a315 = a295;
    	a357 = 9;
    	a368 = a371;
    	a350 = a366;
    	a206 = 35 ;
    	a227 = 35 ;
    	a340 = ((((a340 * 5) / 5) % 15) + 34);
    	a282 = 32 ;
    	a394 = 15;
    	a288 = a399;
    	a311 = a298[3];
    	a328 = a279[5];
    	a268 = 36 ;
    	a271 = 15;
    	a286 = ((((a286 % 80) - -2) + -1) - -1);
    	a331 = a380[3];
    	a93 = (a80 + 4);
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1707\n");

    if(((( cf==1  && a80 == 11) && a28 == a60[5]) && (a328 == a279[1] && ((input == inputs[11] && (a394 == 11 && (a219 == 4 && (a311 == a298[1] && ((57 == a350[2]) && a357 == 9))))) && a125 <=  -36)))) {
printf("POINT: 1708\n");
    	cf = 0;
printf("POINT: 1709\n");

    	if((a143 == 8 || a67 <=  48)) {
printf("POINT: 1710\n");
    	a282 = 32 ;
    	a180 = a164[((a80 - a219) + -1)];
    	a219 = 9;
    	a350 = a377;
    	a28 = a60[((a357 - a271) + 2)];
    	a315 = a295;
    	a268 = 35 ;
    	a223 = a343[3];
    	a271 = 13;
    	a227 = 34 ;
    	a396 = (((((a396 + -2804) - -20840) - 46445) * -1) / 10);
    	a328 = a279[6];
    	a331 = a380[1];
    	a311 = a298[1];
    	a206 = 36 ;
    	a288 = a270;
    	a286 = ((((a286 * 5) % 103) - -186) + 2);
    	a340 = ((((a340 / 5) + 26) * 5) + -127);
    	a329 = (((((a329 * 5) * 5) * 5) % 83) - -87);
    	a368 = a371;
    	a394 = 14;
    	a182 = a59[(a357 - 9)];
    	a357 = 13; 
    	}else {
printf("POINT: 1712\n");
    	a315 = a321;
    	a331 = a380[4];
    	a268 = 36 ;
    	a286 = ((((a286 * 5) % 80) + 3) - -1);
    	a111 = a195[(a357 + -2)];
    	a227 = 33 ;
    	a282 = 32 ;
    	a271 = 13;
    	a206 = 35 ;
    	a368 = a397;
    	a340 = (((a340 - 28937) * 1) - 352);
    	a28 = a60[(a394 + -9)];
    	a350 = a366;
    	a311 = a298[7];
    	a357 = 15;
    	a328 = a279[1];
    	a288 = a270;
    	a219 = 8;
    	a329 = (((a329 + 22423) * 1) * 1);
    	a56 = 34 ;
    	a223 = a343[7];
    	a396 = (((((a396 * 5) + -12319) - -14725) * -1) / 10);
    	a394 = 11;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 1713\n");

    if((((a271 == 11 && (((a28 == a60[5] && ((( cf==1  && input == inputs[4]) && a125 <=  -36) && (37 == a315[2]))) && a80 == 11) && a311 == a298[1])) && a394 == 11) && (a206 == 32 && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 1714\n");
    	cf = 0;
printf("POINT: 1715\n");

    	if((((-79 < a286) && (83 >= a286)) && a394 == 14)) {
printf("POINT: 1716\n");
    	a268 = 36 ;
    	a394 = 12;
    	a328 = a279[1];
    	a368 = a371;
    	a132 = a91[(a219 - 2)];
    	a286 = (((((a286 - 6933) * 4) * 1) % 103) + 241);
    	a315 = a273;
    	a28 = a60[(a271 + -7)];
    	a357 = 11;
    	a396 = ((((a396 + 19620) + -25654) / 5) + 12960);
    	a329 = (((a329 + 1946) * 5) / 5);
    	a340 = ((((((a340 % 15) + 37) * 5) + 25934) % 15) - -32);
    	a206 = 36 ;
    	a223 = a343[1];
    	a227 = 34 ;
    	a350 = a377;
    	a331 = a380[7];
    	a264 = a290[(a271 + -4)];
    	a311 = a298[1];
    	a288 = a270;
    	a219 = 8;
    	a282 = 32 ;
    	a271 = 12; 
    	}else {
printf("POINT: 1718\n");
    	a163 = (((((a329 * a340) % 16) - -296) * 5) / 5);
    	a394 = 15;
    	a206 = 36 ;
    	a268 = 35 ;
    	a328 = a279[7];
    	a288 = a270;
    	a223 = a343[5];
    	a350 = a377;
    	a227 = 36 ;
    	a368 = a371;
    	a329 = (((a329 / 5) + 29288) - 12205);
    	a331 = a380[3];
    	a180 = a164[((a80 - a357) - -5)];
    	a282 = 34 ;
    	a315 = a273;
    	a357 = 13;
    	a271 = 14;
    	a340 = (((((a340 * 5) - 18810) - 1997) * -1) / 10);
    	a286 = (((a286 + 28522) - 18353) * 2);
    	a28 = a60[(a219 + -4)];
    	a396 = (((((a396 + 13251) - -8204) - 24750) * -1) / 10);
    	a311 = a298[5];
    	a219 = 5;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1719\n");

    if(((a331 == a380[1] && ((57 == a350[2]) && ((15 == a368[3]) && ((a28 == a60[5] && ((a80 == 11 &&  cf==1 ) && input == inputs[8])) && a125 <=  -36)))) && (a219 == 4 && (a206 == 32 && a268 == 32)))) {
printf("POINT: 1720\n");
    	cf = 0;
    	a329 = (((a329 - -165) + 21624) - 21623);
    	a282 = 35 ;
    	a223 = a343[1];
    	a368 = a371;
    	a264 = a290[(a271 - 11)];
    	a328 = a279[4];
    	a396 = ((((a396 % 43) - 28) - -2) + -3);
    	a311 = a298[1];
    	a268 = 36 ;
    	a28 = a60[((a394 * a357) - 95)];
    	a350 = a366;
    	a340 = ((((((a340 % 15) + 37) - -6140) * 4) % 15) + 26);
    	a315 = a295;
    	a32 = (a219 - -8);
    	a288 = a399;
    	a206 = 34 ;
    	a271 = 12;
    	a219 = 4;
    	a286 = ((((((a286 - -188) * 9) / 10) * 5) % 103) - -140);
    	a227 = 34 ;
    	a331 = a380[2];
    	a394 = 17;
    	a357 = 15; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1721\n");

    if(((a28 == a60[5] && (a223 == a343[1] && ((((( cf==1  && a125 <=  -36) && input == inputs[1]) && a282 == 32) && a80 == 11) && (57 == a350[2])))) && (((15 == a368[3]) && a271 == 11) && a357 == 9))) {
printf("POINT: 1722\n");
    	cf = 0;
    	a93 = ((a357 / a80) + 9);
    	a28 = a60[((a357 - a219) + 2)];
    	a33 = a198; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1723\n");

    if(((a80 == 11 && (( cf==1  && input == inputs[10]) && a28 == a60[5])) && (a125 <=  -36 && (((57 == a350[2]) && ((37 == a315[2]) && ((((-72 < a396) && (16 >= a396)) && a206 == 32) && a394 == 11))) && a223 == a343[1])))) {
printf("POINT: 1724\n");
    	cf = 0;
    	a32 = ((a80 - a357) - -14);
    	a264 = a290[(a271 - a80)];
    	a28 = a60[(a271 + -7)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1725\n");

    if((((((((( cf==1  && a80 == 11) && a28 == a60[5]) && ((21 < a340) && (53 >= a340))) && a328 == a279[1]) && a311 == a298[1]) && (37 == a315[2])) && a125 <=  -36) && (a331 == a380[1] && (input == inputs[14] && (57 == a350[2]))))) {
printf("POINT: 1726\n");
    	cf = 0;
printf("POINT: 1727\n");

    	if(((((108 == a188[3]) && a264 == 14) || a263 == 35) || !(a182 == a59[6]))) {
printf("POINT: 1728\n");
    	a112 = (a357 + 2);
    	a180 = a164[(a271 - 11)];
    	a28 = a60[(a357 - a357)]; 
    	}else {
printf("POINT: 1730\n");
    	a350 = a366;
    	a282 = 36 ;
    	a368 = a371;
    	a331 = a380[5];
    	a28 = a60[(a357 + -2)];
    	a396 = (((a396 - -13905) + -13726) + -32);
    	a206 = 34 ;
    	a357 = 15;
    	a93 = (a394 - -1);
    	a288 = a270;
    	a311 = a298[5];
    	a268 = 32 ;
    	a394 = 14;
    	a315 = a273;
    	a340 = ((((((a340 % 15) + 24) * 5) + 13990) % 15) - -27);
    	a223 = a343[4];
    	a286 = ((((a286 - -11376) * 10) / 9) / 5);
    	a329 = ((((a329 % 79) + -76) - 6882) + 6882);
    	a271 = 12;
    	a227 = 34 ;
    	a328 = a279[7];
    	a219 = 6;
    	a130 = a29[(a93 - 8)];
    	}printf("%d\n", 18);  
    } 
printf("POINT: 1731\n");

    if(((a80 == 11 && (a28 == a60[5] && (a219 == 4 && (input == inputs[0] && ( cf==1  && a125 <=  -36))))) && (a331 == a380[1] && ((((-79 < a286) && (83 >= a286)) && ((57 == a350[2]) && ((-72 < a396) && (16 >= a396)))) && a394 == 11)))) {
printf("POINT: 1732\n");
    	a199 -= (a199 - 20) < a199 ? 2 : 0;
printf("POINT: 1734\n");
    	cf = 0;
    	 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1735\n");

    if(((a394 == 11 && ((( cf==1  && a80 == 11) && input == inputs[9]) && a125 <=  -36)) && ((15 == a368[3]) && ((a282 == 32 && (((-79 < a286) && (83 >= a286)) && ((21 == a288[1]) && a28 == a60[5]))) && (37 == a315[2]))))) {
printf("POINT: 1736\n");
    	cf = 0;
    	a93 = (a357 - -1);
    	a267 = (a219 - -6);
    	a28 = a60[(a394 - 4)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1737\n");

    if(((a206 == 32 && ((input == inputs[7] &&  cf==1 ) && a28 == a60[5])) && ((((((((21 < a340) && (53 >= a340)) && ((-79 < a286) && (83 >= a286))) && a80 == 11) && a125 <=  -36) && a268 == 32) && a394 == 11) && a227 == 32))) {
printf("POINT: 1738\n");
    	cf = 0;
    	a288 = a270;
    	a340 = (((a340 + 13955) - -15383) - -413);
    	a282 = 35 ;
    	a350 = a377;
    	a227 = 34 ;
    	a329 = (((a329 - -163) - 1) + -2);
    	a15 = 35 ;
    	a223 = a343[7];
    	a328 = a279[2];
    	a206 = 35 ;
    	a268 = 32 ;
    	a331 = a380[5];
    	a368 = a293;
    	a219 = 4;
    	a271 = 12;
    	a180 = a164[(a394 + -10)];
    	a396 = ((((a396 - -190) / 5) * 10) / 9);
    	a315 = a273;
    	a28 = a60[(a357 - 9)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1739\n");

    if(((a268 == 32 && (((-156 < a329) && (3 >= a329)) && (input == inputs[2] && (a28 == a60[5] && (a311 == a298[1] && a271 == 11))))) && (a331 == a380[1] && ((57 == a350[2]) && (a125 <=  -36 && ( cf==1  && a80 == 11)))))) {
printf("POINT: 1740\n");
    	cf = 0;
printf("POINT: 1741\n");

    	if((a394 == 16 || (!(a15 == 34) || ((!(a32 == 13) || a357 == 12) || !(a93 == 14))))) {
printf("POINT: 1742\n");
    	a163 = ((((((a340 * a286) * 5) * 1) * 1) % 44) + 236);
    	a28 = a60[((a394 + a219) - 15)];
    	a180 = a164[(a80 - 4)]; 
    	}else {
printf("POINT: 1744\n");
    	a206 = 34 ;
    	a311 = a298[4];
    	a331 = a380[1];
    	a93 = (a394 + 1);
    	a223 = a343[3];
    	a219 = 10;
    	a282 = 34 ;
    	a328 = a279[3];
    	a315 = a273;
    	a329 = (((((a329 * 5) % 83) - -86) / 5) + 5);
    	a288 = a399;
    	a340 = ((((a340 - 25087) * 10) / -9) - 18409);
    	a227 = 36 ;
    	a357 = 12;
    	a130 = a29[((a93 - a271) - -4)];
    	a350 = a366;
    	a368 = a371;
    	a28 = a60[(a271 - 4)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1745\n");

    if((((a328 == a279[1] && (a206 == 32 && (57 == a350[2]))) && (15 == a368[3])) && (((((( cf==1  && input == inputs[12]) && a80 == 11) && a125 <=  -36) && a223 == a343[1]) && a28 == a60[5]) && ((21 < a340) && (53 >= a340))))) {
printf("POINT: 1746\n");
    	cf = 0;
    	a155 = ((((((((a396 * a125) % 14999) % 16) - -87) + 1) * 5) % 16) + 77);
    	a75 = 32 ;
    	a28 = a60[(a271 + -5)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1747\n");

    if(((((a206 == 32 && a80 == 11) && ((-156 < a329) && (3 >= a329))) && a328 == a279[1]) && (((((input == inputs[5] && ( cf==1  && a125 <=  -36)) && a223 == a343[1]) && a28 == a60[5]) && a271 == 11) && a394 == 11))) {
printf("POINT: 1748\n");
    	cf = 0;
    	a28 = a60[(a394 - a394)];
    	a75 = 36 ;
    	a180 = a164[(a80 - 6)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1749\n");

    if((((a125 <=  -36 && (a227 == 32 && (( cf==1  && a80 == 11) && a28 == a60[5]))) && ((21 < a340) && (53 >= a340))) && ((input == inputs[13] && ((37 == a315[2]) && (a206 == 32 && (57 == a350[2])))) && (15 == a368[3])))) {
printf("POINT: 1750\n");
    	cf = 0;
printf("POINT: 1751\n");

    	if((((280 < a163) && (314 >= a163)) || ((a267 == 10 || !(a357 == 15)) && a115 == a185[3]))) {
printf("POINT: 1752\n");
    	a223 = a343[4];
    	a227 = 35 ;
    	a268 = 32 ;
    	a286 = (((((a286 * 5) % 80) + 2) + 28229) + -28228);
    	a340 = (((((a340 % 15) - -26) / 5) * 49) / 10);
    	a368 = a293;
    	a93 = (a219 - -8);
    	a396 = ((((a396 - -21805) - -1478) - 43329) - -20236);
    	a350 = a377;
    	a206 = 32 ;
    	a315 = a273;
    	a282 = 34 ;
    	a328 = a279[3];
    	a271 = 11;
    	a288 = a399;
    	a130 = a29[(a80 + -8)];
    	a311 = a298[4];
    	a28 = a60[(a357 - 2)];
    	a331 = a380[1];
    	a329 = (((a329 - -167) - 5) - 1);
    	a357 = 9;
    	a394 = 11;
    	a219 = 7; 
    	}else {
printf("POINT: 1754\n");
    	a28 = a60[(a271 - 8)];
    	a188 = a117;
    	a156 = (a394 + -3);
    	}printf("%d\n", 23);  
    } 
}
 void calculate_outputm181(int input) {
printf("POINT: 1755\n");

    if((((((((-72 < a396) && (16 >= a396)) && ((-156 < a329) && (3 >= a329))) && (21 == a288[1])) && a223 == a343[1]) && a125 <=  -36) && ((a282 == 32 && ((( cf==1  && a80 == 15) && a28 == a60[5]) && input == inputs[11])) && (37 == a315[2])))) {
printf("POINT: 1756\n");
    	a2 -= (a2 - 20) < a2 ? 3 : 0;
printf("POINT: 1758\n");
    	cf = 0;
    	a263 = 35 ;
    	a268 = 33 ;
    	a311 = a298[(a80 + -15)];
    	a315 = a321;
    	a350 = a336;
    	a282 = 33 ;
    	a93 = (a394 - -2);
    	a328 = a279[(a394 - 11)];
    	a223 = a343[(a394 - 11)];
    	a28 = a60[(a219 - -3)];
    	a206 = 33 ;
    	a329 = ((((a329 * a286) + -15440) + 15145) - 14179);
    	a340 = ((((a340 * a286) - 6877) - 3760) * 2);
    	a394 = (a357 - -1);
    	a331 = a380[(a271 + -11)];
    	a357 = (a271 - 3); 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1759\n");

    if(((a331 == a380[1] && ((a206 == 32 && (((a125 <=  -36 && ((21 < a340) && (53 >= a340))) && input == inputs[7]) && (57 == a350[2]))) && a223 == a343[1])) && ((( cf==1  && a28 == a60[5]) && a80 == 15) && a282 == 32))) {
printf("POINT: 1760\n");
    	cf = 0;
printf("POINT: 1761\n");

    	if((a111 == 8 || ((((53 == a181[3]) || !(24 == a100[0])) || !(a157 == a64[5])) || (51 == a33[3])))) {
printf("POINT: 1762\n");
    	a268 = 33 ;
    	a311 = a298[((a80 * a394) - 165)];
    	a206 = 34 ;
    	a264 = a290[(a357 - 2)];
    	a328 = a279[((a394 - a80) - -4)];
    	a28 = a60[((a219 - a394) + 11)];
    	a396 = (((((a396 * a340) - -27681) * -1) / 10) * 5);
    	a219 = ((a394 + a394) - 19);
    	a286 = (((((((a286 * a125) % 14999) / 5) * 5) * 2) % 14960) - 15038);
    	a315 = a321;
    	a223 = a343[(a219 - 3)];
    	a340 = ((((((a340 * a125) % 14999) + -7891) * 10) / 9) - 3753);
    	a350 = a336;
    	a329 = ((((((a329 * a125) % 14999) - -2561) % 14922) + -15077) + -2);
    	a368 = a397;
    	a394 = (a271 + -1);
    	a132 = a91[(a357 - 2)];
    	a357 = ((a271 * a271) - 113);
    	a282 = 33 ;
    	a331 = a380[(a271 + -11)];
    	a288 = a297;
    	a271 = 10; 
    	}else {
printf("POINT: 1764\n");
    	a219 = ((a80 + a357) - 21);
    	a32 = (a357 + 2);
    	a206 = 33 ;
    	a315 = a321;
    	a28 = a60[(a394 + -7)];
    	a264 = a290[(a394 + -11)];
    	a357 = (a219 - -5);
    	a288 = a297;
    	a340 = ((((((a340 * a125) % 14999) - 4117) * 1) * 10) / 9);
    	a350 = a336;
    	a223 = a343[(a80 + -15)];
    	a268 = 33 ;
    	a311 = a298[((a271 - a219) + -8)];
    	a396 = ((((((a396 * a125) % 14999) * 2) % 14964) - 15035) - 2);
    	a329 = ((((((a329 * a340) % 14999) % 83) - -86) + -15843) - -15843);
    	a394 = (a271 - -1);
    	a286 = ((((((a286 * a340) % 14999) % 14960) - 15038) / 5) - 6087);
    	a331 = a380[((a219 * a271) + -31)];
    	a271 = (a219 + 7);
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1765\n");

    if((((a28 == a60[5] && (a80 == 15 && (input == inputs[8] && ( cf==1  && a125 <=  -36)))) && (15 == a368[3])) && (a331 == a380[1] && (a328 == a279[1] && ((((21 < a340) && (53 >= a340)) && a271 == 11) && a223 == a343[1]))))) {
printf("POINT: 1766\n");
    	cf = 0;
    	a288 = a297;
    	a286 = (((4 + -16086) + -1464) + -8323);
    	a180 = a164[(a80 + -11)];
    	a340 = (((((a340 * a125) % 14999) / 5) + -22457) - -16016);
    	a93 = (a394 + 2);
    	a331 = a380[(a357 + -9)];
    	a350 = a336;
    	a329 = (((((((a286 * a340) % 14999) * 2) % 14922) + -15077) + 23081) + -23081);
    	a219 = ((a80 * a93) + -192);
    	a206 = 33 ;
    	a282 = 33 ;
    	a28 = a60[((a271 - a357) - 2)];
    	a315 = a321;
    	a328 = a279[(a357 + -9)];
    	a271 = (a357 + 1);
    	a396 = ((((((a396 * a329) % 14999) % 14964) - 15035) * 1) * 1);
    	a368 = a397;
    	a311 = a298[(a357 + -9)];
    	a394 = (a357 + 1);
    	a223 = a343[(a219 - 3)]; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm33(int input) {
printf("POINT: 1767\n");

    if((((( cf==1  && a80 == 9) && ((-72 < a396) && (16 >= a396))) && a206 == 32) && ((((21 < a340) && (53 >= a340)) && (((-156 < a329) && (3 >= a329)) && (57 == a350[2]))) && a219 == 4))) {
printf("POINT: 1768\n");
    	calculate_outputm177(input);
    } 
printf("POINT: 1769\n");

    if(((( cf==1  && a80 == 11) && a206 == 32) && ((((21 < a340) && (53 >= a340)) && (a271 == 11 && (a357 == 9 && a328 == a279[1]))) && a282 == 32))) {
printf("POINT: 1770\n");
    	calculate_outputm179(input);
    } 
printf("POINT: 1771\n");

    if(((((-72 < a396) && (16 >= a396)) && ((a80 == 15 &&  cf==1 ) && ((21 < a340) && (53 >= a340)))) && ((a219 == 4 && (a223 == a343[1] && (57 == a350[2]))) && a282 == 32))) {
printf("POINT: 1772\n");
    	calculate_outputm181(input);
    } 
}
 void calculate_outputm182(int input) {
printf("POINT: 1773\n");

    if((((((-79 < a286) && (83 >= a286)) && (57 == a350[2])) && a271 == 11) && (a268 == 32 && (((a311 == a298[1] && ((a170 == 33 && (((-36 < a125) && (168 >= a125)) &&  cf==1 )) && a28 == a60[5])) && input == inputs[10]) && (15 == a368[3]))))) {
printf("POINT: 1774\n");
    	cf = 0;
    	a328 = a279[((a357 + a271) - 20)];
    	a93 = (a357 - -2);
    	a28 = a60[(a394 + -4)];
    	a315 = a321;
    	a368 = a293;
    	a288 = a297;
    	a219 = ((a357 / a357) + 2);
    	a268 = 33 ;
    	a227 = 33 ;
    	a286 = ((((a286 * a340) + 24730) - 32954) * 2);
    	a271 = ((a357 - a357) + 12);
    	a311 = a298[(a219 + -3)];
    	a394 = (a93 + -1);
    	a349 = 34 ;
    	a350 = a377;
    	a340 = ((((a340 * a329) + -695) + -9831) - 6803);
    	a329 = ((((((a329 * a125) % 14922) + -15077) + -2) / 5) + -12411);
    	a357 = 8; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1775\n");

    if(((a28 == a60[5] && (( cf==1  && input == inputs[3]) && ((-36 < a125) && (168 >= a125)))) && ((((a328 == a279[1] && (a170 == 33 && (a394 == 11 && (37 == a315[2])))) && a271 == 11) && ((21 < a340) && (53 >= a340))) && a223 == a343[1]))) {
printf("POINT: 1776\n");
    	cf = 0;
    	a227 = 33 ;
    	a268 = 33 ;
    	a219 = (a271 - 8);
    	a28 = a60[(a357 - 5)];
    	a328 = a279[(a357 + -9)];
    	a340 = ((((a340 * a329) - 7879) / 5) * 5);
    	a311 = a298[(a357 - 9)];
    	a368 = a397;
    	a394 = ((a271 + a357) - 10);
    	a286 = ((((((a286 * a396) % 14999) * 2) - -1) % 14960) + -15038);
    	a350 = a336;
    	a143 = a176[(a271 - 4)];
    	a223 = a343[((a357 - a219) - 6)];
    	a329 = (((((a329 * a125) % 14922) + -15077) - 0) - 0);
    	a315 = a321;
    	a264 = a290[(a357 - 6)];
    	a271 = (a219 - -7);
    	a357 = (a219 + 5); 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm183(int input) {
printf("POINT: 1777\n");

    if((((a206 == 32 && ((a170 == 34 && (a268 == 32 && ((input == inputs[11] && (a28 == a60[5] &&  cf==1 )) && ((-36 < a125) && (168 >= a125))))) && a331 == a380[1])) && ((21 < a340) && (53 >= a340))) && (a328 == a279[1] && a311 == a298[1]))) {
printf("POINT: 1778\n");
    	cf = 0;
printf("POINT: 1779\n");

    	if((!(75 == a0[3]) && a267 == 6)) {
printf("POINT: 1780\n");
    	a132 = a91[(a357 - 5)];
    	a264 = a290[((a271 * a394) - 114)];
    	a28 = a60[a219]; 
    	}else {
printf("POINT: 1782\n");
    	a28 = a60[(a394 - 8)];
    	a188 = a43;
    	a136 = ((a271 * a357) - 86);
    	}printf("%d\n", 18);  
    } 
printf("POINT: 1783\n");

    if((((a394 == 11 && ((a170 == 34 && (((-36 < a125) && (168 >= a125)) &&  cf==1 )) && (21 == a288[1]))) && a206 == 32) && (a357 == 9 && ((input == inputs[10] && (a219 == 4 && ((21 < a340) && (53 >= a340)))) && a28 == a60[5])))) {
printf("POINT: 1784\n");
    	cf = 0;
printf("POINT: 1785\n");

    	if(((!(a161 == 8) || a129 == 5) || !(a227 == 32))) {
printf("POINT: 1786\n");
    	a206 = 34 ;
    	a315 = a295;
    	a350 = a366;
    	a182 = a59[((a219 / a394) + 6)];
    	a28 = a60[((a357 * a271) - 99)];
    	a223 = a343[5];
    	a282 = 36 ;
    	a328 = a279[6];
    	a368 = a371;
    	a219 = 10;
    	a357 = 15;
    	a271 = 15;
    	a268 = 32 ;
    	a340 = (((((a340 * 5) - -24831) / 5) % 15) - -35);
    	a396 = (((a396 + 26843) * 1) + 1463);
    	a227 = 35 ;
    	a288 = a399;
    	a329 = (((((a329 - -13421) / 5) + -16847) * -1) / 10);
    	a180 = a164[(a219 + 3)];
    	a286 = (((a286 * 5) - -4370) * 5);
    	a311 = a298[1];
    	a331 = a380[6];
    	a394 = 17; 
    	}else {
printf("POINT: 1788\n");
    	a56 = 34 ;
    	a271 = 10;
    	a368 = a397;
    	a311 = a298[6];
    	a357 = 13;
    	a223 = a343[3];
    	a111 = a195[(a219 + 2)];
    	a396 = (((a396 - -28062) - -1241) * 1);
    	a328 = a279[0];
    	a350 = a336;
    	a340 = (((a340 - -27621) * 1) - 13544);
    	a315 = a321;
    	a227 = 35 ;
    	a286 = (((a286 / 5) * 5) + 1501);
    	a288 = a270;
    	a28 = a60[((a219 - a394) + 9)];
    	a282 = 32 ;
    	a329 = (((a329 * 5) + 22741) - -375);
    	a394 = 10;
    	a331 = a380[7];
    	a206 = 35 ;
    	a268 = 33 ;
    	a219 = 4;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1789\n");

    if((((a28 == a60[5] && (a170 == 34 && ( cf==1  && ((-36 < a125) && (168 >= a125))))) && a206 == 32) && (((((-79 < a286) && (83 >= a286)) && (input == inputs[3] && (((21 < a340) && (53 >= a340)) && (37 == a315[2])))) && (15 == a368[3])) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 1790\n");
    	cf = 0;
printf("POINT: 1791\n");

    	if(((a129 == 4 || a157 == a64[5]) || !(11 == a368[5]))) {
printf("POINT: 1792\n");
    	a156 = (a357 - -5);
    	a121 = 33 ;
    	a28 = a60[((a219 + a271) - 14)]; 
    	}else {
printf("POINT: 1794\n");
    	a282 = 34 ;
    	a28 = a60[((a219 - a271) + 7)];
    	a315 = a295;
    	a288 = a399;
    	a268 = 32 ;
    	a368 = a371;
    	a340 = ((((a340 - 22909) - 143) * 1) - -23118);
    	a331 = a380[6];
    	a328 = a279[3];
    	a223 = a343[1];
    	a350 = a377;
    	a180 = a164[(a357 + -8)];
    	a219 = 5;
    	a329 = ((((a329 + -25172) * -1) / 10) - -25533);
    	a227 = 34 ;
    	a15 = 35 ;
    	a396 = (((a396 - 24282) - 512) - -41869);
    	a206 = 32 ;
    	a271 = 17;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1795\n");

    if((((a28 == a60[5] && (a223 == a343[1] && (a219 == 4 && (( cf==1  && input == inputs[1]) && ((-36 < a125) && (168 >= a125)))))) && a357 == 9) && (a227 == 32 && ((a282 == 32 && a170 == 34) && (21 == a288[1]))))) {
printf("POINT: 1796\n");
    	cf = 0;
    	a28 = a60[(a357 - 5)];
    	a132 = a91[a219];
    	a264 = a290[(a357 + -2)]; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1797\n");

    if((((37 == a315[2]) && ((((-79 < a286) && (83 >= a286)) && ((a311 == a298[1] && a206 == 32) && input == inputs[5])) && ((21 < a340) && (53 >= a340)))) && (a170 == 34 && ((a28 == a60[5] && ( cf==1  && ((-36 < a125) && (168 >= a125)))) && a328 == a279[1])))) {
printf("POINT: 1798\n");
    	cf = 0;
    	a86 = ((a357 * a394) + -96);
    	a28 = a60[(a86 + -2)];
    	a156 = (a357 + 2); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1799\n");

    if(((((-79 < a286) && (83 >= a286)) && (((-72 < a396) && (16 >= a396)) && a357 == 9)) && ((((a227 == 32 && (((-36 < a125) && (168 >= a125)) && (( cf==1  && input == inputs[2]) && a170 == 34))) && a28 == a60[5]) && a206 == 32) && a223 == a343[1]))) {
printf("POINT: 1800\n");
    	cf = 0;
    	a268 = 35 ;
    	a315 = a295;
    	a282 = 36 ;
    	a223 = a343[7];
    	a206 = 36 ;
    	a227 = 35 ;
    	a28 = a60[((a219 + a219) - 8)];
    	a329 = (((a329 * 5) - -16362) * 1);
    	a288 = a270;
    	a331 = a380[4];
    	a180 = a164[(a357 - 7)];
    	a394 = 16;
    	a219 = 7;
    	a368 = a293;
    	a328 = a279[4];
    	a350 = a366;
    	a181 = a98; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1801\n");

    if(((a28 == a60[5] && ((((-36 < a125) && (168 >= a125)) &&  cf==1 ) && input == inputs[8])) && ((((-156 < a329) && (3 >= a329)) && ((a331 == a380[1] && (a268 == 32 && (((-72 < a396) && (16 >= a396)) && a271 == 11))) && (57 == a350[2]))) && a170 == 34))) {
printf("POINT: 1802\n");
    	a39 += (a39 + 20) > a39 ? 3 : 0;
printf("POINT: 1804\n");
    	cf = 0;
    	a227 = 32 ;
    	a329 = (((a329 - 15864) * 1) * 1);
    	a315 = a295;
    	a28 = a60[((a219 - a394) - -9)];
    	a271 = 17;
    	a396 = (((a396 + -16080) * 1) / 5);
    	a288 = a297;
    	a223 = a343[6];
    	a340 = ((((a340 * 10) / 1) * 5) * 5);
    	a206 = 36 ;
    	a350 = a336;
    	a129 = a108[((a357 + a219) + -13)];
    	a394 = 15;
    	a268 = 36 ;
    	a328 = a279[1];
    	a219 = 3;
    	a282 = 35 ;
    	a368 = a397;
    	a56 = 36 ;
    	a286 = (((a286 / 5) / 5) - -27);
    	a331 = a380[3];
    	a357 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1805\n");

    if(((a223 == a343[1] && ((a227 == 32 && ((21 < a340) && (53 >= a340))) && a268 == 32)) && (a219 == 4 && ((((a28 == a60[5] && (((-36 < a125) && (168 >= a125)) &&  cf==1 )) && a331 == a380[1]) && input == inputs[4]) && a170 == 34)))) {
printf("POINT: 1806\n");
    	a189 += (a189 + 20) > a189 ? 3 : 0;
printf("POINT: 1808\n");
    	cf = 0;
    	a28 = a60[(a357 + -8)];
    	a141 = (((((a125 * a329) % 14973) + -15025) - 2) * 1);
    	a156 = ((a357 - a271) - -10); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1809\n");

    if(((a227 == 32 && ((((-79 < a286) && (83 >= a286)) && (a170 == 34 && ( cf==1  && ((-36 < a125) && (168 >= a125))))) && a28 == a60[5])) && ((input == inputs[14] && ((a206 == 32 && a331 == a380[1]) && a282 == 32)) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 1810\n");
    	cf = 0;
printf("POINT: 1811\n");

    	if(((24 == a139[0]) &&  cf!=1 )) {
printf("POINT: 1812\n");
    	a154 = ((a271 - a357) + 11);
    	a125 = ((((a125 * a396) + 15507) - -3629) * 1); 
    	}else {
printf("POINT: 1814\n");
    	a329 = (((((a329 + 26180) - 28117) * 5) * -1) / 10);
    	a311 = a298[5];
    	a350 = a377;
    	a223 = a343[4];
    	a368 = a371;
    	a264 = a290[((a357 * a219) + -33)];
    	a143 = a176[(a357 - 5)];
    	a396 = (((((a396 % 43) - 27) + 13745) - 39631) - -25886);
    	a328 = a279[4];
    	a357 = 11;
    	a340 = ((((a340 % 15) + 38) - -21375) + -21387);
    	a331 = a380[5];
    	a268 = 32 ;
    	a206 = 32 ;
    	a28 = a60[(a271 + -7)];
    	a315 = a295;
    	a286 = ((((((a286 * 5) % 80) + 2) * 5) % 80) - -3);
    	a288 = a270;
    	a282 = 34 ;
    	a227 = 35 ;
    	a394 = 11;
    	a219 = 5;
    	a271 = 16;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1815\n");

    if((((((-36 < a125) && (168 >= a125)) && (a28 == a60[5] && (a223 == a343[1] && a357 == 9))) && a311 == a298[1]) && (((((-79 < a286) && (83 >= a286)) && (( cf==1  && input == inputs[6]) && a170 == 34)) && a219 == 4) && a282 == 32))) {
printf("POINT: 1816\n");
    	cf = 0;
printf("POINT: 1817\n");

    	if((a132 == 11 || a206 == 36)) {
printf("POINT: 1818\n");
    	a141 = (((((((a286 * a340) % 29) - -63) * 5) - 17177) % 29) + 70);
    	a156 = (a357 - 1);
    	a28 = a60[((a219 / a156) + 1)]; 
    	}else {
printf("POINT: 1820\n");
    	a32 = (a271 - -5);
    	a28 = a60[((a219 - a394) - -11)];
    	a264 = a290[(a32 - 16)];
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1821\n");

    if(((((((a331 == a380[1] && a170 == 34) && a311 == a298[1]) && (57 == a350[2])) && (15 == a368[3])) && a268 == 32) && (a28 == a60[5] && (((-72 < a396) && (16 >= a396)) && (((-36 < a125) && (168 >= a125)) && (input == inputs[13] &&  cf==1 )))))) {
printf("POINT: 1822\n");
    	cf = 0;
    	a155 = ((((((a286 * a329) + 12440) + 3943) / 5) % 54) + 136);
    	a56 = 32 ;
    	a28 = a60[(a357 - 3)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1823\n");

    if((((a206 == 32 && ((input == inputs[0] && ( cf==1  && ((-36 < a125) && (168 >= a125)))) && a271 == 11)) && a394 == 11) && (((((-72 < a396) && (16 >= a396)) && (((21 < a340) && (53 >= a340)) && a170 == 34)) && a28 == a60[5]) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 1824\n");
    	cf = 0;
    	a28 = a60[(a219 + -3)];
    	a86 = (a271 + -7);
    	a156 = (a394 - 1); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1825\n");

    if(((a219 == 4 && ((a328 == a279[1] && (((input == inputs[7] &&  cf==1 ) && a28 == a60[5]) && a394 == 11)) && a311 == a298[1])) && ((((-36 < a125) && (168 >= a125)) && (a170 == 34 && ((21 < a340) && (53 >= a340)))) && (37 == a315[2])))) {
printf("POINT: 1826\n");
    	cf = 0;
printf("POINT: 1827\n");

    	if((a20 == 32 && (!(a20 == 35) || (!(a282 == 34) && a115 == 3)))) {
printf("POINT: 1828\n");
    	a15 = 33 ;
    	a357 = 15;
    	a271 = 12;
    	a311 = a298[2];
    	a329 = (((((a329 * 5) % 83) + 88) + 25330) - 25331);
    	a206 = 32 ;
    	a28 = a60[((a219 - a394) - -7)];
    	a223 = a343[7];
    	a350 = a366;
    	a315 = a273;
    	a227 = 36 ;
    	a219 = 8;
    	a180 = a164[(a394 / a394)];
    	a340 = ((((a340 / 5) + 16391) * 10) / 9);
    	a288 = a270;
    	a268 = 34 ;
    	a328 = a279[6];
    	a396 = (((a396 - -26243) * 1) - -356);
    	a368 = a293;
    	a282 = 35 ;
    	a286 = ((((a286 % 80) - -2) - -2) + -1);
    	a331 = a380[7];
    	a394 = 16; 
    	}else {
printf("POINT: 1830\n");
    	a56 = 35 ;
    	a350 = a366;
    	a282 = 35 ;
    	a28 = a60[(a357 - 3)];
    	a155 = (((((a329 * a340) - 5338) * 2) % 54) - -167);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1831\n");

    if((((input == inputs[12] && (a268 == 32 && ((-72 < a396) && (16 >= a396)))) && a311 == a298[1]) && (a394 == 11 && ((((15 == a368[3]) && (( cf==1  && a28 == a60[5]) && a170 == 34)) && ((-36 < a125) && (168 >= a125))) && ((-156 < a329) && (3 >= a329)))))) {
printf("POINT: 1832\n");
    	cf = 0;
    	a268 = 32 ;
    	a396 = ((((a396 + 18894) + 6515) * 10) / 9);
    	a340 = (((a340 + 18614) * 1) + -18559);
    	a329 = (((((a329 - -16869) - 16708) - 1252) * -1) / 10);
    	a328 = a279[6];
    	a223 = a343[2];
    	a28 = a60[(a357 - 5)];
    	a350 = a377;
    	a264 = a290[(a394 - 7)];
    	a227 = 32 ;
    	a368 = a371;
    	a206 = 35 ;
    	a331 = a380[3];
    	a282 = 35 ;
    	a351 = 32 ;
    	a311 = a298[3];
    	a357 = 9;
    	a219 = 5;
    	a315 = a273;
    	a288 = a399;
    	a271 = 13;
    	a286 = ((((a286 / 5) + -9640) * 10) / 9);
    	a394 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1833\n");

    if((((((a331 == a380[1] && a170 == 34) && ((-36 < a125) && (168 >= a125))) && a219 == 4) && ((21 < a340) && (53 >= a340))) && (a268 == 32 && (((( cf==1  && a28 == a60[5]) && input == inputs[9]) && (37 == a315[2])) && a223 == a343[1])))) {
printf("POINT: 1834\n");
    	cf = 0;
printf("POINT: 1835\n");

    	if((92 < a141 || a286 <=  -79)) {
printf("POINT: 1836\n");
    	a156 = (a357 + 1);
    	a28 = a60[(a271 + -10)];
    	a86 = ((a156 / a394) - -4); 
    	}else {
printf("POINT: 1838\n");
    	a125 = (((((a125 * a329) % 20) + 189) + -28502) + 28503);
    	a100 = a167;
    	}printf("%d\n", 24);  
    } 
}
 void calculate_outputm34(int input) {
printf("POINT: 1839\n");

    if(((a227 == 32 && (a219 == 4 && (a170 == 33 &&  cf==1 ))) && (((-79 < a286) && (83 >= a286)) && ((a311 == a298[1] && ((21 < a340) && (53 >= a340))) && a394 == 11)))) {
printf("POINT: 1840\n");
    	calculate_outputm182(input);
    } 
printf("POINT: 1841\n");

    if(((((-72 < a396) && (16 >= a396)) && (( cf==1  && a170 == 34) && ((-156 < a329) && (3 >= a329)))) && (((-79 < a286) && (83 >= a286)) && (a328 == a279[1] && (a268 == 32 && (15 == a368[3])))))) {
printf("POINT: 1842\n");
    	calculate_outputm183(input);
    } 
}
 void calculate_outputm186(int input) {
printf("POINT: 1843\n");

    if(((((-156 < a329) && (3 >= a329)) && a311 == a298[1]) && (a394 == 11 && ((a357 == 9 && ((a154 == 7 && (input == inputs[6] && (a28 == a60[5] && (210 < a125 &&  cf==1 )))) && a282 == 32)) && a271 == 11)))) {
printf("POINT: 1844\n");
    	cf = 0;
    	a396 = (((((a396 - -14724) * 2) + 432) % 43) - 61);
    	a340 = ((((a340 * 10) / 1) + -29276) + 33973);
    	a223 = a343[6];
    	a180 = a164[(a154 - 3)];
    	a311 = a298[6];
    	a350 = a366;
    	a219 = 9;
    	a368 = a293;
    	a331 = a380[4];
    	a282 = 32 ;
    	a227 = 35 ;
    	a315 = a295;
    	a93 = ((a271 - a271) + 9);
    	a288 = a270;
    	a328 = a279[2];
    	a271 = 12;
    	a28 = a60[((a154 - a357) - -2)];
    	a394 = 11;
    	a329 = (((((a329 + 3682) / 5) + -9326) * -1) / 10);
    	a286 = (((a286 - -15256) * 1) + 1811);
    	a206 = 36 ;
    	a268 = 32 ;
    	a357 = 15; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1845\n");

    if(((((-72 < a396) && (16 >= a396)) && (((210 < a125 && ((a154 == 7 && (a223 == a343[1] && a331 == a380[1])) && a357 == 9)) && (15 == a368[3])) && a268 == 32)) && (( cf==1  && input == inputs[2]) && a28 == a60[5]))) {
printf("POINT: 1846\n");
    	cf = 0;
    	a155 = ((((a286 * a286) / 5) - 20549) - -18284);
    	a21 = 32 ;
    	a28 = a60[(a394 - 5)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1847\n");

    if((((15 == a368[3]) && ((a219 == 4 && (37 == a315[2])) && ((-156 < a329) && (3 >= a329)))) && (a223 == a343[1] && (input == inputs[14] && ((a28 == a60[5] && (210 < a125 && ( cf==1  && a154 == 7))) && (57 == a350[2])))))) {
printf("POINT: 1848\n");
    	cf = 0;
printf("POINT: 1849\n");

    	if((32 == a315[3])) {
printf("POINT: 1850\n");
    	a156 = (a357 + 3);
    	a223 = a343[1];
    	a157 = a64[((a154 + a394) + -14)];
    	a28 = a60[(a357 - 8)]; 
    	}else {
printf("POINT: 1852\n");
    	a350 = a366;
    	a288 = a399;
    	a223 = a343[2];
    	a156 = ((a271 - a357) + 10);
    	a157 = a64[(a394 + -11)];
    	a28 = a60[(a271 - 10)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1853\n");

    if(((((-72 < a396) && (16 >= a396)) && ((( cf==1  && a154 == 7) && input == inputs[8]) && (15 == a368[3]))) && (((((210 < a125 && a223 == a343[1]) && a206 == 32) && a28 == a60[5]) && ((-156 < a329) && (3 >= a329))) && (37 == a315[2])))) {
printf("POINT: 1854\n");
    	cf = 0;
    	a396 = ((((a396 + -7648) / 5) * -2) / 10);
    	a223 = a343[3];
    	a328 = a279[1];
    	a143 = a176[(a357 + -2)];
    	a219 = 4;
    	a329 = (((a329 + -22725) + -5923) + 28812);
    	a271 = 15;
    	a350 = a366;
    	a340 = (((a340 - -28246) + 1143) - -121);
    	a311 = a298[2];
    	a368 = a293;
    	a331 = a380[7];
    	a282 = 36 ;
    	a227 = 32 ;
    	a206 = 36 ;
    	a268 = 34 ;
    	a28 = a60[(a394 - 7)];
    	a394 = 16;
    	a315 = a273;
    	a264 = a290[(a154 + -4)];
    	a286 = (((((a286 - -174) * 10) / 9) * 9) / 10);
    	a357 = 9; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1855\n");

    if((((a311 == a298[1] && (input == inputs[5] && ((a154 == 7 && (a331 == a380[1] && (((-79 < a286) && (83 >= a286)) && ((21 < a340) && (53 >= a340))))) && a219 == 4))) && ((-156 < a329) && (3 >= a329))) && (210 < a125 && (a28 == a60[5] &&  cf==1 )))) {
printf("POINT: 1856\n");
    	cf = 0;
    	a28 = a60[(a271 - 4)];
    	a99 = (a154 + 4);
    	a93 = ((a271 - a99) - -16); 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1857\n");

    if(((((a394 == 11 && ((a282 == 32 && ((a28 == a60[5] &&  cf==1 ) && 210 < a125)) && a154 == 7)) && a206 == 32) && ((-156 < a329) && (3 >= a329))) && ((a268 == 32 && a223 == a343[1]) && input == inputs[0]))) {
printf("POINT: 1858\n");
    	cf = 0;
    	a282 = 32 ;
    	a206 = 35 ;
    	a170 = 33 ;
    	a331 = a380[6];
    	a125 = (((((((a125 * a396) % 14999) / 5) / 5) + 4632) % 101) - 15);
    	a396 = (((a396 - 15234) + -8907) - -42364); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1859\n");

    if((((((((-72 < a396) && (16 >= a396)) && ((a28 == a60[5] &&  cf==1 ) && a154 == 7)) && (21 == a288[1])) && a206 == 32) && a219 == 4) && (((a328 == a279[1] && (15 == a368[3])) && 210 < a125) && input == inputs[11]))) {
printf("POINT: 1860\n");
    	cf = 0;
    	a21 = 35 ;
    	a264 = a290[(a394 + -10)];
    	a28 = a60[(a154 + -3)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1861\n");

    if((((a311 == a298[1] && (a227 == 32 && (a223 == a343[1] && ((input == inputs[4] &&  cf==1 ) && 210 < a125)))) && a331 == a380[1]) && (((a154 == 7 && a394 == 11) && ((-156 < a329) && (3 >= a329))) && a28 == a60[5]))) {
printf("POINT: 1862\n");
    	cf = 0;
    	a28 = a60[(a154 - 3)];
    	a264 = a290[(a154 + -1)];
    	a90 = a8; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1863\n");

    if(((a331 == a380[1] && (a227 == 32 && a223 == a343[1])) && ((a357 == 9 && (a28 == a60[5] && (a154 == 7 && ((( cf==1  && input == inputs[10]) && 210 < a125) && ((21 < a340) && (53 >= a340)))))) && a311 == a298[1]))) {
printf("POINT: 1864\n");
    	cf = 0;
    	a28 = a60[((a357 / a357) - -3)];
    	a264 = a290[(a219 + -1)];
    	a143 = a176[(a219 + 2)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1865\n");

    if((((a227 == 32 && (a331 == a380[1] && (37 == a315[2]))) && ((-72 < a396) && (16 >= a396))) && ((a282 == 32 && ((210 < a125 && (a154 == 7 && (a28 == a60[5] &&  cf==1 ))) && input == inputs[7])) && a394 == 11))) {
printf("POINT: 1866\n");
    	cf = 0;
    	a154 = (a271 - -1); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1867\n");

    if(((((a357 == 9 && ((input == inputs[3] &&  cf==1 ) && 210 < a125)) && a154 == 7) && a268 == 32) && (a28 == a60[5] && ((21 == a288[1]) && ((37 == a315[2]) && (((-156 < a329) && (3 >= a329)) && (15 == a368[3]))))))) {
printf("POINT: 1868\n");
    	cf = 0;
printf("POINT: 1869\n");

    	if((!(a328 == 8) || a115 == a185[1])) {
printf("POINT: 1870\n");
    	a28 = a60[(a357 - 8)];
    	a223 = a343[1];
    	a156 = a394;
    	a86 = ((a394 - a156) - -5); 
    	}else {
printf("POINT: 1872\n");
    	a328 = a279[5];
    	a350 = a366;
    	a357 = 13;
    	a111 = a195[(a394 + -10)];
    	a271 = 14;
    	a368 = a397;
    	a311 = a298[1];
    	a56 = 34 ;
    	a227 = 34 ;
    	a331 = a380[7];
    	a396 = (((((a396 * 5) * 5) / 5) % 43) - 26);
    	a206 = 33 ;
    	a28 = a60[(a219 - 2)];
    	a340 = ((((a340 + 20702) / 5) / 5) - 789);
    	a394 = 16;
    	a286 = (((((a286 % 80) - -3) * 5) % 80) - -2);
    	a288 = a270;
    	a223 = a343[5];
    	a268 = 33 ;
    	a282 = 35 ;
    	a315 = a321;
    	a329 = ((((a329 + 22380) * -1) / 10) - 18973);
    	a219 = 6;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1873\n");

    if(((a331 == a380[1] && (((a223 == a343[1] && ((((a154 == 7 && (210 < a125 &&  cf==1 )) && input == inputs[1]) && (37 == a315[2])) && a28 == a60[5])) && (21 == a288[1])) && (57 == a350[2]))) && ((-72 < a396) && (16 >= a396)))) {
printf("POINT: 1874\n");
    	a78 -= (a78 - 20) < a78 ? 2 : 0;
printf("POINT: 1876\n");
    	cf = 0;
printf("POINT: 1877\n");

    	if((((48 < a67) && (76 >= a67)) || (a182 == 11 && a132 == 15))) {
printf("POINT: 1878\n");
    	a182 = a59[a219];
    	a28 = a60[(a394 + -11)];
    	a180 = a164[((a219 * a219) + -10)]; 
    	}else {
printf("POINT: 1880\n");
    	a368 = a371;
    	a350 = a366;
    	a282 = 35 ;
    	a93 = ((a394 - a271) - -15);
    	a67 = ((((a329 * a286) / 5) * 5) + -16916);
    	a227 = 36 ;
    	a315 = a295;
    	a271 = 12;
    	a288 = a399;
    	a331 = a380[4];
    	a328 = a279[4];
    	a206 = 34 ;
    	a268 = 32 ;
    	a311 = a298[4];
    	a286 = (((((a286 - -164) - 1) * 5) % 103) + 120);
    	a394 = 11;
    	a28 = a60[(a357 - 2)];
    	a340 = ((((a340 - 16550) + -12448) % 15) - -41);
    	a357 = 11;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1881\n");

    if((((((input == inputs[12] && ((a28 == a60[5] &&  cf==1 ) && a154 == 7)) && 210 < a125) && (37 == a315[2])) && a328 == a279[1]) && (a223 == a343[1] && (((21 == a288[1]) && ((-79 < a286) && (83 >= a286))) && a271 == 11)))) {
printf("POINT: 1882\n");
    	cf = 0;
    	a206 = 36 ;
    	a394 = 15;
    	a329 = (((a329 + 3823) / 5) + 14376);
    	a315 = a273;
    	a180 = a164[(a219 + -2)];
    	a282 = 36 ;
    	a223 = a343[1];
    	a328 = a279[6];
    	a268 = 32 ;
    	a288 = a399;
    	a28 = a60[((a154 * a154) - 49)];
    	a350 = a377;
    	a331 = a380[4];
    	a368 = a293;
    	a227 = 32 ;
    	a181 = a98;
    	a219 = 4; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1883\n");

    if((((21 == a288[1]) && ((15 == a368[3]) && (((((-72 < a396) && (16 >= a396)) && a28 == a60[5]) && a311 == a298[1]) && input == inputs[13]))) && ((a227 == 32 && (a154 == 7 && ( cf==1  && 210 < a125))) && a328 == a279[1]))) {
printf("POINT: 1884\n");
    	cf = 0;
printf("POINT: 1885\n");

    	if(a115 == 7) {
printf("POINT: 1886\n");
    	a28 = a60[((a219 + a394) + -8)];
    	a396 = ((((a396 + 5240) / 5) - 4889) + 26309);
    	a357 = 10;
    	a268 = 32 ;
    	a227 = 34 ;
    	a328 = a279[1];
    	a394 = 13;
    	a288 = a399;
    	a311 = a298[6];
    	a286 = ((((a286 + 22513) - 41530) - 10570) - -29763);
    	a93 = ((a219 / a219) + 8);
    	a331 = a380[3];
    	a315 = a295;
    	a206 = 34 ;
    	a329 = (((a329 / 5) + 67) - -56);
    	a271 = 11;
    	a368 = a293;
    	a219 = 5;
    	a282 = 34 ;
    	a223 = a343[2];
    	a340 = (((a340 + 27990) - -1801) * 1);
    	a350 = a377;
    	a33 = a70; 
    	}else {
printf("POINT: 1888\n");
    	a350 = a336;
    	a282 = 32 ;
    	a271 = 11;
    	a111 = a195[(a219 - -3)];
    	a268 = 34 ;
    	a286 = ((((((a286 % 80) - -3) * 5) - -28023) % 80) + 4);
    	a206 = 32 ;
    	a396 = ((((a396 * 5) % 43) - 27) + -1);
    	a223 = a343[6];
    	a357 = 15;
    	a311 = a298[1];
    	a56 = 34 ;
    	a315 = a295;
    	a329 = ((((a329 - -3689) / 5) / 5) + -234);
    	a328 = a279[1];
    	a288 = a297;
    	a331 = a380[3];
    	a227 = 32 ;
    	a28 = a60[(a219 - 2)];
    	a394 = 15;
    	a368 = a397;
    	a340 = (((a340 + -29104) - 287) * 1);
    	a219 = 4;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1889\n");

    if(((a28 == a60[5] && (a271 == 11 && ((a331 == a380[1] && ((a154 == 7 &&  cf==1 ) && input == inputs[9])) && a357 == 9))) && (((a219 == 4 && (57 == a350[2])) && 210 < a125) && a394 == 11))) {
printf("POINT: 1890\n");
    	cf = 0;
    	a111 = a195[(a154 - 3)];
    	a56 = 34 ;
    	a28 = a60[((a154 / a154) - -1)]; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm187(int input) {
printf("POINT: 1891\n");

    if(((a206 == 32 && (a219 == 4 && (((a357 == 9 && a154 == 8) && a271 == 11) && ((-79 < a286) && (83 >= a286))))) && (a282 == 32 && ((( cf==1  && 210 < a125) && a28 == a60[5]) && input == inputs[7])))) {
printf("POINT: 1892\n");
    	cf = 0;
    	a219 = (a154 + -5);
    	a223 = a343[(a271 + -11)];
    	a328 = a279[(a271 - 11)];
    	a264 = a290[(a271 + -4)];
    	a268 = 33 ;
    	a28 = a60[((a357 + a394) + -16)];
    	a227 = 33 ;
    	a357 = ((a154 / a154) + 7);
    	a311 = a298[((a394 * a271) + -121)];
    	a340 = ((((a340 * a286) + -25328) * 1) / 5);
    	a331 = a380[((a271 + a219) + -14)];
    	a132 = a91[(a154 - 2)];
    	a368 = a397;
    	a350 = a336;
    	a271 = (a219 + 7); 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1893\n");

    if((((a227 == 32 && (57 == a350[2])) && a328 == a279[1]) && ((15 == a368[3]) && ((a154 == 8 && (a331 == a380[1] && ((210 < a125 && ( cf==1  && a28 == a60[5])) && input == inputs[6]))) && a357 == 9)))) {
printf("POINT: 1894\n");
    	cf = 0;
    	a264 = a290[((a394 / a394) - 1)];
    	a357 = (a271 - 3);
    	a328 = a279[(a357 - 8)];
    	a206 = 33 ;
    	a311 = a298[(a394 - 11)];
    	a32 = (a219 - -13);
    	a350 = a336;
    	a219 = (a271 + -8);
    	a286 = ((((a286 * a340) - 10428) - 5235) / 5);
    	a28 = a60[((a219 * a154) + -20)];
    	a223 = a343[(a357 + -8)];
    	a315 = a321;
    	a227 = 33 ;
    	a268 = 33 ;
    	a282 = 33 ;
    	a368 = a397;
    	a394 = (a271 - 1);
    	a271 = (a357 - -2);
    	a331 = a380[((a357 - a357) + 2)];
    	a340 = (((((a340 * a396) % 14999) + -299) + -11479) + -2154); 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm189(int input) {
printf("POINT: 1895\n");

    if((((a271 == 11 && ((-79 < a286) && (83 >= a286))) && (57 == a350[2])) && ((((input == inputs[13] && (a282 == 32 && (210 < a125 && (a154 == 11 &&  cf==1 )))) && a28 == a60[5]) && a357 == 9) && (15 == a368[3])))) {
printf("POINT: 1896\n");
    	cf = 0;
    	a328 = a279[((a357 / a357) + -1)];
    	a15 = 32 ;
    	a219 = (a357 + -6);
    	a329 = (((((((a125 * a286) % 14999) % 14922) - 15077) / 5) + 23116) + -42427);
    	a368 = a397;
    	a340 = (((((a340 * a329) % 14999) + -2761) - -1577) / 5);
    	a227 = 33 ;
    	a180 = a164[(a394 / a394)];
    	a315 = a321;
    	a206 = 33 ;
    	a396 = ((((a396 * a286) - 20646) * 1) * 1);
    	a28 = a60[(a394 + -11)];
    	a288 = a297;
    	a350 = a336;
    	a286 = ((((((a286 * a125) % 14999) * 2) + 3) % 14960) - 15038);
    	a331 = a380[(a271 - 11)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1897\n");

    if((((210 < a125 && (a328 == a279[1] && a311 == a298[1])) && a357 == 9) && ((a394 == 11 && (a206 == 32 && (((a154 == 11 &&  cf==1 ) && a28 == a60[5]) && input == inputs[10]))) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 1898\n");
    	a178 += (a178 + 20) > a178 ? 4 : 0;
printf("POINT: 1900\n");
    	a40 -= (a40 - 20) < a40 ? 4 : 0;
printf("POINT: 1902\n");
    	a50 += (a50 + 20) > a50 ? 2 : 0;
printf("POINT: 1904\n");
    	a57 -= (a57 - 20) < a57 ? 2 : 0;
printf("POINT: 1906\n");
    	cf = 0;
    	a156 = (a219 - -4);
    	a141 = ((((((a396 * a125) % 14999) % 14953) - -15045) * 1) * 1);
    	a223 = a343[(a271 - 9)];
    	a350 = a377;
    	a28 = a60[((a154 + a271) + -21)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1907\n");

    if((((a394 == 11 && ((((a154 == 11 && ((210 < a125 &&  cf==1 ) && a28 == a60[5])) && ((-79 < a286) && (83 >= a286))) && a227 == 32) && a206 == 32)) && (a282 == 32 && (input == inputs[11] && (21 == a288[1])))) && a88 == 4)) {
printf("POINT: 1908\n");
    	cf = 0;
    	a180 = a164[(a394 + -11)];
    	a329 = (((((a329 * a396) - 15561) * 10) / 9) - 7208);
    	a340 = (((((a340 * a125) % 14999) - 17158) + -6704) + 6051);
    	a328 = a279[(a154 - 11)];
    	a315 = a321;
    	a268 = 33 ;
    	a331 = a380[(a394 - 11)];
    	a112 = (a357 - -4);
    	a28 = a60[(a219 - 4)];
    	a227 = 33 ;
    	a350 = a336;
    	a368 = a397;
    	a311 = a298[(a394 - 11)];
    	a394 = (a271 + -1);
    	a219 = (a154 + -8); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1909\n");

    if((((((-72 < a396) && (16 >= a396)) && (a357 == 9 && ((210 < a125 && ((input == inputs[5] && ( cf==1  && a28 == a60[5])) && a154 == 11)) && ((21 < a340) && (53 >= a340))))) && (21 == a288[1])) && ((57 == a350[2]) && (37 == a315[2])))) {
printf("POINT: 1910\n");
    	cf = 0;
    	a21 = 32 ;
    	a155 = ((((a396 * a340) * 5) - 6801) + -503);
    	a28 = a60[((a271 - a394) - -6)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1911\n");

    if(((((a223 == a343[1] && (210 < a125 && (a28 == a60[5] && ((a154 == 11 && ( cf==1  && input == inputs[8])) && a394 == 11)))) && a331 == a380[1]) && ((a282 == 32 && (37 == a315[2])) && a219 == 4)) && a113 == 9)) {
printf("POINT: 1912\n");
    	cf = 0;
    	a396 = (((((a396 * a329) - 23102) * 10) / 9) - 320);
    	a227 = 33 ;
    	a329 = (((((a340 * a340) * 10) / -9) - 10229) + -8539);
    	a97 = ((((((a340 * a125) % 14999) % 82) - 64) - -4) / 5);
    	a282 = 33 ;
    	a28 = a60[(a219 - 4)];
    	a286 = ((((((a286 * a396) % 14999) - -14942) % 14960) - 15038) * 1);
    	a271 = (a154 - 1);
    	a219 = 3;
    	a368 = a397;
    	a180 = a164[((a394 * a154) + -118)];
    	a288 = a297;
    	a223 = a343[0];
    	a331 = a380[(a357 - 9)];
    	a315 = a321;
    	a357 = 8;
    	a268 = 33 ;
    	a340 = (((((a340 * a396) % 14999) - -7326) + -17809) + -2872); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1913\n");

    if(((((a311 == a298[1] && ((input == inputs[2] && ((210 < a125 &&  cf==1 ) && a154 == 11)) && a28 == a60[5])) && ((-156 < a329) && (3 >= a329))) && (a268 == 32 && ((a206 == 32 && (57 == a350[2])) && a271 == 11))) && a120 <= -15)) {
printf("POINT: 1914\n");
    	cf = 0;
    	a219 = ((a271 / a271) - -2);
    	a282 = 33 ;
    	a350 = a336;
    	a340 = (((((a340 * a125) % 14999) + -19538) * 1) * 1);
    	a93 = (a394 + 1);
    	a223 = a343[(a154 - a271)];
    	a331 = a380[(a271 + -11)];
    	a130 = a29[(a271 + -10)];
    	a28 = a60[((a357 * a271) + -92)];
    	a227 = 33 ;
    	a311 = a298[(a394 - 11)];
    	a357 = (a154 + -3);
    	a206 = 33 ;
    	a328 = a279[(a154 - 11)];
    	a329 = ((((((a329 * a286) * 2) * 1) - -5293) % 14922) - 15077); 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm192(int input) {
printf("POINT: 1915\n");

    if(((210 < a125 && (((37 == a315[2]) && ((-79 < a286) && (83 >= a286))) && a311 == a298[1])) && ((input == inputs[10] && (((a154 == 14 && (a28 == a60[5] &&  cf==1 )) && (21 == a288[1])) && a282 == 32)) && a219 == 4))) {
printf("POINT: 1916\n");
    	cf = 0;
printf("POINT: 1917\n");

    	if((!(59 == a181[3]) || ((((75 == a0[3]) || a311 == 3) || a157 == 13) || a182 == a59[1]))) {
printf("POINT: 1918\n");
    	a350 = a366;
    	a331 = a380[1];
    	a268 = 34 ;
    	a28 = a60[(a271 - 7)];
    	a227 = 36 ;
    	a219 = 7;
    	a396 = (((a396 / 5) + 111) + 107);
    	a286 = ((((a286 % 80) + 2) - 1) - 0);
    	a206 = 36 ;
    	a328 = a279[6];
    	a223 = a343[4];
    	a315 = a273;
    	a264 = a290[((a394 / a154) + 2)];
    	a144 = 36 ;
    	a271 = 16; 
    	}else {
printf("POINT: 1920\n");
    	a56 = 36 ;
    	a28 = a60[(a357 + -7)];
    	a129 = a108[((a154 / a394) - -4)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1921\n");

    if(((a394 == 11 && (a28 == a60[5] && ((a219 == 4 && a227 == 32) && a328 == a279[1]))) && ((57 == a350[2]) && ((input == inputs[9] && (210 < a125 && (a154 == 14 &&  cf==1 ))) && a223 == a343[1])))) {
printf("POINT: 1922\n");
    	cf = 0;
    	a351 = 35 ;
    	a264 = a290[((a271 / a271) + 3)];
    	a28 = a60[((a357 * a271) + -95)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1923\n");

    if((((57 == a350[2]) && ((a227 == 32 && ((-156 < a329) && (3 >= a329))) && (21 == a288[1]))) && (a357 == 9 && (((21 < a340) && (53 >= a340)) && ((a154 == 14 && (a28 == a60[5] && (input == inputs[7] &&  cf==1 ))) && 210 < a125))))) {
printf("POINT: 1924\n");
    	cf = 0;
printf("POINT: 1925\n");

    	if(((a206 == 33 && !(108 == a188[3])) && !(a180 == a164[3]))) {
printf("POINT: 1926\n");
    	a93 = (a271 + 2);
    	a331 = a380[1];
    	a311 = a298[7];
    	a340 = ((((a340 - -34) / 5) * 10) / 2);
    	a227 = 32 ;
    	a223 = a343[4];
    	a328 = a279[5];
    	a315 = a295;
    	a329 = ((((a329 - -16777) + 7566) % 79) + -129);
    	a206 = 35 ;
    	a357 = 9;
    	a282 = 35 ;
    	a263 = 35 ;
    	a268 = 35 ;
    	a28 = a60[(a394 - 4)];
    	a350 = a377;
    	a394 = 15; 
    	}else {
printf("POINT: 1928\n");
    	a227 = 32 ;
    	a288 = a399;
    	a93 = a357;
    	a33 = a10;
    	a329 = (((a329 + -29545) * 1) - -29704);
    	a328 = a279[7];
    	a311 = a298[5];
    	a206 = 35 ;
    	a271 = 16;
    	a286 = ((((a286 + 8136) / 5) * 10) / 9);
    	a28 = a60[(a154 - 7)];
    	a331 = a380[4];
    	a368 = a371;
    	a340 = ((((a340 + 46) + -12) - -5557) - 5554);
    	a282 = 32 ;
    	a357 = 9;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 1929\n");

    if((((a328 == a279[1] && ((input == inputs[14] && a311 == a298[1]) && 210 < a125)) && a394 == 11) && (((-156 < a329) && (3 >= a329)) && (((( cf==1  && a154 == 14) && a28 == a60[5]) && a268 == 32) && a219 == 4)))) {
printf("POINT: 1930\n");
    	cf = 0;
    	a32 = (a394 - -6);
    	a223 = a343[3];
    	a331 = a380[0];
    	a264 = a290[((a32 - a154) + -3)];
    	a28 = a60[(a394 - 7)];
    	a219 = 7;
    	a311 = a298[2];
    	a268 = 32 ;
    	a286 = ((((a286 - -4141) - 10182) * 10) / -9);
    	a315 = a295;
    	a368 = a293;
    	a329 = (((((a329 / 5) + -18254) * 1) * -1) / 10);
    	a206 = 35 ;
    	a340 = ((((a340 % 15) - -29) + 10006) - 10002);
    	a282 = 36 ;
    	a227 = 32 ;
    	a350 = a366;
    	a288 = a399;
    	a396 = (((((a396 / 5) - -70) / 5) * 99) / 10);
    	a357 = 9;
    	a328 = a279[4];
    	a271 = 13;
    	a394 = 11; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1931\n");

    if((((21 == a288[1]) && ((210 < a125 &&  cf==1 ) && input == inputs[8])) && (a271 == 11 && (((-79 < a286) && (83 >= a286)) && (((a28 == a60[5] && (((-156 < a329) && (3 >= a329)) && a154 == 14)) && (37 == a315[2])) && ((-72 < a396) && (16 >= a396))))))) {
printf("POINT: 1932\n");
    	cf = 0;
    	a180 = a164[((a154 + a271) - 18)];
    	a282 = 34 ;
    	a315 = a273;
    	a28 = a60[(a357 + -9)];
    	a396 = (((a396 + 118) + 62) / 5);
    	a271 = 16;
    	a394 = 17;
    	a163 = (((((((a286 * a329) % 16) + 296) + 3) * 5) % 16) - -296);
    	a206 = 36 ;
    	a331 = a380[1];
    	a223 = a343[4];
    	a288 = a399;
    	a311 = a298[5];
    	a227 = 32 ;
    	a268 = 34 ;
    	a368 = a293;
    	a329 = (((a329 + 10115) * 2) + 531);
    	a328 = a279[2];
    	a350 = a377;
    	a219 = 5;
    	a340 = (((a340 + 11895) - -14721) * 1);
    	a357 = 10;
    	a286 = ((((a286 * 5) * 5) % 103) - -188); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1933\n");

    if(((a328 == a279[1] && (((-72 < a396) && (16 >= a396)) && (((210 < a125 && (a28 == a60[5] &&  cf==1 )) && a227 == 32) && a268 == 32))) && (input == inputs[0] && ((a154 == 14 && a219 == 4) && a311 == a298[1])))) {
printf("POINT: 1934\n");
    	cf = 0;
    	a156 = (a154 + -5);
    	a28 = a60[(a156 - 8)];
    	a131 = ((a156 - a219) + 5); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1935\n");

    if(((a271 == 11 && (((21 < a340) && (53 >= a340)) && (a28 == a60[5] && (a154 == 14 &&  cf==1 )))) && (a227 == 32 && ((input == inputs[5] && (((-72 < a396) && (16 >= a396)) && (a328 == a279[1] && 210 < a125))) && a394 == 11)))) {
printf("POINT: 1936\n");
    	cf = 0;
    	a136 = (a219 - -4);
    	a188 = a43;
    	a28 = a60[((a136 * a394) - 85)]; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1937\n");

    if((((21 == a288[1]) && (a154 == 14 && (a28 == a60[5] && (((-156 < a329) && (3 >= a329)) && (57 == a350[2]))))) && ((((-72 < a396) && (16 >= a396)) && ((( cf==1  && 210 < a125) && input == inputs[6]) && a282 == 32)) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 1938\n");
    	cf = 0;
    	a223 = a343[7];
    	a264 = a290[(a394 + -9)];
    	a28 = a60[((a219 + a394) - 11)];
    	a331 = a380[7];
    	a268 = 34 ;
    	a350 = a366;
    	a286 = (((a286 - -27572) / 5) + -5573);
    	a206 = 36 ;
    	a315 = a273;
    	a144 = 36 ;
    	a328 = a279[3];
    	a227 = 36 ;
    	a396 = (((((a396 - -17367) % 43) - 48) * 9) / 10);
    	a271 = 15;
    	a219 = 5; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1939\n");

    if((((37 == a315[2]) && (((a28 == a60[5] && (((210 < a125 && ( cf==1  && a154 == 14)) && a219 == 4) && input == inputs[12])) && (57 == a350[2])) && ((-156 < a329) && (3 >= a329)))) && ((15 == a368[3]) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 1940\n");
    	cf = 0;
    	a268 = 34 ;
    	a394 = 17;
    	a331 = a380[2];
    	a368 = a293;
    	a328 = a279[6];
    	a329 = ((((a329 - -167) * 5) % 83) + 80);
    	a315 = a273;
    	a282 = 35 ;
    	a350 = a366;
    	a28 = a60[(a219 - 4)];
    	a206 = 35 ;
    	a288 = a399;
    	a180 = a164[(a357 + -7)];
    	a181 = a98;
    	a223 = a343[3];
    	a227 = 32 ;
    	a219 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1941\n");

    if((((((15 == a368[3]) && (a154 == 14 && ((-79 < a286) && (83 >= a286)))) && (57 == a350[2])) && a357 == 9) && ((37 == a315[2]) && (input == inputs[13] && (a331 == a380[1] && ((a28 == a60[5] &&  cf==1 ) && 210 < a125)))))) {
printf("POINT: 1942\n");
    	cf = 0;
printf("POINT: 1943\n");

    	if((((a282 == 35 && a157 == 12) || !(a28 == a60[2])) || a75 == 32)) {
printf("POINT: 1944\n");
    	a156 = (a394 - -1);
    	a157 = a64[(a357 - 4)];
    	a28 = a60[(a357 - 8)]; 
    	}else {
printf("POINT: 1946\n");
    	a121 = 33 ;
    	a28 = a60[(a219 - 3)];
    	a156 = a154;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 1947\n");

    if(((((a268 == 32 && ((input == inputs[11] && (a28 == a60[5] &&  cf==1 )) && a206 == 32)) && (15 == a368[3])) && a271 == 11) && ((a154 == 14 && (210 < a125 && a282 == 32)) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 1948\n");
    	cf = 0;
printf("POINT: 1949\n");

    	if((((a15 == 35 || (!(a111 == 8) && a154 == 9)) && a131 == 6) || !(a15 == 35))) {
printf("POINT: 1950\n");
    	a331 = a380[2];
    	a223 = a343[2];
    	a271 = 15;
    	a340 = (((a340 + 29333) - -191) / 5);
    	a311 = a298[3];
    	a227 = 36 ;
    	a350 = a377;
    	a97 = (((((((a329 * a125) % 14999) + -11513) + 3607) - 5460) % 14880) - -15119);
    	a368 = a293;
    	a282 = 34 ;
    	a268 = 36 ;
    	a328 = a279[7];
    	a357 = 15;
    	a315 = a295;
    	a180 = a164[(a394 + -8)];
    	a288 = a399;
    	a396 = ((((a396 % 43) + -26) / 5) / 5);
    	a206 = 35 ;
    	a329 = ((((a329 * 5) + 2414) % 79) + -116);
    	a28 = a60[(a154 + -14)];
    	a286 = (((((a286 % 80) - -2) * 5) % 80) + 2);
    	a219 = 4;
    	a394 = 16; 
    	}else {
printf("POINT: 1952\n");
    	a328 = a279[6];
    	a350 = a366;
    	a396 = ((((a396 - -18075) * 10) / 9) + 5149);
    	a329 = (((a329 - -24322) * 1) * 1);
    	a286 = (((((a286 % 80) - -1) - -3) + 25931) + -25932);
    	a288 = a399;
    	a282 = 35 ;
    	a227 = 36 ;
    	a93 = (a357 + 3);
    	a368 = a371;
    	a340 = (((a340 + 2208) * 5) + 3277);
    	a357 = 14;
    	a223 = a343[7];
    	a130 = a29[((a394 * a271) + -115)];
    	a268 = 34 ;
    	a271 = 15;
    	a315 = a295;
    	a206 = 34 ;
    	a331 = a380[5];
    	a311 = a298[7];
    	a28 = a60[(a219 - -3)];
    	a394 = 15;
    	a219 = 8;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1953\n");

    if(((( cf==1  && a28 == a60[5]) && 210 < a125) && (((((15 == a368[3]) && (input == inputs[4] && (a331 == a380[1] && (a154 == 14 && a223 == a343[1])))) && a271 == 11) && (21 == a288[1])) && (57 == a350[2])))) {
printf("POINT: 1954\n");
    	a1 -= (a1 - 20) < a1 ? 4 : 0;
printf("POINT: 1956\n");
    	cf = 0;
    	a112 = (a219 - -10);
    	a28 = a60[(a154 - 14)];
    	a180 = a164[((a112 - a394) - 3)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1957\n");

    if((((a154 == 14 && (a28 == a60[5] && a282 == 32)) && a357 == 9) && (a394 == 11 && ((((37 == a315[2]) && ((210 < a125 &&  cf==1 ) && input == inputs[3])) && (15 == a368[3])) && a311 == a298[1])))) {
printf("POINT: 1958\n");
    	a88 += (a88 + 20) > a88 ? 1 : 0;
printf("POINT: 1960\n");
    	a57 -= (a57 - 20) < a57 ? 4 : 0;
printf("POINT: 1962\n");
    	cf = 0;
    	a340 = ((((a340 / 5) / 5) / 5) - -39);
    	a396 = (((a396 + 27858) * 1) / 5);
    	a264 = a290[(a154 - 14)];
    	a28 = a60[(a394 - 7)];
    	a357 = 12;
    	a328 = a279[4];
    	a268 = 32 ;
    	a271 = 16;
    	a223 = a343[3];
    	a227 = 36 ;
    	a368 = a371;
    	a394 = 11;
    	a286 = ((((a286 % 80) - -2) - -29845) + -29845);
    	a206 = 32 ;
    	a32 = (a219 + 13);
    	a350 = a366;
    	a315 = a295;
    	a331 = a380[1];
    	a288 = a270;
    	a329 = ((((((a329 % 79) - 76) + -6834) * 4) % 79) + 2);
    	a311 = a298[6];
    	a282 = 32 ;
    	a219 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1963\n");

    if(((a311 == a298[1] && (a331 == a380[1] && (a154 == 14 && (a219 == 4 && ((210 < a125 && a328 == a279[1]) && a282 == 32))))) && (a268 == 32 && (a28 == a60[5] && (input == inputs[2] &&  cf==1 ))))) {
printf("POINT: 1964\n");
    	cf = 0;
    	a350 = a366;
    	a141 = ((((((((a396 * a125) % 14999) % 14953) - -15045) / 5) - 26166) * -1) / 10);
    	a223 = a343[3];
    	a28 = a60[((a394 - a271) + 1)];
    	a156 = ((a357 + a394) + -12); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1965\n");

    if((((a154 == 14 && ((a311 == a298[1] && a268 == 32) && a28 == a60[5])) && a331 == a380[1]) && ((((( cf==1  && 210 < a125) && input == inputs[1]) && a394 == 11) && ((21 < a340) && (53 >= a340))) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 1966\n");
    	a39 += (a39 + 20) > a39 ? 2 : 0;
printf("POINT: 1968\n");
    	cf = 0;
printf("POINT: 1969\n");

    	if(((a115 == 1 && (!(a93 == 15) || a143 == a176[5])) || (45 == a181[1]))) {
printf("POINT: 1970\n");
    	a28 = a60[((a154 / a271) - 1)];
    	a182 = a59[(a154 + -10)];
    	a180 = a164[((a394 / a219) + 4)]; 
    	}else {
printf("POINT: 1972\n");
    	a151 = (a271 - 1);
    	a28 = a60[(a357 - 8)];
    	a156 = (a151 - -3);
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm36(int input) {
printf("POINT: 1973\n");

    if(((a223 == a343[1] && ((21 == a288[1]) && ((a154 == 7 &&  cf==1 ) && a282 == 32))) && (((-79 < a286) && (83 >= a286)) && (((21 < a340) && (53 >= a340)) && a394 == 11)))) {
printf("POINT: 1974\n");
    	calculate_outputm186(input);
    } 
printf("POINT: 1975\n");

    if((((37 == a315[2]) && a227 == 32) && (a357 == 9 && (a394 == 11 && ((( cf==1  && a154 == 8) && ((-79 < a286) && (83 >= a286))) && a206 == 32))))) {
printf("POINT: 1976\n");
    	calculate_outputm187(input);
    } 
printf("POINT: 1977\n");

    if(((a394 == 11 && (((( cf==1  && a154 == 11) && ((21 < a340) && (53 >= a340))) && ((-72 < a396) && (16 >= a396))) && a331 == a380[1])) && (a271 == 11 && a227 == 32))) {
printf("POINT: 1978\n");
    	calculate_outputm189(input);
    } 
printf("POINT: 1979\n");

    if(((((-79 < a286) && (83 >= a286)) && (((-156 < a329) && (3 >= a329)) && (((( cf==1  && a154 == 14) && a223 == a343[1]) && a227 == 32) && a331 == a380[1]))) && (37 == a315[2]))) {
printf("POINT: 1980\n");
    	calculate_outputm192(input);
    } 
}
 void calculate_outputm193(int input) {
printf("POINT: 1981\n");

    if((((a223 == a343[1] && ((a328 == a279[1] && (a268 == 32 && (57 == a350[2]))) && a28 == a60[6])) && (37 == a315[2])) && (((a21 == 32 && (a155 <=  70 &&  cf==1 )) && input == inputs[10]) && a394 == 11))) {
printf("POINT: 1982\n");
    	cf = 0;
    	 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1983\n");

    if(((((((((( cf==1  && a21 == 32) && a28 == a60[6]) && a155 <=  70) && a331 == a380[1]) && (15 == a368[3])) && (21 == a288[1])) && a223 == a343[1]) && ((input == inputs[3] && a206 == 32) && a271 == 11)) && a78 == 48)) {
printf("POINT: 1984\n");
    	cf = 0;
    	a340 = ((((a340 * a396) / 5) + -16443) * 1);
    	a268 = 33 ;
    	a227 = 33 ;
    	a182 = a59[((a394 * a271) + -114)];
    	a311 = a298[0];
    	a219 = 3;
    	a282 = 33 ;
    	a394 = (a219 + 7);
    	a180 = a164[(a357 + -3)];
    	a28 = a60[(a394 + -10)];
    	a331 = a380[0];
    	a329 = (((((a329 * a396) + -21440) - 5402) + 19730) + -14700);
    	a368 = a397;
    	a315 = a321;
    	a286 = ((((((a286 * a329) % 14999) % 14960) - 15038) - 1) * 1); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1985\n");

    if(((((15 == a368[3]) && (a271 == 11 && (a219 == 4 && (((( cf==1  && a28 == a60[6]) && a21 == 32) && input == inputs[4]) && a155 <=  70)))) && (a268 == 32 && (((-72 < a396) && (16 >= a396)) && a328 == a279[1]))) && a50 == 61)) {
printf("POINT: 1986\n");
    	cf = 0;
    	a28 = a60[(a357 + -4)];
    	a154 = (a394 - -1);
    	a125 = ((((((a286 * a155) % 14999) % 14894) - -15104) * 1) * 1); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1987\n");

    if((((a331 == a380[1] && ((((a28 == a60[6] && (a155 <=  70 && ( cf==1  && a21 == 32))) && input == inputs[13]) && a223 == a343[1]) && a394 == 11)) && ((-156 < a329) && (3 >= a329))) && (a282 == 32 && (15 == a368[3])))) {
printf("POINT: 1988\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1989\n");

    if((((((-156 < a329) && (3 >= a329)) && (57 == a350[2])) && (((a28 == a60[6] && ((((( cf==1  && input == inputs[9]) && a21 == 32) && a155 <=  70) && ((-72 < a396) && (16 >= a396))) && ((-79 < a286) && (83 >= a286)))) && (15 == a368[3])) && a357 == 9)) && a1 == 23)) {
printf("POINT: 1990\n");
    	cf = 0;
    	a350 = a336;
    	a357 = (a219 - -4);
    	a282 = 33 ;
    	a368 = a397;
    	a311 = a298[((a219 / a219) + -1)];
    	a227 = 33 ;
    	a28 = a60[(a271 + -4)];
    	a331 = a380[((a394 + a357) - 19)];
    	a93 = ((a219 + a219) + 4);
    	a130 = a29[(a271 - 11)];
    	a328 = a279[(a219 - 4)];
    	a329 = ((((a329 * a396) - 15204) / 5) * 5);
    	a223 = a343[(a357 + -8)];
    	a206 = 33 ;
    	a396 = ((((a286 * a340) - 12898) * 1) * 1);
    	a219 = ((a394 / a394) + 2); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1991\n");

    if(((((a206 == 32 && (a21 == 32 && ( cf==1  && a28 == a60[6]))) && a219 == 4) && ((input == inputs[1] && ((a328 == a279[1] && (((-156 < a329) && (3 >= a329)) && ((-72 < a396) && (16 >= a396)))) && a155 <=  70)) && a394 == 11)) && a84 == 52)) {
printf("POINT: 1992\n");
    	cf = 0;
    	a156 = ((a394 + a219) + -7);
    	a28 = a60[(a394 - 10)];
    	a141 = ((((a340 * a340) - -14930) - 33947) + -2849); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1993\n");

    if(((((((15 == a368[3]) && (a155 <=  70 && (37 == a315[2]))) && ((-72 < a396) && (16 >= a396))) && a331 == a380[1]) && ((21 == a288[1]) && (input == inputs[5] && ((a28 == a60[6] && (a21 == 32 &&  cf==1 )) && a268 == 32)))) && a2 == 56)) {
printf("POINT: 1994\n");
    	cf = 0;
    	a20 = 33 ;
    	a28 = a60[((a394 * a219) - 41)];
    	a188 = a105; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 1995\n");

    if(((a311 == a298[1] && (((21 < a340) && (53 >= a340)) && (a223 == a343[1] && (a268 == 32 && (( cf==1  && a155 <=  70) && a21 == 32))))) && (a28 == a60[6] && ((a271 == 11 && (21 == a288[1])) && input == inputs[12])))) {
printf("POINT: 1996\n");
    	cf = 0;
    	a28 = a60[(a357 + -8)];
    	a115 = a185[(a357 - 5)];
    	a156 = (a357 + -2); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1997\n");

    if(((a282 == 32 && (a227 == 32 && (21 == a288[1]))) && ((a271 == 11 && ((a268 == 32 && ((( cf==1  && a28 == a60[6]) && a155 <=  70) && a21 == 32)) && input == inputs[0])) && a206 == 32))) {
printf("POINT: 1998\n");
    	a120 += (a120 + 20) > a120 ? 3 : 0;
printf("POINT: 2000\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2001\n");

    if((((((57 == a350[2]) && (a223 == a343[1] && ((15 == a368[3]) && a21 == 32))) && a28 == a60[6]) && (a331 == a380[1] && ((a357 == 9 && (input == inputs[8] && ( cf==1  && a155 <=  70))) && a311 == a298[1]))) && a58 <= -123)) {
printf("POINT: 2002\n");
    	cf = 0;
    	a180 = a164[(a271 - a357)];
    	a288 = a297;
    	a181 = a98;
    	a206 = 33 ;
    	a368 = a397;
    	a28 = a60[(a394 - 11)];
    	a219 = (a357 - 6);
    	a282 = 33 ;
    	a331 = a380[(a219 + -3)];
    	a328 = a279[((a357 + a357) + -18)];
    	a227 = 33 ;
    	a268 = 33 ;
    	a350 = a336;
    	a329 = ((((a329 * a396) + -14795) - 10030) / 5);
    	a223 = a343[(a394 - 11)];
    	a315 = a321;
    	a394 = ((a219 / a219) + 9); 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm194(int input) {
printf("POINT: 2003\n");

    if((((a155 <=  70 && (a331 == a380[1] && a357 == 9)) && ((21 < a340) && (53 >= a340))) && (((((a21 == 34 && (input == inputs[7] &&  cf==1 )) && a311 == a298[1]) && a268 == 32) && a28 == a60[6]) && ((-79 < a286) && (83 >= a286))))) {
printf("POINT: 2004\n");
    	a173 += (a173 + 20) > a173 ? 6 : 0;
printf("POINT: 2006\n");
    	a45 -= (a45 - 20) < a45 ? 2 : 0;
printf("POINT: 2008\n");
    	a58 -= (a58 - 20) < a58 ? 4 : 0;
printf("POINT: 2010\n");
    	cf = 0;
printf("POINT: 2011\n");

    	if((a136 == 6 || (((19 == a368[1]) || (54 == a33[0])) || (15 == a139[3])))) {
printf("POINT: 2012\n");
    	a271 = (a357 - -1);
    	a328 = a279[((a219 + a357) + -13)];
    	a331 = a380[(a271 - 10)];
    	a180 = a164[(a394 + -7)];
    	a268 = 33 ;
    	a394 = a271;
    	a219 = ((a357 / a357) - -2);
    	a368 = a397;
    	a311 = a298[((a271 / a357) + -1)];
    	a93 = (a357 + 1);
    	a396 = (((((((a329 * a155) % 14999) * 2) - 1) * 1) % 14964) + -15035);
    	a340 = (((((a340 * a286) + 7612) / -5) - -17341) * -1);
    	a28 = a60[(a357 + -9)];
    	a227 = 33 ;
    	a286 = ((((((a286 * a396) % 14999) % 14960) + -15038) - 1) + -2);
    	a357 = (a271 - 2); 
    	}else {
printf("POINT: 2014\n");
    	a206 = 32 ;
    	a28 = a60[(a357 - 4)];
    	a125 = ((((((a155 * a396) % 14999) % 14982) - 15017) * 1) - 1);
    	a315 = a295;
    	a329 = (((((((a125 * a286) % 14999) % 79) + -75) - 2) - -26859) - 26857);
    	a288 = a270;
    	a350 = a366;
    	a223 = a343[((a357 + a271) + -19)];
    	a80 = (a219 - -5);
    	}printf("%d\n", 21);  
    } 
}
 void calculate_outputm37(int input) {
printf("POINT: 2015\n");

    if(((a328 == a279[1] && ((57 == a350[2]) && a219 == 4)) && ((((a21 == 32 &&  cf==1 ) && ((-79 < a286) && (83 >= a286))) && a206 == 32) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 2016\n");
    	calculate_outputm193(input);
    } 
printf("POINT: 2017\n");

    if((((a331 == a380[1] && (( cf==1  && a21 == 34) && a394 == 11)) && ((-79 < a286) && (83 >= a286))) && ((((21 < a340) && (53 >= a340)) && a328 == a279[1]) && a227 == 32))) {
printf("POINT: 2018\n");
    	calculate_outputm194(input);
    } 
}
 void calculate_outputm196(int input) {
printf("POINT: 2019\n");

    if((((a219 == 4 && (((70 < a155) && (103 >= a155)) && (((21 < a340) && (53 >= a340)) && ((( cf==1  && input == inputs[14]) && a28 == a60[6]) && a75 == 32)))) && a227 == 32) && ((a282 == 32 && a357 == 9) && ((-72 < a396) && (16 >= a396))))) {
printf("POINT: 2020\n");
    	cf = 0;
    	a56 = 32 ;
    	a155 = ((((((a155 * a286) % 54) + 157) - 4011) - 25100) - -29112); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2021\n");

    if(((((70 < a155) && (103 >= a155)) && (a227 == 32 && ((57 == a350[2]) && a271 == 11))) && ((((input == inputs[10] && ((a75 == 32 &&  cf==1 ) && a28 == a60[6])) && ((-72 < a396) && (16 >= a396))) && (15 == a368[3])) && a394 == 11))) {
printf("POINT: 2022\n");
    	cf = 0;
    	a21 = 32 ;
    	a155 = ((((a155 * a340) * 5) / 5) - 25267); 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2023\n");

    if((((((((21 == a288[1]) && ((input == inputs[0] && (a28 == a60[6] &&  cf==1 )) && ((70 < a155) && (103 >= a155)))) && a75 == 32) && a268 == 32) && (57 == a350[2])) && (a271 == 11 && (a223 == a343[1] && ((-79 < a286) && (83 >= a286))))) && a190 == 34)) {
printf("POINT: 2024\n");
    	cf = 0;
    	a227 = 33 ;
    	a206 = 33 ;
    	a223 = a343[(a219 - 4)];
    	a357 = (a219 + 4);
    	a93 = ((a219 / a394) - -15);
    	a328 = a279[(a271 - 11)];
    	a315 = a321;
    	a394 = (a219 + 6);
    	a28 = a60[(a271 - 4)];
    	a340 = ((((a340 * a286) / 5) * 5) - 12021);
    	a271 = (a219 - -6);
    	a67 = ((((a396 * a396) - -16444) / 5) - -11348);
    	a331 = a380[0];
    	a288 = a297;
    	a311 = a298[0];
    	a350 = a336;
    	a286 = ((((a286 * a155) - 17341) + -3660) - 408); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2025\n");

    if((((a227 == 32 && (((a219 == 4 && (( cf==1  && ((70 < a155) && (103 >= a155))) && input == inputs[1])) && a75 == 32) && a328 == a279[1])) && (((-79 < a286) && (83 >= a286)) && ((a28 == a60[6] && (37 == a315[2])) && a331 == a380[1]))) && a57 == 31)) {
printf("POINT: 2026\n");
    	cf = 0;
    	a56 = 36 ;
    	a315 = a273;
    	a396 = ((((((a396 * a340) % 103) - -119) + 4875) - -15545) - 20418);
    	a331 = a380[(a271 - 9)];
    	a368 = a293;
    	a28 = a60[((a219 - a394) - -9)];
    	a357 = ((a271 - a271) - -10);
    	a282 = 34 ;
    	a286 = (((((a286 * a340) % 103) - -187) - 13376) + 13377);
    	a311 = a298[(a271 + -9)];
    	a206 = 34 ;
    	a219 = ((a357 / a357) + 4);
    	a350 = a377;
    	a129 = a108[(a271 - 10)];
    	a227 = 34 ;
    	a271 = ((a357 - a357) + 12); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2027\n");

    if(((a227 == 32 && (a357 == 9 && (a311 == a298[1] && (input == inputs[4] && ((((70 < a155) && (103 >= a155)) && (a28 == a60[6] &&  cf==1 )) && ((-79 < a286) && (83 >= a286))))))) && ((a331 == a380[1] && a75 == 32) && a271 == 11))) {
printf("POINT: 2028\n");
    	cf = 0;
    	 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm38(int input) {
printf("POINT: 2029\n");

    if((((a271 == 11 && (a75 == 32 &&  cf==1 )) && a357 == 9) && (((a394 == 11 && (15 == a368[3])) && a328 == a279[1]) && ((21 < a340) && (53 >= a340))))) {
printf("POINT: 2030\n");
    	calculate_outputm196(input);
    } 
}
 void calculate_outputm200(int input) {
printf("POINT: 2031\n");

    if((((((((((103 < a155) && (212 >= a155)) &&  cf==1 ) && input == inputs[5]) && a28 == a60[6]) && a56 == 33) && a268 == 32) && (37 == a315[2])) && (a357 == 9 && ((57 == a350[2]) && (a328 == a279[1] && ((-79 < a286) && (83 >= a286))))))) {
printf("POINT: 2032\n");
    	a199 -= (a199 - 20) < a199 ? 1 : 0;
printf("POINT: 2034\n");
    	cf = 0;
    	a28 = a60[(a219 / a219)];
    	a156 = (a219 + 5);
    	a131 = (a219 + 1); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2035\n");

    if((((input == inputs[11] && ((-72 < a396) && (16 >= a396))) && ((103 < a155) && (212 >= a155))) && (((a394 == 11 && ((a219 == 4 && (a56 == 33 && ( cf==1  && a28 == a60[6]))) && a206 == 32)) && a223 == a343[1]) && a331 == a380[1]))) {
printf("POINT: 2036\n");
    	cf = 0;
    	a21 = 32 ;
    	a155 = ((((a155 * a396) / 5) - 14274) - 4670); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2037\n");

    if(((((21 == a288[1]) && ((a282 == 32 && a328 == a279[1]) && ((-156 < a329) && (3 >= a329)))) && (a227 == 32 && (((a28 == a60[6] && (( cf==1  && input == inputs[7]) && a56 == 33)) && ((21 < a340) && (53 >= a340))) && ((103 < a155) && (212 >= a155))))) && a175 == -10)) {
printf("POINT: 2038\n");
    	cf = 0;
    	a263 = 32 ;
    	a93 = (a219 - -9);
    	a28 = a60[(a271 + -4)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2039\n");

    if(((((a268 == 32 && (input == inputs[6] && (a56 == 33 && (a28 == a60[6] &&  cf==1 )))) && ((103 < a155) && (212 >= a155))) && a206 == 32) && (((-79 < a286) && (83 >= a286)) && ((a271 == 11 && (15 == a368[3])) && (21 == a288[1]))))) {
printf("POINT: 2040\n");
    	a102 += (a102 + 20) > a102 ? 4 : 0;
printf("POINT: 2042\n");
    	a189 -= (a189 - 20) < a189 ? 6 : 0;
printf("POINT: 2044\n");
    	a84 += (a84 + 20) > a84 ? 2 : 0;
printf("POINT: 2046\n");
    	cf = 0;
    	a350 = a377;
    	a156 = (a219 - -4);
    	a28 = a60[(a394 - 10)];
    	a223 = a343[(a271 + -9)];
    	a141 = ((((a155 * a340) / 5) - 2243) + 17375); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2047\n");

    if((((a56 == 33 && ((a271 == 11 && (((103 < a155) && (212 >= a155)) && (((a28 == a60[6] &&  cf==1 ) && input == inputs[2]) && a268 == 32))) && (57 == a350[2]))) && (a328 == a279[1] && (a394 == 11 && (15 == a368[3])))) && a189 == -7)) {
printf("POINT: 2048\n");
    	cf = 0;
    	a264 = a290[(a394 + -11)];
    	a28 = a60[a219];
    	a32 = (a219 + 12); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2049\n");

    if(((((21 == a288[1]) && (((103 < a155) && (212 >= a155)) && ((((a28 == a60[6] &&  cf==1 ) && a56 == 33) && a223 == a343[1]) && a282 == 32))) && (((15 == a368[3]) && (a227 == 32 && (57 == a350[2]))) && input == inputs[10])) && a40 == -18)) {
printf("POINT: 2050\n");
    	cf = 0;
    	a28 = a60[(a219 - -3)];
    	a99 = ((a394 * a357) - 88);
    	a93 = (a99 - -5); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2051\n");

    if((((((( cf==1  && input == inputs[0]) && ((103 < a155) && (212 >= a155))) && a357 == 9) && a56 == 33) && ((-72 < a396) && (16 >= a396))) && ((a331 == a380[1] && ((((-79 < a286) && (83 >= a286)) && a28 == a60[6]) && a271 == 11)) && ((-156 < a329) && (3 >= a329))))) {
printf("POINT: 2052\n");
    	cf = 0;
    	a21 = 32 ;
    	a155 = ((((a155 * a396) - 4183) / 5) + -6218); 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm202(int input) {
printf("POINT: 2053\n");

    if(((a311 == a298[1] && ((((-72 < a396) && (16 >= a396)) && a206 == 32) && a394 == 11)) && (((((103 < a155) && (212 >= a155)) && ((a28 == a60[6] && ( cf==1  && input == inputs[7])) && ((21 < a340) && (53 >= a340)))) && ((-156 < a329) && (3 >= a329))) && a56 == 35))) {
printf("POINT: 2054\n");
    	cf = 0;
    	a340 = ((((a396 * a396) - 17388) / 5) - 16708);
    	a331 = a380[0];
    	a93 = ((a219 / a357) - -15);
    	a67 = (((((a155 * a286) % 15024) - 14975) - 2) + 0);
    	a227 = 33 ;
    	a286 = ((((((a286 * a340) % 14999) % 14960) + -15038) - 3) * 1);
    	a315 = a321;
    	a357 = 8;
    	a368 = a397;
    	a28 = a60[(a271 - 4)];
    	a328 = a279[((a394 / a394) + -1)];
    	a268 = 33 ;
    	a288 = a297;
    	a271 = 10;
    	a394 = 10;
    	a206 = 33 ;
    	a311 = a298[0]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2055\n");

    if(((((((a56 == 35 && (a28 == a60[6] &&  cf==1 )) && ((-72 < a396) && (16 >= a396))) && (37 == a315[2])) && ((103 < a155) && (212 >= a155))) && (15 == a368[3])) && ((a328 == a279[1] && (a219 == 4 && (21 == a288[1]))) && input == inputs[13]))) {
printf("POINT: 2056\n");
    	cf = 0;
    	a219 = (a357 + -4);
    	a331 = a380[((a271 + a271) - 20)];
    	a206 = 34 ;
    	a396 = ((((((a155 * a329) % 14999) % 103) - -120) / 5) - -62);
    	a268 = 34 ;
    	a328 = a279[((a219 / a219) + 1)];
    	a28 = a60[(a394 - 9)];
    	a368 = a397;
    	a350 = a377;
    	a227 = 34 ;
    	a311 = a298[((a394 / a394) + 1)];
    	a315 = a273;
    	a340 = ((((a340 * a329) - 5799) - 12222) + -2590);
    	a223 = a343[(a357 - 7)];
    	a286 = (((((a286 * a396) % 103) + 188) * 1) + 1);
    	a394 = (a271 + 1);
    	a56 = 32 ;
    	a271 = (a219 - -7);
    	a329 = ((((44 - 29465) + 29492) - 2116) - -2076);
    	a282 = 34 ;
    	a288 = a399;
    	a161 = (a357 + -5);
    	a357 = ((a219 / a219) + 9); 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm203(int input) {
printf("POINT: 2057\n");

    if(((((-156 < a329) && (3 >= a329)) && (((-72 < a396) && (16 >= a396)) && (a28 == a60[6] && (57 == a350[2])))) && (a331 == a380[1] && ((input == inputs[7] && ((21 == a288[1]) && ((a56 == 36 &&  cf==1 ) && ((103 < a155) && (212 >= a155))))) && (37 == a315[2]))))) {
printf("POINT: 2058\n");
    	cf = 0;
printf("POINT: 2059\n");

    	if(((22 == a139[4]) || a161 == 4)) {
printf("POINT: 2060\n");
    	a227 = 33 ;
    	a93 = (a394 + 5);
    	a268 = 33 ;
    	a99 = (a357 - -5);
    	a328 = a279[((a93 * a357) - 144)];
    	a315 = a321;
    	a331 = a380[((a93 * a99) - 224)];
    	a311 = a298[((a93 - a99) + -2)];
    	a282 = 33 ;
    	a350 = a336;
    	a396 = (((((a155 * a155) % 14999) + -20710) - 8680) - 498);
    	a368 = a397;
    	a219 = (a271 - 8);
    	a206 = 33 ;
    	a394 = ((a99 + a271) - 15);
    	a223 = a343[((a93 * a93) - 256)];
    	a340 = ((((a340 * a286) - 9029) * 2) * 1);
    	a288 = a297;
    	a286 = ((((((a286 * a396) % 14999) * 2) / 5) / 5) + -24470);
    	a329 = (((((((a329 * a155) % 14999) % 14922) + -15077) * 1) / 5) + -23372);
    	a28 = a60[((a394 - a271) - -8)];
    	a271 = (a93 - 6);
    	a357 = (a99 - 6); 
    	}else {
printf("POINT: 2062\n");
    	a396 = (((49 + -13692) + -11026) - 2669);
    	a286 = ((((((a286 * a396) % 14999) % 14960) + -15038) + 7749) + -7750);
    	a368 = a397;
    	a268 = 33 ;
    	a32 = (a357 - -4);
    	a264 = a290[((a394 + a219) + -15)];
    	a340 = ((((a340 * a155) + -20314) + -7372) + -130);
    	a331 = a380[(a394 - 11)];
    	a315 = a321;
    	a288 = a297;
    	a311 = a298[(a32 - 13)];
    	a328 = a279[(a357 - a357)];
    	a271 = (a219 - -6);
    	a329 = ((((((a329 * a286) % 14999) % 14922) - 15077) / 5) + -14386);
    	a219 = (a357 - 6);
    	a28 = a60[((a357 - a394) + 6)];
    	a227 = 33 ;
    	a223 = a343[(a357 + -9)];
    	a350 = a336;
    	a282 = 33 ;
    	a206 = 33 ;
    	a394 = a271;
    	a357 = 8;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2063\n");

    if((((((((103 < a155) && (212 >= a155)) && (input == inputs[3] && (a28 == a60[6] &&  cf==1 ))) && a219 == 4) && ((21 < a340) && (53 >= a340))) && ((-79 < a286) && (83 >= a286))) && ((15 == a368[3]) && ((37 == a315[2]) && (a56 == 36 && a223 == a343[1]))))) {
printf("POINT: 2064\n");
    	cf = 0;
    	a154 = (a219 + a219);
    	a28 = a60[(a357 - 4)];
    	a396 = ((((a396 * a286) / 5) * 5) - 19631);
    	a288 = a297;
    	a125 = (((((a329 * a340) + 26268) * 10) / 9) - -236);
    	a329 = ((((((a329 * a125) % 14999) % 14922) - 15077) - 1) - 1); 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2065\n");

    if(((a357 == 9 && (a268 == 32 && (input == inputs[5] && ((-72 < a396) && (16 >= a396))))) && (a311 == a298[1] && (((a28 == a60[6] && (a56 == 36 && ( cf==1  && ((103 < a155) && (212 >= a155))))) && ((-156 < a329) && (3 >= a329))) && a227 == 32)))) {
printf("POINT: 2066\n");
    	cf = 0;
    	a28 = a60[(a219 + -3)];
    	a156 = ((a271 + a394) - 9);
    	a151 = ((a357 + a394) + -10); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm39(int input) {
printf("POINT: 2067\n");

    if((((a219 == 4 && ( cf==1  && a56 == 33)) && ((-72 < a396) && (16 >= a396))) && (((((21 < a340) && (53 >= a340)) && a328 == a279[1]) && (15 == a368[3])) && a271 == 11))) {
printf("POINT: 2068\n");
    	calculate_outputm200(input);
    } 
printf("POINT: 2069\n");

    if(((((21 < a340) && (53 >= a340)) && (( cf==1  && a56 == 35) && a311 == a298[1])) && (((-79 < a286) && (83 >= a286)) && (a328 == a279[1] && ((37 == a315[2]) && a223 == a343[1]))))) {
printf("POINT: 2070\n");
    	calculate_outputm202(input);
    } 
printf("POINT: 2071\n");

    if((((21 == a288[1]) && (a394 == 11 && a219 == 4)) && ((a271 == 11 && ((a56 == 36 &&  cf==1 ) && a268 == 32)) && (57 == a350[2])))) {
printf("POINT: 2072\n");
    	calculate_outputm203(input);
    } 
}
 void calculate_outputm206(int input) {
printf("POINT: 2073\n");

    if(((a206 == 33 && (a227 == 33 && a93 == 9)) && ((((((( cf==1  && a28 == a60[7]) && input == inputs[9]) && a329 <=  -156) && (47 == a33[5])) && (32 == a315[3])) && (19 == a288[5])) && (54 == a350[5])))) {
printf("POINT: 2074\n");
    	cf = 0;
    	a93 = (a219 - -7);
    	a267 = ((a219 - a93) - -10);
    	a286 = (((((((a286 * a340) % 14999) + 14717) - -199) / 5) % 80) - -3); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2075\n");

    if((((a396 <=  -72 && ((a28 == a60[7] && (input == inputs[7] && ((((47 == a33[5]) &&  cf==1 ) && a93 == 9) && a394 == 10))) && a286 <=  -79)) && (54 == a350[5])) && (a311 == a298[0] && a357 == 8))) {
printf("POINT: 2076\n");
    	cf = 0;
    	a268 = 32 ;
    	a282 = 32 ;
    	a223 = a343[(a93 - 8)];
    	a271 = ((a93 - a93) - -11);
    	a311 = a298[(a357 - 7)];
    	a350 = a366;
    	a394 = a271;
    	a368 = a371;
    	a340 = ((((74 * 5) - 4004) * 5) - -18200);
    	a288 = a270;
    	a396 = ((((2 * 10) / 9) / 5) - -4);
    	a28 = a60[((a219 + a93) - 9)];
    	a329 = ((((((a329 * a396) % 14999) - -8534) % 79) + -76) - -1);
    	a188 = a105;
    	a206 = 32 ;
    	a219 = ((a93 + a271) + -16);
    	a286 = ((((((a286 * a340) % 14999) - -14741) % 80) + 2) - -2);
    	a328 = a279[(a93 + -8)];
    	a20 = 34 ;
    	a227 = 32 ;
    	a357 = (a219 + 5);
    	a315 = a295;
    	a331 = a380[((a93 + a93) - 17)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2077\n");

    if(((((((input == inputs[0] &&  cf==1 ) && a28 == a60[7]) && a311 == a298[0]) && a93 == 9) && a219 == 3) && (a331 == a380[0] && ((47 == a33[5]) && ((a340 <=  21 && a268 == 33) && a329 <=  -156))))) {
printf("POINT: 2078\n");
    	cf = 0;
    	a288 = a270;
    	a219 = (a394 + -6);
    	a311 = a298[(a394 - 9)];
    	a86 = (a357 - 4);
    	a328 = a279[((a219 + a93) + -12)];
    	a368 = a371;
    	a350 = a366;
    	a227 = 32 ;
    	a331 = a380[((a219 - a93) - -6)];
    	a156 = (a394 - -1);
    	a396 = ((((((((a329 * a329) % 14999) % 43) + -52) * 5) - 5584) % 43) + -6);
    	a268 = 32 ;
    	a315 = a295;
    	a340 = ((((52 + -14) / 5) + -15752) + 15770);
    	a282 = 32 ;
    	a28 = a60[((a156 - a357) - 2)];
    	a271 = (a219 + 7);
    	a286 = (((((((a286 * a340) % 14999) % 80) - -3) + -2) + 21659) + -21657);
    	a223 = a343[(a394 - 9)];
    	a357 = (a271 + -2);
    	a329 = ((((((a329 * a396) % 14999) + 9294) % 79) + -75) - 2);
    	a394 = (a93 - -2); 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm41(int input) {
printf("POINT: 2079\n");

    if((((a227 == 33 && (a331 == a380[0] && a223 == a343[0])) && a311 == a298[0]) && (a286 <=  -79 && (a357 == 8 && ((47 == a33[5]) &&  cf==1 ))))) {
printf("POINT: 2080\n");
    	calculate_outputm206(input);
    } 
}
 void calculate_outputm209(int input) {
printf("POINT: 2081\n");

    if(((a206 == 33 && ((( cf==1  && input == inputs[11]) && a267 == 3) && a357 == 8)) && (a340 <=  21 && (((a93 == 10 && (a396 <=  -72 && (54 == a350[5]))) && a311 == a298[0]) && a28 == a60[7])))) {
printf("POINT: 2082\n");
    	cf = 0;
printf("POINT: 2083\n");

    	if((((83 < a286) && (291 >= a286)) && ((171 < a169 || !(a143 == a176[2])) && ((16 < a396) && (224 >= a396))))) {
printf("POINT: 2084\n");
    	a286 = (((((a396 * a396) % 14999) + 12563) - 32554) / 5);
    	a180 = a164[(a394 - 7)];
    	a97 = ((((((a340 * a329) % 14999) % 14880) - -15119) / 5) + 3410);
    	a28 = a60[((a219 + a93) + -13)]; 
    	}else {
printf("POINT: 2086\n");
    	a331 = a380[((a93 + a357) + -16)];
    	a350 = a377;
    	a286 = ((((((((a396 * a396) % 14999) % 103) + 157) * 5) * 5) % 103) - -177);
    	a166 = a26[((a394 + a357) - 13)];
    	a206 = 34 ;
    	a288 = a399;
    	a56 = 33 ;
    	a219 = (a267 + 2);
    	a311 = a298[(a219 + -3)];
    	a223 = a343[(a219 + -3)];
    	a340 = ((((((a340 * a286) % 14999) % 37) + 91) - 16299) - -16299);
    	a328 = a279[(a219 + -3)];
    	a357 = a93;
    	a28 = a60[(a267 + -1)];
    	a315 = a273;
    	a282 = 34 ;
    	a394 = (a219 - -7);
    	a268 = 34 ;
    	a271 = ((a93 / a93) + 11);
    	a368 = a293;
    	a329 = (((((((a329 * a396) % 14999) % 83) + 30) - 21031) * 1) + 21023);
    	a396 = ((((((a396 * a286) % 14999) + -11427) + -2221) % 103) - -148);
    	}printf("%d\n", 26);  
    } 
printf("POINT: 2087\n");

    if((((a394 == 10 && ((32 == a315[3]) && (a267 == 3 && a227 == 33))) && a268 == 33) && (a328 == a279[0] && (a329 <=  -156 && ((a93 == 10 && ( cf==1  && input == inputs[13])) && a28 == a60[7]))))) {
printf("POINT: 2088\n");
    	cf = 0;
    	a282 = 32 ;
    	a227 = 32 ;
    	a315 = a295;
    	a311 = a298[(a271 - 9)];
    	a329 = ((((((a396 * a396) % 14999) / 5) - 573) % 79) - 75);
    	a328 = a279[(a271 + -9)];
    	a271 = ((a357 - a219) + 6);
    	a115 = a185[(a93 + -5)];
    	a206 = 32 ;
    	a156 = (a394 - 3);
    	a28 = a60[(a357 + -7)];
    	a331 = a380[((a267 - a156) + 5)];
    	a268 = 32 ;
    	a340 = ((((((a340 * a329) % 14999) - 13948) * 1) % 15) - -37);
    	a357 = (a219 - -6);
    	a219 = 4; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm210(int input) {
printf("POINT: 2089\n");

    if((((32 == a315[3]) && ((((a93 == 10 &&  cf==1 ) && a267 == 4) && a286 <=  -79) && a394 == 10)) && (((input == inputs[3] && (a219 == 3 && a206 == 33)) && a331 == a380[0]) && a28 == a60[7]))) {
printf("POINT: 2090\n");
    	cf = 0;
    	a93 = (a267 - -12);
    	a315 = a273;
    	a99 = ((a357 + a93) + -11);
    	a340 = (((((a329 * a286) % 14999) / 5) - -14510) + -43089); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2091\n");

    if((((((( cf==1  && input == inputs[5]) && a93 == 10) && a267 == 4) && a223 == a343[0]) && a282 == 33) && ((11 == a368[5]) && (((a357 == 8 && (32 == a315[3])) && a28 == a60[7]) && a394 == 10)))) {
printf("POINT: 2092\n");
    	a153 -= (a153 - 20) < a153 ? 4 : 0;
printf("POINT: 2094\n");
    	a199 += (a199 + 20) > a199 ? 1 : 0;
printf("POINT: 2096\n");
    	a57 += (a57 + 20) > a57 ? 2 : 0;
printf("POINT: 2098\n");
    	a190 += (a190 + 20) > a190 ? 2 : 0;
printf("POINT: 2100\n");
    	a1 += (a1 + 20) > a1 ? 1 : 0;
printf("POINT: 2102\n");
    	a2 += (a2 + 20) > a2 ? 2 : 0;
printf("POINT: 2104\n");
    	a1 -= (a1 - 20) < a1 ? 2 : 0;
printf("POINT: 2106\n");
    	cf = 0;
printf("POINT: 2107\n");

    	if((!(a268 == 32) && (((-72 < a396) && (16 >= a396)) || ((a93 == 13 && !(a180 == 1)) && a282 == 36)))) {
printf("POINT: 2108\n");
    	a340 = (((((100 - 67) * 9) / 10) / 5) + 26);
    	a28 = a60[((a357 - a267) + -3)];
    	a282 = 32 ;
    	a219 = a267;
    	a156 = (a394 + 2);
    	a368 = a371;
    	a396 = (((((a340 * a340) / 5) / 5) / 5) + -15);
    	a268 = 32 ;
    	a394 = ((a219 * a271) - 29);
    	a329 = ((((((a340 * a396) % 79) + -75) + -18687) - 7495) + 26181);
    	a357 = (a93 + -1);
    	a271 = (a93 - -1);
    	a206 = 32 ;
    	a227 = 32 ;
    	a331 = a380[(a156 + -11)];
    	a157 = a64[(a267 - 4)];
    	a315 = a295;
    	a311 = a298[(a156 + -11)];
    	a286 = ((((((a286 * a329) % 14999) / 5) * 5) % 80) + 3);
    	a328 = a279[(a357 + -8)]; 
    	}else {
printf("POINT: 2110\n");
    	a331 = a380[((a267 * a267) + -14)];
    	a357 = a93;
    	a219 = ((a267 * a93) + -35);
    	a56 = 33 ;
    	a28 = a60[(a267 - 2)];
    	a328 = a279[((a357 / a93) + 1)];
    	a368 = a293;
    	a315 = a273;
    	a271 = ((a219 + a219) + 2);
    	a394 = (a267 - -8);
    	a166 = a26[(a93 + -9)];
    	a206 = 34 ;
    	a223 = a343[(a271 - 10)];
    	a350 = a377;
    	a268 = 34 ;
    	a286 = (((((((a286 * a329) % 14999) % 103) - -162) + -63) + -28407) + 28472);
    	a329 = (((((((a329 * a396) % 14999) + -653) / 5) - 15311) % 83) - -111);
    	a282 = 34 ;
    	a396 = ((((((a396 * a340) % 14999) + 26678) % 103) - -76) + -53);
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2111\n");

    if(((((a396 <=  -72 && ((a286 <=  -79 && (a28 == a60[7] && ( cf==1  && a267 == 4))) && input == inputs[7])) && a328 == a279[0]) && (((a93 == 10 && a394 == 10) && a219 == 3) && a311 == a298[0])) && a199 == 13)) {
printf("POINT: 2112\n");
    	cf = 0;
    	a156 = (a357 + -1);
    	a227 = 32 ;
    	a350 = a366;
    	a340 = (((((((a396 * a286) % 14999) + -15878) % 15) + 40) * 9) / 10);
    	a311 = a298[(a156 + -6)];
    	a288 = a270;
    	a328 = a279[(a357 - 7)];
    	a28 = a60[((a394 / a267) - 1)];
    	a329 = (((((((a329 * a340) % 14999) + 18959) / 5) - 14247) % 79) - -3);
    	a115 = a185[(a271 + -3)];
    	a368 = a371;
    	a331 = a380[(a219 + -2)];
    	a268 = 32 ;
    	a282 = 32 ;
    	a357 = (a394 - 1);
    	a271 = (a394 + 1); 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2113\n");

    if(((((((a206 == 33 && ((a267 == 4 && (input == inputs[8] &&  cf==1 )) && a28 == a60[7])) && a223 == a343[0]) && (19 == a288[5])) && a268 == 33) && ((54 == a350[5]) && (a271 == 10 && a93 == 10))) && a153 <= -36)) {
printf("POINT: 2114\n");
    	cf = 0;
    	a286 = (((((((a286 * a396) % 14999) % 80) + 1) + -20) - 15225) - -15176);
    	a282 = 32 ;
    	a268 = 32 ;
    	a28 = a60[(a219 / a219)];
    	a227 = 32 ;
    	a350 = a366;
    	a156 = (a219 - -6);
    	a206 = 32 ;
    	a311 = a298[(a271 - 9)];
    	a131 = (a357 - 5);
    	a328 = a279[((a93 * a267) + -39)];
    	a340 = ((((((((a329 * a329) % 14999) % 15) - -29) + -1) * 5) % 15) - -34);
    	a357 = (a271 + -1);
    	a394 = (a271 + 1);
    	a396 = (((((a340 * a286) % 43) + -28) - 1) + 0);
    	a331 = a380[(a271 + -9)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2115\n");

    if((((a271 == 10 && ((a28 == a60[7] &&  cf==1 ) && input == inputs[0])) && a331 == a380[0]) && (a282 == 33 && (a286 <=  -79 && (a223 == a343[0] && (a93 == 10 && (a329 <=  -156 && a267 == 4))))))) {
printf("POINT: 2116\n");
    	cf = 0;
    	a396 = (((((a396 % 43) - -2) - 16) * 9) / 10);
    	a340 = ((((((a396 * a396) % 15) - -38) + 1) - 10497) - -10496);
    	a156 = (a271 - -2);
    	a206 = 32 ;
    	a368 = a371;
    	a28 = a60[(a394 - 9)];
    	a286 = ((((((a286 * a340) % 14999) % 80) - -1) - -11159) + -11157);
    	a219 = (a156 - 8);
    	a328 = a279[(a394 - 9)];
    	a157 = a64[(a156 - 12)];
    	a282 = 32 ;
    	a331 = a380[(a219 - 3)];
    	a315 = a295;
    	a268 = 32 ;
    	a311 = a298[((a267 * a357) + -31)];
    	a227 = 32 ;
    	a329 = ((((((a329 * a286) % 14999) % 79) - 75) + 22099) + -22099);
    	a271 = ((a93 - a219) + 5);
    	a394 = (a156 + -1);
    	a357 = (a219 + 5); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2117\n");

    if((((a206 == 33 && a396 <=  -72) && a394 == 10) && (a357 == 8 && (((32 == a315[3]) && ((input == inputs[13] && (a267 == 4 && (a28 == a60[7] &&  cf==1 ))) && a93 == 10)) && (19 == a288[5]))))) {
printf("POINT: 2118\n");
    	cf = 0;
    	a396 = ((((((a396 - -15997) % 103) - -119) * 5) % 103) - -17);
    	a329 = (((((a340 * a340) / 5) + -8493) % 83) - -124);
    	a368 = a293;
    	a28 = a60[((a267 / a267) + 1)];
    	a206 = 34 ;
    	a357 = (a267 + 6);
    	a350 = a377;
    	a331 = a380[(a93 - 8)];
    	a328 = a279[(a267 + -2)];
    	a286 = ((((((a286 * a329) % 14999) + -8548) / 5) % 103) - -237);
    	a56 = 35 ;
    	a315 = a273;
    	a394 = (a357 - -2);
    	a0 = a96; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm212(int input) {
printf("POINT: 2119\n");

    if((((19 == a288[5]) && (((a311 == a298[0] && a396 <=  -72) && a267 == 8) && input == inputs[11])) && ((((( cf==1  && a28 == a60[7]) && a93 == 10) && (32 == a315[3])) && a357 == 8) && a223 == a343[0]))) {
printf("POINT: 2120\n");
    	cf = 0;
printf("POINT: 2121\n");

    	if(a351 == 36) {
printf("POINT: 2122\n");
    	a151 = (a219 - -11);
    	a156 = (a93 + 3);
    	a28 = a60[(a151 + -13)]; 
    	}else {
printf("POINT: 2124\n");
    	a170 = 35 ;
    	a125 = ((((((((a396 * a396) % 14999) % 101) + 33) * 5) + -7) % 101) + -1);
    	a28 = a60[(a357 + -3)];
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2125\n");

    if(((((19 == a288[5]) && (a268 == 33 && (a396 <=  -72 && (a286 <=  -79 && (54 == a350[5]))))) && a311 == a298[0]) && (((a28 == a60[7] && ( cf==1  && a267 == 8)) && a93 == 10) && input == inputs[8]))) {
printf("POINT: 2126\n");
    	cf = 0;
printf("POINT: 2127\n");

    	if(a394 == 11) {
printf("POINT: 2128\n");
    	a328 = a279[0];
    	a268 = 35 ;
    	a282 = 33 ;
    	a151 = (a219 + 7);
    	a331 = a380[5];
    	a206 = 36 ;
    	a340 = ((((a340 + 0) % 37) - -91) - 1);
    	a156 = (a357 + 5);
    	a315 = a321;
    	a227 = 35 ;
    	a286 = ((((a286 % 103) - -280) + 2) - -1);
    	a329 = (((((a329 * 1) % 14914) + 15085) / 5) - -22265);
    	a311 = a298[0];
    	a219 = 3;
    	a28 = a60[(a271 - 9)];
    	a357 = 14; 
    	}else {
printf("POINT: 2130\n");

    	}printf("%d\n", 23);  
    } 
printf("POINT: 2131\n");

    if((((a271 == 10 && ((a286 <=  -79 && a93 == 10) && a28 == a60[7])) && a311 == a298[0]) && ((((19 == a288[5]) && (( cf==1  && a267 == 8) && input == inputs[7])) && (32 == a315[3])) && (11 == a368[5])))) {
printf("POINT: 2132\n");
    	cf = 0;
    	a286 = (((((a286 / 5) / 5) / 5) % 103) - -188);
    	a328 = a279[2];
    	a329 = ((((a329 + 0) - 0) % 83) - -129);
    	a282 = 36 ;
    	a115 = a185[(a394 - 4)];
    	a223 = a343[0];
    	a227 = 33 ;
    	a368 = a397;
    	a156 = (a271 - 3);
    	a350 = a336;
    	a206 = 34 ;
    	a268 = 33 ;
    	a331 = a380[4];
    	a396 = (((((a396 % 14887) + 15111) - -14783) + -24898) + 20061);
    	a271 = 13;
    	a340 = (((a340 / 5) / 5) + -17801);
    	a357 = 12;
    	a28 = a60[(a219 - 2)];
    	a311 = a298[0];
    	a219 = 6;
    	a288 = a297;
    	a315 = a321;
    	a394 = 17; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2133\n");

    if(((a268 == 33 && (a227 == 33 && ((a267 == 8 && a394 == 10) && input == inputs[14]))) && (a331 == a380[0] && ((54 == a350[5]) && ((a93 == 10 && (a28 == a60[7] &&  cf==1 )) && (11 == a368[5])))))) {
printf("POINT: 2134\n");
    	cf = 0;
    	a282 = 34 ;
    	a288 = a297;
    	a156 = (a93 + -2);
    	a227 = 33 ;
    	a28 = a60[(a219 + -2)];
    	a340 = ((((a340 % 15010) - 14988) * 1) * 1);
    	a328 = a279[2];
    	a368 = a397;
    	a219 = 3;
    	a357 = 10;
    	a271 = 17;
    	a394 = 10;
    	a268 = 35 ;
    	a141 = (((((a286 * a396) % 14999) + -2340) + 17252) - 12867);
    	a311 = a298[0];
    	a315 = a321;
    	a206 = 36 ;
    	a329 = (((((a329 % 14922) + -156) * 1) / 5) + -7116);
    	a223 = a343[3];
    	a331 = a380[5];
    	a350 = a336;
    	a396 = ((((a396 % 14887) - -15111) / 5) - -2193);
    	a286 = ((((a286 % 14854) - -15145) / 5) + 14179); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2135\n");

    if(((((11 == a368[5]) && (a286 <=  -79 && a282 == 33)) && a28 == a60[7]) && ((a357 == 8 && (((a267 == 8 && (input == inputs[10] &&  cf==1 )) && (32 == a315[3])) && a331 == a380[0])) && a93 == 10))) {
printf("POINT: 2136\n");
    	cf = 0;
printf("POINT: 2137\n");

    	if((a169 <=  -161 && a151 == 12)) {
printf("POINT: 2138\n");
    	a28 = a60[(a394 + -10)];
    	a15 = 35 ;
    	a180 = a164[(a93 + -9)]; 
    	}else {
printf("POINT: 2140\n");
    	a28 = a60[(a394 - 10)];
    	a112 = (a267 - -6);
    	a180 = a164[((a394 * a271) + -100)];
    	}printf("%d\n", 21);  
    } 
printf("POINT: 2141\n");

    if(((a271 == 10 && (((a223 == a343[0] && (54 == a350[5])) && a93 == 10) && a396 <=  -72)) && (a340 <=  21 && ((((input == inputs[5] &&  cf==1 ) && a28 == a60[7]) && a311 == a298[0]) && a267 == 8)))) {
printf("POINT: 2142\n");
    	cf = 0;
    	a163 = (((((((a340 * a329) % 14999) * 2) % 16) - -296) - 13299) - -13301);
    	a180 = a164[(a357 - 1)];
    	a28 = a60[(a271 + -10)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2143\n");

    if((((a267 == 8 && (a271 == 10 && a329 <=  -156)) && (32 == a315[3])) && ((a93 == 10 && ((a286 <=  -79 && (( cf==1  && a28 == a60[7]) && input == inputs[4])) && a396 <=  -72)) && (54 == a350[5])))) {
printf("POINT: 2144\n");
    	a50 += (a50 + 20) > a50 ? 2 : 0;
printf("POINT: 2146\n");
    	cf = 0;
printf("POINT: 2147\n");

    	if((a156 == 13 && a357 == 9)) {
printf("POINT: 2148\n");
    	a112 = ((a93 - a271) - -7);
    	a180 = a164[(a394 - 10)];
    	a28 = a60[((a93 * a271) + -100)]; 
    	}else {
printf("POINT: 2150\n");
    	a93 = ((a219 - a357) - -21);
    	a99 = (a267 - -3);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2151\n");

    if(((a329 <=  -156 && (a268 == 33 && (a340 <=  21 && (input == inputs[3] && (a93 == 10 && ( cf==1  && a267 == 8)))))) && (a219 == 3 && (a396 <=  -72 && (a28 == a60[7] && (11 == a368[5])))))) {
printf("POINT: 2152\n");
    	cf = 0;
    	a93 = (a357 - -8);
    	a99 = ((a357 + a93) - 13); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2153\n");

    if(((((a227 == 33 && a267 == 8) && a268 == 33) && a396 <=  -72) && ((54 == a350[5]) && ((((input == inputs[1] && ( cf==1  && a28 == a60[7])) && a223 == a343[0]) && a93 == 10) && a206 == 33)))) {
printf("POINT: 2154\n");
    	cf = 0;
    	a156 = (a394 + -1);
    	a331 = a380[6];
    	a329 = (((a329 / 5) - -10039) * 2);
    	a219 = 7;
    	a227 = 36 ;
    	a368 = a293;
    	a340 = (((((a340 - -14174) % 14935) + 15064) / 5) - -3713);
    	a268 = 33 ;
    	a28 = a60[(a93 / a394)];
    	a328 = a279[4];
    	a131 = (a394 + -5);
    	a311 = a298[6];
    	a315 = a273;
    	a396 = ((((a396 % 14964) + -72) - 14526) * 1);
    	a357 = 13;
    	a286 = ((((((a286 % 14960) + -79) * 10) / 9) - -5569) + -10455);
    	a206 = 34 ;
    	a394 = 15; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2155\n");

    if((((32 == a315[3]) && (a311 == a298[0] && a357 == 8)) && ((a394 == 10 && ((((a267 == 8 && (a28 == a60[7] &&  cf==1 )) && input == inputs[0]) && a93 == 10) && a282 == 33)) && a227 == 33))) {
printf("POINT: 2156\n");
    	cf = 0;
printf("POINT: 2157\n");

    	if((((19 == a368[1]) && !(21 == a288[1])) && a163 <=  191)) {
printf("POINT: 2158\n");
    	a396 = ((((a396 - -12645) % 14964) + -15035) - 2);
    	a268 = 32 ;
    	a394 = 16;
    	a206 = 36 ;
    	a328 = a279[1];
    	a350 = a366;
    	a329 = (((((a329 * 1) % 14922) + -156) - -25364) - 38330);
    	a331 = a380[0];
    	a28 = a60[(a271 + -8)];
    	a368 = a371;
    	a56 = 32 ;
    	a315 = a321;
    	a223 = a343[0];
    	a357 = 13;
    	a219 = 4;
    	a286 = ((((a286 % 80) - -62) / 5) + 5);
    	a161 = (a267 + -6); 
    	}else {
printf("POINT: 2160\n");
    	a263 = 35 ;
    	a93 = (a357 - -5);
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2161\n");

    if((((a206 == 33 && (( cf==1  && a267 == 8) && a93 == 10)) && a223 == a343[0]) && (((a268 == 33 && (a329 <=  -156 && (input == inputs[12] && (32 == a315[3])))) && a28 == a60[7]) && (11 == a368[5])))) {
printf("POINT: 2162\n");
    	a178 += (a178 + 20) > a178 ? 3 : 0;
printf("POINT: 2164\n");
    	cf = 0;
    	a28 = a60[((a219 + a357) - 9)];
    	a56 = 32 ;
    	a161 = (a267 + -5); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2165\n");

    if((((a340 <=  21 && input == inputs[2]) && a219 == 3) && (a282 == 33 && ((54 == a350[5]) && (((a227 == 33 && ((a93 == 10 &&  cf==1 ) && a28 == a60[7])) && a267 == 8) && (32 == a315[3])))))) {
printf("POINT: 2166\n");
    	a1 -= (a1 - 20) < a1 ? 1 : 0;
printf("POINT: 2168\n");
    	cf = 0;
printf("POINT: 2169\n");

    	if(((59 == a181[3]) || (!(a28 == a60[3]) && (a143 == a176[5] && !(a170 == 36))))) {
printf("POINT: 2170\n");
    	a125 = (((((a396 * a329) % 14999) / 5) - 6511) / 5);
    	a28 = a60[((a93 - a394) + 5)];
    	a80 = (a219 - -11); 
    	}else {
printf("POINT: 2172\n");
    	a180 = a164[(a267 + -1)];
    	a28 = a60[(a219 - 3)];
    	a163 = (((((a340 * a340) % 14999) - 14946) * 1) + -14);
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2173\n");

    if((((a331 == a380[0] && ((11 == a368[5]) && ((a223 == a343[0] && a311 == a298[0]) && a267 == 8))) && a227 == 33) && ((((a93 == 10 &&  cf==1 ) && input == inputs[9]) && a286 <=  -79) && a28 == a60[7]))) {
printf("POINT: 2174\n");
    	cf = 0;
    	a328 = a279[4];
    	a86 = ((a357 / a357) - -2);
    	a329 = (((a329 + 579) / 5) - -26255);
    	a156 = ((a357 / a357) - -10);
    	a268 = 35 ;
    	a282 = 34 ;
    	a288 = a399;
    	a311 = a298[2];
    	a396 = ((((a396 % 14887) + 15111) - -11347) * 1);
    	a350 = a336;
    	a368 = a397;
    	a394 = 17;
    	a206 = 33 ;
    	a331 = a380[0];
    	a340 = (((((a340 * 1) % 37) - -90) + 14546) + -14544);
    	a28 = a60[((a267 / a86) + -1)];
    	a227 = 35 ;
    	a223 = a343[7];
    	a271 = 15;
    	a315 = a321;
    	a219 = 8;
    	a286 = ((((a286 / 5) / 5) / 5) + -10074);
    	a357 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2175\n");

    if(((a282 == 33 && ((32 == a315[3]) && (input == inputs[6] && ((a93 == 10 && a396 <=  -72) && a268 == 33)))) && (a271 == 10 && (a219 == 3 && (a267 == 8 && ( cf==1  && a28 == a60[7])))))) {
printf("POINT: 2176\n");
    	cf = 0;
    	a28 = a60[a219];
    	a136 = (a267 - -1);
    	a188 = a43; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2177\n");

    if(((a286 <=  -79 && (a329 <=  -156 && (a223 == a343[0] && (a340 <=  21 && (((a267 == 8 &&  cf==1 ) && a28 == a60[7]) && input == inputs[13]))))) && ((a93 == 10 && (32 == a315[3])) && a271 == 10))) {
printf("POINT: 2178\n");
    	cf = 0;
printf("POINT: 2179\n");

    	if((a268 == 33 || a182 == a59[2])) {
printf("POINT: 2180\n");
    	a223 = a343[0];
    	a311 = a298[0];
    	a331 = a380[7];
    	a286 = ((((a286 + 2300) % 80) + 2) + 2);
    	a56 = 36 ;
    	a328 = a279[1];
    	a227 = 33 ;
    	a315 = a295;
    	a271 = 11;
    	a129 = a108[(a394 - 10)];
    	a396 = ((((a396 % 14887) - -15111) / 5) - -6200);
    	a28 = a60[(a357 - 6)];
    	a206 = 32 ;
    	a357 = 14;
    	a219 = 9;
    	a282 = 35 ;
    	a329 = (((((a329 / 5) / 5) - 14147) * -1) / 10);
    	a368 = a371;
    	a340 = (((((a340 % 15) - -38) + -16139) / 5) + 3262);
    	a350 = a366;
    	a268 = 36 ;
    	a288 = a297;
    	a394 = 10; 
    	}else {
printf("POINT: 2182\n");
    	a219 = 7;
    	a282 = 36 ;
    	a155 = ((((((a340 * a396) % 14999) * 2) - 3) % 54) + 158);
    	a56 = 33 ;
    	a394 = 17;
    	a286 = ((((a286 - 0) % 103) - -193) * 1);
    	a288 = a297;
    	a350 = a377;
    	a328 = a279[2];
    	a315 = a321;
    	a368 = a293;
    	a311 = a298[3];
    	a28 = a60[((a357 / a357) + 5)];
    	a271 = 13;
    	a227 = 33 ;
    	a223 = a343[3];
    	a206 = 35 ;
    	a331 = a380[5];
    	a357 = 10;
    	a329 = ((((a329 % 14914) - -15085) - -14182) * 1);
    	a268 = 34 ;
    	a340 = ((((a340 % 15010) + -14988) - 0) + -2);
    	a396 = ((((((a396 * 1) % 103) + 172) / 5) * 39) / 10);
    	}printf("%d\n", 19);  
    } 
}
 void calculate_outputm42(int input) {
printf("POINT: 2183\n");

    if(((a357 == 8 && (a340 <=  21 && (a271 == 10 && (54 == a350[5])))) && ((a331 == a380[0] && (a267 == 3 &&  cf==1 )) && a282 == 33))) {
printf("POINT: 2184\n");
    	calculate_outputm209(input);
    } 
printf("POINT: 2185\n");

    if((((((a223 == a343[0] && a328 == a279[0]) && a286 <=  -79) && (54 == a350[5])) && a206 == 33) && ((11 == a368[5]) && (a267 == 4 &&  cf==1 )))) {
printf("POINT: 2186\n");
    	calculate_outputm210(input);
    } 
printf("POINT: 2187\n");

    if(((a394 == 10 && a227 == 33) && (((a331 == a380[0] && (a282 == 33 && (a267 == 8 &&  cf==1 ))) && a223 == a343[0]) && a396 <=  -72))) {
printf("POINT: 2188\n");
    	calculate_outputm212(input);
    } 
}
 void calculate_outputm214(int input) {
printf("POINT: 2189\n");

    if(((((a282 == 33 && (a93 == 11 && (a328 == a279[0] && (a286 <=  -79 && a357 == 8)))) && input == inputs[10]) && a206 == 33) && ((a349 == 33 && ( cf==1  && a28 == a60[7])) && a329 <=  -156))) {
printf("POINT: 2190\n");
    	cf = 0;
printf("POINT: 2191\n");

    	if(((!(24 == a139[0]) || (19 == a288[5])) && a311 == a298[7])) {
printf("POINT: 2192\n");
    	a93 = (a394 - -6);
    	a99 = (a271 + 1); 
    	}else {
printf("POINT: 2194\n");
    	a357 = 15;
    	a311 = a298[3];
    	a331 = a380[0];
    	a156 = (a271 - 3);
    	a227 = 33 ;
    	a219 = 7;
    	a368 = a397;
    	a329 = ((((a329 * 1) / 5) / 5) - -6741);
    	a288 = a399;
    	a315 = a321;
    	a328 = a279[2];
    	a28 = a60[(a394 - 9)];
    	a115 = a185[(a394 + -4)];
    	a282 = 34 ;
    	a223 = a343[3];
    	a286 = ((((a286 / 5) - 16341) % 103) + 212);
    	a340 = ((((a340 % 15010) + -14988) - 3) / 5);
    	a271 = 15;
    	a268 = 34 ;
    	a396 = (((((a396 % 14964) + -72) * 10) / 9) + -3271);
    	a206 = 34 ;
    	a350 = a336;
    	a394 = 17;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 2195\n");

    if((((a282 == 33 && (a340 <=  21 && a271 == 10)) && (32 == a315[3])) && (((((a93 == 11 && ( cf==1  && a349 == 33)) && a28 == a60[7]) && a223 == a343[0]) && input == inputs[4]) && a268 == 33))) {
printf("POINT: 2196\n");
    	cf = 0;
    	a28 = a60[(a357 - 4)];
    	a132 = a91[((a271 - a271) + 4)];
    	a264 = a290[((a219 - a271) + 14)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2197\n");

    if(((a227 == 33 && ((a219 == 3 && a396 <=  -72) && a93 == 11)) && (a311 == a298[0] && (((a349 == 33 && (( cf==1  && input == inputs[8]) && a28 == a60[7])) && a394 == 10) && a206 == 33)))) {
printf("POINT: 2198\n");
    	cf = 0;
printf("POINT: 2199\n");

    	if((a264 == 11 || a28 == a60[0])) {
printf("POINT: 2200\n");
    	a227 = 35 ;
    	a357 = 14;
    	a20 = 34 ;
    	a282 = 34 ;
    	a288 = a399;
    	a286 = (((((a286 / 5) + 20037) - -7856) * -1) / 10);
    	a268 = 33 ;
    	a223 = a343[3];
    	a396 = (((((a396 % 14964) + -72) + -2280) * 10) / 9);
    	a315 = a273;
    	a219 = 10;
    	a206 = 35 ;
    	a329 = ((((a329 % 14922) + -156) - 7846) + -6497);
    	a328 = a279[2];
    	a394 = 17;
    	a368 = a397;
    	a311 = a298[3];
    	a350 = a377;
    	a340 = ((((a340 * 1) + 0) % 14935) - -15064);
    	a331 = a380[3];
    	a28 = a60[(a271 + -7)];
    	a271 = 17;
    	a188 = a105; 
    	}else {
printf("POINT: 2202\n");
    	a271 = 17;
    	a28 = a60[(a357 - 2)];
    	a328 = a279[6];
    	a155 = (((((((a396 * a329) % 14999) % 54) + 140) / 5) * 39) / 10);
    	a206 = 34 ;
    	a282 = 36 ;
    	a340 = ((((a340 / 5) - -8593) * 10) / 9);
    	a268 = 33 ;
    	a223 = a343[3];
    	a288 = a297;
    	a286 = (((((a286 % 14960) + -79) / 5) + 14518) - 16778);
    	a311 = a298[0];
    	a315 = a273;
    	a396 = (((((a396 / 5) % 103) - -121) * 10) / 9);
    	a227 = 36 ;
    	a368 = a397;
    	a56 = 36 ;
    	a219 = 3;
    	a350 = a377;
    	a394 = 10;
    	a331 = a380[3];
    	a329 = ((((a329 % 83) + 108) - 1) + 5);
    	a357 = 13;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2203\n");

    if(((a311 == a298[0] && (a28 == a60[7] && a328 == a279[0])) && ((a349 == 33 && ((a282 == 33 && (((a93 == 11 &&  cf==1 ) && input == inputs[12]) && a268 == 33)) && a329 <=  -156)) && a340 <=  21))) {
printf("POINT: 2204\n");
    	cf = 0;
printf("POINT: 2205\n");

    	if(((314 < a163 && (a170 == 35 && ((-53 < a141) && (33 >= a141)))) && !(a93 == 15))) {
printf("POINT: 2206\n");
    	a357 = 14;
    	a28 = a60[(a271 + -8)];
    	a396 = (((a396 / 5) - -7994) - -13711);
    	a206 = 35 ;
    	a328 = a279[5];
    	a331 = a380[3];
    	a350 = a336;
    	a329 = ((((a329 / 5) + 17785) * 10) / 9);
    	a368 = a397;
    	a394 = 14;
    	a286 = (((((a286 - -10037) - 2853) * 1) % 14960) - 15038);
    	a56 = 35 ;
    	a340 = ((((a340 % 15010) + -14988) * 1) / 5);
    	a315 = a295;
    	a0 = a96; 
    	}else {
printf("POINT: 2208\n");
    	a340 = (((((a340 % 15) + 36) - -3) + 29122) + -29123);
    	a329 = ((((a329 / 5) % 79) + 2) - -1);
    	a368 = a397;
    	a56 = 36 ;
    	a288 = a270;
    	a271 = 10;
    	a396 = ((((a396 % 14964) - 72) + 13538) - 24797);
    	a331 = a380[3];
    	a223 = a343[1];
    	a350 = a366;
    	a315 = a321;
    	a268 = 33 ;
    	a227 = 36 ;
    	a286 = (((((a286 % 14960) - 79) / 5) * 53) / 10);
    	a394 = 13;
    	a28 = a60[(a93 + -9)];
    	a357 = 15;
    	a311 = a298[7];
    	a206 = 35 ;
    	a129 = a108[((a219 / a93) + 4)];
    	a282 = 35 ;
    	a328 = a279[4];
    	a219 = 6;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 2209\n");

    if(((((a93 == 11 &&  cf==1 ) && a28 == a60[7]) && a349 == 33) && (((a286 <=  -79 && ((a311 == a298[0] && (input == inputs[2] && a394 == 10)) && a271 == 10)) && (19 == a288[5])) && a357 == 8))) {
printf("POINT: 2210\n");
    	cf = 0;
printf("POINT: 2211\n");

    	if(((171 < a329 && a28 == a60[5]) && !(a182 == a59[7]))) {
printf("POINT: 2212\n");
    	a223 = a343[3];
    	a155 = (((((a329 * a396) % 14999) - -9851) + 2356) - 27735);
    	a286 = ((((a286 % 14960) + -79) + -13708) + -948);
    	a311 = a298[4];
    	a206 = 33 ;
    	a28 = a60[((a219 * a219) - 3)];
    	a219 = 10;
    	a271 = 12;
    	a340 = (((a340 / 5) + -13084) + -1751);
    	a227 = 33 ;
    	a21 = 32 ;
    	a394 = 15;
    	a328 = a279[7];
    	a368 = a397;
    	a315 = a273;
    	a357 = 10;
    	a331 = a380[5];
    	a288 = a297;
    	a282 = 35 ;
    	a268 = 34 ;
    	a396 = ((((a396 % 14964) + -72) + -13295) - 506);
    	a350 = a377;
    	a329 = (((((a329 % 14914) - -15085) * 10) / 9) - -1096); 
    	}else {
printf("POINT: 2214\n");
    	a368 = a397;
    	a331 = a380[5];
    	a282 = 33 ;
    	a125 = ((((((a329 * a340) % 14999) * 2) % 14894) - -15104) + 1);
    	a28 = a60[((a271 - a93) - -6)];
    	a223 = a343[3];
    	a311 = a298[6];
    	a315 = a273;
    	a394 = 12;
    	a227 = 36 ;
    	a357 = 10;
    	a206 = 33 ;
    	a154 = ((a219 * a93) - 26);
    	a268 = 33 ;
    	a340 = ((((a340 * 1) * 1) % 14935) - -15064);
    	a329 = (((((a329 % 83) + 135) + 17) * 10) / 9);
    	a288 = a297;
    	a328 = a279[4];
    	a350 = a377;
    	a286 = (((((a286 % 103) - -251) + 11) * 10) / 9);
    	a396 = ((((a396 % 14964) + -72) * 1) - 11590);
    	a219 = 5;
    	a271 = 13;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2215\n");

    if(((((a93 == 11 && (a394 == 10 && a349 == 33)) && a223 == a343[0]) && (19 == a288[5])) && (a328 == a279[0] && (a357 == 8 && (a271 == 10 && (a28 == a60[7] && (input == inputs[13] &&  cf==1 ))))))) {
printf("POINT: 2216\n");
    	cf = 0;
    	a328 = a279[5];
    	a340 = ((((a340 % 37) + 90) - 29072) - -29074);
    	a115 = a185[((a394 * a93) + -105)];
    	a219 = 5;
    	a329 = ((((((a329 / 5) % 83) - -102) * 5) % 83) + 36);
    	a227 = 33 ;
    	a282 = 36 ;
    	a156 = ((a394 + a394) + -13);
    	a286 = (((((a286 / 5) + -7210) / 5) * -3) / 10);
    	a268 = 36 ;
    	a28 = a60[(a93 / a271)];
    	a315 = a321;
    	a311 = a298[6];
    	a206 = 36 ;
    	a331 = a380[3];
    	a357 = 11;
    	a271 = 17; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2217\n");

    if((((input == inputs[0] && ( cf==1  && a349 == 33)) && a328 == a279[0]) && (a93 == 11 && (a311 == a298[0] && (((a331 == a380[0] && (a286 <=  -79 && a28 == a60[7])) && (32 == a315[3])) && a227 == 33))))) {
printf("POINT: 2218\n");
    	cf = 0;
printf("POINT: 2219\n");

    	if(((a156 == 9 && !(a143 == a176[7])) && !(a121 == 33))) {
printf("POINT: 2220\n");
    	a93 = (a357 + 6);
    	a139 = a81; 
    	}else {
printf("POINT: 2222\n");
    	a264 = a290[(a271 + -4)];
    	a28 = a60[((a219 * a219) + -5)];
    	a90 = a24;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 2223\n");

    if(((a286 <=  -79 && (a311 == a298[0] && ((a329 <=  -156 && a349 == 33) && a28 == a60[7]))) && (a227 == 33 && ((54 == a350[5]) && (((a93 == 11 &&  cf==1 ) && input == inputs[1]) && a394 == 10))))) {
printf("POINT: 2224\n");
    	cf = 0;
    	a180 = a164[((a394 * a219) - 28)];
    	a28 = a60[(a271 - 10)];
    	a181 = a98; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2225\n");

    if(((a349 == 33 && (a396 <=  -72 && (a394 == 10 && (a93 == 11 && a286 <=  -79)))) && ((11 == a368[5]) && (((input == inputs[11] && ( cf==1  && a28 == a60[7])) && (54 == a350[5])) && a357 == 8)))) {
printf("POINT: 2226\n");
    	cf = 0;
    	a219 = 9;
    	a206 = 35 ;
    	a368 = a397;
    	a56 = 32 ;
    	a328 = a279[4];
    	a227 = 33 ;
    	a288 = a297;
    	a340 = (((a340 / 5) - 16845) + -3493);
    	a350 = a366;
    	a161 = (a271 - 5);
    	a28 = a60[(a357 - 6)];
    	a311 = a298[7];
    	a223 = a343[6];
    	a268 = 36 ;
    	a331 = a380[7];
    	a286 = ((((a286 % 14960) - 79) * 1) * 1);
    	a394 = 11;
    	a282 = 36 ;
    	a315 = a321;
    	a357 = 8;
    	a329 = ((((a329 * 1) % 79) - 41) + -16);
    	a396 = ((((a396 % 14964) - 72) - 7134) + -6063);
    	a271 = 10; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2227\n");

    if((((32 == a315[3]) && ((54 == a350[5]) && a28 == a60[7])) && (a357 == 8 && (a340 <=  21 && (input == inputs[9] && (a268 == 33 && (((a93 == 11 &&  cf==1 ) && a349 == 33) && a394 == 10))))))) {
printf("POINT: 2228\n");
    	cf = 0;
    	a156 = (a271 + -3);
    	a329 = ((((a329 % 14914) - -15085) - -14193) - -717);
    	a315 = a321;
    	a368 = a293;
    	a227 = 34 ;
    	a340 = ((((((a340 % 37) + 92) * 5) - -5021) % 37) + 64);
    	a311 = a298[4];
    	a271 = 15;
    	a268 = 33 ;
    	a328 = a279[4];
    	a357 = 13;
    	a115 = a185[((a394 / a394) + 3)];
    	a331 = a380[5];
    	a288 = a297;
    	a282 = 34 ;
    	a28 = a60[((a156 * a93) + -76)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2229\n");

    if((((a349 == 33 && ((32 == a315[3]) && (a396 <=  -72 && ((a28 == a60[7] &&  cf==1 ) && input == inputs[5])))) && a328 == a279[0]) && ((a282 == 33 && (a93 == 11 && a357 == 8)) && a227 == 33))) {
printf("POINT: 2230\n");
    	cf = 0;
printf("POINT: 2231\n");

    	if(((a180 == 4 || (22 == a100[4])) && !(a129 == a108[1]))) {
printf("POINT: 2232\n");
    	a93 = (a271 + 3);
    	a28 = a60[(a394 - a271)];
    	a180 = a164[((a271 * a357) + -76)];
    	a268 = 36 ;
    	a357 = 10; 
    	}else {
printf("POINT: 2234\n");
    	a93 = ((a357 - a357) - -9);
    	a33 = a198;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 2235\n");

    if(((a93 == 11 && (a328 == a279[0] && (a340 <=  21 && a396 <=  -72))) && ((a268 == 33 && ((input == inputs[3] && (a28 == a60[7] && (a349 == 33 &&  cf==1 ))) && (54 == a350[5]))) && a357 == 8))) {
printf("POINT: 2236\n");
    	cf = 0;
    	a311 = a298[7];
    	a223 = a343[5];
    	a396 = ((((a396 % 14964) + -72) / 5) + -21888);
    	a368 = a293;
    	a28 = a60[(a394 - 7)];
    	a288 = a399;
    	a329 = (((((a329 % 14922) + -156) * 1) / 5) + -9251);
    	a188 = a117;
    	a350 = a336;
    	a282 = 36 ;
    	a357 = 10;
    	a219 = 5;
    	a331 = a380[7];
    	a340 = ((((a340 * 1) + 28567) % 37) - -92);
    	a268 = 33 ;
    	a286 = ((((a286 / 5) * 5) / 5) - 22509);
    	a394 = 13;
    	a328 = a279[7];
    	a315 = a321;
    	a227 = 35 ;
    	a206 = 33 ;
    	a156 = (a271 + -3);
    	a271 = 12; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2237\n");

    if(((a271 == 10 && (input == inputs[6] && (a331 == a380[0] && (a349 == 33 && (32 == a315[3]))))) && ((((a28 == a60[7] && (a93 == 11 &&  cf==1 )) && (11 == a368[5])) && a206 == 33) && a227 == 33))) {
printf("POINT: 2238\n");
    	cf = 0;
printf("POINT: 2239\n");

    	if((a111 == a195[6] && (a182 == a59[3] && ((a129 == a108[4] || a47 == 13) && !(21 == a288[1]))))) {
printf("POINT: 2240\n");
    	a223 = a343[1];
    	a182 = a59[(a219 - -3)];
    	a180 = a164[(a93 - 5)];
    	a350 = a377;
    	a28 = a60[(a357 - 8)]; 
    	}else {
printf("POINT: 2242\n");
    	a56 = 36 ;
    	a28 = a60[((a357 / a271) + 2)];
    	a129 = a108[(a219 - 1)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2243\n");

    if(((a271 == 10 && (a311 == a298[0] && ((a331 == a380[0] && (a329 <=  -156 && a328 == a279[0])) && (19 == a288[5])))) && (input == inputs[14] && ((a349 == 33 && ( cf==1  && a93 == 11)) && a28 == a60[7])))) {
printf("POINT: 2244\n");
    	cf = 0;
    	a268 = 36 ;
    	a28 = a60[(a357 - 8)];
    	a93 = ((a394 - a219) + 6);
    	a357 = 8;
    	a180 = a164[((a219 * a394) + -26)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2245\n");

    if(((((54 == a350[5]) && (a340 <=  21 && a219 == 3)) && a227 == 33) && (a349 == 33 && ((a206 == 33 && (a286 <=  -79 && (( cf==1  && a28 == a60[7]) && input == inputs[7]))) && a93 == 11)))) {
printf("POINT: 2246\n");
    	cf = 0;
printf("POINT: 2247\n");

    	if((((239 < a97 || !(a21 == 33)) ||  cf==1 ) && !(a129 == 9))) {
printf("POINT: 2248\n");
    	a286 = (((((a286 % 14960) + -79) + 19447) * 10) / -9);
    	a350 = a366;
    	a271 = 11;
    	a311 = a298[5];
    	a315 = a295;
    	a56 = 36 ;
    	a368 = a371;
    	a331 = a380[7];
    	a396 = ((((a396 - -8403) + 7079) / 5) - 8737);
    	a206 = 33 ;
    	a282 = 36 ;
    	a227 = 36 ;
    	a28 = a60[(a357 + -6)];
    	a357 = 15;
    	a129 = a108[(a219 + -2)];
    	a219 = 4; 
    	}else {
printf("POINT: 2250\n");
    	a206 = 35 ;
    	a111 = a195[(a357 + -3)];
    	a268 = 35 ;
    	a394 = 15;
    	a311 = a298[4];
    	a227 = 33 ;
    	a350 = a336;
    	a286 = ((((a286 % 14960) - 79) / 5) - 20248);
    	a329 = (((((a329 % 79) - 56) + -14650) - -23659) - 8964);
    	a28 = a60[(a219 - 1)];
    	a56 = 34 ;
    	a315 = a295;
    	a396 = (((a396 / 5) / 5) - -2917);
    	a331 = a380[4];
    	a340 = ((((a340 % 15010) - 14988) - -23252) + -23253);
    	a357 = 13;
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm216(int input) {
printf("POINT: 2251\n");

    if(((a394 == 10 && ((a331 == a380[0] && (19 == a288[5])) && a282 == 33)) && (a349 == 34 && ((a328 == a279[0] && (a396 <=  -72 && (input == inputs[2] && (a28 == a60[7] &&  cf==1 )))) && a93 == 11)))) {
printf("POINT: 2252\n");
    	cf = 0;
    	a286 = ((((((a329 * a329) % 14999) + 6492) % 103) - -132) + 12);
    	a227 = 32 ;
    	a311 = a298[((a219 * a93) + -31)];
    	a396 = ((((((a396 * a286) % 14999) - 9296) / 5) % 103) + 208);
    	a282 = 32 ;
    	a315 = a273;
    	a329 = ((((((a329 * a286) % 14999) % 79) - 76) + -1) + 1);
    	a288 = a270;
    	a268 = 34 ;
    	a56 = 35 ;
    	a28 = a60[((a219 * a394) - 28)];
    	a328 = a279[(a271 + -10)];
    	a206 = 34 ;
    	a394 = ((a357 - a219) + 7);
    	a331 = a380[(a219 - 1)];
    	a0 = a72;
    	a340 = ((((((a340 * a286) % 14999) + 4580) % 37) + 91) * 1);
    	a357 = (a271 - 2);
    	a219 = (a93 - 6); 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2253\n");

    if(((a329 <=  -156 && (a206 == 33 && ((a357 == 8 && a282 == 33) && a349 == 34))) && (((a93 == 11 && (a28 == a60[7] && (input == inputs[3] &&  cf==1 ))) && a286 <=  -79) && (32 == a315[3])))) {
printf("POINT: 2254\n");
    	cf = 0;
    	a286 = ((((((a286 * a340) % 14999) % 103) - -187) + -1) - 0);
    	a282 = 34 ;
    	a315 = a273;
    	a206 = 34 ;
    	a394 = (a219 - -9);
    	a311 = a298[((a394 * a394) - 142)];
    	a227 = 34 ;
    	a56 = 32 ;
    	a288 = a399;
    	a161 = (a357 + -4);
    	a396 = (((((((a396 * a329) % 14999) % 103) - -35) * 5) % 103) - -18);
    	a28 = a60[(a93 - 9)];
    	a368 = a397;
    	a329 = (((((((a286 * a340) % 14999) * 2) % 83) - -86) + -19801) + 19801);
    	a223 = a343[(a93 - 9)];
    	a357 = (a93 - 1);
    	a268 = 34 ;
    	a328 = a279[(a93 + -9)];
    	a219 = (a394 + -7);
    	a331 = a380[(a394 - 10)]; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm218(int input) {
printf("POINT: 2255\n");

    if(((((a331 == a380[0] && a268 == 33) && a394 == 10) && a329 <=  -156) && (a340 <=  21 && ((a28 == a60[7] && ((input == inputs[0] && (a349 == 36 &&  cf==1 )) && a93 == 11)) && a206 == 33)))) {
printf("POINT: 2256\n");
    	cf = 0;
    	a368 = a371;
    	a396 = ((((2 / 5) - -11942) + -29503) + 17503);
    	a311 = a298[(a357 + -7)];
    	a227 = 32 ;
    	a328 = a279[(a93 + -10)];
    	a206 = 32 ;
    	a329 = (((((((a329 * a396) % 14999) * 2) % 79) - 75) - 15970) - -15969);
    	a157 = a64[(a219 / a357)];
    	a156 = (a357 + 4);
    	a331 = a380[(a93 + -10)];
    	a271 = ((a357 + a394) - 7);
    	a315 = a295;
    	a268 = 32 ;
    	a286 = ((((((a329 * a329) * 1) * 1) / 5) % 80) - -3);
    	a394 = a93;
    	a340 = ((((((a340 * a286) % 14999) % 15) + 37) / 5) - -22);
    	a219 = (a93 - 7);
    	a28 = a60[(a357 + -7)];
    	a282 = 32 ;
    	a357 = (a93 - 2); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2257\n");

    if((((a268 == 33 && (a340 <=  21 && (((input == inputs[8] && (( cf==1  && a93 == 11) && a349 == 36)) && a28 == a60[7]) && a227 == 33))) && ((a396 <=  -72 && (54 == a350[5])) && a206 == 33)) && a153 <= -36)) {
printf("POINT: 2258\n");
    	a190 -= (a190 - 20) < a190 ? 3 : 0;
printf("POINT: 2260\n");
    	cf = 0;
    	a227 = 32 ;
    	a206 = 32 ;
    	a340 = (((((((a340 * a329) % 14999) % 15) - -36) + 1) / 5) + 29);
    	a131 = ((a394 * a219) - 27);
    	a328 = a279[(a93 - 10)];
    	a286 = (((((((a286 * a340) % 14999) % 80) + 1) - 0) - -7493) - 7490);
    	a311 = a298[(a357 - 7)];
    	a394 = (a357 + 3);
    	a28 = a60[(a357 / a357)];
    	a357 = (a219 - -6);
    	a268 = 32 ;
    	a331 = a380[(a93 - 10)];
    	a350 = a366;
    	a282 = 32 ;
    	a156 = ((a93 - a131) + 1);
    	a396 = (((((((a396 * a340) % 14999) - 2604) % 43) - 26) + 4797) - 4789); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2261\n");

    if((((a223 == a343[0] && (((a93 == 11 &&  cf==1 ) && a28 == a60[7]) && a329 <=  -156)) && a357 == 8) && ((11 == a368[5]) && (a349 == 36 && ((a282 == 33 && a227 == 33) && input == inputs[3]))))) {
printf("POINT: 2262\n");
    	cf = 0;
printf("POINT: 2263\n");

    	if(a143 == 5) {
printf("POINT: 2264\n");
    	a350 = a377;
    	a331 = a380[((a219 - a93) + 10)];
    	a286 = ((((((a396 * a396) % 14999) / 5) % 103) + 183) + 5);
    	a368 = a293;
    	a288 = a399;
    	a328 = a279[(a93 + -9)];
    	a315 = a273;
    	a166 = a26[((a271 / a219) + -1)];
    	a56 = 33 ;
    	a282 = 34 ;
    	a329 = ((((((a329 * a396) % 14999) % 83) + 48) - -5) + -22);
    	a396 = ((((((a396 % 103) - -173) + 34) * 5) % 103) - -120);
    	a357 = (a93 + -1);
    	a28 = a60[(a394 + -8)];
    	a340 = ((((((a340 * a286) % 14999) - -4765) % 37) - -90) * 1);
    	a271 = (a93 - -1);
    	a227 = 34 ;
    	a206 = 34 ;
    	a394 = a271;
    	a311 = a298[((a93 * a271) + -130)];
    	a219 = (a357 - 5);
    	a268 = 32 ;
    	a223 = a343[((a93 - a93) + 2)]; 
    	}else {
printf("POINT: 2266\n");

    	}printf("%d\n", 23);  
    } 
printf("POINT: 2267\n");

    if(((((a349 == 36 && (a357 == 8 && a329 <=  -156)) && a328 == a279[0]) && a396 <=  -72) && (((((a28 == a60[7] &&  cf==1 ) && input == inputs[13]) && a93 == 11) && a394 == 10) && a282 == 33))) {
printf("POINT: 2268\n");
    	cf = 0;
    	a286 = (((((((a329 * a396) % 14999) % 103) + 178) + -14) * 9) / 10);
    	a368 = a293;
    	a206 = 34 ;
    	a394 = (a219 + 9);
    	a340 = (((((((a340 * a286) % 14999) * 2) % 37) - -91) / 5) - -63);
    	a328 = a279[(a394 - 10)];
    	a28 = a60[((a357 * a357) + -62)];
    	a396 = (((((((a396 * a329) % 14999) % 103) - -106) * 5) % 103) + 112);
    	a331 = a380[(a93 - 9)];
    	a315 = a273;
    	a0 = a96;
    	a329 = ((((((a329 * a286) % 14999) / 5) / 5) % 83) - -87);
    	a350 = a377;
    	a56 = 35 ;
    	a357 = ((a93 * a93) + -111); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2269\n");

    if(((((((((( cf==1  && input == inputs[7]) && a28 == a60[7]) && a93 == 11) && a349 == 36) && a286 <=  -79) && a311 == a298[0]) && a396 <=  -72) && ((32 == a315[3]) && ((19 == a288[5]) && (54 == a350[5])))) && a199 == 13)) {
printf("POINT: 2270\n");
    	cf = 0;
    	a350 = a366;
    	a329 = ((((((a329 * a286) % 14999) + 12165) % 79) - 98) + -3);
    	a156 = (a357 - 1);
    	a288 = a270;
    	a340 = ((((((a340 * a396) % 14999) + -8520) * 1) % 15) + 36);
    	a115 = a185[(a357 + -1)];
    	a28 = a60[((a357 * a271) + -79)];
    	a227 = 32 ;
    	a368 = a371;
    	a311 = a298[(a394 + -9)];
    	a282 = 32 ;
    	a271 = ((a357 - a394) - -13);
    	a268 = 32 ;
    	a331 = a380[(a394 + -9)];
    	a357 = (a93 + -2);
    	a328 = a279[(a156 + -6)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2271\n");

    if((((a349 == 36 && ((a219 == 3 && ((11 == a368[5]) && (a329 <=  -156 && a223 == a343[0]))) && a268 == 33)) && a286 <=  -79) && (a93 == 11 && ((a28 == a60[7] &&  cf==1 ) && input == inputs[5])))) {
printf("POINT: 2272\n");
    	a153 -= (a153 - 20) < a153 ? 4 : 0;
printf("POINT: 2274\n");
    	a199 += (a199 + 20) > a199 ? 1 : 0;
printf("POINT: 2276\n");
    	a57 += (a57 + 20) > a57 ? 2 : 0;
printf("POINT: 2278\n");
    	a190 += (a190 + 20) > a190 ? 2 : 0;
printf("POINT: 2280\n");
    	a1 += (a1 + 20) > a1 ? 1 : 0;
printf("POINT: 2282\n");
    	a2 += (a2 + 20) > a2 ? 2 : 0;
printf("POINT: 2284\n");
    	cf = 0;
    	a206 = 32 ;
    	a219 = (a394 + -6);
    	a331 = a380[(a219 + -3)];
    	a311 = a298[((a394 * a219) + -39)];
    	a227 = 32 ;
    	a340 = ((((((((a340 * a286) % 14999) - 5109) % 15) - -37) * 5) % 15) - -37);
    	a157 = a64[((a357 + a394) - 18)];
    	a268 = 32 ;
    	a28 = a60[(a271 / a394)];
    	a368 = a371;
    	a156 = ((a93 * a93) - 109);
    	a396 = (((((((a329 * a329) % 14999) % 43) - 61) - -9) - -7293) + -7299);
    	a357 = (a219 + 5);
    	a328 = a279[((a219 - a219) - -1)];
    	a271 = ((a394 + a219) + -3);
    	a282 = 32 ;
    	a315 = a295;
    	a286 = ((((((a329 * a396) % 14999) / 5) * 5) % 80) + 2);
    	a329 = ((((((a329 * a396) % 14999) * 2) * 1) % 79) + -76);
    	a394 = (a219 + 7); 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm43(int input) {
printf("POINT: 2285\n");

    if(((a394 == 10 && (a286 <=  -79 && (a331 == a380[0] && a206 == 33))) && (((54 == a350[5]) && ( cf==1  && a349 == 33)) && a223 == a343[0]))) {
printf("POINT: 2286\n");
    	calculate_outputm214(input);
    } 
printf("POINT: 2287\n");

    if(((a227 == 33 && a396 <=  -72) && ((a328 == a279[0] && (a357 == 8 && (a268 == 33 && ( cf==1  && a349 == 34)))) && a394 == 10))) {
printf("POINT: 2288\n");
    	calculate_outputm216(input);
    } 
printf("POINT: 2289\n");

    if((((a282 == 33 && (a349 == 36 &&  cf==1 )) && a271 == 10) && (a311 == a298[0] && (((54 == a350[5]) && a394 == 10) && a268 == 33)))) {
printf("POINT: 2290\n");
    	calculate_outputm218(input);
    } 
}
 void calculate_outputm221(int input) {
printf("POINT: 2291\n");

    if(((((input == inputs[13] && a219 == 3) && a357 == 8) && a340 <=  21) && (((((a28 == a60[7] && (a93 == 12 &&  cf==1 )) && a130 == a29[3]) && (19 == a288[5])) && a286 <=  -79) && a311 == a298[0]))) {
printf("POINT: 2292\n");
    	cf = 0;
    	a75 = 36 ;
    	a28 = a60[(a394 - 4)];
    	a155 = (((((((a329 * a396) % 14999) - -3977) % 16) - -87) - -29113) + -29127); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2293\n");

    if((((54 == a350[5]) && a130 == a29[3]) && ((11 == a368[5]) && ((a396 <=  -72 && (a331 == a380[0] && (((a93 == 12 && ( cf==1  && a28 == a60[7])) && input == inputs[7]) && a394 == 10))) && a340 <=  21)))) {
printf("POINT: 2294\n");
    	cf = 0;
    	a143 = a176[((a357 * a271) - 78)];
    	a264 = a290[a219];
    	a28 = a60[(a271 - 6)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2295\n");

    if(((a340 <=  21 && (((a206 == 33 && ((a130 == a29[3] && ( cf==1  && input == inputs[5])) && a357 == 8)) && (11 == a368[5])) && a93 == 12)) && (a223 == a343[0] && (a329 <=  -156 && a28 == a60[7])))) {
printf("POINT: 2296\n");
    	cf = 0;
printf("POINT: 2297\n");

    	if(a340 <=  21) {
printf("POINT: 2298\n");
    	a155 = ((((((a286 * a286) % 14999) + 4948) % 54) - -149) - -7);
    	a268 = 36 ;
    	a56 = 36 ;
    	a350 = a377;
    	a368 = a397;
    	a28 = a60[((a219 / a93) + 6)];
    	a223 = a343[2];
    	a329 = ((((a329 + 0) / 5) % 83) + 131);
    	a311 = a298[7];
    	a206 = 36 ;
    	a331 = a380[3];
    	a394 = 10;
    	a282 = 36 ;
    	a227 = 34 ;
    	a340 = (((a340 * 1) / 5) - -28879);
    	a396 = (((a396 / 5) + -1874) * 3);
    	a315 = a273;
    	a357 = 12;
    	a288 = a297;
    	a271 = 15;
    	a219 = 6;
    	a328 = a279[3];
    	a286 = ((((((a286 % 103) + 241) * 10) / 9) * 9) / 10); 
    	}else {
printf("POINT: 2300\n");
    	a20 = 34 ;
    	a271 = 15;
    	a340 = (((((a340 + 9391) + -4972) / 5) % 37) + 92);
    	a28 = a60[(a394 + -7)];
    	a328 = a279[5];
    	a350 = a336;
    	a357 = 14;
    	a219 = 5;
    	a227 = 34 ;
    	a396 = (((a396 / 5) / 5) + 27263);
    	a286 = (((((a286 % 103) + 193) + -10439) - 13859) - -24347);
    	a368 = a293;
    	a315 = a273;
    	a223 = a343[6];
    	a288 = a399;
    	a206 = 36 ;
    	a311 = a298[2];
    	a268 = 36 ;
    	a329 = ((((a329 / 5) - -8777) + -31152) - -34618);
    	a331 = a380[4];
    	a188 = a105;
    	a282 = 33 ;
    	a394 = 16;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2301\n");

    if((((((a268 == 33 && a130 == a29[3]) && a28 == a60[7]) && a282 == 33) && (32 == a315[3])) && (a223 == a343[0] && (((a93 == 12 && ( cf==1  && input == inputs[10])) && a219 == 3) && a340 <=  21)))) {
printf("POINT: 2302\n");
    	cf = 0;
printf("POINT: 2303\n");

    	if((a267 == 8 || (a136 == 7 && (a154 == 9 && a331 == 13)))) {
printf("POINT: 2304\n");
    	a130 = a29[((a93 + a93) + -18)]; 
    	}else {
printf("POINT: 2306\n");
    	a56 = 33 ;
    	a311 = a298[7];
    	a28 = a60[(a394 + -8)];
    	a340 = ((((((a340 % 15) + 36) + 0) * 5) % 15) + 27);
    	a286 = ((((a286 % 14854) - -15145) + 7003) - -1001);
    	a368 = a397;
    	a223 = a343[7];
    	a331 = a380[0];
    	a329 = ((((a329 - -10412) / 5) - 24781) - -38652);
    	a268 = 32 ;
    	a394 = 15;
    	a282 = 35 ;
    	a328 = a279[5];
    	a350 = a366;
    	a166 = a26[(a357 + -3)];
    	a315 = a295;
    	a271 = 15;
    	a396 = ((((((a396 * 1) % 43) + -4) * 5) % 43) - 27);
    	a288 = a270;
    	a206 = 32 ;
    	a219 = 6;
    	a357 = 11;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2307\n");

    if((((a271 == 10 && ((54 == a350[5]) && ((a219 == 3 && input == inputs[11]) && a93 == 12))) && a223 == a343[0]) && (a394 == 10 && ((a130 == a29[3] && ( cf==1  && a28 == a60[7])) && (32 == a315[3]))))) {
printf("POINT: 2308\n");
    	cf = 0;
    	a163 = (((((a286 * a329) % 14999) + -8747) + -12714) - 2553);
    	a28 = a60[((a219 + a394) + -13)];
    	a180 = a164[((a219 - a219) + 7)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2309\n");

    if(((a130 == a29[3] && a396 <=  -72) && (a394 == 10 && (a331 == a380[0] && (a340 <=  21 && ((11 == a368[5]) && (a93 == 12 && (a268 == 33 && ((a28 == a60[7] &&  cf==1 ) && input == inputs[3]))))))))) {
printf("POINT: 2310\n");
    	cf = 0;
    	a264 = a290[((a394 / a357) + 3)];
    	a351 = 36 ;
    	a28 = a60[(a357 - 4)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2311\n");

    if((((a28 == a60[7] && (a329 <=  -156 && (((a206 == 33 && a396 <=  -72) && a93 == 12) && a286 <=  -79))) && a331 == a380[0]) && (a282 == 33 && (a130 == a29[3] && ( cf==1  && input == inputs[6]))))) {
printf("POINT: 2312\n");
    	cf = 0;
    	a28 = a60[(a394 + -6)];
    	a143 = a176[((a357 + a271) + -14)];
    	a264 = a290[(a271 + -7)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2313\n");

    if(((a328 == a279[0] && (((a340 <=  21 && a223 == a343[0]) && a28 == a60[7]) && a286 <=  -79)) && (((54 == a350[5]) && (input == inputs[0] && ((a93 == 12 &&  cf==1 ) && a130 == a29[3]))) && a329 <=  -156))) {
printf("POINT: 2314\n");
    	cf = 0;
printf("POINT: 2315\n");

    	if(((a182 == 7 && (((103 < a155) && (212 >= a155)) || a206 == 36)) || !(19 == a368[1]))) {
printf("POINT: 2316\n");
    	a357 = 14;
    	a311 = a298[2];
    	a268 = 34 ;
    	a282 = 33 ;
    	a206 = 34 ;
    	a396 = (((a396 - 0) / 5) - -7398);
    	a28 = a60[(a93 - 11)];
    	a156 = (a93 + -1);
    	a227 = 34 ;
    	a329 = (((a329 / 5) + 26059) + -13177);
    	a394 = 10;
    	a331 = a380[4];
    	a271 = 12;
    	a368 = a397;
    	a328 = a279[2];
    	a286 = ((((((a286 % 14854) + 15145) * 10) / 9) - 29632) + 39054);
    	a86 = (a219 - -2);
    	a350 = a336;
    	a288 = a297;
    	a315 = a273;
    	a340 = ((((a340 - -19531) % 15010) - 14988) / 5);
    	a219 = 9; 
    	}else {
printf("POINT: 2318\n");
    	a396 = ((((a396 * 1) % 14887) - -15111) * 1);
    	a328 = a279[6];
    	a288 = a270;
    	a315 = a321;
    	a394 = 17;
    	a219 = 3;
    	a56 = 34 ;
    	a28 = a60[(a271 + -8)];
    	a357 = 8;
    	a206 = 36 ;
    	a340 = ((((a340 + 0) % 15) + 38) - -1);
    	a329 = ((((a329 % 14914) - -15085) - -11304) + 3183);
    	a111 = a195[(a271 - 9)];
    	a311 = a298[3];
    	a350 = a366;
    	a268 = 33 ;
    	a282 = 35 ;
    	a286 = (((a286 / 5) + 17130) + -38054);
    	a368 = a371;
    	a223 = a343[6];
    	a331 = a380[4];
    	a271 = 16;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2319\n");

    if(((a286 <=  -79 && (((a93 == 12 && (a130 == a29[3] &&  cf==1 )) && a271 == 10) && (54 == a350[5]))) && (((input == inputs[1] && (a28 == a60[7] && a223 == a343[0])) && a219 == 3) && a340 <=  21))) {
printf("POINT: 2320\n");
    	cf = 0;
printf("POINT: 2321\n");

    	if((a227 == 35 && a268 == 32)) {
printf("POINT: 2322\n");
    	a282 = 35 ;
    	a86 = (a271 + -3);
    	a329 = (((((a329 % 83) - -135) + 16977) / 5) - 3361);
    	a357 = 11;
    	a286 = (((((a286 / 5) + -23285) + 36578) * -1) / 10);
    	a206 = 34 ;
    	a156 = (a86 - -3);
    	a350 = a336;
    	a288 = a399;
    	a328 = a279[4];
    	a331 = a380[2];
    	a268 = 35 ;
    	a219 = 3;
    	a340 = (((((a340 - -13392) % 37) + 91) + -28934) - -28935);
    	a28 = a60[(a93 - 11)];
    	a315 = a273;
    	a227 = 34 ;
    	a396 = ((((a396 % 14887) - -15111) - 12430) - -25588);
    	a223 = a343[7];
    	a311 = a298[3];
    	a394 = 12;
    	a271 = 15; 
    	}else {
printf("POINT: 2324\n");
    	a169 = ((((((a286 * a340) % 14999) % 14919) + -15079) - 1) + -1);
    	a264 = a290[(a219 + 2)];
    	a28 = a60[((a357 - a93) - -8)];
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2325\n");

    if(((((32 == a315[3]) && a268 == 33) && a328 == a279[0]) && (a28 == a60[7] && (input == inputs[14] && ((((a93 == 12 && (a130 == a29[3] &&  cf==1 )) && (11 == a368[5])) && a331 == a380[0]) && a394 == 10))))) {
printf("POINT: 2326\n");
    	cf = 0;
    	a180 = a164[(a271 - 10)];
    	a112 = (a93 + 2);
    	a28 = a60[((a394 / a357) + -1)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2327\n");

    if(((a286 <=  -79 && (((32 == a315[3]) && a311 == a298[0]) && (19 == a288[5]))) && (a93 == 12 && (a28 == a60[7] && (a329 <=  -156 && (a268 == 33 && (input == inputs[12] && ( cf==1  && a130 == a29[3])))))))) {
printf("POINT: 2328\n");
    	a102 -= (a102 - 20) < a102 ? 3 : 0;
printf("POINT: 2330\n");
    	cf = 0;
    	a264 = a290[(a394 + -3)];
    	a206 = 33 ;
    	a132 = a91[(a271 - 7)];
    	a28 = a60[(a219 + 1)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2331\n");

    if(((a223 == a343[0] && (a130 == a29[3] && (a331 == a380[0] && ((54 == a350[5]) && a93 == 12)))) && (a329 <=  -156 && (a286 <=  -79 && ((input == inputs[4] && (a28 == a60[7] &&  cf==1 )) && (11 == a368[5])))))) {
printf("POINT: 2332\n");
    	cf = 0;
    	a21 = 35 ;
    	a264 = a290[(a357 - 7)];
    	a28 = a60[(a394 - 6)]; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2333\n");

    if((((a223 == a343[0] && (a268 == 33 && (a28 == a60[7] && ( cf==1  && a93 == 12)))) && (54 == a350[5])) && (((32 == a315[3]) && (input == inputs[8] && (a130 == a29[3] && a206 == 33))) && (11 == a368[5])))) {
printf("POINT: 2334\n");
    	cf = 0;
    	a156 = (a394 - a219);
    	a206 = 35 ;
    	a286 = ((((a286 - -19058) % 103) - -187) + 1);
    	a282 = 34 ;
    	a268 = 33 ;
    	a368 = a397;
    	a331 = a380[3];
    	a350 = a336;
    	a311 = a298[6];
    	a115 = a185[((a271 + a219) - 10)];
    	a340 = ((((a340 - -4545) % 14935) + 15064) - -1);
    	a357 = 8;
    	a219 = 5;
    	a227 = 33 ;
    	a394 = 14;
    	a328 = a279[2];
    	a315 = a321;
    	a288 = a399;
    	a396 = ((((a396 * 1) % 14887) - -15111) * 1);
    	a329 = (((a329 / 5) - 7843) * 2);
    	a28 = a60[((a219 * a93) + -47)];
    	a271 = 17; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2335\n");

    if(((a93 == 12 && (((a329 <=  -156 && input == inputs[9]) && (32 == a315[3])) && (19 == a288[5]))) && ((a311 == a298[0] && (a357 == 8 && ((a28 == a60[7] &&  cf==1 ) && a130 == a29[3]))) && (11 == a368[5])))) {
printf("POINT: 2336\n");
    	a45 -= (a45 - 20) < a45 ? 2 : 0;
printf("POINT: 2338\n");
    	cf = 0;
    	a28 = a60[(a219 + -3)];
    	a180 = a164[(a219 - -1)];
    	a93 = (a357 - -2); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2339\n");

    if(((a286 <=  -79 && ((input == inputs[2] && a340 <=  21) && (11 == a368[5]))) && (a206 == 33 && (((((a28 == a60[7] &&  cf==1 ) && a93 == 12) && a130 == a29[3]) && a227 == 33) && a271 == 10)))) {
printf("POINT: 2340\n");
    	cf = 0;
    	a93 = (a357 - -6);
    	a139 = a110; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm222(int input) {
printf("POINT: 2341\n");

    if(((a219 == 3 && (a271 == 10 && (a329 <=  -156 && ((input == inputs[8] &&  cf==1 ) && a130 == a29[4])))) && ((a268 == 33 && (a93 == 12 && (a223 == a343[0] && a28 == a60[7]))) && a340 <=  21))) {
printf("POINT: 2342\n");
    	a1 += (a1 + 20) > a1 ? 1 : 0;
printf("POINT: 2344\n");
    	cf = 0;
    	a350 = a366;
    	a223 = a343[(a394 - 9)];
    	a125 = ((((((a329 * a329) % 14999) - -821) % 101) + -25) - 3);
    	a28 = a60[((a219 / a219) + 4)];
    	a170 = 33 ;
    	a219 = (a394 - 6);
    	a227 = 32 ;
    	a315 = a295;
    	a311 = a298[(a93 - 11)];
    	a328 = a279[(a394 - 9)];
    	a329 = (((((((a340 * a340) % 14999) * 2) + 0) + 0) % 79) + -76);
    	a357 = ((a271 + a271) + -11);
    	a340 = ((((((a340 * a286) % 14999) % 15) - -36) + 0) - 0);
    	a288 = a270;
    	a368 = a371;
    	a286 = ((((60 + -62) / 5) - -12453) - 12371);
    	a268 = 32 ;
    	a394 = ((a271 + a271) + -9);
    	a271 = (a357 + 2); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2345\n");

    if(((((input == inputs[12] && a357 == 8) && (54 == a350[5])) && a227 == 33) && ((a286 <=  -79 && (((a93 == 12 && (a130 == a29[4] &&  cf==1 )) && a28 == a60[7]) && (11 == a368[5]))) && a311 == a298[0]))) {
printf("POINT: 2346\n");
    	cf = 0;
    	a32 = (a93 - -5);
    	a264 = a290[(a219 - 3)];
    	a331 = a380[(a394 - 8)];
    	a28 = a60[((a271 / a219) - -1)]; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm224(int input) {
printf("POINT: 2347\n");

    if(((a340 <=  21 && (a219 == 3 && (a28 == a60[7] && (a93 == 12 && (a130 == a29[6] &&  cf==1 ))))) && (a329 <=  -156 && ((11 == a368[5]) && (a311 == a298[0] && (a328 == a279[0] && input == inputs[8])))))) {
printf("POINT: 2348\n");
    	cf = 0;
    	a331 = a380[(a394 - 8)];
    	a264 = a290[(a271 - 10)];
    	a28 = a60[(a271 - 6)];
    	a32 = (a357 - -9); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2349\n");

    if(((((a130 == a29[6] && (a28 == a60[7] && (input == inputs[14] &&  cf==1 ))) && a93 == 12) && a219 == 3) && ((((a227 == 33 && a223 == a343[0]) && a329 <=  -156) && (54 == a350[5])) && a394 == 10))) {
printf("POINT: 2350\n");
    	cf = 0;
    	a28 = a60[(a93 - 12)];
    	a180 = a164[(a357 - 8)];
    	a112 = (a394 - 3); 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm44(int input) {
printf("POINT: 2351\n");

    if((((19 == a288[5]) && (((a219 == 3 && (( cf==1  && a130 == a29[3]) && a394 == 10)) && (54 == a350[5])) && a311 == a298[0])) && (11 == a368[5]))) {
printf("POINT: 2352\n");
    	calculate_outputm221(input);
    } 
printf("POINT: 2353\n");

    if((((a394 == 10 && a268 == 33) && a328 == a279[0]) && ((a206 == 33 && (( cf==1  && a130 == a29[4]) && a311 == a298[0])) && a331 == a380[0]))) {
printf("POINT: 2354\n");
    	calculate_outputm222(input);
    } 
printf("POINT: 2355\n");

    if((((a311 == a298[0] && (a130 == a29[6] &&  cf==1 )) && a286 <=  -79) && ((a282 == 33 && (a329 <=  -156 && a223 == a343[0])) && a328 == a279[0]))) {
printf("POINT: 2356\n");
    	calculate_outputm224(input);
    } 
}
 void calculate_outputm229(int input) {
printf("POINT: 2357\n");

    if((((a311 == a298[0] && (((19 == a288[5]) && ((input == inputs[11] && (11 == a368[5])) && a93 == 13)) && a394 == 10)) && a206 == 33) && (a331 == a380[0] && (( cf==1  && a263 == 36) && a28 == a60[7])))) {
printf("POINT: 2358\n");
    	cf = 0;
    	a328 = a279[3];
    	a227 = 36 ;
    	a396 = (((a396 + 0) + 0) * 1);
    	a394 = 17;
    	a282 = 34 ;
    	a268 = 35 ;
    	a115 = a185[((a357 * a219) + -23)];
    	a156 = (a357 + -1);
    	a286 = (((((a286 + 0) * 1) / 5) % 103) - -236);
    	a350 = a377;
    	a288 = a297;
    	a219 = 6;
    	a329 = ((((a329 - 0) % 14914) - -15085) * 1);
    	a368 = a293;
    	a340 = ((((a340 % 14935) - -15064) - -1) * 1);
    	a206 = 36 ;
    	a271 = 16;
    	a28 = a60[(a156 - 6)];
    	a331 = a380[5];
    	a223 = a343[0];
    	a311 = a298[3];
    	a315 = a321;
    	a357 = 13; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2359\n");

    if((((a282 == 33 && a93 == 13) && (54 == a350[5])) && ((a340 <=  21 && ((a357 == 8 && (((input == inputs[13] &&  cf==1 ) && a263 == 36) && a286 <=  -79)) && a394 == 10)) && a28 == a60[7]))) {
printf("POINT: 2360\n");
    	cf = 0;
    	a156 = ((a271 / a357) - -6);
    	a115 = a185[(a357 + -6)];
    	a28 = a60[((a394 + a357) + -17)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2361\n");

    if((((32 == a315[3]) && (((input == inputs[4] && ((a28 == a60[7] &&  cf==1 ) && a93 == 13)) && a263 == 36) && a357 == 8)) && ((((54 == a350[5]) && a311 == a298[0]) && a227 == 33) && a331 == a380[0]))) {
printf("POINT: 2362\n");
    	cf = 0;
printf("POINT: 2363\n");

    	if(((a131 == 3 && (a75 == 35 || a136 == 8)) || !(a161 == 7))) {
printf("POINT: 2364\n");
    	a125 = (((((a329 * a286) % 14999) - -485) + 14076) - -302);
    	a154 = (a93 - 3);
    	a28 = a60[(a394 + -5)]; 
    	}else {
printf("POINT: 2366\n");
    	a56 = 32 ;
    	a28 = a60[((a93 + a271) + -21)];
    	a161 = a357;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2367\n");

    if(((a219 == 3 && ((11 == a368[5]) && ((a271 == 10 && (((a93 == 13 &&  cf==1 ) && input == inputs[10]) && a263 == 36)) && a28 == a60[7]))) && ((54 == a350[5]) && (a394 == 10 && a223 == a343[0])))) {
printf("POINT: 2368\n");
    	cf = 0;
printf("POINT: 2369\n");

    	if((!(a351 == 34) && a223 == a343[4])) {
printf("POINT: 2370\n");
    	a264 = a290[(a271 + -3)];
    	a28 = a60[(a271 + -6)];
    	a132 = a91[(a394 - 4)]; 
    	}else {
printf("POINT: 2372\n");
    	a28 = a60[(a219 - -2)];
    	a286 = ((((((a286 % 103) + 216) * 5) + 8035) % 103) - -183);
    	a271 = 13;
    	a357 = 11;
    	a206 = 35 ;
    	a331 = a380[5];
    	a282 = 34 ;
    	a311 = a298[2];
    	a350 = a336;
    	a223 = a343[5];
    	a315 = a321;
    	a154 = (a93 - 5);
    	a368 = a293;
    	a340 = (((a340 + 0) + 0) - 0);
    	a394 = 13;
    	a227 = 34 ;
    	a396 = ((((a396 % 14887) + 15111) / 5) * 5);
    	a328 = a279[2];
    	a288 = a270;
    	a268 = 36 ;
    	a125 = (((((((a329 * a329) % 14999) - -11716) * 10) / 9) - 23717) - -23218);
    	a219 = 6;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2373\n");

    if((((54 == a350[5]) && ((a331 == a380[0] && a394 == 10) && input == inputs[2])) && ((a357 == 8 && (a328 == a279[0] && ((a28 == a60[7] && (a263 == 36 &&  cf==1 )) && a93 == 13))) && (19 == a288[5])))) {
printf("POINT: 2374\n");
    	cf = 0;
    	a155 = ((((((a329 * a340) % 14999) * 2) % 14893) - -15105) + 0);
    	a47 = (a219 - -10);
    	a28 = a60[(a271 + -4)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2375\n");

    if((((19 == a288[5]) && (a340 <=  21 && ((a328 == a279[0] && ((input == inputs[0] &&  cf==1 ) && a263 == 36)) && a93 == 13))) && (((a28 == a60[7] && a396 <=  -72) && a206 == 33) && a227 == 33))) {
printf("POINT: 2376\n");
    	cf = 0;
    	a136 = (a357 + 5);
    	a188 = a43;
    	a28 = a60[(a136 + -10)]; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2377\n");

    if((((54 == a350[5]) && (( cf==1  && a263 == 36) && a93 == 13)) && ((a394 == 10 && (a282 == 33 && (((a268 == 33 && a219 == 3) && input == inputs[9]) && a28 == a60[7]))) && a396 <=  -72))) {
printf("POINT: 2378\n");
    	cf = 0;
    	a350 = a336;
    	a368 = a371;
    	a206 = 35 ;
    	a396 = ((((a396 - -26006) % 43) - 28) / 5);
    	a28 = a60[((a219 / a93) - -2)];
    	a286 = (((((a286 - -3477) * 1) - -16903) % 14960) - 15038);
    	a315 = a321;
    	a329 = (((a329 * 1) / 5) - -13529);
    	a340 = ((((a340 % 15) + 37) + 11731) + -11731);
    	a56 = 35 ;
    	a357 = 15;
    	a394 = 16;
    	a331 = a380[7];
    	a328 = a279[4];
    	a0 = a96; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2379\n");

    if(((((a28 == a60[7] && ( cf==1  && input == inputs[6])) && a263 == 36) && (54 == a350[5])) && (a93 == 13 && (a268 == 33 && (((a331 == a380[0] && (11 == a368[5])) && a340 <=  21) && a286 <=  -79))))) {
printf("POINT: 2380\n");
    	cf = 0;
printf("POINT: 2381\n");

    	if((a357 == 9 && a328 == 2)) {
printf("POINT: 2382\n");
    	a28 = a60[((a219 * a357) + -23)];
    	a115 = a185[(a394 - 8)];
    	a156 = (a219 - -4); 
    	}else {
printf("POINT: 2384\n");
    	a263 = 35 ;
    	}printf("%d\n", 24);  
    } 
printf("POINT: 2385\n");

    if(((a227 == 33 && (a263 == 36 && (11 == a368[5]))) && (((a396 <=  -72 && (a223 == a343[0] && (a93 == 13 && (a28 == a60[7] && (input == inputs[3] &&  cf==1 ))))) && a328 == a279[0]) && a329 <=  -156))) {
printf("POINT: 2386\n");
    	cf = 0;
printf("POINT: 2387\n");

    	if(((((191 < a163) && (280 >= a163)) && ((a129 == 8 && a223 == 5) && !(a75 == 33))) && a331 == a380[5])) {
printf("POINT: 2388\n");
    	a80 = a271;
    	a125 = (((((a340 * a286) % 14999) / 5) + -3884) / 5);
    	a28 = a60[((a80 + a271) - 15)]; 
    	}else {
printf("POINT: 2390\n");
    	a282 = 33 ;
    	a219 = 3;
    	a125 = ((((((a340 * a396) % 14999) % 14982) - 15017) - 1) * 1);
    	a340 = (((((a340 * 1) % 15010) - 14988) - -5616) + -5616);
    	a396 = ((((a396 % 14887) - -15111) - -12211) - -2226);
    	a223 = a343[5];
    	a315 = a273;
    	a206 = 35 ;
    	a394 = 12;
    	a268 = 36 ;
    	a288 = a399;
    	a28 = a60[(a357 - 3)];
    	a286 = (((((a286 % 14960) - 79) / 5) * 5) + -14715);
    	a329 = ((((a329 + 5632) % 14922) - 15077) * 1);
    	a328 = a279[0];
    	a350 = a377;
    	a331 = a380[6];
    	a80 = (a357 + 7);
    	a368 = a397;
    	a311 = a298[7];
    	a271 = 13;
    	a357 = 14;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 2391\n");

    if((((a227 == 33 && (((11 == a368[5]) && ((((a263 == 36 &&  cf==1 ) && input == inputs[1]) && a396 <=  -72) && a93 == 13)) && a311 == a298[0])) && (54 == a350[5])) && (a219 == 3 && a28 == a60[7]))) {
printf("POINT: 2392\n");
    	a102 += (a102 + 20) > a102 ? 1 : 0;
printf("POINT: 2394\n");
    	cf = 0;
    	a180 = a164[((a93 - a394) - -3)];
    	a28 = a60[(a394 + -10)];
    	a182 = a59[(a394 - 8)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2395\n");

    if((((a340 <=  21 && (((a311 == a298[0] && a28 == a60[7]) && a227 == 33) && a93 == 13)) && a282 == 33) && (((19 == a288[5]) && (a263 == 36 && (input == inputs[12] &&  cf==1 ))) && a223 == a343[0]))) {
printf("POINT: 2396\n");
    	cf = 0;
    	a136 = ((a394 + a93) - 10);
    	a28 = a60[(a271 + -7)];
    	a188 = a43; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2397\n");

    if((((a268 == 33 && (a396 <=  -72 && (((54 == a350[5]) && a263 == 36) && a329 <=  -156))) && a223 == a343[0]) && (((a28 == a60[7] && (input == inputs[14] &&  cf==1 )) && a93 == 13) && a328 == a279[0]))) {
printf("POINT: 2398\n");
    	cf = 0;
printf("POINT: 2399\n");

    	if(((((a157 == a64[2] && !(51 == a33[3])) && a15 == 34) || !(a136 == 8)) || a131 == 9)) {
printf("POINT: 2400\n");
    	a288 = a297;
    	a227 = 35 ;
    	a328 = a279[6];
    	a115 = a185[(a357 - 4)];
    	a368 = a397;
    	a329 = (((((a329 % 83) + 123) - -28709) - 15696) + -12990);
    	a156 = ((a357 / a357) + 6);
    	a331 = a380[7];
    	a311 = a298[2];
    	a282 = 36 ;
    	a268 = 35 ;
    	a315 = a273;
    	a340 = (((a340 / 5) + -11575) * 1);
    	a271 = 17;
    	a28 = a60[(a93 + -12)];
    	a357 = 10; 
    	}else {
printf("POINT: 2402\n");
    	a28 = a60[(a219 - -1)];
    	a264 = a290[(a357 + -1)];
    	a132 = a91[((a271 + a357) + -14)];
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2403\n");

    if(((input == inputs[5] && (((a223 == a343[0] && (a219 == 3 && a268 == 33)) && a311 == a298[0]) && a329 <=  -156)) && ((((a93 == 13 &&  cf==1 ) && a28 == a60[7]) && a328 == a279[0]) && a263 == 36))) {
printf("POINT: 2404\n");
    	a84 -= (a84 - 20) < a84 ? 4 : 0;
printf("POINT: 2406\n");
    	cf = 0;
    	a80 = (a219 + 7);
    	a125 = ((((((a340 * a329) % 14999) + -7614) * 1) % 14982) + -15017);
    	a28 = a60[(a357 + -3)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2407\n");

    if(((((((a93 == 13 &&  cf==1 ) && input == inputs[7]) && a263 == 36) && (19 == a288[5])) && a311 == a298[0]) && (a331 == a380[0] && (((a28 == a60[7] && a271 == 10) && a357 == 8) && a340 <=  21)))) {
printf("POINT: 2408\n");
    	cf = 0;
    	a223 = a343[0];
    	a315 = a273;
    	a28 = a60[a219];
    	a286 = ((((a286 + 0) * 1) % 103) + 274);
    	a394 = 16;
    	a206 = 34 ;
    	a20 = 33 ;
    	a271 = 13;
    	a282 = 33 ;
    	a328 = a279[3];
    	a188 = a105;
    	a340 = ((((a340 % 15010) + -14988) + -3) / 5);
    	a350 = a377;
    	a368 = a293;
    	a219 = 5; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2409\n");

    if(((a227 == 33 && (((a93 == 13 && (a263 == 36 &&  cf==1 )) && a271 == 10) && a328 == a279[0])) && (((input == inputs[8] && (a28 == a60[7] && a282 == 33)) && (19 == a288[5])) && a331 == a380[0]))) {
printf("POINT: 2410\n");
    	cf = 0;
    	a28 = a60[((a271 * a271) - 96)];
    	a286 = ((((a286 % 14960) - 79) * 1) - 4817);
    	a351 = 32 ;
    	a264 = a290[(a93 - 9)]; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm45(int input) {
printf("POINT: 2411\n");

    if((((a206 == 33 && (a263 == 36 &&  cf==1 )) && (32 == a315[3])) && ((a331 == a380[0] && (a396 <=  -72 && a227 == 33)) && a268 == 33))) {
printf("POINT: 2412\n");
    	calculate_outputm229(input);
    } 
}
 void calculate_outputm230(int input) {
printf("POINT: 2413\n");

    if((((input == inputs[0] && (a328 == a279[0] && (54 == a350[5]))) && a340 <=  21) && ((32 == a315[3]) && (((((15 == a139[3]) && (a93 == 14 &&  cf==1 )) && a271 == 10) && a28 == a60[7]) && a286 <=  -79)))) {
printf("POINT: 2414\n");
    	cf = 0;
printf("POINT: 2415\n");

    	if((!(a170 == 33) && (!(a111 == a195[4]) || (a47 == 13 && (a311 == 2 && !(a180 == a164[6])))))) {
printf("POINT: 2416\n");
    	a93 = ((a271 + a357) - 6);
    	a130 = a29[(a93 + -7)]; 
    	}else {
printf("POINT: 2418\n");
    	a80 = (a394 - -5);
    	a125 = (((((a396 * a396) % 14999) + -27109) + -311) + -1984);
    	a396 = (((a396 / 5) / 5) - 5297);
    	a340 = ((((a340 % 15010) + -14988) - 3) + 0);
    	a368 = a397;
    	a329 = (((a329 / 5) - -28445) + 936);
    	a271 = 14;
    	a357 = 12;
    	a282 = 35 ;
    	a28 = a60[(a219 - -2)];
    	a331 = a380[4];
    	a206 = 33 ;
    	a350 = a377;
    	a288 = a297;
    	a223 = a343[2];
    	a219 = 8;
    	a311 = a298[7];
    	a328 = a279[3];
    	a286 = ((((a286 / 5) * 5) % 103) - -210);
    	a268 = 33 ;
    	a315 = a321;
    	a394 = 17;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2419\n");

    if(((a394 == 10 && (a340 <=  21 && (a331 == a380[0] && (input == inputs[14] && ( cf==1  && a28 == a60[7]))))) && ((a357 == 8 && (((15 == a139[3]) && a286 <=  -79) && a93 == 14)) && a328 == a279[0]))) {
printf("POINT: 2420\n");
    	cf = 0;
    	a268 = 32 ;
    	a350 = a336;
    	a223 = a343[7];
    	a206 = 32 ;
    	a328 = a279[3];
    	a28 = a60[((a357 - a219) - 3)];
    	a357 = 12;
    	a329 = (((((a329 % 14922) + -156) - 9356) + 39251) - 40964);
    	a331 = a380[5];
    	a396 = ((((a396 / 5) % 43) - -3) + 10);
    	a315 = a295;
    	a56 = 32 ;
    	a161 = (a219 - 1);
    	a286 = (((((a286 % 14960) - 79) - 7013) * 10) / 9);
    	a368 = a397;
    	a394 = 13;
    	a219 = 7; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2421\n");

    if((((a28 == a60[7] && ((15 == a139[3]) &&  cf==1 )) && a340 <=  21) && (a219 == 3 && (a328 == a279[0] && (input == inputs[11] && (a93 == 14 && (a223 == a343[0] && (a329 <=  -156 && a396 <=  -72)))))))) {
printf("POINT: 2422\n");
    	cf = 0;
printf("POINT: 2423\n");

    	if((a28 == 5 || a157 == a64[3])) {
printf("POINT: 2424\n");
    	a141 = (((((((a329 * a286) % 14999) / 5) + -1709) * 5) % 29) + 62);
    	a156 = ((a271 * a357) + -72);
    	a28 = a60[((a271 / a93) + 1)]; 
    	}else {
printf("POINT: 2426\n");
    	a28 = a60[(a394 + -10)];
    	a180 = a164[(a394 + -4)];
    	a182 = a59[(a93 - 12)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2427\n");

    if((((a311 == a298[0] && (input == inputs[8] && ((32 == a315[3]) && (( cf==1  && a93 == 14) && a28 == a60[7])))) && a282 == 33) && (a328 == a279[0] && ((a206 == 33 && (15 == a139[3])) && a271 == 10)))) {
printf("POINT: 2428\n");
    	cf = 0;
    	a28 = a60[(a93 / a219)];
    	a264 = a290[((a271 - a394) + 3)];
    	a143 = a176[(a271 + -8)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2429\n");

    if(((((a219 == 3 && (input == inputs[13] && (19 == a288[5]))) && a28 == a60[7]) && a328 == a279[0]) && (a331 == a380[0] && (a340 <=  21 && ((((15 == a139[3]) &&  cf==1 ) && a93 == 14) && a282 == 33))))) {
printf("POINT: 2430\n");
    	cf = 0;
    	a28 = a60[(a357 + -5)];
    	a136 = ((a394 + a271) - 11);
    	a188 = a43; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2431\n");

    if((((((a340 <=  21 && ((a28 == a60[7] && ( cf==1  && (15 == a139[3]))) && input == inputs[2])) && a93 == 14) && a206 == 33) && a311 == a298[0]) && ((a223 == a343[0] && a227 == 33) && a328 == a279[0]))) {
printf("POINT: 2432\n");
    	cf = 0;
    	a263 = 35 ;
    	a93 = ((a394 / a219) - -10); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2433\n");

    if(((a223 == a343[0] && (a328 == a279[0] && (((((15 == a139[3]) &&  cf==1 ) && a93 == 14) && a219 == 3) && a28 == a60[7]))) && ((a331 == a380[0] && ((19 == a288[5]) && input == inputs[10])) && a271 == 10))) {
printf("POINT: 2434\n");
    	cf = 0;
printf("POINT: 2435\n");

    	if(a121 == 32) {
printf("POINT: 2436\n");
    	a264 = a290[(a357 - 4)];
    	a351 = 36 ;
    	a28 = a60[(a357 + -4)]; 
    	}else {
printf("POINT: 2438\n");
    	a315 = a273;
    	a227 = 35 ;
    	a268 = 35 ;
    	a311 = a298[5];
    	a75 = 32 ;
    	a331 = a380[2];
    	a396 = (((((a396 % 14964) - 72) * 1) * 10) / 9);
    	a219 = 6;
    	a155 = ((((((((a329 * a340) % 14999) * 2) % 16) + 87) / 5) * 51) / 10);
    	a340 = ((((a340 * 1) % 14935) - -15064) - 0);
    	a350 = a377;
    	a28 = a60[((a93 * a394) + -134)];
    	a206 = 36 ;
    	a282 = 35 ;
    	a286 = (((((a286 % 103) - -218) + -9962) / 5) - -2214);
    	a368 = a397;
    	a223 = a343[5];
    	a357 = 12;
    	a288 = a297;
    	a328 = a279[7];
    	a271 = 10;
    	a394 = 16;
    	a329 = (((a329 + 22618) / 5) - -17475);
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2439\n");

    if(((a28 == a60[7] && (((15 == a139[3]) &&  cf==1 ) && a93 == 14)) && ((a328 == a279[0] && (a271 == 10 && (a357 == 8 && ((a394 == 10 && input == inputs[1]) && a331 == a380[0])))) && a286 <=  -79))) {
printf("POINT: 2440\n");
    	cf = 0;
    	a263 = 32 ;
    	a93 = (a357 + 5); 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2441\n");

    if(((a268 == 33 && ((a28 == a60[7] && ( cf==1  && a93 == 14)) && (15 == a139[3]))) && ((a329 <=  -156 && (((54 == a350[5]) && ((32 == a315[3]) && a206 == 33)) && input == inputs[4])) && a223 == a343[0]))) {
printf("POINT: 2442\n");
    	cf = 0;
    	a286 = ((((((a286 % 14854) + 15145) / 5) / 5) * 266) / 10);
    	a328 = a279[6];
    	a331 = a380[1];
    	a206 = 35 ;
    	a28 = a60[((a219 * a394) - 28)];
    	a329 = ((((a329 % 14922) + -156) + -4954) + -6182);
    	a219 = 7;
    	a315 = a295;
    	a350 = a336;
    	a357 = 12;
    	a56 = 32 ;
    	a396 = ((((a396 + 10826) % 14964) - 15035) - 1);
    	a394 = 11;
    	a368 = a397;
    	a223 = a343[4];
    	a268 = 35 ;
    	a161 = (a271 - 8); 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2443\n");

    if(((a328 == a279[0] && (a93 == 14 && a268 == 33)) && (a331 == a380[0] && ((((((input == inputs[5] &&  cf==1 ) && a28 == a60[7]) && (54 == a350[5])) && (15 == a139[3])) && a282 == 33) && a219 == 3)))) {
printf("POINT: 2444\n");
    	cf = 0;
printf("POINT: 2445\n");

    	if((a267 == 8 && a93 == 9)) {
printf("POINT: 2446\n");
    	a28 = a60[(a271 - 6)];
    	a264 = a290[(a271 - 3)];
    	a132 = a91[(a219 - -1)]; 
    	}else {
printf("POINT: 2448\n");
    	a268 = 33 ;
    	a156 = ((a394 * a93) - 129);
    	a28 = a60[((a271 + a394) + -19)];
    	a282 = 34 ;
    	a329 = ((((a329 - 0) - -18186) % 14922) + -15077);
    	a331 = a380[2];
    	a368 = a397;
    	a227 = 36 ;
    	a394 = 10;
    	a311 = a298[5];
    	a328 = a279[3];
    	a357 = 10;
    	a86 = (a156 + -7);
    	a286 = (((((a286 % 103) - -274) / 5) + -14411) + 14615);
    	a223 = a343[7];
    	a350 = a377;
    	a396 = ((((((a396 % 103) + 167) * 10) / 9) * 10) / 9);
    	a315 = a273;
    	a288 = a399;
    	a340 = ((((a340 % 15010) + -14988) + -1) - 1);
    	a219 = 9;
    	a271 = 14;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2449\n");

    if(((a282 == 33 && (((a93 == 14 && (a331 == a380[0] && a28 == a60[7])) && a219 == 3) && a394 == 10)) && ((a271 == 10 && (input == inputs[9] && ( cf==1  && (15 == a139[3])))) && a329 <=  -156))) {
printf("POINT: 2450\n");
    	cf = 0;
printf("POINT: 2451\n");

    	if((a357 == 15 || !(a394 == 10))) {
printf("POINT: 2452\n");
    	a223 = a343[4];
    	a350 = a377;
    	a182 = a59[(a357 + -2)];
    	a180 = a164[((a271 + a394) - 14)];
    	a28 = a60[(a394 - 10)]; 
    	}else {
printf("POINT: 2454\n");
    	a99 = a93;
    	a93 = ((a357 / a357) + 15);
    	}printf("%d\n", 19);  
    } 
printf("POINT: 2455\n");

    if(((input == inputs[3] && ((a286 <=  -79 && a219 == 3) && a227 == 33)) && (a28 == a60[7] && (a394 == 10 && (a340 <=  21 && ((( cf==1  && (15 == a139[3])) && a93 == 14) && a331 == a380[0])))))) {
printf("POINT: 2456\n");
    	cf = 0;
    	a156 = (a93 - 1);
    	a227 = 35 ;
    	a288 = a399;
    	a368 = a293;
    	a286 = ((((a286 % 103) + 278) + 1863) + -1873);
    	a328 = a279[0];
    	a268 = 36 ;
    	a357 = 8;
    	a282 = 34 ;
    	a315 = a273;
    	a311 = a298[3];
    	a350 = a377;
    	a219 = 8;
    	a340 = ((((a340 * 1) - 0) % 37) + 91);
    	a28 = a60[((a394 + a271) - 17)];
    	a188 = a117; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2457\n");

    if(((input == inputs[6] && a282 == 33) && (a219 == 3 && (a328 == a279[0] && (((((a93 == 14 && (a28 == a60[7] &&  cf==1 )) && (15 == a139[3])) && a227 == 33) && a271 == 10) && a223 == a343[0]))))) {
printf("POINT: 2458\n");
    	a45 += (a45 + 20) > a45 ? 2 : 0;
printf("POINT: 2460\n");
    	cf = 0;
    	a132 = a91[((a219 - a357) - -9)];
    	a264 = a290[((a219 * a219) + -2)];
    	a28 = a60[((a271 - a93) - -8)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2461\n");

    if(((a331 == a380[0] && (((32 == a315[3]) && (a227 == 33 && input == inputs[12])) && a271 == 10)) && (a206 == 33 && ((15 == a139[3]) && (a394 == 10 && ((a93 == 14 &&  cf==1 ) && a28 == a60[7])))))) {
printf("POINT: 2462\n");
    	cf = 0;
printf("POINT: 2463\n");

    	if((a67 <=  48 && a131 == 4)) {
printf("POINT: 2464\n");
    	a130 = a29[((a271 / a357) - -2)];
    	a93 = (a219 - -9); 
    	}else {
printf("POINT: 2466\n");
    	a93 = (a357 + 4);
    	a130 = a29[(a93 - 9)];
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2467\n");

    if(((a219 == 3 && (a28 == a60[7] && (input == inputs[7] &&  cf==1 ))) && ((11 == a368[5]) && ((a227 == 33 && ((a328 == a279[0] && ((19 == a288[5]) && (15 == a139[3]))) && a93 == 14)) && a340 <=  21)))) {
printf("POINT: 2468\n");
    	cf = 0;
    	a67 = ((((((a340 * a286) % 14999) + -5068) - 519) % 14939) - -15059);
    	a93 = (a271 - -5); 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm231(int input) {
printf("POINT: 2469\n");

    if(((a93 == 14 && ((input == inputs[9] &&  cf==1 ) && a28 == a60[7])) && (((19 == a288[5]) && (a219 == 3 && ((a331 == a380[0] && (a268 == 33 && a206 == 33)) && a227 == 33))) && (22 == a139[4])))) {
printf("POINT: 2470\n");
    	cf = 0;
printf("POINT: 2471\n");

    	if(((a80 == 12 &&  cf==1 ) && !(a28 == a60[0]))) {
printf("POINT: 2472\n");
    	a28 = a60[((a271 * a394) + -97)];
    	a136 = (a219 + 10);
    	a188 = a43; 
    	}else {
printf("POINT: 2474\n");
    	a47 = (a93 + -1);
    	a155 = ((((((a286 * a286) % 14999) / 5) + -14254) / 5) + 19553);
    	a28 = a60[(a394 + -4)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2475\n");

    if((((19 == a288[5]) && ((a223 == a343[0] && ((54 == a350[5]) && (((22 == a139[4]) &&  cf==1 ) && a93 == 14))) && input == inputs[12])) && (a206 == 33 && ((11 == a368[5]) && (a28 == a60[7] && a311 == a298[0]))))) {
printf("POINT: 2476\n");
    	cf = 0;
    	a180 = a164[((a219 / a394) - -6)];
    	a182 = a59[((a271 * a219) + -28)];
    	a28 = a60[((a271 * a271) + -100)]; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2477\n");

    if(((a331 == a380[0] && (a394 == 10 && (a340 <=  21 && a329 <=  -156))) && ((((input == inputs[11] && ((22 == a139[4]) && (a28 == a60[7] &&  cf==1 ))) && a93 == 14) && a219 == 3) && a286 <=  -79))) {
printf("POINT: 2478\n");
    	cf = 0;
    	a311 = a298[5];
    	a156 = (a271 - 3);
    	a396 = (((((a396 % 14964) + -72) + -9736) - -28969) - 23571);
    	a206 = 36 ;
    	a331 = a380[2];
    	a268 = 35 ;
    	a329 = (((((a329 % 83) + 156) + -25) * 9) / 10);
    	a288 = a399;
    	a227 = 33 ;
    	a219 = 7;
    	a282 = 36 ;
    	a315 = a273;
    	a368 = a397;
    	a340 = (((a340 + 0) / 5) + -13968);
    	a350 = a377;
    	a271 = 13;
    	a223 = a343[2];
    	a328 = a279[0];
    	a115 = a185[(a394 - 9)];
    	a28 = a60[((a271 - a271) - -1)];
    	a357 = 11;
    	a286 = (((a286 / 5) / 5) - -16749);
    	a394 = 12; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2479\n");

    if(((((a93 == 14 && ( cf==1  && (22 == a139[4]))) && a340 <=  21) && a271 == 10) && (a311 == a298[0] && (((a329 <=  -156 && ((54 == a350[5]) && a28 == a60[7])) && (19 == a288[5])) && input == inputs[10])))) {
printf("POINT: 2480\n");
    	cf = 0;
    	a28 = a60[((a357 + a357) + -15)];
    	a328 = a279[2];
    	a331 = a380[5];
    	a206 = 33 ;
    	a227 = 35 ;
    	a282 = 35 ;
    	a268 = 35 ;
    	a286 = ((((((a286 % 14854) - -15145) * 10) / 9) * 10) / 9);
    	a315 = a273;
    	a394 = 13;
    	a151 = (a219 - -12);
    	a329 = (((((a329 * 1) * 1) / 5) % 83) - -103);
    	a357 = 14;
    	a311 = a298[3];
    	a156 = (a219 - -10); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2481\n");

    if((((32 == a315[3]) && (a227 == 33 && ((11 == a368[5]) && ((a93 == 14 && (a206 == 33 && a28 == a60[7])) && a396 <=  -72)))) && (a268 == 33 && (input == inputs[8] && ((22 == a139[4]) &&  cf==1 ))))) {
printf("POINT: 2482\n");
    	cf = 0;
    	a180 = a164[(a357 + -1)];
    	a163 = ((((((a340 * a340) % 14999) - -2338) % 44) + 235) + 2);
    	a28 = a60[((a219 / a219) + -1)]; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2483\n");

    if((((a340 <=  21 && (((22 == a139[4]) && (( cf==1  && a28 == a60[7]) && a93 == 14)) && (54 == a350[5]))) && a394 == 10) && ((input == inputs[2] && ((32 == a315[3]) && a357 == 8)) && a331 == a380[0]))) {
printf("POINT: 2484\n");
    	cf = 0;
    	a112 = ((a357 * a271) - 73);
    	a180 = a164[(a394 + -10)];
    	a28 = a60[(a93 - 14)]; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2485\n");

    if(((11 == a368[5]) && (a282 == 33 && (a396 <=  -72 && (a328 == a279[0] && ((a93 == 14 && (a357 == 8 && ((( cf==1  && input == inputs[6]) && (22 == a139[4])) && a28 == a60[7]))) && a331 == a380[0])))))) {
printf("POINT: 2486\n");
    	cf = 0;
printf("POINT: 2487\n");

    	if(((a157 == 9 || a267 == 5) || a223 == 9)) {
printf("POINT: 2488\n");
    	a268 = 36 ;
    	a331 = a380[7];
    	a368 = a397;
    	a282 = 35 ;
    	a271 = 12;
    	a28 = a60[(a357 + -7)];
    	a340 = (((((a340 / 5) + -18113) + 37934) % 37) + 81);
    	a288 = a297;
    	a227 = 35 ;
    	a311 = a298[0];
    	a156 = (a394 + -3);
    	a315 = a321;
    	a357 = 8;
    	a329 = ((((a329 % 14922) - 156) - -8477) + -10464);
    	a328 = a279[0];
    	a115 = a185[(a394 + -6)]; 
    	}else {
printf("POINT: 2490\n");
    	a32 = (a219 - -13);
    	a28 = a60[(a357 + -4)];
    	a264 = a290[((a32 + a219) - 19)];
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2491\n");

    if(((a340 <=  21 && ((((19 == a288[5]) && (input == inputs[14] && a329 <=  -156)) && a93 == 14) && a311 == a298[0])) && ((a271 == 10 && (a28 == a60[7] && ((22 == a139[4]) &&  cf==1 ))) && a286 <=  -79))) {
printf("POINT: 2492\n");
    	cf = 0;
    	a28 = a60[(a219 - -3)];
    	a75 = 36 ;
    	a155 = (((((((a329 * a340) % 14999) * 2) / 5) / 5) % 16) - -86); 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2493\n");

    if(((a271 == 10 && (((input == inputs[0] && a268 == 33) && (11 == a368[5])) && a311 == a298[0])) && ((32 == a315[3]) && (a340 <=  21 && (a93 == 14 && (a28 == a60[7] && ( cf==1  && (22 == a139[4])))))))) {
printf("POINT: 2494\n");
    	cf = 0;
    	a15 = 32 ;
    	a180 = a164[(a357 - 7)];
    	a28 = a60[((a394 * a219) - 30)]; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2495\n");

    if(((a28 == a60[7] && (a340 <=  21 && (a331 == a380[0] && ((22 == a139[4]) && ( cf==1  && input == inputs[13]))))) && ((((a223 == a343[0] && a219 == 3) && a328 == a279[0]) && a93 == 14) && a227 == 33))) {
printf("POINT: 2496\n");
    	cf = 0;
    	a328 = a279[5];
    	a223 = a343[0];
    	a219 = 6;
    	a288 = a399;
    	a331 = a380[4];
    	a125 = (((((a286 * a329) % 14999) - -6890) - -7823) + 29);
    	a315 = a321;
    	a282 = 33 ;
    	a227 = 34 ;
    	a271 = 15;
    	a311 = a298[5];
    	a28 = a60[((a357 - a93) - -11)];
    	a396 = (((a396 / 5) + 13526) / 5);
    	a368 = a293;
    	a394 = 14;
    	a286 = (((a286 / 5) - -29423) - -382);
    	a350 = a336;
    	a340 = ((((a340 % 37) - -90) - 0) + 0);
    	a154 = a357;
    	a206 = 36 ;
    	a268 = 33 ;
    	a357 = 10; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2497\n");

    if((((((a28 == a60[7] && (((22 == a139[4]) &&  cf==1 ) && a93 == 14)) && a219 == 3) && a311 == a298[0]) && a394 == 10) && (a206 == 33 && ((a286 <=  -79 && input == inputs[1]) && a268 == 33)))) {
printf("POINT: 2498\n");
    	cf = 0;
    	a28 = a60[(a271 + -9)];
    	a151 = (a219 + 11);
    	a156 = (a219 + 10); 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2499\n");

    if((((22 == a139[4]) && ((a311 == a298[0] && (a93 == 14 && (a28 == a60[7] &&  cf==1 ))) && a286 <=  -79)) && (input == inputs[5] && (a396 <=  -72 && (a329 <=  -156 && (a227 == 33 && a331 == a380[0])))))) {
printf("POINT: 2500\n");
    	cf = 0;
    	a264 = a290[(a357 + -6)];
    	a144 = 36 ;
    	a28 = a60[(a271 + -6)]; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2501\n");

    if((((a357 == 8 && ((11 == a368[5]) && (a93 == 14 && a340 <=  21))) && a227 == 33) && (a206 == 33 && (a219 == 3 && ((input == inputs[7] && ( cf==1  && (22 == a139[4]))) && a28 == a60[7]))))) {
printf("POINT: 2502\n");
    	cf = 0;
printf("POINT: 2503\n");

    	if((129 < a340 || ((!(a331 == a380[5]) || (a130 == a29[3] || a28 == 11)) && !(17 == a100[5])))) {
printf("POINT: 2504\n");
    	a21 = 35 ;
    	a264 = a290[(a394 + -9)];
    	a28 = a60[(a93 - 10)]; 
    	}else {
printf("POINT: 2506\n");
    	a28 = a60[((a271 / a357) - 1)];
    	a15 = 35 ;
    	a180 = a164[(a93 - 13)];
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2507\n");

    if(((((22 == a139[4]) && a329 <=  -156) && a282 == 33) && (a93 == 14 && (a357 == 8 && ((a394 == 10 && (a219 == 3 && (( cf==1  && a28 == a60[7]) && input == inputs[3]))) && a328 == a279[0]))))) {
printf("POINT: 2508\n");
    	cf = 0;
    	a56 = 35 ;
    	a28 = a60[((a219 / a357) + 2)];
    	a223 = a343[4];
    	a288 = a297;
    	a206 = 35 ;
    	a315 = a321;
    	a331 = a380[0];
    	a340 = ((((a340 - 0) % 15) - -36) - 0);
    	a311 = a298[5];
    	a329 = (((a329 - 0) / 5) + -22156);
    	a271 = 17;
    	a368 = a397;
    	a328 = a279[7];
    	a227 = 36 ;
    	a268 = 36 ;
    	a396 = ((((a396 % 43) - -1) + -9) - -17);
    	a350 = a366;
    	a219 = 6;
    	a0 = a72;
    	a394 = 13;
    	a286 = ((((a286 + 0) + 0) % 80) - -24);
    	a282 = 33 ;
    	a357 = 8; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2509\n");

    if(((((54 == a350[5]) && (a357 == 8 && (a28 == a60[7] && (11 == a368[5])))) && a227 == 33) && (((input == inputs[4] && (( cf==1  && (22 == a139[4])) && a93 == 14)) && a331 == a380[0]) && a340 <=  21))) {
printf("POINT: 2510\n");
    	cf = 0;
printf("POINT: 2511\n");

    	if((( cf==1  || !(55 == a90[0])) || a166 == a26[1])) {
printf("POINT: 2512\n");
    	a328 = a279[2];
    	a350 = a336;
    	a340 = ((((a340 * 1) % 15010) - 14988) + -1);
    	a156 = ((a394 / a357) + 10);
    	a223 = a343[7];
    	a268 = 34 ;
    	a329 = ((((((a329 % 83) - -127) * 10) / 9) * 9) / 10);
    	a311 = a298[6];
    	a271 = 16;
    	a219 = 7;
    	a28 = a60[(a394 - 9)];
    	a282 = 36 ;
    	a288 = a399;
    	a396 = (((((a396 % 103) - -134) + -20822) + 6206) + 14609);
    	a331 = a380[4];
    	a357 = 11;
    	a368 = a293;
    	a315 = a321;
    	a86 = (a156 - 7);
    	a286 = ((((((a286 % 103) + 265) * 9) / 10) + 21421) + -21441);
    	a227 = 35 ;
    	a394 = 15; 
    	}else {
printf("POINT: 2514\n");
    	a93 = (a271 - 1);
    	a33 = a10;
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm46(int input) {
printf("POINT: 2515\n");

    if(((a271 == 10 && ((( cf==1  && (15 == a139[3])) && a394 == 10) && a396 <=  -72)) && ((a268 == 33 && a331 == a380[0]) && a329 <=  -156))) {
printf("POINT: 2516\n");
    	calculate_outputm230(input);
    } 
printf("POINT: 2517\n");

    if((((a396 <=  -72 && ((54 == a350[5]) && a340 <=  21)) && a219 == 3) && ((((22 == a139[4]) &&  cf==1 ) && (32 == a315[3])) && (11 == a368[5])))) {
printf("POINT: 2518\n");
    	calculate_outputm231(input);
    } 
}
 void calculate_outputm236(int input) {
printf("POINT: 2519\n");

    if(((a311 == a298[0] && (input == inputs[0] && ((19 == a288[5]) && a329 <=  -156))) && (a357 == 8 && ((32 == a315[3]) && ((a219 == 3 && (a93 == 16 && (a28 == a60[7] &&  cf==1 ))) && a99 == 8))))) {
printf("POINT: 2520\n");
    	cf = 0;
    	a286 = (((((((a286 * a329) % 14999) % 80) + 3) / 5) - 20366) + 20338);
    	a112 = (a219 - -5);
    	a180 = a164[(a93 + -16)];
    	a28 = a60[(a219 - 3)]; 
    	 printf("%d\n", 24);  
    } 
printf("POINT: 2521\n");

    if(((((a328 == a279[0] && ((input == inputs[7] && (54 == a350[5])) && (19 == a288[5]))) && a99 == 8) && a223 == a343[0]) && (a282 == 33 && (a331 == a380[0] && (( cf==1  && a93 == 16) && a28 == a60[7]))))) {
printf("POINT: 2522\n");
    	cf = 0;
    	a286 = (((((((a286 * a329) % 14999) / 5) + 14773) - -299) % 80) - 78);
    	a28 = a60[(a99 - 2)];
    	a288 = a270;
    	a368 = a371;
    	a350 = a366;
    	a155 = (((((a340 * a329) % 14999) + -14931) + -43) - 13);
    	a394 = (a219 + 8);
    	a223 = a343[((a357 + a219) + -10)];
    	a340 = ((((((a329 * a286) % 14999) / 5) + 22918) % 15) - -33);
    	a396 = ((((((a286 * a329) % 14999) % 43) - 26) - -20952) - 20952);
    	a21 = 32 ;
    	a328 = a279[(a99 + -7)];
    	a282 = 32 ;
    	a268 = 32 ;
    	a311 = a298[(a93 - 15)];
    	a271 = ((a219 / a219) - -10);
    	a357 = (a219 + 6);
    	a206 = 32 ;
    	a315 = a295;
    	a331 = a380[(a394 + -10)];
    	a227 = 32 ;
    	a329 = (((((((a329 * a396) % 14999) * 2) / 5) * 5) % 79) - 75);
    	a219 = ((a394 - a394) - -4); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2523\n");

    if(((((a340 <=  21 && ((( cf==1  && a28 == a60[7]) && input == inputs[12]) && a99 == 8)) && a328 == a279[0]) && a206 == 33) && (a396 <=  -72 && (a223 == a343[0] && (a93 == 16 && (54 == a350[5])))))) {
printf("POINT: 2524\n");
    	cf = 0;
    	a15 = 33 ;
    	a180 = a164[((a99 + a219) + -10)];
    	a223 = a343[(a219 - 3)];
    	a28 = a60[((a394 - a93) - -6)]; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm238(int input) {
printf("POINT: 2525\n");

    if((((((54 == a350[5]) && ((((a93 == 16 &&  cf==1 ) && a99 == 13) && a271 == 10) && input == inputs[7])) && (19 == a288[5])) && (((a328 == a279[0] && a206 == 33) && a28 == a60[7]) && a331 == a380[0])) && a199 == 13)) {
printf("POINT: 2526\n");
    	cf = 0;
    	a115 = a185[(a93 - 9)];
    	a156 = ((a271 + a394) - 13);
    	a350 = a366;
    	a28 = a60[((a271 - a271) - -1)];
    	a357 = (a271 + -1);
    	a288 = a270;
    	a227 = 32 ;
    	a282 = 32 ;
    	a311 = a298[(a156 + -6)];
    	a268 = 32 ;
    	a331 = a380[((a99 * a156) - 90)];
    	a340 = (((((((a340 * a286) % 14999) + 99) % 15) - -36) + -8745) + 8747);
    	a368 = a371;
    	a329 = ((((((a329 * a286) % 14999) % 79) + -107) - -4301) - 4331);
    	a328 = a279[(a156 + -6)];
    	a271 = (a156 - -4); 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2527\n");

    if(((a331 == a380[0] && (a206 == 33 && (a340 <=  21 && (input == inputs[3] && a286 <=  -79)))) && (a328 == a279[0] && (a311 == a298[0] && (a99 == 13 && (a93 == 16 && (a28 == a60[7] &&  cf==1 ))))))) {
printf("POINT: 2528\n");
    	cf = 0;
printf("POINT: 2529\n");

    	if((a182 == a59[3] || (57 == a350[2]))) {
printf("POINT: 2530\n");
    	 
    	}else {
printf("POINT: 2532\n");
    	a396 = (((89 + -22709) * 1) - -22599);
    	a219 = ((a93 - a357) + -4);
    	a329 = (((((((a329 * a396) % 14999) % 79) + -76) * 5) % 79) + -75);
    	a368 = a371;
    	a357 = (a219 - -5);
    	a315 = a295;
    	a121 = 34 ;
    	a282 = 32 ;
    	a227 = 32 ;
    	a340 = ((((((a340 * a396) % 14999) % 15) - -37) * 1) + 2);
    	a350 = a366;
    	a268 = 32 ;
    	a286 = (((((((a286 * a396) % 14999) % 80) + 3) * 5) % 80) - -2);
    	a223 = a343[(a219 + -3)];
    	a288 = a270;
    	a331 = a380[(a99 + -12)];
    	a311 = a298[(a219 - 3)];
    	a206 = 32 ;
    	a28 = a60[(a394 - 9)];
    	a156 = (a271 + 4);
    	a271 = ((a394 - a394) - -11);
    	a328 = a279[((a99 - a394) + -2)];
    	a394 = ((a219 * a219) + -5);
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2533\n");

    if(((((a206 == 33 && a396 <=  -72) && a28 == a60[7]) && a394 == 10) && (((a328 == a279[0] && (input == inputs[13] && (( cf==1  && a99 == 13) && a93 == 16))) && a286 <=  -79) && (19 == a288[5])))) {
printf("POINT: 2534\n");
    	cf = 0;
    	a350 = a377;
    	a28 = a60[(a357 - 6)];
    	a396 = (((((96 * 10) / 9) * 10) / 9) + -37);
    	a329 = ((((((a329 * a340) % 14999) % 83) + 88) - -1) + -1);
    	a286 = ((((((a396 * a396) % 14999) - 28195) / 5) % 103) - -272);
    	a331 = a380[((a271 * a93) - 158)];
    	a328 = a279[(a93 + -14)];
    	a56 = 35 ;
    	a0 = a96;
    	a394 = (a357 - -4);
    	a206 = 34 ;
    	a340 = ((((((a340 * a286) % 14999) % 37) - -90) + -4069) + 4069);
    	a368 = a293;
    	a357 = (a99 + -3); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2535\n");

    if((((a396 <=  -72 && (a268 == 33 && ((input == inputs[8] &&  cf==1 ) && a93 == 16))) && (a223 == a343[0] && (a28 == a60[7] && ((54 == a350[5]) && (a219 == 3 && (a99 == 13 && a271 == 10)))))) && a153 <= -36)) {
printf("POINT: 2536\n");
    	cf = 0;
    	a396 = (((((((a396 * a329) % 14999) % 43) + -31) - 30) * 10) / 9);
    	a340 = (((((((a340 * a286) % 14999) - -9382) + 2350) * 1) % 15) + 38);
    	a328 = a279[((a99 / a93) + 1)];
    	a131 = ((a357 * a394) - 77);
    	a350 = a366;
    	a206 = 32 ;
    	a227 = 32 ;
    	a282 = 32 ;
    	a28 = a60[(a93 + -15)];
    	a286 = (((((a340 * a340) + -21191) * 1) % 80) + 17);
    	a394 = (a357 + 3);
    	a156 = (a271 - 1);
    	a331 = a380[(a219 - 2)];
    	a268 = 32 ;
    	a311 = a298[(a357 - 7)];
    	a357 = 9; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2537\n");

    if((((input == inputs[0] && a286 <=  -79) && a331 == a380[0]) && (((11 == a368[5]) && (((a93 == 16 && (( cf==1  && a28 == a60[7]) && a99 == 13)) && a340 <=  21) && a268 == 33)) && (54 == a350[5])))) {
printf("POINT: 2538\n");
    	cf = 0;
    	a157 = a64[(a99 + -13)];
    	a156 = ((a219 - a271) - -19);
    	a328 = a279[((a271 * a93) - 159)];
    	a331 = a380[(a156 - 11)];
    	a311 = a298[(a394 + -9)];
    	a315 = a295;
    	a268 = 32 ;
    	a206 = 32 ;
    	a282 = 32 ;
    	a340 = (((((((a340 * a329) % 14999) + 12789) % 15) - -36) - 23917) - -23919);
    	a28 = a60[(a357 + -7)];
    	a286 = ((((((a286 * a396) % 14999) + 980) + -11168) % 80) - -3);
    	a219 = (a394 - 6);
    	a329 = ((((((a329 * a396) % 14999) % 79) - 126) - 1) + 37);
    	a357 = (a156 + -3);
    	a368 = a371;
    	a227 = 32 ;
    	a396 = ((((((a286 * a286) + -15701) * 1) + -5269) % 43) + 12);
    	a271 = ((a219 / a156) + 11);
    	a394 = (a156 - 1); 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2539\n");

    if(((a329 <=  -156 && (((((a99 == 13 &&  cf==1 ) && a28 == a60[7]) && a93 == 16) && (11 == a368[5])) && a219 == 3)) && ((a282 == 33 && (input == inputs[5] && (54 == a350[5]))) && a331 == a380[0]))) {
printf("POINT: 2540\n");
    	a153 -= (a153 - 20) < a153 ? 4 : 0;
printf("POINT: 2542\n");
    	a199 += (a199 + 20) > a199 ? 1 : 0;
printf("POINT: 2544\n");
    	a57 += (a57 + 20) > a57 ? 2 : 0;
printf("POINT: 2546\n");
    	a190 += (a190 + 20) > a190 ? 2 : 0;
printf("POINT: 2548\n");
    	a1 += (a1 + 20) > a1 ? 1 : 0;
printf("POINT: 2550\n");
    	a2 += (a2 + 20) > a2 ? 2 : 0;
printf("POINT: 2552\n");
    	cf = 0;
printf("POINT: 2553\n");

    	if(((((-53 < a141) && (33 >= a141)) || (((21 == a288[1]) || !(a223 == a343[0])) || (45 == a181[1]))) || a112 == 12)) {
printf("POINT: 2554\n");
    	a396 = ((((98 * 5) + -542) * 10) / 9);
    	a206 = 32 ;
    	a282 = 32 ;
    	a286 = (((((a396 * a396) % 80) - -2) - 18846) - -18847);
    	a315 = a295;
    	a368 = a371;
    	a340 = ((((((a286 * a286) % 15) + 36) + 2) + -25505) - -25503);
    	a28 = a60[(a99 + -12)];
    	a227 = 32 ;
    	a329 = (((((((a329 * a340) % 14999) + -12188) * 1) / 5) % 79) - 70);
    	a331 = a380[(a93 + -15)];
    	a328 = a279[((a93 * a93) + -255)];
    	a394 = (a357 - -3);
    	a156 = (a271 + 2);
    	a268 = 32 ;
    	a271 = (a99 + -2);
    	a157 = a64[(a219 / a357)];
    	a311 = a298[(a357 + -7)];
    	a219 = (a394 + -7);
    	a357 = 9; 
    	}else {
printf("POINT: 2556\n");
    	a282 = 34 ;
    	a357 = ((a219 / a219) - -9);
    	a56 = 33 ;
    	a28 = a60[((a93 - a99) - 1)];
    	a328 = a279[(a357 - 8)];
    	a166 = a26[(a219 - 2)];
    	a350 = a377;
    	a340 = ((((((((a340 * a396) % 14999) / 5) % 37) - -91) * 5) % 37) - -79);
    	a368 = a293;
    	a396 = ((((90 / 5) * 5) * 10) / 9);
    	a223 = a343[(a219 - 1)];
    	a271 = (a357 - -2);
    	a206 = 34 ;
    	a268 = 34 ;
    	a331 = a380[(a357 + -8)];
    	a329 = (((((((a329 * a286) % 14999) / 5) + 13005) + -21016) % 83) + 154);
    	a394 = ((a357 + a219) + -1);
    	a286 = (((81 - 5813) + 5828) + 176);
    	a219 = (a271 - 7);
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm239(int input) {
printf("POINT: 2557\n");

    if(((((32 == a315[3]) && (a227 == 33 && a93 == 16)) && a271 == 10) && (a311 == a298[0] && ((((input == inputs[10] && (a28 == a60[7] &&  cf==1 )) && a99 == 14) && a331 == a380[0]) && a396 <=  -72)))) {
printf("POINT: 2558\n");
    	a153 += (a153 + 20) > a153 ? 1 : 0;
printf("POINT: 2560\n");
    	cf = 0;
    	a32 = ((a219 - a93) + 30);
    	a264 = a290[(a271 + -10)];
    	a331 = a380[((a271 + a394) + -18)];
    	a28 = a60[((a219 / a357) - -4)]; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2561\n");

    if((((a357 == 8 && (a286 <=  -79 && ((11 == a368[5]) && (a340 <=  21 && ((input == inputs[3] &&  cf==1 ) && a28 == a60[7]))))) && a93 == 16) && ((a331 == a380[0] && a394 == 10) && a99 == 14))) {
printf("POINT: 2562\n");
    	cf = 0;
    	a180 = a164[(a357 + -4)];
    	a28 = a60[((a394 / a357) - 1)];
    	a93 = (a271 - -1); 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2563\n");

    if(((a28 == a60[7] && (a219 == 3 && (19 == a288[5]))) && (a331 == a380[0] && ((a311 == a298[0] && ((54 == a350[5]) && (a357 == 8 && (input == inputs[1] && ( cf==1  && a99 == 14))))) && a93 == 16)))) {
printf("POINT: 2564\n");
    	cf = 0;
    	a264 = a290[((a271 - a219) - 7)];
    	a32 = (a93 - -1);
    	a28 = a60[((a99 / a93) + 4)];
    	a331 = a380[(a219 - 1)]; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm240(int input) {
printf("POINT: 2565\n");

    if(((a268 == 33 && (a286 <=  -79 && (((input == inputs[12] && ( cf==1  && a93 == 16)) && a28 == a60[7]) && a99 == 15))) && (a223 == a343[0] && (a340 <=  21 && (a328 == a279[0] && a357 == 8))))) {
printf("POINT: 2566\n");
    	cf = 0;
    	a28 = a60[(a99 + -11)];
    	a264 = a290[(a99 + -15)];
    	a331 = a380[((a271 - a394) + 2)];
    	a32 = (a93 - -1); 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2567\n");

    if((((a219 == 3 && (((a340 <=  21 && a328 == a279[0]) && a282 == 33) && a28 == a60[7])) && (32 == a315[3])) && (a394 == 10 && (((a99 == 15 &&  cf==1 ) && input == inputs[8]) && a93 == 16)))) {
printf("POINT: 2568\n");
    	cf = 0;
printf("POINT: 2569\n");

    	if(a111 == 5) {
printf("POINT: 2570\n");
    	a271 = ((a219 - a219) + 12);
    	a166 = a26[((a394 * a219) + -26)];
    	a331 = a380[(a93 - 14)];
    	a206 = 34 ;
    	a56 = 33 ;
    	a315 = a273;
    	a329 = ((((((a286 * a396) % 14999) / 5) - -11814) % 83) - -87);
    	a350 = a377;
    	a396 = ((((87 - 22040) + 40437) * 1) - 18386);
    	a288 = a399;
    	a282 = 34 ;
    	a28 = a60[((a93 + a357) + -22)];
    	a268 = 34 ;
    	a340 = ((((((a340 * a329) % 14999) % 37) + 90) * 5) / 5);
    	a357 = ((a93 / a219) + 5);
    	a223 = a343[(a93 + -14)];
    	a219 = (a394 + -5);
    	a368 = a293;
    	a286 = ((((((94 * 10) / 9) * 9) / 10) * 10) / 9);
    	a328 = a279[(a394 + -8)];
    	a394 = ((a99 + a271) + -15); 
    	}else {
printf("POINT: 2572\n");
    	a315 = a295;
    	a28 = a60[(a394 - 5)];
    	a328 = a279[((a99 * a271) - 149)];
    	a288 = a270;
    	a227 = 32 ;
    	a329 = ((((((a396 * a396) % 14999) - 26790) % 79) - -1) - 46);
    	a170 = 33 ;
    	a394 = (a93 - 5);
    	a368 = a371;
    	a268 = 32 ;
    	a357 = (a394 + -2);
    	a223 = a343[(a99 + -14)];
    	a271 = (a219 - -8);
    	a125 = ((((((a396 * a340) % 14999) * 2) % 101) + 66) - -2);
    	a350 = a366;
    	a340 = ((((((((a340 * a329) % 14999) * 2) % 15) + 38) * 5) % 15) - -27);
    	a311 = a298[(a219 + -2)];
    	a286 = ((((((a286 % 80) - -52) - 35) * 5) % 80) - -3);
    	a219 = 4;
    	}printf("%d\n", 20);  
    } 
}
 void calculate_outputm48(int input) {
printf("POINT: 2573\n");

    if((((a206 == 33 && (a99 == 8 &&  cf==1 )) && a223 == a343[0]) && (((a271 == 10 && a329 <=  -156) && a286 <=  -79) && a311 == a298[0]))) {
printf("POINT: 2574\n");
    	calculate_outputm236(input);
    } 
printf("POINT: 2575\n");

    if(((((a329 <=  -156 && a219 == 3) && a282 == 33) && (19 == a288[5])) && (a206 == 33 && (a271 == 10 && ( cf==1  && a99 == 13))))) {
printf("POINT: 2576\n");
    	calculate_outputm238(input);
    } 
printf("POINT: 2577\n");

    if(((a223 == a343[0] && ((a396 <=  -72 && ( cf==1  && a99 == 14)) && (54 == a350[5]))) && (a311 == a298[0] && (a340 <=  21 && a286 <=  -79)))) {
printf("POINT: 2578\n");
    	calculate_outputm239(input);
    } 
printf("POINT: 2579\n");

    if(((a227 == 33 && a223 == a343[0]) && (a268 == 33 && ((19 == a288[5]) && (a340 <=  21 && (a357 == 8 && ( cf==1  && a99 == 15))))))) {
printf("POINT: 2580\n");
    	calculate_outputm240(input);
    } 
}

 void calculate_output(int input) {
        cf = 1;

printf("POINT: 2581\n");

    if((((a329 <=  -156 && (a227 == 33 && (a219 == 3 && ( cf==1  && a28 == a60[0])))) && (32 == a315[3])) && ((11 == a368[5]) && a331 == a380[0]))) {
printf("POINT: 2582\n");
printf("POINT: 2583\n");

    	if(((a219 == 3 && (((54 == a350[5]) && (a329 <=  -156 && (a180 == a164[0] &&  cf==1 ))) && a340 <=  21)) && (a311 == a298[0] && a328 == a279[0]))) {
printf("POINT: 2584\n");
    		calculate_outputm1(input);
    	} 
printf("POINT: 2585\n");

    	if((((((a227 == 33 && (a180 == a164[1] &&  cf==1 )) && a396 <=  -72) && a328 == a279[0]) && (54 == a350[5])) && ((19 == a288[5]) && a340 <=  21))) {
printf("POINT: 2586\n");
    		calculate_outputm2(input);
    	} 
printf("POINT: 2587\n");

    	if(((a357 == 8 && ((a286 <=  -79 && (a180 == a164[3] &&  cf==1 )) && (19 == a288[5]))) && ((a223 == a343[0] && a331 == a380[0]) && (11 == a368[5])))) {
printf("POINT: 2588\n");
    		calculate_outputm4(input);
    	} 
printf("POINT: 2589\n");

    	if(((a328 == a279[0] && (a394 == 10 && (19 == a288[5]))) && (a331 == a380[0] && (a286 <=  -79 && (( cf==1  && a180 == a164[4]) && a311 == a298[0]))))) {
printf("POINT: 2590\n");
    		calculate_outputm5(input);
    	} 
printf("POINT: 2591\n");

    	if(((a329 <=  -156 && ((a331 == a380[0] && (a282 == 33 && a286 <=  -79)) && a311 == a298[0])) && (( cf==1  && a180 == a164[6]) && (32 == a315[3])))) {
printf("POINT: 2592\n");
    		calculate_outputm7(input);
    	} 
printf("POINT: 2593\n");

    	if((((a271 == 10 && (a396 <=  -72 && (a180 == a164[7] &&  cf==1 ))) && a268 == 33) && (a311 == a298[0] && (a219 == 3 && (32 == a315[3]))))) {
printf("POINT: 2594\n");
    		calculate_outputm8(input);
    	} 
    } 
printf("POINT: 2595\n");

    if(((a268 == 32 && (((a227 == 32 && a331 == a380[1]) && a357 == 9) && a328 == a279[1])) && (( cf==1  && a28 == a60[1]) && a311 == a298[1]))) {
printf("POINT: 2596\n");
printf("POINT: 2597\n");

    	if(((((-156 < a329) && (3 >= a329)) && (((a156 == 7 &&  cf==1 ) && a268 == 32) && a331 == a380[1])) && ((a282 == 32 && a271 == 11) && a357 == 9))) {
printf("POINT: 2598\n");
    		calculate_outputm9(input);
    	} 
printf("POINT: 2599\n");

    	if((((((( cf==1  && a156 == 8) && a219 == 4) && a331 == a380[1]) && (37 == a315[2])) && (15 == a368[3])) && (a394 == 11 && a357 == 9))) {
printf("POINT: 2600\n");
    		calculate_outputm10(input);
    	} 
printf("POINT: 2601\n");

    	if(((a331 == a380[1] && (((-79 < a286) && (83 >= a286)) && (((21 < a340) && (53 >= a340)) && ( cf==1  && a156 == 9)))) && (((-72 < a396) && (16 >= a396)) && (a311 == a298[1] && a206 == 32)))) {
printf("POINT: 2602\n");
    		calculate_outputm11(input);
    	} 
printf("POINT: 2603\n");

    	if(((((a223 == a343[1] && a271 == 11) && ((-72 < a396) && (16 >= a396))) && ((-156 < a329) && (3 >= a329))) && (a357 == 9 && (((21 < a340) && (53 >= a340)) && ( cf==1  && a156 == 10))))) {
printf("POINT: 2604\n");
    		calculate_outputm12(input);
    	} 
printf("POINT: 2605\n");

    	if((((15 == a368[3]) && (((-156 < a329) && (3 >= a329)) && (a328 == a279[1] && (a311 == a298[1] && (37 == a315[2]))))) && (( cf==1  && a156 == 11) && a271 == 11))) {
printf("POINT: 2606\n");
    		calculate_outputm13(input);
    	} 
printf("POINT: 2607\n");

    	if(((a331 == a380[1] && (a282 == 32 && ((-79 < a286) && (83 >= a286)))) && (((21 < a340) && (53 >= a340)) && ((a357 == 9 && (a156 == 12 &&  cf==1 )) && a268 == 32)))) {
printf("POINT: 2608\n");
    		calculate_outputm14(input);
    	} 
printf("POINT: 2609\n");

    	if(((((-156 < a329) && (3 >= a329)) && ((15 == a368[3]) && ( cf==1  && a156 == 14))) && (a282 == 32 && ((a394 == 11 && a328 == a279[1]) && a227 == 32)))) {
printf("POINT: 2610\n");
    		calculate_outputm16(input);
    	} 
    } 
printf("POINT: 2611\n");

    if(((a357 == 10 && (a331 == a380[2] && (61 == a350[0]))) && (((( cf==1  && a28 == a60[2]) && a206 == 34) && (41 == a315[0])) && ((16 < a396) && (224 >= a396))))) {
printf("POINT: 2612\n");
printf("POINT: 2613\n");

    	if(((((a56 == 33 &&  cf==1 ) && ((53 < a340) && (129 >= a340))) && a223 == a343[2]) && ((19 == a368[1]) && (a282 == 34 && (((3 < a329) && (171 >= a329)) && a219 == 5))))) {
printf("POINT: 2614\n");
    		calculate_outputm17(input);
    	} 
printf("POINT: 2615\n");

    	if(((a223 == a343[2] && (((3 < a329) && (171 >= a329)) && (a206 == 34 && ((83 < a286) && (291 >= a286))))) && ((61 == a350[0]) && (a268 == 34 && ( cf==1  && a56 == 32))))) {
printf("POINT: 2616\n");
    		calculate_outputm18(input);
    	} 
printf("POINT: 2617\n");

    	if(((((41 == a315[0]) && a311 == a298[2]) && a394 == 12) && (((( cf==1  && a56 == 34) && ((3 < a329) && (171 >= a329))) && ((53 < a340) && (129 >= a340))) && ((83 < a286) && (291 >= a286))))) {
printf("POINT: 2618\n");
    		calculate_outputm19(input);
    	} 
printf("POINT: 2619\n");

    	if(((((((61 == a350[0]) && (19 == a368[1])) && a206 == 34) && ((53 < a340) && (129 >= a340))) && a331 == a380[2]) && ((a56 == 35 &&  cf==1 ) && ((16 < a396) && (224 >= a396))))) {
printf("POINT: 2620\n");
    		calculate_outputm20(input);
    	} 
printf("POINT: 2621\n");

    	if(((a227 == 34 && (((19 == a368[1]) && (a56 == 36 &&  cf==1 )) && (61 == a350[0]))) && ((a282 == 34 && ((83 < a286) && (291 >= a286))) && a271 == 12))) {
printf("POINT: 2622\n");
    		calculate_outputm21(input);
    	} 
    } 
printf("POINT: 2623\n");

    if((((((a28 == a60[3] &&  cf==1 ) && a282 == 32) && (37 == a315[2])) && (15 == a368[3])) && (((-79 < a286) && (83 >= a286)) && (a328 == a279[1] && (57 == a350[2]))))) {
printf("POINT: 2624\n");
printf("POINT: 2625\n");

    	if(((((21 == a288[1]) && ((102 == a188[3]) &&  cf==1 )) && (15 == a368[3])) && ((57 == a350[2]) && (a357 == 9 && (a394 == 11 && a282 == 32))))) {
printf("POINT: 2626\n");
    		calculate_outputm22(input);
    	} 
printf("POINT: 2627\n");

    	if(((a271 == 11 && (a394 == 11 && ((21 < a340) && (53 >= a340)))) && ((37 == a315[2]) && (a219 == 4 && (((108 == a188[3]) &&  cf==1 ) && a328 == a279[1]))))) {
printf("POINT: 2628\n");
    		calculate_outputm23(input);
    	} 
printf("POINT: 2629\n");

    	if(((((( cf==1  && (115 == a188[4])) && (21 == a288[1])) && (15 == a368[3])) && a268 == 32) && (((37 == a315[2]) && ((21 < a340) && (53 >= a340))) && a357 == 9))) {
printf("POINT: 2630\n");
    		calculate_outputm24(input);
    	} 
    } 
printf("POINT: 2631\n");

    if(((((54 == a350[5]) && ((a271 == 10 && ( cf==1  && a28 == a60[4])) && a227 == 33)) && a268 == 33) && (a223 == a343[0] && a219 == 3))) {
printf("POINT: 2632\n");
printf("POINT: 2633\n");

    	if(((a271 == 10 && ( cf==1  && a264 == a290[0])) && (((a311 == a298[0] && ((32 == a315[3]) && a396 <=  -72)) && a206 == 33) && (54 == a350[5])))) {
printf("POINT: 2634\n");
    		calculate_outputm25(input);
    	} 
printf("POINT: 2635\n");

    	if((((a227 == 33 && (11 == a368[5])) && a286 <=  -79) && ((a340 <=  21 && (a331 == a380[0] && ( cf==1  && a264 == a290[3]))) && a329 <=  -156))) {
printf("POINT: 2636\n");
    		calculate_outputm28(input);
    	} 
printf("POINT: 2637\n");

    	if(((((32 == a315[3]) && a396 <=  -72) && a328 == a279[0]) && (a206 == 33 && ((( cf==1  && a264 == a290[4]) && (19 == a288[5])) && a357 == 8)))) {
printf("POINT: 2638\n");
    		calculate_outputm29(input);
    	} 
printf("POINT: 2639\n");

    	if((((a264 == a290[5] &&  cf==1 ) && a311 == a298[0]) && (((32 == a315[3]) && ((a357 == 8 && a396 <=  -72) && a328 == a279[0])) && (19 == a288[5])))) {
printf("POINT: 2640\n");
    		calculate_outputm30(input);
    	} 
printf("POINT: 2641\n");

    	if(((a340 <=  21 && (a264 == a290[7] &&  cf==1 )) && (((54 == a350[5]) && ((a268 == 33 && a329 <=  -156) && a331 == a380[0])) && a357 == 8))) {
printf("POINT: 2642\n");
    		calculate_outputm32(input);
    	} 
    } 
printf("POINT: 2643\n");

    if((((((a28 == a60[5] &&  cf==1 ) && a394 == 11) && ((21 < a340) && (53 >= a340))) && a223 == a343[1]) && ((a311 == a298[1] && ((-79 < a286) && (83 >= a286))) && a328 == a279[1]))) {
printf("POINT: 2644\n");
printf("POINT: 2645\n");

    	if(((a311 == a298[1] && (a125 <=  -36 &&  cf==1 )) && ((a268 == 32 && ((37 == a315[2]) && ((21 == a288[1]) && ((-156 < a329) && (3 >= a329))))) && (15 == a368[3])))) {
printf("POINT: 2646\n");
    		calculate_outputm33(input);
    	} 
printf("POINT: 2647\n");

    	if((((15 == a368[3]) && (((-156 < a329) && (3 >= a329)) && (a394 == 11 && (((-36 < a125) && (168 >= a125)) &&  cf==1 )))) && (((-79 < a286) && (83 >= a286)) && (a223 == a343[1] && (57 == a350[2]))))) {
printf("POINT: 2648\n");
    		calculate_outputm34(input);
    	} 
printf("POINT: 2649\n");

    	if((((( cf==1  && 210 < a125) && a268 == 32) && (15 == a368[3])) && (a311 == a298[1] && (a271 == 11 && (a357 == 9 && a219 == 4))))) {
printf("POINT: 2650\n");
    		calculate_outputm36(input);
    	} 
    } 
printf("POINT: 2651\n");

    if((((a271 == 11 && ((a219 == 4 && a268 == 32) && ((-79 < a286) && (83 >= a286)))) && a227 == 32) && (((21 < a340) && (53 >= a340)) && ( cf==1  && a28 == a60[6])))) {
printf("POINT: 2652\n");
printf("POINT: 2653\n");

    	if((((a394 == 11 && (a268 == 32 && ((((-79 < a286) && (83 >= a286)) && a357 == 9) && (15 == a368[3])))) && a227 == 32) && ( cf==1  && a155 <=  70))) {
printf("POINT: 2654\n");
    		calculate_outputm37(input);
    	} 
printf("POINT: 2655\n");

    	if(((a206 == 32 && ((((70 < a155) && (103 >= a155)) &&  cf==1 ) && a223 == a343[1])) && ((a219 == 4 && ((37 == a315[2]) && a271 == 11)) && a268 == 32))) {
printf("POINT: 2656\n");
    		calculate_outputm38(input);
    	} 
printf("POINT: 2657\n");

    	if((((((21 < a340) && (53 >= a340)) && a331 == a380[1]) && a219 == 4) && (((( cf==1  && ((103 < a155) && (212 >= a155))) && a271 == 11) && a394 == 11) && a311 == a298[1]))) {
printf("POINT: 2658\n");
    		calculate_outputm39(input);
    	} 
    } 
printf("POINT: 2659\n");

    if(((a357 == 8 && (a311 == a298[0] && (a227 == 33 && (a28 == a60[7] &&  cf==1 )))) && (a206 == 33 && (a331 == a380[0] && a328 == a279[0])))) {
printf("POINT: 2660\n");
printf("POINT: 2661\n");

    	if(((a227 == 33 && (( cf==1  && a93 == 9) && a328 == a279[0])) && (((19 == a288[5]) && (a286 <=  -79 && a311 == a298[0])) && a329 <=  -156))) {
printf("POINT: 2662\n");
    		calculate_outputm41(input);
    	} 
printf("POINT: 2663\n");

    	if((((a282 == 33 && (a329 <=  -156 && ((a93 == 10 &&  cf==1 ) && a331 == a380[0]))) && a223 == a343[0]) && (a271 == 10 && a394 == 10))) {
printf("POINT: 2664\n");
    		calculate_outputm42(input);
    	} 
printf("POINT: 2665\n");

    	if((((a357 == 8 && a328 == a279[0]) && a219 == 3) && (a394 == 10 && (a340 <=  21 && (a282 == 33 && ( cf==1  && a93 == 11)))))) {
printf("POINT: 2666\n");
    		calculate_outputm43(input);
    	} 
printf("POINT: 2667\n");

    	if(((a219 == 3 && a329 <=  -156) && (a328 == a279[0] && ((a206 == 33 && (a223 == a343[0] && (a93 == 12 &&  cf==1 ))) && a282 == 33)))) {
printf("POINT: 2668\n");
    		calculate_outputm44(input);
    	} 
printf("POINT: 2669\n");

    	if((((a223 == a343[0] && (54 == a350[5])) && a329 <=  -156) && ((a311 == a298[0] && (a331 == a380[0] && (a93 == 13 &&  cf==1 ))) && a227 == 33))) {
printf("POINT: 2670\n");
    		calculate_outputm45(input);
    	} 
printf("POINT: 2671\n");

    	if((((a271 == 10 && (a328 == a279[0] && a268 == 33)) && a394 == 10) && ((a396 <=  -72 && (a93 == 14 &&  cf==1 )) && a340 <=  21))) {
printf("POINT: 2672\n");
    		calculate_outputm46(input);
    	} 
printf("POINT: 2673\n");

    	if(((((19 == a288[5]) && (a93 == 16 &&  cf==1 )) && a268 == 33) && (a340 <=  21 && (a329 <=  -156 && (a271 == 10 && (54 == a350[5])))))) {
printf("POINT: 2674\n");
    		calculate_outputm48(input);
    	} 
    } 
    errorCheck();

printf("POINT: 2675\n");

    if( cf==1 ) 
printf("POINT: 2676\n");
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}

int main()
{
    // main i/o-loop
printf("POINT: 2677\n");

    for (int FLAG=0;FLAG<BOUND;FLAG++){
printf("POINT: 2678\n");
    
        // read input
        int input; __CPROVER_input("input",input);      
__CPROVER_input("a351",a351);  
__CPROVER_input("a86",a86);  
__CPROVER_input("a329",a329);  
__CPROVER_input("a154",a154);  
__CPROVER_input("a182",a182);  
__CPROVER_input("a99",a99);  
__CPROVER_input("a286",a286);   
__CPROVER_input("a132",a132); 
__CPROVER_input("a282",a282); 
__CPROVER_input("a125",a125); 
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a351,a86,a329,a154,a182,a99,a286,a132,a282,a125);		
        // operate eca engine
printf("POINT: 2679\n");

        if((input != 13) && (input != 12) && (input != 2) && (input != 5) && (input != 15) && (input != 11) && (input != 7) && (input != 9) && (input != 6) && (input != 14) && (input != 10) && (input != 4) && (input != 8) && (input != 1) && (input != 3))
printf("POINT: 2680\n");
          printf("this is return -2");
        calculate_output(input);
    }
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a351,a86,a329,a154,a182,a99,a286,a132,a282,a125);		\
	return 0;
}
