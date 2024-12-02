#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>

#define BOUND 3
int kappa;
	// inputs
	int inputs[] = {55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116};

	int errorCheck();
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
	void calculate_outputm241(int);
	void calculate_outputm242(int);
	void calculate_outputm243(int);
	void calculate_outputm244(int);
	void calculate_outputm245(int);
	void calculate_outputm246(int);
	void calculate_outputm247(int);
	void calculate_outputm248(int);
	void calculate_outputm249(int);

	 int a881287135 = 8;
	 int a771904065  = 35;
	 int a1611619350  = 35;
	 int a2052893331 = 15;
	 int a1232289479 = 9;
	 int a1228745271 = 59;
	 int a1763171942  = 33;
	 int a1842951122 = 3;
	 int a871674684 = 4;
	 int a444227203  = 34;
	 int a2139432823 = -104;
	 int a458942489 = 165;
	 int a1940475432 = -17;
	 int a177640787 = -82;
	 int a1136129815  = 34;
	 int a394986443 = 11;
	 int a309620346 = 11;
	 int a1189507312 = 68;
	 int a2029515987  = 35;
	 int a1378621586  = 32;
	 int a90400304 = 5;
	 int a1621255820 = 16;
	 int a12903048 = 11;
	 int a1965120042 = 12;
	 int a216810048  = 33;
	 int a570886160  = 33;
	 int a1711061361 = 44;
	 int a1472462791  = 33;
	 int a1218693435  = 34;
	 int a976902422 = 200;
	 int a1495349871  = 34;
	 int a2128522778  = 33;
	 int a1678927341 = 10;
	 int a706197976  = 36;
	 int a815886759 = 2;
	 int a785058364 = 11;
	 int a1363618726 = 59;
	 int a1562022185 = -25;
	 int a1811430962 = -3;
	 int a1661935098  = 33;
	 int a774885508 = 3;
	 int a807447096 = -17;
	 int a1862658444 = 243;
	 int a997347628 = 218;
	 int a976945745 = 2;
	 int a795297040  = 33;
	 int a602327392 = 11;
	 int a1823597932  = 33;
	 int a1457121074  = 35;
	 int a536820638 = 100;
	 int a455265888 = 2;
	 int a234980720 = 8;
	 int a682023469 = 9;
	 int a796195142  = 33;
	 int a1192100362 = 155;
	 int a169710014 = 320;
	 int a694436355 = 27;
	 int a1224074430 = 122;
	 int a1649499722 = 12;
	 int a770071847 = -126;
	 int a1144199001 = 205;
	 int a960419217 = 15;
	 int a883263484  = 33;
	 int a563057875 = 15;
	 int a723108336 = 27;
	 int a1909685633  = 33;
	 int cf = 1;
	 int a882589857 = 10;
	 int a913550374 = 7;
	 int a1209080117 = 13;
	 int a1871179310  = 35;
	 int a912673804 = -89;
	 int a1420843252  = 33;
	 int a534143625 = 92;
	 int a1291338295 = -185;
	 int a1405419384 = 13;
	 int a847823400 = 214;
	 int a566378298  = 34;
	 int a1129487110 = -111;
	 int a1541342791 = 319;
	 int a2074917498 = 4;
	 int a1817778538 = 7;
	 int a905282705  = 32;
	 int a1409922970 = 13;
	 int a807046857 = 5;
	 int a771824360 = 9;
	 int a337942537 = 5;
	 int a1491071731  = 33;
	 int a196558593  = 35;
	 int a1162352213 = 6;
	 int a21974463 = 11;
	 int a15249890 = 199;
	 int a419313210  = 36;
	 int a1110504460 = 3;
	 int a1140224045  = 33;
	 int a806730426 = 10;
	 int a402335329  = 34;
	 int a835146412 = 57;
	 int a1610801558 = -27;
	 int a1584925463 = 12;
	 int a1429598563  = 36;
	 int a1485869055  = 32;
	 int a597484636  = 32;
	 int a1260631 = 10;
	 int a1351640013  = 32;
	 int a1263839693  = 34;
	 int a1717386854  = 33;
	 int a435971279 = 11;
	 int a880148234 = 73;
	 int a491168833 = 10;
	 int a42170353  = 33;
	 int a1921018930 = 265;
	 int a1538778197 = 2;
	 int a1293712589  = 33;
	 int a1244737994  = 35;
	 int a526854419  = 33;
	 int a1143554178 = 181;
	 int a304998879 = 5;
	 int a1377897560 = 8;
	 int a76578247 = -37;
	 int a313727472 = -122;
	 int a871550570  = 33;
	 int a2147255888 = 198;
	 int a2034779655 = 82;
	 int a1094902983  = 32;
	 int a1505881712  = 34;
	 int a369624711 = 6;
	 int a1917402140 = 3;
	 int a1147553654 = 541;
	 int a738555482 = 6;
	 int a390274319  = 32;


	int errorCheck() {
	    if((((a1485869055 == 35 && a1649499722 == 11) && a1611619350 == 35) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(99);
	    }
	    if((((a1260631 == 8 && a1244737994 == 36) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(97);
	    }
	    if((((a2074917498 == 5 && a491168833 == 11) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(98);
	    }
	    if((((a1244737994 == 35 && a491168833 == 9) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(95);
	    }
	    if((((a960419217 == 10 && a1871179310 == 36) && ((51 < a169710014) && (221 >= a169710014))) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(96);
	    }
	    if((((a12903048 == 15 && a597484636 == 34) && a2052893331 == 10) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(18);
	    }
	    if((((a1457121074 == 36 && a1244737994 == 33) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(17);
	    }
	    if((((a960419217 == 15 && a1871179310 == 36) && ((51 < a169710014) && (221 >= a169710014))) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(16);
	    }
	    if((((a1244737994 == 36 && a491168833 == 9) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(15);
	    }
	    if((((((17 < a1811430962) && (150 >= a1811430962)) && a491168833 == 8) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(22);
	    }
	    if((((a21974463 == 13 && a15249890 <=  155) && a2052893331 == 14) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(21);
	    }
	    if((((a1377897560 == 9 && a1409922970 == 14) && a2052893331 == 16) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(20);
	    }
	    if((((a21974463 == 12 && a1485869055 == 35) && a2052893331 == 12) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(19);
	    }
	    if((((a1409922970 == 15 && a435971279 == 9) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(24);
	    }
	    if((((206 < a997347628 && a76578247 <=  -134) && a2052893331 == 11) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(23);
	    }
	    if((((a1110504460 == 6 && a1420843252 == 34) && 315 < a169710014) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(5);
	    }
	    if((((a1209080117 == 9 && a1232289479 == 7) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(6);
	    }
	    if((((a1260631 == 13 && a706197976 == 33) && a2052893331 == 13) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(7);
	    }
	    if((((a806730426 == 10 && ((-89 < a76578247) && (-44 >= a76578247))) && a2052893331 == 11) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(8);
	    }
	    if((((a682023469 == 14 && a1409922970 == 11) && a2052893331 == 16) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(9);
	    }
	    if((((a1110504460 == 8 && a1420843252 == 34) && 315 < a169710014) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(10);
	    }
	    if((((((150 < a1811430962) && (349 >= a1811430962)) && a435971279 == 12) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(11);
	    }
	    if((((a2029515987 == 34 && a435971279 == 13) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(12);
	    }
	    if((((a1377897560 == 6 && a1409922970 == 14) && a2052893331 == 16) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(13);
	    }
	    if((((a881287135 == 13 && 197 < a976902422) && a1611619350 == 33) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(14);
	    }
	    if((((((-134 < a76578247) && (-89 >= a76578247)) && a1232289479 == 10) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(86);
	    }
	    if((((a1377897560 == 7 && a2029515987 == 36) && ((318 < a1541342791) && (482 >= a1541342791))) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(84);
	    }
	    if((((a1224074430 <=  -50 && ((60 < a1228745271) && (107 >= a1228745271))) && ((198 < a1541342791) && (318 >= a1541342791))) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(83);
	    }
	    if((((a1192100362 <=  -99 && a1224074430 <=  -50) && ((221 < a169710014) && (315 >= a169710014))) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(85);
	    }
	    if((((a234980720 == 12 && a435971279 == 10) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(80);
	    }
	    if((((a771904065 == 35 && a1649499722 == 10) && a1611619350 == 35) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(79);
	    }
	    if((((a1409922970 == 9 && a435971279 == 9) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(82);
	    }
	    if((((((254 < a2034779655) && (336 >= a2034779655)) && a1232289479 == 14) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(81);
	    }
	    if((((a444227203 == 32 && a1244737994 == 35) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(76);
	    }
	    if((((((50 < a2034779655) && (254 >= a2034779655)) && a1232289479 == 14) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(75);
	    }
	    if((((a216810048 == 36 && a1649499722 == 9) && a1611619350 == 35) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(78);
	    }
	    if((((((303 < a1147553654) && (523 >= a1147553654)) && a435971279 == 6) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(77);
	    }
	    if((((((267 < a15249890) && (323 >= a15249890)) && a1232289479 == 12) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(0);
	    }
	    if((((a1162352213 == 9 && a491168833 == 5) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(2);
	    }
	    if((((a1817778538 == 11 && ((289 < a1143554178) && (430 >= a1143554178))) && a2052893331 == 15) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(1);
	    }
	    if((((a12903048 == 16 && a597484636 == 34) && a2052893331 == 10) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(90);
	    }
	    if((((((-179 < a976902422) && (6 >= a976902422)) && a1420843252 == 32) && a169710014 <=  51) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(4);
	    }
	    if((((a795297040 == 35 && ((267 < a15249890) && (323 >= a15249890))) && a2052893331 == 14) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(3);
	    }
	    if((((a1457121074 == 35 && 224 < a1192100362) && a1611619350 == 34) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(89);
	    }
	    if((((a774885508 == 5 && 323 < a15249890) && a2052893331 == 14) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(92);
	    }
	    if((((224 < a1192100362 && a1224074430 <=  -50) && ((221 < a169710014) && (315 >= a169710014))) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(91);
	    }
	    if((((a2052893331 == 17 && a905282705 == 32) && a15249890 <=  155) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(64);
	    }
	    if((((a1260631 == 7 && a1244737994 == 36) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(63);
	    }
	    if((((a196558593 == 33 && a1232289479 == 11) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(62);
	    }
	    if((((a563057875 == 15 && a1218693435 == 35) && a1611619350 == 36) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(61);
	    }
	    if((((a1429598563 == 32 && a402335329 == 34) && a1611619350 == 32) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(60);
	    }
	    if((((a1244737994 == 35 && a1192100362 <=  -99) && ((267 < a15249890) && (323 >= a15249890))) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(59);
	    }
	    if((((a1409922970 == 14 && a435971279 == 9) && a1541342791 <=  198) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(58);
	    }
	    if((((a807046857 == 9 && a1420843252 == 36) && 315 < a169710014) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(57);
	    }
	    if((((264 < a880148234 && a491168833 == 10) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(56);
	    }
	    if((((a1110504460 == 3 && a1420843252 == 34) && 315 < a169710014) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(55);
	    }
	    if((((a913550374 == 4 && a1244737994 == 34) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(88);
	    }
	    if((((a1611619350 == 34 && ((303 < a1147553654) && (523 >= a1147553654))) && ((155 < a15249890) && (267 >= a15249890))) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(67);
	    }
	    if((((a883263484 == 32 && a1485869055 == 34) && a2052893331 == 12) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(68);
	    }
	    if((((a883263484 == 36 && ((62 < a1192100362) && (224 >= a1192100362))) && a1611619350 == 34) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(65);
	    }
	    if((((a913550374 == 8 && a1871179310 == 32) && ((51 < a169710014) && (221 >= a169710014))) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(66);
	    }
	    if((((a1377897560 == 7 && ((-99 < a1192100362) && (62 >= a1192100362))) && ((267 < a15249890) && (323 >= a15249890))) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(71);
	    }
	    if((((a1940475432 <=  -14 && a706197976 == 32) && a2052893331 == 13) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(72);
	    }
	    if((((a309620346 == 10 && a1649499722 == 8) && a1611619350 == 35) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(69);
	    }
	    if((((211 < a458942489 && a1232289479 == 8) && a2052893331 == 17) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(70);
	    }
	    if((((a682023469 == 12 && a1409922970 == 11) && a2052893331 == 16) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(73);
	    }
	    if((((a1260631 == 10 && a706197976 == 33) && a2052893331 == 13) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(74);
	    }
	    if((((a1649499722 == 7 && a402335329 == 33) && a1611619350 == 32) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(87);
	    }
	    if((((a1110504460 == 10 && a597484636 == 36) && a2052893331 == 10) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(53);
	    }
	    if((((a881287135 == 11 && 197 < a976902422) && a1611619350 == 33) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(54);
	    }
	    if((((a1110504460 == 9 && a597484636 == 36) && a2052893331 == 10) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(49);
	    }
	    if((((a2074917498 == 6 && a491168833 == 11) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(50);
	    }
	    if((((a602327392 == 12 && a1218693435 == 34) && a1611619350 == 36) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(51);
	    }
	    if((((a1094902983 == 36 && a1218693435 == 36) && a1611619350 == 36) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(52);
	    }
	    if((((317 < a1363618726 && a2029515987 == 33) && ((318 < a1541342791) && (482 >= a1541342791))) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(45);
	    }
	    if((((206 < a997347628 && a1228745271 <=  60) && ((198 < a1541342791) && (318 >= a1541342791))) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(46);
	    }
	    if((((a883263484 == 34 && ((62 < a1192100362) && (224 >= a1192100362))) && a1611619350 == 34) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(47);
	    }
	    if((((430 < a1143554178 && a905282705 == 36) && a15249890 <=  155) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(48);
	    }
	    if((((a1429598563 == 35 && a491168833 == 7) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(36);
	    }
	    if((((a602327392 == 12 && a1485869055 == 36) && a2052893331 == 12) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(35);
	    }
	    if((((((-54 < a536820638) && (156 >= a536820638)) && a1649499722 == 13) && a1611619350 == 35) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(38);
	    }
	    if((((a1965120042 == 11 && a491168833 == 6) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(37);
	    }
	    if((((a976902422 <=  -179 && a706197976 == 35) && a2052893331 == 13) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(40);
	    }
	    if((((a1260631 == 11 && a1244737994 == 36) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(39);
	    }
	    if((((a216810048 == 35 && a1649499722 == 9) && a1611619350 == 35) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(42);
	    }
	    if((((a1405419384 == 11 && a1420843252 == 34) && a169710014 <=  51) && a796195142 == 36)){
	    cf = 0;
	    return -1; //__VERIFIER_error(41);
	    }
	    if((((a234980720 == 12 && a1192100362 <=  -99) && a1611619350 == 34) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(44);
	    }
	    if((((a1505881712 == 33 && ((-134 < a76578247) && (-89 >= a76578247))) && a2052893331 == 11) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(43);
	    }
	    if((((a1429598563 == 32 && a491168833 == 7) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(31);
	    }
	    if((((a602327392 == 11 && a1218693435 == 34) && a1611619350 == 36) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(32);
	    }
	    if((((a1495349871 == 32 && a1244737994 == 32) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(29);
	    }
	    if((((((77 < a694436355) && (267 >= a694436355)) && ((-179 < a976902422) && (6 >= a976902422))) && a1611619350 == 33) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(30);
	    }
	    if((((a1649499722 == 8 && a402335329 == 33) && a1611619350 == 32) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(27);
	    }
	    if((((a444227203 == 36 && a1244737994 == 35) && 482 < a1541342791) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(28);
	    }
	    if((((a1162352213 == 5 && a491168833 == 5) && 323 < a15249890) && a796195142 == 34)){
	    cf = 0;
	    return -1; //__VERIFIER_error(25);
	    }
	    if((((a1377897560 == 6 && a2029515987 == 36) && ((318 < a1541342791) && (482 >= a1541342791))) && a796195142 == 35)){
	    cf = 0;
	    return -1; //__VERIFIER_error(26);
	    }
	    if((((36 < a1291338295 && ((6 < a976902422) && (197 >= a976902422))) && a1611619350 == 33) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(94);
	    }
	    if((((a1377897560 == 13 && a1409922970 == 14) && a2052893331 == 16) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(93);
	    }
	    if((((103 < a1129487110 && a402335329 == 36) && a1611619350 == 32) && a796195142 == 32)){
	    cf = 0;
	    return -1; //__VERIFIER_error(33);
	    }
	    if((((((73 < a1940475432) && (143 >= a1940475432)) && a706197976 == 32) && a2052893331 == 13) && a796195142 == 33)){
	    cf = 0;
	    return -1; //__VERIFIER_error(34);
	    }
	}
 void calculate_outputm26(int input) {
    if(((a785058364 == 10 && (((input == 75) &&  cf==1 ) && a2147255888 <=  74)) && ((a871674684 == 3 && (a1661935098 == 32 && a177640787 <=  -120)) && a976945745 == 1))) {
    	cf = 0;
    	a1224074430 = (((((11 * 9) / 10) / 5) * 9) / 10);
    	a2147255888 = (((((((a2147255888 * a770071847) % 14999) * 2) / 5) - 22352) % 61) - -345);
    	a337942537 = (a1678927341 - 5);
    	a882589857 = ((a394986443 - a394986443) + 11);
    	a1862658444 = (((((((a1862658444 * a912673804) % 14999) % 10) + 256) + 7466) / 5) - 1295);
    	a912673804 = ((((((a807447096 * a1562022185) % 14999) % 29) - -65) * 1) + 1);
    	a455265888 = ((a771824360 + a976945745) - 8);
    	a42170353 = 34 ;
    	a796195142 = 36 ;
    	a2128522778 = 34 ;
    	a1189507312 = ((((((((a1189507312 * a807447096) % 14999) % 39) + 227) - -1) * 5) % 39) - -220);
    	a1610801558 = ((((((a1610801558 * a807447096) % 14999) - -9281) % 67) + 57) / 5);
    	a570886160 = 34 ;
    	a847823400 = ((((((a847823400 * a723108336) % 14999) + -14827) % 24) + 375) + 0);
    	a785058364 = (a882589857 + 1);
    	a871674684 = (a1678927341 + -6);
    	a815886759 = (a1917402140 + -1);
    	a976945745 = ((a1917402140 / a1538778197) - 1);
    	a177640787 = ((((((((a177640787 * a1562022185) % 14999) % 29) + -66) + -9530) * 3) % 29) - 34);
    	a1491071731 = 34 ;
    	a1717386854 = 34 ;
    	a1562022185 = ((((((a1562022185 * a2139432823) % 14999) - 11799) / 5) % 95) + 164);
    	a169710014 = ((((((a1224074430 * a1224074430) + 10325) % 46) + 244) + 16200) + -16210);
    	a1293712589 = 34 ;
    	a1129487110 = ((((((a169710014 * a1224074430) / 5) + 23140) + 11) % 62) + -15); 
    	 printf("");//printf("%d\n", 128); fflush(stdout); 
    } if(((a1711061361 <=  -5 && (((input == 92) &&  cf==1 ) && a785058364 == 10)) && (((a1538778197 == 1 && a2128522778 == 32) && a1491071731 == 32) && a1763171942 == 32))) {
    	cf = 0;
    	a1192100362 = ((((((a1862658444 * a1610801558) % 14999) % 14887) - -15111) - -1) - -1);
    	a1224074430 = ((((((a912673804 * a2147255888) % 14999) % 14975) + -15024) * 1) * 1);
    	a796195142 = 36 ;
    	a169710014 = (((((((a1711061361 * a1711061361) % 14999) / 5) % 46) + 251) / 5) - -176); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm27(int input) {
    if((((( cf==1  && (input == 98)) && a815886759 == 1) && a369624711 == 5) && ((a1140224045 == 32 && (a1763171942 == 32 && a1538778197 == 1)) && a771824360 == 8))) {
    	cf = 0;
    	a1661935098 = 33 ;
    	a1711061361 = (((((((a807447096 * a1862658444) % 14999) + -6937) * 1) / 5) % 59) + 55);
    	a871674684 = ((a815886759 - a337942537) + 6);
    	a770071847 = ((((((a177640787 * a807447096) % 14999) + 9630) * 1) % 22) + -124);
    	a835146412 = (((((((a807447096 * a847823400) % 14999) + -3951) % 36) - -72) - -18439) - 18437);
    	a1862658444 = (((((a1862658444 * a912673804) % 14999) - 14920) / 5) + -16026);
    	a402335329 = 33 ;
    	a871550570 = 34 ;
    	a1717386854 = 32 ;
    	a1909685633 = 33 ;
    	a1649499722 = ((a455265888 * a455265888) + 8); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm30(int input) {
    if(((a723108336 <=  -118 && (( cf==1  && (input == 110)) && a976945745 == 1)) && (a1472462791 == 32 && ((a1562022185 <=  -113 && a394986443 == 10) && a1538778197 == 1)))) {
    	cf = 0;
    	a402335329 = 32 ;
    	a597484636 = 36 ; 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((((a1823597932 == 32 && ((((input == 57) &&  cf==1 ) && a526854419 == 32) && a882589857 == 9)) && a369624711 == 5) && (a785058364 == 10 && a394986443 == 10))) {
    	cf = 0;
    	a402335329 = 32 ;
    	a597484636 = 36 ; 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((((a912673804 <=  -96 && (a337942537 == 4 && a304998879 == 4)) && a455265888 == 1) && ((( cf==1  && (input == 111)) && a394986443 == 10) && a42170353 == 32))) {
    	cf = 0;
    	a402335329 = 32 ;
    	a597484636 = 36 ; 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((((a570886160 == 32 && a455265888 == 1) && a847823400 <=  134) && ((a1293712589 == 32 && (( cf==1  && (input == 113)) && a815886759 == 1)) && a771824360 == 8))) {
    	cf = 0;
    	a871674684 = 4;
    	a1189507312 = ((((((a1711061361 * a912673804) % 14999) % 73) - -115) * 1) - 1);
    	a882589857 = ((a871674684 * a304998879) + -6);
    	a455265888 = (a304998879 + -2);
    	a1293712589 = 34 ;
    	a1678927341 = (a771824360 + 2);
    	a1140224045 = 33 ;
    	a2139432823 = ((((((a1711061361 * a912673804) % 14999) % 101) + -56) + -1) + 1);
    	a42170353 = 33 ;
    	a815886759 = a455265888;
    	a1817778538 = (a771824360 - 1);
    	a976945745 = (a785058364 + -7);
    	a1862658444 = (((((a2139432823 * a835146412) / 5) / 5) % 29) - -215);
    	a785058364 = (a771824360 + 3);
    	a1823597932 = 33 ;
    	a1717386854 = 33 ;
    	a2128522778 = 34 ;
    	a1491071731 = 34 ;
    	a2052893331 = (a1917402140 + 8);
    	a337942537 = ((a1649499722 * a1538778197) + -4);
    	a369624711 = (a304998879 + 2);
    	a807447096 = ((((((a807447096 * a2147255888) % 14999) + 4188) - -6164) % 25) + -18);
    	a2147255888 = (((((((a912673804 * a835146412) % 14999) % 61) - -328) / 5) * 5) + 5);
    	a796195142 = 33 ;
    	a1538778197 = (a304998879 + -1);
    	a1562022185 = (((((((a1562022185 * a1189507312) % 14999) % 95) - -133) + 10970) / 5) + -2137);
    	a394986443 = (a1649499722 - -2);
    	a570886160 = 33 ;
    	a526854419 = 33 ;
    	a723108336 = ((((((a723108336 * a177640787) % 14999) - 8927) / 5) % 73) - 42);
    	a1610801558 = (((((((a1610801558 * a177640787) % 14999) % 12) + -32) / 5) - -12408) + -12430);
    	a1917402140 = (a882589857 + -7);
    	a847823400 = ((((((((a847823400 * a770071847) % 14999) % 108) - -243) + 1) * 5) % 108) + 158);
    	a771824360 = (a1817778538 - -3);
    	a304998879 = ((a871674684 - a871674684) - -5);
    	a1763171942 = 34 ;
    	a1472462791 = 33 ;
    	a597484636 = 35 ;
    	a912673804 = ((((((((a912673804 * a1711061361) % 14999) * 2) % 65) + -30) * 5) % 65) - 29); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a526854419 == 32 && ((input == 59) &&  cf==1 )) && (a2139432823 <=  -159 && (a723108336 <=  -118 && ((a2128522778 == 32 && a1293712589 == 32) && a1472462791 == 32))))) {
    	cf = 0;
    	a2052893331 = (a1678927341 - -1);
    	a796195142 = 33 ;
    	a597484636 = 36 ;
    	a1110504460 = (a882589857 - -1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm32(int input) {
    if((((a1610801558 <=  -36 && a1538778197 == 1) && a1293712589 == 32) && (((( cf==1  && (input == 79)) && a912673804 <=  -96) && a976945745 == 1) && a455265888 == 1))) {
    	cf = 0;
    	a1763171942 = 34 ;
    	a177640787 = (((((((a177640787 * a1610801558) % 14999) % 29) - 69) * 10) / 9) - 4);
    	a1189507312 = (((((((a177640787 * a835146412) % 39) - -264) * 5) - -23311) % 39) + 202);
    	a1472462791 = 34 ;
    	a2139432823 = (((((((a2139432823 * a835146412) % 14999) - -28000) % 101) + 80) * 9) / 10);
    	a1562022185 = (((((((a1562022185 * a835146412) % 14999) / 5) % 95) - -134) / 5) + 90);
    	a976945745 = (a785058364 + -9);
    	a1678927341 = (a394986443 + -1);
    	a15249890 = ((((((a1862658444 * a912673804) % 14999) % 14838) - -15161) - -1) * 1);
    	a847823400 = (((((((a847823400 * a835146412) % 14999) % 24) - -376) * 1) + -22088) - -22087);
    	a871550570 = 34 ;
    	a1717386854 = 34 ;
    	a912673804 = (((((((a177640787 * a177640787) % 29) - -58) + 5) * 5) % 29) - -42);
    	a1610801558 = ((((((a1862658444 * a177640787) % 14999) / 5) % 67) + 56) - 0);
    	a1965120042 = (a1917402140 + 15);
    	a1293712589 = 34 ;
    	a491168833 = (a1965120042 + -11);
    	a337942537 = (a369624711 - 1);
    	a1711061361 = ((((((((a1711061361 * a2147255888) % 14999) % 59) - -54) - 12302) * 2) % 59) - -88);
    	a455265888 = (a1965120042 + -14);
    	a796195142 = 34 ;
    	a2128522778 = 34 ;
    	a1538778197 = (a771824360 - 8);
    	a2147255888 = ((((((a1189507312 * a177640787) % 96) - -249) - -11) / 5) + 108);
    	a42170353 = 34 ;
    	a882589857 = (a304998879 - -7);
    	a304998879 = (a871674684 + 1);
    	a1862658444 = (((((((a1862658444 * a723108336) % 14999) % 10) - -255) + 3849) - -16148) - 19996); 
    	 printf("");//printf("%d\n", 121); fflush(stdout); 
    } if(((a304998879 == 4 && (a847823400 <=  134 && a455265888 == 1)) && (a1189507312 <=  40 && (a871550570 == 32 && (( cf==1  && (input == 112)) && a1610801558 <=  -36))))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a706197976 = 35 ;
    	a976902422 = (((((a1711061361 * a2139432823) % 14999) + -29145) * 1) + -749);
    	a2052893331 = (a1917402140 - -11); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm33(int input) {
    if(((((a177640787 <=  -120 && (a835146412 <=  36 && (a526854419 == 32 && ( cf==1  && (input == 75))))) && a807447096 <=  -45) && a455265888 == 1) && a337942537 == 4)) {
    	cf = 0;
    	a912673804 = (((((((a723108336 * a2139432823) % 14999) - 9741) + -3488) + -1007) % 65) - 29);
    	a1678927341 = (a369624711 + 5);
    	a871674684 = ((a1678927341 + a1678927341) - 16);
    	a871550570 = 33 ;
    	a835146412 = (((((((a1189507312 * a912673804) % 14999) - -4631) % 36) + 72) / 5) - -79);
    	a847823400 = (((((((a847823400 * a835146412) % 14999) % 108) + 242) + 0) - 7466) + 7466);
    	a807447096 = ((((((a807447096 * a1862658444) % 14999) % 25) - 18) / 5) * 5);
    	a785058364 = 11;
    	a304998879 = ((a1538778197 / a1538778197) + 4);
    	a1293712589 = 33 ;
    	a1140224045 = 33 ;
    	a1661935098 = 33 ;
    	a369624711 = 6;
    	a177640787 = (((((((a177640787 * a1562022185) % 14999) % 18) + -100) * 5) % 18) + -95);
    	a2052893331 = ((a882589857 - a815886759) + 8);
    	a42170353 = 33 ;
    	a1610801558 = ((((((((a1610801558 * a1189507312) % 14999) % 12) - 23) * 5) * 5) % 12) + -22);
    	a1909685633 = 33 ;
    	a394986443 = ((a455265888 - a1538778197) + 11);
    	a2147255888 = ((((((a2147255888 * a1189507312) % 14999) % 96) + 170) - -1) + -1);
    	a1763171942 = 33 ;
    	a815886759 = ((a1678927341 + a1678927341) - 17);
    	a796195142 = 33 ;
    	a1562022185 = ((((((a770071847 * a912673804) * 2) % 75) + -37) + -14319) + 14319);
    	a2128522778 = 33 ;
    	a1538778197 = ((a304998879 * a771824360) - 43);
    	a337942537 = (a976945745 - -4);
    	a570886160 = 33 ;
    	a1711061361 = ((((((a1711061361 * a1189507312) % 14999) % 59) - -54) + 0) - -1);
    	a1263839693 = 36 ;
    	a976945745 = (a785058364 + -8);
    	a526854419 = 33 ;
    	a455265888 = (a882589857 + -7);
    	a1409922970 = (a2052893331 + -3);
    	a882589857 = (a771824360 + 1);
    	a1717386854 = 33 ;
    	a1189507312 = ((((((((a1189507312 * a2147255888) % 14999) % 73) - -115) * 5) + 22626) % 73) + 54); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if((((a1610801558 <=  -36 && ((input == 113) &&  cf==1 )) && a570886160 == 32) && ((a394986443 == 10 && (a871674684 == 3 && a1909685633 == 32)) && a847823400 <=  134))) {
    	cf = 0;
    	a1823597932 = 34 ;
    	a807447096 = ((((((a807447096 * a2147255888) % 14999) + -1583) + -6290) % 105) - -112);
    	a2128522778 = 34 ;
    	a1862658444 = (((((((a177640787 * a177640787) % 14999) % 10) - -251) + 4) - 19140) - -19131);
    	a723108336 = (((((((a807447096 * a177640787) % 14999) % 45) - -76) - -1) - 26607) + 26605);
    	a491168833 = a882589857;
    	a1562022185 = ((((((a1862658444 * a1862658444) % 14999) % 95) - -119) - -3483) - 3477);
    	a15249890 = ((((((a912673804 * a1711061361) % 14999) + 6567) / 5) - 7566) + 14246);
    	a1472462791 = 34 ;
    	a1610801558 = ((((((a1610801558 * a807447096) % 14999) / 5) - 19278) % 67) - -115);
    	a771824360 = ((a369624711 - a369624711) - -10);
    	a1244737994 = 34 ;
    	a526854419 = 34 ;
    	a912673804 = ((((((a1610801558 * a835146412) % 14999) % 65) + -29) - -6265) - 6266);
    	a770071847 = (((((((a177640787 * a807447096) % 14999) % 44) - 46) * 5) % 44) - 20);
    	a455265888 = (a304998879 - 1);
    	a1538778197 = ((a304998879 / a871674684) - -2);
    	a785058364 = (a369624711 - -7);
    	a847823400 = ((((((a847823400 * a770071847) % 14999) % 24) - -375) - -1) - -1);
    	a815886759 = (a369624711 - 3);
    	a1678927341 = ((a976945745 / a394986443) + 10);
    	a1189507312 = (((((((a1189507312 * a1711061361) % 14999) % 39) + 228) * 1) + 1213) + -1213);
    	a1763171942 = 34 ;
    	a882589857 = (a871674684 + 8);
    	a570886160 = 33 ;
    	a871674684 = (a369624711 + -1);
    	a1917402140 = (a369624711 + -2);
    	a976945745 = (a394986443 + -7);
    	a1140224045 = 33 ;
    	a2147255888 = (((((((a2147255888 * a723108336) % 14999) - -8031) % 96) - -170) + -9747) - -9747);
    	a1293712589 = 34 ;
    	a1909685633 = 33 ;
    	a796195142 = 34 ;
    	a42170353 = 33 ;
    	a337942537 = (a785058364 + -7);
    	a835146412 = ((((((a835146412 * a2139432823) % 14999) % 36) + 73) + -4062) + 4061);
    	a369624711 = ((a771824360 * a771824360) + -93);
    	a1711061361 = (((((((a1711061361 * a1562022185) % 14999) / 5) % 59) - -54) - -27734) + -27733); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a304998879 == 4 && ((a337942537 == 4 && a394986443 == 10) && a1140224045 == 32)) && a1293712589 == 32) && (( cf==1  && (input == 111)) && a369624711 == 5))) {
    	cf = 0;
    	a1140224045 = 33 ;
    	a1678927341 = (a394986443 + 1);
    	a723108336 = ((((((a177640787 * a807447096) % 14999) + 4433) * 1) % 45) + 74);
    	a2128522778 = 34 ;
    	a871550570 = 34 ;
    	a771824360 = (a1678927341 - 1);
    	a815886759 = ((a369624711 + a1678927341) + -13);
    	a1189507312 = (((((((a2147255888 * a807447096) % 14999) + 1751) + -15901) + -594) % 39) + 228);
    	a882589857 = a1678927341;
    	a394986443 = ((a304998879 - a1678927341) - -19);
    	a1472462791 = 34 ;
    	a526854419 = 34 ;
    	a976945745 = (a1678927341 + -8);
    	a570886160 = 34 ;
    	a1823597932 = 34 ;
    	a337942537 = (a815886759 - -3);
    	a1763171942 = 34 ;
    	a1538778197 = (a771824360 + -7);
    	a1909685633 = 34 ;
    	a1862658444 = ((((((a177640787 * a177640787) % 14999) + 11274) / 5) % 10) - -249);
    	a1871179310 = 32 ;
    	a1562022185 = (((((((a1562022185 * a1610801558) % 14999) / 5) % 95) + 52) * 10) / 9);
    	a796195142 = 36 ;
    	a1293712589 = 34 ;
    	a835146412 = (((((((a835146412 * a1189507312) % 14999) + -13062) % 71) - -182) - -14102) - 14102);
    	a304998879 = (a1678927341 - 6);
    	a42170353 = 34 ;
    	a785058364 = (a1678927341 + 1);
    	a913550374 = (a871674684 + 7);
    	a2139432823 = ((((((((a2139432823 * a177640787) % 14999) % 101) + 81) * 5) - 14844) % 101) - -188);
    	a1610801558 = ((((((((a177640787 * a177640787) % 14999) - 17213) % 67) - -87) * 5) % 67) + 9);
    	a1711061361 = ((((((((a1711061361 * a847823400) % 14999) % 58) + 173) * 5) + -15745) % 58) - -190);
    	a2147255888 = (((((((a2147255888 * a1189507312) % 14999) % 61) - -328) * 1) + 27865) + -27864);
    	a455265888 = (a369624711 - 2);
    	a847823400 = ((((((a847823400 * a723108336) % 14999) % 24) - -375) - 17508) - -17508);
    	a1717386854 = 34 ;
    	a1661935098 = 34 ;
    	a912673804 = ((((((a177640787 * a177640787) % 14999) + 10329) / 5) % 29) + 57);
    	a1917402140 = (a1678927341 - 7);
    	a369624711 = ((a785058364 + a785058364) + -17);
    	a169710014 = ((((40 - 7703) + 7870) * 9) / 10);
    	a871674684 = (a1678927341 + -6);
    	a177640787 = ((((((((a177640787 * a912673804) % 14999) % 29) + -51) + -2) / 5) * 49) / 10); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a570886160 == 32 && ((a1717386854 == 32 && a815886759 == 1) && a1763171942 == 32)) && ((a455265888 == 1 && ((input == 110) &&  cf==1 )) && a1909685633 == 32))) {
    	cf = 0;
    	a771824360 = ((a304998879 * a394986443) + -30);
    	a570886160 = 33 ;
    	a1917402140 = (a304998879 - 1);
    	a455265888 = a871674684;
    	a1538778197 = a455265888;
    	a337942537 = (a1538778197 + 2);
    	a1763171942 = 34 ;
    	a2147255888 = ((((((a2147255888 * a835146412) % 14999) / 5) - 15000) % 96) - -207);
    	a491168833 = ((a785058364 - a1678927341) - -8);
    	a526854419 = 34 ;
    	a976945745 = ((a455265888 * a771824360) - 27);
    	a1862658444 = ((((((a835146412 * a177640787) % 14999) - -9448) / 5) % 10) + 256);
    	a723108336 = ((((((((a177640787 * a835146412) % 14999) + -1686) % 45) + 76) * 5) % 45) - -41);
    	a1293712589 = 34 ;
    	a807447096 = (((((((a807447096 * a835146412) % 14999) % 105) + 113) * 5) % 105) + 112);
    	a1711061361 = ((((((a1711061361 * a1189507312) % 14999) % 59) - -55) - 18788) + 18788);
    	a1472462791 = 34 ;
    	a15249890 = (((((a835146412 * a1610801558) % 14999) / 5) - -23421) - -328);
    	a882589857 = ((a369624711 - a815886759) - -7);
    	a796195142 = 34 ;
    	a785058364 = ((a304998879 / a394986443) - -12);
    	a871674684 = ((a455265888 / a771824360) - -4);
    	a847823400 = ((((((a847823400 * a1862658444) % 14999) * 2) + 3) % 24) + 376);
    	a1678927341 = (a369624711 + 5);
    	a815886759 = (a304998879 - 2);
    	a2128522778 = 34 ;
    	a770071847 = (((((((a835146412 * a835146412) % 14999) - -2420) / 5) + -10768) % 44) + -33);
    	a1189507312 = (((((((a723108336 * a912673804) % 14999) + -14172) - -3052) / 5) % 39) - -228);
    	a1909685633 = 33 ;
    	a42170353 = 33 ;
    	a369624711 = (a771824360 + -3);
    	a1610801558 = (((((((a2139432823 * a177640787) % 14999) % 67) - 4) * 5) % 67) + 57);
    	a1244737994 = 34 ;
    	a1562022185 = ((((((((a1562022185 * a770071847) % 14999) % 95) - -60) * 10) / 9) / 5) - -55);
    	a1823597932 = 34 ;
    	a1140224045 = 33 ;
    	a912673804 = (((((((a835146412 * a2139432823) % 14999) % 65) - 30) * 5) % 65) + -30);
    	a835146412 = ((((((a835146412 * a2139432823) % 14999) % 36) + 73) / 5) + 86); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm34(int input) {
    if((((( cf==1  && (input == 75)) && a1763171942 == 32) && a369624711 == 5) && ((a912673804 <=  -96 && (a1917402140 == 2 && a1491071731 == 32)) && a807447096 <=  -45))) {
    	cf = 0;
    	a1541342791 = ((((((((a1610801558 * a1862658444) % 14999) % 59) - -258) - -4189) * 5) % 59) - -201);
    	a455265888 = (a304998879 - 4);
    	a491168833 = ((a1917402140 / a785058364) - -11);
    	a570886160 = 32 ;
    	a42170353 = 33 ;
    	a912673804 = (((((a912673804 * a1541342791) % 14999) + -6163) * 1) + -6183);
    	a1562022185 = (((((((a1562022185 * a1189507312) % 14999) % 75) - 37) - -1142) / 5) - 276);
    	a2147255888 = (((((((a2147255888 * a1711061361) % 14999) % 96) - -171) + 28411) - 39542) - -11130);
    	a796195142 = 35 ;
    	a871550570 = 32 ;
    	a1862658444 = ((((((a807447096 * a177640787) % 14999) / 5) % 29) + 203) + -2);
    	a1823597932 = 33 ;
    	a976945745 = (a871674684 + -2);
    	a723108336 = ((((((a723108336 * a847823400) % 14999) + 3919) * 1) % 73) + -42);
    	a1472462791 = 33 ;
    	a1293712589 = 33 ;
    	a815886759 = (a1678927341 + -9);
    	a177640787 = ((((((a177640787 * a1610801558) % 14999) - -275) * 1) % 18) - 117);
    	a337942537 = ((a369624711 + a394986443) - 10);
    	a369624711 = (a394986443 - 4);
    	a1661935098 = 33 ;
    	a807447096 = (((((((a835146412 * a1562022185) % 14999) % 25) - 19) * 5) % 25) - 17);
    	a770071847 = (((((a1711061361 * a1541342791) % 14999) / 5) - 4508) + -10592);
    	a847823400 = ((((a1711061361 * a1711061361) - 23720) + -3337) * 1);
    	a1189507312 = (((((a1541342791 * a1541342791) % 14999) / 5) / 5) - 12800);
    	a1763171942 = 33 ;
    	a1228745271 = ((((((a1541342791 * a1541342791) % 14999) % 11) + 111) + -17173) + 17171);
    	a882589857 = (a976945745 + 8);
    	a1610801558 = ((((((a1610801558 * a1711061361) % 14999) % 12) - 22) - 2) - -2);
    	a835146412 = (((((a1541342791 * a1541342791) % 14999) - 23220) + -1696) * 1);
    	a394986443 = (a491168833 + -1);
    	a526854419 = 32 ;
    	a785058364 = a1678927341; 
    	 printf("");//printf("%d\n", 126); fflush(stdout); 
    } if(((a723108336 <=  -118 && (a1909685633 == 32 && ( cf==1  && (input == 72)))) && (((a1293712589 == 32 && a871550570 == 32) && a1472462791 == 32) && a394986443 == 10))) {
    	cf = 0;
    	a905282705 = 32 ;
    	a796195142 = 34 ;
    	a15249890 = ((((((a1862658444 * a835146412) % 14999) + 9574) / 5) / 5) + -16867);
    	a2052893331 = (a369624711 + 12); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm1(int input) {
    if(((a1862658444 <=  185 && a2128522778 == 32) && (a455265888 == 1 && (a1717386854 == 32 && (a847823400 <=  134 && ((a402335329 == 32 &&  cf==1 ) && a337942537 == 4)))))) {
    	if(((a815886759 == 1 && ((a785058364 == 10 && (a570886160 == 32 && a1491071731 == 32)) && a882589857 == 9)) && ((a597484636 == 33 &&  cf==1 ) && a1862658444 <=  185))) {
    		calculate_outputm26(input);
    	} 
    	if((((a597484636 == 36 &&  cf==1 ) && a871674684 == 3) && (a1140224045 == 32 && (((a723108336 <=  -118 && a1917402140 == 2) && a2147255888 <=  74) && a369624711 == 5)))) {
    		calculate_outputm27(input);
    	} 
    } 
    if(((a2147255888 <=  74 && (( cf==1  && a402335329 == 33) && a815886759 == 1)) && (a976945745 == 1 && (a807447096 <=  -45 && (a1140224045 == 32 && a847823400 <=  134))))) {
    	if(((((a771824360 == 8 && (( cf==1  && a1649499722 == 9) && a1678927341 == 9)) && a526854419 == 32) && a1610801558 <=  -36) && (a1491071731 == 32 && a1472462791 == 32))) {
    		calculate_outputm30(input);
    	} 
    } 
    if(((a1678927341 == 9 && (a1717386854 == 32 && a1562022185 <=  -113)) && (((a847823400 <=  134 && ( cf==1  && a402335329 == 34)) && a871550570 == 32) && a1538778197 == 1))) {
    	if((((a847823400 <=  134 && (a1862658444 <=  185 && a1472462791 == 32)) && a337942537 == 4) && ((a455265888 == 1 && (a1429598563 == 33 &&  cf==1 )) && a1711061361 <=  -5))) {
    		calculate_outputm32(input);
    	} 
    	if(((((( cf==1  && a1429598563 == 35) && a882589857 == 9) && a1711061361 <=  -5) && a526854419 == 32) && (a337942537 == 4 && (a2139432823 <=  -159 && a1661935098 == 32)))) {
    		calculate_outputm33(input);
    	} 
    } 
    if(((a1610801558 <=  -36 && (( cf==1  && a402335329 == 35) && a976945745 == 1)) && (a882589857 == 9 && ((a1562022185 <=  -113 && a1661935098 == 32) && a2147255888 <=  74)))) {
    	if(((((a1763171942 == 32 && a847823400 <=  134) && a1917402140 == 2) && a1862658444 <=  185) && (a1823597932 == 32 && (a177640787 <=  -120 && (a196558593 == 33 &&  cf==1 ))))) {
    		calculate_outputm34(input);
    	} 
    } 
}
 void calculate_outputm36(int input) {
    if(((((input == 111) &&  cf==1 ) && a570886160 == 32) && (((a1717386854 == 32 && (a1538778197 == 1 && a2147255888 <=  74)) && a770071847 <=  -137) && a177640787 <=  -120))) {
    	cf = 0;
    	a883263484 = 35 ;
    	a1610801558 = ((((((a1610801558 * a1562022185) % 14999) % 12) + -30) - -17432) + -17435);
    	a1678927341 = a785058364;
    	a1823597932 = 33 ;
    	a1711061361 = (((((((a1711061361 * a2139432823) % 14999) + -29725) - -10050) + -328) % 59) + 55);
    	a770071847 = (((((((a770071847 * a723108336) % 14999) % 22) - 114) * 5) % 22) + -104);
    	a1538778197 = (a871674684 - 2);
    	a177640787 = (((((((a177640787 * a835146412) % 14999) % 18) - 99) - 2) + 9722) + -9720);
    	a835146412 = ((((((a835146412 * a807447096) % 14999) % 36) - -72) + 2) + 1);
    	a42170353 = 33 ;
    	a570886160 = 33 ;
    	a1140224045 = 33 ;
    	a912673804 = ((((((a912673804 * a976902422) % 14999) - -11119) / 5) % 65) + -74);
    	a1485869055 = 34 ;
    	a771824360 = (a1678927341 - 1);
    	a796195142 = 33 ;
    	a1293712589 = 33 ;
    	a2052893331 = (a455265888 - -11);
    	a304998879 = (a394986443 + -5);
    	a785058364 = (a337942537 + 7);
    	a1862658444 = ((((((a847823400 * a1711061361) % 14999) % 29) + 214) - -2) * 1);
    	a1917402140 = ((a491168833 * a882589857) + -60);
    	a337942537 = a304998879;
    	a2139432823 = (((((((a1189507312 * a912673804) % 14999) * 2) / 5) / 5) % 101) + -56);
    	a1909685633 = 33 ;
    	a1472462791 = 33 ;
    	a2147255888 = (((((((a2147255888 * a770071847) % 14999) - -1523) + 802) / 5) % 96) + 171);
    	a1717386854 = 33 ;
    	a2128522778 = 33 ;
    	a1491071731 = 33 ;
    	a1763171942 = 33 ;
    	a815886759 = a1538778197;
    	a394986443 = ((a2052893331 * a304998879) + -49);
    	a871550570 = 33 ;
    	a882589857 = a1678927341;
    	a455265888 = a1538778197;
    	a1562022185 = ((((((a1562022185 * a1189507312) % 14999) * 2) / 5) % 75) + -37);
    	a1189507312 = ((((((a1189507312 * a912673804) % 14999) % 73) - -114) - -2) - 3); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((a1909685633 == 32 && ( cf==1  && (input == 75))) && a771824360 == 8) && a1293712589 == 32) && (a304998879 == 4 && (a1538778197 == 1 && a1472462791 == 32)))) {
    	cf = 0;
    	a815886759 = (a394986443 + -8);
    	a1711061361 = (((((a807447096 * a807447096) % 59) - -55) - -12374) - 12374);
    	a1143554178 = (((((((a976902422 * a976902422) % 14999) % 70) + 336) * 5) % 70) + 343);
    	a570886160 = 33 ;
    	a1817778538 = a394986443;
    	a42170353 = 33 ;
    	a1763171942 = 33 ;
    	a1189507312 = ((((((a1610801558 * a847823400) % 14999) + 495) + -10909) % 73) - -114);
    	a1140224045 = 33 ;
    	a1909685633 = 33 ;
    	a337942537 = ((a1538778197 / a491168833) + 5);
    	a1717386854 = 34 ;
    	a1917402140 = (a369624711 + -3);
    	a796195142 = 33 ;
    	a1491071731 = 33 ;
    	a2052893331 = ((a785058364 / a771824360) - -14);
    	a2128522778 = 33 ;
    	a770071847 = ((((((a770071847 * a1189507312) % 14999) + -13074) + -1260) % 22) - 104);
    	a785058364 = (a394986443 + 1);
    	a912673804 = ((((((a912673804 * a835146412) % 14999) + -13499) / 5) % 65) - 30);
    	a771824360 = (a815886759 + 7);
    	a882589857 = (a1538778197 + a1678927341);
    	a304998879 = a337942537;
    	a723108336 = (((((((a1143554178 * a1189507312) % 14999) - 1092) + 941) + -3446) % 45) + 75);
    	a455265888 = (a1678927341 - 7);
    	a1472462791 = 33 ;
    	a1562022185 = ((((((a1562022185 * a1711061361) % 14999) - 5252) % 75) - 36) - 2);
    	a1610801558 = (((((((a770071847 * a1143554178) % 14999) + 18353) % 67) - -18) * 9) / 10);
    	a2147255888 = (((((((a2147255888 * a2139432823) % 14999) + -5180) % 96) + 171) + 9890) + -9889);
    	a1538778197 = (a394986443 - 8);
    	a835146412 = (((((((a1189507312 * a1862658444) % 14999) % 36) - -63) / 5) * 10) / 3);
    	a2139432823 = (((((((a2139432823 * a177640787) % 14999) + 6402) % 101) - 132) * 9) / 10);
    	a1293712589 = 33 ;
    	a847823400 = ((((((a912673804 * a1711061361) % 24) - -375) + -15873) + -9382) + 25255);
    	a177640787 = ((((((((a177640787 * a1862658444) % 14999) % 18) - 99) * 5) * 5) % 18) + -101);
    	a1678927341 = ((a815886759 - a976945745) - -9);
    	a1823597932 = 33 ;
    	a394986443 = (a976945745 + 10);
    	a976945745 = (a871674684 + -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a835146412 <=  36 && (a1491071731 == 32 && ((((input == 110) &&  cf==1 ) && a1140224045 == 32) && a2128522778 == 32))) && (a1763171942 == 32 && a912673804 <=  -96))) {
    	cf = 0;
    	a1538778197 = (a976945745 + 1);
    	a1823597932 = 33 ;
    	a770071847 = ((((((a770071847 * a177640787) % 14999) % 22) - 135) - -9) - -4);
    	a570886160 = 33 ;
    	a1209080117 = ((a337942537 / a394986443) - -13);
    	a1763171942 = 33 ;
    	a1232289479 = (a815886759 - -6);
    	a871550570 = 33 ;
    	a976945745 = ((a1209080117 * a491168833) + -88);
    	a912673804 = ((((((a912673804 * a847823400) % 14999) % 65) + -29) - 11265) + 11263);
    	a337942537 = ((a882589857 * a871674684) + -31);
    	a304998879 = ((a1538778197 * a491168833) + -9);
    	a455265888 = ((a785058364 + a1538778197) - 10);
    	a1610801558 = (((((((a2139432823 * a1711061361) % 14999) % 12) + -30) * 9) / 10) + 1);
    	a2147255888 = (((((((a723108336 * a2139432823) % 14999) % 96) - -171) + 1) / 5) - -117);
    	a394986443 = (a882589857 + 2);
    	a526854419 = 33 ;
    	a1293712589 = 33 ;
    	a2052893331 = (a1678927341 - -8);
    	a785058364 = ((a871674684 + a491168833) - -1);
    	a771824360 = ((a394986443 * a491168833) - 68);
    	a1678927341 = (a1917402140 - -8);
    	a796195142 = 33 ;
    	a1711061361 = ((((((a770071847 * a1562022185) % 14999) - 9787) % 59) + 54) - -1);
    	a1189507312 = (((((((a1189507312 * a2147255888) % 14999) % 73) + 115) - -17323) / 5) + -3381);
    	a815886759 = (a1232289479 + -5);
    	a2139432823 = ((((((((a177640787 * a1562022185) % 14999) % 101) - 63) + -6) * 5) % 101) - 56);
    	a1717386854 = 33 ;
    	a177640787 = (((((((a177640787 * a1862658444) % 14999) - 5984) + -8321) + -407) % 18) + -100);
    	a1917402140 = ((a1232289479 - a871674684) - -1);
    	a882589857 = (a1538778197 - -8);
    	a847823400 = ((((((a807447096 * a807447096) / 5) * 5) / 5) % 24) + 376);
    	a1140224045 = 33 ;
    	a1909685633 = 33 ;
    	a1562022185 = ((((((((a1862658444 * a770071847) % 14999) / 5) % 95) + 133) * 5) % 95) + 84);
    	a1491071731 = 33 ;
    	a369624711 = ((a871674684 - a1209080117) + 16);
    	a2128522778 = 33 ;
    	a835146412 = (((((((a835146412 * a1610801558) % 14999) % 36) + 73) - 1) + 19648) + -19646); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a1823597932 == 32 && (a771824360 == 8 && a1189507312 <=  40)) && a1711061361 <=  -5) && ((a2128522778 == 32 && ( cf==1  && (input == 113))) && a815886759 == 1))) {
    	cf = 0;
    	a1485869055 = 34 ;
    	a304998879 = (a394986443 + -5);
    	a2139432823 = ((((((a2139432823 * a2147255888) % 14999) % 101) - 56) / 5) / 5);
    	a1909685633 = 33 ;
    	a1491071731 = 33 ;
    	a570886160 = 33 ;
    	a1763171942 = 33 ;
    	a1610801558 = ((((((a723108336 * a723108336) + 9339) % 12) + -32) * 10) / 9);
    	a1140224045 = 33 ;
    	a455265888 = (a491168833 - a304998879);
    	a815886759 = (a785058364 - 8);
    	a1711061361 = (((((((a807447096 * a976902422) % 14999) * 2) + -1) / 5) % 59) - -54);
    	a42170353 = 33 ;
    	a785058364 = (a882589857 + 2);
    	a835146412 = ((((((a835146412 * a807447096) % 14999) * 2) % 36) - -74) * 1);
    	a871550570 = 33 ;
    	a1293712589 = 33 ;
    	a912673804 = (((((((a912673804 * a1610801558) % 14999) % 65) + -60) - -17908) + 8804) + -26686);
    	a1917402140 = (a337942537 - 1);
    	a1472462791 = 33 ;
    	a2052893331 = (a337942537 - -8);
    	a1678927341 = ((a337942537 + a976945745) - -5);
    	a177640787 = (((((((a177640787 * a847823400) % 14999) / 5) % 18) - 100) - 3063) - -3062);
    	a883263484 = 35 ;
    	a796195142 = 33 ;
    	a1862658444 = ((((((a2147255888 * a1711061361) % 14999) / 5) % 29) + 214) - -1);
    	a770071847 = ((((((a770071847 * a1711061361) % 14999) / 5) % 22) + -114) - 1);
    	a1823597932 = 33 ;
    	a771824360 = (a1678927341 + -1);
    	a1717386854 = 33 ;
    	a1538778197 = (a394986443 - 8);
    	a882589857 = ((a871674684 / a871674684) + 9);
    	a1562022185 = (((((((a1562022185 * a835146412) % 14999) % 75) + -36) - -17087) / 5) - 3395);
    	a337942537 = (a871674684 + 1);
    	a394986443 = ((a304998879 - a369624711) + 12);
    	a2128522778 = 33 ;
    	a2147255888 = (((((((a2147255888 * a1189507312) % 14999) * 2) + 2) + -3) % 96) + 171);
    	a1189507312 = (((((((a1189507312 * a723108336) % 14999) + 2830) / 5) - -9447) % 73) + 95); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((a815886759 == 1 && (a1610801558 <=  -36 && ((a882589857 == 9 && (a1538778197 == 1 && (a455265888 == 1 && ( cf==1  && (input == 82))))) && a1678927341 == 9)))) {
    	cf = 0;
    	a2052893331 = (a976945745 + 13);
    	a795297040 = 35 ;
    	a796195142 = 33 ;
    	a15249890 = (((((((a976902422 * a976902422) % 14999) % 27) + 282) - -6) - -25843) + -25846); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm37(int input) {
    if(((( cf==1  && (input == 93)) && a882589857 == 9) && (((a871550570 == 32 && (a1717386854 == 32 && a337942537 == 4)) && a2139432823 <=  -159) && a2147255888 <=  74))) {
    	cf = 0;
    	a42170353 = 33 ;
    	a913550374 = (a976945745 + 2);
    	a1541342791 = (((((a912673804 * a976902422) % 14999) + 13703) + 190) + 339);
    	a570886160 = 33 ;
    	a337942537 = ((a394986443 * a913550374) - 28);
    	a835146412 = ((((((a835146412 * a847823400) % 14999) - -13484) % 36) + 74) + 1);
    	a1244737994 = 34 ;
    	a304998879 = a337942537;
    	a1562022185 = (((((((a1562022185 * a770071847) % 14999) + -601) / 5) + 1884) % 75) + -36);
    	a1763171942 = 33 ;
    	a796195142 = 35 ;
    	a1717386854 = 33 ;
    	a882589857 = (a491168833 + -1);
    	a2147255888 = (((((((a2147255888 * a1711061361) % 14999) * 2) * 1) - -3) % 96) - -171);
    	a770071847 = ((((((a835146412 * a835146412) % 22) + -113) / 5) * 59) / 10);
    	a912673804 = (((((((a847823400 * a847823400) % 14999) * 2) % 65) - 30) - -4984) - 4983);
    	a847823400 = (((((((a847823400 * a1610801558) % 14999) - 1396) / 5) + -18986) % 108) + 323); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm39(int input) {
    if(((a2139432823 <=  -159 && (a807447096 <=  -45 && ( cf==1  && (input == 68)))) && (((a1678927341 == 9 && a1293712589 == 32) && a1823597932 == 32) && a723108336 <=  -118))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a1162352213 = (a394986443 + -5);
    	a15249890 = ((((((a976902422 * a694436355) % 14999) + 5024) % 14838) + 15161) * 1);
    	a491168833 = (a882589857 + -4); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((a882589857 == 9 && (a1862658444 <=  185 && ( cf==1  && (input == 66)))) && a847823400 <=  134) && (a1472462791 == 32 && (a337942537 == 4 && a1293712589 == 32)))) {
    	cf = 0;
    	a169710014 = ((((((a976902422 * a847823400) % 14999) % 14842) + 15157) + 0) * 1);
    	a796195142 = 36 ;
    	a1420843252 = 36 ;
    	a807046857 = (a815886759 + 8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a847823400 <=  134 && a1293712589 == 32) && (a1763171942 == 32 && ((a1189507312 <=  40 && (a771824360 == 8 && ( cf==1  && (input == 73)))) && a394986443 == 10)))) {
    	cf = 0;
    	a402335329 = 33 ;
    	a1611619350 = 32 ;
    	a1649499722 = (a976945745 + 6); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm41(int input) {
    if(((a177640787 <=  -120 && (a2128522778 == 32 && a785058364 == 10)) && (a815886759 == 1 && (a1472462791 == 32 && (( cf==1  && (input == 57)) && a1189507312 <=  40))))) {
    	cf = 0;
    	a169710014 = (((((a976902422 * a976902422) % 14999) - -9858) * 1) + 561);
    	a1420843252 = 34 ;
    	a796195142 = 36 ;
    	a1110504460 = (a815886759 - -7); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a1189507312 <=  40 && (a1717386854 == 32 && (a912673804 <=  -96 && (a1763171942 == 32 && ((input == 63) &&  cf==1 ))))) && (a526854419 == 32 && a1140224045 == 32))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a491168833 = (a815886759 - -8);
    	a1244737994 = 35 ;
    	a15249890 = ((((((a835146412 * a1711061361) % 14999) % 14838) + 15161) / 5) - -21643); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm42(int input) {
    if(((((a1862658444 <=  185 && a882589857 == 9) && a1562022185 <=  -113) && a1763171942 == 32) && (a1917402140 == 2 && (( cf==1  && (input == 75)) && a1293712589 == 32)))) {
    	cf = 0;
    	a847823400 = (((((a1711061361 * a723108336) - 5516) / 5) % 108) + 291);
    	a976945745 = (a785058364 + -7);
    	a1610801558 = (((((a835146412 * a1711061361) - -19) - -15509) % 12) + -33);
    	a871674684 = (a1917402140 - -2);
    	a1263839693 = 36 ;
    	a1140224045 = 33 ;
    	a770071847 = (((((((a770071847 * a177640787) % 14999) % 22) - 113) + 27514) + -42987) - -15469);
    	a2128522778 = 33 ;
    	a912673804 = (((((((a2139432823 * a1610801558) % 14999) % 65) + -46) + -15127) + 41342) - 26220);
    	a807447096 = (((((((a807447096 * a976902422) % 14999) % 25) + -19) * 5) % 25) + -18);
    	a871550570 = 33 ;
    	a1763171942 = 33 ;
    	a1409922970 = ((a304998879 * a1917402140) - -5);
    	a1678927341 = (a394986443 + -1);
    	a2052893331 = (a337942537 - -12);
    	a815886759 = ((a881287135 * a455265888) - 13);
    	a1472462791 = 33 ;
    	a304998879 = (a882589857 + -4);
    	a2147255888 = (((((((a2147255888 * a912673804) % 14999) % 96) + 170) - -15401) / 5) + -2992);
    	a42170353 = 33 ;
    	a1862658444 = (((((((a1862658444 * a847823400) % 14999) * 2) * 1) / 5) % 29) - -216);
    	a1293712589 = 33 ;
    	a1189507312 = ((((((a1189507312 * a1610801558) % 14999) % 73) - -113) - 0) * 1);
    	a1661935098 = 33 ;
    	a1562022185 = (((((((a1562022185 * a847823400) % 14999) % 75) + -36) + 13678) + 1866) + -15544);
    	a771824360 = (a337942537 - -5);
    	a177640787 = (((((((a1711061361 * a1711061361) % 18) - 101) + -1) * 5) % 18) - 94);
    	a796195142 = 33 ;
    	a369624711 = (a337942537 - -2);
    	a785058364 = (a337942537 + 7);
    	a882589857 = ((a1678927341 * a871674684) + -30);
    	a1823597932 = 33 ;
    	a337942537 = ((a871674684 + a1678927341) - 9); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1661935098 == 32 && a369624711 == 5) && (a815886759 == 1 && ((a42170353 == 32 && (((input == 113) &&  cf==1 ) && a1472462791 == 32)) && a785058364 == 10)))) {
    	cf = 0;
    	a177640787 = ((((((a1711061361 * a2139432823) % 14999) / 5) % 18) - 100) - -1);
    	a1917402140 = (a785058364 + -7);
    	a912673804 = ((((((a912673804 * a807447096) % 14999) % 65) + -39) + 9) - -1);
    	a2147255888 = (((((((a2147255888 * a835146412) % 14999) % 96) + 171) * 5) % 96) - -160);
    	a337942537 = (a976945745 + 3);
    	a774885508 = ((a369624711 / a771824360) + 9);
    	a304998879 = ((a394986443 - a882589857) - -3);
    	a369624711 = (a1917402140 + 4);
    	a2052893331 = (a815886759 - -13);
    	a1140224045 = 33 ;
    	a871674684 = ((a815886759 / a771824360) + 4);
    	a2128522778 = 33 ;
    	a770071847 = (((((((a770071847 * a807447096) % 14999) + 12243) + -2653) / 5) % 22) - 134);
    	a1678927341 = (a455265888 + 8);
    	a1491071731 = 33 ;
    	a15249890 = ((((((a807447096 * a1189507312) % 14999) % 14838) - -15161) + 0) + 0);
    	a882589857 = (a881287135 - -2);
    	a771824360 = (a394986443 - 2);
    	a1293712589 = 33 ;
    	a815886759 = (a394986443 - 9);
    	a1562022185 = ((((((a1562022185 * a847823400) % 14999) % 75) - 37) - -2126) + -2125);
    	a785058364 = (a976945745 + 9);
    	a847823400 = ((((((((a1862658444 * a807447096) % 14999) % 108) - -243) + -1) * 5) % 108) + 208);
    	a796195142 = 33 ;
    	a1661935098 = 33 ;
    	a1763171942 = 33 ;
    	a1189507312 = (((((((a835146412 * a2139432823) % 14999) % 73) - -115) - -1) + 13539) + -13541);
    	a1862658444 = ((((((a1862658444 * a177640787) % 14999) % 29) - -215) - -1) - -1);
    	a2139432823 = ((((((a2139432823 * a723108336) % 14999) / 5) - -8761) % 101) + -155);
    	a1823597932 = 33 ;
    	a1472462791 = 33 ;
    	a807447096 = ((((((((a807447096 * a912673804) % 14999) * 2) % 105) + 112) * 5) % 105) + 32); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1491071731 == 32 && ((( cf==1  && (input == 111)) && a1140224045 == 32) && a304998879 == 4)) && ((a815886759 == 1 && a847823400 <=  134) && a882589857 == 9))) {
    	cf = 0;
    	a785058364 = ((a304998879 - a337942537) + 11);
    	a1562022185 = ((((((a976902422 * a1711061361) % 14999) / 5) % 75) + -36) / 5);
    	a912673804 = (((((((a912673804 * a1562022185) % 14999) % 65) + -29) + -2) - 12209) + 12210);
    	a871550570 = 33 ;
    	a1862658444 = (((((((a1862658444 * a847823400) % 14999) + -119) % 29) + 214) + 29382) - 29381);
    	a42170353 = 33 ;
    	a2147255888 = (((((((a2147255888 * a807447096) % 14999) * 2) + -2) - -4) % 96) - -171);
    	a1140224045 = 33 ;
    	a1541342791 = ((((((a976902422 * a976902422) % 14999) + -13303) + -1561) * 2) - 102);
    	a771824360 = (a1917402140 + 7);
    	a1661935098 = 33 ;
    	a882589857 = (a881287135 - -2);
    	a1293712589 = 33 ;
    	a807447096 = ((((((a723108336 * a2139432823) % 14999) / 5) / 5) % 25) + -18);
    	a369624711 = (a815886759 - -5);
    	a796195142 = 35 ;
    	a1610801558 = (((((((a976902422 * a847823400) % 14999) % 12) - 23) * 1) - -17854) + -17853);
    	a1678927341 = (a1917402140 - -8);
    	a435971279 = (a304998879 - -4);
    	a1823597932 = 33 ;
    	a770071847 = ((((((a770071847 * a835146412) % 14999) % 22) + -114) + -1) * 1);
    	a871674684 = ((a882589857 - a304998879) + -2);
    	a1351640013 = 34 ;
    	a304998879 = (a771824360 + -4); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a2139432823 <=  -159 && (a177640787 <=  -120 && ( cf==1  && (input == 110)))) && (a1763171942 == 32 && (a1917402140 == 2 && (a1678927341 == 9 && a815886759 == 1))))) {
    	cf = 0;
    	a771824360 = ((a337942537 / a369624711) - -9);
    	a815886759 = (a394986443 + -9);
    	a796195142 = 33 ;
    	a1678927341 = (a976945745 + 8);
    	a15249890 = (((((a976902422 * a976902422) % 14999) - -13621) / 5) + 19284);
    	a1472462791 = 33 ;
    	a882589857 = ((a1678927341 + a337942537) - 4);
    	a2139432823 = ((((((a847823400 * a770071847) % 14999) % 101) - 57) - 14782) + 14781);
    	a1823597932 = 33 ;
    	a304998879 = (a394986443 + -6);
    	a1661935098 = 33 ;
    	a847823400 = ((((((a847823400 * a770071847) % 14999) + -8733) % 108) - -242) * 1);
    	a785058364 = ((a394986443 / a394986443) - -10);
    	a1140224045 = 33 ;
    	a2052893331 = ((a881287135 + a881287135) - 2);
    	a2147255888 = ((((((a2147255888 * a177640787) % 14999) / 5) * 5) % 96) + 171);
    	a1491071731 = 33 ;
    	a774885508 = (a1917402140 - -7);
    	a1293712589 = 33 ;
    	a871674684 = (a1538778197 + 2);
    	a1862658444 = (((((a723108336 * a835146412) * 2) % 29) - -214) * 1);
    	a1562022185 = (((((((a1562022185 * a2139432823) % 14999) / 5) - -14535) + 11083) % 75) + -82);
    	a1189507312 = (((((((a1189507312 * a1711061361) % 14999) % 73) - -115) * 5) % 73) - -47);
    	a337942537 = ((a815886759 - a1678927341) + 13);
    	a1763171942 = 33 ;
    	a912673804 = ((((((a912673804 * a2147255888) % 14999) + -755) % 65) + -5) / 5);
    	a770071847 = (((((((a770071847 * a1862658444) % 14999) / 5) / 5) / 5) % 22) - 114);
    	a807447096 = ((((((((a807447096 * a1862658444) % 14999) - 14160) % 105) - -213) * 5) % 105) - -106);
    	a177640787 = ((((71 / 5) - 131) + 18550) + -18540);
    	a2128522778 = 33 ;
    	a1917402140 = (a369624711 - 2);
    	a369624711 = (a785058364 + -4); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((a304998879 == 4 && (a2147255888 <=  74 && a2128522778 == 32)) && a337942537 == 4) && a1472462791 == 32) && (( cf==1  && (input == 72)) && a1140224045 == 32))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a2052893331 = (a369624711 - -5);
    	a597484636 = 34 ;
    	a12903048 = ((a2052893331 / a881287135) + 15); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm2(int input) {
    if(((a2139432823 <=  -159 && (( cf==1  && a976902422 <=  -179) && a835146412 <=  36)) && ((a770071847 <=  -137 && (a570886160 == 32 && a2128522778 == 32)) && a815886759 == 1))) {
    	if(((a304998879 == 4 && (a1917402140 == 2 && a976945745 == 1)) && ((a1140224045 == 32 && (( cf==1  && a491168833 == 7) && a847823400 <=  134)) && a912673804 <=  -96))) {
    		calculate_outputm36(input);
    	} 
    	if(((a491168833 == 11 &&  cf==1 ) && (a1562022185 <=  -113 && (a1189507312 <=  40 && (a2128522778 == 32 && ((a847823400 <=  134 && a304998879 == 4) && a835146412 <=  36)))))) {
    		calculate_outputm37(input);
    	} 
    } 
    if(((a815886759 == 1 && a871674684 == 3) && (a1189507312 <=  40 && (a394986443 == 10 && ((a1491071731 == 32 && ( cf==1  && ((-179 < a976902422) && (6 >= a976902422)))) && a771824360 == 8))))) {
    	if(((a1711061361 <=  -5 && ((( cf==1  && 267 < a694436355) && a847823400 <=  134) && a1538778197 == 1)) && (a2147255888 <=  74 && (a1610801558 <=  -36 && a723108336 <=  -118)))) {
    		calculate_outputm39(input);
    	} 
    } 
    if(((((a1140224045 == 32 && a912673804 <=  -96) && a815886759 == 1) && a871674684 == 3) && ((a770071847 <=  -137 && ( cf==1  && 197 < a976902422)) && a369624711 == 5))) {
    	if(((a912673804 <=  -96 && (a881287135 == 6 &&  cf==1 )) && (a847823400 <=  134 && (a1472462791 == 32 && ((a526854419 == 32 && a1140224045 == 32) && a835146412 <=  36))))) {
    		calculate_outputm41(input);
    	} 
    	if((((((a881287135 == 8 &&  cf==1 ) && a807447096 <=  -45) && a912673804 <=  -96) && a1917402140 == 2) && ((a1661935098 == 32 && a871674684 == 3) && a2147255888 <=  74))) {
    		calculate_outputm42(input);
    	} 
    } 
}
 void calculate_outputm46(int input) {
    if((((input == 98) &&  cf==1 ) && ((((a337942537 == 4 && (a1862658444 <=  185 && a1823597932 == 32)) && a1717386854 == 32) && a1763171942 == 32) && a770071847 <=  -137))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a1143554178 = ((((((a835146412 * a1189507312) % 14999) - 14927) + -49) - -12904) + -12853);
    	a534143625 = ((((((a723108336 * a1143554178) % 14999) * 2) * 1) / 5) - 21868);
    	a2052893331 = ((a304998879 * a369624711) + -5); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a1562022185 <=  -113 && a2139432823 <=  -159) && a771824360 == 8) && ((a847823400 <=  134 && (a815886759 == 1 && ((input == 72) &&  cf==1 ))) && a369624711 == 5))) {
    	cf = 0;
    	a1244737994 = 34 ;
    	a796195142 = 35 ;
    	a913550374 = ((a815886759 * a882589857) + -5);
    	a1541342791 = (((((a1192100362 * a1192100362) * 3) % 14758) - -15240) - 0); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm3(int input) {
    if((((a1610801558 <=  -36 && (a1717386854 == 32 && (((-99 < a1192100362) && (62 >= a1192100362)) &&  cf==1 ))) && a337942537 == 4) && ((a976945745 == 1 && a815886759 == 1) && a2128522778 == 32))) {
    	if(((a1610801558 <=  -36 && ((a835146412 <=  36 && ( cf==1  && a566378298 == 33)) && a1823597932 == 32)) && (a785058364 == 10 && (a1140224045 == 32 && a1538778197 == 1)))) {
    		calculate_outputm46(input);
    	} 
    } 
}
 void calculate_outputm50(int input) {
    if(((a1717386854 == 32 && (((input == 79) &&  cf==1 ) && a526854419 == 32)) && (((a815886759 == 1 && a785058364 == 10) && a847823400 <=  134) && a871674684 == 3))) {
    	cf = 0;
    	a42170353 = 34 ;
    	a169710014 = (((((((a1610801558 * a2147255888) % 14999) - 13106) + 7204) * 1) % 46) + 268);
    	a871550570 = 34 ;
    	a771824360 = (a1917402140 + 4);
    	a912673804 = (((((a1562022185 * a1562022185) % 14999) + -29886) - 4) - 76);
    	a1472462791 = 34 ;
    	a455265888 = (a394986443 - 7);
    	a807447096 = ((((((a807447096 * a1711061361) % 14999) % 105) - -88) * 5) / 5);
    	a882589857 = (a785058364 - -1);
    	a1224074430 = ((((((a169710014 * a169710014) % 14999) + 571) * 10) / 9) + 9938);
    	a1538778197 = a976945745;
    	a177640787 = ((((((((a177640787 * a847823400) % 14999) % 29) + -52) + -1) * 5) % 29) - 32);
    	a796195142 = 36 ;
    	a785058364 = ((a304998879 - a1621255820) + 18);
    	a1763171942 = 32 ;
    	a570886160 = 34 ;
    	a313727472 = ((((((a1224074430 * a1862658444) % 14999) % 10) - 104) / 5) + -87);
    	a1823597932 = 32 ;
    	a1610801558 = (((((((a1189507312 * a2139432823) % 14999) / 5) * 5) / 5) % 67) + 56);
    	a2147255888 = (((((a770071847 * a2139432823) - 6079) % 61) + 351) + -11);
    	a1862658444 = (((((((a807447096 * a2139432823) % 14999) - 28340) + -81) - 71) % 10) - -265);
    	a815886759 = (a304998879 - 3);
    	a1661935098 = 34 ;
    	a835146412 = ((((((a835146412 * a1562022185) % 14999) % 71) + 182) * 1) * 1);
    	a1711061361 = (((((((a1711061361 * a847823400) % 14999) % 58) + 173) / 5) + 27601) + -27454);
    	a337942537 = (a871674684 - -3);
    	a394986443 = (a1649499722 - -3);
    	a871674684 = (a304998879 + -1);
    	a1189507312 = ((((((a1189507312 * a807447096) % 14999) * 2) - -3) % 39) + 228);
    	a1678927341 = (a369624711 + 2);
    	a847823400 = ((((((a847823400 * a1562022185) % 14999) * 2) * 1) / 5) + -11615);
    	a526854419 = 34 ;
    	a1717386854 = 33 ;
    	a1562022185 = (((((a1562022185 * a723108336) % 14999) + -13106) + -529) * 1); 
    	 printf("");//printf("%d\n", 117); fflush(stdout); 
    } if(((a394986443 == 10 && (a1189507312 <=  40 && a1862658444 <=  185)) && (((( cf==1  && (input == 104)) && a1661935098 == 32) && a871550570 == 32) && a570886160 == 32))) {
    	cf = 0;
    	a1541342791 = (((78 / 5) - -19961) - -9868);
    	a1244737994 = 36 ;
    	a796195142 = 35 ;
    	a1260631 = (a455265888 - -10); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm51(int input) {
    if(((a2147255888 <=  74 && (a304998879 == 4 && (a1293712589 == 32 && (( cf==1  && (input == 62)) && a2128522778 == 32)))) && (a2139432823 <=  -159 && a912673804 <=  -96))) {
    	cf = 0;
    	a1232289479 = ((a1538778197 + a1621255820) - 7);
    	a2052893331 = (a882589857 + 8);
    	a796195142 = 33 ;
    	a458942489 = ((((66 * 10) / 3) - -4850) + 106); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm53(int input) {
    if(((a835146412 <=  36 && (a1678927341 == 9 && ((input == 83) &&  cf==1 ))) && ((a807447096 <=  -45 && (a1711061361 <=  -5 && a770071847 <=  -137)) && a871550570 == 32))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a1244737994 = 35 ;
    	a15249890 = ((((((a723108336 * a835146412) % 14999) % 27) + 296) + -2) + 3);
    	a1192100362 = ((((((a1189507312 * a2147255888) % 14999) % 14950) - 15048) * 1) * 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm57(int input) {
    if(((a570886160 == 32 && (a369624711 == 5 && ((input == 98) &&  cf==1 ))) && (a1678927341 == 9 && ((a1661935098 == 32 && a912673804 <=  -96) && a1491071731 == 32)))) {
    	cf = 0;
    	a337942537 = (a1917402140 - -1);
    	a369624711 = (a455265888 - -4);
    	a1862658444 = ((((((a1862658444 * a1562022185) % 14999) / 5) + -26814) % 29) - -237);
    	a1140224045 = 33 ;
    	a1678927341 = (a1917402140 - -7);
    	a42170353 = 33 ;
    	a770071847 = (((((((a770071847 * a912673804) % 14999) % 22) + -123) / 5) * 49) / 10);
    	a1610801558 = (((((((a177640787 * a1189507312) % 14999) % 12) - 22) / 5) + 26742) - 26755);
    	a570886160 = 33 ;
    	a871674684 = ((a304998879 * a882589857) - 41);
    	a1763171942 = 33 ;
    	a723108336 = ((((((a723108336 * a1189507312) % 14999) % 73) - 43) - 2) / 5);
    	a976945745 = (a871674684 + -2);
    	a1472462791 = 33 ;
    	a785058364 = (a1917402140 + 8);
    	a536820638 = (((((((a912673804 * a847823400) % 14999) % 14921) - -15077) / 5) * 5) + 5);
    	a1661935098 = 33 ;
    	a1189507312 = ((((((a1189507312 * a536820638) % 14999) + -11138) % 73) - -114) - 1);
    	a1491071731 = 33 ;
    	a882589857 = ((a1678927341 - a1917402140) - -3);
    	a2029515987 = 32 ;
    	a871550570 = 33 ;
    	a796195142 = 35 ;
    	a815886759 = (a394986443 + -9);
    	a847823400 = (((((a835146412 * a835146412) % 108) - -185) + 42) + 5);
    	a1541342791 = ((((((a536820638 * a536820638) % 14999) + 12713) - 8677) % 81) + 392);
    	a1562022185 = ((((((a2147255888 * a2139432823) % 14999) - 6769) / 5) % 75) - 21);
    	a2139432823 = ((((((a912673804 * a912673804) % 14999) % 101) + -122) - 22998) - -23062);
    	a177640787 = ((((((a177640787 * a807447096) % 14999) + -3803) - 2590) % 18) - 100);
    	a526854419 = 33 ;
    	a912673804 = ((((((a912673804 * a835146412) % 14999) / 5) % 65) + -29) / 5); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm58(int input) {
    if((((a570886160 == 32 && a1293712589 == 32) && a1661935098 == 32) && (((a1610801558 <=  -36 && ( cf==1  && (input == 98))) && a835146412 <=  36) && a1862658444 <=  185))) {
    	cf = 0;
    	a42170353 = 33 ;
    	a1293712589 = 33 ;
    	a723108336 = ((((76 * 10) / 9) + 2607) - 2626);
    	a912673804 = ((((((a912673804 * a1189507312) % 14999) % 65) + -29) - -24147) - 24147);
    	a455265888 = (a815886759 - -1);
    	a1538778197 = (a815886759 - -1);
    	a1862658444 = (((((((a177640787 * a1711061361) % 14999) % 29) + 215) - 1) + 2551) - 2550);
    	a369624711 = ((a815886759 + a815886759) - -4);
    	a1143554178 = (((((43 * 10) / 1) / 5) * 10) / 2);
    	a1817778538 = ((a815886759 - a1917402140) - -11);
    	a526854419 = 33 ;
    	a882589857 = (a304998879 + 5);
    	a1189507312 = (((((((a1862658444 * a2147255888) % 14999) % 73) + 92) - -23) - -11588) + -11587);
    	a1717386854 = 34 ;
    	a871674684 = (a455265888 - -2);
    	a1917402140 = (a369624711 + -3);
    	a337942537 = (a815886759 - -4);
    	a1763171942 = 33 ;
    	a807447096 = ((((((((a807447096 * a1143554178) % 14999) % 25) - 18) - -1) * 5) % 25) + -19);
    	a2139432823 = (((((((a2139432823 * a1562022185) % 14999) % 101) + -138) * 10) / 9) + -1);
    	a2052893331 = ((a976945745 - a1678927341) - -23);
    	a835146412 = ((((((a835146412 * a1862658444) % 14999) - -12996) % 36) - -72) - 0);
    	a1562022185 = (((((((a770071847 * a177640787) % 14999) - -2153) - 19423) - 11998) % 75) + 17);
    	a1491071731 = 33 ;
    	a847823400 = ((((((a1143554178 * a835146412) % 14999) % 24) - -358) + 5) * 1);
    	a1661935098 = 33 ;
    	a1140224045 = 33 ;
    	a177640787 = (((((((a177640787 * a1610801558) % 14999) % 18) + -110) - 3) * 9) / 10);
    	a796195142 = 33 ;
    	a1610801558 = (((((((a1189507312 * a1189507312) % 14999) % 67) - -45) * 10) / 9) + -57);
    	a1472462791 = 33 ;
    	a570886160 = 33 ;
    	a785058364 = ((a337942537 + a771824360) - 3);
    	a1678927341 = (a394986443 - 1);
    	a976945745 = (a394986443 + -8);
    	a815886759 = a1538778197; 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if((((input == 74) &&  cf==1 ) && (a526854419 == 32 && (((a1189507312 <=  40 && (a785058364 == 10 && a1562022185 <=  -113)) && a369624711 == 5) && a455265888 == 1)))) {
    	cf = 0;
    	a706197976 = 32 ;
    	a796195142 = 33 ;
    	a2052893331 = (a1678927341 - -4);
    	a1940475432 = (((26 + -27229) * 1) * 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm60(int input) {
    if(((a1717386854 == 32 && (a871674684 == 3 && a1610801558 <=  -36)) && ((a771824360 == 8 && (( cf==1  && (input == 98)) && a976945745 == 1)) && a1562022185 <=  -113))) {
    	cf = 0;
    	a1717386854 = 33 ;
    	a309620346 = ((a815886759 / a871674684) + 14);
    	a1649499722 = ((a337942537 * a785058364) - 28);
    	a1140224045 = 33 ;
    	a912673804 = ((((((a912673804 * a1562022185) % 14999) % 65) + -37) + 7) - 64);
    	a785058364 = (a394986443 - -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm61(int input) {
    if(((a1293712589 == 32 && (a1538778197 == 1 && ((input == 110) &&  cf==1 ))) && ((a394986443 == 10 && (a835146412 <=  36 && a1862658444 <=  185)) && a815886759 == 1))) {
    	cf = 0;
    	a2139432823 = ((((78 - -115) + 22) * 10) / 9);
    	a1862658444 = ((((((a1862658444 * a2139432823) % 14999) % 10) + 255) + 2) + -1);
    	a570886160 = 34 ;
    	a337942537 = (a309620346 - 1);
    	a177640787 = (((((((a177640787 * a835146412) % 14999) / 5) + 1885) - -17473) % 29) - 77);
    	a871674684 = (a771824360 + -3);
    	a1562022185 = (((((((a912673804 * a2139432823) % 14999) + 10624) / 5) / 5) % 95) + 133);
    	a394986443 = (a815886759 - -11);
    	a169710014 = ((((50 * 10) / 2) * 5) / 5);
    	a723108336 = ((((((a723108336 * a1189507312) % 14999) - 6922) % 45) - -76) * 1);
    	a1823597932 = 34 ;
    	a976945745 = ((a337942537 / a304998879) + 2);
    	a1472462791 = 34 ;
    	a1678927341 = (a369624711 + 6);
    	a2147255888 = (((((((a2147255888 * a1562022185) % 14999) % 61) - -330) - -1) + 8969) - 8969);
    	a771824360 = ((a882589857 * a882589857) + -71);
    	a313727472 = ((((((a1189507312 * a1610801558) % 14999) / 5) % 66) + -27) + -1);
    	a1538778197 = (a304998879 + -3);
    	a912673804 = (((((((a2139432823 * a2139432823) % 14999) % 29) - -43) + -12044) / 5) - -2438);
    	a1610801558 = (((((((a169710014 * a723108336) % 14999) % 67) + -1) * 5) % 67) + 56);
    	a796195142 = 36 ;
    	a1224074430 = ((((a313727472 * a313727472) - -20432) - -7) + 154);
    	a835146412 = ((((((a835146412 * a1189507312) % 14999) + 600) % 71) - -181) * 1);
    	a42170353 = 34 ;
    	a2128522778 = 34 ;
    	a1189507312 = ((((((a1189507312 * a313727472) % 14999) - 989) * 1) % 39) + 228);
    	a1909685633 = 34 ;
    	a815886759 = ((a304998879 * a369624711) + -27);
    	a882589857 = (a455265888 - -8);
    	a1293712589 = 34 ;
    	a369624711 = ((a304998879 - a1917402140) + 5); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a771824360 == 8 && a2139432823 <=  -159) && (a42170353 == 32 && ((a394986443 == 10 && (a815886759 == 1 && ((input == 113) &&  cf==1 ))) && a2128522778 == 32)))) {
    	cf = 0;
    	a796195142 = 36 ;
    	a815886759 = (a309620346 + -4);
    	a42170353 = 34 ;
    	a882589857 = (a309620346 - -4);
    	a1293712589 = 34 ;
    	a1472462791 = 34 ;
    	a570886160 = 34 ;
    	a2139432823 = ((((((a1862658444 * a1862658444) % 14999) % 101) - -146) + 1) + -2);
    	a976945745 = (a882589857 + -8);
    	a2147255888 = ((((((a912673804 * a2139432823) % 14999) - -18279) + -4528) % 61) - -328);
    	a1823597932 = 34 ;
    	a871674684 = (a976945745 - -2);
    	a1678927341 = a882589857;
    	a337942537 = (a882589857 - 5);
    	a1909685633 = 34 ;
    	a177640787 = ((((((((a177640787 * a1610801558) % 14999) / 5) % 29) - 77) * 5) % 29) + -48);
    	a313727472 = ((((((a835146412 * a723108336) % 14999) - 12947) * 1) % 66) + -28);
    	a1189507312 = ((((((a1189507312 * a2147255888) % 14999) - -10319) + 505) % 39) - -228);
    	a1224074430 = ((((((a313727472 * a1862658444) % 14999) % 14945) - -15054) - -1) - 0);
    	a723108336 = ((((((a723108336 * a1862658444) % 14999) + 1717) - 10300) % 45) - -75);
    	a169710014 = (((((((a1610801558 * a912673804) % 14999) % 46) - -257) + -25955) - 3605) - -29570);
    	a1538778197 = (a1649499722 + -9);
    	a2128522778 = 34 ;
    	a835146412 = (((((((a912673804 * a1862658444) % 14999) - 4300) / 5) - -2554) % 71) + 182);
    	a1610801558 = ((((((a1610801558 * a2139432823) % 14999) % 67) + 57) + -1) - 0);
    	a394986443 = (a771824360 + 4);
    	a912673804 = (((((((a1862658444 * a1862658444) % 14999) % 29) + 66) - 1) - -7281) + -7281);
    	a1562022185 = (((((((a1562022185 * a177640787) % 14999) % 95) + 73) + -24) * 9) / 10);
    	a771824360 = (a369624711 - -5);
    	a1862658444 = (((((a1862658444 + 0) % 10) - -256) / 5) - -206);
    	a369624711 = (a455265888 - -4); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1562022185 <=  -113 && (a337942537 == 4 && (a835146412 <=  36 && a815886759 == 1))) && (a976945745 == 1 && (a1909685633 == 32 && ( cf==1  && (input == 75)))))) {
    	cf = 0;
    	a1143554178 = ((((73 / -5) / 5) * 10) / 9);
    	a796195142 = 33 ;
    	a534143625 = ((((((a1610801558 * a1189507312) % 14999) * 2) % 15052) - 14947) * 1);
    	a2052893331 = (a369624711 - -10); 
    	 printf("");//printf("%d\n", 133); fflush(stdout); 
    } if(((((( cf==1  && (input == 111)) && a871674684 == 3) && a1472462791 == 32) && a2147255888 <=  74) && (a1909685633 == 32 && (a976945745 == 1 && a1538778197 == 1)))) {
    	cf = 0;
    	a882589857 = (a815886759 + 10);
    	a1538778197 = a455265888;
    	a42170353 = 34 ;
    	a815886759 = ((a882589857 / a882589857) - -2);
    	a337942537 = ((a1538778197 - a1538778197) - -6);
    	a1610801558 = ((((((((a1610801558 * a1189507312) % 14999) % 67) - -57) * 5) * 5) % 67) + 57);
    	a871674684 = (a1917402140 + 1);
    	a1293712589 = 34 ;
    	a369624711 = (a771824360 - 1);
    	a2139432823 = ((((((((a1562022185 * a1562022185) % 14999) % 101) - -63) * 10) / 9) + -23961) + 24019);
    	a169710014 = ((((((a2147255888 * a2147255888) % 14999) / 5) % 46) - -268) * 1);
    	a723108336 = ((((((((a723108336 * a912673804) % 14999) % 45) - -58) * 9) / 10) * 10) / 9);
    	a912673804 = ((((((a1562022185 * a1562022185) % 14999) - -10889) + -27155) % 29) - -73);
    	a2147255888 = ((((((a2139432823 * a177640787) % 14999) % 61) - -330) + -5898) + 5897);
    	a1224074430 = (((((((a1862658444 * a169710014) % 14999) % 14945) - -15054) + 0) / 5) + 15141);
    	a1909685633 = 34 ;
    	a177640787 = (((((((a1562022185 * a1562022185) % 14999) - 12442) / 5) / 5) % 29) + -51);
    	a570886160 = 34 ;
    	a394986443 = ((a369624711 * a771824360) - 44);
    	a313727472 = ((((((a1224074430 * a835146412) % 14999) * 2) / 5) % 66) + -26);
    	a1472462791 = 34 ;
    	a976945745 = (a1678927341 + -6);
    	a1678927341 = ((a337942537 - a771824360) + 13);
    	a1862658444 = (((((((a1562022185 * a1562022185) % 14999) % 10) + 254) + 3) - -20471) + -20480);
    	a1189507312 = ((((((((a1189507312 * a313727472) % 14999) % 39) + 228) * 1) * 5) % 39) + 200);
    	a2128522778 = 34 ;
    	a1823597932 = 34 ;
    	a796195142 = 36 ;
    	a771824360 = (a882589857 - 1);
    	a835146412 = (((((((a835146412 * a1562022185) % 14999) - 7040) * 1) - -4941) % 71) + 182);
    	a1562022185 = ((((((a1562022185 * a1610801558) % 14999) % 95) - -134) - -18641) - 18640); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm62(int input) {
    if(((a771824360 == 8 && ((input == 113) &&  cf==1 )) && (a42170353 == 32 && (a1538778197 == 1 && ((a770071847 <=  -137 && a570886160 == 32) && a1678927341 == 9))))) {
    	cf = 0;
    	a1917402140 = ((a976945745 + a1678927341) - 8);
    	a1485869055 = 36 ;
    	a1491071731 = 32 ;
    	a455265888 = (a304998879 - 2);
    	a394986443 = (a771824360 - -2);
    	a1649499722 = (a871674684 - -8);
    	a1711061361 = (((((((a1189507312 * a177640787) % 14999) % 59) + 54) / 5) - -18325) + -18326);
    	a770071847 = ((((((a770071847 * a1610801558) % 14999) + -23736) + -2639) * 10) / 9);
    	a1862658444 = ((((((a1862658444 * a2139432823) % 14999) + -14889) - -17575) + 2225) + -19724);
    	a1909685633 = 32 ;
    	a2128522778 = 32 ;
    	a369624711 = (a304998879 - -1);
    	a2147255888 = ((((((((a1610801558 * a177640787) % 14999) % 96) + 84) * 5) - 20912) % 96) - -215);
    	a912673804 = ((((((a847823400 * a1562022185) % 14999) % 14952) - 15047) + -2) - 0);
    	a1140224045 = 32 ;
    	a785058364 = (a1538778197 - -9);
    	a1717386854 = 32 ;
    	a1293712589 = 32 ;
    	a304998879 = ((a882589857 * a1538778197) + -5);
    	a1538778197 = (a771824360 - 7);
    	a807447096 = ((((((a1610801558 * a177640787) % 14999) - 27527) % 25) + 1) + -12); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1661935098 == 32 && (a42170353 == 32 && a337942537 == 4)) && (a1678927341 == 9 && ((((input == 110) &&  cf==1 ) && a1538778197 == 1) && a1917402140 == 2)))) {
    	cf = 0;
    	a455265888 = (a309620346 - 12);
    	a785058364 = ((a394986443 + a369624711) - 5);
    	a912673804 = ((((((a847823400 * a1610801558) % 14999) + -4024) % 14952) - 15047) + -1);
    	a807447096 = ((((((a2139432823 * a1189507312) % 14999) % 25) + -17) - 3) - 0);
    	a1140224045 = 32 ;
    	a1862658444 = ((((((a1862658444 * a177640787) % 14999) - 14858) + -78) + 17840) - 17728);
    	a1293712589 = 32 ;
    	a2128522778 = 32 ;
    	a2147255888 = ((((((((a1562022185 * a2139432823) % 14999) % 96) + 140) - -4697) * 5) % 96) + 153);
    	a1649499722 = (a369624711 - -6);
    	a1491071731 = 32 ;
    	a1917402140 = ((a309620346 * a815886759) - 12);
    	a1717386854 = 32 ;
    	a394986443 = (a815886759 + 9);
    	a770071847 = ((((((a770071847 * a1189507312) % 14999) * 2) - 0) % 14931) + -15067);
    	a1485869055 = 36 ;
    	a369624711 = ((a871674684 - a309620346) + 16);
    	a304998879 = (a871674684 + 1);
    	a1909685633 = 32 ;
    	a1538778197 = ((a871674684 - a1678927341) - -7);
    	a1711061361 = (((((((a1562022185 * a1189507312) % 14999) % 59) + 54) + 1) + 8273) - 8272); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((((input == 57) &&  cf==1 ) && a337942537 == 4) && (((a177640787 <=  -120 && (a394986443 == 10 && a815886759 == 1)) && a1678927341 == 9) && a2139432823 <=  -159))) {
    	cf = 0;
    	a1260631 = ((a871674684 - a815886759) - -4);
    	a1917402140 = (a455265888 + 1);
    	a2139432823 = ((((((a2139432823 * a2147255888) % 14999) - -4146) % 101) - 56) + -2);
    	a1610801558 = (((((((a1610801558 * a807447096) % 14999) % 12) - 23) * 5) % 12) - 23);
    	a976945745 = (a1649499722 - 10);
    	a337942537 = (a871674684 - -2);
    	a394986443 = ((a309620346 * a785058364) - 143);
    	a1562022185 = ((((((a1562022185 * a847823400) % 14999) % 75) - 36) / 5) - 56);
    	a570886160 = 33 ;
    	a2128522778 = 32 ;
    	a815886759 = ((a871674684 * a309620346) - 40);
    	a882589857 = (a871674684 + 7);
    	a1541342791 = (((((34 - -19575) * 10) / 9) - 31085) - -30409);
    	a42170353 = 33 ;
    	a1491071731 = 32 ;
    	a1244737994 = 36 ;
    	a1678927341 = (a871674684 - -7);
    	a771824360 = (a1260631 - -2);
    	a1909685633 = 33 ;
    	a835146412 = (((((a2139432823 * a1711061361) + 6518) + -1815) % 36) - -72);
    	a1661935098 = 33 ;
    	a1862658444 = ((((((a1862658444 * a1711061361) % 14999) * 2) + -3) % 29) - -216);
    	a1823597932 = 32 ;
    	a1189507312 = (((((((a1189507312 * a912673804) % 14999) * 2) % 73) - -113) / 5) + 114);
    	a1472462791 = 32 ;
    	a1763171942 = 33 ;
    	a796195142 = 35 ;
    	a1538778197 = (a1260631 - 4);
    	a723108336 = (((((a1610801558 * a2139432823) + 1395) % 73) + -43) - 2);
    	a369624711 = a1260631;
    	a871550570 = 34 ;
    	a770071847 = (((((((a770071847 * a847823400) % 14999) % 22) + -114) - 1) + 29444) - 29442);
    	a177640787 = ((((((a177640787 * a1711061361) % 14999) % 18) + -99) * 1) + -2);
    	a526854419 = 33 ;
    	a1293712589 = 33 ;
    	a304998879 = (a455265888 - -2);
    	a871674684 = (a455265888 - -1);
    	a847823400 = (((((a847823400 * a1610801558) % 14999) - 14994) + -7) * 1); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a1909685633 == 32 && (a1610801558 <=  -36 && a1538778197 == 1)) && (a2128522778 == 32 && ((a882589857 == 9 && ( cf==1  && (input == 111))) && a304998879 == 4)))) {
    	cf = 0;
    	a1485869055 = 36 ;
    	a912673804 = (((((((a1189507312 * a1862658444) % 14999) * 2) % 14952) - 15047) + 19730) + -19731);
    	a2147255888 = ((((((a177640787 * a847823400) % 14999) % 96) - -171) * 1) * 1);
    	a1491071731 = 32 ;
    	a455265888 = (a815886759 + 1);
    	a807447096 = ((((((a1610801558 * a177640787) % 14999) / 5) + -9671) % 25) - -4);
    	a1538778197 = a976945745;
    	a1649499722 = (a369624711 + 6);
    	a1909685633 = 32 ;
    	a1862658444 = (((((a1862658444 * a770071847) % 14999) + 2211) + -17137) / 5);
    	a2128522778 = 32 ;
    	a1711061361 = (((((((a2139432823 * a847823400) % 14999) * 2) + 1) + 0) % 59) - -54);
    	a1293712589 = 32 ;
    	a785058364 = a394986443;
    	a1140224045 = 32 ;
    	a770071847 = (((((a770071847 * a1562022185) % 14999) - -3245) + 7154) - 34838);
    	a394986443 = ((a309620346 + a771824360) - 12);
    	a1917402140 = ((a337942537 + a976945745) + -3);
    	a1717386854 = 32 ;
    	a369624711 = (a304998879 - -1);
    	a304998879 = (a871674684 - -1); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1763171942 == 32 && ((((input == 56) &&  cf==1 ) && a1189507312 <=  40) && a42170353 == 32)) && ((a1538778197 == 1 && a1293712589 == 32) && a394986443 == 10))) {
    	cf = 0;
    	a771904065 = 35 ;
    	a1649499722 = (a369624711 - -5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm63(int input) {
    if((((a337942537 == 4 && a1189507312 <=  40) && a1140224045 == 32) && ((a1661935098 == 32 && (( cf==1  && (input == 79)) && a1917402140 == 2)) && a1562022185 <=  -113))) {
    	cf = 0;
    	a1661935098 = 33 ;
    	a1472462791 = 33 ;
    	a2139432823 = (((((((a770071847 * a847823400) % 14999) % 101) + -56) - 13425) / 5) - -2563);
    	a1909685633 = 33 ;
    	a1485869055 = 35 ;
    	a1678927341 = (a337942537 + 6);
    	a2128522778 = 33 ;
    	a871674684 = (a1678927341 - 6);
    	a1562022185 = (((((((a912673804 * a177640787) % 14999) - -11002) - -222) + -23309) % 75) + -36);
    	a304998879 = (a785058364 - 5);
    	a882589857 = (a1538778197 + 8);
    	a2052893331 = ((a785058364 - a771824360) - -10);
    	a570886160 = 33 ;
    	a2147255888 = ((((((a847823400 * a177640787) % 14999) * 2) * 1) % 96) + 170);
    	a976945745 = a1917402140;
    	a21974463 = (a1917402140 + 7);
    	a177640787 = ((((((((a177640787 * a536820638) % 14999) - -7001) % 18) + -118) / 5) * 49) / 10);
    	a1763171942 = 33 ;
    	a1491071731 = 33 ;
    	a815886759 = ((a369624711 / a337942537) + 1);
    	a771824360 = (a455265888 - -8);
    	a42170353 = 33 ;
    	a337942537 = (a455265888 + 4);
    	a1862658444 = ((((((a723108336 * a1562022185) - 9678) * 2) * 1) % 29) - -216);
    	a796195142 = 33 ;
    	a847823400 = ((((((((a847823400 * a1711061361) % 14999) / 5) % 108) + 243) * 5) % 108) + 138);
    	a1610801558 = ((((((a1610801558 * a1562022185) % 14999) * 2) % 12) - 22) + -1);
    	a1917402140 = ((a882589857 - a1678927341) - -3);
    	a785058364 = ((a455265888 / a1678927341) + 11);
    	a1140224045 = 33 ;
    	a1189507312 = ((((((((a1189507312 * a770071847) % 14999) % 39) - -227) + 1) * 5) % 39) + 225);
    	a1711061361 = (((((a807447096 * a835146412) - 12979) * 1) % 59) - -82);
    	a455265888 = (a394986443 + -9); 
    	 printf("");//printf("%d\n", 117); fflush(stdout); 
    } 
}
 void calculate_outputm65(int input) {
    if(((a976945745 == 1 && ((input == 113) &&  cf==1 )) && (a369624711 == 5 && (a304998879 == 4 && (a1823597932 == 32 && (a785058364 == 10 && a1711061361 <=  -5)))))) {
    	cf = 0;
    	a806730426 = (a1678927341 + -3);
    	a1472462791 = 33 ;
    	a847823400 = (((((((a847823400 * a1562022185) % 14999) + 10902) % 108) - -242) / 5) + 267);
    	a1763171942 = 33 ;
    	a1293712589 = 33 ;
    	a1717386854 = 33 ;
    	a771824360 = ((a1649499722 - a806730426) - -1);
    	a526854419 = 32 ;
    	a1541342791 = (((((84 * 5) / 5) - 1979) * -2) / 10);
    	a871550570 = 33 ;
    	a807447096 = ((((((a807447096 * a2139432823) % 14999) % 25) + -42) - -14) - -11);
    	a770071847 = ((((((a770071847 * a1610801558) % 14999) + 12911) % 22) + -135) + 11);
    	a177640787 = ((((((a177640787 * a1541342791) % 14999) / 5) / 5) % 18) + -100);
    	a1189507312 = (((((((a1189507312 * a1541342791) % 14999) - -4146) / 5) - 21061) % 73) + 124);
    	a1610801558 = ((((((a1562022185 * a2147255888) % 14999) - 9932) % 14982) + -15017) - 2);
    	a835146412 = (((((a2139432823 * a1541342791) % 14999) + -8260) + -5144) - 72);
    	a1661935098 = 32 ;
    	a1140224045 = 33 ;
    	a1711061361 = ((((((a1711061361 * a2139432823) % 14999) - 7592) % 59) - -55) / 5);
    	a912673804 = ((((((a912673804 * a807447096) % 14999) + -12856) % 14952) + -15047) + -2);
    	a1917402140 = (a1538778197 + 2);
    	a1538778197 = (a337942537 - 3);
    	a871674684 = ((a1678927341 + a337942537) - 9);
    	a1862658444 = ((((((((a1862658444 * a2147255888) % 14999) % 29) - -215) * 5) * 5) % 29) + 188);
    	a1678927341 = (a806730426 + 4);
    	a2147255888 = ((((((a847823400 * a2139432823) % 14999) % 96) + 171) - 1) - 0);
    	a1562022185 = (((((a770071847 * a847823400) % 14999) - 1274) + -2027) * 1);
    	a785058364 = ((a394986443 + a815886759) - 2);
    	a1823597932 = 33 ;
    	a882589857 = ((a304998879 / a976945745) - -6);
    	a394986443 = ((a806730426 + a771824360) - 4);
    	a2029515987 = 34 ;
    	a976945745 = ((a771824360 + a806730426) + -14);
    	a570886160 = 32 ;
    	a337942537 = ((a369624711 - a771824360) - -8);
    	a796195142 = 35 ;
    	a1491071731 = 33 ;
    	a304998879 = ((a455265888 - a1917402140) - -7);
    	a369624711 = ((a806730426 / a806730426) - -4);
    	a42170353 = 33 ;
    	a455265888 = (a806730426 - 5);
    	a1909685633 = 33 ;
    	a2139432823 = ((((((a2139432823 * a177640787) % 14999) + -26193) * 10) / 9) + 3639); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((input == 111) &&  cf==1 ) && a912673804 <=  -96) && a1562022185 <=  -113) && a177640787 <=  -120) && (a570886160 == 32 && (a455265888 == 1 && a42170353 == 32)))) {
    	cf = 0;
    	a1140224045 = 33 ;
    	a1562022185 = (((((a1562022185 * a912673804) % 14999) / 5) - -5799) - 31817);
    	a2029515987 = 34 ;
    	a770071847 = ((((((a770071847 * a2147255888) % 14999) - -2537) - -1554) % 22) + -113);
    	a1711061361 = ((((((a1711061361 * a1189507312) % 14999) - 7469) % 59) + 55) + -1);
    	a1678927341 = (a337942537 + 6);
    	a337942537 = (a369624711 - 1);
    	a912673804 = ((((((a912673804 * a770071847) % 14999) + -15836) * 10) / 9) - 5460);
    	a526854419 = 32 ;
    	a1823597932 = 33 ;
    	a1541342791 = (((((26 - -440) + 12) - 384) * 34) / 10);
    	a304998879 = ((a815886759 + a1678927341) - 7);
    	a806730426 = (a394986443 - 4);
    	a1909685633 = 33 ;
    	a785058364 = (a304998879 - -5);
    	a882589857 = (a455265888 - -9);
    	a807447096 = (((((((a807447096 * a1610801558) % 14999) - -3952) % 25) - 35) + -14039) + 14041);
    	a394986443 = (a369624711 - -6);
    	a1491071731 = 33 ;
    	a1610801558 = ((((((a1189507312 * a2139432823) % 14999) * 2) % 14982) + -15017) - 2);
    	a42170353 = 33 ;
    	a1763171942 = 33 ;
    	a871674684 = (a976945745 + 3);
    	a570886160 = 32 ;
    	a1538778197 = (a806730426 + -5);
    	a976945745 = (a815886759 / a815886759);
    	a796195142 = 35 ;
    	a847823400 = (((((((a847823400 * a2139432823) % 14999) * 2) % 108) - -242) - 6984) - -6985);
    	a1917402140 = (a1649499722 - 11);
    	a1472462791 = 33 ;
    	a1661935098 = 32 ;
    	a1862658444 = (((((((a1862658444 * a177640787) % 14999) % 29) - -215) - 22719) - -45983) + -23264);
    	a1189507312 = ((((((a1189507312 * a1862658444) % 14999) + -2449) % 73) - -114) - -2);
    	a771824360 = ((a369624711 + a1917402140) - -1);
    	a835146412 = (((((a2139432823 * a2139432823) % 14999) + -28821) * 1) - 743);
    	a2147255888 = (((((73 * 5) * 3) / 10) / 5) - -181);
    	a177640787 = ((((((a177640787 * a2139432823) % 14999) % 18) - 115) + -17626) - -17628);
    	a871550570 = 33 ;
    	a455265888 = ((a1649499722 * a815886759) + -27);
    	a1717386854 = 33 ;
    	a1293712589 = 33 ;
    	a2139432823 = (((((a2139432823 * a1541342791) % 14999) + -4684) - 702) / 5);
    	a369624711 = (a815886759 + 3); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((input == 110) &&  cf==1 ) && a1610801558 <=  -36) && a1140224045 == 32) && a976945745 == 1) && (a807447096 <=  -45 && (a912673804 <=  -96 && a882589857 == 9)))) {
    	cf = 0;
    	a1678927341 = (a785058364 - -1);
    	a796195142 = 36 ;
    	a976945745 = ((a882589857 + a882589857) + -15);
    	a807447096 = ((((((a807447096 * a2139432823) % 14999) % 105) + 43) / 5) + 0);
    	a1711061361 = (((((((a1189507312 * a723108336) % 14999) % 58) - -173) * 5) % 58) + 167);
    	a1661935098 = 33 ;
    	a882589857 = a1678927341;
    	a871674684 = (a455265888 - -4);
    	a177640787 = (((((((a1711061361 * a847823400) % 14999) + -14037) % 29) - 50) / 5) - 61);
    	a1763171942 = 34 ;
    	a1472462791 = 33 ;
    	a1140224045 = 33 ;
    	a394986443 = (a1649499722 + -2);
    	a871550570 = 34 ;
    	a2147255888 = (((((((a2139432823 * a912673804) % 14999) % 61) - -319) + 27991) + -12746) + -15260);
    	a1293712589 = 34 ;
    	a1420843252 = 34 ;
    	a770071847 = (((((((a770071847 * a1610801558) % 14999) - -1414) / 5) * 5) % 44) + -61);
    	a835146412 = ((((((a807447096 * a1562022185) % 14999) - 5863) - 6481) + 20944) - 11016);
    	a815886759 = ((a882589857 * a976945745) + -31);
    	a1717386854 = 32 ;
    	a1862658444 = ((((((a1862658444 * a177640787) % 14999) - -11146) - -743) % 10) - -256);
    	a337942537 = (a1678927341 + -7);
    	a847823400 = (((((a1562022185 * a1862658444) % 14999) + -10617) * 1) - 3756);
    	a369624711 = (a976945745 - -2);
    	a1538778197 = (a1917402140 + -1);
    	a570886160 = 33 ;
    	a169710014 = (((61 * 5) - -9972) + 12719);
    	a1823597932 = 34 ;
    	a1110504460 = ((a771824360 * a304998879) - 25);
    	a304998879 = ((a1678927341 - a1678927341) - -5);
    	a526854419 = 34 ;
    	a1610801558 = ((((((a1189507312 * a1562022185) % 14999) * 2) % 67) + 57) - -1);
    	a42170353 = 32 ;
    	a912673804 = ((((a770071847 * a723108336) * 2) - 3401) + -359);
    	a771824360 = a785058364;
    	a2139432823 = ((((((((a2147255888 * a2147255888) % 14999) + 7662) % 101) + -141) * 5) % 101) + 42);
    	a1189507312 = ((((((a1189507312 * a2147255888) % 14999) % 39) - -228) + 16903) - 16902);
    	a455265888 = (a1110504460 + -6);
    	a2128522778 = 32 ;
    	a785058364 = (a1917402140 - -6);
    	a1562022185 = ((((((a1562022185 * a807447096) % 14999) / 5) + -13694) * 10) / 9); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1763171942 == 32 && (((( cf==1  && (input == 75)) && a1293712589 == 32) && a1189507312 <=  40) && a871550570 == 32)) && (a847823400 <=  134 && a912673804 <=  -96))) {
    	cf = 0;
    	a394986443 = (a771824360 - -3);
    	a1917402140 = (a394986443 - 8);
    	a1678927341 = ((a394986443 + a882589857) + -10);
    	a455265888 = (a1917402140 - 1);
    	a723108336 = ((((((a2147255888 * a847823400) % 14999) % 45) - -76) - 1) + 2);
    	a1661935098 = 33 ;
    	a785058364 = a394986443;
    	a1293712589 = 33 ;
    	a1491071731 = 33 ;
    	a1143554178 = (((((((a1189507312 * a2147255888) % 14999) % 70) + 360) - -22983) + -27542) - -4558);
    	a1538778197 = a455265888;
    	a1717386854 = 34 ;
    	a337942537 = (a976945745 - -4);
    	a1817778538 = (a304998879 + 6);
    	a976945745 = (a785058364 - 8);
    	a770071847 = (((((((a770071847 * a177640787) % 14999) + -3552) % 22) - 113) + -25790) - -25789);
    	a42170353 = 33 ;
    	a1562022185 = (((((((a1562022185 * a835146412) % 14999) / 5) + -17288) / 5) % 75) + 11);
    	a1189507312 = ((((((a1610801558 * a1562022185) % 14999) / 5) / 5) % 73) - -114);
    	a871550570 = 33 ;
    	a807447096 = (((((((a807447096 * a847823400) % 14999) + -6650) % 25) - 19) - 21747) - -21748);
    	a1763171942 = 33 ;
    	a1862658444 = ((((((a1862658444 * a1711061361) % 14999) - 2209) % 29) + 216) + -1);
    	a1472462791 = 33 ;
    	a796195142 = 33 ;
    	a304998879 = (a1678927341 - 5);
    	a369624711 = (a394986443 + -5);
    	a1711061361 = ((((((a2139432823 * a912673804) % 14999) + -21045) % 59) + 62) + -4);
    	a2052893331 = ((a771824360 / a1649499722) + 15);
    	a1610801558 = (((((((a2147255888 * a847823400) % 14999) / 5) % 67) + 57) - 9465) + 9464);
    	a1140224045 = 33 ;
    	a871674684 = (a394986443 - 7);
    	a177640787 = (((((((a177640787 * a1143554178) % 14999) % 18) - 100) * 5) % 18) + -95);
    	a771824360 = (a1917402140 + 6);
    	a882589857 = (a369624711 + 4);
    	a1909685633 = 33 ;
    	a2139432823 = ((((((a2139432823 * a835146412) % 14999) % 101) + -57) / 5) - 97);
    	a912673804 = ((((((a912673804 * a847823400) % 14999) + 9465) / 5) % 65) + -30);
    	a1823597932 = 33 ;
    	a570886160 = 33 ;
    	a526854419 = 33 ;
    	a847823400 = (((((((a847823400 * a1143554178) % 14999) % 24) - -375) * 5) % 24) - -370);
    	a2147255888 = ((((((a2147255888 * a807447096) % 14999) * 2) / 5) % 96) - -171); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm66(int input) {
    if(((a1678927341 == 9 && (a455265888 == 1 && (a177640787 <=  -120 && (( cf==1  && (input == 81)) && a785058364 == 10)))) && (a1711061361 <=  -5 && a835146412 <=  36))) {
    	cf = 0;
    	a2052893331 = (a976945745 + 14);
    	a1143554178 = ((((((a1711061361 * a1862658444) % 14999) - -6445) - 21408) - -18706) + -18716);
    	a796195142 = 33 ;
    	a534143625 = (((((a912673804 * a1189507312) % 14999) + -14966) - 6) + -13); 
    	 printf("");//printf("%d\n", 130); fflush(stdout); 
    } 
}
 void calculate_outputm4(int input) {
    if(((a1661935098 == 32 && a871550570 == 32) && (a1711061361 <=  -5 && (a835146412 <=  36 && (a847823400 <=  134 && (( cf==1  && a1649499722 == 7) && a1717386854 == 32)))))) {
    	if((a42170353 == 32 && ((a871550570 == 32 && (a807447096 <=  -45 && (a1538778197 == 1 && ((a1621255820 == 12 &&  cf==1 ) && a1472462791 == 32)))) && a177640787 <=  -120))) {
    		calculate_outputm50(input);
    	} 
    	if((((a177640787 <=  -120 && a304998879 == 4) && a1538778197 == 1) && (a2128522778 == 32 && (a1293712589 == 32 && (a1909685633 == 32 && ( cf==1  && a1621255820 == 14)))))) {
    		calculate_outputm51(input);
    	} 
    } 
    if(((a835146412 <=  36 && ( cf==1  && a1649499722 == 8)) && ((((a1711061361 <=  -5 && a304998879 == 4) && a42170353 == 32) && a882589857 == 9) && a807447096 <=  -45))) {
    	if(((a526854419 == 32 && (a1763171942 == 32 && (a2139432823 <=  -159 && (a1610801558 <=  -36 && (a1717386854 == 32 && a1862658444 <=  185))))) && (a309620346 == 14 &&  cf==1 ))) {
    		calculate_outputm53(input);
    	} 
    } 
    if(((a785058364 == 10 && ((a1649499722 == 11 &&  cf==1 ) && a912673804 <=  -96)) && (a1140224045 == 32 && (a2139432823 <=  -159 && (a871674684 == 3 && a815886759 == 1))))) {
    	if(((a847823400 <=  134 && (a723108336 <=  -118 && (a770071847 <=  -137 && a1862658444 <=  185))) && ((a871550570 == 32 && ( cf==1  && a1485869055 == 32)) && a1678927341 == 9))) {
    		calculate_outputm57(input);
    	} 
    	if((((a1491071731 == 32 && a1610801558 <=  -36) && a1293712589 == 32) && ((((a1485869055 == 33 &&  cf==1 ) && a1538778197 == 1) && a871674684 == 3) && a807447096 <=  -45))) {
    		calculate_outputm58(input);
    	} 
    	if((((a1189507312 <=  40 && (a1823597932 == 32 && (a1485869055 == 36 &&  cf==1 ))) && a1678927341 == 9) && ((a1610801558 <=  -36 && a1140224045 == 32) && a847823400 <=  134))) {
    		calculate_outputm60(input);
    	} 
    } 
    if(((a1823597932 == 32 && (a871674684 == 3 && ( cf==1  && a1649499722 == 12))) && (a976945745 == 1 && ((a1562022185 <=  -113 && a1678927341 == 9) && a177640787 <=  -120)))) {
    	if((((a309620346 == 7 &&  cf==1 ) && a835146412 <=  36) && ((a2147255888 <=  74 && ((a42170353 == 32 && a1610801558 <=  -36) && a723108336 <=  -118)) && a1189507312 <=  40))) {
    		calculate_outputm61(input);
    	} 
    	if(((a1823597932 == 32 && (a1491071731 == 32 && a847823400 <=  134)) && (a177640787 <=  -120 && ((a1862658444 <=  185 && (a309620346 == 14 &&  cf==1 )) && a1661935098 == 32)))) {
    		calculate_outputm62(input);
    	} 
    } 
    if(((a1711061361 <=  -5 && (( cf==1  && a1649499722 == 13) && a2128522778 == 32)) && (a1140224045 == 32 && (a871674684 == 3 && (a455265888 == 1 && a847823400 <=  134))))) {
    	if((((a1610801558 <=  -36 && (((-180 < a536820638) && (-54 >= a536820638)) &&  cf==1 )) && a1909685633 == 32) && (a771824360 == 8 && (a871674684 == 3 && (a304998879 == 4 && a1678927341 == 9))))) {
    		calculate_outputm63(input);
    	} 
    } 
    if((((((a1649499722 == 14 &&  cf==1 ) && a1862658444 <=  185) && a526854419 == 32) && a2139432823 <=  -159) && ((a570886160 == 32 && a394986443 == 10) && a871674684 == 3))) {
    	if((((a785058364 == 10 && a1823597932 == 32) && a1538778197 == 1) && (((( cf==1  && a419313210 == 32) && a1472462791 == 32) && a770071847 <=  -137) && a1717386854 == 32))) {
    		calculate_outputm65(input);
    	} 
    	if(((a847823400 <=  134 && a455265888 == 1) && ((a815886759 == 1 && (a1862658444 <=  185 && ((a419313210 == 33 &&  cf==1 ) && a1293712589 == 32))) && a304998879 == 4))) {
    		calculate_outputm66(input);
    	} 
    } 
}
 void calculate_outputm67(int input) {
    if((((a770071847 <=  -137 && a1763171942 == 32) && a1610801558 <=  -36) && (a1678927341 == 9 && ((((input == 79) &&  cf==1 ) && a976945745 == 1) && a1717386854 == 32)))) {
    	cf = 0;
    	a807447096 = ((((((a912673804 * a1610801558) % 14999) + 10145) - -2248) % 25) - 40);
    	a912673804 = ((((((a912673804 * a2139432823) % 14999) / 5) + -1817) % 65) + -30);
    	a2052893331 = (a1678927341 - -1);
    	a177640787 = ((((((a177640787 * a1610801558) % 14999) / 5) + -29702) % 18) + -93);
    	a835146412 = ((((((a835146412 * a1862658444) % 14999) / 5) % 36) + 73) + 2);
    	a2147255888 = ((((((a2147255888 * a534143625) % 14999) - 7293) / 5) % 96) + 171);
    	a796195142 = 33 ;
    	a883263484 = 34 ;
    	a455265888 = ((a882589857 * a785058364) + -88);
    	a394986443 = (a1538778197 + 10);
    	a1189507312 = ((((((((a1189507312 * a177640787) % 14999) % 73) - -114) + -1) * 5) % 73) - -57);
    	a785058364 = (a1538778197 + 10);
    	a770071847 = ((((((a770071847 * a807447096) % 14999) % 22) - 114) + -16140) + 16139);
    	a42170353 = 33 ;
    	a1711061361 = ((((((((a1711061361 * a1562022185) % 14999) / 5) % 59) - 2) * 5) % 59) - -55);
    	a1562022185 = (((((((a1562022185 * a177640787) % 14999) % 75) + -100) - 16881) * 1) + 16906);
    	a871550570 = 33 ;
    	a369624711 = (a771824360 + -3);
    	a1610801558 = (((((a807447096 * a177640787) % 12) + -23) * 1) - 1);
    	a337942537 = ((a815886759 - a871674684) + 7);
    	a1538778197 = (a976945745 + 1);
    	a723108336 = ((((((a723108336 * a807447096) % 14999) * 2) % 73) + -43) - 2);
    	a597484636 = 33 ;
    	a2128522778 = 33 ;
    	a882589857 = (a976945745 + 9);
    	a1678927341 = ((a976945745 / a815886759) + 10); 
    	 printf("");//printf("%d\n", 119); fflush(stdout); 
    } if(((( cf==1  && (input == 95)) && a1538778197 == 1) && (a1189507312 <=  40 && (a2147255888 <=  74 && (a723108336 <=  -118 && (a394986443 == 10 && a785058364 == 10)))))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a2029515987 = 34 ;
    	a1541342791 = ((((a534143625 * a534143625) * -1) * 1) / 5);
    	a435971279 = (a785058364 + 3); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm70(int input) {
    if(((a882589857 == 9 && (a337942537 == 4 && ( cf==1  && (input == 75)))) && (((a1823597932 == 32 && a807447096 <=  -45) && a1189507312 <=  40) && a785058364 == 10))) {
    	cf = 0;
    	a847823400 = ((((((a847823400 * a1562022185) % 14999) / 5) - 24521) % 108) + 338);
    	a1538778197 = (a304998879 + -2);
    	a871674684 = a337942537;
    	a835146412 = (((((((a835146412 * a2139432823) % 14999) - -1313) * 1) * 1) % 36) - -72);
    	a42170353 = 33 ;
    	a807447096 = (((((((a807447096 * a847823400) % 14999) + -8899) + -5387) * 1) % 25) - 7);
    	a723108336 = (((((((a723108336 * a2147255888) % 14999) + 4476) + -11341) / 5) % 73) - -17);
    	a1351640013 = 36 ;
    	a912673804 = ((((((a912673804 * a770071847) % 14999) % 65) - 93) - -18285) - 18222);
    	a1562022185 = ((((((a847823400 * a835146412) % 14999) - -4989) / 5) % 75) + -78);
    	a337942537 = (a976945745 - -4);
    	a570886160 = 33 ;
    	a1189507312 = ((((((a2139432823 * a847823400) % 14999) % 73) + 113) * 1) + 2);
    	a369624711 = ((a815886759 - a455265888) + 6);
    	a1409922970 = ((a785058364 - a785058364) + 8);
    	a394986443 = ((a369624711 / a882589857) - -11);
    	a2052893331 = (a1409922970 + 8);
    	a796195142 = 33 ;
    	a1823597932 = 33 ;
    	a770071847 = (((((((a2139432823 * a1189507312) % 22) - 114) - 1) * 5) % 22) - 112);
    	a304998879 = (a976945745 - -4);
    	a1763171942 = 33 ;
    	a1711061361 = (((((((a1711061361 * a177640787) % 14999) - -8936) % 59) + 49) - 9386) + 9391);
    	a882589857 = (a563057875 + 1);
    	a976945745 = ((a785058364 + a785058364) - 18);
    	a785058364 = 11; 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm71(int input) {
    if((((a1711061361 <=  -5 && (a1610801558 <=  -36 && a815886759 == 1)) && a526854419 == 32) && ((a177640787 <=  -120 && ((input == 93) &&  cf==1 )) && a455265888 == 1))) {
    	cf = 0;
    	a835146412 = ((((((a1610801558 * a1610801558) % 14999) % 36) - -51) / 5) - -62);
    	a976945745 = (a815886759 - -1);
    	a796195142 = 33 ;
    	a1562022185 = (((((((a1562022185 * a770071847) % 14999) - -9475) % 95) + 62) - 18261) + 18258);
    	a912673804 = ((((((a912673804 * a835146412) % 14999) % 65) + -30) + -1) + 0);
    	a1232289479 = (a785058364 - 3);
    	a1209080117 = (a1232289479 + 1);
    	a1610801558 = (((((a835146412 * a835146412) - 25255) % 12) + -20) - 2);
    	a871550570 = 33 ;
    	a723108336 = ((((((a723108336 * a847823400) % 14999) % 73) + -42) + -1) + 1);
    	a1189507312 = ((((((a835146412 * a835146412) / 5) + -14802) * 2) % 73) + 187);
    	a2052893331 = ((a369624711 + a771824360) - -4);
    	a526854419 = 33 ;
    	a2147255888 = (((((((a2147255888 * a847823400) % 14999) % 96) - -170) + 2) + 28896) - 28897);
    	a304998879 = ((a337942537 * a337942537) + -11);
    	a771824360 = ((a455265888 / a455265888) + 8);
    	a847823400 = (((((((a177640787 * a1189507312) % 14999) % 24) - -375) + 0) / 5) + 317);
    	a369624711 = (a455265888 + 5);
    	a394986443 = ((a563057875 * a563057875) - 158);
    	a882589857 = ((a1538778197 + a871674684) + 6);
    	a871674684 = (a304998879 - 1);
    	a570886160 = 33 ;
    	a785058364 = (a455265888 + 10);
    	a770071847 = (((((((a770071847 * a1711061361) % 14999) + -23797) * 1) * 1) % 22) - 97);
    	a177640787 = (((((a835146412 * a835146412) % 18) + -111) / 5) - 82);
    	a1711061361 = ((((((a1711061361 * a807447096) % 14999) + 12890) - 22409) % 59) + 54);
    	a1538778197 = (a337942537 - 2);
    	a42170353 = 33 ;
    	a815886759 = (a455265888 + 1);
    	a337942537 = (a455265888 + 4);
    	a1763171942 = 33 ;
    	a455265888 = ((a1678927341 * a1678927341) + -97); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm5(int input) {
    if(((a177640787 <=  -120 && ((a1218693435 == 33 &&  cf==1 ) && a1763171942 == 32)) && (a455265888 == 1 && ((a770071847 <=  -137 && a871550570 == 32) && a807447096 <=  -45)))) {
    	if(((a770071847 <=  -137 && (a2128522778 == 32 && (a369624711 == 5 && a912673804 <=  -96))) && ((( cf==1  && ((104 < a534143625) && (156 >= a534143625))) && a2147255888 <=  74) && a455265888 == 1))) {
    		calculate_outputm67(input);
    	} 
    } 
    if(((a1538778197 == 1 && (a42170353 == 32 && a304998879 == 4)) && (((( cf==1  && a1218693435 == 35) && a871674684 == 3) && a912673804 <=  -96) && a570886160 == 32))) {
    	if(((a912673804 <=  -96 && (a369624711 == 5 && a882589857 == 9)) && (a394986443 == 10 && (a723108336 <=  -118 && ((a563057875 == 9 &&  cf==1 ) && a1763171942 == 32))))) {
    		calculate_outputm70(input);
    	} 
    	if(((a2147255888 <=  74 && (a723108336 <=  -118 && (a871550570 == 32 && (a882589857 == 9 && a394986443 == 10)))) && (a1763171942 == 32 && (a563057875 == 13 &&  cf==1 )))) {
    		calculate_outputm71(input);
    	} 
    } 
}
 void calculate_outputm74(int input) {
    if((((a1909685633 == 33 && (( cf==1  && (input == 111)) && a42170353 == 33)) && a882589857 == 10) && ((a304998879 == 5 && a570886160 == 33) && a1293712589 == 33))) {
    	cf = 0;
    	a177640787 = ((((((a2139432823 * a847823400) % 14999) / 5) + -4858) * 10) / 9);
    	a526854419 = 34 ;
    	a1491071731 = 32 ;
    	a1189507312 = ((((a1189507312 * a770071847) * 1) * 1) / 5);
    	a1661935098 = 32 ;
    	a785058364 = ((a394986443 / a2052893331) - -9);
    	a1862658444 = (((((a177640787 * a177640787) % 14999) + -28940) / 5) + -16261);
    	a770071847 = (((((((a177640787 * a1189507312) % 14999) % 44) - 45) * 5) % 44) + -44);
    	a815886759 = (a785058364 - 9);
    	a1610801558 = (((((((a847823400 * a177640787) % 14999) * 2) / 5) * 5) % 14982) - 15017);
    	a871550570 = 34 ;
    	a402335329 = 32 ;
    	a882589857 = ((a785058364 + a2052893331) + -11);
    	a455265888 = (a369624711 + -5);
    	a2139432823 = ((((((a1862658444 * a1562022185) % 14999) % 101) + 145) + -4431) + 4431);
    	a394986443 = (a369624711 - -6);
    	a1711061361 = ((((a1711061361 * a807447096) + -10753) * 1) * 1);
    	a304998879 = (a455265888 - -5);
    	a771824360 = (a815886759 - -9);
    	a42170353 = 32 ;
    	a835146412 = (((((((a835146412 * a2147255888) % 71) - -136) * 5) * 5) % 71) + 123);
    	a912673804 = (((((a912673804 * a2147255888) - 2569) % 14952) + -15047) - 1);
    	a1909685633 = 34 ;
    	a1823597932 = 34 ;
    	a1917402140 = (a369624711 - 2);
    	a1538778197 = a976945745;
    	a1472462791 = 34 ;
    	a871674684 = ((a369624711 / a369624711) - -2);
    	a337942537 = (a1678927341 - 6);
    	a1611619350 = 32 ;
    	a807447096 = (((((((a177640787 * a1610801558) % 14999) - -3085) + 1462) * 1) % 105) - -79);
    	a2128522778 = 32 ;
    	a1678927341 = (a871674684 - -8);
    	a723108336 = ((((((a723108336 * a1562022185) + 14563) / 5) / 5) % 45) + 66);
    	a570886160 = 32 ;
    	a1562022185 = (((((a1562022185 * a177640787) % 14999) - -8900) / 5) - 24375);
    	a1293712589 = 32 ;
    	a796195142 = 32 ;
    	a2147255888 = (((((a177640787 * a177640787) % 14999) - 19457) * 1) + -3477);
    	a369624711 = 7; 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a394986443 == 11 && ((36 < a835146412) && (110 >= a835146412))) && ((((a1140224045 == 33 && ((input == 75) &&  cf==1 )) && ((-120 < a177640787) && (-82 >= a177640787))) && a455265888 == 2) && a815886759 == 2))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a1260631 = a882589857;
    	a1244737994 = 36 ;
    	a1541342791 = (((((a770071847 * a723108336) / 5) + 10972) * 10) / 9); 
    	 printf("");//printf("%d\n", 128); fflush(stdout); 
    } if(((a1661935098 == 33 && ((a771824360 == 9 && a1472462791 == 33) && ((-5 < a1711061361) && (114 >= a1711061361)))) && ((a526854419 == 33 && ( cf==1  && (input == 110))) && a304998879 == 5))) {
    	cf = 0;
    	a871550570 = 34 ;
    	a337942537 = (a369624711 + -2);
    	a785058364 = ((a337942537 / a337942537) + 9);
    	a1823597932 = 34 ;
    	a1562022185 = ((((a1562022185 * a1711061361) + 5777) - 13318) / 5);
    	a871674684 = ((a337942537 - a337942537) - -3);
    	a1491071731 = 32 ;
    	a42170353 = 32 ;
    	a1917402140 = a337942537;
    	a394986443 = (a882589857 + 2);
    	a770071847 = (((((((a770071847 * a2147255888) % 14999) + -3018) % 44) + -41) - 24760) + 24796);
    	a835146412 = (((((a835146412 * a177640787) / 5) % 71) - -251) + -63);
    	a2128522778 = 32 ;
    	a570886160 = 32 ;
    	a1538778197 = (a882589857 / a2052893331);
    	a526854419 = 34 ;
    	a2147255888 = ((((((a1862658444 * a1862658444) % 14999) - 18302) * 10) / 9) - 8593);
    	a796195142 = 32 ;
    	a402335329 = 32 ;
    	a1610801558 = (((((a1862658444 * a1862658444) % 14999) - 29012) - 874) + -99);
    	a304998879 = (a976945745 - -5);
    	a1611619350 = 32 ;
    	a1472462791 = 34 ;
    	a1678927341 = (a337942537 - -7);
    	a771824360 = ((a785058364 + a455265888) + -2);
    	a1711061361 = ((((((a2139432823 * a1862658444) % 14999) % 14997) + -15001) / 5) - 3252);
    	a177640787 = ((((a723108336 * a1189507312) + 15067) - 22237) * 1);
    	a1909685633 = 34 ;
    	a815886759 = (a2052893331 + -9);
    	a1661935098 = 32 ;
    	a455265888 = (a882589857 + -9);
    	a912673804 = ((((a912673804 * a807447096) * 5) * 1) + -21636);
    	a807447096 = ((((((a847823400 * a1862658444) % 14999) + 12537) % 105) + 113) - -1);
    	a1189507312 = (((((a1189507312 * a1610801558) % 14999) - 5921) * 1) + -2903);
    	a369624711 = (a337942537 + 3);
    	a723108336 = ((((((a723108336 * a2139432823) * 1) / 5) * 5) % 45) + 76);
    	a882589857 = (a976945745 + 8);
    	a2139432823 = ((((((a2139432823 * a1862658444) % 14999) - -7614) / 5) % 101) - -146);
    	a1293712589 = 32 ;
    	a1862658444 = (((((a1862658444 * a847823400) % 14999) - 14861) + 26189) + -26280); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((((-159 < a2139432823) && (44 >= a2139432823)) && ( cf==1  && (input == 113))) && a815886759 == 2) && (a526854419 == 33 && ((a871550570 == 33 && a337942537 == 5) && ((-137 < a770071847) && (-92 >= a770071847)))))) {
    	cf = 0;
    	a526854419 = 34 ;
    	a455265888 = (a369624711 + -5);
    	a1293712589 = 32 ;
    	a871674684 = (a455265888 + 2);
    	a1823597932 = 34 ;
    	a2128522778 = 32 ;
    	a1611619350 = 32 ;
    	a815886759 = (a1678927341 - 9);
    	a1538778197 = (a871674684 - 2);
    	a402335329 = 32 ;
    	a835146412 = (((((a835146412 * a1189507312) * 1) + -2181) % 71) - -181);
    	a796195142 = 32 ;
    	a337942537 = (a1678927341 - 6);
    	a771824360 = (a304998879 - -5);
    	a1610801558 = ((((((a807447096 * a807447096) - -9564) * -1) / 10) * 10) / 9);
    	a1661935098 = 32 ;
    	a1491071731 = 32 ;
    	a1917402140 = (a2052893331 - 6);
    	a1472462791 = 34 ;
    	a912673804 = (((((a912673804 * a177640787) * 2) % 14952) - 15047) * 1);
    	a1909685633 = 34 ;
    	a1562022185 = ((((a1562022185 * a1711061361) - 12256) - -21325) - 21691);
    	a1678927341 = ((a337942537 / a394986443) + 11);
    	a1189507312 = (((((a177640787 * a2147255888) % 14999) - 12757) - -29062) * -1);
    	a42170353 = 32 ;
    	a2147255888 = ((((a807447096 * a807447096) - 12132) * 2) - 2859);
    	a369624711 = ((a455265888 + a976945745) + 5);
    	a394986443 = (a976945745 - -11);
    	a1711061361 = ((((((a1610801558 * a2139432823) % 14999) % 14997) - 15001) + -2) + -1);
    	a723108336 = ((((((a723108336 * a807447096) % 45) - -76) - 5333) + 7350) - 2017);
    	a871550570 = 34 ;
    	a770071847 = ((((((a770071847 * a1862658444) % 14999) % 44) + -47) - 1594) + 1593);
    	a177640787 = (((((a177640787 * a2139432823) - -7146) / 5) + 5305) - 18207);
    	a1862658444 = (((((a807447096 * a1610801558) % 14999) - 14972) + -8) - 3);
    	a882589857 = ((a304998879 / a785058364) + 9);
    	a304998879 = (a815886759 - -5);
    	a785058364 = ((a815886759 / a871674684) - -10);
    	a570886160 = 32 ;
    	a2139432823 = (((((((a2139432823 * a847823400) % 14999) + 5773) * 1) * 1) % 101) - -145);
    	a807447096 = ((((((a807447096 * a1610801558) % 14999) % 105) - -113) + -1) - -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((185 < a1862658444) && (245 >= a1862658444)) && (((-96 < a912673804) && (35 >= a912673804)) && (a1678927341 == 10 && a1823597932 == 33))) && ((((-45 < a807447096) && (7 >= a807447096)) && ((input == 85) &&  cf==1 )) && a369624711 == 6))) {
    	cf = 0;
    	a706197976 = 33 ;
    	a2052893331 = ((a394986443 - a771824360) - -11);
    	a1260631 = (a785058364 + 2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((a304998879 == 5 && (a42170353 == 33 && a1472462791 == 33)) && ((74 < a2147255888) && (267 >= a2147255888))) && ((((input == 61) &&  cf==1 ) && a1491071731 == 33) && ((-113 < a1562022185) && (38 >= a1562022185))))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a1244737994 = 35 ;
    	a444227203 = 36 ;
    	a1541342791 = ((((a723108336 * a1711061361) - -20338) - -4965) + 722); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm75(int input) {
    if(((((-120 < a177640787) && (-82 >= a177640787)) && (a369624711 == 6 && a1823597932 == 33)) && (a1917402140 == 3 && ((( cf==1  && (input == 110)) && ((-113 < a1562022185) && (38 >= a1562022185))) && ((-137 < a770071847) && (-92 >= a770071847)))))) {
    	cf = 0;
    	a42170353 = 34 ;
    	a2139432823 = ((((a2139432823 % 101) + -57) + -1182) - -1182);
    	a847823400 = ((((((a847823400 * a835146412) % 14999) % 24) + 359) + -10223) - -10220);
    	a796195142 = 36 ;
    	a455265888 = ((a304998879 - a304998879) - -3);
    	a1909685633 = 34 ;
    	a2128522778 = 33 ;
    	a1917402140 = (a455265888 + 1);
    	a2147255888 = (((((((a2147255888 * a770071847) % 14999) + -1024) % 61) - -378) + 21777) + -21780);
    	a570886160 = 33 ;
    	a1717386854 = 34 ;
    	a785058364 = ((a1917402140 * a12903048) + -28);
    	a871674684 = ((a2052893331 + a771824360) + -15);
    	a1661935098 = 34 ;
    	a1420843252 = 34 ;
    	a369624711 = ((a304998879 / a304998879) + 6);
    	a1711061361 = (((((a1711061361 * a177640787) + -11083) % 59) - -54) + 0);
    	a394986443 = (a871674684 + 7);
    	a1562022185 = (((((a1562022185 * a177640787) / 5) % 95) - -133) + 2);
    	a1140224045 = 34 ;
    	a1862658444 = ((((((a1862658444 * a723108336) + -34785) % 10) - -263) + -27426) - -27424);
    	a835146412 = ((((((((a2147255888 * a177640787) % 14999) % 36) - -72) + 0) * 5) % 36) + 52);
    	a1491071731 = 34 ;
    	a770071847 = ((((((a847823400 * a2147255888) % 14999) - 14216) % 22) + -113) - 2);
    	a1189507312 = ((((((((a1189507312 * a807447096) % 14999) % 73) - -71) * 9) / 10) + -22919) - -22900);
    	a169710014 = (((63 + -638) - 22620) / 5);
    	a1610801558 = (((((a1610801558 * a912673804) + -7877) - 5476) % 67) + 111);
    	a1678927341 = (a976945745 + 7);
    	a871550570 = 34 ;
    	a912673804 = ((((((a912673804 * a1862658444) * 1) - 1159) + 3835) % 65) - 29);
    	a1405419384 = (a882589857 - -4);
    	a882589857 = (a337942537 + 5);
    	a1472462791 = 34 ;
    	a1538778197 = (a785058364 - 10);
    	a1763171942 = 34 ;
    	a1823597932 = 34 ;
    	a526854419 = 34 ;
    	a177640787 = ((((((a807447096 * a807447096) % 14999) / 5) % 18) - 117) - -16);
    	a304998879 = (a771824360 + -5); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((((-36 < a1610801558) && (-11 >= a1610801558)) && (a455265888 == 2 && (((-159 < a2139432823) && (44 >= a2139432823)) && ((input == 111) &&  cf==1 )))) && (a369624711 == 6 && (a882589857 == 10 && ((185 < a1862658444) && (245 >= a1862658444)))))) {
    	cf = 0;
    	a2128522778 = 34 ;
    	a1562022185 = ((((((a2139432823 * a177640787) * 1) % 95) - -133) + -8189) + 8189);
    	a1610801558 = (((((a835146412 * a1562022185) % 67) + 22) - 29) + 14);
    	a1189507312 = ((((((a1610801558 * a1562022185) % 39) - -227) - -17848) + 9395) - 27241);
    	a835146412 = (((((a770071847 * a177640787) % 71) + 181) / 5) + 174);
    	a304998879 = ((a2052893331 * a1917402140) + -24);
    	a1862658444 = ((((((a1862658444 * a1189507312) % 14999) % 10) - -253) - 29543) - -29545);
    	a2147255888 = (((((((a2147255888 * a847823400) % 14999) % 61) - -283) - -18377) - -10073) + -28402);
    	a2074917498 = (a1678927341 - 3);
    	a369624711 = (a976945745 - -4);
    	a491168833 = (a455265888 + 9);
    	a1661935098 = 34 ;
    	a785058364 = ((a369624711 - a1538778197) + 7);
    	a1763171942 = 34 ;
    	a455265888 = (a2052893331 - 7);
    	a912673804 = ((((((a912673804 * a847823400) % 14999) % 29) + 66) + -29136) + 29134);
    	a1538778197 = ((a337942537 + a871674684) - 7);
    	a1909685633 = 34 ;
    	a1711061361 = (((((a1711061361 * a1562022185) + 434) % 58) - -172) + 1);
    	a807447096 = ((((((a1562022185 * a1562022185) % 14999) + -28558) % 105) + 210) / 5);
    	a1823597932 = 34 ;
    	a1472462791 = 34 ;
    	a394986443 = ((a455265888 - a882589857) + 19);
    	a871674684 = ((a337942537 + a337942537) - 7);
    	a1917402140 = (a337942537 - 2);
    	a1717386854 = 34 ;
    	a570886160 = 34 ;
    	a882589857 = (a2052893331 + 1);
    	a815886759 = (a337942537 - 3);
    	a526854419 = 34 ;
    	a15249890 = (((11 / 5) / 5) - -25593);
    	a1678927341 = (a771824360 - -1);
    	a796195142 = 34 ;
    	a770071847 = ((((((a770071847 * a177640787) % 44) - 71) - 8) + -9120) + 9108); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a2128522778 == 33 && (((input == 113) &&  cf==1 ) && ((134 < a847823400) && (351 >= a847823400)))) && (((-5 < a1711061361) && (114 >= a1711061361)) && ((a1140224045 == 33 && a1472462791 == 33) && ((-159 < a2139432823) && (44 >= a2139432823)))))) {
    	cf = 0;
    	a1405419384 = ((a1917402140 + a304998879) + 6);
    	a1610801558 = (((((a1610801558 * a770071847) - -766) % 67) + 39) / 5);
    	a847823400 = (((((((a847823400 * a807447096) % 14999) - 11924) % 24) + 375) - 4320) + 4320);
    	a1823597932 = 34 ;
    	a1562022185 = ((((((a1562022185 * a807447096) % 95) + 133) * 5) % 95) - -79);
    	a304998879 = (a337942537 + -1);
    	a1189507312 = ((((((a1189507312 * a1610801558) % 73) + 115) * 5) % 73) - -79);
    	a1140224045 = 34 ;
    	a394986443 = (a2052893331 - -2);
    	a871674684 = (a771824360 + -5);
    	a1420843252 = 34 ;
    	a796195142 = 36 ;
    	a169710014 = ((((a2147255888 * a912673804) - 2027) / 5) - 10190);
    	a1661935098 = 34 ;
    	a369624711 = ((a1678927341 * a337942537) + -53);
    	a1717386854 = 34 ;
    	a1491071731 = 34 ;
    	a770071847 = ((((((a723108336 * a847823400) % 14999) - -5526) / 5) % 22) + -132);
    	a1472462791 = 34 ;
    	a455265888 = (a1538778197 - -1);
    	a1538778197 = ((a337942537 + a871674684) + -9);
    	a912673804 = (((((((a912673804 * a835146412) - -6836) % 65) - 30) * 5) % 65) + -29);
    	a882589857 = (a871674684 - -6);
    	a1763171942 = 34 ;
    	a42170353 = 34 ;
    	a526854419 = 34 ;
    	a1678927341 = a771824360;
    	a871550570 = 34 ;
    	a2128522778 = 33 ;
    	a570886160 = 33 ;
    	a1917402140 = ((a976945745 + a455265888) + -2);
    	a785058364 = ((a882589857 - a394986443) - -13);
    	a1862658444 = ((((((a1862658444 * a1711061361) % 10) + 256) - -28055) / 5) - 5402);
    	a1711061361 = (((((a1711061361 * a1562022185) % 59) + 55) + -1) + 0);
    	a2147255888 = (((((((a2147255888 * a177640787) % 14999) % 61) - -330) - -1) + -7483) - -7480);
    	a1909685633 = 34 ;
    	a177640787 = (((((((a847823400 * a1610801558) % 14999) - -10858) + -1964) / 5) % 18) - 100);
    	a835146412 = (((((a835146412 * a2139432823) - 4886) * 1) % 36) + 82);
    	a2139432823 = ((((((a2139432823 * a847823400) % 14999) % 101) - 56) / 5) + -37); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1763171942 == 33 && ((a1717386854 == 33 && ( cf==1  && (input == 57))) && ((-120 < a177640787) && (-82 >= a177640787)))) && ((((185 < a1862658444) && (245 >= a1862658444)) && a1472462791 == 33) && ((-159 < a2139432823) && (44 >= a2139432823))))) {
    	cf = 0;
    	a2128522778 = 33 ;
    	a1917402140 = (a1538778197 + 2);
    	a1491071731 = 34 ;
    	a2147255888 = (((((a2147255888 * a912673804) % 61) - -330) + 1330) / 5);
    	a455265888 = (a337942537 + -3);
    	a1661935098 = 34 ;
    	a1823597932 = 34 ;
    	a1562022185 = (((((((a1610801558 * a1711061361) % 95) - -133) - 0) * 5) % 95) - -123);
    	a847823400 = ((((((a847823400 * a835146412) % 14999) + -29399) % 24) + 397) - 3);
    	a770071847 = (((((((a770071847 * a847823400) % 14999) + 23973) + 2592) + -25465) % 22) - 113);
    	a177640787 = (((((a177640787 * a1562022185) / 5) / 5) % 18) - 92);
    	a369624711 = ((a455265888 / a1678927341) + 7);
    	a785058364 = (a882589857 + 2);
    	a882589857 = (a369624711 - -4);
    	a1538778197 = ((a455265888 * a1917402140) - 10);
    	a796195142 = 36 ;
    	a871550570 = 34 ;
    	a1420843252 = 34 ;
    	a912673804 = (((((a912673804 * a1562022185) % 65) - 30) + -1) / 5);
    	a394986443 = (a1917402140 + 8);
    	a1678927341 = a771824360;
    	a835146412 = (((((a1189507312 * a1711061361) % 36) + 72) * 1) + 0);
    	a169710014 = (((26 / 5) * 5) - 17299);
    	a1717386854 = 34 ;
    	a1472462791 = 34 ;
    	a570886160 = 33 ;
    	a1909685633 = 34 ;
    	a1189507312 = (((((a1189507312 * a1711061361) % 73) - -114) - 1) - -3);
    	a1862658444 = ((((((a1862658444 * a1562022185) % 14999) + -442) - -8338) % 10) + 256);
    	a1405419384 = (a304998879 - -9);
    	a1763171942 = 34 ;
    	a1711061361 = (((((a1711061361 * a1562022185) % 59) - -54) / 5) + -3);
    	a871674684 = (a976945745 + 2);
    	a1610801558 = (((((((a1610801558 * a723108336) % 67) + 83) - 2529) * 5) % 67) - -56);
    	a304998879 = (a2052893331 - 5);
    	a526854419 = 34 ;
    	a1140224045 = 34 ;
    	a42170353 = 34 ;
    	a2139432823 = ((((((a2139432823 * a1562022185) % 14999) + 2201) * 1) % 101) - 56); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm78(int input) {
    if((a526854419 == 33 && (((40 < a1189507312) && (188 >= a1189507312)) && ((((74 < a2147255888) && (267 >= a2147255888)) && (((-159 < a2139432823) && (44 >= a2139432823)) && (((input == 79) &&  cf==1 ) && a1472462791 == 33))) && ((-45 < a807447096) && (7 >= a807447096)))))) {
    	cf = 0;
    	a394986443 = (a815886759 - -8);
    	a570886160 = 33 ;
    	a1491071731 = 33 ;
    	a871550570 = 32 ;
    	a1538778197 = (a882589857 - 8);
    	a1140224045 = 33 ;
    	a1610801558 = (((((a807447096 * a2139432823) + -14933) * 10) / 9) / 5);
    	a1472462791 = 32 ;
    	a1817778538 = ((a304998879 - a785058364) - -14);
    	a1678927341 = (a976945745 + 8);
    	a1917402140 = (a815886759 - -1);
    	a1562022185 = ((((a1711061361 * a835146412) - 19506) - 2079) - 6734);
    	a815886759 = (a771824360 + -8); 
    	 printf("");//printf("%d\n", 120); fflush(stdout); 
    } if((((a785058364 == 11 && a1293712589 == 33) && ((134 < a847823400) && (351 >= a847823400))) && ((a1661935098 == 33 && (a42170353 == 33 && ((input == 89) &&  cf==1 ))) && ((-5 < a1711061361) && (114 >= a1711061361))))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a1495349871 = 32 ;
    	a1244737994 = 32 ;
    	a1541342791 = (((((14 - -26873) - 30650) / 5) * -7) / 10); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a871550570 == 33 && a337942537 == 5) && ((((((input == 60) &&  cf==1 ) && a526854419 == 33) && ((40 < a1189507312) && (188 >= a1189507312))) && a882589857 == 10) && a304998879 == 5))) {
    	cf = 0;
    	a1541342791 = ((((a1711061361 * a835146412) * 2) + -10282) - 16400);
    	a796195142 = 35 ;
    	a1147553654 = (((((((a1541342791 * a723108336) % 14999) % 109) - -412) + 2) - -15665) - 15666);
    	a435971279 = ((a1538778197 + a337942537) + -1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm79(int input) {
    if((((((40 < a1189507312) && (188 >= a1189507312)) && (a570886160 == 33 && ( cf==1  && (input == 79)))) && ((-5 < a1711061361) && (114 >= a1711061361))) && (((-137 < a770071847) && (-92 >= a770071847)) && (a1823597932 == 33 && a455265888 == 2)))) {
    	cf = 0;
    	a1862658444 = (((((a1711061361 * a1711061361) * 2) / 5) % 10) + 255);
    	a912673804 = ((((((a1862658444 * a2139432823) % 14999) / 5) + 650) % 29) + 65);
    	a1610801558 = (((((a1610801558 * a912673804) % 67) - -122) - -25372) + -25432);
    	a1678927341 = (a2052893331 - -1);
    	a526854419 = 33 ;
    	a177640787 = (((((((a2139432823 * a770071847) - -925) % 18) + -101) * 5) % 18) + -86);
    	a15249890 = ((((((a1189507312 * a847823400) % 14999) / 5) - -807) * 10) / 9);
    	a882589857 = (a1817778538 - -4);
    	a835146412 = ((((((a1562022185 * a2147255888) % 14999) + -6705) * 3) % 71) - -181);
    	a570886160 = 34 ;
    	a1189507312 = (((((((a1711061361 * a2147255888) % 14999) % 39) - -227) - 0) + -21094) + 21094);
    	a807447096 = ((((((a807447096 * a835146412) + -1048) - 12268) + -3945) % 105) - -163);
    	a1661935098 = 34 ;
    	a455265888 = ((a785058364 - a1917402140) - 5);
    	a1717386854 = 33 ;
    	a815886759 = (a871674684 - 1);
    	a491168833 = ((a304998879 * a394986443) - 43);
    	a304998879 = (a455265888 - -3);
    	a796195142 = 34 ;
    	a770071847 = (((((((a770071847 * a912673804) % 44) - 27) * 10) / 9) - 3702) + 3698);
    	a1472462791 = 33 ;
    	a847823400 = (((((a1711061361 * a1711061361) % 24) - -375) - -16847) + -16846);
    	a394986443 = (a455265888 + 9);
    	a534143625 = (((((((a15249890 * a723108336) % 14999) % 49) - -206) + -1) / 5) + 180);
    	a723108336 = ((((((a723108336 * a1711061361) % 45) + 75) * 5) % 45) + 55);
    	a871674684 = (a771824360 - 5); 
    	 printf("");//printf("%d\n", 124); fflush(stdout); 
    } if(((a1717386854 == 33 && ((a815886759 == 2 && ( cf==1  && (input == 58))) && a337942537 == 5)) && ((((-96 < a912673804) && (35 >= a912673804)) && ((-159 < a2139432823) && (44 >= a2139432823))) && a871674684 == 4))) {
    	cf = 0;
    	a1457121074 = 35 ;
    	a796195142 = 32 ;
    	a1611619350 = 34 ;
    	a1192100362 = (((((a1862658444 * a723108336) - -21891) * 1) % 14887) - -15111); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((a1678927341 == 10 && (a369624711 == 6 && a1909685633 == 33)) && a570886160 == 33) && (a815886759 == 2 && (( cf==1  && (input == 72)) && ((-5 < a1711061361) && (114 >= a1711061361)))))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a1485869055 = 35 ;
    	a1611619350 = 35 ;
    	a1649499722 = (a369624711 - -5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm80(int input) {
    if(((a1717386854 == 33 && a304998879 == 5) && (a1909685633 == 33 && (a771824360 == 9 && ((((134 < a847823400) && (351 >= a847823400)) && ((input == 75) &&  cf==1 )) && a1293712589 == 33))))) {
    	cf = 0;
    	a1293712589 = 34 ;
    	a12903048 = ((a337942537 / a771824360) - -10);
    	a1472462791 = 33 ;
    	a1610801558 = (((((((a2147255888 * a1862658444) % 14999) + -16261) + -10816) + 22292) % 12) + -22);
    	a1491071731 = 34 ;
    	a871550570 = 33 ;
    	a394986443 = ((a976945745 + a1817778538) - -1);
    	a723108336 = (((((((a723108336 * a847823400) % 14999) / 5) % 45) + 76) + -7274) + 7273);
    	a771824360 = (a871674684 + 6);
    	a1562022185 = (((((((a1189507312 * a1610801558) % 75) - 35) - -4851) * 5) % 75) + -62);
    	a337942537 = (a882589857 - 4);
    	a597484636 = 34 ;
    	a807447096 = ((((((a807447096 * a1862658444) * 2) % 105) + 113) + -12928) + 12928);
    	a976945745 = (a455265888 + 1); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if(((a2128522778 == 33 && ((input == 113) &&  cf==1 )) && ((((a526854419 == 33 && ((36 < a835146412) && (110 >= a835146412))) && ((-120 < a177640787) && (-82 >= a177640787))) && a976945745 == 2) && a369624711 == 6))) {
    	cf = 0;
    	a815886759 = (a785058364 / a304998879);
    	a795297040 = 34 ;
    	a2052893331 = ((a455265888 / a304998879) + 14);
    	a1562022185 = ((((((((a847823400 * a770071847) % 14999) % 75) - 36) - 1) * 5) % 75) - 37);
    	a394986443 = ((a771824360 + a1678927341) + -8);
    	a15249890 = (((11 / 5) + 270) - 3); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a2128522778 == 33 && ((((input == 111) &&  cf==1 ) && a976945745 == 2) && ((-120 < a177640787) && (-82 >= a177640787)))) && ((a771824360 == 9 && ((-45 < a807447096) && (7 >= a807447096))) && a882589857 == 10))) {
    	cf = 0;
    	a2052893331 = (a304998879 - -9);
    	a1763171942 = 32 ;
    	a15249890 = (((29 * 5) + 15073) - 14959);
    	a1711061361 = ((((((a1711061361 * a2147255888) % 14999) * 2) * 1) % 14997) - 15001);
    	a2029515987 = 36 ;
    	a177640787 = ((((a177640787 * a807447096) - 25695) + -1505) / 5);
    	a785058364 = (a1817778538 - -2);
    	a42170353 = 32 ;
    	a882589857 = ((a2052893331 + a1917402140) + -8);
    	a807447096 = ((((a807447096 * a835146412) / 5) - 7368) * 3);
    	a2147255888 = (((((a2147255888 * a2139432823) % 14999) / 5) - 8949) * 2); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((-118 < a723108336) && (30 >= a723108336)) && ((input == 110) &&  cf==1 )) && (a882589857 == 10 && (((-137 < a770071847) && (-92 >= a770071847)) && ((((74 < a2147255888) && (267 >= a2147255888)) && a42170353 == 33) && ((-96 < a912673804) && (35 >= a912673804))))))) {
    	cf = 0;
    	a1562022185 = (((((a912673804 * a912673804) % 75) - 37) / 5) + 26);
    	a394986443 = (a304998879 + 6);
    	a795297040 = 34 ;
    	a2052893331 = (a785058364 + 3);
    	a815886759 = a976945745;
    	a15249890 = (((74 - -240) - 17) + -28); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a871674684 == 4 && ((a1293712589 == 33 && ((134 < a847823400) && (351 >= a847823400))) && ((36 < a835146412) && (110 >= a835146412)))) && a526854419 == 33) && (a1763171942 == 33 && ((input == 86) &&  cf==1 )))) {
    	cf = 0;
    	a682023469 = (a2052893331 - -4);
    	a1409922970 = (a882589857 + 1);
    	a2052893331 = (a1409922970 - -5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm6(int input) {
    if(((a815886759 == 2 && ((((-113 < a1562022185) && (38 >= a1562022185)) && a1472462791 == 33) && a304998879 == 5)) && (((a597484636 == 33 &&  cf==1 ) && a1678927341 == 10) && a337942537 == 5))) {
    	if(((a1823597932 == 33 && (a1661935098 == 33 && (a771824360 == 9 && a2128522778 == 33))) && ((( cf==1  && a883263484 == 34) && a1538778197 == 2) && ((36 < a835146412) && (110 >= a835146412))))) {
    		calculate_outputm74(input);
    	} 
    } 
    if(((a526854419 == 33 && (a1538778197 == 2 && a882589857 == 10)) && ((((a597484636 == 34 &&  cf==1 ) && ((-5 < a1711061361) && (114 >= a1711061361))) && a369624711 == 6) && a570886160 == 33))) {
    	if(((((a871674684 == 4 && ((-96 < a912673804) && (35 >= a912673804))) && a871550570 == 33) && ((185 < a1862658444) && (245 >= a1862658444))) && ((( cf==1  && a12903048 == 10) && a42170353 == 33) && a394986443 == 11))) {
    		calculate_outputm75(input);
    	} 
    } 
    if(((a337942537 == 5 && (a526854419 == 33 && (a785058364 == 11 && ( cf==1  && a597484636 == 35)))) && ((a1823597932 == 33 && ((36 < a835146412) && (110 >= a835146412))) && ((-118 < a723108336) && (30 >= a723108336))))) {
    	if(((((-137 < a770071847) && (-92 >= a770071847)) && (a785058364 == 11 && a570886160 == 33)) && (a815886759 == 2 && (a394986443 == 11 && (((-159 < a2139432823) && (44 >= a2139432823)) && ( cf==1  && a1817778538 == 6)))))) {
    		calculate_outputm78(input);
    	} 
    	if(((a1472462791 == 33 && ((((-36 < a1610801558) && (-11 >= a1610801558)) && a526854419 == 33) && ((-45 < a807447096) && (7 >= a807447096)))) && ((((-5 < a1711061361) && (114 >= a1711061361)) && (a1817778538 == 7 &&  cf==1 )) && a1917402140 == 3))) {
    		calculate_outputm79(input);
    	} 
    	if(((((-96 < a912673804) && (35 >= a912673804)) && (a1823597932 == 33 && (((185 < a1862658444) && (245 >= a1862658444)) && (((-159 < a2139432823) && (44 >= a2139432823)) && (a1817778538 == 8 &&  cf==1 ))))) && (a871674684 == 4 && ((-5 < a1711061361) && (114 >= a1711061361))))) {
    		calculate_outputm80(input);
    	} 
    } 
}
 void calculate_outputm83(int input) {
    if((((a304998879 == 5 && ((-5 < a1711061361) && (114 >= a1711061361))) && a871550570 == 33) && (((a1763171942 == 33 && ( cf==1  && (input == 79))) && a526854419 == 33) && ((-45 < a807447096) && (7 >= a807447096))))) {
    	cf = 0;
    	a771824360 = ((a882589857 * a304998879) - 40);
    	a42170353 = 32 ;
    	a960419217 = (a304998879 - -9);
    	a871674684 = (a771824360 - 5);
    	a169710014 = ((((((a912673804 * a770071847) % 84) - -135) + 1) / 5) - -86);
    	a455265888 = a815886759;
    	a1661935098 = 32 ;
    	a1472462791 = 32 ;
    	a882589857 = ((a771824360 * a771824360) + -89);
    	a835146412 = (((((a835146412 * a2147255888) * 1) % 71) - -138) + 13);
    	a1293712589 = 34 ;
    	a570886160 = 32 ;
    	a1871179310 = 36 ;
    	a912673804 = ((((((((a723108336 * a76578247) % 14999) % 29) + 64) - -13689) * 2) % 29) - -61);
    	a2139432823 = ((((((a2139432823 * a835146412) % 14999) + 653) % 14920) + -15078) + -2);
    	a770071847 = ((((((((a1189507312 * a997347628) % 14999) - 98) % 44) - 12) * 5) % 44) - 28);
    	a796195142 = 36 ;
    	a1862658444 = ((((((((a1862658444 * a76578247) % 14999) % 10) - -255) * 5) * 5) % 10) - -249);
    	a2147255888 = (((((((a1562022185 * a847823400) % 14999) / 5) % 61) - -278) + 13424) + -13393);
    	a337942537 = (a394986443 - 5);
    	a526854419 = 34 ;
    	a1763171942 = 34 ;
    	a177640787 = ((((((a177640787 * a1711061361) * 2) % 29) + -51) + -1689) - -1687);
    	a394986443 = (a976945745 - -9);
    	a1140224045 = 34 ;
    	a2128522778 = 34 ;
    	a304998879 = (a1917402140 - -2);
    	a1823597932 = 34 ;
    	a807447096 = ((((((a807447096 * a912673804) - -2246) + 18927) - -2018) % 25) + -25);
    	a1678927341 = (a1538778197 - -9);
    	a1909685633 = 34 ;
    	a1538778197 = (a871674684 - 2);
    	a871550570 = 33 ;
    	a1491071731 = 34 ;
    	a1711061361 = (((((a1711061361 * a1610801558) + -18940) / 5) * 10) / 9); 
    	 printf("");//printf("%d\n", 119); fflush(stdout); 
    } if(((a2128522778 == 33 && (((-45 < a807447096) && (7 >= a807447096)) && ((74 < a2147255888) && (267 >= a2147255888)))) && (((( cf==1  && (input == 62)) && ((-96 < a912673804) && (35 >= a912673804))) && a882589857 == 10) && a1909685633 == 33))) {
    	cf = 0;
    	a491168833 = (a1538778197 - -4);
    	a796195142 = 34 ;
    	a15249890 = (((((a76578247 * a2147255888) % 14999) + -13617) * 1) - -36656);
    	a1965120042 = (a882589857 + 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((a1763171942 == 33 && (((a1661935098 == 33 && ((a1678927341 == 10 && ( cf==1  && (input == 107))) && a1140224045 == 33)) && ((36 < a835146412) && (110 >= a835146412))) && a871550570 == 33))) {
    	cf = 0;
    	a491168833 = (a455265888 - -9);
    	a796195142 = 34 ;
    	a15249890 = (((((a76578247 * a76578247) % 14999) + 5965) * 1) + 7957);
    	a2074917498 = (a491168833 + -5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm84(int input) {
    if(((((185 < a1862658444) && (245 >= a1862658444)) && (((-137 < a770071847) && (-92 >= a770071847)) && a882589857 == 10)) && (a1491071731 == 33 && ((((134 < a847823400) && (351 >= a847823400)) && ((input == 98) &&  cf==1 )) && a815886759 == 2)))) {
    	cf = 0;
    	a12903048 = ((a304998879 * a304998879) - 15);
    	a597484636 = 34 ;
    	a1491071731 = 34 ;
    	a1293712589 = 34 ;
    	a2052893331 = (a1538778197 - -8);
    	a807447096 = (((((a807447096 * a847823400) % 105) - -112) * 1) + 1);
    	a337942537 = ((a815886759 / a785058364) - -6);
    	a723108336 = ((((((a723108336 * a1189507312) % 45) - -76) + -10450) + -5603) + 16052); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm87(int input) {
    if((((a526854419 == 33 && a304998879 == 5) && a1917402140 == 3) && (((-5 < a1711061361) && (114 >= a1711061361)) && (a1823597932 == 33 && (( cf==1  && (input == 75)) && ((74 < a2147255888) && (267 >= a2147255888))))))) {
    	cf = 0;
    	a796195142 = 36 ;
    	a1491071731 = 34 ;
    	a1472462791 = 34 ;
    	a1420843252 = 32 ;
    	a570886160 = 34 ;
    	a723108336 = (((((((a847823400 * a1711061361) % 14999) + 5431) % 45) + 75) - 5547) - -5547);
    	a526854419 = 34 ;
    	a1293712589 = 34 ;
    	a1917402140 = (a2052893331 - 7);
    	a177640787 = ((((((a723108336 * a723108336) % 29) - 78) + 9) + -2936) + 2949);
    	a1661935098 = 34 ;
    	a976945745 = (a806730426 + -3);
    	a871674684 = ((a1917402140 + a369624711) - 5);
    	a807447096 = (((((a807447096 * a770071847) % 105) + 112) + -5777) + 5778);
    	a1538778197 = ((a1678927341 + a871674684) - 13);
    	a1909685633 = 34 ;
    	a1140224045 = 34 ;
    	a1823597932 = 34 ;
    	a169710014 = ((((a76578247 * a2147255888) + -2645) * 1) * 1);
    	a785058364 = (a394986443 - -1);
    	a2147255888 = (((((a177640787 * a1711061361) % 61) - -329) / 5) - -251);
    	a1189507312 = ((((((a1711061361 * a1711061361) + 7711) % 39) + 194) / 5) + 188);
    	a304998879 = ((a771824360 - a882589857) + 7);
    	a1862658444 = (((((a1862658444 * a1711061361) + -28426) % 10) + 259) - -4);
    	a976902422 = ((((((a76578247 * a169710014) % 14999) - -8363) + -5998) % 14901) + 15098);
    	a337942537 = ((a304998879 * a394986443) + -60);
    	a835146412 = (((((a1562022185 * a1711061361) + 1511) - -1514) % 71) - -126);
    	a1610801558 = (((((a1610801558 * a770071847) % 67) + 32) + -4090) - -4048);
    	a847823400 = (((((((a847823400 * a723108336) % 14999) % 24) + 375) + 1) - 14852) + 14831);
    	a912673804 = (((((a912673804 * a835146412) % 29) - -64) + -23670) - -23670);
    	a369624711 = (a815886759 - -4);
    	a770071847 = ((((((a770071847 * a1189507312) % 14999) - 9484) / 5) % 44) - 4);
    	a1711061361 = ((((((a1711061361 * a2139432823) - -676) * 1) - -966) % 58) + 167); 
    	 printf("");//printf("%d\n", 126); fflush(stdout); 
    } if(((a1491071731 == 33 && (((-120 < a177640787) && (-82 >= a177640787)) && ((40 < a1189507312) && (188 >= a1189507312)))) && ((a1140224045 == 33 && (( cf==1  && (input == 113)) && a337942537 == 5)) && ((-137 < a770071847) && (-92 >= a770071847))))) {
    	cf = 0;
    	a177640787 = (((((a177640787 * a1562022185) % 29) + -38) / 5) + -45);
    	a796195142 = 34 ;
    	a369624711 = ((a2052893331 + a304998879) + -9);
    	a912673804 = ((((((a912673804 * a1562022185) / 5) / 5) + 22054) % 29) + 53);
    	a15249890 = ((((((a835146412 * a723108336) - 3567) + -2224) + 31214) % 27) + 276);
    	a723108336 = (((((((a1711061361 * a847823400) % 14999) * 2) % 45) - -76) + 26821) - 26821);
    	a807447096 = (((((a807447096 * a15249890) % 105) + 112) * 1) - 0);
    	a337942537 = (a771824360 - 4);
    	a1472462791 = 34 ;
    	a1917402140 = (a882589857 - 7);
    	a1823597932 = 34 ;
    	a1491071731 = 34 ;
    	a871674684 = ((a771824360 - a882589857) + 6);
    	a835146412 = (((((((a1189507312 * a1562022185) % 14999) - 16874) - 2032) / 5) % 71) + 183);
    	a1377897560 = (a304998879 - -7);
    	a394986443 = (a976945745 - -10);
    	a1610801558 = (((((a1610801558 * a15249890) % 67) - -101) - 16) / 5);
    	a2147255888 = ((((((a2139432823 * a2139432823) % 14999) - 4220) % 61) + 330) - 2);
    	a1538778197 = (a337942537 + -3);
    	a1293712589 = 34 ;
    	a1862658444 = ((((((a1862658444 * a2147255888) % 14999) % 10) - -246) + 9) * 1);
    	a570886160 = 34 ;
    	a1661935098 = 34 ;
    	a455265888 = ((a785058364 / a806730426) - -2);
    	a785058364 = a394986443;
    	a526854419 = 34 ;
    	a1192100362 = (((((((a15249890 * a76578247) % 80) + -2) + -16) * 5) % 80) - 14);
    	a976945745 = (a304998879 - 2);
    	a1189507312 = (((((((a1562022185 * a847823400) % 14999) % 39) + 208) - 2142) + 12794) - 10634);
    	a847823400 = ((((((((a847823400 * a1711061361) % 14999) % 24) + 375) * 1) * 5) % 24) - -355);
    	a770071847 = ((((((a770071847 * a1711061361) % 44) - 45) + -25199) * 1) - -25196);
    	a304998879 = (a871674684 - -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((-45 < a807447096) && (7 >= a807447096)) && (( cf==1  && (input == 111)) && a1661935098 == 33)) && (((a1472462791 == 33 && ((-36 < a1610801558) && (-11 >= a1610801558))) && a1538778197 == 2) && ((134 < a847823400) && (351 >= a847823400))))) {
    	cf = 0;
    	a304998879 = a806730426;
    	a15249890 = ((((((a76578247 * a723108336) % 27) - -294) * 5) % 27) + 279);
    	a770071847 = ((((((a1562022185 * a2147255888) % 14999) % 44) + -81) + -27670) + 27698);
    	a394986443 = (a976945745 - -10);
    	a337942537 = a304998879;
    	a570886160 = 34 ;
    	a455265888 = (a2052893331 + -8);
    	a1917402140 = ((a369624711 / a304998879) - -3);
    	a796195142 = 34 ;
    	a976945745 = ((a304998879 * a771824360) - 57);
    	a835146412 = (((((((a835146412 * a770071847) + 25803) % 71) + 161) + -778) * -3) / 10);
    	a1823597932 = 34 ;
    	a369624711 = (a2052893331 - 4);
    	a785058364 = (a455265888 - -9);
    	a807447096 = (((((a807447096 * a847823400) * 1) % 105) + 112) + 1);
    	a1862658444 = (((((a1862658444 * a1711061361) % 10) - -255) + 2) - 1);
    	a723108336 = (((((a770071847 * a1189507312) + 15283) / 5) % 45) + 76);
    	a847823400 = (((((((a1189507312 * a1562022185) % 14999) % 24) - -372) + 15857) - 37026) + 21173);
    	a526854419 = 34 ;
    	a1472462791 = 34 ;
    	a1661935098 = 34 ;
    	a1610801558 = (((((a1610801558 * a1189507312) - -9964) % 67) + 41) / 5);
    	a1192100362 = (((((a76578247 * a15249890) * 1) * 1) % 80) + -7);
    	a2147255888 = (((((((a2147255888 * a177640787) % 14999) % 61) + 330) - -1) / 5) - -254);
    	a1538778197 = (a394986443 + -9);
    	a177640787 = ((((((a177640787 * a912673804) % 29) + -51) * 1) / 5) - 48);
    	a1377897560 = (a871674684 + 8);
    	a871674684 = (a882589857 + -6);
    	a1293712589 = 34 ;
    	a1491071731 = 34 ;
    	a912673804 = ((((((a912673804 * a770071847) % 29) + 64) - -2) + 12979) + -12979);
    	a1189507312 = (((((((a1189507312 * a1562022185) % 14999) % 39) - -198) - 1) * 10) / 9); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((a337942537 == 5 && ((36 < a835146412) && (110 >= a835146412))) && a785058364 == 11) && a526854419 == 33) && ((((-118 < a723108336) && (30 >= a723108336)) && ( cf==1  && (input == 110))) && ((-45 < a807447096) && (7 >= a807447096))))) {
    	cf = 0;
    	a723108336 = (((((a2139432823 * a1711061361) % 45) + 75) + 1) - -1);
    	a304998879 = (a2052893331 + -5);
    	a15249890 = (((((a76578247 * a76578247) % 27) - -288) + -4) * 1);
    	a1293712589 = 34 ;
    	a337942537 = (a882589857 + -5);
    	a369624711 = (a806730426 + 1);
    	a1377897560 = (a785058364 + 1);
    	a2147255888 = (((((((a1189507312 * a835146412) % 61) + 309) * 5) - -22867) % 61) - -328);
    	a807447096 = ((((((a807447096 * a835146412) % 105) + 113) / 5) - -10874) + -10740);
    	a1661935098 = 34 ;
    	a1192100362 = (((((a15249890 * a76578247) * 1) + 13115) % 80) + -18);
    	a1610801558 = (((((a1610801558 * a1562022185) % 67) - -118) + 6) / 5);
    	a770071847 = ((((((a770071847 * a177640787) % 44) - 77) * 5) % 44) - 22);
    	a526854419 = 34 ;
    	a455265888 = (a806730426 + -3);
    	a394986443 = (a1917402140 + 9);
    	a1862658444 = ((((((a1862658444 * a912673804) % 10) - -256) * 1) - -16082) + -16081);
    	a912673804 = ((((((a912673804 * a2147255888) % 14999) % 29) - -64) * 1) * 1);
    	a871674684 = (a455265888 + 2);
    	a570886160 = 34 ;
    	a1538778197 = (a976945745 + 1);
    	a976945745 = ((a806730426 * a771824360) + -57);
    	a177640787 = ((((((((a847823400 * a1189507312) % 14999) % 29) - 66) * 9) / 10) / 5) + -31);
    	a1472462791 = 34 ;
    	a796195142 = 34 ;
    	a1491071731 = 34 ;
    	a1917402140 = (a785058364 + -7);
    	a1823597932 = 34 ;
    	a835146412 = (((((a835146412 * a1189507312) % 71) + 149) / 5) * 5);
    	a1189507312 = ((((((a1189507312 * a723108336) / 5) - 976) / 5) % 39) + 228);
    	a785058364 = (a369624711 - -5);
    	a847823400 = ((((((((a847823400 * a723108336) % 14999) - -5192) % 24) + 368) / 5) * 49) / 10); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((-120 < a177640787) && (-82 >= a177640787)) && (((a1823597932 == 33 && ((40 < a1189507312) && (188 >= a1189507312))) && a526854419 == 33) && a1909685633 == 33)) && (((74 < a2147255888) && (267 >= a2147255888)) && ( cf==1  && (input == 59))))) {
    	cf = 0;
    	a1409922970 = (a369624711 + 8);
    	a1377897560 = ((a871674684 / a976945745) - -4);
    	a2052893331 = (a1917402140 - -13); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm7(int input) {
    if(((((36 < a835146412) && (110 >= a835146412)) && (((-137 < a770071847) && (-92 >= a770071847)) && ((( cf==1  && a76578247 <=  -134) && a1538778197 == 2) && a1909685633 == 33))) && (((-159 < a2139432823) && (44 >= a2139432823)) && a337942537 == 5))) {
    	if(((a1293712589 == 33 && (a455265888 == 2 && ((a771824360 == 9 && a1823597932 == 33) && ((-120 < a177640787) && (-82 >= a177640787))))) && (( cf==1  && a997347628 <=  -137) && a394986443 == 11))) {
    		calculate_outputm83(input);
    	} 
    	if(((((( cf==1  && ((56 < a997347628) && (206 >= a997347628))) && a42170353 == 33) && a1293712589 == 33) && ((-159 < a2139432823) && (44 >= a2139432823))) && (a1717386854 == 33 && (((-118 < a723108336) && (30 >= a723108336)) && a1678927341 == 10)))) {
    		calculate_outputm84(input);
    	} 
    } 
    if((((((a1909685633 == 33 && (((-89 < a76578247) && (-44 >= a76578247)) &&  cf==1 )) && a785058364 == 11) && a337942537 == 5) && a1661935098 == 33) && (a1472462791 == 33 && ((185 < a1862658444) && (245 >= a1862658444))))) {
    	if(((a1909685633 == 33 && a1293712589 == 33) && (a394986443 == 11 && (((-36 < a1610801558) && (-11 >= a1610801558)) && (a785058364 == 11 && (( cf==1  && a806730426 == 6) && a1538778197 == 2)))))) {
    		calculate_outputm87(input);
    	} 
    } 
}
 void calculate_outputm89(int input) {
    if(((a871674684 == 4 && (a1491071731 == 33 && a1472462791 == 33)) && (a369624711 == 6 && ((( cf==1  && (input == 102)) && a1763171942 == 33) && a1909685633 == 33)))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a1611619350 = 33 ;
    	a976902422 = ((((((a835146412 * a835146412) / 5) % 92) + -139) + 2696) - 2654);
    	a694436355 = ((((((a976902422 * a976902422) % 14999) - -3305) % 94) + 171) - -2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a1491071731 == 33 && a1472462791 == 33) && (a1140224045 == 33 && ((((36 < a835146412) && (110 >= a835146412)) && (( cf==1  && (input == 75)) && a369624711 == 6)) && ((-5 < a1711061361) && (114 >= a1711061361)))))) {
    	cf = 0;
    	a796195142 = 36 ;
    	a1405419384 = a785058364;
    	a1420843252 = 34 ;
    	a169710014 = (((((a1189507312 * a1189507312) % 14999) + -5715) - 16577) - 5264); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((((74 < a2147255888) && (267 >= a2147255888)) && ((-45 < a807447096) && (7 >= a807447096))) && a526854419 == 33) && (a304998879 == 5 && ((((input == 74) &&  cf==1 ) && ((-159 < a2139432823) && (44 >= a2139432823))) && ((-118 < a723108336) && (30 >= a723108336)))))) {
    	cf = 0;
    	a1409922970 = (a1538778197 - -9);
    	a2052893331 = ((a455265888 + a90400304) - -7);
    	a682023469 = (a90400304 + 5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a304998879 == 5 && ((a1823597932 == 33 && (a394986443 == 11 && a455265888 == 2)) && a570886160 == 33)) && (a2128522778 == 33 && ((input == 56) &&  cf==1 )))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a15249890 = ((((26 + 5291) - -17836) * 10) / 9);
    	a2074917498 = (a2052893331 - 7);
    	a491168833 = (a1917402140 + 8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm91(int input) {
    if(((a815886759 == 2 && (( cf==1  && (input == 75)) && a1823597932 == 33)) && (((a42170353 == 33 && a1678927341 == 10) && a304998879 == 5) && a1717386854 == 33))) {
    	cf = 0;
    	a1485869055 = 35 ;
    	a21974463 = (a815886759 - -6); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((((a526854419 == 33 && (((input == 94) &&  cf==1 ) && ((36 < a835146412) && (110 >= a835146412)))) && a42170353 == 33) && ((((-36 < a1610801558) && (-11 >= a1610801558)) && a1538778197 == 2) && a1293712589 == 33))) {
    	cf = 0;
    	a444227203 = 32 ;
    	a796195142 = 35 ;
    	a1244737994 = 35 ;
    	a1541342791 = ((((a723108336 * a723108336) + 10485) / 5) * 5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((((-45 < a807447096) && (7 >= a807447096)) && (((-120 < a177640787) && (-82 >= a177640787)) && a1538778197 == 2)) && (((36 < a835146412) && (110 >= a835146412)) && (a1491071731 == 33 && (a1678927341 == 10 && ( cf==1  && (input == 91))))))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a976902422 = (((90 / 5) + -1426) - -1604);
    	a1611619350 = 33 ;
    	a1291338295 = (((((a976902422 * a976902422) % 14999) - -11852) - 8441) * 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm92(int input) {
    if(((( cf==1  && (input == 79)) && a1472462791 == 33) && (((185 < a1862658444) && (245 >= a1862658444)) && ((a1293712589 == 33 && (a1823597932 == 33 && a1763171942 == 33)) && a1538778197 == 2)))) {
    	cf = 0;
    	a2052893331 = ((a337942537 - a785058364) - -19);
    	a706197976 = 34 ;
    	a1862658444 = ((((((((a1862658444 * a847823400) % 14999) % 10) + 254) * 1) * 5) % 10) - -246);
    	a1136129815 = 36 ;
    	a807447096 = (((((a807447096 * a723108336) / 5) * 5) % 105) + 113);
    	a723108336 = ((((((a723108336 * a912673804) % 45) - -76) + -1) + -1831) - -1831); 
    	 printf("");//printf("%d\n", 131); fflush(stdout); 
    } if(((a771824360 == 9 && ((-118 < a723108336) && (30 >= a723108336))) && ((a526854419 == 33 && ((( cf==1  && (input == 55)) && a882589857 == 10) && ((40 < a1189507312) && (188 >= a1189507312)))) && a1909685633 == 33))) {
    	cf = 0;
    	a402335329 = 34 ;
    	a1611619350 = 32 ;
    	a796195142 = 32 ;
    	a1429598563 = 32 ; 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm93(int input) {
    if(((a1491071731 == 33 && ((-5 < a1711061361) && (114 >= a1711061361))) && ((((a785058364 == 11 && ((input == 98) &&  cf==1 )) && ((-113 < a1562022185) && (38 >= a1562022185))) && a1917402140 == 3) && a369624711 == 6))) {
    	cf = 0;
    	a847823400 = (((((a2147255888 * a807447096) / 5) % 24) + 375) - 0);
    	a1610801558 = (((((a807447096 * a2139432823) / 5) % 67) + 57) / 5);
    	a723108336 = ((((((a723108336 * a1862658444) * 1) + 21254) - -515) % 45) + 75);
    	a2052893331 = (a21974463 - -7);
    	a1143554178 = ((((((a835146412 * a912673804) * 2) - 126) - -13902) % 70) - -360);
    	a976945745 = ((a1917402140 + a337942537) + -5);
    	a1717386854 = 34 ;
    	a1817778538 = (a771824360 - -1);
    	a177640787 = (((((((a1143554178 * a835146412) % 14999) / 5) + -14086) * 2) % 18) - 93); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm94(int input) {
    if(((a1140224045 == 33 && (a1763171942 == 33 && ( cf==1  && (input == 75)))) && (((((-5 < a1711061361) && (114 >= a1711061361)) && a871674684 == 4) && a1678927341 == 10) && ((134 < a847823400) && (351 >= a847823400))))) {
    	cf = 0;
    	a1541342791 = ((((((a723108336 * a723108336) % 81) - -401) + -20849) + -5749) - -26597);
    	a1140224045 = 33 ;
    	a912673804 = (((((a912673804 * a835146412) % 65) - 30) - 1) + 2);
    	a369624711 = (a455265888 * a1917402140);
    	a1610801558 = ((((((a1610801558 * a1541342791) % 12) + -15) - 1) * 9) / 10);
    	a871550570 = 33 ;
    	a526854419 = 33 ;
    	a2029515987 = 32 ;
    	a796195142 = 35 ;
    	a1189507312 = (((((a770071847 * a807447096) % 73) + 115) - -1) + -1);
    	a1472462791 = 33 ;
    	a976945745 = a815886759;
    	a337942537 = (a882589857 + -6);
    	a2139432823 = (((((a1711061361 * a835146412) % 101) + -57) - -1) / 5);
    	a536820638 = (((((a1541342791 * a1541342791) % 14999) - 27861) + 35883) - -4155); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a455265888 == 2 && (a1140224045 == 33 && (a1823597932 == 33 && (a570886160 == 33 && a1678927341 == 10)))) && (a42170353 == 33 && ((input == 111) &&  cf==1 )))) {
    	cf = 0;
    	a394986443 = (a455265888 - -10);
    	a177640787 = (((((((a847823400 * a847823400) % 14999) % 18) + -116) - -10) - 5272) + 5259);
    	a847823400 = ((((((a847823400 * a807447096) % 108) - -242) / 5) * 10) / 2);
    	a1562022185 = ((((((a1562022185 * a770071847) * 1) / 5) - 5841) % 95) + 201);
    	a723108336 = ((((((a723108336 * a1562022185) % 45) + 76) * 5) % 45) - -76);
    	a1909685633 = 33 ;
    	a2147255888 = (((((a807447096 * a807447096) / 5) - -19909) % 96) - -149);
    	a570886160 = 34 ;
    	a1491071731 = 34 ;
    	a882589857 = (a21974463 + 2);
    	a369624711 = ((a785058364 * a394986443) + -125);
    	a2139432823 = (((((a1610801558 * a1189507312) - -16100) * 2) % 101) - -99);
    	a785058364 = (a394986443 + -1);
    	a15249890 = (((((25 * 109) / 10) / 5) - -10636) + -10397);
    	a1377897560 = (a871674684 - -7);
    	a796195142 = 34 ;
    	a1538778197 = (a394986443 - 9);
    	a304998879 = (a1678927341 - 4);
    	a1823597932 = 33 ;
    	a42170353 = 33 ;
    	a1192100362 = (((((((a15249890 * a15249890) % 14999) % 80) + -80) * 9) / 10) - -46);
    	a1763171942 = 34 ;
    	a1293712589 = 34 ;
    	a526854419 = 33 ;
    	a1678927341 = (a771824360 - -1);
    	a976945745 = (a304998879 / a455265888);
    	a912673804 = ((((((a912673804 * a1562022185) / 5) % 29) + 64) / 5) + 75);
    	a1140224045 = 33 ;
    	a1472462791 = 34 ;
    	a1862658444 = ((((((a807447096 * a2139432823) % 10) + 256) + -1915) - -16377) - 14462);
    	a871674684 = a337942537;
    	a1717386854 = 33 ;
    	a770071847 = (((((((a1562022185 * a1562022185) % 14999) % 44) + -88) * 5) % 44) - 10);
    	a1610801558 = (((((a835146412 * a1711061361) - 11312) % 67) - -57) - 1);
    	a771824360 = ((a1917402140 + a1917402140) + 4);
    	a1917402140 = ((a394986443 - a394986443) - -3);
    	a871550570 = 33 ;
    	a1711061361 = (((((a807447096 * a807447096) + -8987) - 19862) % 59) - -113);
    	a1661935098 = 34 ;
    	a835146412 = ((((((a807447096 * a807447096) / 5) / 5) + -25644) % 36) - -106);
    	a455265888 = (a2052893331 + -10);
    	a2128522778 = 33 ;
    	a815886759 = (a2052893331 + -10);
    	a807447096 = (((((a807447096 % 25) - 17) - 21191) - 2056) - -23244); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a882589857 == 10 && (a1823597932 == 33 && ((-118 < a723108336) && (30 >= a723108336)))) && (a1538778197 == 2 && ((( cf==1  && (input == 110)) && a369624711 == 6) && a337942537 == 5)))) {
    	cf = 0;
    	a976945745 = ((a337942537 / a1917402140) + 2);
    	a1538778197 = a976945745;
    	a871550570 = 33 ;
    	a304998879 = (a976945745 - -3);
    	a1862658444 = (((((((a807447096 * a1610801558) % 10) - -256) - -1) * 5) % 10) - -252);
    	a1610801558 = (((((a1610801558 * a1189507312) * 3) + -540) % 67) + 66);
    	a1472462791 = 34 ;
    	a1823597932 = 33 ;
    	a871674684 = (a455265888 - -3);
    	a1763171942 = 34 ;
    	a771824360 = ((a1678927341 + a1678927341) + -10);
    	a1909685633 = 33 ;
    	a526854419 = 33 ;
    	a1711061361 = ((((((a1711061361 * a1862658444) % 14999) / 5) - 14450) % 59) - -57);
    	a1562022185 = (((((((a1562022185 * a847823400) % 14999) % 95) + 134) / 5) + -3087) - -3248);
    	a1377897560 = ((a394986443 / a21974463) + 10);
    	a807447096 = ((((((((a1862658444 * a1610801558) % 14999) / 5) % 25) + -19) * 5) % 25) - 18);
    	a15249890 = (((66 + 237) / 5) - -251);
    	a1192100362 = (((((((a723108336 * a15249890) % 14999) % 80) + -18) + -1) - -8419) - 8417);
    	a2139432823 = (((((((a835146412 * a770071847) % 101) + 232) * 9) / 10) / 5) - -168);
    	a912673804 = (((((((a912673804 * a770071847) % 29) + 64) * 5) * 5) % 29) + 37);
    	a796195142 = 34 ;
    	a369624711 = (a304998879 - -1);
    	a1293712589 = 34 ;
    	a394986443 = (a1917402140 - -9);
    	a882589857 = (a871674684 - -6);
    	a835146412 = (((((((a1189507312 * a1862658444) % 14999) + 2906) % 36) - -58) / 5) + 33);
    	a177640787 = ((((((a912673804 * a1192100362) % 18) + -101) / 5) * 52) / 10);
    	a1717386854 = 33 ;
    	a1140224045 = 33 ;
    	a815886759 = (a785058364 + -9);
    	a42170353 = 33 ;
    	a770071847 = (((((((a770071847 * a847823400) % 14999) % 44) + -47) - -15147) - 15226) - -78);
    	a1678927341 = (a976945745 + 7);
    	a2128522778 = 33 ;
    	a723108336 = ((((((a723108336 * a1862658444) % 14999) % 45) - -75) + 2) + -2);
    	a455265888 = (a2052893331 - 10);
    	a847823400 = (((((((a847823400 * a1862658444) % 14999) + -12514) + -16184) + -633) % 108) - -275);
    	a1491071731 = 34 ;
    	a2147255888 = (((((((a1862658444 * a1189507312) % 14999) % 96) + 105) - 20) * 9) / 10);
    	a570886160 = 34 ;
    	a1917402140 = (a871674684 + -2);
    	a1661935098 = 34 ;
    	a785058364 = (a871674684 - -6); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((-137 < a770071847) && (-92 >= a770071847)) && ((36 < a835146412) && (110 >= a835146412))) && a1717386854 == 33) && ((-118 < a723108336) && (30 >= a723108336))) && ((((-36 < a1610801558) && (-11 >= a1610801558)) && ( cf==1  && (input == 113))) && a871550570 == 33))) {
    	cf = 0;
    	a455265888 = (a369624711 - 4);
    	a723108336 = (((((a723108336 * a770071847) * 1) % 73) + -42) / 5);
    	a1189507312 = ((((a1711061361 * a835146412) - 28943) + -35) - 387);
    	a771824360 = ((a882589857 - a21974463) - -8);
    	a1763171942 = 32 ;
    	a42170353 = 33 ;
    	a1562022185 = (((((a1562022185 * a835146412) - -5859) % 75) + -37) / 5);
    	a570886160 = 33 ;
    	a1232289479 = ((a785058364 - a2052893331) + 11);
    	a2052893331 = (a871674684 - -13);
    	a1823597932 = 32 ;
    	a1862658444 = (((((a807447096 * a177640787) / 5) - -2210) % 29) + 187);
    	a1917402140 = ((a304998879 * a304998879) - 22);
    	a882589857 = ((a1678927341 * a337942537) - 41);
    	a337942537 = ((a976945745 / a394986443) - -4);
    	a369624711 = ((a1538778197 + a815886759) - -2);
    	a1538778197 = (a394986443 + -10);
    	a526854419 = 33 ;
    	a1717386854 = 32 ;
    	a1711061361 = (((((((a1711061361 * a847823400) % 14999) / 5) - -14624) * 1) * -1) / 10);
    	a2147255888 = ((((((a770071847 * a2139432823) % 96) - -171) + 11538) / 5) - 2156);
    	a76578247 = ((((98 - 19159) + 42908) * -1) / 10); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm8(int input) {
    if(((((a1485869055 == 33 &&  cf==1 ) && a1763171942 == 33) && a1538778197 == 2) && (((((-120 < a177640787) && (-82 >= a177640787)) && a1491071731 == 33) && a369624711 == 6) && ((-36 < a1610801558) && (-11 >= a1610801558))))) {
    	if(((( cf==1  && a90400304 == 7) && a42170353 == 33) && ((((((36 < a835146412) && (110 >= a835146412)) && a369624711 == 6) && ((-45 < a807447096) && (7 >= a807447096))) && a304998879 == 5) && a1293712589 == 33))) {
    		calculate_outputm89(input);
    	} 
    } 
    if(((((((-120 < a177640787) && (-82 >= a177640787)) && ( cf==1  && a1485869055 == 34)) && ((-45 < a807447096) && (7 >= a807447096))) && a42170353 == 33) && ((((36 < a835146412) && (110 >= a835146412)) && ((-36 < a1610801558) && (-11 >= a1610801558))) && a1538778197 == 2))) {
    	if(((a1763171942 == 33 && (((-5 < a1711061361) && (114 >= a1711061361)) && a369624711 == 6)) && ((((-36 < a1610801558) && (-11 >= a1610801558)) && (((36 < a835146412) && (110 >= a835146412)) && ( cf==1  && a883263484 == 35))) && a1293712589 == 33))) {
    		calculate_outputm91(input);
    	} 
    	if((((a1661935098 == 33 && ((-120 < a177640787) && (-82 >= a177640787))) && a882589857 == 10) && ((((134 < a847823400) && (351 >= a847823400)) && (((-36 < a1610801558) && (-11 >= a1610801558)) && ( cf==1  && a883263484 == 36))) && ((40 < a1189507312) && (188 >= a1189507312))))) {
    		calculate_outputm92(input);
    	} 
    } 
    if(((a394986443 == 11 && (a304998879 == 5 && (((-113 < a1562022185) && (38 >= a1562022185)) && a785058364 == 11))) && ((a369624711 == 6 && ( cf==1  && a1485869055 == 35)) && a1823597932 == 33))) {
    	if(((((185 < a1862658444) && (245 >= a1862658444)) && (((-137 < a770071847) && (-92 >= a770071847)) && ((-96 < a912673804) && (35 >= a912673804)))) && (a1472462791 == 33 && (((a21974463 == 8 &&  cf==1 ) && a304998879 == 5) && a1909685633 == 33)))) {
    		calculate_outputm93(input);
    	} 
    	if((((a21974463 == 9 &&  cf==1 ) && a455265888 == 2) && (a1917402140 == 3 && (((((-45 < a807447096) && (7 >= a807447096)) && ((36 < a835146412) && (110 >= a835146412))) && a882589857 == 10) && a1293712589 == 33)))) {
    		calculate_outputm94(input);
    	} 
    } 
}
 void calculate_outputm101(int input) {
    if((((((-137 < a770071847) && (-92 >= a770071847)) && ((input == 92) &&  cf==1 )) && a882589857 == 10) && (((a526854419 == 33 && a1472462791 == 33) && ((36 < a835146412) && (110 >= a835146412))) && a1909685633 == 33))) {
    	cf = 0;
    	a771824360 = (a394986443 + -1);
    	a2128522778 = 33 ;
    	a1140224045 = 34 ;
    	a394986443 = (a304998879 - -6);
    	a1917402140 = ((a815886759 * a2052893331) - 22);
    	a1711061361 = ((((((a723108336 * a177640787) - -28217) / 5) + 10821) % 58) + 171);
    	a2147255888 = ((((((a835146412 * a835146412) + -8951) * 3) - 6656) % 96) - -170);
    	a15249890 = ((((a835146412 * a1189507312) - 27177) * 1) / 5);
    	a42170353 = 33 ;
    	a1189507312 = (((((a807447096 * a177640787) / 5) * 5) % 39) + 255);
    	a337942537 = ((a871674684 / a1917402140) + 5);
    	a570886160 = 33 ;
    	a455265888 = ((a815886759 - a815886759) - -3);
    	a1491071731 = 33 ;
    	a369624711 = ((a1678927341 / a771824360) - -6);
    	a526854419 = 34 ;
    	a1610801558 = ((((((a1610801558 * a847823400) - 6460) + -3397) - 3989) % 67) + 93);
    	a1661935098 = 34 ;
    	a871674684 = (a882589857 - 5);
    	a770071847 = ((((((((a1711061361 * a807447096) % 14999) % 44) + -57) * 10) / 9) * 9) / 10);
    	a871550570 = 34 ;
    	a2139432823 = ((((((a2139432823 * a847823400) % 14999) - 9386) % 101) + -56) - 2);
    	a1293712589 = 34 ;
    	a796195142 = 34 ;
    	a882589857 = ((a369624711 + a304998879) - 1);
    	a1538778197 = (a771824360 - 7);
    	a1823597932 = 33 ;
    	a912673804 = ((((((a912673804 * a1711061361) % 29) - -65) / 5) * 52) / 10);
    	a304998879 = (a771824360 - 5);
    	a1717386854 = 33 ;
    	a1763171942 = 34 ;
    	a1562022185 = ((((((a177640787 * a177640787) / 5) * 5) / 5) % 95) + 50);
    	a1909685633 = 34 ;
    	a785058364 = (a815886759 + 9);
    	a815886759 = ((a771824360 / a771824360) + 1);
    	a1378621586 = 33 ;
    	a847823400 = (((((((a770071847 * a15249890) % 14999) % 24) - -375) - -29423) * 1) - 29421);
    	a177640787 = ((((((a1862658444 * a835146412) / 5) % 18) + -108) - 21817) + 21814);
    	a1678927341 = (a771824360 - -1);
    	a1472462791 = 34 ;
    	a976945745 = (a771824360 - 8);
    	a905282705 = 35 ;
    	a835146412 = ((((((a835146412 * a1562022185) - 9061) % 71) + 182) + 15307) - 15307); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((((((-159 < a2139432823) && (44 >= a2139432823)) && a337942537 == 5) && a1763171942 == 33) && a1293712589 == 33) && ((( cf==1  && (input == 91)) && a871550570 == 33) && a1538778197 == 2))) {
    	cf = 0;
    	a774885508 = (a304998879 + 1);
    	a723108336 = ((((((a912673804 * a912673804) + 13228) % 73) + -92) + -7852) - -7885);
    	a15249890 = (((((a835146412 * a1610801558) + 24151) / 5) * 10) / 9);
    	a1472462791 = 33 ;
    	a1538778197 = a815886759;
    	a807447096 = ((((((a2139432823 * a1189507312) + 3795) / 5) - 16317) % 25) - -1);
    	a177640787 = (((((a177640787 * a912673804) + 12814) - 5477) % 18) + -101);
    	a1140224045 = 33 ;
    	a304998879 = (a871674684 + 1);
    	a2052893331 = (a394986443 + 3);
    	a1862658444 = ((((((a847823400 * a770071847) % 14999) % 29) - -214) + 18381) + -18378); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((((40 < a1189507312) && (188 >= a1189507312)) && (a304998879 == 5 && ( cf==1  && (input == 71)))) && a785058364 == 11) && (((36 < a835146412) && (110 >= a835146412)) && (a1491071731 == 33 && ((-120 < a177640787) && (-82 >= a177640787)))))) {
    	cf = 0;
    	a913550374 = (a1678927341 - 2);
    	a796195142 = 36 ;
    	a1871179310 = 32 ;
    	a169710014 = ((((79 * 9) / 10) - 21686) - -21690); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm103(int input) {
    if((((((a1293712589 == 33 && a1661935098 == 33) && a369624711 == 6) && a570886160 == 33) && ((-96 < a912673804) && (35 >= a912673804))) && (a1491071731 == 33 && ((input == 75) &&  cf==1 )))) {
    	cf = 0;
    	a1293712589 = 34 ;
    	a871550570 = 34 ;
    	a2052893331 = (a976945745 - -8);
    	a597484636 = 35 ;
    	a1817778538 = (a815886759 - -5);
    	a1491071731 = 34 ;
    	a1538778197 = ((a304998879 + a455265888) - 4);
    	a976945745 = (a304998879 - 2); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } 
}
 void calculate_outputm9(int input) {
    if(((a570886160 == 33 && (((134 < a847823400) && (351 >= a847823400)) && (((-96 < a912673804) && (35 >= a912673804)) && (((-5 < a1711061361) && (114 >= a1711061361)) && (a706197976 == 34 &&  cf==1 ))))) && (((36 < a835146412) && (110 >= a835146412)) && a785058364 == 11))) {
    	if(((((-96 < a912673804) && (35 >= a912673804)) && (a337942537 == 5 && ((a1717386854 == 33 && a1661935098 == 33) && a815886759 == 2))) && (((-36 < a1610801558) && (-11 >= a1610801558)) && ( cf==1  && a1136129815 == 36)))) {
    		calculate_outputm101(input);
    	} 
    } 
    if(((a785058364 == 11 && (( cf==1  && a706197976 == 36) && a871550570 == 33)) && (((((-5 < a1711061361) && (114 >= a1711061361)) && a1293712589 == 33) && a815886759 == 2) && ((-36 < a1610801558) && (-11 >= a1610801558))))) {
    	if(((a1538778197 == 2 && (((-5 < a1711061361) && (114 >= a1711061361)) && a42170353 == 33)) && (((-45 < a807447096) && (7 >= a807447096)) && (a369624711 == 6 && ((196 < a1144199001 &&  cf==1 ) && a815886759 == 2))))) {
    		calculate_outputm103(input);
    	} 
    } 
}
 void calculate_outputm105(int input) {
    if(((a570886160 == 33 && (a394986443 == 11 && a976945745 == 2)) && (((74 < a2147255888) && (267 >= a2147255888)) && ((((-118 < a723108336) && (30 >= a723108336)) && ((input == 79) &&  cf==1 )) && a369624711 == 6)))) {
    	cf = 0;
    	a15249890 = ((((((a15249890 * a2139432823) % 14999) % 14838) + 15161) - 0) * 1);
    	a1491071731 = 34 ;
    	a304998879 = ((a871674684 + a394986443) - 11);
    	a785058364 = (a369624711 - -6);
    	a1862658444 = ((((((a1711061361 * a835146412) % 10) + 250) - 2) / 5) + 209);
    	a847823400 = (((((((a847823400 * a1711061361) % 14999) - -9427) % 24) - -354) - 26522) - -26525);
    	a976945745 = (a2052893331 + -11);
    	a2139432823 = ((((((a807447096 * a1711061361) % 14999) / 5) + 2837) % 101) + 59);
    	a1189507312 = ((((((a1189507312 * a770071847) * 1) % 39) - -255) + 13531) + -13547);
    	a570886160 = 33 ;
    	a2128522778 = 34 ;
    	a491168833 = ((a882589857 / a1917402140) - -7);
    	a796195142 = 34 ;
    	a723108336 = (((((((a723108336 * a1862658444) % 14999) / 5) * 5) / 5) % 45) + 75);
    	a1763171942 = 32 ;
    	a1472462791 = 32 ;
    	a880148234 = (((((a15249890 * a15249890) % 14999) + -21642) - 4405) / 5);
    	a1717386854 = 32 ;
    	a337942537 = (a815886759 - -3);
    	a871674684 = ((a771824360 / a1538778197) + 1);
    	a2147255888 = ((((((a2147255888 * a177640787) - -12949) - -14256) - 14943) % 61) + 328);
    	a882589857 = (a976945745 + 8);
    	a1678927341 = (a815886759 - -6);
    	a912673804 = ((((a912673804 * a770071847) - 14552) - 8190) * 1);
    	a1917402140 = ((a394986443 * a815886759) + -29);
    	a1909685633 = 34 ;
    	a770071847 = ((((((((a1562022185 * a15249890) % 14999) % 22) - 132) * 5) * 5) % 22) - 112);
    	a835146412 = (((((((a835146412 * a15249890) % 14999) / 5) + 17979) - 33399) % 36) - -82);
    	a394986443 = ((a369624711 - a369624711) - -11);
    	a526854419 = 33 ;
    	a1823597932 = 34 ;
    	a1661935098 = 33 ;
    	a369624711 = (a771824360 + -4); 
    	 printf("");//printf("%d\n", 131); fflush(stdout); 
    } 
}
 void calculate_outputm106(int input) {
    if(((a1293712589 == 33 && ((((-159 < a2139432823) && (44 >= a2139432823)) && (a1538778197 == 2 && (a1678927341 == 10 && a1917402140 == 3))) && a369624711 == 6)) && ( cf==1  && (input == 75)))) {
    	cf = 0;
    	a1611619350 = 35 ;
    	a570886160 = 32 ;
    	a976945745 = ((a394986443 * a1538778197) + -17);
    	a1189507312 = (((((a1189507312 * a912673804) - 9007) / 5) + 21823) * -1);
    	a1862658444 = (((((a15249890 * a2147255888) % 14999) + -14937) + -52) - 7);
    	a1649499722 = (a369624711 + 1);
    	a455265888 = (a882589857 - 8);
    	a304998879 = (a815886759 - -5);
    	a1717386854 = 32 ;
    	a835146412 = (((((a835146412 * a1862658444) % 14999) - 14962) - 9) + -13);
    	a1621255820 = (a1538778197 - -10);
    	a871674684 = ((a394986443 / a369624711) + 2);
    	a796195142 = 32 ;
    	a526854419 = 32 ;
    	a770071847 = (((((((a770071847 * a1711061361) % 14999) % 44) + -69) - 23258) - -22970) - -293);
    	a1909685633 = 34 ;
    	a1491071731 = 34 ;
    	a2139432823 = (((((((a2139432823 * a1711061361) % 14999) % 101) + 145) + -17387) + -10800) - -28188);
    	a369624711 = (a1917402140 - -4);
    	a1140224045 = 34 ;
    	a723108336 = (((((((a723108336 * a847823400) % 14999) + 13922) % 45) + 76) / 5) + 33);
    	a337942537 = ((a1917402140 * a785058364) - 26);
    	a1661935098 = 32 ;
    	a847823400 = ((((((a847823400 * a807447096) % 14999) - 8673) - 1673) + 40233) + -31646);
    	a2128522778 = 34 ;
    	a1917402140 = (a1538778197 + a1538778197);
    	a1293712589 = 34 ;
    	a1538778197 = (a785058364 - 9); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } 
}
 void calculate_outputm107(int input) {
    if(((((-118 < a723108336) && (30 >= a723108336)) && ((a369624711 == 6 && a1763171942 == 33) && a1140224045 == 33)) && ((( cf==1  && (input == 75)) && a570886160 == 33) && ((36 < a835146412) && (110 >= a835146412))))) {
    	cf = 0;
    	a2052893331 = ((a455265888 + a304998879) + 4);
    	a369624711 = ((a815886759 - a976945745) - -6);
    	a1823597932 = 33 ;
    	a976945745 = (a1538778197 - -1);
    	a177640787 = (((((a177640787 * a2139432823) - -8406) % 18) + -117) + -1);
    	a1562022185 = (((((a1562022185 * a2139432823) % 75) + -37) / 5) + 27);
    	a771824360 = ((a1917402140 * a2052893331) + -23);
    	a1189507312 = (((((((a1189507312 * a15249890) % 14999) % 73) - -105) - -8) / 5) - -117);
    	a871550570 = 33 ;
    	a1763171942 = 33 ;
    	a76578247 = (((((a1862658444 * a723108336) + 21752) % 14933) - 15066) - 1);
    	a2128522778 = 33 ;
    	a526854419 = 33 ;
    	a2147255888 = ((((((a835146412 * a2139432823) % 96) - -171) - -1) - 13576) + 13574);
    	a1711061361 = ((((((((a847823400 * a770071847) % 14999) % 59) + 54) - -2) * 5) % 59) + 55);
    	a1472462791 = 33 ;
    	a997347628 = ((((((a15249890 * a15249890) % 14999) - -13533) / 5) % 74) + 113);
    	a1140224045 = 33 ;
    	a455265888 = (a2052893331 - 9);
    	a1610801558 = ((((((a807447096 * a2139432823) % 12) - 22) / 5) * 5) + -4);
    	a394986443 = a785058364;
    	a785058364 = ((a1678927341 - a1917402140) + 4);
    	a1917402140 = (a882589857 + -7); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1717386854 == 33 && (((134 < a847823400) && (351 >= a847823400)) && ((((-120 < a177640787) && (-82 >= a177640787)) && a1140224045 == 33) && a785058364 == 11))) && (((-113 < a1562022185) && (38 >= a1562022185)) && ( cf==1  && (input == 78))))) {
    	cf = 0;
    	a435971279 = (a1917402140 - -6);
    	a796195142 = 35 ;
    	a1541342791 = (((((a15249890 * a15249890) % 14999) - 23203) / 5) - -1215);
    	a1409922970 = ((a394986443 - a785058364) + 15); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm109(int input) {
    if(((a526854419 == 33 && (a1917402140 == 3 && (((40 < a1189507312) && (188 >= a1189507312)) && ((input == 111) &&  cf==1 )))) && (a304998879 == 5 && (((36 < a835146412) && (110 >= a835146412)) && a1491071731 == 33)))) {
    	cf = 0;
    	a847823400 = (((((a847823400 * a15249890) % 14999) - 20408) * 1) + -7372);
    	a1293712589 = 34 ;
    	a835146412 = (((((a835146412 * a1562022185) % 71) - -128) + 10871) - 10877);
    	a169710014 = (((((((a723108336 * a2147255888) % 14999) % 14842) - -15157) + 0) - 5728) - -5729);
    	a976945745 = (a2052893331 - 13);
    	a882589857 = ((a1678927341 + a1917402140) + -2);
    	a1717386854 = 34 ;
    	a1661935098 = 32 ;
    	a770071847 = ((((((a770071847 * a1610801558) * 5) % 44) + -78) * 9) / 10);
    	a806730426 = ((a1538778197 - a785058364) - -14);
    	a2128522778 = 32 ;
    	a1189507312 = (((((((a1189507312 * a169710014) % 14999) % 39) - -205) / 5) / 5) + 218);
    	a1538778197 = (a455265888 + -1);
    	a42170353 = 32 ;
    	a1823597932 = 32 ;
    	a1491071731 = 34 ;
    	a912673804 = ((((((a912673804 * a1711061361) + 5237) + 1869) + 8089) % 29) - -64);
    	a1472462791 = 34 ;
    	a1763171942 = 34 ;
    	a785058364 = ((a871674684 + a337942537) - -3);
    	a2147255888 = ((((((a723108336 * a723108336) - 14446) % 61) - -336) * 10) / 9);
    	a815886759 = ((a337942537 + a304998879) + -7);
    	a304998879 = a871674684;
    	a871674684 = (a455265888 + 3);
    	a177640787 = ((((((a177640787 * a835146412) % 14999) % 29) + -50) + -3) + 2);
    	a337942537 = (a394986443 - 8);
    	a1140224045 = 34 ;
    	a1610801558 = (((((a723108336 * a835146412) % 14982) + -15017) / 5) - 10704);
    	a526854419 = 34 ;
    	a1420843252 = 32 ;
    	a1909685633 = 34 ;
    	a796195142 = 36 ;
    	a723108336 = (((((a723108336 * a807447096) - 4439) % 45) - -75) * 1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a871550570 == 33 && (((-137 < a770071847) && (-92 >= a770071847)) && ((input == 113) &&  cf==1 ))) && (((a2128522778 == 33 && a1472462791 == 33) && a1763171942 == 33) && a304998879 == 5))) {
    	cf = 0;
    	a1909685633 = 34 ;
    	a1189507312 = ((((((a1189507312 * a15249890) % 14999) / 5) % 39) - -198) * 1);
    	a806730426 = ((a976945745 / a976945745) - -4);
    	a1763171942 = 34 ;
    	a835146412 = (((((a835146412 * a1189507312) % 71) + 122) * 1) * 1);
    	a169710014 = ((((a847823400 * a1610801558) + 23440) + 5862) * 1);
    	a1717386854 = 34 ;
    	a1610801558 = (((((a1189507312 * a177640787) % 14999) - 1659) + 19348) - 30583);
    	a1472462791 = 34 ;
    	a871674684 = a304998879;
    	a815886759 = (a337942537 + -2);
    	a796195142 = 36 ;
    	a912673804 = ((((((a912673804 * a1711061361) % 29) + 64) + 0) + 27578) + -27577);
    	a1491071731 = 34 ;
    	a304998879 = (a882589857 + -6);
    	a1420843252 = 32 ;
    	a1823597932 = 32 ;
    	a337942537 = (a815886759 + 1);
    	a785058364 = (a1917402140 + 9);
    	a723108336 = ((((((a723108336 * a835146412) % 45) - -75) * 1) + 3527) - 3525);
    	a526854419 = 34 ;
    	a2128522778 = 32 ;
    	a1538778197 = (a871674684 + -4);
    	a882589857 = (a1678927341 - -1);
    	a2147255888 = (((((((a2147255888 * a1562022185) % 14999) % 61) + 297) - 18651) / 5) + 3953);
    	a770071847 = ((((((((a770071847 * a835146412) % 14999) % 44) - 46) - 1) * 5) % 44) + -37);
    	a1140224045 = 34 ;
    	a1293712589 = 34 ;
    	a177640787 = ((((((a177640787 * a847823400) % 14999) + -14696) * 1) % 29) + -27);
    	a42170353 = 32 ;
    	a976945745 = (a394986443 - 11);
    	a1661935098 = 32 ;
    	a847823400 = ((((((a847823400 * a1189507312) % 14999) - -5389) - 30685) + 19424) - 10043); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a455265888 == 2 && (((-120 < a177640787) && (-82 >= a177640787)) && (a1140224045 == 33 && a2128522778 == 33))) && (((134 < a847823400) && (351 >= a847823400)) && (a1472462791 == 33 && ( cf==1  && (input == 110)))))) {
    	cf = 0;
    	a835146412 = ((((((((a835146412 * a15249890) % 14999) % 71) - -126) * 5) - -16389) % 71) - -111);
    	a1661935098 = 32 ;
    	a2147255888 = ((((((a177640787 * a177640787) % 61) + 275) + 28979) + -26578) + -2373);
    	a169710014 = (((((((a723108336 * a15249890) % 14999) + 4111) + -16817) * 1) % 14842) - -15157);
    	a337942537 = (a785058364 + -7);
    	a847823400 = ((((a847823400 * a1610801558) - 16116) * 1) * 1);
    	a1472462791 = 34 ;
    	a1823597932 = 32 ;
    	a2128522778 = 32 ;
    	a1420843252 = 32 ;
    	a785058364 = ((a304998879 * a394986443) + -48);
    	a177640787 = (((((((a807447096 * a835146412) % 14999) / 5) + 18103) * 1) % 29) - 55);
    	a976945745 = (a2052893331 + -13);
    	a526854419 = 34 ;
    	a723108336 = ((((((a835146412 * a835146412) % 14999) + -4412) % 45) - -76) - -1);
    	a1763171942 = 34 ;
    	a806730426 = (a1538778197 - -3);
    	a770071847 = (((((((a770071847 * a835146412) % 14999) + -14826) * 1) / 5) % 44) + -28);
    	a1717386854 = 34 ;
    	a1538778197 = (a1917402140 - 2);
    	a1909685633 = 34 ;
    	a1491071731 = 34 ;
    	a815886759 = (a455265888 - -1);
    	a882589857 = (a1678927341 + 1);
    	a871674684 = a304998879;
    	a1140224045 = 34 ;
    	a1189507312 = ((((((a1189507312 * a1562022185) % 14999) / 5) + -22881) % 39) - -256);
    	a912673804 = ((((((((a912673804 * a2147255888) % 14999) + 7626) % 29) - -65) * 5) % 29) + 39);
    	a1610801558 = (((((a1711061361 * a1711061361) % 14999) + -24971) - 113) / 5);
    	a42170353 = 32 ;
    	a1293712589 = 34 ;
    	a796195142 = 36 ;
    	a304998879 = (a882589857 + -7); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1909685633 == 33 && (((-137 < a770071847) && (-92 >= a770071847)) && ( cf==1  && (input == 75)))) && (((134 < a847823400) && (351 >= a847823400)) && ((a1140224045 == 33 && a1717386854 == 33) && a1293712589 == 33)))) {
    	cf = 0;
    	a1143554178 = (((((a723108336 * a15249890) % 14999) - 9410) + -5448) + -80);
    	a2052893331 = (a871674684 - -11);
    	a534143625 = ((((((a1143554178 * a2147255888) % 14999) - 14982) - -18057) + 8077) + -26069); 
    	 printf("");//printf("%d\n", 130); fflush(stdout); 
    } if((((a570886160 == 33 && (a1823597932 == 33 && a1678927341 == 10)) && ((40 < a1189507312) && (188 >= a1189507312))) && (((-118 < a723108336) && (30 >= a723108336)) && (a1917402140 == 3 && ( cf==1  && (input == 99)))))) {
    	cf = 0;
    	a1409922970 = ((a1538778197 / a337942537) + 14);
    	a1377897560 = (a455265888 - -11);
    	a2052893331 = (a882589857 + 6); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm110(int input) {
    if(((((a2128522778 == 33 && a570886160 == 33) && ((-159 < a2139432823) && (44 >= a2139432823))) && a369624711 == 6) && (a1140224045 == 33 && (a815886759 == 2 && ( cf==1  && (input == 93)))))) {
    	cf = 0;
    	a42170353 = 32 ;
    	a1610801558 = ((((a1610801558 * a912673804) + -5616) * 4) / 5);
    	a1678927341 = (a2052893331 - 5);
    	a1862658444 = (((((a2147255888 * a835146412) + -31772) - 969) + 30718) - 28054);
    	a394986443 = (a1678927341 - -1);
    	a1661935098 = 32 ;
    	a1909685633 = 32 ;
    	a337942537 = (a455265888 + 2);
    	a2139432823 = ((((a2139432823 * a177640787) * 1) + -20050) + -3367);
    	a771824360 = ((a774885508 + a774885508) + 2);
    	a2128522778 = 32 ;
    	a1293712589 = 32 ;
    	a882589857 = ((a774885508 - a815886759) - -8);
    	a807447096 = ((((((a2147255888 * a15249890) % 14999) % 25) - 22) - -29014) - 29033);
    	a1917402140 = ((a394986443 + a882589857) + -17);
    	a1823597932 = 32 ;
    	a847823400 = (((((a1711061361 * a723108336) - 11960) * 10) / 9) - 1402);
    	a1649499722 = (a871674684 - -8);
    	a570886160 = 32 ;
    	a177640787 = (((((a15249890 * a15249890) % 14999) + -19830) - 1855) * 1);
    	a1763171942 = 32 ;
    	a1189507312 = (((((a1189507312 * a1862658444) % 14999) - -13210) - 28205) + -2);
    	a1562022185 = ((((((a1562022185 * a847823400) % 14999) % 14943) - 15055) / 5) - 18759);
    	a1491071731 = 32 ;
    	a871674684 = (a337942537 + -1);
    	a1611619350 = 35 ;
    	a304998879 = (a785058364 + -7);
    	a796195142 = 32 ;
    	a1472462791 = 32 ;
    	a770071847 = ((((((a770071847 * a1862658444) % 14999) % 14931) - 15067) * 1) - 2);
    	a309620346 = (a815886759 - -12);
    	a369624711 = (a304998879 - -1);
    	a976945745 = a1538778197;
    	a815886759 = (a394986443 - 9); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if(((a815886759 == 2 && ((185 < a1862658444) && (245 >= a1862658444))) && (((((40 < a1189507312) && (188 >= a1189507312)) && (a1917402140 == 3 && ((input == 55) &&  cf==1 ))) && a1140224045 == 33) && a871674684 == 4))) {
    	cf = 0;
    	a723108336 = ((((((((a15249890 * a2147255888) % 14999) % 45) - -71) / 5) / 5) * 155) / 10);
    	a177640787 = (((((a723108336 * a1562022185) % 29) + -51) - -1) + -3);
    	a169710014 = (((((a912673804 * a1862658444) % 14842) - -15157) * 1) - 0);
    	a394986443 = ((a1917402140 / a369624711) - -12);
    	a1661935098 = 34 ;
    	a1909685633 = 34 ;
    	a796195142 = 34 ;
    	a785058364 = (a976945745 - -10);
    	a1711061361 = ((((((a847823400 * a15249890) % 14999) % 58) - -143) - -22814) + -22819);
    	a1293712589 = 34 ;
    	a1917402140 = (a774885508 + 1);
    	a1147553654 = (((((a169710014 * a15249890) % 14999) - -7953) - -3393) - -3557);
    	a770071847 = ((((((a770071847 * a177640787) / 5) * 5) + 16876) % 44) - 85);
    	a42170353 = 34 ;
    	a912673804 = (((((((a15249890 * a1562022185) % 14999) * 2) - 0) * 1) % 29) - -64);
    	a835146412 = ((((((a835146412 * a1711061361) % 71) - -149) * 9) / 10) + -16);
    	a2139432823 = ((((((a2139432823 * a807447096) % 14999) % 101) - -146) - 4200) - -4199);
    	a1610801558 = (((((a1610801558 * a2139432823) + 18521) / 5) % 67) + 46);
    	a1763171942 = 34 ;
    	a526854419 = 34 ;
    	a1862658444 = ((((((a1189507312 * a1189507312) % 14999) - -3900) % 10) - -255) + 2);
    	a1140224045 = 34 ;
    	a871674684 = a337942537;
    	a1562022185 = (((((a1562022185 * a1610801558) / 5) % 95) + 134) + 1);
    	a771824360 = (a304998879 + 5);
    	a15249890 = ((((((a15249890 * a169710014) % 14999) % 55) + 203) - -11923) - 11969); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((((((-137 < a770071847) && (-92 >= a770071847)) && a1293712589 == 33) && a42170353 == 33) && a871674684 == 4) && a1472462791 == 33) && (( cf==1  && (input == 57)) && a369624711 == 6))) {
    	cf = 0;
    	a1610801558 = ((((((a1610801558 * a835146412) * 5) - 9661) * 1) % 67) + 95);
    	a882589857 = ((a394986443 - a455265888) - -1);
    	a1678927341 = ((a369624711 / a337942537) + 9);
    	a796195142 = 35 ;
    	a1909685633 = 34 ;
    	a435971279 = (a976945745 + 7);
    	a1538778197 = ((a815886759 / a882589857) + 3);
    	a807447096 = (((((((a1189507312 * a2147255888) % 14999) + 14840) - 1194) / 5) % 25) + -39);
    	a1541342791 = ((((((a15249890 * a15249890) % 14999) + -22175) * 1) + 30537) - 25991);
    	a1823597932 = 34 ;
    	a1409922970 = ((a304998879 - a1917402140) - -11);
    	a394986443 = (a1678927341 - -2);
    	a1763171942 = 34 ;
    	a847823400 = ((((((a847823400 * a2139432823) % 14999) % 24) + 375) - 0) - 0);
    	a1491071731 = 34 ;
    	a1562022185 = ((((((((a1562022185 * a15249890) % 14999) % 95) + 133) - -1) * 5) % 95) + 104); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a42170353 == 33 && (((36 < a835146412) && (110 >= a835146412)) && ( cf==1  && (input == 58)))) && (a1909685633 == 33 && ((a570886160 == 33 && a1491071731 == 33) && ((-5 < a1711061361) && (114 >= a1711061361)))))) {
    	cf = 0;
    	a169710014 = (((((a1862658444 * a15249890) % 14999) + 4225) * 1) + 1099);
    	a394986443 = (a337942537 - -7);
    	a1147553654 = ((((a912673804 * a1189507312) + 20614) / 5) * 5);
    	a1763171942 = 34 ;
    	a2139432823 = (((((a2139432823 * a1610801558) - -3658) + -14696) % 101) + 146);
    	a1917402140 = (a369624711 - 2);
    	a723108336 = ((((((((a177640787 * a2147255888) % 14999) % 45) + 75) - -2) * 5) % 45) - -66);
    	a835146412 = (((((a835146412 * a807447096) - -5339) / 5) % 71) + 112);
    	a1140224045 = 34 ;
    	a912673804 = (((((((a2139432823 * a2139432823) % 14999) - -3954) % 29) + 43) * 9) / 10);
    	a1293712589 = 34 ;
    	a15249890 = (((((((a15249890 * a1147553654) % 14999) + -17239) % 55) - -266) + -9580) - -9573);
    	a770071847 = (((((a770071847 * a1711061361) % 44) - 47) + 2) - 2);
    	a1711061361 = ((((((a723108336 * a177640787) / 5) / 5) - 11016) % 58) - -204);
    	a771824360 = (a1678927341 - 1);
    	a1562022185 = (((((a1562022185 * a177640787) % 95) + 133) - -1) - 1);
    	a1909685633 = 34 ;
    	a1661935098 = 34 ;
    	a796195142 = 34 ;
    	a1610801558 = ((((((a1610801558 * a847823400) + 27930) % 67) + -10) - 8451) + 8461);
    	a1862658444 = ((((((a2147255888 * a177640787) % 14999) % 10) + 255) / 5) + 198);
    	a785058364 = ((a1678927341 * a871674684) - 32);
    	a526854419 = 34 ;
    	a42170353 = 34 ;
    	a871674684 = (a455265888 + 3);
    	a177640787 = ((((((a177640787 * a2147255888) % 14999) + 20892) - 11446) % 29) - 50); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((((-118 < a723108336) && (30 >= a723108336)) && a1717386854 == 33) && a42170353 == 33) && ((a871674684 == 4 && (a2128522778 == 33 && ( cf==1  && (input == 59)))) && a1823597932 == 33))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a394986443 = ((a337942537 / a337942537) + 11);
    	a1711061361 = ((((((a1711061361 * a1862658444) % 58) - -172) - 2226) + 12870) + -10643);
    	a1562022185 = (((((((a15249890 * a1862658444) % 14999) % 95) + 120) - -13833) * 2) + -27866);
    	a871674684 = (a1678927341 - 6);
    	a835146412 = (((((a770071847 * a177640787) + 6958) % 71) + 129) + -10);
    	a1147553654 = ((((((a723108336 * a1862658444) % 14738) + 15261) + 0) / 5) + 2903);
    	a177640787 = (((((((a847823400 * a15249890) % 14999) / 5) + 10913) * 2) % 29) + -64);
    	a785058364 = (a815886759 - -10);
    	a770071847 = ((((((((a770071847 * a1562022185) % 14999) + 9111) % 44) + -46) * 5) % 44) - 17);
    	a2139432823 = ((((((a2139432823 * a835146412) % 14999) % 101) + 146) / 5) * 5);
    	a912673804 = (((((a912673804 * a1189507312) + 22451) % 29) - -52) - 12);
    	a1293712589 = 34 ;
    	a723108336 = (((((((a807447096 * a1711061361) % 14999) % 45) + 72) - -19310) * 1) + -19328);
    	a1917402140 = ((a455265888 * a774885508) - 2);
    	a1763171942 = 34 ;
    	a42170353 = 34 ;
    	a1140224045 = 34 ;
    	a1909685633 = 34 ;
    	a771824360 = ((a455265888 * a976945745) + 6);
    	a1661935098 = 34 ;
    	a526854419 = 34 ;
    	a1610801558 = ((((((((a1610801558 * a1147553654) % 14999) % 67) - -57) * 5) - -21298) % 67) + -8);
    	a1862658444 = ((((((a1862658444 * a912673804) / 5) % 10) + 249) - -27919) + -27916);
    	a169710014 = (((((a2147255888 * a15249890) % 14999) / 5) / 5) - -25140);
    	a15249890 = ((((((a15249890 * a1147553654) % 14999) % 55) + 210) + 2494) - 2528); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a815886759 == 2 && (a871674684 == 4 && ((input == 71) &&  cf==1 ))) && (a871550570 == 33 && (a369624711 == 6 && (a337942537 == 5 && a1140224045 == 33))))) {
    	cf = 0;
    	a1209080117 = (a394986443 - 2);
    	a1232289479 = (a1209080117 - 2);
    	a2052893331 = ((a774885508 * a785058364) - 16); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((((( cf==1  && (input == 64)) && ((-120 < a177640787) && (-82 >= a177640787))) && ((40 < a1189507312) && (188 >= a1189507312))) && a1472462791 == 33) && ((a2128522778 == 33 && ((-36 < a1610801558) && (-11 >= a1610801558))) && a455265888 == 2))) {
    	cf = 0;
    	a76578247 = ((((((a15249890 * a835146412) % 14999) - 24333) - 1696) * 10) / 9);
    	a2052893331 = ((a771824360 * a394986443) - 88);
    	a997347628 = ((((((a1862658444 * a1189507312) % 14999) + -27098) * -1) / 10) / 5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm112(int input) {
    if((((a1661935098 == 33 && ((-36 < a1610801558) && (-11 >= a1610801558))) && a1823597932 == 33) && (a1293712589 == 33 && (a394986443 == 11 && (((-5 < a1711061361) && (114 >= a1711061361)) && ((input == 79) &&  cf==1 )))))) {
    	cf = 0;
    	a76578247 = ((((((a2147255888 * a835146412) * 1) * 1) * 1) % 22) + -78);
    	a815886759 = ((a337942537 * a976945745) + -7);
    	a2128522778 = 34 ;
    	a1678927341 = (a369624711 + 5);
    	a1562022185 = ((((((a1562022185 * a770071847) % 95) - -134) - -2555) - 1225) - 1329);
    	a42170353 = 34 ;
    	a882589857 = (a455265888 - -9);
    	a771824360 = (a785058364 + -1);
    	a1717386854 = 34 ;
    	a871550570 = 34 ;
    	a2139432823 = (((((a2139432823 * a912673804) % 101) + 146) + 1) + -2);
    	a1763171942 = 34 ;
    	a806730426 = ((a1917402140 / a2052893331) + 6);
    	a2052893331 = (a455265888 - -9);
    	a455265888 = (a369624711 - 4); 
    	 printf("");//printf("%d\n", 121); fflush(stdout); 
    } if(((a871674684 == 4 && (a771824360 == 9 && ((((36 < a835146412) && (110 >= a835146412)) && (((-159 < a2139432823) && (44 >= a2139432823)) && ((-36 < a1610801558) && (-11 >= a1610801558)))) && a1823597932 == 33))) && ((input == 89) &&  cf==1 ))) {
    	cf = 0;
    	a1232289479 = ((a815886759 / a455265888) - -13);
    	a2052893331 = (a976945745 - -15);
    	a2034779655 = ((((((a15249890 * a15249890) % 14999) % 101) + 118) / 5) - -111); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm113(int input) {
    if(((((input == 75) &&  cf==1 ) && a304998879 == 5) && ((a455265888 == 2 && (a337942537 == 5 && (((134 < a847823400) && (351 >= a847823400)) && a394986443 == 11))) && a1538778197 == 2))) {
    	cf = 0;
    	a796195142 = 36 ;
    	a169710014 = (((((((a2147255888 * a847823400) % 14999) + -18820) * 1) / 5) % 46) + 306);
    	a871674684 = (a771824360 + -4);
    	a1661935098 = 33 ;
    	a847823400 = (((((a723108336 * a2139432823) * 1) % 108) + 242) + 1);
    	a771824360 = (a1917402140 + 7);
    	a1717386854 = 34 ;
    	a2147255888 = ((((((a169710014 * a1862658444) % 14999) - -5799) % 96) - -162) - 45);
    	a882589857 = ((a1678927341 / a1678927341) + 10);
    	a976945745 = (a455265888 + 1);
    	a835146412 = ((((((a835146412 * a1711061361) % 36) - -74) * 5) % 36) + 57);
    	a304998879 = (a1538778197 + 4);
    	a1909685633 = 34 ;
    	a1678927341 = (a871674684 + 5);
    	a1711061361 = ((((((((a1862658444 * a169710014) % 14999) % 59) + -4) * 5) + 5570) % 59) - 1);
    	a570886160 = 33 ;
    	a1472462791 = 34 ;
    	a1224074430 = (((((((a169710014 * a15249890) % 14999) % 63) + 12) + -19120) - -11521) - -7553);
    	a337942537 = (a815886759 - -4);
    	a785058364 = ((a1917402140 / a455265888) + 11);
    	a1538778197 = ((a394986443 / a394986443) + 2);
    	a815886759 = (a394986443 + -8);
    	a42170353 = 33 ;
    	a1140224045 = 33 ;
    	a1763171942 = 34 ;
    	a177640787 = (((((a177640787 * a1562022185) % 29) + -50) * 1) * 1);
    	a1562022185 = (((((a1189507312 * a2139432823) % 75) + -37) / 5) + 19);
    	a455265888 = ((a304998879 * a774885508) + -52);
    	a770071847 = ((((((a770071847 * a169710014) % 14999) / 5) - -15162) % 22) + -116);
    	a2128522778 = 33 ;
    	a912673804 = ((((((a912673804 * a1862658444) / 5) % 65) + -30) - 24675) - -24675);
    	a394986443 = ((a976945745 + a337942537) + 2);
    	a723108336 = ((((((((a723108336 * a169710014) % 14999) * 2) % 45) - -75) * 5) % 45) - -74);
    	a1823597932 = 33 ;
    	a1293712589 = 34 ;
    	a526854419 = 34 ;
    	a1862658444 = ((((((a1862658444 * a807447096) % 14999) / 5) / 5) % 29) - -211);
    	a1917402140 = (a304998879 + -2);
    	a1189507312 = ((((((a1189507312 * a1610801558) - 23785) + 11519) + 9774) % 73) - -114);
    	a1129487110 = (((((a1224074430 * a169710014) + 4838) + -3242) % 39) + -61); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((((-159 < a2139432823) && (44 >= a2139432823)) && ((((-96 < a912673804) && (35 >= a912673804)) && ( cf==1  && (input == 95))) && a1472462791 == 33)) && ((((-120 < a177640787) && (-82 >= a177640787)) && a1678927341 == 10) && a1909685633 == 33))) {
    	cf = 0;
    	a976902422 = (((((a912673804 * a15249890) % 14999) / 5) - -24083) - -1669);
    	a1611619350 = 33 ;
    	a796195142 = 32 ;
    	a881287135 = (a394986443 + 2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((a570886160 == 33 && ((a455265888 == 2 && ( cf==1  && (input == 86))) && a815886759 == 2)) && a1909685633 == 33) && (a1717386854 == 33 && ((185 < a1862658444) && (245 >= a1862658444))))) {
    	cf = 0;
    	a602327392 = ((a394986443 - a1538778197) + 3);
    	a1485869055 = 36 ;
    	a2052893331 = (a871674684 - -8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((a1917402140 == 3 && ((input == 109) &&  cf==1 )) && a1472462791 == 33) && (((-5 < a1711061361) && (114 >= a1711061361)) && ((a785058364 == 11 && a1678927341 == 10) && a882589857 == 10)))) {
    	cf = 0;
    	a1505881712 = 33 ;
    	a76578247 = (((((((a2139432823 * a1862658444) % 14999) % 22) + -111) / 5) * 51) / 10);
    	a2052893331 = (a1917402140 + 8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a1140224045 == 33 && (((74 < a2147255888) && (267 >= a2147255888)) && ((input == 108) &&  cf==1 ))) && (a1823597932 == 33 && (((-120 < a177640787) && (-82 >= a177640787)) && (a455265888 == 2 && a976945745 == 2))))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a1611619350 = 35 ;
    	a309620346 = ((a304998879 / a771824360) - -10);
    	a1649499722 = (a774885508 - 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm10(int input) {
    if((((((40 < a1189507312) && (188 >= a1189507312)) && a1661935098 == 33) && ((-159 < a2139432823) && (44 >= a2139432823))) && (a1717386854 == 33 && ((( cf==1  && ((155 < a15249890) && (267 >= a15249890))) && ((185 < a1862658444) && (245 >= a1862658444))) && a1491071731 == 33)))) {
    	if((((a871674684 == 4 && a369624711 == 6) && a1917402140 == 3) && ((((a2029515987 == 34 &&  cf==1 ) && ((-118 < a723108336) && (30 >= a723108336))) && ((134 < a847823400) && (351 >= a847823400))) && a785058364 == 11))) {
    		calculate_outputm105(input);
    	} 
    	if((((a871674684 == 4 && ((a2128522778 == 33 && a455265888 == 2) && ((36 < a835146412) && (110 >= a835146412)))) && ((-159 < a2139432823) && (44 >= a2139432823))) && (( cf==1  && a2029515987 == 36) && ((-118 < a723108336) && (30 >= a723108336))))) {
    		calculate_outputm106(input);
    	} 
    } 
    if(((a42170353 == 33 && (a1678927341 == 10 && (((134 < a847823400) && (351 >= a847823400)) && ((40 < a1189507312) && (188 >= a1189507312))))) && (a1763171942 == 33 && (( cf==1  && ((267 < a15249890) && (323 >= a15249890))) && a1140224045 == 33)))) {
    	if(((a976945745 == 2 && ((((a795297040 == 34 &&  cf==1 ) && a1763171942 == 33) && a369624711 == 6) && a42170353 == 33)) && (a1661935098 == 33 && a1293712589 == 33))) {
    		calculate_outputm107(input);
    	} 
    	if(((((40 < a1189507312) && (188 >= a1189507312)) && (a1763171942 == 33 && a815886759 == 2)) && (((-96 < a912673804) && (35 >= a912673804)) && (a1472462791 == 33 && (( cf==1  && a795297040 == 36) && a1293712589 == 33))))) {
    		calculate_outputm109(input);
    	} 
    } 
    if((a337942537 == 5 && (((-113 < a1562022185) && (38 >= a1562022185)) && ((((a976945745 == 2 && (323 < a15249890 &&  cf==1 )) && a1293712589 == 33) && a1491071731 == 33) && a785058364 == 11)))) {
    	if(((a1763171942 == 33 && (((-137 < a770071847) && (-92 >= a770071847)) && (a871550570 == 33 && (a774885508 == 3 &&  cf==1 )))) && ((((-36 < a1610801558) && (-11 >= a1610801558)) && a369624711 == 6) && ((-159 < a2139432823) && (44 >= a2139432823))))) {
    		calculate_outputm110(input);
    	} 
    	if(((a1917402140 == 3 && (a976945745 == 2 && (a2128522778 == 33 && a369624711 == 6))) && (a882589857 == 10 && (a1678927341 == 10 && ( cf==1  && a774885508 == 6))))) {
    		calculate_outputm112(input);
    	} 
    	if(((a337942537 == 5 && (a882589857 == 10 && (((a774885508 == 9 &&  cf==1 ) && ((-118 < a723108336) && (30 >= a723108336))) && a1763171942 == 33))) && (((185 < a1862658444) && (245 >= a1862658444)) && a1823597932 == 33))) {
    		calculate_outputm113(input);
    	} 
    } 
}
 void calculate_outputm114(int input) {
    if((((a871550570 == 33 && (((185 < a1862658444) && (245 >= a1862658444)) && ((input == 111) &&  cf==1 ))) && ((74 < a2147255888) && (267 >= a2147255888))) && (((-113 < a1562022185) && (38 >= a1562022185)) && (a369624711 == 6 && ((-45 < a807447096) && (7 >= a807447096)))))) {
    	cf = 0;
    	a1717386854 = 32 ;
    	a2139432823 = ((((a912673804 * a912673804) - 10505) - 15496) + -324);
    	a796195142 = 32 ;
    	a1611619350 = 34 ;
    	a1192100362 = (((((a2147255888 * a912673804) + -518) % 80) + -18) - 1);
    	a42170353 = 32 ;
    	a882589857 = (a304998879 + 4);
    	a770071847 = ((((((a770071847 * a2139432823) % 14999) + -19405) + -8504) - -15035) + -15579);
    	a723108336 = ((((((a1192100362 * a2139432823) % 14999) - 3356) % 14941) + -15058) * 1);
    	a785058364 = (a771824360 - -1);
    	a1538778197 = (a785058364 - 9);
    	a1189507312 = (((((a1143554178 * a807447096) % 14999) + -14985) * 1) - 12);
    	a847823400 = (((((a1192100362 * a912673804) * 3) % 15067) + -14932) - 2);
    	a771824360 = (a1917402140 + 5);
    	a976945745 = (a871674684 - 3);
    	a1610801558 = ((((((a1610801558 * a1189507312) % 14999) % 14982) - 15017) - 1) + 0);
    	a871674684 = ((a785058364 * a394986443) + -107);
    	a1140224045 = 32 ;
    	a337942537 = ((a394986443 - a976945745) + -6);
    	a2128522778 = 32 ;
    	a1862658444 = (((((a1711061361 * a1562022185) - 5110) * 1) - -8930) + -14598);
    	a369624711 = (a2052893331 + -10);
    	a1562022185 = (((((((a1562022185 * a1862658444) % 14999) - -10799) + -7033) + 5261) % 14943) + -15055);
    	a1763171942 = 32 ;
    	a815886759 = a1538778197;
    	a1823597932 = 32 ;
    	a566378298 = 33 ;
    	a835146412 = ((((((a835146412 * a1189507312) % 14999) * 2) + 3) % 15018) + -14981);
    	a1661935098 = 32 ;
    	a807447096 = ((((((a807447096 * a1862658444) % 14999) + -10907) / 5) / 5) - 20398);
    	a304998879 = (a882589857 - 5); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((((-45 < a807447096) && (7 >= a807447096)) && ((-137 < a770071847) && (-92 >= a770071847))) && ((a1763171942 == 33 && (((-113 < a1562022185) && (38 >= a1562022185)) && (( cf==1  && (input == 113)) && ((-5 < a1711061361) && (114 >= a1711061361))))) && a2128522778 == 33))) {
    	cf = 0;
    	a1610801558 = ((((a1610801558 * a835146412) / 5) + -259) + -19622);
    	a2128522778 = 32 ;
    	a42170353 = 32 ;
    	a369624711 = (a455265888 + 3);
    	a1611619350 = 34 ;
    	a304998879 = ((a369624711 - a394986443) - -10);
    	a796195142 = 32 ;
    	a1538778197 = (a871674684 - 2);
    	a1192100362 = (((((((a534143625 * a1862658444) % 14999) % 80) - 18) + 1) + -10943) - -10942);
    	a1661935098 = 32 ;
    	a1823597932 = 32 ;
    	a847823400 = (((((a1562022185 * a807447096) % 14999) + -14966) + 25885) - 25897);
    	a337942537 = ((a976945745 - a785058364) + 12);
    	a2139432823 = (((((((a1143554178 * a2147255888) % 14999) - -6906) * 1) - -3125) % 14920) - 15078);
    	a771824360 = (a976945745 + 6);
    	a1862658444 = ((((((a770071847 * a807447096) % 14999) - 1052) - 13879) - -6153) + -6196);
    	a566378298 = 33 ;
    	a976945745 = (a337942537 - 3); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1140224045 == 33 && ((((-45 < a807447096) && (7 >= a807447096)) && a882589857 == 10) && a42170353 == 33)) && ((a871550570 == 33 && ((input == 80) &&  cf==1 )) && ((185 < a1862658444) && (245 >= a1862658444))))) {
    	cf = 0;
    	a815886759 = ((a771824360 + a771824360) - 15);
    	a1538778197 = ((a785058364 * a369624711) + -63);
    	a1140224045 = 34 ;
    	a871550570 = 34 ;
    	a2029515987 = 34 ;
    	a177640787 = ((((((((a534143625 * a1711061361) % 14999) % 29) + -51) + 9747) * 3) % 29) + -58);
    	a1293712589 = 34 ;
    	a15249890 = (((((a1862658444 * a912673804) % 55) - -210) + 1) * 1);
    	a2052893331 = ((a369624711 - a1917402140) + 11);
    	a1610801558 = ((((((a1610801558 * a534143625) % 14999) * 2) % 67) + 56) / 5);
    	a1562022185 = ((((((a1562022185 * a770071847) % 95) - -133) - 0) + -3925) + 3926);
    	a42170353 = 34 ;
    	a455265888 = (a976945745 - -1);
    	a807447096 = ((((((a807447096 * a847823400) - -628) % 105) - -113) / 5) + 27);
    	a771824360 = (a337942537 + a304998879);
    	a1711061361 = ((((((a1711061361 * a1189507312) % 58) - -172) - -20173) * 1) - 20172); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((((-36 < a1610801558) && (-11 >= a1610801558)) && (a42170353 == 33 && (a771824360 == 9 && ( cf==1  && (input == 94))))) && (((-137 < a770071847) && (-92 >= a770071847)) && (a1538778197 == 2 && ((-45 < a807447096) && (7 >= a807447096)))))) {
    	cf = 0;
    	a2052893331 = ((a369624711 * a394986443) + -54);
    	a570886160 = 33 ;
    	a455265888 = (a785058364 + -9);
    	a304998879 = a337942537;
    	a1678927341 = (a976945745 * a337942537);
    	a1140224045 = 33 ;
    	a2128522778 = 33 ;
    	a883263484 = 36 ;
    	a1562022185 = ((((((a1562022185 * a534143625) % 14999) % 75) + -37) - -7045) + -7045);
    	a2147255888 = ((((((a2147255888 * a1610801558) % 96) - -230) * 9) / 10) - -8);
    	a1711061361 = ((((((a1711061361 * a835146412) * 2) * 1) + -6665) % 59) - -55);
    	a1485869055 = 34 ;
    	a815886759 = (a771824360 + -7);
    	a1717386854 = 33 ;
    	a976945745 = (a394986443 + -9);
    	a871550570 = 33 ;
    	a2139432823 = (((((((a847823400 * a1143554178) % 14999) % 101) - 57) * 5) % 101) - 57);
    	a1491071731 = 33 ;
    	a394986443 = ((a882589857 * a337942537) + -39); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((((a1140224045 == 33 && ((-5 < a1711061361) && (114 >= a1711061361))) && a871550570 == 33) && a304998879 == 5) && ((( cf==1  && (input == 110)) && ((-96 < a912673804) && (35 >= a912673804))) && a1538778197 == 2))) {
    	cf = 0;
    	a566378298 = 33 ;
    	a1611619350 = 34 ;
    	a796195142 = 32 ;
    	a1192100362 = (((((((a534143625 * a1143554178) % 14999) % 80) - 17) / 5) + 20120) + -20176); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((((a455265888 == 2 && (a42170353 == 33 && (((input == 57) &&  cf==1 ) && a771824360 == 9))) && a369624711 == 6) && (a570886160 == 33 && ((185 < a1862658444) && (245 >= a1862658444))))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a566378298 = 33 ;
    	a1611619350 = 34 ;
    	a1192100362 = ((((((a534143625 * a1143554178) % 14999) % 80) - 18) - 1) / 5); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm115(int input) {
    if(((a1538778197 == 2 && ((((-5 < a1711061361) && (114 >= a1711061361)) && a1293712589 == 33) && ((74 < a2147255888) && (267 >= a2147255888)))) && ((a337942537 == 5 && ((input == 79) &&  cf==1 )) && a1472462791 == 33))) {
    	cf = 0;
    	a723108336 = (((((((a723108336 * a2139432823) % 14999) / 5) % 45) + 76) + 15009) - 15008);
    	a835146412 = ((((((a835146412 * a2139432823) % 14999) - -543) - -2190) % 36) - -74);
    	a1472462791 = 32 ;
    	a1611619350 = 35 ;
    	a1649499722 = (a455265888 - -12);
    	a871674684 = (a455265888 + 1);
    	a770071847 = ((((((a770071847 * a2139432823) % 14999) - 17318) / 5) / 5) + -14901);
    	a369624711 = (a2052893331 - 10);
    	a912673804 = (((((a2139432823 * a847823400) % 14999) - -15515) + -12379) - 6852);
    	a1711061361 = ((((((a1711061361 * a2139432823) % 14999) % 14997) - 15001) + -2) * 1);
    	a815886759 = (a785058364 - 9);
    	a1293712589 = 32 ;
    	a1610801558 = ((((((a1610801558 * a1189507312) % 14999) % 14982) + -15017) / 5) + -18647);
    	a807447096 = ((((((a807447096 * a2147255888) + 5591) + -22092) - -40889) * -1) / 10);
    	a1562022185 = ((((((a1562022185 * a1862658444) % 14999) % 14943) + -15055) - -22469) + -22470);
    	a337942537 = (a1538778197 - -2);
    	a1661935098 = 32 ;
    	a526854419 = 32 ;
    	a785058364 = ((a976945745 + a871674684) - -6);
    	a796195142 = 32 ;
    	a2147255888 = (((((a2147255888 * a912673804) % 14999) + -14784) + -176) * 1);
    	a304998879 = ((a871674684 + a785058364) - 9);
    	a1140224045 = 32 ;
    	a847823400 = (((((a177640787 * a2139432823) % 14999) + -20491) + -455) - 1177);
    	a1538778197 = ((a771824360 - a369624711) - 2);
    	a42170353 = 32 ;
    	a1491071731 = 34 ;
    	a1909685633 = 34 ;
    	a1823597932 = 32 ;
    	a2128522778 = 33 ;
    	a419313210 = 32 ;
    	a1763171942 = 32 ;
    	a455265888 = (a871674684 + -2); 
    	 printf("");//printf("%d\n", 124); fflush(stdout); 
    } if(((((a42170353 == 33 && (a1140224045 == 33 && a1661935098 == 33)) && ((-36 < a1610801558) && (-11 >= a1610801558))) && a1823597932 == 33) && (((-96 < a912673804) && (35 >= a912673804)) && ( cf==1  && (input == 80))))) {
    	cf = 0;
    	a960419217 = (a369624711 - -9);
    	a796195142 = 36 ;
    	a1871179310 = 36 ;
    	a169710014 = (((((((a835146412 * a847823400) % 14999) + 13568) / 5) - -15670) % 84) + 80); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm116(int input) {
    if(((((a369624711 == 6 && a337942537 == 5) && a570886160 == 33) && a455265888 == 2) && (a1763171942 == 33 && (((-45 < a807447096) && (7 >= a807447096)) && ( cf==1  && (input == 111)))))) {
    	cf = 0;
    	a723108336 = (((((a1562022185 * a1562022185) * 2) / 5) % 73) - 43);
    	a1485869055 = 35 ;
    	a2052893331 = (a1817778538 - -2);
    	a21974463 = (a1678927341 + -2); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a526854419 == 33 && (((input == 113) &&  cf==1 ) && a394986443 == 11)) && (((a1661935098 == 33 && a871550570 == 33) && ((185 < a1862658444) && (245 >= a1862658444))) && a1538778197 == 2))) {
    	cf = 0;
    	a1485869055 = 35 ;
    	a723108336 = ((((((a1562022185 * a1143554178) % 14999) + 583) - -11832) % 73) + -44);
    	a21974463 = ((a304998879 / a369624711) - -8);
    	a2052893331 = ((a1678927341 + a785058364) - 9); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a871550570 == 33 && (((input == 110) &&  cf==1 ) && a455265888 == 2)) && ((((36 < a835146412) && (110 >= a835146412)) && (a882589857 == 10 && a304998879 == 5)) && ((-137 < a770071847) && (-92 >= a770071847))))) {
    	cf = 0;
    	a997347628 = (((((a1143554178 * a1143554178) % 14999) / 5) - 14121) - 1420);
    	a2052893331 = (a1817778538 + 1);
    	a369624711 = ((a882589857 - a785058364) - -8);
    	a76578247 = (((((a1189507312 * a1862658444) % 14999) + -21383) + -4086) * 1);
    	a1562022185 = ((((((a1562022185 * a2147255888) / 5) - 1139) - 17791) % 95) + 193);
    	a1917402140 = (a394986443 - 7);
    	a785058364 = ((a771824360 + a815886759) - -1);
    	a1189507312 = ((((((a807447096 * a2147255888) - 9151) % 39) + 246) + -6795) + 6810);
    	a815886759 = (a1678927341 - 7); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((a871550570 == 33 && ( cf==1  && (input == 57))) && a1293712589 == 33) && (a1678927341 == 10 && ((a455265888 == 2 && a1909685633 == 33) && ((-96 < a912673804) && (35 >= a912673804)))))) {
    	cf = 0;
    	a21974463 = (a815886759 - -6);
    	a1485869055 = 35 ;
    	a2052893331 = ((a1917402140 - a369624711) - -15);
    	a723108336 = (((((a1562022185 * a1862658444) % 73) + -44) - -15720) - 15718); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((((-5 < a1711061361) && (114 >= a1711061361)) && (a1823597932 == 33 && (((-137 < a770071847) && (-92 >= a770071847)) && a1140224045 == 33))) && ((( cf==1  && (input == 104)) && a815886759 == 2) && a42170353 == 33))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a234980720 = (a871674684 + 8);
    	a1611619350 = 34 ;
    	a1192100362 = (((((a1862658444 * a1189507312) % 14999) + -27898) + -254) * 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a1491071731 == 33 && ((a815886759 == 2 && a2128522778 == 33) && a1661935098 == 33)) && ((a304998879 == 5 && ( cf==1  && (input == 66))) && a337942537 == 5))) {
    	cf = 0;
    	a1611619350 = 36 ;
    	a1218693435 = 34 ;
    	a796195142 = 32 ;
    	a602327392 = (a771824360 - -3); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm11(int input) {
    if(((a1763171942 == 33 && (((-36 < a1610801558) && (-11 >= a1610801558)) && (a1909685633 == 33 && (a1143554178 <=  187 &&  cf==1 )))) && ((((-137 < a770071847) && (-92 >= a770071847)) && a815886759 == 2) && a2128522778 == 33))) {
    	if((((a871550570 == 33 && (a534143625 <=  104 &&  cf==1 )) && ((36 < a835146412) && (110 >= a835146412))) && ((a976945745 == 2 && (((-45 < a807447096) && (7 >= a807447096)) && a882589857 == 10)) && a1293712589 == 33))) {
    		calculate_outputm114(input);
    	} 
    } 
    if((((((187 < a1143554178) && (289 >= a1143554178)) &&  cf==1 ) && a1909685633 == 33) && ((a337942537 == 5 && (((-45 < a807447096) && (7 >= a807447096)) && (a2128522778 == 33 && a526854419 == 33))) && ((-137 < a770071847) && (-92 >= a770071847))))) {
    	if(((((-118 < a723108336) && (30 >= a723108336)) && (a1491071731 == 33 && ( cf==1  && ((77 < a694436355) && (267 >= a694436355))))) && (a1140224045 == 33 && ((((-36 < a1610801558) && (-11 >= a1610801558)) && a337942537 == 5) && ((-45 < a807447096) && (7 >= a807447096)))))) {
    		calculate_outputm115(input);
    	} 
    } 
    if((((a369624711 == 6 && (a1472462791 == 33 && (a815886759 == 2 && a42170353 == 33))) && a1661935098 == 33) && (a1823597932 == 33 && ( cf==1  && ((289 < a1143554178) && (430 >= a1143554178)))))) {
    	if(((((((-159 < a2139432823) && (44 >= a2139432823)) && ((a1917402140 == 3 && ( cf==1  && a1817778538 == 10)) && a1491071731 == 33)) && a785058364 == 11) && a1909685633 == 33) && ((-5 < a1711061361) && (114 >= a1711061361)))) {
    		calculate_outputm116(input);
    	} 
    } 
}
 void calculate_outputm118(int input) {
    if(((((-113 < a1562022185) && (38 >= a1562022185)) && a526854419 == 33) && (a2128522778 == 33 && (a570886160 == 33 && (a42170353 == 33 && (((input == 98) &&  cf==1 ) && a1538778197 == 2)))))) {
    	cf = 0;
    	a1491071731 = 33 ;
    	a1610801558 = (((((((a807447096 * a912673804) % 12) - 22) + -1) * 5) % 12) - 12);
    	a1538778197 = (a1409922970 - 6);
    	a1541342791 = ((((a723108336 * a770071847) * 1) + -25099) - -7407);
    	a526854419 = 33 ;
    	a1409922970 = (a337942537 + 7);
    	a1763171942 = 33 ;
    	a1717386854 = 33 ;
    	a796195142 = 35 ;
    	a177640787 = ((((((a177640787 * a770071847) - 11327) % 18) + -100) + -23605) - -23603);
    	a1562022185 = (((((a1562022185 * a912673804) % 75) - 36) - 1) + -1);
    	a435971279 = ((a1409922970 / a369624711) + 7);
    	a1472462791 = 33 ;
    	a2147255888 = (((((((a2147255888 * a2139432823) % 14999) * 2) - -1) / 5) % 96) + 171);
    	a723108336 = (((((((a723108336 * a807447096) % 73) - 42) - 1) * 5) % 73) + -42); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if(((((input == 87) &&  cf==1 ) && a815886759 == 2) && (((40 < a1189507312) && (188 >= a1189507312)) && ((a1293712589 == 33 && (((36 < a835146412) && (110 >= a835146412)) && a570886160 == 33)) && a1661935098 == 33)))) {
    	cf = 0;
    	a1377897560 = (a1538778197 - -4);
    	a2029515987 = 36 ;
    	a796195142 = 35 ;
    	a1541342791 = ((((((a2147255888 * a1711061361) % 14999) % 81) - -400) * 1) + 2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm119(int input) {
    if((((a1909685633 == 33 && (a1678927341 == 10 && ( cf==1  && (input == 75)))) && ((74 < a2147255888) && (267 >= a2147255888))) && (a1917402140 == 3 && (a42170353 == 33 && a304998879 == 5)))) {
    	cf = 0;
    	a1409922970 = (a369624711 - -6);
    	a536820638 = (((((a723108336 * a723108336) + 9002) * 10) / 9) * 1); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } 
}
 void calculate_outputm120(int input) {
    if(((a1661935098 == 33 && (((-45 < a807447096) && (7 >= a807447096)) && (((-159 < a2139432823) && (44 >= a2139432823)) && a304998879 == 5))) && ((((input == 75) &&  cf==1 ) && a570886160 == 33) && a882589857 == 10))) {
    	cf = 0;
    	a1541342791 = (((((a1862658444 * a2147255888) % 14999) + -28723) * 1) - -8963);
    	a597484636 = 35 ;
    	a435971279 = (a1678927341 - 3);
    	a847823400 = ((((a847823400 * a807447096) - 5335) + -1159) * 1);
    	a807447096 = (((((a1711061361 * a835146412) - -14810) - 28862) - -9648) + -13680);
    	a871674684 = (a1678927341 - 7);
    	a796195142 = 35 ;
    	a1661935098 = 32 ;
    	a1763171942 = 32 ;
    	a1562022185 = ((((a1562022185 * a1189507312) + 20772) - 28482) * 1);
    	a2139432823 = ((((a2139432823 * a770071847) * 1) + -23396) * 1); 
    	 printf("");//printf("%d\n", 128); fflush(stdout); 
    } 
}
 void calculate_outputm123(int input) {
    if(((a1538778197 == 2 && (( cf==1  && (input == 79)) && a771824360 == 9)) && (((-113 < a1562022185) && (38 >= a1562022185)) && (((-118 < a723108336) && (30 >= a723108336)) && (((-96 < a912673804) && (35 >= a912673804)) && a369624711 == 6))))) {
    	cf = 0;
    	a169710014 = (((((a536820638 * a536820638) % 14999) + -20041) - 4117) * 1);
    	a796195142 = 36 ;
    	a42170353 = 34 ;
    	a1763171942 = 34 ;
    	a1538778197 = (a1409922970 + -9);
    	a1678927341 = ((a394986443 + a304998879) - 6);
    	a1909685633 = 34 ;
    	a2147255888 = ((((((a169710014 * a1562022185) % 14999) - -5279) - 19824) % 61) + 330);
    	a723108336 = ((((((((a723108336 * a169710014) % 14999) % 45) - -75) + 1) * 5) % 45) + 43);
    	a526854419 = 34 ;
    	a1420843252 = 36 ;
    	a2128522778 = 34 ;
    	a177640787 = ((((((a177640787 * a1610801558) - 13611) % 29) - 22) + 6711) + -6711);
    	a1717386854 = 34 ;
    	a847823400 = ((((((((a847823400 * a169710014) % 14999) % 24) + 375) + 2) * 5) % 24) - -374);
    	a1140224045 = 34 ;
    	a1189507312 = (((((((a1189507312 * a2139432823) % 14999) % 39) + 219) / 5) * 45) / 10);
    	a1917402140 = ((a785058364 * a369624711) - 68);
    	a337942537 = (a976945745 - -3);
    	a807447096 = ((((((a169710014 * a169710014) % 14999) - -4047) - 18683) % 105) + 113);
    	a369624711 = (a304998879 - -1);
    	a1842951122 = (a394986443 - 3);
    	a771824360 = ((a2052893331 / a304998879) - -8);
    	a835146412 = (((((a835146412 * a1711061361) - 17693) % 71) + 182) - 1);
    	a1862658444 = ((((((((a1862658444 * a807447096) % 14999) + -23951) % 10) + 258) * 5) % 10) - -253);
    	a871674684 = (a1538778197 - -2);
    	a1562022185 = (((((((a1562022185 * a770071847) % 95) + 133) * 1) * 5) % 95) - -79);
    	a570886160 = 34 ;
    	a1661935098 = 34 ;
    	a912673804 = (((((((a912673804 * a2147255888) % 14999) - -12502) % 29) + 65) + -7717) - -7717);
    	a770071847 = ((((((a770071847 * a807447096) / 5) % 44) + -39) - 15176) - -15204);
    	a394986443 = (a815886759 + 10);
    	a815886759 = (a304998879 - 3); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } if(((( cf==1  && (input == 63)) && a1661935098 == 33) && ((a570886160 == 33 && ((((-45 < a807447096) && (7 >= a807447096)) && a2128522778 == 33) && a526854419 == 33)) && ((-118 < a723108336) && (30 >= a723108336))))) {
    	cf = 0;
    	a2052893331 = (a771824360 + 8);
    	a2034779655 = ((((((a847823400 * a2147255888) % 14999) % 40) + 295) - -14555) - 14582);
    	a1232289479 = ((a771824360 - a369624711) - -11); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((((40 < a1189507312) && (188 >= a1189507312)) && ((-45 < a807447096) && (7 >= a807447096))) && (a1717386854 == 33 && (a1140224045 == 33 && ((a815886759 == 2 && ((input == 82) &&  cf==1 )) && a1917402140 == 3))))) {
    	cf = 0;
    	a1244737994 = 36 ;
    	a796195142 = 35 ;
    	a1260631 = (a771824360 + -1);
    	a1541342791 = (((((a536820638 * a536820638) % 14999) / 5) + 26992) - 0); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm124(int input) {
    if(((a1491071731 == 33 && (((185 < a1862658444) && (245 >= a1862658444)) && (( cf==1  && (input == 79)) && a1917402140 == 3))) && (a1678927341 == 10 && (((-36 < a1610801558) && (-11 >= a1610801558)) && a304998879 == 5)))) {
    	cf = 0;
    	a177640787 = ((((((a177640787 * a536820638) % 14999) - -3028) / 5) % 29) - 50);
    	a1472462791 = 34 ;
    	a566378298 = 35 ;
    	a1610801558 = ((((((a1610801558 * a770071847) - -18378) % 67) + 39) * 10) / 9);
    	a723108336 = (((((((a536820638 * a2147255888) % 14999) % 45) + 36) * 10) / 9) - -23);
    	a1409922970 = ((a976945745 + a2052893331) + -3); 
    	 printf("");//printf("%d\n", 124); fflush(stdout); 
    } 
}
 void calculate_outputm125(int input) {
    if((((((input == 113) &&  cf==1 ) && ((-137 < a770071847) && (-92 >= a770071847))) && a2128522778 == 33) && ((a785058364 == 11 && (((-118 < a723108336) && (30 >= a723108336)) && a42170353 == 33)) && a771824360 == 9))) {
    	cf = 0;
    	a1538778197 = ((a976945745 - a455265888) + 2);
    	a526854419 = 34 ;
    	a1610801558 = (((((a1610801558 * a847823400) - -28204) / 5) % 67) - -4);
    	a1917402140 = ((a976945745 * a1538778197) + -5);
    	a455265888 = (a2052893331 + -14);
    	a785058364 = (a1917402140 + 8);
    	a871674684 = (a976945745 - -2);
    	a807447096 = ((((((a807447096 * a912673804) % 105) - -113) + -17653) + 28099) - 10446);
    	a304998879 = (a1917402140 - -2);
    	a177640787 = (((((((a177640787 * a1189507312) % 29) + -36) * 10) / 9) * 9) / 10);
    	a1140224045 = 33 ;
    	a1678927341 = (a976945745 - -7);
    	a835146412 = (((((((a835146412 * a1862658444) % 36) - -57) - 4372) * 5) % 36) + 84);
    	a169710014 = (((((a723108336 * a1189507312) % 46) + 267) * 1) - 0);
    	a1472462791 = 34 ;
    	a1717386854 = 34 ;
    	a369624711 = (a1917402140 + 3);
    	a394986443 = (a815886759 + 8);
    	a337942537 = a304998879;
    	a1862658444 = (((((a770071847 * a1610801558) * 1) % 29) + 216) - -1);
    	a1224074430 = ((((((a2147255888 * a912673804) + -1643) * 1) + 10407) % 63) - -14);
    	a882589857 = (a815886759 - -8);
    	a1763171942 = 34 ;
    	a871550570 = 34 ;
    	a1823597932 = 33 ;
    	a796195142 = 36 ;
    	a1129487110 = ((((((((a169710014 * a169710014) % 14999) - -3999) % 39) + -97) * 5) % 39) - 60);
    	a2147255888 = (((((a1610801558 * a770071847) - -4559) % 96) - -171) + -1);
    	a771824360 = ((a882589857 / a976945745) + 7);
    	a1293712589 = 34 ;
    	a723108336 = (((((a723108336 * a1562022185) - 10668) % 45) - -76) + 1);
    	a1909685633 = 34 ;
    	a42170353 = 33 ;
    	a1661935098 = 33 ;
    	a1711061361 = ((((((a1711061361 * a770071847) * 1) / 5) * 5) % 59) - -55);
    	a847823400 = ((((((a770071847 * a1610801558) + -2416) + -4607) * 1) % 108) + 257);
    	a912673804 = (((((a1610801558 * a770071847) * 1) % 65) + -29) - 2);
    	a1562022185 = (((((a1562022185 * a770071847) / 5) * 5) % 75) + -37);
    	a1189507312 = (((((a1610801558 * a770071847) - 1375) % 73) - -140) + 1);
    	a570886160 = 33 ;
    	a2128522778 = 33 ;
    	a770071847 = (((((((a770071847 * a1610801558) % 22) + -114) * 5) - -24893) % 22) - 127); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1717386854 == 33 && ((((input == 110) &&  cf==1 ) && ((-36 < a1610801558) && (-11 >= a1610801558))) && ((-118 < a723108336) && (30 >= a723108336)))) && ((a1678927341 == 10 && a1763171942 == 33) && a455265888 == 2))) {
    	cf = 0;
    	a785058364 = (a815886759 + 9);
    	a1661935098 = 33 ;
    	a1917402140 = ((a394986443 / a1678927341) + 3);
    	a1472462791 = 34 ;
    	a723108336 = ((((((a723108336 * a835146412) + 7401) + -12535) - -2697) % 45) - -75);
    	a1909685633 = 34 ;
    	a1717386854 = 34 ;
    	a369624711 = (a785058364 + -5);
    	a570886160 = 33 ;
    	a1538778197 = ((a771824360 * a785058364) + -105);
    	a1562022185 = (((((((a1562022185 * a1862658444) % 75) - 36) - 1) * 5) % 75) + -36);
    	a807447096 = ((((((a807447096 * a723108336) % 105) + 112) + 1) * 9) / 10);
    	a1293712589 = 34 ;
    	a882589857 = (a771824360 + 2);
    	a1129487110 = (((((a912673804 * a1610801558) % 39) - 61) + 6650) - 6651);
    	a1140224045 = 33 ;
    	a1823597932 = 33 ;
    	a337942537 = (a369624711 - 1);
    	a177640787 = ((((((a177640787 * a1189507312) % 29) + -22) * 1) * 10) / 9);
    	a394986443 = (a871674684 - -7);
    	a304998879 = ((a1917402140 - a815886759) + 5);
    	a912673804 = (((((a1711061361 * a1711061361) / 5) % 65) + -30) + -1);
    	a770071847 = (((((a770071847 * a1610801558) % 22) + -122) + 7) + -6);
    	a526854419 = 34 ;
    	a835146412 = (((((((a1129487110 * a1610801558) * 5) % 36) + 37) / 5) * 53) / 10);
    	a871674684 = ((a337942537 * a369624711) - 37);
    	a2128522778 = 33 ;
    	a1678927341 = (a369624711 - -3);
    	a847823400 = ((((((((a847823400 * a723108336) % 14999) % 108) + 198) * 10) / 9) * 9) / 10);
    	a169710014 = ((((((a1129487110 * a1129487110) % 46) + 261) - -8949) + 17673) + -26613);
    	a771824360 = (a2052893331 - 6);
    	a1224074430 = ((((((a1129487110 * a1129487110) * 2) / 5) / 5) % 63) + 3);
    	a42170353 = 33 ;
    	a1189507312 = ((((((a1610801558 * a2147255888) - 16778) % 73) + 168) + 6728) + -6743);
    	a796195142 = 36 ;
    	a455265888 = ((a882589857 * a882589857) + -119);
    	a1610801558 = (((((a1610801558 * a1862658444) * 3) + -2402) % 67) - -73);
    	a2147255888 = ((((((a2147255888 * a1711061361) % 14999) % 96) + 171) * 1) * 1);
    	a871550570 = 34 ;
    	a1763171942 = 34 ;
    	a1862658444 = (((((a1862658444 * a1711061361) - -1626) + -1142) % 29) + 216);
    	a1711061361 = (((((a1711061361 * a723108336) - 23101) % 59) - -66) / 5); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1472462791 == 33 && a455265888 == 2) && (((74 < a2147255888) && (267 >= a2147255888)) && ((a882589857 == 10 && (a785058364 == 11 && ((input == 111) &&  cf==1 ))) && a1909685633 == 33)))) {
    	cf = 0;
    	a2128522778 = 32 ;
    	a455265888 = ((a394986443 * a1917402140) - 21);
    	a771824360 = ((a871674684 + a2052893331) - 12);
    	a1140224045 = 32 ;
    	a796195142 = 32 ;
    	a1678927341 = ((a2052893331 / a2052893331) - -8);
    	a882589857 = (a455265888 - -8);
    	a42170353 = 32 ;
    	a1661935098 = 32 ;
    	a1711061361 = ((((a2147255888 * a835146412) - 9798) + -20506) + -2420);
    	a871674684 = ((a882589857 * a882589857) - 78);
    	a304998879 = (a785058364 + -7);
    	a1472462791 = 32 ;
    	a570886160 = 32 ;
    	a1649499722 = ((a394986443 * a337942537) + -42);
    	a177640787 = ((((((a177640787 * a2147255888) % 14999) + 5364) - 10434) * 10) / 9);
    	a536820638 = ((((((a1862658444 * a1862658444) % 14999) % 62) - 156) + 10278) - 10297);
    	a1189507312 = (((((a1189507312 * a2147255888) % 14999) + -18791) - 2334) * 1);
    	a337942537 = ((a1678927341 * a1409922970) - 113);
    	a785058364 = (a455265888 - -9);
    	a847823400 = (((((a847823400 * a1711061361) % 14999) - -29744) / 5) + -9390);
    	a1909685633 = 32 ;
    	a1611619350 = 35 ;
    	a1763171942 = 32 ;
    	a1610801558 = (((((a1610801558 * a770071847) + -27995) * 10) / 9) / 5);
    	a1562022185 = (((((a1562022185 * a912673804) - 16950) - -25250) * 10) / -9); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a526854419 == 33 && (a570886160 == 33 && (((-120 < a177640787) && (-82 >= a177640787)) && a1140224045 == 33))) && (((-113 < a1562022185) && (38 >= a1562022185)) && (a304998879 == 5 && ((input == 57) &&  cf==1 ))))) {
    	cf = 0;
    	a1224074430 = (((((((a1862658444 * a1862658444) % 14999) % 63) + 1) * 10) / 9) + -44);
    	a1717386854 = 34 ;
    	a570886160 = 33 ;
    	a169710014 = ((((((a1224074430 * a1224074430) % 46) - -268) / 5) * 5) - -3);
    	a1538778197 = (a394986443 + -8);
    	a1129487110 = (((((((a169710014 * a835146412) % 14999) % 39) + -99) + -2) - -389) - 388);
    	a871550570 = 34 ;
    	a177640787 = (((((a177640787 * a1562022185) + 1372) % 29) + -51) - -1);
    	a1562022185 = (((((((a1189507312 * a1189507312) % 14999) % 75) + -82) / 5) * 9) / 10);
    	a835146412 = ((((((a177640787 * a912673804) * 3) % 36) + 72) / 5) + 45);
    	a723108336 = (((((a723108336 * a770071847) % 45) + 76) + -27123) - -27123);
    	a871674684 = (a394986443 + -6);
    	a337942537 = ((a815886759 * a1678927341) - 24);
    	a1610801558 = (((((a1610801558 * a847823400) * 2) / 5) % 67) + 81);
    	a1823597932 = 33 ;
    	a2128522778 = 33 ;
    	a304998879 = ((a394986443 / a2052893331) + 6);
    	a1862658444 = ((((((a912673804 * a177640787) % 29) + 214) * 5) % 29) + 189);
    	a770071847 = ((((((a1711061361 * a2147255888) % 14999) - 11693) % 22) + -113) - 1);
    	a1293712589 = 34 ;
    	a2147255888 = (((((a1224074430 * a1129487110) % 96) - -170) - -1007) - 1005);
    	a785058364 = ((a871674684 - a976945745) + 10);
    	a1189507312 = (((((a177640787 * a169710014) % 73) + 179) / 5) + 32);
    	a526854419 = 34 ;
    	a1909685633 = 34 ;
    	a1661935098 = 33 ;
    	a1472462791 = 34 ;
    	a882589857 = a394986443;
    	a455265888 = (a2052893331 - 14);
    	a1711061361 = (((((a169710014 * a912673804) * 1) % 59) - -54) / 5);
    	a1678927341 = (a1538778197 + 7);
    	a847823400 = (((((a1224074430 * a169710014) * 1) % 108) - -242) - -2);
    	a1917402140 = (a1409922970 + -9);
    	a771824360 = ((a2052893331 + a1538778197) - 9);
    	a1763171942 = 34 ;
    	a807447096 = (((((a807447096 * a1129487110) * 5) / 5) % 105) - -112);
    	a1140224045 = 33 ;
    	a42170353 = 33 ;
    	a796195142 = 36 ;
    	a369624711 = ((a2052893331 / a2052893331) - -6);
    	a394986443 = a882589857;
    	a912673804 = (((((a912673804 * a177640787) % 65) + -29) + -2) - 0); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a526854419 == 33 && (((-45 < a807447096) && (7 >= a807447096)) && ((-5 < a1711061361) && (114 >= a1711061361)))) && (a871674684 == 4 && ((((134 < a847823400) && (351 >= a847823400)) && ( cf==1  && (input == 66))) && a1717386854 == 33)))) {
    	cf = 0;
    	a1228745271 = (((86 + -29462) * 1) / 5);
    	a796195142 = 35 ;
    	a1541342791 = (((((((a847823400 * a770071847) % 14999) - -22285) % 59) - -216) / 5) + 167);
    	a997347628 = (((((a1541342791 * a1228745271) % 14999) / 5) / 5) + 13237); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm129(int input) {
    if(((((a526854419 == 33 && a394986443 == 11) && a1538778197 == 2) && a785058364 == 11) && ((((74 < a2147255888) && (267 >= a2147255888)) && ( cf==1  && (input == 111))) && ((-45 < a807447096) && (7 >= a807447096))))) {
    	cf = 0;
    	a882589857 = (a815886759 + 7);
    	a1189507312 = (((((a1189507312 * a1862658444) % 14999) - 15872) * 1) + -7770);
    	a847823400 = ((((a847823400 * a807447096) + 10191) - 12962) / 5);
    	a1538778197 = ((a771824360 + a771824360) - 17);
    	a835146412 = ((((a912673804 * a1562022185) - -2025) / 5) + -18642);
    	a369624711 = (a1678927341 + -5);
    	a912673804 = ((((((a1189507312 * a2147255888) % 14999) / 5) * 5) % 14952) - 15047);
    	a770071847 = ((((((a2147255888 * a1189507312) % 14999) * 2) % 14931) + -15067) + -2);
    	a394986443 = ((a1538778197 * a815886759) + 8);
    	a1562022185 = (((((a1562022185 * a1862658444) - 2332) * 1) % 14943) + -15055);
    	a796195142 = 32 ;
    	a337942537 = (a394986443 + -6);
    	a563057875 = (a1409922970 + -6);
    	a177640787 = ((((((a835146412 * a2147255888) % 14999) * 2) % 18) + -99) * 1);
    	a42170353 = 32 ;
    	a1823597932 = 32 ;
    	a570886160 = 32 ;
    	a1218693435 = 35 ;
    	a785058364 = (a304998879 + 5);
    	a807447096 = (((((((a1711061361 * a1189507312) % 14999) % 14977) + -15021) / 5) - -4926) - 10455);
    	a871674684 = (a2052893331 - 13);
    	a1763171942 = 32 ;
    	a723108336 = ((((((a2147255888 * a770071847) % 14999) + -2254) + -6854) * 10) / 9);
    	a1611619350 = 36 ;
    	a976945745 = ((a815886759 / a1917402140) + 1);
    	a1711061361 = ((((((a1711061361 * a1189507312) % 14999) * 2) % 14997) - 15001) - 1);
    	a304998879 = (a815886759 - -2); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a771824360 == 9 && (a1140224045 == 33 && a369624711 == 6)) && a1661935098 == 33) && (a526854419 == 33 && (( cf==1  && (input == 113)) && ((74 < a2147255888) && (267 >= a2147255888)))))) {
    	cf = 0;
    	a42170353 = 32 ;
    	a337942537 = (a2052893331 - 12);
    	a570886160 = 32 ;
    	a912673804 = ((((a912673804 * a835146412) - 16841) / 5) + -14012);
    	a723108336 = (((((a912673804 * a2147255888) % 14999) + -13738) + -86) - 536);
    	a563057875 = ((a369624711 - a815886759) + 5);
    	a871674684 = ((a337942537 - a337942537) + 3);
    	a1218693435 = 35 ;
    	a304998879 = a337942537;
    	a882589857 = (a1917402140 - -6);
    	a369624711 = ((a394986443 - a1538778197) - 4);
    	a1562022185 = (((((((a1562022185 * a723108336) % 14999) - -12382) + -16485) * 1) % 14943) + -15055);
    	a177640787 = ((((((a2147255888 * a807447096) % 18) - 101) - 1) + 17353) - 17352);
    	a1611619350 = 36 ;
    	a785058364 = ((a337942537 - a976945745) + 8);
    	a976945745 = ((a1409922970 + a1678927341) - 24);
    	a1189507312 = (((((a1189507312 * a1562022185) % 14999) + -13997) - 772) * 1);
    	a1763171942 = 32 ;
    	a847823400 = (((((a847823400 * a2147255888) % 14999) + -25729) - -26741) * -1);
    	a796195142 = 32 ;
    	a835146412 = ((((a835146412 * a1862658444) * -1) + -2188) + -409);
    	a1823597932 = 32 ;
    	a770071847 = ((((a770071847 * a1711061361) - 4245) / 5) - 20983);
    	a1711061361 = ((((a2147255888 * a807447096) + -14058) + 21162) - 11582);
    	a394986443 = (a1538778197 - -8);
    	a807447096 = (((((((a807447096 * a770071847) % 14999) % 14977) - 15021) - 2) / 5) - 7542);
    	a1538778197 = ((a1678927341 + a337942537) - 13); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a570886160 == 33 && (((a1917402140 == 3 && ((input == 75) &&  cf==1 )) && a785058364 == 11) && ((36 < a835146412) && (110 >= a835146412)))) && (((40 < a1189507312) && (188 >= a1189507312)) && ((-96 < a912673804) && (35 >= a912673804))))) {
    	cf = 0;
    	a1491071731 = 33 ;
    	a1610801558 = (((((a1862658444 * a1562022185) % 12) - 23) - -1) - 1);
    	a526854419 = 33 ;
    	a1562022185 = (((((a1562022185 * a2139432823) - 3373) % 75) + -37) - -1);
    	a1472462791 = 33 ;
    	a435971279 = (a394986443 - 2);
    	a1717386854 = 33 ;
    	a1409922970 = (a394986443 - -1);
    	a1541342791 = ((((a912673804 * a1189507312) - 6405) - 2515) / 5);
    	a1763171942 = 33 ;
    	a723108336 = ((((((((a847823400 * a1711061361) % 14999) % 73) + -44) * 5) * 5) % 73) + -44);
    	a1538778197 = (a2052893331 + -14);
    	a796195142 = 35 ;
    	a2147255888 = ((((((a2147255888 * a1711061361) % 14999) % 96) + 171) + 2441) + -2440);
    	a177640787 = (((((((a1862658444 * a1862658444) % 14999) - -10081) % 18) + -99) + -21692) - -21688); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if((((((-5 < a1711061361) && (114 >= a1711061361)) && a1678927341 == 10) && a976945745 == 2) && ((((-45 < a807447096) && (7 >= a807447096)) && (a871674684 == 4 && ((input == 110) &&  cf==1 ))) && a1917402140 == 3))) {
    	cf = 0;
    	a976945745 = ((a871674684 - a1538778197) + 1);
    	a1711061361 = (((((a1610801558 * a1562022185) % 58) + 173) - 29052) - -29051);
    	a526854419 = 34 ;
    	a2128522778 = 34 ;
    	a912673804 = (((((a1562022185 * a807447096) % 29) - -64) / 5) - -69);
    	a455265888 = (a1538778197 - -1);
    	a807447096 = (((((((a912673804 * a1711061361) % 105) + 102) + -62) * 5) % 105) - -60);
    	a1189507312 = (((((a177640787 * a912673804) % 39) - -249) - 15) + 18);
    	a847823400 = ((((((a847823400 * a835146412) % 14999) - 23189) % 24) + 384) - 9);
    	a169710014 = (((((a2147255888 * a1862658444) % 14999) + 11675) + -29354) * 1);
    	a369624711 = ((a455265888 + a1409922970) - 11);
    	a871550570 = 34 ;
    	a1293712589 = 34 ;
    	a42170353 = 34 ;
    	a570886160 = 34 ;
    	a1218693435 = 36 ;
    	a394986443 = (a304998879 + 7);
    	a2147255888 = ((((((a770071847 * a177640787) + -18170) + -11779) * 1) % 61) + 348);
    	a1917402140 = ((a815886759 * a337942537) + -6);
    	a1909685633 = 34 ;
    	a771824360 = ((a2052893331 - a1538778197) - 4);
    	a785058364 = ((a1678927341 + a337942537) + -3);
    	a796195142 = 36 ;
    	a815886759 = ((a2052893331 - a1538778197) - 11);
    	a770071847 = ((((((a177640787 * a1562022185) * 3) / 5) / 5) % 44) + -45);
    	a882589857 = (a337942537 - -6);
    	a1862658444 = (((((a1562022185 * a1562022185) + -16381) % 10) - -258) - -8);
    	a835146412 = (((((a723108336 * a723108336) * 2) + 468) % 71) + 140);
    	a337942537 = (a1538778197 + 4);
    	a1717386854 = 34 ;
    	a1823597932 = 34 ;
    	a2139432823 = (((((a1562022185 * a1610801558) % 101) - -145) + 0) * 1);
    	a1420843252 = 35 ;
    	a871674684 = (a2052893331 + -11);
    	a1562022185 = (((((a1562022185 * a1189507312) % 95) - -134) - 1) - 0); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm12(int input) {
    if(((((-96 < a912673804) && (35 >= a912673804)) && (a369624711 == 6 && (( cf==1  && a1409922970 == 8) && ((-120 < a177640787) && (-82 >= a177640787))))) && ((a455265888 == 2 && a1538778197 == 2) && ((74 < a2147255888) && (267 >= a2147255888))))) {
    	if((((((((-159 < a2139432823) && (44 >= a2139432823)) && (((-120 < a177640787) && (-82 >= a177640787)) && a394986443 == 11)) && a369624711 == 6) && a455265888 == 2) && a337942537 == 5) && ( cf==1  && a1351640013 == 36))) {
    		calculate_outputm118(input);
    	} 
    } 
    if((((a455265888 == 2 && ((( cf==1  && a1409922970 == 9) && ((-36 < a1610801558) && (-11 >= a1610801558))) && a882589857 == 10)) && a771824360 == 9) && (a1491071731 == 33 && a526854419 == 33))) {
    	if((((((36 < a835146412) && (110 >= a835146412)) && ((a390274319 == 32 &&  cf==1 ) && a1472462791 == 33)) && a1823597932 == 33) && (((-118 < a723108336) && (30 >= a723108336)) && (a871550570 == 33 && a1917402140 == 3)))) {
    		calculate_outputm119(input);
    	} 
    } 
    if(((a1917402140 == 3 && (((134 < a847823400) && (351 >= a847823400)) && (((-96 < a912673804) && (35 >= a912673804)) && a976945745 == 2))) && ((a1491071731 == 33 && (a1409922970 == 11 &&  cf==1 )) && ((-159 < a2139432823) && (44 >= a2139432823))))) {
    	if(((a304998879 == 5 && ((a570886160 == 33 && ( cf==1  && a682023469 == 8)) && a871674684 == 4)) && ((((40 < a1189507312) && (188 >= a1189507312)) && ((-36 < a1610801558) && (-11 >= a1610801558))) && ((134 < a847823400) && (351 >= a847823400))))) {
    		calculate_outputm120(input);
    	} 
    } 
    if(((((a42170353 == 33 && (a1409922970 == 12 &&  cf==1 )) && a1678927341 == 10) && a337942537 == 5) && (a1917402140 == 3 && (a2128522778 == 33 && ((-120 < a177640787) && (-82 >= a177640787)))))) {
    	if(((((((-137 < a770071847) && (-92 >= a770071847)) && (((40 < a1189507312) && (188 >= a1189507312)) && (a536820638 <=  -180 &&  cf==1 ))) && ((185 < a1862658444) && (245 >= a1862658444))) && a1678927341 == 10) && (((36 < a835146412) && (110 >= a835146412)) && ((-96 < a912673804) && (35 >= a912673804))))) {
    		calculate_outputm123(input);
    	} 
    	if((((((134 < a847823400) && (351 >= a847823400)) && a1491071731 == 33) && a871674684 == 4) && (a1678927341 == 10 && ((a785058364 == 11 && ( cf==1  && 156 < a536820638)) && a1909685633 == 33)))) {
    		calculate_outputm124(input);
    	} 
    } 
    if(((a871550570 == 33 && (((-137 < a770071847) && (-92 >= a770071847)) && ((-113 < a1562022185) && (38 >= a1562022185)))) && (a1140224045 == 33 && ((a455265888 == 2 && ( cf==1  && a1409922970 == 13)) && ((36 < a835146412) && (110 >= a835146412)))))) {
    	if((((a2128522778 == 33 && a455265888 == 2) && a337942537 == 5) && ((a304998879 == 5 && ((a1263839693 == 36 &&  cf==1 ) && a394986443 == 11)) && ((-36 < a1610801558) && (-11 >= a1610801558))))) {
    		calculate_outputm125(input);
    	} 
    } 
    if(((((( cf==1  && a1409922970 == 15) && a570886160 == 33) && a871550570 == 33) && a1538778197 == 2) && (a304998879 == 5 && (a882589857 == 10 && a1909685633 == 33)))) {
    	if(((a785058364 == 11 && (a1717386854 == 33 && (a1917402140 == 3 && (a394986443 == 11 && a337942537 == 5)))) && (a369624711 == 6 && (a566378298 == 35 &&  cf==1 )))) {
    		calculate_outputm129(input);
    	} 
    } 
}
 void calculate_outputm130(int input) {
    if((((-120 < a177640787) && (-82 >= a177640787)) && (((((((40 < a1189507312) && (188 >= a1189507312)) && ( cf==1  && (input == 98))) && ((-118 < a723108336) && (30 >= a723108336))) && a1140224045 == 33) && a1491071731 == 33) && a570886160 == 33))) {
    	cf = 0;
    	a1763171942 = 34 ;
    	a570886160 = 34 ;
    	a1232289479 = ((a785058364 + a1209080117) - 5);
    	a177640787 = (((((a177640787 * a2139432823) % 29) - 52) - -1) + -1);
    	a2034779655 = (((26 * 5) / -5) + -25504);
    	a1711061361 = ((((((a1711061361 * a807447096) / 5) - 1881) / 5) % 58) - -172); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm132(int input) {
    if(((((-45 < a807447096) && (7 >= a807447096)) && (((-96 < a912673804) && (35 >= a912673804)) && (a455265888 == 2 && (((-137 < a770071847) && (-92 >= a770071847)) && ( cf==1  && (input == 75)))))) && (((36 < a835146412) && (110 >= a835146412)) && a1763171942 == 33))) {
    	cf = 0;
    	a1717386854 = 34 ;
    	a815886759 = ((a871674684 + a1538778197) - 3);
    	a1610801558 = (((((a1610801558 * a1189507312) % 67) + 95) + -3) - 2);
    	a997347628 = ((((a723108336 * a1862658444) / 5) - 2403) + -6969);
    	a2052893331 = ((a882589857 + a1538778197) - 1);
    	a1189507312 = (((((((a1189507312 * a835146412) % 39) - -205) + 17) * 5) % 39) + 197);
    	a76578247 = ((((((a997347628 * a997347628) % 14999) + 14328) / 5) * 10) / -9);
    	a723108336 = (((((a723108336 * a1711061361) - -20891) + -14167) % 45) - -75); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } 
}
 void calculate_outputm134(int input) {
    if((((a1717386854 == 33 && a1293712589 == 33) && a526854419 == 33) && (((-36 < a1610801558) && (-11 >= a1610801558)) && (a1917402140 == 3 && (((input == 98) &&  cf==1 ) && ((134 < a847823400) && (351 >= a847823400))))))) {
    	cf = 0;
    	a1763171942 = 33 ;
    	a796195142 = 35 ;
    	a1541342791 = (((((a1711061361 * a2147255888) % 14999) + -14951) + -31) * 1);
    	a1717386854 = 33 ;
    	a1409922970 = ((a394986443 - a1917402140) - -4);
    	a723108336 = (((((a723108336 * a770071847) % 73) + -42) / 5) * 5);
    	a1610801558 = ((((((a1610801558 * a1711061361) + 2508) * 5) + 9478) % 12) + -31);
    	a2147255888 = ((((((a1711061361 * a847823400) % 14999) % 96) + 170) - 6782) - -6782);
    	a1472462791 = 33 ;
    	a1491071731 = 33 ;
    	a526854419 = 33 ;
    	a435971279 = (a1538778197 - -7);
    	a1562022185 = ((((((a847823400 * a2139432823) % 14999) / 5) % 75) - 37) + -1);
    	a177640787 = (((((((a1189507312 * a1541342791) % 14999) + 12538) / 5) / 5) % 18) + -99);
    	a1538778197 = ((a976945745 - a1409922970) - -12); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1472462791 == 33 && ((input == 111) &&  cf==1 )) && (a1661935098 == 33 && (((-96 < a912673804) && (35 >= a912673804)) && (a304998879 == 5 && (a1678927341 == 10 && a369624711 == 6)))))) {
    	cf = 0;
    	a796195142 = 36 ;
    	a169710014 = (((((a723108336 * a723108336) % 84) - -135) / 5) - -171);
    	a1871179310 = 36 ;
    	a960419217 = (a369624711 - -4); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm135(int input) {
    if((((a871674684 == 4 && (((-159 < a2139432823) && (44 >= a2139432823)) && ((input == 75) &&  cf==1 ))) && a1678927341 == 10) && (((-120 < a177640787) && (-82 >= a177640787)) && (a1491071731 == 33 && a394986443 == 11)))) {
    	cf = 0;
    	a847823400 = (((((a847823400 * a835146412) % 14999) - 16076) + -12301) * 1);
    	a2128522778 = 32 ;
    	a1491071731 = 32 ;
    	a785058364 = (a455265888 + 8);
    	a76578247 = ((((a76578247 / -5) + -1573) - 4339) + 13959); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((((-96 < a912673804) && (35 >= a912673804)) && (((-36 < a1610801558) && (-11 >= a1610801558)) && (a1293712589 == 33 && (a976945745 == 2 && a394986443 == 11)))) && (((input == 100) &&  cf==1 ) && a1472462791 == 33))) {
    	cf = 0;
    	a2029515987 = 36 ;
    	a1541342791 = ((((((a76578247 * a76578247) % 14999) % 81) - -394) * 5) / 5);
    	a796195142 = 35 ;
    	a1377897560 = (a2052893331 - 10); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm137(int input) {
    if(((((a42170353 == 33 && (a1678927341 == 10 && (a1538778197 == 2 && ((40 < a1189507312) && (188 >= a1189507312))))) && ((36 < a835146412) && (110 >= a835146412))) && a1823597932 == 33) && ( cf==1  && (input == 75)))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a912673804 = ((((((a912673804 * a177640787) / 5) % 65) - 29) + 20619) - 20620);
    	a369624711 = (a1232289479 - 4);
    	a526854419 = 33 ;
    	a536820638 = ((((a1862658444 * a835146412) * 1) / 5) * 5);
    	a1610801558 = ((((((a847823400 * a1562022185) % 14999) % 12) - 23) - -1) + -2);
    	a1189507312 = ((((((a1189507312 * a807447096) % 73) + 114) * 5) % 73) - -100);
    	a871550570 = 33 ;
    	a2139432823 = ((((((a2139432823 * a1711061361) + 233) % 101) - 56) - 25947) + 25946);
    	a2029515987 = 32 ;
    	a976945745 = (a1232289479 - 8);
    	a1541342791 = ((((((a76578247 * a536820638) % 14999) % 81) - -400) * 1) + -1);
    	a1140224045 = 33 ;
    	a1472462791 = 33 ;
    	a337942537 = (a785058364 + -7); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if(((((185 < a1862658444) && (245 >= a1862658444)) && ((input == 111) &&  cf==1 )) && ((((74 < a2147255888) && (267 >= a2147255888)) && ((a1678927341 == 10 && a394986443 == 11) && ((-5 < a1711061361) && (114 >= a1711061361)))) && a42170353 == 33))) {
    	cf = 0;
    	a882589857 = ((a1678927341 + a394986443) - 10);
    	a723108336 = (((((a177640787 * a1711061361) % 45) + 75) + 0) - 0);
    	a815886759 = (a882589857 - 8);
    	a1562022185 = (((((a2139432823 * a723108336) / 5) - -2786) % 95) + 133);
    	a770071847 = ((((a770071847 * a912673804) / 5) / 5) + -25747);
    	a2147255888 = (((((((a2147255888 * a723108336) % 14999) % 61) - -300) * 9) / 10) + -2);
    	a1842951122 = ((a771824360 - a455265888) - 1);
    	a304998879 = (a2052893331 - 11);
    	a1538778197 = (a394986443 + -8);
    	a1420843252 = 36 ;
    	a1711061361 = (((((a1189507312 * a1610801558) - 15731) % 59) - -55) / 5);
    	a871674684 = (a1232289479 - 5);
    	a1661935098 = 34 ;
    	a1293712589 = 34 ;
    	a871550570 = 34 ;
    	a526854419 = 34 ;
    	a785058364 = ((a455265888 / a394986443) + 12);
    	a177640787 = (((((a912673804 * a1610801558) - 2126) + -9299) * 10) / 9);
    	a976945745 = (a394986443 - 8);
    	a1717386854 = 34 ;
    	a807447096 = ((((((a1189507312 * a1189507312) % 14999) + -7522) % 25) + -18) + 1);
    	a796195142 = 36 ;
    	a570886160 = 34 ;
    	a1678927341 = ((a871674684 / a304998879) - -9);
    	a1862658444 = (((((((a1862658444 * a723108336) % 10) + 248) - -1) / 5) * 51) / 10);
    	a1823597932 = 34 ;
    	a337942537 = ((a369624711 - a394986443) + 9);
    	a455265888 = (a394986443 + -8);
    	a2128522778 = 34 ;
    	a169710014 = ((((a76578247 * a76578247) - 21823) * 1) * 1);
    	a2139432823 = (((((a2139432823 * a835146412) / 5) + -2611) + 7902) + -24841);
    	a1763171942 = 32 ;
    	a1917402140 = (a369624711 + -2);
    	a42170353 = 32 ;
    	a771824360 = (a815886759 + 7);
    	a1491071731 = 32 ;
    	a835146412 = (((((a1610801558 * a1610801558) % 36) - -74) - 2) * 1);
    	a1909685633 = 34 ;
    	a912673804 = ((((((a912673804 * a847823400) % 14999) % 14952) - 15047) / 5) + -13624);
    	a1140224045 = 34 ;
    	a847823400 = (((((((a847823400 * a1610801558) % 14999) % 24) - -376) + -1) / 5) + 294);
    	a394986443 = ((a976945745 + a1917402140) - -5);
    	a1189507312 = ((((a1189507312 * a723108336) * 1) * -1) / 5);
    	a369624711 = ((a882589857 / a882589857) - -6); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a976945745 == 2 && (a882589857 == 10 && ((36 < a835146412) && (110 >= a835146412)))) && ((a394986443 == 11 && (a1823597932 == 33 && ( cf==1  && (input == 113)))) && a815886759 == 2))) {
    	cf = 0;
    	a2074917498 = (a1917402140 + 5);
    	a1140224045 = 33 ;
    	a835146412 = ((((((a835146412 * a177640787) % 71) + 252) + 1) + 22143) + -22182);
    	a1823597932 = 34 ;
    	a1491071731 = 34 ;
    	a1717386854 = 32 ;
    	a847823400 = (((((((a847823400 * a912673804) % 14999) + -277) % 108) + 243) - 25938) - -25937);
    	a796195142 = 34 ;
    	a15249890 = ((((a76578247 * a76578247) + 21133) + 684) - 3208);
    	a42170353 = 34 ;
    	a1472462791 = 33 ;
    	a1562022185 = ((((((a770071847 * a2147255888) % 14999) / 5) % 95) - -133) - -2);
    	a369624711 = (a2074917498 + -1);
    	a2128522778 = 34 ;
    	a1909685633 = 34 ;
    	a526854419 = 34 ;
    	a491168833 = ((a304998879 + a394986443) + -5);
    	a1917402140 = ((a976945745 - a369624711) - -9);
    	a337942537 = ((a1538778197 / a491168833) - -5);
    	a1678927341 = ((a2074917498 * a2074917498) + -53);
    	a807447096 = (((((a1862658444 * a1711061361) + 1155) % 105) + 54) / 5);
    	a455265888 = ((a1232289479 * a369624711) + -67);
    	a785058364 = (a2074917498 - -4);
    	a771824360 = ((a815886759 + a455265888) + 5);
    	a1661935098 = 34 ;
    	a871550570 = 34 ;
    	a570886160 = 34 ;
    	a770071847 = ((((((a770071847 * a2139432823) % 22) + -114) + -25505) / 5) - -5000);
    	a177640787 = (((((((a177640787 * a15249890) % 14999) - 14977) % 29) - 25) * 10) / 9);
    	a394986443 = ((a2074917498 / a2074917498) - -9);
    	a1189507312 = (((((a1189507312 * a1610801558) + -1354) - -2167) % 39) + 228);
    	a882589857 = ((a871674684 * a976945745) + 3);
    	a304998879 = (a2074917498 - 2);
    	a723108336 = (((((a1711061361 * a1711061361) + 12482) % 45) - -60) + -12);
    	a2139432823 = (((((a835146412 * a912673804) % 14920) + -15078) * 1) * 1);
    	a1538778197 = ((a976945745 * a455265888) + -3);
    	a1711061361 = (((((a1562022185 * a912673804) % 59) + 54) + 2) / 5);
    	a1293712589 = 34 ;
    	a1862658444 = ((((((((a1862658444 * a835146412) % 14999) % 10) + 250) * 1) * 5) % 10) - -248);
    	a871674684 = ((a2052893331 - a491168833) - 2);
    	a1763171942 = 34 ;
    	a976945745 = (a2052893331 - 14);
    	a2147255888 = (((((a2147255888 * a912673804) + -1134) + -3413) % 96) + 171);
    	a912673804 = (((((a912673804 * a1562022185) - 4061) % 65) - 30) - 1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((134 < a847823400) && (351 >= a847823400)) && ( cf==1  && (input == 110))) && a1293712589 == 33) && a815886759 == 2) && ((a526854419 == 33 && a369624711 == 6) && a871674684 == 4))) {
    	cf = 0;
    	a882589857 = (a1232289479 + 1);
    	a2128522778 = 34 ;
    	a1842951122 = a369624711;
    	a1189507312 = ((((a1189507312 * a912673804) / 5) - 17066) * 1);
    	a847823400 = (((((((a847823400 * a2139432823) % 14999) % 24) - -375) * 5) % 24) - -363);
    	a570886160 = 34 ;
    	a1909685633 = 34 ;
    	a1562022185 = ((((((a76578247 * a770071847) / 5) % 95) - -48) - 24301) + 24303);
    	a455265888 = ((a1678927341 * a882589857) - 107);
    	a1538778197 = (a1232289479 - 7);
    	a337942537 = (a1538778197 - -1);
    	a771824360 = ((a1538778197 + a455265888) + 4);
    	a2147255888 = (((((((a2147255888 * a1562022185) % 14999) - -14232) % 61) - -303) - 2755) - -2760);
    	a42170353 = 32 ;
    	a1661935098 = 34 ;
    	a770071847 = ((((a177640787 * a2139432823) - -3759) * 1) - 25825);
    	a796195142 = 36 ;
    	a169710014 = ((((a76578247 * a76578247) - -9883) - 38248) / 5);
    	a1293712589 = 34 ;
    	a1717386854 = 34 ;
    	a1420843252 = 36 ;
    	a1678927341 = ((a1232289479 / a1232289479) + 8);
    	a304998879 = ((a1232289479 - a455265888) + -1);
    	a369624711 = (a882589857 - 4);
    	a835146412 = (((((a835146412 * a1711061361) / 5) % 36) - -72) + 3);
    	a1823597932 = 34 ;
    	a1140224045 = 34 ;
    	a807447096 = (((((a1711061361 * a1711061361) * 2) - -1145) % 25) + -28);
    	a871674684 = (a2052893331 / a1917402140);
    	a1763171942 = 32 ;
    	a2139432823 = ((((a2139432823 * a912673804) - -3695) - 22985) - 1736);
    	a785058364 = ((a882589857 * a882589857) - 109);
    	a723108336 = (((((((a847823400 * a177640787) % 14999) - 7101) % 45) - -87) * 9) / 10);
    	a815886759 = a1917402140;
    	a394986443 = ((a1917402140 - a785058364) - -21);
    	a526854419 = 34 ;
    	a1491071731 = 32 ;
    	a976945745 = (a1232289479 - 7);
    	a177640787 = (((((a1711061361 * a1711061361) - 6110) / 5) * 5) + -15993);
    	a871550570 = 34 ;
    	a1862658444 = (((((((a1862658444 * a1610801558) % 14999) + -12341) + -376) * 1) % 10) + 255);
    	a1917402140 = ((a882589857 / a882589857) - -3);
    	a912673804 = ((((((a912673804 * a2147255888) % 14999) * 2) % 14952) + -15047) * 1);
    	a1711061361 = (((((a1711061361 + 1270) % 59) - -18) - -6519) - 6503); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm138(int input) {
    if(((a570886160 == 33 && (a871550570 == 33 && a1293712589 == 33)) && (((-113 < a1562022185) && (38 >= a1562022185)) && ((( cf==1  && (input == 79)) && a526854419 == 33) && ((-137 < a770071847) && (-92 >= a770071847)))))) {
    	cf = 0;
    	a1661935098 = 33 ;
    	a835146412 = ((((a835146412 * a912673804) - 14739) - 4768) / 5);
    	a796195142 = 32 ;
    	a976902422 = (((((((a76578247 * a76578247) % 14999) - -4896) % 14910) + -15088) - -29831) - 29832);
    	a1678927341 = (a369624711 - -3);
    	a2139432823 = ((((a2139432823 * a1562022185) - 9102) + -14226) - 424);
    	a42170353 = 32 ;
    	a1610801558 = ((((((a1711061361 * a1189507312) % 14999) % 14982) + -15017) - 1) * 1);
    	a304998879 = a871674684;
    	a1293712589 = 32 ;
    	a807447096 = (((((((a2147255888 * a1711061361) % 14999) - -26386) * 1) - 39906) % 25) - 19);
    	a394986443 = (a2052893331 - 7);
    	a177640787 = (((((a177640787 * a1610801558) % 14999) + -3454) + -24641) - 1495);
    	a815886759 = (a1678927341 - 8);
    	a526854419 = 33 ;
    	a912673804 = ((((a912673804 * a1562022185) * 2) - 22062) + -51);
    	a871550570 = 33 ;
    	a1472462791 = 32 ;
    	a1909685633 = 32 ;
    	a871674684 = (a1678927341 - 5);
    	a770071847 = ((((a770071847 * a723108336) - 22761) / 5) * 5);
    	a1917402140 = ((a1232289479 * a771824360) + -88);
    	a1611619350 = 33 ;
    	a976945745 = ((a1538778197 + a1917402140) - 2);
    	a570886160 = 32 ;
    	a723108336 = ((((((a723108336 * a1862658444) % 73) + -42) + 9454) + -21452) - -11996);
    	a491168833 = ((a455265888 / a771824360) + 7);
    	a455265888 = (a882589857 + -8);
    	a1140224045 = 32 ;
    	a1862658444 = (((((((a1862658444 * a2147255888) % 14999) - -10706) - 5270) / 5) % 29) - -195);
    	a1562022185 = (((((a1562022185 * a2147255888) * 1) % 14943) - 15055) * 1);
    	a771824360 = (a1538778197 - -7);
    	a369624711 = ((a304998879 / a785058364) - -6);
    	a2147255888 = (((((a2147255888 * a847823400) % 14999) + -13906) - 1066) + -13); 
    	 printf("");//printf("%d\n", 124); fflush(stdout); 
    } if(((a455265888 == 2 && ((-137 < a770071847) && (-92 >= a770071847))) && (a1917402140 == 3 && (((a1678927341 == 10 && ( cf==1  && (input == 71))) && a1140224045 == 33) && a976945745 == 2)))) {
    	cf = 0;
    	a1110504460 = (a369624711 - -3);
    	a597484636 = 36 ;
    	a2052893331 = (a455265888 - -8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((a1140224045 == 33 && ( cf==1  && (input == 75))) && ((74 < a2147255888) && (267 >= a2147255888))) && (a976945745 == 2 && ((a42170353 == 33 && ((185 < a1862658444) && (245 >= a1862658444))) && a1472462791 == 33)))) {
    	cf = 0;
    	a1611619350 = 34 ;
    	a15249890 = (((((((a76578247 * a1610801558) % 14999) % 55) + 211) * 5) % 55) - -210);
    	a796195142 = 34 ;
    	a1147553654 = ((((((((a15249890 * a723108336) % 14999) % 109) - -413) * 5) * 5) % 109) + 307); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm141(int input) {
    if(((a304998879 == 5 && (((((-45 < a807447096) && (7 >= a807447096)) && ((-137 < a770071847) && (-92 >= a770071847))) && a976945745 == 2) && a526854419 == 33)) && (((input == 111) &&  cf==1 ) && a882589857 == 10))) {
    	cf = 0;
    	a1140224045 = 34 ;
    	a871674684 = (a1232289479 - 9);
    	a847823400 = ((((((((a1562022185 * a1562022185) % 14999) % 24) + 368) + -8768) * 3) % 24) + 390);
    	a369624711 = (a394986443 + -4);
    	a2128522778 = 33 ;
    	a169710014 = ((((((a2034779655 * a2034779655) % 14999) + 6942) + 4363) % 14842) + 15157);
    	a770071847 = ((((((a770071847 * a912673804) * 2) * 1) * 1) % 44) - 47);
    	a807447096 = ((((((a807447096 * a835146412) % 105) - -112) - 4039) - 4643) + 8682);
    	a771824360 = ((a337942537 - a2052893331) - -21);
    	a1909685633 = 34 ;
    	a1763171942 = 34 ;
    	a1472462791 = 33 ;
    	a1917402140 = ((a815886759 / a1678927341) - -4);
    	a815886759 = ((a976945745 + a369624711) - 6);
    	a1293712589 = 34 ;
    	a882589857 = ((a871674684 + a1678927341) + -4);
    	a2147255888 = ((((((a2147255888 * a1711061361) % 14999) + 12327) - -1599) % 61) - -317);
    	a976945745 = (a1917402140 - 2);
    	a526854419 = 34 ;
    	a304998879 = (a337942537 + 1);
    	a1491071731 = 34 ;
    	a1678927341 = ((a369624711 * a785058364) + -67);
    	a1420843252 = 36 ;
    	a723108336 = ((((((a723108336 * a770071847) % 45) - -75) + 2) + 23272) - 23272);
    	a1823597932 = 33 ;
    	a1610801558 = ((((((a1610801558 * a1189507312) % 12) + -19) / 5) * 49) / 10);
    	a1717386854 = 34 ;
    	a912673804 = (((((((a1711061361 * a1189507312) % 14999) % 65) - 66) - -14335) / 5) - 2863);
    	a394986443 = (a337942537 - -6);
    	a796195142 = 36 ;
    	a1661935098 = 33 ;
    	a1538778197 = (a369624711 - 4);
    	a807046857 = (a337942537 - -1);
    	a835146412 = (((((((a835146412 * a1562022185) % 36) + 73) + -1243) / 5) * -2) / 10);
    	a1189507312 = (((((((a1189507312 * a2034779655) % 14999) - 2138) / 5) - -11326) % 39) + 212);
    	a871550570 = 33 ;
    	a2139432823 = ((((((a2139432823 * a169710014) % 14999) + 1070) - 15247) % 101) - 57);
    	a337942537 = ((a455265888 / a785058364) + 5);
    	a42170353 = 33 ;
    	a785058364 = ((a455265888 / a369624711) + 11); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((((( cf==1  && (input == 113)) && a1293712589 == 33) && a1491071731 == 33) && a1717386854 == 33) && (((-118 < a723108336) && (30 >= a723108336)) && (((40 < a1189507312) && (188 >= a1189507312)) && ((-159 < a2139432823) && (44 >= a2139432823)))))) {
    	cf = 0;
    	a1717386854 = 34 ;
    	a169710014 = ((((a807447096 * a770071847) - -1446) - -19155) * 1);
    	a1140224045 = 34 ;
    	a807046857 = ((a815886759 / a369624711) - -6);
    	a847823400 = ((((((a169710014 * a169710014) % 14999) - 20121) - -33647) % 24) + 363);
    	a871674684 = (a882589857 + -5);
    	a1293712589 = 34 ;
    	a2147255888 = ((((((a2147255888 * a169710014) % 14999) / 5) % 61) - -294) + 19);
    	a1909685633 = 34 ;
    	a1823597932 = 33 ;
    	a1917402140 = (a871674684 - 1);
    	a2128522778 = 33 ;
    	a1472462791 = 33 ;
    	a912673804 = (((((a912673804 * a1562022185) % 65) - 30) + -4324) - -4323);
    	a807447096 = ((((((a770071847 * a1562022185) % 14999) % 105) - -112) + 1) + -1);
    	a304998879 = ((a771824360 + a785058364) - 14);
    	a835146412 = ((((((a835146412 * a807447096) / 5) - -15909) * 1) % 36) + 72);
    	a815886759 = ((a2052893331 * a455265888) - 48);
    	a771824360 = ((a304998879 * a1678927341) - 51);
    	a1189507312 = (((((a1189507312 * a2139432823) % 39) + 228) - -1) + -1);
    	a1420843252 = 36 ;
    	a337942537 = (a394986443 - 6);
    	a723108336 = (((((((a723108336 * a770071847) % 45) - -76) * 5) + -23352) % 45) - -94);
    	a1491071731 = 34 ;
    	a976945745 = (a815886759 - 1);
    	a42170353 = 33 ;
    	a796195142 = 36 ;
    	a785058364 = (a871674684 + 6);
    	a1661935098 = 33 ;
    	a1763171942 = 34 ;
    	a526854419 = 34 ;
    	a2139432823 = (((((((a169710014 * a177640787) % 14999) % 101) + -56) + -1) + -8233) - -8232);
    	a871550570 = 33 ;
    	a369624711 = ((a394986443 + a807046857) + -10);
    	a882589857 = (a304998879 + 5);
    	a770071847 = (((((a770071847 * a1610801558) % 44) + -68) + -17) - -3);
    	a1610801558 = (((((a1610801558 * a723108336) % 12) - 20) - 26793) - -26792);
    	a1538778197 = a455265888;
    	a1678927341 = ((a455265888 - a807046857) + 13);
    	a394986443 = (a807046857 + a871674684); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a976945745 == 2 && ( cf==1  && (input == 110))) && (a394986443 == 11 && (((a526854419 == 33 && a1823597932 == 33) && a785058364 == 11) && a1538778197 == 2)))) {
    	cf = 0;
    	a337942537 = ((a976945745 * a785058364) - 17);
    	a807046857 = (a771824360 - 3);
    	a304998879 = a807046857;
    	a169710014 = (((((((a2034779655 * a2034779655) % 14999) - 3852) - 6427) - 3723) % 14842) - -15157);
    	a1610801558 = ((((((a1610801558 * a2139432823) % 12) - 22) * 5) % 12) + -17);
    	a882589857 = ((a1678927341 / a304998879) + 10);
    	a1717386854 = 34 ;
    	a2128522778 = 33 ;
    	a2147255888 = (((((((a2147255888 * a1711061361) % 14999) % 61) - -315) - -29050) / 5) - 5563);
    	a770071847 = ((((((a770071847 * a1562022185) % 14999) % 44) + -46) + -2) - 0);
    	a1661935098 = 33 ;
    	a1293712589 = 34 ;
    	a871674684 = (a1538778197 + 3);
    	a785058364 = (a2052893331 - 6);
    	a871550570 = 33 ;
    	a807447096 = ((((((a807447096 * a723108336) % 105) + 112) + 0) - -25824) - 25823);
    	a815886759 = (a369624711 - 3);
    	a1909685633 = 34 ;
    	a1763171942 = 34 ;
    	a835146412 = (((((((a835146412 * a912673804) - 14373) % 36) - -97) / 5) * 39) / 10);
    	a1472462791 = 33 ;
    	a1189507312 = (((((a1189507312 * a723108336) * 1) / 5) % 39) + 227);
    	a526854419 = 34 ;
    	a1140224045 = 34 ;
    	a369624711 = ((a1917402140 * a1678927341) + -23);
    	a723108336 = (((((a723108336 * a2139432823) * 1) + -16470) % 45) + 75);
    	a1491071731 = 34 ;
    	a771824360 = (a394986443 + -2);
    	a1917402140 = (a976945745 + 2);
    	a796195142 = 36 ;
    	a1538778197 = a455265888;
    	a42170353 = 33 ;
    	a847823400 = ((((((a2139432823 * a2139432823) % 24) - -375) * 5) % 24) + 357);
    	a912673804 = ((((((a2034779655 * a1711061361) % 14999) - -8516) - -521) % 65) + -29);
    	a1823597932 = 33 ;
    	a1420843252 = 36 ;
    	a1678927341 = (a1232289479 - 4);
    	a394986443 = ((a976945745 + a976945745) - -7);
    	a976945745 = (a304998879 - 4);
    	a2139432823 = (((((a2139432823 * a177640787) % 101) - 57) * 5) / 5); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a771824360 == 9 && (((input == 57) &&  cf==1 ) && ((74 < a2147255888) && (267 >= a2147255888)))) && (((-36 < a1610801558) && (-11 >= a1610801558)) && (a1140224045 == 33 && (a526854419 == 33 && a1678927341 == 10))))) {
    	cf = 0;
    	a1917402140 = ((a871674684 + a976945745) - 2);
    	a1610801558 = ((((((a1610801558 * a1189507312) + -12149) * 1) + 10735) % 67) - -106);
    	a177640787 = ((((((a835146412 * a1610801558) * 2) % 29) + -51) - 8183) - -8182);
    	a2128522778 = 34 ;
    	a1862658444 = ((((((a1610801558 * a1562022185) % 10) + 255) - 0) + -10702) + 10703);
    	a169710014 = (((((((a2034779655 * a2034779655) % 14999) * 2) * 1) + 0) % 15025) + -14973);
    	a1491071731 = 34 ;
    	a1711061361 = ((((((a1610801558 * a1610801558) % 58) - -173) - -1) / 5) - -153);
    	a1472462791 = 34 ;
    	a1717386854 = 34 ;
    	a1538778197 = ((a871674684 / a1678927341) + 3);
    	a723108336 = ((((((a723108336 * a1562022185) / 5) * 5) * 1) % 45) - -76);
    	a815886759 = ((a394986443 + a394986443) - 19);
    	a796195142 = 36 ;
    	a1405419384 = (a2052893331 - 5);
    	a1909685633 = 34 ;
    	a394986443 = (a369624711 + 6);
    	a1420843252 = 34 ;
    	a882589857 = (a1232289479 + -3);
    	a42170353 = 34 ;
    	a526854419 = 34 ;
    	a2139432823 = (((((((a2139432823 * a847823400) % 14999) % 101) + 146) * 5) % 101) - -128);
    	a771824360 = ((a1917402140 * a871674684) - 6);
    	a807447096 = ((((((a807447096 * a912673804) + 4853) % 105) - -73) + -3855) - -3854);
    	a337942537 = (a871674684 + 2);
    	a770071847 = ((((((a770071847 * a1189507312) * 1) % 44) + -9) - 18697) - -18673);
    	a304998879 = (a1678927341 - 4);
    	a2147255888 = (((((a2147255888 * a912673804) / 5) / 5) % 61) + 330);
    	a1823597932 = 34 ;
    	a912673804 = (((((a1610801558 * a1610801558) / 5) * 5) % 29) + 66);
    	a1293712589 = 34 ;
    	a871674684 = (a1678927341 - 5);
    	a1140224045 = 34 ;
    	a1189507312 = (((((a1562022185 * a1610801558) / 5) - -13194) % 39) + 205);
    	a976945745 = ((a785058364 * a1917402140) - 41); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } 
}
 void calculate_outputm13(int input) {
    if(((a1717386854 == 33 && (((36 < a835146412) && (110 >= a835146412)) && ((a1232289479 == 7 &&  cf==1 ) && ((40 < a1189507312) && (188 >= a1189507312))))) && ((a1763171942 == 33 && ((74 < a2147255888) && (267 >= a2147255888))) && ((-45 < a807447096) && (7 >= a807447096))))) {
    	if(((((36 < a835146412) && (110 >= a835146412)) && (( cf==1  && a1209080117 == 8) && a42170353 == 33)) && (a1678927341 == 10 && (((-5 < a1711061361) && (114 >= a1711061361)) && (a337942537 == 5 && a1293712589 == 33))))) {
    		calculate_outputm130(input);
    	} 
    	if(((a1538778197 == 2 && (a871674684 == 4 && (a815886759 == 2 && ( cf==1  && a1209080117 == 13)))) && ((a304998879 == 5 && a394986443 == 11) && ((-36 < a1610801558) && (-11 >= a1610801558))))) {
    		calculate_outputm132(input);
    	} 
    } 
    if(((((74 < a2147255888) && (267 >= a2147255888)) && (a1538778197 == 2 && (a1232289479 == 9 &&  cf==1 ))) && (((-137 < a770071847) && (-92 >= a770071847)) && ((a1763171942 == 33 && a1917402140 == 3) && a976945745 == 2)))) {
    	if(((a1538778197 == 2 && (a976945745 == 2 && (a1472462791 == 33 && ((131 < a1228745271 &&  cf==1 ) && a1917402140 == 3)))) && (((-36 < a1610801558) && (-11 >= a1610801558)) && ((-96 < a912673804) && (35 >= a912673804))))) {
    		calculate_outputm134(input);
    	} 
    } 
    if((((a1140224045 == 33 && (a815886759 == 2 && a1909685633 == 33)) && ((-159 < a2139432823) && (44 >= a2139432823))) && (a871550570 == 33 && (((-120 < a177640787) && (-82 >= a177640787)) && ( cf==1  && a1232289479 == 10))))) {
    	if(((a785058364 == 11 && ((((134 < a847823400) && (351 >= a847823400)) && ((-36 < a1610801558) && (-11 >= a1610801558))) && ((-96 < a912673804) && (35 >= a912673804)))) && ((((-120 < a177640787) && (-82 >= a177640787)) && (a76578247 <=  -134 &&  cf==1 )) && a2128522778 == 33))) {
    		calculate_outputm135(input);
    	} 
    	if((((((40 < a1189507312) && (188 >= a1189507312)) && (((-89 < a76578247) && (-44 >= a76578247)) &&  cf==1 )) && a1293712589 == 33) && ((a1909685633 == 33 && (((74 < a2147255888) && (267 >= a2147255888)) && a1661935098 == 33)) && a304998879 == 5))) {
    		calculate_outputm137(input);
    	} 
    	if(((a1472462791 == 33 && (((-120 < a177640787) && (-82 >= a177640787)) && ((-96 < a912673804) && (35 >= a912673804)))) && ((((-113 < a1562022185) && (38 >= a1562022185)) && (( cf==1  && -44 < a76578247) && a304998879 == 5)) && ((-137 < a770071847) && (-92 >= a770071847))))) {
    		calculate_outputm138(input);
    	} 
    } 
    if((( cf==1  && a1232289479 == 14) && (a771824360 == 9 && ((((a815886759 == 2 && a1917402140 == 3) && a976945745 == 2) && a42170353 == 33) && a871674684 == 4)))) {
    	if((((a2128522778 == 33 && a871550570 == 33) && ((36 < a835146412) && (110 >= a835146412))) && (a1472462791 == 33 && (((-36 < a1610801558) && (-11 >= a1610801558)) && ((a2034779655 <=  50 &&  cf==1 ) && a976945745 == 2))))) {
    		calculate_outputm141(input);
    	} 
    } 
}
 void calculate_outputm145(int input) {
    if(((a1909685633 == 34 && (((351 < a847823400) && (400 >= a847823400)) && (((-92 < a770071847) && (-2 >= a770071847)) && a455265888 == 3))) && (((188 < a1189507312) && (267 >= a1189507312)) && (((input == 79) &&  cf==1 ) && a42170353 == 34)))) {
    	cf = 0;
    	a2128522778 = 32 ;
    	a1293712589 = 32 ;
    	a309620346 = (a337942537 + 1);
    	a723108336 = ((((a723108336 * a807447096) + -27579) - 220) * 1);
    	a2147255888 = (((((a2147255888 * a1862658444) % 14999) - 24125) * 1) + -5348);
    	a2139432823 = (((((a2139432823 * a15249890) % 14999) * 2) / 5) - 6768);
    	a976945745 = (a1917402140 + -3);
    	a1610801558 = (((((((a1610801558 * a2139432823) % 14999) % 14982) - 15017) + 8306) * 1) + -8307);
    	a1649499722 = (a1584925463 - -5);
    	a337942537 = ((a871674684 * a1649499722) - 32);
    	a1562022185 = (((((a1562022185 * a847823400) % 14999) / 5) - 3739) - 25567);
    	a912673804 = ((((((a912673804 * a1711061361) * -1) / 10) * 5) * 10) / 9);
    	a394986443 = ((a1538778197 - a1584925463) + 16);
    	a1862658444 = (((((((a1862658444 * a835146412) % 14999) - 24366) * 10) / 9) - -13717) - 15517);
    	a835146412 = ((((((a835146412 * a177640787) % 14999) + -5485) + -6218) * 10) / 9);
    	a796195142 = 32 ;
    	a1611619350 = 35 ;
    	a1909685633 = 32 ;
    	a1189507312 = (((((a1189507312 * a15249890) % 14999) + -5028) * 1) - 9934);
    	a42170353 = 32 ;
    	a771824360 = (a309620346 + 1); 
    	 printf("");//printf("%d\n", 119); fflush(stdout); 
    } if(((((30 < a723108336) && (121 >= a723108336)) && (( cf==1  && (input == 106)) && ((110 < a835146412) && (253 >= a835146412)))) && (a976945745 == 3 && (a394986443 == 12 && (a871550570 == 34 && ((267 < a2147255888) && (391 >= a2147255888))))))) {
    	cf = 0;
    	a2052893331 = (a337942537 - -9);
    	a796195142 = 33 ;
    	a1143554178 = (((((((a1862658444 * a2147255888) % 14999) - 20509) - -1875) * 1) % 70) + 386);
    	a1817778538 = ((a785058364 / a1917402140) + 8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm146(int input) {
    if(((a526854419 == 34 && (((30 < a723108336) && (121 >= a723108336)) && a1140224045 == 34)) && ((((35 < a912673804) && (95 >= a912673804)) && (a1472462791 == 34 && ( cf==1  && (input == 79)))) && a1661935098 == 34))) {
    	cf = 0;
    	a1763171942 = 33 ;
    	a455265888 = ((a785058364 + a1917402140) + -13);
    	a1472462791 = 33 ;
    	a1917402140 = ((a304998879 / a785058364) + 3);
    	a1909685633 = 33 ;
    	a1562022185 = ((((((a807447096 * a807447096) % 14999) / 5) / 5) % 75) - 65);
    	a15249890 = (((((a15249890 - 0) - -25068) + -9562) % 14838) - -15161);
    	a835146412 = ((((((a1562022185 * a723108336) + -16213) + 25448) - -2051) % 36) + 72);
    	a1661935098 = 33 ;
    	a871674684 = (a304998879 - 1);
    	a1140224045 = 33 ;
    	a337942537 = ((a455265888 * a815886759) - -1);
    	a2052893331 = (a1538778197 - -11);
    	a770071847 = (((((a835146412 * a177640787) / 5) % 22) + -94) - -2);
    	a871550570 = 33 ;
    	a369624711 = (a871674684 + 2);
    	a774885508 = (a882589857 + -8);
    	a526854419 = 33 ;
    	a1189507312 = (((((((a1189507312 * a1610801558) % 14999) % 73) - -114) + -10721) + 26609) - 15887);
    	a1862658444 = ((((((a1862658444 * a770071847) % 14999) % 29) - -215) + -3269) + 3268);
    	a771824360 = (a2052893331 - 5);
    	a1538778197 = (a976945745 - 1);
    	a1711061361 = (((((a1711061361 * a723108336) % 59) + -4) + 6220) - 6189);
    	a723108336 = ((((((a2139432823 * a912673804) % 73) + -44) + -1) - -11710) - 11709);
    	a912673804 = ((((((a912673804 * a2147255888) % 65) + -42) * 5) % 65) - 30);
    	a1293712589 = 33 ;
    	a1610801558 = (((((((a1610801558 * a847823400) % 14999) % 12) - 23) + 26003) - 544) - 25458);
    	a796195142 = 33 ;
    	a847823400 = ((((((a847823400 * a2139432823) % 14999) % 108) - -242) + 3261) - 3260); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } 
}
 void calculate_outputm14(int input) {
    if(((( cf==1  && a905282705 == 34) && a1717386854 == 34) && ((((a1909685633 == 34 && ((44 < a2139432823) && (247 >= a2139432823))) && a871550570 == 34) && a337942537 == 6) && a526854419 == 34))) {
    	if(((((38 < a1562022185) && (229 >= a1562022185)) && ((188 < a1189507312) && (267 >= a1189507312))) && (((((114 < a1711061361) && (231 >= a1711061361)) && (a526854419 == 34 && ( cf==1  && a1584925463 == 7))) && a2128522778 == 34) && ((35 < a912673804) && (95 >= a912673804))))) {
    		calculate_outputm145(input);
    	} 
    } 
    if(((a871550570 == 34 && ((((110 < a835146412) && (253 >= a835146412)) && a337942537 == 6) && ((114 < a1711061361) && (231 >= a1711061361)))) && (a1763171942 == 34 && (((-92 < a770071847) && (-2 >= a770071847)) && ( cf==1  && a905282705 == 35))))) {
    	if(((a369624711 == 7 && ((a1378621586 == 33 &&  cf==1 ) && a871674684 == 5)) && (a771824360 == 10 && ((((245 < a1862658444) && (266 >= a1862658444)) && a1661935098 == 34) && ((188 < a1189507312) && (267 >= a1189507312)))))) {
    		calculate_outputm146(input);
    	} 
    } 
}
 void calculate_outputm148(int input) {
    if((((((267 < a2147255888) && (391 >= a2147255888)) && a1917402140 == 4) && a882589857 == 11) && (a1293712589 == 34 && ((((-82 < a177640787) && (-22 >= a177640787)) && ( cf==1  && (input == 75))) && a369624711 == 7)))) {
    	cf = 0;
    	a369624711 = (a882589857 + -6);
    	a2147255888 = (((((a2147255888 * a1147553654) % 14999) + -19818) * 1) + -1490);
    	a169710014 = ((((((((a835146412 * a1711061361) % 14999) % 84) - -67) * 9) / 10) * 10) / 9);
    	a2139432823 = (((((a2139432823 * a1562022185) % 14999) + 11722) + -41660) + -10);
    	a1917402140 = ((a1678927341 + a771824360) - 19);
    	a1472462791 = 32 ;
    	a1871179310 = 34 ;
    	a1429598563 = 35 ;
    	a796195142 = 36 ;
    	a177640787 = ((((((a177640787 * a847823400) % 14999) - -29955) / 5) * 5) + -37664); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm150(int input) {
    if((((((-92 < a770071847) && (-2 >= a770071847)) && a1293712589 == 34) && a785058364 == 12) && ((a1678927341 == 11 && (a871674684 == 5 && ((input == 57) &&  cf==1 ))) && ((7 < a807447096) && (218 >= a807447096))))) {
    	cf = 0;
    	a1420843252 = 34 ;
    	a796195142 = 36 ;
    	a1110504460 = (a785058364 - 9); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm15(int input) {
    if(((((114 < a1711061361) && (231 >= a1711061361)) && (a1538778197 == 3 && (((145 < a1147553654) && (303 >= a1147553654)) &&  cf==1 ))) && (a2128522778 == 34 && ((a526854419 == 34 && a1472462791 == 34) && a771824360 == 10)))) {
    	if((((a1763171942 == 34 && ((38 < a1562022185) && (229 >= a1562022185))) && a882589857 == 11) && (a1491071731 == 34 && ((a815886759 == 3 && ( cf==1  && ((63 < a1921018930) && (245 >= a1921018930)))) && a1538778197 == 3)))) {
    		calculate_outputm148(input);
    	} 
    } 
    if(((a1678927341 == 11 && ((((114 < a1711061361) && (231 >= a1711061361)) && a1661935098 == 34) && ((110 < a835146412) && (253 >= a835146412)))) && (((30 < a723108336) && (121 >= a723108336)) && (a785058364 == 12 && ( cf==1  && 523 < a1147553654))))) {
    	if(((a42170353 == 34 && (((a1763171942 == 34 && (( cf==1  && 315 < a169710014) && a394986443 == 12)) && ((35 < a912673804) && (95 >= a912673804))) && a1909685633 == 34)) && a1140224045 == 34)) {
    		calculate_outputm150(input);
    	} 
    } 
}
 void calculate_outputm153(int input) {
    if(((((188 < a1189507312) && (267 >= a1189507312)) && (a1491071731 == 34 && (a1661935098 == 34 && a1472462791 == 34))) && (((-92 < a770071847) && (-2 >= a770071847)) && (((input == 75) &&  cf==1 ) && ((35 < a912673804) && (95 >= a912673804)))))) {
    	cf = 0;
    	a394986443 = a785058364;
    	a1377897560 = ((a882589857 * a871674684) + -42);
    	a976945745 = (a369624711 + -5);
    	a1661935098 = 33 ;
    	a882589857 = (a976945745 + 8);
    	a770071847 = (((((((a2147255888 * a1862658444) % 14999) % 22) + -115) * 10) / 9) + -5);
    	a1562022185 = ((((((a1562022185 * a2139432823) % 14999) % 75) - 94) * 5) / 5);
    	a1491071731 = 33 ;
    	a1763171942 = 33 ;
    	a2029515987 = 36 ;
    	a1541342791 = (((((((a15249890 * a15249890) % 14999) % 81) - -321) - 2) / 5) - -263);
    	a1293712589 = 33 ;
    	a1610801558 = (((((((a1610801558 * a1189507312) % 14999) % 12) + -22) / 5) - 6682) - -6670);
    	a771824360 = (a1538778197 + 6);
    	a796195142 = 35 ;
    	a304998879 = ((a815886759 + a882589857) + -7);
    	a1538778197 = ((a1678927341 * a369624711) - 68);
    	a912673804 = (((((a912673804 * a1711061361) % 65) + -29) + -1) + 1);
    	a871674684 = ((a304998879 * a304998879) + -21);
    	a570886160 = 33 ;
    	a723108336 = (((((((a723108336 * a1189507312) % 14999) + -5287) % 73) - 44) + -19654) - -19655);
    	a1862658444 = ((((((a1862658444 * a835146412) / 5) / 5) / 5) % 29) + 209);
    	a1189507312 = ((((((a1189507312 * a770071847) % 14999) / 5) - 666) % 73) + 144); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm154(int input) {
    if((((( cf==1  && (input == 75)) && a771824360 == 10) && a1472462791 == 34) && (((-92 < a770071847) && (-2 >= a770071847)) && (a42170353 == 34 && (a1763171942 == 34 && ((267 < a2147255888) && (391 >= a2147255888))))))) {
    	cf = 0;
    	a1429598563 = 34 ;
    	a912673804 = (((((a912673804 * a835146412) + -28244) + 31668) * 1) + -28810);
    	a491168833 = ((a882589857 + a337942537) - 10);
    	a847823400 = (((((a847823400 * a1562022185) % 14999) - -7042) / -5) - 970);
    	a1717386854 = 32 ;
    	a770071847 = ((((a770071847 * a1562022185) - 6315) + -834) - 429);
    	a304998879 = ((a1917402140 - a771824360) - -10);
    	a871550570 = 32 ;
    	a1763171942 = 32 ;
    	a15249890 = ((((((a15249890 * a1192100362) % 14999) / 5) * 5) % 14838) - -15161);
    	a815886759 = (a976945745 - 2);
    	a1472462791 = 32 ;
    	a2139432823 = (((((a2139432823 * a1562022185) % 14999) + 11513) - 34638) / 5); 
    	 printf("");//printf("%d\n", 126); fflush(stdout); 
    } if(((((a976945745 == 3 && ( cf==1  && (input == 79))) && a1917402140 == 4) && a304998879 == 6) && (a871674684 == 5 && (((351 < a847823400) && (400 >= a847823400)) && a1538778197 == 3)))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a196558593 = 33 ;
    	a2052893331 = (a771824360 - -7);
    	a1232289479 = (a1377897560 - 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm155(int input) {
    if(((a42170353 == 34 && (((188 < a1189507312) && (267 >= a1189507312)) && (a1491071731 == 34 && ((input == 75) &&  cf==1 )))) && (((110 < a835146412) && (253 >= a835146412)) && (a1763171942 == 34 && ((44 < a2139432823) && (247 >= a2139432823)))))) {
    	cf = 0;
    	a1228745271 = ((((((a15249890 * a807447096) % 14999) - 4642) * 2) % 14934) - -15065);
    	a2139432823 = ((((((((a2139432823 * a1189507312) % 14999) % 101) + -130) - -40) * 5) % 101) + -57);
    	a1232289479 = (a1538778197 + 6);
    	a723108336 = ((((((((a723108336 * a835146412) % 14999) % 73) + -92) * 10) / 9) - -11475) - 11434);
    	a1862658444 = ((((((a1862658444 * a807447096) % 14999) % 29) + 200) - -3) - 1);
    	a1189507312 = (((((a723108336 * a807447096) % 73) + 113) * 1) * 1);
    	a871550570 = 33 ;
    	a976945745 = (a785058364 + -10);
    	a2052893331 = (a337942537 - -11);
    	a1293712589 = 33 ;
    	a1610801558 = ((((((a1610801558 * a1562022185) - 18782) % 12) + -23) / 5) + -14);
    	a1538778197 = ((a1232289479 - a976945745) + -5);
    	a796195142 = 33 ;
    	a1763171942 = 33 ;
    	a1678927341 = (a815886759 - -8);
    	a369624711 = (a394986443 + -5);
    	a1711061361 = (((((a1711061361 * a912673804) / 5) % 59) + -3) - -4);
    	a785058364 = ((a771824360 - a369624711) + 7);
    	a455265888 = ((a815886759 - a976945745) + 2);
    	a1140224045 = 33 ;
    	a835146412 = ((((((a847823400 * a1192100362) % 14999) % 36) + 37) * 1) * 1);
    	a2128522778 = 33 ;
    	a1717386854 = 33 ;
    	a771824360 = (a871674684 - -5);
    	a337942537 = (a871674684 + 1);
    	a42170353 = 33 ;
    	a570886160 = 33 ;
    	a912673804 = ((((((a912673804 * a770071847) / 5) % 65) + -21) * 10) / 9);
    	a807447096 = ((((((a807447096 * a847823400) % 14999) % 25) - 31) / 5) - -8); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a42170353 == 34 && (((input == 96) &&  cf==1 ) && a785058364 == 12)) && (a1538778197 == 3 && ((a455265888 == 3 && ((-11 < a1610801558) && (124 >= a1610801558))) && ((110 < a835146412) && (253 >= a835146412)))))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a1611619350 = 35 ;
    	a1649499722 = (a1678927341 + 2);
    	a536820638 = (((((((a1144199001 * a1144199001) % 14999) % 104) + -9) + 24703) - -1675) + -26335); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm156(int input) {
    if(((a570886160 == 34 && (((-11 < a1610801558) && (124 >= a1610801558)) && ((351 < a847823400) && (400 >= a847823400)))) && (a871550570 == 34 && (a1538778197 == 3 && (a771824360 == 10 && ((input == 79) &&  cf==1 )))))) {
    	cf = 0;
    	a570886160 = 33 ;
    	a1763171942 = 33 ;
    	a2139432823 = (((((((a2147255888 * a1562022185) % 14999) / 5) % 101) + -82) + -13993) - -13944);
    	a1562022185 = (((((((a1562022185 * a2139432823) % 14999) % 75) - 37) + 21990) / 5) + -4428);
    	a771824360 = (a738555482 - -4);
    	a785058364 = ((a304998879 - a394986443) - -17);
    	a847823400 = ((((((a847823400 * a2139432823) % 14999) % 108) + 242) + 2) - 2);
    	a1472462791 = 34 ;
    	a1823597932 = 33 ;
    	a1917402140 = (a815886759 + 1);
    	a1909685633 = 33 ;
    	a796195142 = 33 ;
    	a177640787 = ((((((a177640787 * a1189507312) - -785) % 18) + -87) * 10) / 9);
    	a2128522778 = 33 ;
    	a1232289479 = (a369624711 + 3);
    	a1717386854 = 33 ;
    	a807447096 = ((((((((a1610801558 * a15249890) % 14999) - -3496) % 25) + -19) * 5) % 25) - 19);
    	a1293712589 = 33 ;
    	a871550570 = 33 ;
    	a882589857 = (a976945745 + 7);
    	a526854419 = 33 ;
    	a76578247 = (((((a912673804 * a1862658444) + -12873) % 22) - 66) + 1);
    	a912673804 = (((((((a2139432823 * a723108336) % 65) + -30) * 5) + -737) % 65) - 22);
    	a1862658444 = (((((((a2147255888 * a2147255888) % 14999) % 29) - -191) + -3) + 6853) - 6841);
    	a1538778197 = a815886759;
    	a1610801558 = ((((((a1610801558 * a770071847) / 5) * 5) / 5) % 67) + 57);
    	a1491071731 = 33 ;
    	a2052893331 = (a976945745 + 14);
    	a976945745 = ((a738555482 - a871674684) + 1);
    	a369624711 = (a771824360 - 3);
    	a1661935098 = 33 ;
    	a723108336 = (((((a723108336 * a835146412) / 5) % 73) + -109) - 1); 
    	 printf("");//printf("%d\n", 117); fflush(stdout); 
    } if(((((351 < a847823400) && (400 >= a847823400)) && (a1472462791 == 34 && ( cf==1  && (input == 67)))) && (((a1717386854 == 34 && a1909685633 == 34) && ((38 < a1562022185) && (229 >= a1562022185))) && a1538778197 == 3))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a1409922970 = ((a882589857 + a882589857) + -13);
    	a435971279 = (a369624711 + 2);
    	a1541342791 = (((((a1192100362 * a15249890) % 14999) / 5) - -14157) + -17265); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm157(int input) {
    if((((((267 < a2147255888) && (391 >= a2147255888)) && (a1823597932 == 34 && ((30 < a723108336) && (121 >= a723108336)))) && a815886759 == 3) && ((a1909685633 == 34 && ((input == 84) &&  cf==1 )) && ((245 < a1862658444) && (266 >= a1862658444))))) {
    	cf = 0;
    	a1409922970 = (a337942537 - -8);
    	a2052893331 = ((a882589857 - a1409922970) - -19);
    	a796195142 = 33 ;
    	a1377897560 = ((a2052893331 - a2052893331) - -9); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a394986443 == 12 && ((a337942537 == 6 && ((input == 77) &&  cf==1 )) && ((-82 < a177640787) && (-22 >= a177640787)))) && ((((44 < a2139432823) && (247 >= a2139432823)) && a42170353 == 34) && ((110 < a835146412) && (253 >= a835146412))))) {
    	cf = 0;
    	a76578247 = ((((((((a1192100362 * a15249890) % 14999) % 22) + -123) * 9) / 10) - -16490) + -16508);
    	a796195142 = 33 ;
    	a1232289479 = (a337942537 + 4);
    	a2052893331 = (a1678927341 - -6); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm158(int input) {
    if(((a1140224045 == 34 && (a815886759 == 3 && (a1909685633 == 34 && a1491071731 == 34))) && (((44 < a2139432823) && (247 >= a2139432823)) && (( cf==1  && (input == 101)) && a976945745 == 3)))) {
    	cf = 0;
    	a1147553654 = ((((((a15249890 * a1192100362) % 14999) + 11517) * 10) / 9) + 126);
    	a169710014 = (((((a1192100362 * a1147553654) % 14999) - -1065) - -13521) / 5);
    	a15249890 = (((((((((a15249890 * a169710014) % 14999) % 55) - -181) * 9) / 10) / 5) * 49) / 10); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } 
}
 void calculate_outputm16(int input) {
    if(((a871674684 == 5 && ((a771824360 == 10 && ((( cf==1  && ((-99 < a1192100362) && (62 >= a1192100362))) && a394986443 == 12) && ((-11 < a1610801558) && (124 >= a1610801558)))) && a369624711 == 7)) && a1763171942 == 34)) {
    	if(((a304998879 == 6 && ((a871674684 == 5 && a369624711 == 7) && ((188 < a1189507312) && (267 >= a1189507312)))) && (((38 < a1562022185) && (229 >= a1562022185)) && (( cf==1  && a1377897560 == 11) && ((30 < a723108336) && (121 >= a723108336)))))) {
    		calculate_outputm153(input);
    	} 
    	if(((((( cf==1  && a1377897560 == 12) && a369624711 == 7) && ((267 < a2147255888) && (391 >= a2147255888))) && a771824360 == 10) && (a455265888 == 3 && (((-11 < a1610801558) && (124 >= a1610801558)) && ((110 < a835146412) && (253 >= a835146412)))))) {
    		calculate_outputm154(input);
    	} 
    } 
    if(((((a2128522778 == 34 && (a871550570 == 34 && a785058364 == 12)) && ((114 < a1711061361) && (231 >= a1711061361))) && a1140224045 == 34) && (a455265888 == 3 && ( cf==1  && ((62 < a1192100362) && (224 >= a1192100362)))))) {
    	if((( cf==1  && a1144199001 <=  -73) && ((a1717386854 == 34 && (a1678927341 == 11 && (a570886160 == 34 && (a1538778197 == 3 && ((114 < a1711061361) && (231 >= a1711061361)))))) && a976945745 == 3))) {
    		calculate_outputm155(input);
    	} 
    } 
    if(((a526854419 == 34 && (a2128522778 == 34 && (a1823597932 == 34 && a1763171942 == 34))) && (a1472462791 == 34 && ((224 < a1192100362 &&  cf==1 ) && a1661935098 == 34)))) {
    	if((((a1538778197 == 3 && (a882589857 == 11 && ( cf==1  && a738555482 == 5))) && ((351 < a847823400) && (400 >= a847823400))) && (((-82 < a177640787) && (-22 >= a177640787)) && (a2128522778 == 34 && a1917402140 == 4)))) {
    		calculate_outputm156(input);
    	} 
    	if((((a871550570 == 34 && (a304998879 == 6 && ( cf==1  && a738555482 == 10))) && a1491071731 == 34) && ((a1909685633 == 34 && ((7 < a807447096) && (218 >= a807447096))) && ((351 < a847823400) && (400 >= a847823400))))) {
    		calculate_outputm157(input);
    	} 
    	if(((((a570886160 == 34 && (( cf==1  && a738555482 == 11) && a337942537 == 6)) && ((114 < a1711061361) && (231 >= a1711061361))) && ((351 < a847823400) && (400 >= a847823400))) && (((245 < a1862658444) && (266 >= a1862658444)) && ((30 < a723108336) && (121 >= a723108336))))) {
    		calculate_outputm158(input);
    	} 
    } 
}
 void calculate_outputm161(int input) {
    if((((a1661935098 == 34 && (( cf==1  && (input == 116)) && a882589857 == 11)) && a976945745 == 3) && (((30 < a723108336) && (121 >= a723108336)) && (((44 < a2139432823) && (247 >= a2139432823)) && a369624711 == 7)))) {
    	cf = 0;
    	a2052893331 = ((a1917402140 - a369624711) - -17);
    	a796195142 = 33 ;
    	a21974463 = (a976945745 + 10);
    	a15249890 = (((a15249890 - 0) + -29846) + -345); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm163(int input) {
    if(((((-11 < a1610801558) && (124 >= a1610801558)) && (a1661935098 == 34 && ((44 < a2139432823) && (247 >= a2139432823)))) && (((((input == 114) &&  cf==1 ) && a1491071731 == 34) && ((35 < a912673804) && (95 >= a912673804))) && a1823597932 == 34))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a1485869055 = 35 ;
    	a21974463 = (a304998879 + 6);
    	a2052893331 = a785058364; 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm164(int input) {
    if(((a1717386854 == 34 && ((a871674684 == 5 && ( cf==1  && (input == 113))) && a785058364 == 12)) && (a815886759 == 3 && (a2128522778 == 34 && a1909685633 == 34)))) {
    	cf = 0;
    	a1472462791 = 32 ;
    	a1909685633 = 32 ;
    	a402335329 = 35 ;
    	a785058364 = ((a491168833 - a337942537) + 10);
    	a304998879 = a871674684;
    	a1763171942 = 32 ;
    	a1293712589 = 32 ;
    	a723108336 = ((((a723108336 * a177640787) - 17649) * 1) - 1418);
    	a771824360 = (a394986443 + -3);
    	a177640787 = (((((a15249890 * a1562022185) % 14999) + -29513) + -263) - 118);
    	a1711061361 = ((((((a1562022185 * a847823400) % 14999) + -19934) % 59) + 93) - -16);
    	a976945745 = ((a455265888 - a455265888) + 1);
    	a807447096 = ((((((a835146412 * a835146412) % 14999) - -3556) * -1) / 10) / 5);
    	a1491071731 = 32 ;
    	a394986443 = (a369624711 + 3);
    	a2128522778 = 32 ;
    	a2147255888 = ((((((a835146412 * a835146412) % 14999) / 5) + -24916) * 10) / 9);
    	a1189507312 = (((((a807447096 * a912673804) % 14999) - 8744) / 5) - 1965);
    	a1538778197 = (a1678927341 + -9);
    	a796195142 = 32 ;
    	a1823597932 = 32 ;
    	a871674684 = ((a1917402140 - a1678927341) - -13);
    	a42170353 = 32 ;
    	a912673804 = (((((a847823400 * a847823400) % 14999) + -27202) * 1) - 1356);
    	a337942537 = (a1965120042 - 13);
    	a1661935098 = 32 ;
    	a1140224045 = 33 ;
    	a1610801558 = ((((((a1610801558 * a1189507312) % 14999) / 5) - -19694) - -5934) + -48430);
    	a369624711 = ((a394986443 + a815886759) - 8);
    	a1611619350 = 32 ;
    	a882589857 = (a491168833 - -3);
    	a1862658444 = (((((a1862658444 * a2139432823) % 14999) + -28830) - 65) - 877);
    	a871550570 = 32 ;
    	a196558593 = 33 ;
    	a1678927341 = a785058364;
    	a847823400 = ((((((a1562022185 * a1562022185) % 14999) + -22560) * 10) / 9) / 5);
    	a1562022185 = ((((((a1562022185 * a835146412) % 14999) + -25633) * 1) * 10) / 9);
    	a835146412 = (((((a835146412 * a2147255888) % 14999) - -12002) - -2315) + -29313); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((input == 110) &&  cf==1 ) && ((351 < a847823400) && (400 >= a847823400))) && (a570886160 == 34 && (((a871674684 == 5 && a1661935098 == 34) && a369624711 == 7) && a882589857 == 11)))) {
    	cf = 0;
    	a177640787 = (((((a15249890 * a15249890) % 14999) - 24744) - 1931) - 73);
    	a976945745 = (a1965120042 - 16);
    	a835146412 = (((((a15249890 * a1610801558) % 14999) / 5) / 5) + -4367);
    	a1763171942 = 32 ;
    	a402335329 = 35 ;
    	a807447096 = (((((a15249890 * a177640787) % 14999) + -11377) - 409) - 299);
    	a1491071731 = 32 ;
    	a1823597932 = 32 ;
    	a796195142 = 32 ;
    	a337942537 = (a976945745 - -3);
    	a394986443 = (a304998879 + 4);
    	a1711061361 = ((((((a177640787 * a807447096) % 14999) + -11053) % 59) - -55) / 5);
    	a1293712589 = 32 ;
    	a1611619350 = 32 ;
    	a1140224045 = 33 ;
    	a1472462791 = 32 ;
    	a369624711 = (a337942537 + 1);
    	a723108336 = (((((a723108336 * a912673804) - -10167) * -1) / 10) - 5374);
    	a42170353 = 32 ;
    	a1862658444 = ((((((a1862658444 * a177640787) % 14999) + -9465) / 5) - -10021) * -3);
    	a1189507312 = ((((((a1189507312 * a807447096) % 14999) - -10302) + -13521) * 10) / 9);
    	a1562022185 = (((((a1562022185 * a2139432823) % 14999) / 5) + -27075) * 1);
    	a847823400 = ((((((a15249890 * a835146412) % 14999) * 2) % 15067) + -14932) + -2);
    	a196558593 = 33 ;
    	a882589857 = (a771824360 - 1);
    	a2128522778 = 32 ;
    	a1661935098 = 32 ;
    	a304998879 = ((a1678927341 + a976945745) - 7);
    	a1538778197 = (a491168833 - 4);
    	a912673804 = ((((((a912673804 * a847823400) % 14999) % 14952) - 15047) - 1) * 1);
    	a1909685633 = 32 ;
    	a871550570 = 32 ;
    	a785058364 = ((a815886759 / a1678927341) + 10);
    	a2147255888 = (((((a177640787 * a1610801558) % 14999) - 14927) - 71) + -2);
    	a771824360 = ((a1678927341 - a882589857) + 7);
    	a1610801558 = ((((((a1610801558 * a2147255888) % 14999) + -8217) % 14982) + -15017) * 1);
    	a871674684 = (a1678927341 - 7);
    	a1678927341 = (a882589857 - -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((30 < a723108336) && (121 >= a723108336)) && a337942537 == 6) && a2128522778 == 34) && a1763171942 == 34) && ((( cf==1  && (input == 75)) && a1717386854 == 34) && ((35 < a912673804) && (95 >= a912673804))))) {
    	cf = 0;
    	a835146412 = (((((((a2147255888 * a2147255888) % 14999) % 36) - -46) - -14930) * 1) - 14922);
    	a785058364 = ((a815886759 * a455265888) - -2);
    	a1917402140 = ((a1538778197 * a976945745) - 2);
    	a976945745 = (a491168833 + -4);
    	a435971279 = (a369624711 - -6);
    	a1562022185 = (((((a1562022185 * a835146412) % 75) + -93) - 3386) - -3442);
    	a912673804 = (((((a912673804 * a1711061361) % 65) - 29) + -1) - -1);
    	a771824360 = (a1965120042 + -8);
    	a1610801558 = ((((((a1610801558 * a15249890) % 14999) - -3538) % 12) + -23) * 1);
    	a304998879 = (a369624711 + -2);
    	a1541342791 = ((((((a1189507312 * a1862658444) % 14999) - -8745) + -26115) * 10) / 9);
    	a1189507312 = ((((((a177640787 * a835146412) * 3) + -3156) * 1) % 73) - -134);
    	a2029515987 = 32 ;
    	a1763171942 = 33 ;
    	a1678927341 = ((a1538778197 / a455265888) - -10);
    	a337942537 = (a815886759 - -2);
    	a871674684 = (a1538778197 - -2);
    	a177640787 = (((((((a2147255888 * a2147255888) % 14999) % 18) - 100) * 1) + -14010) - -14009);
    	a42170353 = 33 ;
    	a723108336 = (((((((a723108336 * a807447096) / 5) % 73) - 42) * 5) % 73) + -44);
    	a1491071731 = 33 ;
    	a1293712589 = 33 ;
    	a394986443 = (a455265888 - -8);
    	a796195142 = 35 ;
    	a847823400 = ((((((a2139432823 * a835146412) / 5) + 8037) * 2) % 108) + 170);
    	a369624711 = (a882589857 + -5);
    	a1862658444 = (((((((a835146412 * a847823400) % 14999) - -2061) % 29) + 215) * 9) / 10);
    	a1661935098 = 33 ;
    	a1909685633 = 33 ;
    	a1717386854 = 34 ;
    	a871550570 = 33 ;
    	a882589857 = ((a1538778197 + a976945745) - -6);
    	a2128522778 = 33 ;
    	a815886759 = ((a455265888 - a337942537) - -4);
    	a455265888 = (a871674684 + -2); 
    	 printf("");//printf("%d\n", 126); fflush(stdout); 
    } if((((a1293712589 == 34 && ((110 < a835146412) && (253 >= a835146412))) && a1823597932 == 34) && (((((-82 < a177640787) && (-22 >= a177640787)) && ((input == 111) &&  cf==1 )) && a871550570 == 34) && a1678927341 == 11))) {
    	cf = 0;
    	a1763171942 = 32 ;
    	a847823400 = ((((((a2139432823 * a2139432823) % 14999) + -4278) / 5) * 5) - 12477);
    	a1562022185 = (((((a177640787 * a15249890) % 14999) + -9533) - 245) * 1);
    	a1538778197 = ((a882589857 + a785058364) - 21);
    	a2147255888 = ((((((a2139432823 * a2139432823) % 14999) - 5178) + -17520) - -10912) - 14789);
    	a771824360 = (a1917402140 - -7);
    	a835146412 = (((((a847823400 * a847823400) % 14999) + -14977) + -22) - 2);
    	a871674684 = (a785058364 + -8);
    	a807447096 = ((((((a2139432823 * a2147255888) % 14999) + -12102) % 14977) + -15021) * 1);
    	a1491071731 = 32 ;
    	a1661935098 = 32 ;
    	a796195142 = 32 ;
    	a912673804 = (((((a912673804 * a1562022185) % 14999) + 17068) * 1) + -18842);
    	a196558593 = 33 ;
    	a394986443 = ((a304998879 + a976945745) - -1);
    	a2128522778 = 32 ;
    	a1293712589 = 32 ;
    	a1189507312 = (((((a1189507312 * a807447096) % 14999) - -12503) - -10346) - 26066);
    	a723108336 = ((((((a723108336 * a847823400) % 14999) - -482) - -11737) % 14941) + -15058);
    	a1611619350 = 32 ;
    	a1610801558 = ((((((a1610801558 * a807447096) % 14999) * 2) % 14982) + -15017) + -2);
    	a1823597932 = 32 ;
    	a369624711 = (a976945745 - -2);
    	a871550570 = 32 ;
    	a1909685633 = 32 ;
    	a1862658444 = (((((a1862658444 * a835146412) % 14999) + -14939) + -30) - 4);
    	a304998879 = (a815886759 - -2);
    	a402335329 = 35 ;
    	a882589857 = ((a815886759 / a815886759) + 8);
    	a1472462791 = 32 ;
    	a337942537 = (a815886759 - -1);
    	a177640787 = ((((((a2139432823 * a847823400) % 14999) + -8850) % 14940) - 15059) - 1);
    	a42170353 = 32 ;
    	a1678927341 = (a455265888 + 7);
    	a1711061361 = (((((((a847823400 * a2139432823) % 14999) % 59) + 54) - -5596) / 5) + -1092);
    	a976945745 = (a491168833 + -5);
    	a1140224045 = 33 ;
    	a785058364 = (a1965120042 + -7); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm166(int input) {
    if(((a1538778197 == 3 && ( cf==1  && (input == 101))) && (a570886160 == 34 && (((a1917402140 == 4 && a785058364 == 12) && a1678927341 == 11) && a369624711 == 7)))) {
    	cf = 0;
    	a394986443 = (a1917402140 - -7);
    	a1711061361 = ((((((a912673804 * a723108336) % 14999) % 59) + 54) + 1) - 1);
    	a871674684 = ((a1538778197 / a785058364) + 3);
    	a976902422 = (((((a15249890 * a2147255888) % 14999) + -21457) / 5) + -17141);
    	a491168833 = ((a337942537 * a337942537) + -25);
    	a835146412 = (((((a835146412 * a2139432823) % 14999) - 12250) - 59) - 1754);
    	a42170353 = 32 ;
    	a1823597932 = 32 ;
    	a337942537 = (a491168833 + -7);
    	a1862658444 = (((((((a1862658444 * a2147255888) % 14999) - 13843) % 29) + 215) + -9890) - -9889);
    	a882589857 = (a369624711 - -2);
    	a526854419 = 33 ;
    	a1678927341 = (a455265888 - -7);
    	a976945745 = ((a1917402140 - a304998879) + 1);
    	a1611619350 = 33 ;
    	a1917402140 = ((a1538778197 - a1538778197) - -2);
    	a177640787 = ((((((a177640787 * a1189507312) % 18) - 101) * 9) / 10) + -7);
    	a796195142 = 32 ;
    	a570886160 = 32 ;
    	a1562022185 = ((((((a1562022185 * a1610801558) + 1405) * 1) * 1) % 14943) + -15055);
    	a2147255888 = ((((((a723108336 * a976902422) % 14999) - -23967) - -199) / 5) * -5);
    	a1189507312 = (((((((a1189507312 * a807447096) % 14999) - 6856) * 3) + -7788) % 15020) - 14979);
    	a1140224045 = 33 ;
    	a1293712589 = 33 ;
    	a369624711 = (a785058364 + -7);
    	a807447096 = ((((((((a912673804 * a770071847) % 14999) + 880) % 25) - 33) * 5) % 25) - -6);
    	a455265888 = ((a771824360 - a1538778197) - 5);
    	a1909685633 = 32 ;
    	a2128522778 = 32 ;
    	a1491071731 = 32 ;
    	a771824360 = ((a1538778197 / a815886759) - -6);
    	a1538778197 = (a815886759 - -1);
    	a785058364 = 11;
    	a1661935098 = 32 ;
    	a1610801558 = (((((((a1610801558 * a770071847) % 14999) % 12) - 22) / 5) * 5) - 3); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } if(((((((7 < a807447096) && (218 >= a807447096)) && ((input == 108) &&  cf==1 )) && ((-82 < a177640787) && (-22 >= a177640787))) && a394986443 == 12) && (a2128522778 == 34 && (a455265888 == 3 && a570886160 == 34)))) {
    	cf = 0;
    	a1429598563 = 35 ; 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm168(int input) {
    if((((a1538778197 == 3 && ((a1763171942 == 34 && ( cf==1  && (input == 79))) && ((35 < a912673804) && (95 >= a912673804)))) && a337942537 == 6) && (a1909685633 == 34 && ((351 < a847823400) && (400 >= a847823400))))) {
    	cf = 0;
    	a455265888 = (a369624711 - 6);
    	a1538778197 = ((a337942537 * a815886759) - 5);
    	a1293712589 = 32 ;
    	a177640787 = ((((a177640787 * a1862658444) / 5) / 5) - 5803);
    	a1429598563 = 35 ;
    	a1610801558 = ((((((a1610801558 * a847823400) % 14999) / 5) + 8114) * -1) / 10);
    	a882589857 = (a369624711 + 2);
    	a976945745 = (a871674684 - 2);
    	a1909685633 = 32 ;
    	a771824360 = ((a369624711 - a1538778197) - -3);
    	a402335329 = 34 ;
    	a1823597932 = 33 ;
    	a42170353 = 32 ;
    	a847823400 = ((((((a835146412 * a2147255888) % 14999) + 12320) + 2170) - -123) - 29606);
    	a1763171942 = 32 ;
    	a1189507312 = (((((a1189507312 * a15249890) % 14999) + -29017) - 493) + -488);
    	a1491071731 = 34 ;
    	a1562022185 = ((((a1562022185 * a912673804) - -8102) + -32009) + -2699);
    	a369624711 = (a882589857 + -4);
    	a912673804 = ((((((((a1711061361 * a1711061361) % 14999) + 3275) * -1) / 10) / 5) * 15) / 10);
    	a723108336 = (((((((a723108336 * a2147255888) % 14999) % 73) - 44) - -10929) / 5) - 2260);
    	a1661935098 = 32 ;
    	a796195142 = 32 ;
    	a394986443 = (a337942537 - -4);
    	a1611619350 = 32 ;
    	a1862658444 = ((((((a1862658444 * a2147255888) % 14999) % 29) + 214) / 5) + 168);
    	a337942537 = (a976945745 + 3); 
    	 printf("");//printf("%d\n", 120); fflush(stdout); 
    } 
}
 void calculate_outputm170(int input) {
    if((((((110 < a835146412) && (253 >= a835146412)) && ((245 < a1862658444) && (266 >= a1862658444))) && ((188 < a1189507312) && (267 >= a1189507312))) && (((a1909685633 == 34 && ((input == 75) &&  cf==1 )) && ((-11 < a1610801558) && (124 >= a1610801558))) && ((44 < a2139432823) && (247 >= a2139432823))))) {
    	cf = 0;
    	a847823400 = ((((((a1862658444 * a1862658444) % 14999) / 5) % 108) - -201) - 48);
    	a1491071731 = 33 ;
    	a491168833 = ((a785058364 / a771824360) - -5);
    	a1909685633 = 33 ;
    	a2139432823 = (((((a2139432823 * a847823400) % 14999) + 995) / 5) + -3916);
    	a785058364 = ((a394986443 - a1917402140) - -3);
    	a1228745271 = (((((((a1610801558 * a835146412) % 14999) * 2) * 1) + -3) % 11) - -120);
    	a882589857 = (a304998879 + 5);
    	a1823597932 = 33 ;
    	a1610801558 = (((((((a15249890 * a1711061361) % 14999) % 12) - 22) + -2) + -10899) - -10899);
    	a835146412 = ((((((a1862658444 * a847823400) % 14999) + -17470) / 5) % 36) + 108);
    	a1541342791 = ((((((((a1189507312 * a807447096) % 14999) - 23248) % 59) - -278) * 5) % 59) - -241);
    	a1293712589 = 33 ;
    	a771824360 = (a304998879 - -3);
    	a796195142 = 35 ;
    	a1140224045 = 33 ;
    	a2147255888 = (((((((a2147255888 * a1562022185) % 14999) % 96) + 146) * 9) / 10) - 4);
    	a455265888 = (a815886759 + -1);
    	a1538778197 = (a394986443 - 10);
    	a1678927341 = ((a337942537 - a815886759) - -8);
    	a1562022185 = ((((((a1711061361 * a1862658444) % 14999) % 75) + -36) - 2) / 5);
    	a723108336 = ((((((a723108336 * a1811430962) % 14999) % 73) + -112) + -18566) + 18624);
    	a815886759 = (a394986443 + -10);
    	a570886160 = 33 ;
    	a1917402140 = ((a491168833 - a491168833) + 3);
    	a976945745 = (a304998879 - 3);
    	a807447096 = ((((((a847823400 * a1862658444) % 14999) % 25) + -36) - -8) / 5);
    	a1189507312 = ((((((a1862658444 * a1228745271) % 14999) - 21060) % 73) + 164) - -15);
    	a1862658444 = ((((((a1862658444 * a1228745271) % 14999) - -12425) / 5) % 29) + 193); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((a1917402140 == 4 && ((30 < a723108336) && (121 >= a723108336))) && a1491071731 == 34) && (a455265888 == 3 && ((a1823597932 == 34 && ((input == 101) &&  cf==1 )) && a1140224045 == 34)))) {
    	cf = 0;
    	a76578247 = ((((((a1189507312 * a847823400) % 14999) % 22) - 80) - 2) + 10);
    	a2052893331 = ((a394986443 + a491168833) - 9);
    	a796195142 = 33 ;
    	a806730426 = (a815886759 - -7); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm171(int input) {
    if(((a369624711 == 7 && ((a2128522778 == 34 && a882589857 == 11) && a1538778197 == 3)) && ((((351 < a847823400) && (400 >= a847823400)) && ( cf==1  && (input == 75))) && a526854419 == 34))) {
    	cf = 0;
    	a177640787 = (((((a835146412 * a1711061361) % 18) - 101) - 1) - 0);
    	a1717386854 = 33 ;
    	a1541342791 = (((((a1610801558 * a807447096) + 2925) + -15480) / 5) + 14579);
    	a723108336 = (((((a723108336 * a1711061361) % 73) + -42) - 1) - -1);
    	a871550570 = 33 ;
    	a882589857 = (a871674684 + 6);
    	a1495349871 = 33 ;
    	a976945745 = (a369624711 - 5);
    	a807447096 = ((((((a1610801558 * a835146412) * 2) / 5) + -15234) % 25) - -2);
    	a394986443 = (a771824360 + 1);
    	a796195142 = 35 ;
    	a1472462791 = 33 ;
    	a526854419 = 33 ;
    	a1244737994 = 32 ;
    	a1538778197 = ((a871674684 - a491168833) - -7);
    	a304998879 = (a1678927341 + -5);
    	a770071847 = (((((a770071847 * a1862658444) - 4215) + -797) % 22) - 95);
    	a1763171942 = 33 ;
    	a785058364 = (a1538778197 + 9);
    	a1491071731 = 33 ;
    	a1293712589 = 33 ;
    	a455265888 = a976945745;
    	a1823597932 = 33 ;
    	a1189507312 = (((((((a1189507312 * a1562022185) % 14999) - 25291) / 5) + 18076) % 73) + 80);
    	a1661935098 = 33 ;
    	a847823400 = (((((((a847823400 * a723108336) % 14999) % 108) + 242) + -8264) + 11111) - 2846);
    	a1862658444 = (((((((a1862658444 * a1562022185) % 14999) % 29) + 202) * 5) % 29) - -192);
    	a1562022185 = ((((((a2147255888 * a723108336) % 14999) - 1870) % 75) + -36) + -1);
    	a2128522778 = 33 ;
    	a771824360 = ((a369624711 + a491168833) + -7);
    	a369624711 = (a337942537 + 1);
    	a1610801558 = (((((a1610801558 * a912673804) * 2) * 1) % 12) + -22); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm174(int input) {
    if((((((44 < a2139432823) && (247 >= a2139432823)) && a1909685633 == 34) && ((267 < a2147255888) && (391 >= a2147255888))) && (((((input == 92) &&  cf==1 ) && a337942537 == 6) && a1140224045 == 34) && ((351 < a847823400) && (400 >= a847823400))))) {
    	cf = 0;
    	a1862658444 = (((((((a835146412 * a847823400) % 14999) / 5) / 5) + 15299) % 29) + 207);
    	a723108336 = ((((((a1862658444 * a1711061361) % 14999) % 73) + -84) / 5) - 3);
    	a1189507312 = (((((((a723108336 * a723108336) % 73) - -115) * 5) - -19863) % 73) - -107);
    	a42170353 = 33 ;
    	a304998879 = ((a815886759 / a976945745) + 5);
    	a1140224045 = 33 ;
    	a2052893331 = ((a785058364 - a815886759) + 7);
    	a912673804 = (((((a1189507312 * a1610801558) % 65) + -29) + -2) + 0);
    	a1717386854 = 33 ;
    	a1917402140 = ((a491168833 + a871674684) + -11);
    	a536820638 = ((((((a15249890 * a880148234) % 14999) % 14910) - 15089) * 1) + -1);
    	a177640787 = (((((((a177640787 * a770071847) % 18) + -113) + -1) / 5) * 49) / 10);
    	a1409922970 = (a1538778197 - -9);
    	a796195142 = 33 ;
    	a2147255888 = (((((((a2147255888 * a2139432823) % 14999) % 96) - -148) * 5) % 96) + 128);
    	a337942537 = ((a394986443 + a455265888) - 9);
    	a2128522778 = 33 ;
    	a807447096 = (((((((a807447096 * a1711061361) % 14999) + 10537) / 5) * 5) % 25) + -27);
    	a1909685633 = 33 ;
    	a771824360 = (a369624711 - -3);
    	a1562022185 = ((((((a1562022185 * a847823400) % 14999) % 75) - 80) / 5) - 88);
    	a1538778197 = (a394986443 - 9);
    	a1678927341 = ((a771824360 - a337942537) + 6);
    	a1472462791 = 34 ;
    	a1763171942 = 33 ;
    	a847823400 = (((((((a847823400 * a835146412) % 14999) % 108) - -203) / 5) * 34) / 10);
    	a815886759 = (a394986443 - 9); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((((351 < a847823400) && (400 >= a847823400)) && (( cf==1  && (input == 91)) && a1293712589 == 34)) && (((114 < a1711061361) && (231 >= a1711061361)) && ((a1491071731 == 34 && a871550570 == 34) && ((-82 < a177640787) && (-22 >= a177640787)))))) {
    	cf = 0;
    	a1140224045 = 33 ;
    	a394986443 = (a771824360 - -2);
    	a1823597932 = 34 ;
    	a1293712589 = 32 ;
    	a337942537 = a304998879;
    	a1611619350 = 32 ;
    	a570886160 = 34 ;
    	a835146412 = ((((((a912673804 * a807447096) % 14999) + 6791) + 12973) % 71) - -138);
    	a1562022185 = (((((a1562022185 * a2147255888) % 14999) - 29873) / 5) * 5);
    	a42170353 = 32 ;
    	a2139432823 = (((((((a2139432823 * a15249890) % 14999) + 13043) - -872) / 5) * -1) / 10);
    	a455265888 = (a771824360 + -9);
    	a770071847 = ((((((a912673804 * a912673804) % 14999) - 25537) + -3821) % 22) - 101);
    	a976945745 = (a785058364 - 11);
    	a1862658444 = (((((a1189507312 * a807447096) % 14999) + -10227) - 6337) * 1);
    	a1491071731 = 34 ;
    	a785058364 = ((a882589857 - a815886759) - -4);
    	a1711061361 = ((((((a1711061361 * a880148234) % 14999) + 10644) % 14997) - 15001) * 1);
    	a871674684 = (a815886759 + 2);
    	a1610801558 = (((((((a1610801558 * a15249890) % 14999) - 9146) + -3563) + -597) % 14982) + -15017);
    	a771824360 = ((a882589857 - a491168833) - -9);
    	a1661935098 = 34 ;
    	a847823400 = (((((a847823400 * a1562022185) % 14999) - -1535) + -14123) * 1);
    	a1917402140 = (a882589857 + -9);
    	a177640787 = (((((((a177640787 * a1862658444) % 14999) % 14940) + -15059) + -1) / 5) - 20372);
    	a815886759 = (a491168833 - 7);
    	a2147255888 = (((((a2147255888 * a723108336) % 14999) / 5) - -19198) - 33452);
    	a1909685633 = 34 ;
    	a723108336 = (((((((a912673804 * a807447096) % 14999) / 5) - -29776) + 165) % 45) - -63);
    	a1189507312 = ((((((a1189507312 * a807447096) % 14999) + -15866) * 10) / 9) * 1);
    	a2128522778 = 32 ;
    	a402335329 = 34 ;
    	a1429598563 = 33 ;
    	a796195142 = 32 ;
    	a1538778197 = (a491168833 + -9);
    	a526854419 = 34 ;
    	a369624711 = ((a1678927341 - a1678927341) - -7);
    	a871550570 = 32 ;
    	a807447096 = ((((((a807447096 * a912673804) % 14999) % 25) + -17) - 3) + 0);
    	a882589857 = ((a455265888 - a491168833) - -18); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } 
}
 void calculate_outputm176(int input) {
    if(((((35 < a912673804) && (95 >= a912673804)) && (a815886759 == 3 && (a771824360 == 10 && ((input == 98) &&  cf==1 )))) && ((a394986443 == 12 && a526854419 == 34) && a570886160 == 34))) {
    	cf = 0;
    	a534143625 = (((((a1862658444 * a1862658444) % 14999) + -27877) + -1264) * 1);
    	a796195142 = 33 ;
    	a2052893331 = (a1678927341 - -4);
    	a1143554178 = (((((a835146412 * a723108336) % 14999) - 28628) + -809) - -425); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm179(int input) {
    if(((((( cf==1  && (input == 79)) && ((245 < a1862658444) && (266 >= a1862658444))) && a785058364 == 12) && a1909685633 == 34) && ((a1293712589 == 34 && a337942537 == 6) && ((30 < a723108336) && (121 >= a723108336))))) {
    	cf = 0;
    	a177640787 = (((((a723108336 * a835146412) % 14999) + 11226) + -36882) * 1);
    	a304998879 = (a2074917498 + -3);
    	a847823400 = ((((a770071847 * a1610801558) - 8816) - 4337) + -1514);
    	a394986443 = (a491168833 - 1);
    	a42170353 = 32 ;
    	a1871179310 = 36 ;
    	a169710014 = (((((((a15249890 * a15249890) % 14999) / 5) - -11284) + -34845) % 84) + 216);
    	a871550570 = 33 ;
    	a960419217 = (a337942537 + 5);
    	a369624711 = (a976945745 + 2);
    	a1823597932 = 32 ;
    	a796195142 = 36 ;
    	a1140224045 = 32 ;
    	a2139432823 = (((((a723108336 * a912673804) - -404) * 2) / 5) - 15910); 
    	 printf("");//printf("%d\n", 117); fflush(stdout); 
    } if(((a369624711 == 7 && a304998879 == 6) && ((((a1917402140 == 4 && ((input == 70) &&  cf==1 )) && a394986443 == 12) && ((-92 < a770071847) && (-2 >= a770071847))) && a1472462791 == 34))) {
    	cf = 0;
    	a1429598563 = 32 ;
    	a491168833 = (a882589857 + -4); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm180(int input) {
    if(((a871550570 == 34 && (a1763171942 == 34 && (((-11 < a1610801558) && (124 >= a1610801558)) && a455265888 == 3))) && ((((188 < a1189507312) && (267 >= a1189507312)) && ( cf==1  && (input == 75))) && a2128522778 == 34))) {
    	cf = 0;
    	a42170353 = 33 ;
    	a723108336 = ((((((a1711061361 * a1862658444) % 14999) % 73) - 44) - -1) + -1);
    	a526854419 = 33 ;
    	a570886160 = 32 ;
    	a1823597932 = 33 ;
    	a304998879 = ((a1917402140 / a976945745) - -4);
    	a1763171942 = 33 ;
    	a1610801558 = ((((((a1610801558 * a723108336) - 7671) % 12) + -22) + -8096) + 8094);
    	a871550570 = 32 ;
    	a835146412 = ((((((a1711061361 * a847823400) % 14999) % 36) - -73) + -1) + 2);
    	a1143554178 = (((((((a15249890 * a15249890) % 14999) % 50) - -194) - 2) - 21167) - -21205);
    	a785058364 = ((a2074917498 - a2074917498) - -11);
    	a1862658444 = ((((a835146412 * a177640787) + -9416) * 1) - 68);
    	a1189507312 = (((((a1189507312 * a807447096) % 14999) - 19209) + -4574) - 2830);
    	a2052893331 = (a1538778197 + 12);
    	a1538778197 = ((a491168833 * a2074917498) - 86);
    	a796195142 = 33 ;
    	a807447096 = ((((((a1711061361 * a177640787) + -5271) % 25) + -1) - 3535) + 3540);
    	a1909685633 = 33 ;
    	a369624711 = ((a455265888 - a337942537) - -8);
    	a1562022185 = (((((a1562022185 * a912673804) / 5) - -17804) % 75) + -92);
    	a1293712589 = 33 ;
    	a2128522778 = 33 ;
    	a177640787 = (((((a177640787 * a912673804) + -23769) - -9828) * 10) / 9);
    	a1661935098 = 33 ;
    	a1678927341 = (a882589857 - 2);
    	a694436355 = ((((((a1143554178 * a15249890) % 14999) % 94) + 108) + -18) + -8);
    	a1491071731 = 33 ;
    	a976945745 = ((a304998879 - a337942537) - -1);
    	a771824360 = ((a871674684 / a491168833) + 8);
    	a882589857 = (a369624711 - -3);
    	a455265888 = ((a337942537 - a2074917498) + 5); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((a2128522778 == 34 && a1909685633 == 34) && ((-82 < a177640787) && (-22 >= a177640787))) && (a771824360 == 10 && ((((input == 88) &&  cf==1 ) && a526854419 == 34) && ((7 < a807447096) && (218 >= a807447096)))))) {
    	cf = 0;
    	a491168833 = (a785058364 + -4);
    	a1811430962 = (((((((a835146412 * a1189507312) % 14999) - 9953) % 66) + 84) + 11796) - 11795); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((((-11 < a1610801558) && (124 >= a1610801558)) && (a1917402140 == 4 && (a526854419 == 34 && ( cf==1  && (input == 60))))) && ((a1823597932 == 34 && ((245 < a1862658444) && (266 >= a1862658444))) && a570886160 == 34))) {
    	cf = 0;
    	a1260631 = (a369624711 + 3);
    	a796195142 = 33 ;
    	a706197976 = 33 ;
    	a2052893331 = (a304998879 + 7); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm181(int input) {
    if(((((((input == 110) &&  cf==1 ) && ((-92 < a770071847) && (-2 >= a770071847))) && a871550570 == 34) && ((351 < a847823400) && (400 >= a847823400))) && (a455265888 == 3 && (a1538778197 == 3 && a1763171942 == 34)))) {
    	cf = 0;
    	a785058364 = (a1678927341 - -1);
    	a1661935098 = 33 ;
    	a1811430962 = ((((((a15249890 * a15249890) % 14999) % 99) - -183) + 12756) - 12778);
    	a1909685633 = 34 ;
    	a1140224045 = 34 ;
    	a2139432823 = (((((((a847823400 * a723108336) % 14999) % 101) - -74) - 28219) - -36236) - 7991);
    	a1763171942 = 33 ;
    	a491168833 = (a304998879 - -2);
    	a871550570 = 33 ;
    	a1917402140 = (a976945745 + 1);
    	a912673804 = ((((((a912673804 * a1562022185) % 65) - 53) - 19544) - 1009) + 20537);
    	a304998879 = (a771824360 + -5);
    	a2128522778 = 33 ;
    	a871674684 = ((a976945745 - a1538778197) + 4);
    	a1823597932 = 34 ;
    	a770071847 = ((((((a770071847 * a835146412) / 5) % 22) - 111) - -23338) - 23326);
    	a369624711 = ((a771824360 * a785058364) - 115); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1491071731 == 34 && a871674684 == 5) && ((a976945745 == 3 && ((a304998879 == 6 && ((input == 75) &&  cf==1 )) && ((267 < a2147255888) && (391 >= a2147255888)))) && a771824360 == 10))) {
    	cf = 0;
    	a394986443 = a785058364;
    	a1409922970 = a491168833;
    	a2128522778 = 33 ;
    	a835146412 = ((((((a723108336 * a1610801558) % 36) - -74) + -2) / 5) + 32);
    	a1293712589 = 33 ;
    	a796195142 = 35 ;
    	a1862658444 = (((((((a1862658444 * a847823400) % 14999) % 29) - -202) * 5) % 29) + 213);
    	a770071847 = (((((((a912673804 * a835146412) * 2) % 22) - 127) * 5) % 22) - 108);
    	a177640787 = ((((((((a2147255888 * a2147255888) % 14999) % 18) - 116) * 5) * 5) % 18) + -87);
    	a304998879 = a337942537;
    	a526854419 = 33 ;
    	a815886759 = (a976945745 - 1);
    	a435971279 = ((a455265888 / a882589857) - -9);
    	a1189507312 = ((((((((a1189507312 * a770071847) % 14999) - -27695) % 73) + 75) * 5) % 73) + 98);
    	a847823400 = ((((((a1862658444 * a1562022185) % 14999) % 108) - -148) / 5) - -275);
    	a1541342791 = (((((a534143625 * a534143625) % 14999) - 19158) + -1599) + -4188);
    	a807447096 = ((((((a807447096 * a723108336) * 1) / 5) * 5) % 25) + -38);
    	a1717386854 = 33 ;
    	a1763171942 = 33 ;
    	a912673804 = (((((a912673804 * a1610801558) % 65) + -30) - -1) + -2);
    	a976945745 = (a1538778197 + -1);
    	a455265888 = ((a369624711 * a1538778197) + -16);
    	a2147255888 = ((((((a2147255888 * a770071847) % 14999) - -10935) - -5688) % 96) + 97);
    	a1562022185 = ((((((((a1189507312 * a847823400) % 14999) % 75) + -82) * 5) + -832) % 75) - -14);
    	a1472462791 = 33 ;
    	a871550570 = 33 ;
    	a1610801558 = (((((((a723108336 * a847823400) % 14999) % 12) + -31) - -21575) - 25217) + 3638);
    	a1491071731 = 33 ;
    	a771824360 = ((a871674684 + a1678927341) + -7);
    	a1661935098 = 33 ;
    	a570886160 = 33 ;
    	a871674684 = (a882589857 + -7);
    	a1678927341 = ((a394986443 + a1538778197) - 4);
    	a1538778197 = (a785058364 - 9);
    	a723108336 = (((((((a723108336 * a912673804) % 73) - 42) * 5) + 73) % 73) + -43);
    	a882589857 = (a1917402140 + 7); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((((a1763171942 == 34 && a570886160 == 34) && a871550570 == 34) && a871674684 == 5) && a394986443 == 12) && (((110 < a835146412) && (253 >= a835146412)) && ( cf==1  && (input == 113))))) {
    	cf = 0;
    	a394986443 = (a815886759 + 8);
    	a337942537 = ((a815886759 / a815886759) + 5);
    	a1661935098 = 33 ;
    	a369624711 = (a491168833 + -5);
    	a1140224045 = 34 ;
    	a785058364 = (a976945745 + 9);
    	a1711061361 = (((((((a1862658444 * a807447096) % 14999) - 26282) * 1) + -738) % 58) - -222);
    	a1192100362 = (((((((a534143625 * a15249890) % 14999) % 80) - -70) * 5) % 80) + 130);
    	a871674684 = (a785058364 - 8);
    	a770071847 = (((((a770071847 * a1711061361) % 22) + -94) + 2) - 15);
    	a2147255888 = (((((((a2147255888 * a912673804) % 14999) - 17451) / 5) + -23347) % 96) - -236);
    	a1144199001 = (((((((a1192100362 * a534143625) % 14999) / 5) + -12759) - -20525) * -1) / 10);
    	a882589857 = (a1678927341 + -1);
    	a15249890 = ((((((a15249890 * a912673804) % 14999) % 27) + 293) + 1734) - 1742);
    	a1717386854 = 34 ;
    	a42170353 = 34 ;
    	a304998879 = ((a337942537 - a815886759) + 2);
    	a2139432823 = ((((((a1562022185 * a1562022185) % 14999) + -3951) % 101) - -145) + 0);
    	a847823400 = (((((((a847823400 * a723108336) % 14999) % 108) - -136) / 5) + 24040) + -23869);
    	a815886759 = ((a1538778197 * a455265888) - 7); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1661935098 == 34 && (a1763171942 == 34 && ((267 < a2147255888) && (391 >= a2147255888)))) && (((38 < a1562022185) && (229 >= a1562022185)) && ((( cf==1  && (input == 111)) && a815886759 == 3) && a871550570 == 34)))) {
    	cf = 0;
    	a337942537 = ((a455265888 - a976945745) - -6);
    	a394986443 = (a337942537 - -5);
    	a1661935098 = 33 ;
    	a2139432823 = ((((((a912673804 * a912673804) % 101) - -56) - -34) * 9) / 10);
    	a785058364 = (a455265888 + 9);
    	a369624711 = (a815886759 - -4);
    	a1144199001 = ((((((a835146412 * a723108336) % 14999) - 21020) - -35009) + -18947) - 15018);
    	a42170353 = 34 ;
    	a304998879 = (a491168833 - 7);
    	a1192100362 = ((((((a1144199001 * a534143625) % 14999) / 5) % 80) + 144) * 1);
    	a871674684 = (a1678927341 - 7);
    	a1140224045 = 34 ;
    	a1711061361 = (((((((a1189507312 * a1189507312) % 14999) % 58) + 119) - -640) * 2) / 10);
    	a1717386854 = 34 ;
    	a770071847 = ((((((a770071847 * a2147255888) % 14999) % 22) - 113) - 14410) + 14408);
    	a2147255888 = ((((((a2147255888 * a1610801558) % 14999) % 96) + 171) * 5) / 5);
    	a882589857 = ((a369624711 - a771824360) + 13);
    	a815886759 = (a337942537 + -4);
    	a15249890 = (((((((a15249890 * a1144199001) % 14999) % 27) - -295) - -1) - -18201) - 18200);
    	a847823400 = (((((((a847823400 * a807447096) % 14999) % 108) + 223) / 5) * 39) / 10); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((( cf==1  && (input == 84)) && a871550570 == 34) && (((7 < a807447096) && (218 >= a807447096)) && (((245 < a1862658444) && (266 >= a1862658444)) && (a2128522778 == 34 && (a976945745 == 3 && a1491071731 == 34)))))) {
    	cf = 0;
    	a796195142 = 36 ;
    	a1420843252 = 34 ;
    	a1110504460 = ((a1678927341 / a882589857) - -5);
    	a169710014 = (((((a15249890 * a15249890) % 14999) + 10114) * 1) * 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm17(int input) {
    if(((a1661935098 == 34 && (((35 < a912673804) && (95 >= a912673804)) && ((a491168833 == 6 &&  cf==1 ) && ((44 < a2139432823) && (247 >= a2139432823))))) && ((a1472462791 == 34 && a42170353 == 34) && a304998879 == 6))) {
    	if((((a1717386854 == 34 && (a1965120042 == 10 &&  cf==1 )) && a815886759 == 3) && (((110 < a835146412) && (253 >= a835146412)) && (a1678927341 == 11 && (((245 < a1862658444) && (266 >= a1862658444)) && ((7 < a807447096) && (218 >= a807447096))))))) {
    		calculate_outputm161(input);
    	} 
    	if(((a1909685633 == 34 && (a1538778197 == 3 && ((35 < a912673804) && (95 >= a912673804)))) && (((351 < a847823400) && (400 >= a847823400)) && (a2128522778 == 34 && (a1678927341 == 11 && (a1965120042 == 12 &&  cf==1 )))))) {
    		calculate_outputm163(input);
    	} 
    	if((((a1965120042 == 17 &&  cf==1 ) && a1678927341 == 11) && (((-11 < a1610801558) && (124 >= a1610801558)) && (a394986443 == 12 && ((((188 < a1189507312) && (267 >= a1189507312)) && a369624711 == 7) && a771824360 == 10))))) {
    		calculate_outputm164(input);
    	} 
    } 
    if(((a1661935098 == 34 && (((a491168833 == 7 &&  cf==1 ) && a771824360 == 10) && a1823597932 == 34)) && (a369624711 == 7 && (a42170353 == 34 && ((38 < a1562022185) && (229 >= a1562022185)))))) {
    	if((((((-82 < a177640787) && (-22 >= a177640787)) && ((110 < a835146412) && (253 >= a835146412))) && a882589857 == 11) && ((a337942537 == 6 && ((a1429598563 == 34 &&  cf==1 ) && a526854419 == 34)) && a42170353 == 34))) {
    		calculate_outputm166(input);
    	} 
    	if(((((38 < a1562022185) && (229 >= a1562022185)) && (((-82 < a177640787) && (-22 >= a177640787)) && (a1429598563 == 36 &&  cf==1 ))) && ((a1293712589 == 34 && (a1491071731 == 34 && a1909685633 == 34)) && a394986443 == 12))) {
    		calculate_outputm168(input);
    	} 
    } 
    if(((((a1678927341 == 11 && (a491168833 == 8 &&  cf==1 )) && a1293712589 == 34) && ((38 < a1562022185) && (229 >= a1562022185))) && ((a570886160 == 34 && a455265888 == 3) && ((30 < a723108336) && (121 >= a723108336))))) {
    	if(((a1140224045 == 34 && (a1909685633 == 34 && (a771824360 == 10 && ( cf==1  && ((150 < a1811430962) && (349 >= a1811430962)))))) && ((a1538778197 == 3 && ((267 < a2147255888) && (391 >= a2147255888))) && ((245 < a1862658444) && (266 >= a1862658444))))) {
    		calculate_outputm170(input);
    	} 
    } 
    if((((a2128522778 == 34 && a1823597932 == 34) && ((188 < a1189507312) && (267 >= a1189507312))) && ((((-92 < a770071847) && (-2 >= a770071847)) && ((a491168833 == 9 &&  cf==1 ) && ((245 < a1862658444) && (266 >= a1862658444)))) && a1472462791 == 34))) {
    	if((((a1763171942 == 34 && ((a1293712589 == 34 && a976945745 == 3) && a785058364 == 12)) && ((351 < a847823400) && (400 >= a847823400))) && ((a1244737994 == 34 &&  cf==1 ) && ((-92 < a770071847) && (-2 >= a770071847))))) {
    		calculate_outputm171(input);
    	} 
    } 
    if((((a1917402140 == 4 && (a976945745 == 3 && a42170353 == 34)) && a1491071731 == 34) && (((44 < a2139432823) && (247 >= a2139432823)) && (( cf==1  && a491168833 == 10) && a2128522778 == 34)))) {
    	if(((((a785058364 == 12 && ( cf==1  && a880148234 <=  32)) && a1293712589 == 34) && ((7 < a807447096) && (218 >= a807447096))) && (((-11 < a1610801558) && (124 >= a1610801558)) && (a1909685633 == 34 && ((-82 < a177640787) && (-22 >= a177640787)))))) {
    		calculate_outputm174(input);
    	} 
    } 
    if(((a882589857 == 11 && ((a304998879 == 6 && (( cf==1  && a491168833 == 11) && a1491071731 == 34)) && a1823597932 == 34)) && (a1678927341 == 11 && a369624711 == 7))) {
    	if(((a42170353 == 34 && (( cf==1  && a2074917498 == 4) && ((110 < a835146412) && (253 >= a835146412)))) && (a570886160 == 34 && ((a2128522778 == 34 && a1472462791 == 34) && ((-82 < a177640787) && (-22 >= a177640787)))))) {
    		calculate_outputm176(input);
    	} 
    	if(((((a2074917498 == 7 &&  cf==1 ) && a394986443 == 12) && a976945745 == 3) && (((a882589857 == 11 && a1661935098 == 34) && a1678927341 == 11) && a455265888 == 3))) {
    		calculate_outputm179(input);
    	} 
    	if((((((a304998879 == 6 && (a369624711 == 7 && a42170353 == 34)) && a1917402140 == 4) && a771824360 == 10) && a1661935098 == 34) && ( cf==1  && a2074917498 == 8))) {
    		calculate_outputm180(input);
    	} 
    } 
    if(((a976945745 == 3 && (((30 < a723108336) && (121 >= a723108336)) && (a491168833 == 12 &&  cf==1 ))) && (((188 < a1189507312) && (267 >= a1189507312)) && ((a871674684 == 5 && a304998879 == 6) && a1293712589 == 34)))) {
    	if(((a570886160 == 34 && (((38 < a1562022185) && (229 >= a1562022185)) && (( cf==1  && ((156 < a534143625) && (255 >= a534143625))) && ((245 < a1862658444) && (266 >= a1862658444))))) && ((a1661935098 == 34 && a771824360 == 10) && ((188 < a1189507312) && (267 >= a1189507312))))) {
    		calculate_outputm181(input);
    	} 
    } 
}
 void calculate_outputm183(int input) {
    if(((a1491071731 == 33 && (((input == 81) &&  cf==1 ) && a1717386854 == 33)) && (((36 < a835146412) && (110 >= a835146412)) && ((a1293712589 == 33 && a526854419 == 33) && a1909685633 == 33)))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a1862658444 = (((((a1862658444 * a807447096) % 14999) / 5) - 13331) - -5639);
    	a1823597932 = 32 ;
    	a882589857 = ((a304998879 / a394986443) + 9);
    	a1611619350 = 34 ;
    	a1610801558 = ((((a723108336 * a1711061361) - 16260) / 5) - 21259);
    	a771824360 = ((a976945745 - a1538778197) - -7);
    	a835146412 = (((((a1610801558 * a1562022185) % 14999) / 5) + 15766) + -26856);
    	a566378298 = 33 ;
    	a770071847 = (((((((a835146412 * a2139432823) % 14999) % 14931) - 15067) * 1) / 5) - 665);
    	a1189507312 = (((((a1189507312 * a770071847) % 14999) - 10000) * 1) / 5);
    	a1717386854 = 32 ;
    	a1192100362 = ((((((a912673804 * a2147255888) / 5) % 80) + -18) + -20680) - -20680);
    	a1140224045 = 32 ;
    	a42170353 = 32 ;
    	a976945745 = ((a785058364 - a882589857) + -1);
    	a723108336 = (((((((a723108336 * a807447096) % 14999) % 14941) - 15058) - 2) - -13732) - 13730);
    	a304998879 = ((a1917402140 * a815886759) + 1);
    	a369624711 = (a871674684 + 2);
    	a785058364 = ((a871674684 + a1678927341) + -3);
    	a337942537 = (a882589857 - 5); 
    	 printf("");//printf("%d\n", 123); fflush(stdout); 
    } if(((((-36 < a1610801558) && (-11 >= a1610801558)) && ((((185 < a1862658444) && (245 >= a1862658444)) && a394986443 == 11) && a1491071731 == 33)) && ((a785058364 == 11 && ( cf==1  && (input == 74))) && a42170353 == 33))) {
    	cf = 0;
    	a2029515987 = 33 ;
    	a1541342791 = ((((((a1541342791 * a723108336) % 14999) % 81) + 400) * 5) / 5);
    	a1363618726 = ((((a1189507312 * a835146412) * 1) / 5) + 22207); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm184(int input) {
    if(((((185 < a1862658444) && (245 >= a1862658444)) && (a570886160 == 33 && ((-113 < a1562022185) && (38 >= a1562022185)))) && (((-5 < a1711061361) && (114 >= a1711061361)) && (a369624711 == 6 && (( cf==1  && (input == 75)) && a1909685633 == 33))))) {
    	cf = 0;
    	a1140224045 = 32 ;
    	a785058364 = (a1917402140 - -8);
    	a304998879 = (a369624711 + -2);
    	a455265888 = (a785058364 - 9);
    	a1661935098 = 32 ;
    	a1909685633 = 32 ;
    	a570886160 = 32 ;
    	a871674684 = ((a785058364 - a976945745) + -5);
    	a536820638 = ((((((a1541342791 * a1541342791) % 14999) - 7389) * 1) % 62) + -115);
    	a1649499722 = (a882589857 - -3);
    	a1678927341 = a771824360;
    	a1711061361 = (((((a1711061361 * a1610801558) + -2076) + 31494) * 1) - 40953);
    	a1610801558 = ((((((a1610801558 * a1862658444) * 3) * 10) / 9) + 7990) + -1825);
    	a42170353 = 32 ;
    	a796195142 = 32 ;
    	a1611619350 = 35 ;
    	a882589857 = a771824360;
    	a771824360 = ((a337942537 / a435971279) - -8);
    	a1562022185 = ((((((a1562022185 * a177640787) % 14999) % 14943) - 15055) + -3) - 0); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a1293712589 == 33 && ((( cf==1  && (input == 78)) && a785058364 == 11) && ((74 < a2147255888) && (267 >= a2147255888)))) && (a1661935098 == 33 && (a304998879 == 5 && a570886160 == 33)))) {
    	cf = 0;
    	a169710014 = ((((((a1862658444 * a1862658444) % 14999) % 46) - -245) + -9) - 9);
    	a1224074430 = (((((a169710014 * a169710014) % 14999) - 15536) - 741) * 1);
    	a796195142 = 36 ;
    	a1192100362 = (((((((a723108336 * a1541342791) % 14999) % 14950) + -15048) + -3) / 5) + -10503); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm186(int input) {
    if((((a1909685633 == 33 && (((-159 < a2139432823) && (44 >= a2139432823)) && ((input == 57) &&  cf==1 ))) && a570886160 == 33) && (a1823597932 == 33 && (((-137 < a770071847) && (-92 >= a770071847)) && a976945745 == 2)))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a1228745271 = ((((((a1541342791 * a1541342791) % 14999) - 14968) % 14934) - -15065) * 1);
    	a1232289479 = ((a785058364 / a1917402140) - -6);
    	a2052893331 = (a771824360 + 8); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a369624711 == 6 && (a785058364 == 11 && (a2128522778 == 33 && ( cf==1  && (input == 110))))) && (((40 < a1189507312) && (188 >= a1189507312)) && (a1909685633 == 33 && a455265888 == 2)))) {
    	cf = 0;
    	a771824360 = (a1917402140 + 5);
    	a491168833 = ((a1917402140 / a976945745) - -5);
    	a369624711 = (a455265888 + 3);
    	a394986443 = (a435971279 - -3);
    	a2139432823 = ((((a2139432823 * a835146412) + -7691) - 2862) + -229);
    	a1228745271 = ((((((a1541342791 * a1541342791) % 14999) / 5) % 11) - -119) + 1);
    	a1541342791 = ((((((a1541342791 * a1228745271) % 14999) / 5) % 59) - -258) - 1); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((a871550570 == 33 && (((((134 < a847823400) && (351 >= a847823400)) && (a369624711 == 6 && (( cf==1  && (input == 113)) && a1293712589 == 33))) && a337942537 == 5) && a42170353 == 33))) {
    	cf = 0;
    	a2052893331 = ((a394986443 / a1917402140) + 14);
    	a796195142 = 33 ;
    	a1228745271 = ((((((a1541342791 * a1541342791) % 14999) * 2) + 0) % 14934) - -15065);
    	a1232289479 = (a882589857 + -1); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a369624711 == 6 && ((a394986443 == 11 && (((40 < a1189507312) && (188 >= a1189507312)) && ((36 < a835146412) && (110 >= a835146412)))) && a1917402140 == 3)) && (((input == 111) &&  cf==1 ) && a871674684 == 4))) {
    	cf = 0;
    	a1232289479 = (a1409922970 + -3);
    	a796195142 = 33 ;
    	a2052893331 = (a304998879 - -12);
    	a1228745271 = (((((a912673804 * a1862658444) / 5) + -4276) * -1) / 10); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((a976945745 == 2 && (a785058364 == 11 && ((a815886759 == 2 && ((((input == 103) &&  cf==1 ) && a369624711 == 6) && a1909685633 == 33)) && a394986443 == 11)))) {
    	cf = 0;
    	a2052893331 = ((a455265888 - a304998879) - -20);
    	a1232289479 = (a2052893331 + -5);
    	a796195142 = 33 ;
    	a15249890 = ((((((a1541342791 * a1541342791) % 14999) - 653) * 1) % 27) - -294); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((((-159 < a2139432823) && (44 >= a2139432823)) && a1661935098 == 33) && ((((( cf==1  && (input == 112)) && a455265888 == 2) && ((134 < a847823400) && (351 >= a847823400))) && a1678927341 == 10) && a1823597932 == 33))) {
    	cf = 0;
    	a15249890 = (((((((a1541342791 * a1541342791) % 14999) - 1744) - 2388) - -16410) % 14838) - -15161);
    	a880148234 = (((((a1541342791 * a15249890) % 14999) / 5) - -16364) * 1);
    	a796195142 = 34 ;
    	a491168833 = (a1917402140 - -7); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm187(int input) {
    if((((((a976945745 == 2 && ( cf==1  && (input == 93))) && ((-96 < a912673804) && (35 >= a912673804))) && ((40 < a1189507312) && (188 >= a1189507312))) && a1472462791 == 33) && (((-118 < a723108336) && (30 >= a723108336)) && ((-5 < a1711061361) && (114 >= a1711061361))))) {
    	cf = 0;
    	a42170353 = 34 ;
    	a369624711 = (a455265888 - -5);
    	a976945745 = (a337942537 - 2);
    	a871674684 = (a1678927341 - 7);
    	a1189507312 = ((((((a770071847 * a1711061361) / 5) * 5) - 12261) % 39) + 238);
    	a570886160 = 32 ;
    	a835146412 = (((((a847823400 * a1189507312) % 14999) - 24068) * 1) + -3189);
    	a815886759 = (a1678927341 - 9);
    	a785058364 = (a304998879 - -5);
    	a912673804 = (((((((a912673804 * a847823400) % 14999) / 5) - 7142) + -8463) % 29) - -83);
    	a337942537 = (a394986443 + -6);
    	a15249890 = ((((((a1541342791 * a1541342791) % 14999) * 2) % 14838) + 15161) + 1);
    	a177640787 = ((((((a177640787 * a1189507312) % 14999) / 5) % 29) - 51) + -1);
    	a1711061361 = (((((a807447096 * a912673804) + -4510) / 5) - -14600) - 38836);
    	a807447096 = (((((a1562022185 * a1610801558) % 14977) - 15021) + -2) * 1);
    	a771824360 = (a976945745 + 7);
    	a1717386854 = 32 ;
    	a871550570 = 32 ;
    	a1429598563 = 36 ;
    	a1917402140 = ((a1409922970 / a1678927341) - -1);
    	a1140224045 = 32 ;
    	a2147255888 = ((((a1562022185 * a912673804) + -24483) * 1) + -6400);
    	a526854419 = 32 ;
    	a723108336 = (((((a723108336 * a2139432823) % 45) + 75) + -25911) + 25912);
    	a1293712589 = 34 ;
    	a1472462791 = 33 ;
    	a796195142 = 34 ;
    	a304998879 = (a1409922970 - 9);
    	a882589857 = ((a976945745 / a1678927341) + 11);
    	a1862658444 = ((((((a1862658444 * a1562022185) % 14999) - 13660) % 10) + 255) + 0);
    	a770071847 = ((((((a1562022185 * a1562022185) % 14999) / 5) / 5) % 22) - 117);
    	a1661935098 = 34 ;
    	a2128522778 = 32 ;
    	a491168833 = (a1409922970 - 6);
    	a2139432823 = ((((((a2139432823 * a1189507312) % 14999) % 14920) - 15078) - 3) - 0);
    	a455265888 = (a1409922970 + -10);
    	a1678927341 = (a337942537 + 3); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((a455265888 == 2 && (((40 < a1189507312) && (188 >= a1189507312)) && (a369624711 == 6 && ((-118 < a723108336) && (30 >= a723108336))))) && a1717386854 == 33) && (( cf==1  && (input == 56)) && a42170353 == 33))) {
    	cf = 0;
    	a1611619350 = 34 ;
    	a796195142 = 32 ;
    	a883263484 = 36 ;
    	a1192100362 = (((((((a1541342791 * a1541342791) % 14999) / 5) + -21838) + 47904) % 80) + 103); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm192(int input) {
    if(((((-120 < a177640787) && (-82 >= a177640787)) && a976945745 == 2) && ((((( cf==1  && (input == 103)) && ((-36 < a1610801558) && (-11 >= a1610801558))) && a394986443 == 11) && ((185 < a1862658444) && (245 >= a1862658444))) && a369624711 == 6))) {
    	cf = 0;
    	a1562022185 = (((((a807447096 * a835146412) - -13402) % 95) + 118) - -7);
    	a1491071731 = 34 ;
    	a771824360 = ((a976945745 * a435971279) + -16);
    	a847823400 = (((((a835146412 * a1562022185) % 24) - -361) - 2) + -3);
    	a1711061361 = ((((((a1711061361 * a2147255888) % 14999) % 58) - -172) - 6794) - -6794);
    	a1917402140 = ((a882589857 / a882589857) + 3);
    	a796195142 = 34 ;
    	a1909685633 = 34 ;
    	a1538778197 = ((a455265888 - a771824360) - -11);
    	a807447096 = (((((((((a1189507312 * a1189507312) % 14999) % 105) - -87) * 9) / 10) * 5) % 105) - -56);
    	a723108336 = ((((((a723108336 * a847823400) % 14999) + -9444) - -12858) % 45) - -75);
    	a2128522778 = 34 ;
    	a337942537 = ((a304998879 + a882589857) + -9);
    	a15249890 = ((((((a1541342791 * a1862658444) % 14999) % 27) - -294) - 28444) - -28446);
    	a1293712589 = 34 ;
    	a785058364 = (a1538778197 - -9);
    	a42170353 = 34 ;
    	a1610801558 = ((((((a1610801558 * a847823400) - 15830) * 1) - 141) % 67) - -71);
    	a912673804 = ((((((a912673804 * a770071847) % 29) - -66) * 5) % 29) + 54);
    	a770071847 = (((((((a1711061361 * a1711061361) % 14999) % 44) - 59) + 20929) / 5) - 4192);
    	a738555482 = a394986443;
    	a1661935098 = 34 ;
    	a1192100362 = ((((((a1541342791 * a15249890) % 14999) % 14887) - -15111) - -2) * 1);
    	a394986443 = (a455265888 + 10);
    	a177640787 = (((((((a177640787 * a723108336) % 29) - 26) * 10) / 9) - -6835) - 6835);
    	a815886759 = (a871674684 + -1);
    	a1763171942 = 34 ;
    	a1140224045 = 34 ;
    	a976945745 = (a871674684 - 1);
    	a1862658444 = ((((((a1862658444 * a847823400) % 14999) - -12503) * 1) % 10) - -246);
    	a835146412 = (((((((a723108336 * a1562022185) / 5) % 71) + 112) * 5) % 71) + 160);
    	a369624711 = (a455265888 + 5);
    	a1678927341 = ((a871674684 + a455265888) + 5);
    	a882589857 = (a455265888 + 9);
    	a871674684 = (a771824360 - 5); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((-45 < a807447096) && (7 >= a807447096)) && (a871550570 == 33 && (a1491071731 == 33 && (((-118 < a723108336) && (30 >= a723108336)) && (((-36 < a1610801558) && (-11 >= a1610801558)) && (( cf==1  && (input == 105)) && a871674684 == 4))))))) {
    	cf = 0;
    	a15249890 = (((((((a1541342791 * a1541342791) % 14999) % 27) - -294) / 5) + -18659) - -18887);
    	a1293712589 = 34 ;
    	a1610801558 = (((((a807447096 * a2139432823) % 67) + 56) + 0) - 0);
    	a1192100362 = ((((((a15249890 * a1541342791) % 14999) + 2362) * 1) % 14887) + 15111);
    	a394986443 = ((a771824360 - a1538778197) - -5);
    	a1562022185 = (((((a1562022185 * a835146412) % 95) - -133) * 1) + 0);
    	a1140224045 = 34 ;
    	a1711061361 = (((((((a1711061361 * a1192100362) % 14999) % 58) + 173) + -21376) + -4417) + 25792);
    	a723108336 = ((((((a723108336 * a847823400) % 14999) % 45) + 76) + -1) * 1);
    	a42170353 = 34 ;
    	a835146412 = ((((((a1610801558 * a15249890) % 14999) / 5) % 71) + 182) * 1);
    	a1909685633 = 34 ;
    	a976945745 = ((a771824360 / a882589857) + 3);
    	a369624711 = ((a435971279 / a976945745) - -3);
    	a2128522778 = 34 ;
    	a882589857 = (a304998879 + 6);
    	a807447096 = ((((((a770071847 * a2139432823) % 14999) % 105) + 112) * 1) * 1);
    	a796195142 = 34 ;
    	a912673804 = ((((((a912673804 * a1610801558) / 5) - 10588) + -4225) % 29) + 89);
    	a771824360 = (a785058364 - 1);
    	a337942537 = ((a455265888 - a815886759) - -6);
    	a1862658444 = (((((((a1862658444 * a847823400) % 14999) % 10) + 246) - -10) + 23172) + -23179);
    	a738555482 = (a815886759 + 9);
    	a847823400 = ((((((a1189507312 * a2139432823) % 14999) + 10828) * 1) % 24) + 373);
    	a770071847 = ((((((a2139432823 * a15249890) % 14999) - -3660) * 1) % 44) - 74);
    	a1538778197 = (a455265888 + 1);
    	a1661935098 = 34 ;
    	a177640787 = ((((((((a177640787 * a1192100362) % 14999) % 29) - 50) * 5) + 17802) % 29) - 52);
    	a1763171942 = 34 ;
    	a1917402140 = ((a304998879 * a304998879) - 21);
    	a815886759 = ((a337942537 / a1678927341) + 3);
    	a785058364 = (a871674684 - -8);
    	a1491071731 = 34 ;
    	a871674684 = (a1678927341 + -5);
    	a1678927341 = (a304998879 - -6); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a455265888 == 2 && (a976945745 == 2 && (((36 < a835146412) && (110 >= a835146412)) && ((input == 104) &&  cf==1 )))) && ((134 < a847823400) && (351 >= a847823400))) && (((-118 < a723108336) && (30 >= a723108336)) && a304998879 == 5))) {
    	cf = 0;
    	a337942537 = ((a369624711 / a394986443) - -6);
    	a42170353 = 34 ;
    	a1661935098 = 34 ;
    	a1192100362 = (((((a1541342791 * a1541342791) % 14999) / 5) + 18890) / 5);
    	a1610801558 = ((((((a1189507312 * a2139432823) % 14999) + -2003) / 5) % 67) - -57);
    	a1491071731 = 34 ;
    	a1909685633 = 34 ;
    	a15249890 = ((((((a2147255888 * a1862658444) % 14999) % 27) + 274) / 5) + 236);
    	a723108336 = (((((a723108336 * a177640787) + -20223) * 1) % 45) + 116);
    	a1711061361 = ((((((a1711061361 * a1610801558) + -16820) % 58) + 191) * 9) / 10);
    	a738555482 = ((a369624711 * a1538778197) + -1);
    	a771824360 = (a871674684 + 6);
    	a1562022185 = (((((a1562022185 * a177640787) * 2) % 95) + 133) + 2);
    	a1763171942 = 34 ;
    	a1862658444 = ((((((a835146412 * a1711061361) - 17514) % 10) - -256) / 5) + 205);
    	a796195142 = 34 ;
    	a835146412 = ((((((a723108336 * a807447096) % 71) + 181) - -23196) / 5) + -4491);
    	a1293712589 = 34 ;
    	a871674684 = (a1678927341 + -5);
    	a912673804 = ((((((a912673804 * a770071847) % 29) + 64) + 0) + 22695) + -22692);
    	a1917402140 = ((a337942537 * a1678927341) - 56);
    	a976945745 = (a455265888 + 1);
    	a847823400 = ((((((a847823400 * a1610801558) % 14999) % 24) - -376) * 5) / 5);
    	a807447096 = (((((((a1610801558 * a1711061361) % 105) - -113) * 5) + -17167) % 105) + 154);
    	a394986443 = ((a369624711 / a815886759) - -9);
    	a2128522778 = 34 ;
    	a1538778197 = (a435971279 + -10);
    	a770071847 = ((((((a1192100362 * a1711061361) % 14999) % 44) + -63) + -15) - 2);
    	a815886759 = ((a435971279 + a1678927341) + -20);
    	a177640787 = (((((((a2139432823 * a1562022185) % 14999) - -6710) / 5) + -3639) % 29) - 51);
    	a882589857 = (a771824360 - -1);
    	a1140224045 = 34 ;
    	a785058364 = (a1678927341 - -2);
    	a369624711 = (a1678927341 - 3);
    	a1678927341 = ((a337942537 * a304998879) + -19); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((a771824360 == 9 && (a882589857 == 10 && a1678927341 == 10)) && ((-113 < a1562022185) && (38 >= a1562022185))) && ((-137 < a770071847) && (-92 >= a770071847))) && (( cf==1  && (input == 101)) && a2128522778 == 33))) {
    	cf = 0;
    	a871550570 = 34 ;
    	a847823400 = ((((((a847823400 * a770071847) % 14999) - 12524) + 24891) % 24) + 375);
    	a1293712589 = 34 ;
    	a369624711 = (a1678927341 + -3);
    	a882589857 = (a369624711 - -4);
    	a394986443 = ((a369624711 / a1678927341) + 12);
    	a169710014 = ((((a1711061361 * a912673804) + -10484) - 3237) - 1758);
    	a455265888 = (a394986443 - 9);
    	a1842951122 = ((a337942537 / a1538778197) + 6);
    	a1909685633 = 34 ;
    	a912673804 = ((((((a2147255888 * a2147255888) % 14999) + 12021) % 29) + 56) - -5);
    	a1862658444 = (((((a1862658444 * a723108336) * 1) / 5) % 10) + 256);
    	a1763171942 = 34 ;
    	a2147255888 = ((((((a1562022185 * a1562022185) % 61) + 329) - 30044) - 132) + 30176);
    	a976945745 = (a785058364 - 8);
    	a42170353 = 34 ;
    	a337942537 = 6;
    	a1711061361 = (((((a1711061361 * a807447096) % 58) + 172) - -1) - -1);
    	a815886759 = (a369624711 + -4);
    	a871674684 = (a1678927341 - 5);
    	a1420843252 = 36 ;
    	a770071847 = (((((a723108336 * a835146412) % 44) - 46) + -28930) - -28929);
    	a807447096 = ((((((a723108336 * a2139432823) * 1) * 1) * 1) % 105) - -112);
    	a785058364 = ((a882589857 * a976945745) + -21);
    	a1562022185 = ((((((a1562022185 * a835146412) / 5) % 95) + 134) + -24256) + 24256);
    	a1189507312 = ((((((a1189507312 * a723108336) * 1) % 39) + 227) - -23357) + -23356);
    	a1661935098 = 34 ;
    	a1491071731 = 34 ;
    	a2128522778 = 34 ;
    	a771824360 = ((a435971279 + a815886759) - 6);
    	a1610801558 = ((((((a1610801558 * a177640787) % 67) - 3) - -25) + -18167) + 18168);
    	a796195142 = 36 ;
    	a177640787 = (((((a177640787 * a723108336) % 29) - 52) + 2) + -1);
    	a1538778197 = 3;
    	a304998879 = (a1842951122 + -2);
    	a1140224045 = 34 ;
    	a835146412 = (((((((a835146412 * a1541342791) % 14999) - -3914) / 5) / 5) % 71) + 181);
    	a1678927341 = a882589857;
    	a723108336 = ((((((a723108336 * a2139432823) % 45) - -76) * 5) % 45) - -43); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } if(((a1661935098 == 33 && (a1678927341 == 10 && ((( cf==1  && (input == 80)) && a1763171942 == 33) && a337942537 == 5))) && (a1140224045 == 33 && ((36 < a835146412) && (110 >= a835146412))))) {
    	cf = 0;
    	a435971279 = (a871674684 - -8);
    	a1811430962 = (((((((a1541342791 * a1541342791) % 14999) % 99) - -250) + 1) / 5) - -246); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm18(int input) {
    if(((a570886160 == 33 && ((((-137 < a770071847) && (-92 >= a770071847)) && a1917402140 == 3) && a771824360 == 9)) && (((a435971279 == 7 &&  cf==1 ) && a976945745 == 2) && a369624711 == 6))) {
    	if(((((-137 < a770071847) && (-92 >= a770071847)) && (a394986443 == 11 && a337942537 == 5)) && ((((40 < a1189507312) && (188 >= a1189507312)) && (a570886160 == 33 && (a597484636 == 35 &&  cf==1 ))) && a1823597932 == 33))) {
    		calculate_outputm183(input);
    	} 
    } 
    if(((a369624711 == 6 && ((a435971279 == 8 &&  cf==1 ) && ((-36 < a1610801558) && (-11 >= a1610801558)))) && ((a871674684 == 4 && (a1909685633 == 33 && a526854419 == 33)) && a1823597932 == 33))) {
    	if(((((-5 < a1711061361) && (114 >= a1711061361)) && (((36 < a835146412) && (110 >= a835146412)) && a1909685633 == 33)) && ((a871674684 == 4 && (a976945745 == 2 && (a1351640013 == 34 &&  cf==1 ))) && a1140224045 == 33))) {
    		calculate_outputm184(input);
    	} 
    } 
    if(((a570886160 == 33 && ( cf==1  && a435971279 == 9)) && (a1661935098 == 33 && (a337942537 == 5 && (((-45 < a807447096) && (7 >= a807447096)) && (a976945745 == 2 && ((-137 < a770071847) && (-92 >= a770071847)))))))) {
    	if(((a1917402140 == 3 && ((a304998879 == 5 && ( cf==1  && a1409922970 == 12)) && a1293712589 == 33)) && ((((-45 < a807447096) && (7 >= a807447096)) && a815886759 == 2) && a1661935098 == 33))) {
    		calculate_outputm186(input);
    	} 
    	if(((((a1472462791 == 33 && (((-159 < a2139432823) && (44 >= a2139432823)) && ((-96 < a912673804) && (35 >= a912673804)))) && a771824360 == 9) && ((-120 < a177640787) && (-82 >= a177640787))) && (a871674684 == 4 && ( cf==1  && a1409922970 == 13)))) {
    		calculate_outputm187(input);
    	} 
    } 
    if(((a1491071731 == 33 && ((( cf==1  && a435971279 == 13) && ((-96 < a912673804) && (35 >= a912673804))) && a871550570 == 33)) && ((((40 < a1189507312) && (188 >= a1189507312)) && a871674684 == 4) && a1293712589 == 33))) {
    	if((((a785058364 == 11 && (a1293712589 == 33 && a871550570 == 33)) && a976945745 == 2) && ((( cf==1  && a2029515987 == 32) && ((-5 < a1711061361) && (114 >= a1711061361))) && a1909685633 == 33))) {
    		calculate_outputm192(input);
    	} 
    } 
}
 void calculate_outputm196(int input) {
    if(((a1661935098 == 33 && (((-45 < a807447096) && (7 >= a807447096)) && ( cf==1  && (input == 79)))) && (a1717386854 == 33 && ((a1140224045 == 33 && ((-36 < a1610801558) && (-11 >= a1610801558))) && ((134 < a847823400) && (351 >= a847823400)))))) {
    	cf = 0;
    	a795297040 = 36 ;
    	a796195142 = 33 ;
    	a1862658444 = ((((((a1862658444 * a847823400) % 14999) + 13443) * 1) + 610) + -33524);
    	a2052893331 = (a1538778197 + 12);
    	a15249890 = ((((((a1610801558 * a1711061361) % 27) - -295) + 18444) * 1) - 18444);
    	a1562022185 = (((((a1562022185 * a2147255888) * 1) - 35) % 95) - -133);
    	a1711061361 = (((((((a1711061361 * a1541342791) % 14999) - -13785) % 58) - -173) / 5) - -128);
    	a807447096 = (((((a807447096 * a177640787) - -18428) % 105) + 62) - 13); 
    	 printf("");//printf("%d\n", 119); fflush(stdout); 
    } 
}
 void calculate_outputm197(int input) {
    if((((input == 101) &&  cf==1 ) && (a976945745 == 2 && (a882589857 == 10 && ((((74 < a2147255888) && (267 >= a2147255888)) && (((-120 < a177640787) && (-82 >= a177640787)) && ((-36 < a1610801558) && (-11 >= a1610801558)))) && a1472462791 == 33))))) {
    	cf = 0;
    	a1140224045 = 33 ;
    	a1611619350 = 36 ;
    	a723108336 = ((((((a723108336 * a1541342791) % 14999) % 14941) + -15058) - 1) * 1);
    	a976945745 = (a394986443 - 9);
    	a1917402140 = (a491168833 + -8);
    	a1763171942 = 32 ;
    	a177640787 = ((((a807447096 * a1862658444) + -11020) - 5164) * 1);
    	a337942537 = (a1678927341 - 6);
    	a1909685633 = 33 ;
    	a2147255888 = ((((((a2147255888 * a1541342791) % 14999) + 10711) + 1560) - 8027) - 29650);
    	a1538778197 = (a1678927341 - 9);
    	a1562022185 = ((((((a1562022185 * a177640787) % 14999) % 14943) - 15055) - 3) * 1);
    	a304998879 = (a815886759 + 3);
    	a1491071731 = 33 ;
    	a882589857 = (a455265888 - -8);
    	a771824360 = ((a1538778197 - a337942537) - -11);
    	a807447096 = (((((((a1189507312 * a177640787) % 14999) % 25) - 19) / 5) - 9179) - -9151);
    	a2128522778 = 33 ;
    	a1823597932 = 33 ;
    	a1610801558 = (((((((a1610801558 * a835146412) % 14999) - -3628) % 14982) + -15017) + 16227) + -16228);
    	a1717386854 = 33 ;
    	a1711061361 = (((((a1711061361 * a1189507312) % 14999) / 5) / 5) - 21427);
    	a563057875 = (a369624711 + 7);
    	a1678927341 = ((a815886759 - a771824360) - -17);
    	a1293712589 = 33 ;
    	a871674684 = ((a491168833 * a976945745) - 8);
    	a2139432823 = ((((((a847823400 * a847823400) % 14999) / 5) % 101) - 57) + 1);
    	a1661935098 = 33 ;
    	a1472462791 = 33 ;
    	a796195142 = 32 ;
    	a1218693435 = 35 ;
    	a42170353 = 32 ;
    	a369624711 = (a785058364 - 5); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } if((((a1140224045 == 33 && (a771824360 == 9 && a1661935098 == 33)) && a42170353 == 33) && ((((input == 110) &&  cf==1 ) && a1763171942 == 33) && ((74 < a2147255888) && (267 >= a2147255888))))) {
    	cf = 0;
    	a12903048 = ((a871674684 + a1538778197) - -9);
    	a796195142 = 33 ;
    	a597484636 = 34 ;
    	a2052893331 = (a337942537 + 5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm19(int input) {
    if(((a1538778197 == 2 && (((-36 < a1610801558) && (-11 >= a1610801558)) && (a1140224045 == 33 && (( cf==1  && ((107 < a1228745271) && (131 >= a1228745271))) && ((-118 < a723108336) && (30 >= a723108336)))))) && (a304998879 == 5 && ((-113 < a1562022185) && (38 >= a1562022185))))) {
    	if(((((((185 < a1862658444) && (245 >= a1862658444)) && a42170353 == 33) && ((40 < a1189507312) && (188 >= a1189507312))) && a1538778197 == 2) && ((a1678927341 == 10 && (a491168833 == 6 &&  cf==1 )) && ((-5 < a1711061361) && (114 >= a1711061361))))) {
    		calculate_outputm196(input);
    	} 
    	if(((( cf==1  && a491168833 == 11) && ((185 < a1862658444) && (245 >= a1862658444))) && (a1293712589 == 33 && (a771824360 == 9 && (a1472462791 == 33 && (((-45 < a807447096) && (7 >= a807447096)) && a1140224045 == 33)))))) {
    		calculate_outputm197(input);
    	} 
    } 
}
 void calculate_outputm198(int input) {
    if(((a771824360 == 9 && ((a1909685633 == 33 && ( cf==1  && (input == 57))) && a1678927341 == 10)) && (a785058364 == 11 && (((36 < a835146412) && (110 >= a835146412)) && a871674684 == 4)))) {
    	cf = 0;
    	a2029515987 = 36 ;
    	a1377897560 = (a394986443 + 2); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a882589857 == 10 && ((( cf==1  && (input == 111)) && a871674684 == 4) && ((-45 < a807447096) && (7 >= a807447096)))) && (((134 < a847823400) && (351 >= a847823400)) && (((36 < a835146412) && (110 >= a835146412)) && a1678927341 == 10)))) {
    	cf = 0;
    	a2029515987 = 36 ;
    	a1377897560 = ((a882589857 / a1678927341) - -12); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if((((((-137 < a770071847) && (-92 >= a770071847)) && a1491071731 == 33) && a1917402140 == 3) && (((-45 < a807447096) && (7 >= a807447096)) && ((a882589857 == 10 && ((input == 113) &&  cf==1 )) && a42170353 == 33)))) {
    	cf = 0;
    	a1717386854 = 32 ;
    	a1491071731 = 32 ;
    	a1711061361 = ((((((a1711061361 * a2147255888) % 14999) * 2) * 1) / 5) - 23351);
    	a2052893331 = (a455265888 + 15);
    	a785058364 = (a976945745 - -8);
    	a1232289479 = (a2052893331 + -7);
    	a796195142 = 33 ;
    	a76578247 = ((((a723108336 * a723108336) / 5) / 5) + 26970);
    	a2128522778 = 32 ;
    	a1823597932 = 32 ;
    	a1189507312 = ((((a177640787 * a2139432823) + -21713) + -1987) - 484);
    	a1763171942 = 32 ;
    	a847823400 = ((((((a847823400 * a1541342791) % 14999) - 18864) * 10) / 9) / 5);
    	a882589857 = ((a1538778197 - a1678927341) + 17);
    	a1538778197 = (a871674684 + -3); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a570886160 == 33 && (a785058364 == 11 && (a1661935098 == 33 && a871674684 == 4))) && (a1538778197 == 2 && (( cf==1  && (input == 110)) && a1823597932 == 33)))) {
    	cf = 0;
    	a2029515987 = 36 ;
    	a1377897560 = (a455265888 + 11); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm200(int input) {
    if(((((134 < a847823400) && (351 >= a847823400)) && (a2128522778 == 33 && ((40 < a1189507312) && (188 >= a1189507312)))) && (((185 < a1862658444) && (245 >= a1862658444)) && (a1717386854 == 33 && (a882589857 == 10 && ((input == 75) &&  cf==1 )))))) {
    	cf = 0;
    	a1763171942 = 32 ;
    	a815886759 = ((a304998879 - a1678927341) + 6);
    	a807447096 = ((((a807447096 * a847823400) - 3545) - 10705) - 197);
    	a1140224045 = 32 ;
    	a871674684 = (a455265888 + 2);
    	a1472462791 = 32 ;
    	a1649499722 = (a1917402140 + 8);
    	a1293712589 = 32 ;
    	a796195142 = 32 ;
    	a882589857 = (a1917402140 + 6);
    	a1491071731 = 32 ;
    	a177640787 = ((((a177640787 * a770071847) - 18512) * 2) - 6239);
    	a1678927341 = ((a976945745 * a1917402140) + 6);
    	a1485869055 = 33 ;
    	a1862658444 = (((((a1862658444 * a2139432823) % 14999) + -13566) * 1) + -3);
    	a1189507312 = (((((a1189507312 * a1541342791) % 14999) + 589) * -1) * 1);
    	a42170353 = 32 ;
    	a1611619350 = 35 ;
    	a1917402140 = (a337942537 - 2); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } 
}
 void calculate_outputm201(int input) {
    if(((((36 < a835146412) && (110 >= a835146412)) && (a1140224045 == 33 && ( cf==1  && (input == 75)))) && ((((-118 < a723108336) && (30 >= a723108336)) && (a976945745 == 2 && a1763171942 == 33)) && a882589857 == 10))) {
    	cf = 0;
    	a771824360 = ((a1538778197 / a871674684) + 8);
    	a723108336 = ((((a723108336 * a1862658444) - -20865) / 5) + -10105);
    	a597484636 = 36 ;
    	a785058364 = a1678927341;
    	a976945745 = (a806730426 + -6);
    	a1823597932 = 32 ;
    	a1717386854 = 32 ;
    	a304998879 = ((a815886759 - a1678927341) - -12);
    	a1862658444 = (((((a1541342791 * a1562022185) % 14999) - -2320) * 2) + -4577);
    	a1189507312 = ((((a1189507312 * a807447096) - 13706) + -1865) + -25);
    	a807447096 = ((((((a807447096 * a723108336) % 14999) - 5989) - 8609) % 14977) + -15021);
    	a1140224045 = 32 ;
    	a1763171942 = 32 ;
    	a1611619350 = 32 ;
    	a177640787 = (((((a177640787 * a770071847) * -1) / 10) + -5179) * 4);
    	a815886759 = (a771824360 - 7);
    	a2128522778 = 32 ;
    	a1293712589 = 32 ;
    	a369624711 = (a1917402140 + 3);
    	a402335329 = 32 ;
    	a882589857 = ((a455265888 - a337942537) - -12);
    	a796195142 = 32 ;
    	a42170353 = 32 ;
    	a1491071731 = 32 ;
    	a1678927341 = (a455265888 - -8); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1823597932 == 33 && (a815886759 == 2 && ((input == 76) &&  cf==1 ))) && (a771824360 == 9 && (a976945745 == 2 && (a1293712589 == 33 && a1763171942 == 33))))) {
    	cf = 0;
    	a883263484 = 32 ;
    	a796195142 = 33 ;
    	a1485869055 = 34 ;
    	a2052893331 = (a815886759 - -10); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm204(int input) {
    if(((((-113 < a1562022185) && (38 >= a1562022185)) && a1140224045 == 33) && (((-36 < a1610801558) && (-11 >= a1610801558)) && ((((74 < a2147255888) && (267 >= a2147255888)) && (a815886759 == 2 && ((input == 98) &&  cf==1 ))) && a1823597932 == 33)))) {
    	cf = 0;
    	a976945745 = (a1678927341 + -8);
    	a337942537 = (a1377897560 + -9);
    	a2139432823 = (((((((a1711061361 * a1862658444) % 101) + -56) + -2) * 5) % 101) - 56);
    	a526854419 = 33 ;
    	a1140224045 = 33 ;
    	a1472462791 = 33 ;
    	a536820638 = ((((a835146412 * a1862658444) * 1) + 1331) * 1);
    	a871550570 = 33 ;
    	a1189507312 = ((((((a1189507312 * a177640787) * 1) % 73) - -116) * 10) / 9);
    	a1610801558 = (((((((a1610801558 * a912673804) % 12) - 22) + 4221) * 5) % 12) - 28);
    	a369624711 = (a1538778197 + 4);
    	a2029515987 = 32 ;
    	a912673804 = ((((((a912673804 * a2147255888) % 65) + -30) + -29479) + 21123) - -8356); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((( cf==1  && (input == 79)) && a1909685633 == 33) && ((-118 < a723108336) && (30 >= a723108336))) && (a304998879 == 5 && (((-96 < a912673804) && (35 >= a912673804)) && (a785058364 == 11 && a871550570 == 33))))) {
    	cf = 0;
    	a1611619350 = 34 ;
    	a796195142 = 32 ;
    	a883263484 = 34 ;
    	a1192100362 = (((((a835146412 * a1711061361) % 80) + 144) - -1) + -3); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm20(int input) {
    if((((a394986443 == 11 && a1763171942 == 33) && ((134 < a847823400) && (351 >= a847823400))) && ((((-5 < a1711061361) && (114 >= a1711061361)) && (a1717386854 == 33 && ( cf==1  && a2029515987 == 32))) && ((-118 < a723108336) && (30 >= a723108336))))) {
    	if(((a871674684 == 4 && ((((74 < a2147255888) && (267 >= a2147255888)) && ((-120 < a177640787) && (-82 >= a177640787))) && ((-113 < a1562022185) && (38 >= a1562022185)))) && ((( cf==1  && 156 < a536820638) && ((36 < a835146412) && (110 >= a835146412))) && a570886160 == 33))) {
    		calculate_outputm198(input);
    	} 
    } 
    if(((a304998879 == 5 && (a2029515987 == 34 &&  cf==1 )) && ((((-45 < a807447096) && (7 >= a807447096)) && (((185 < a1862658444) && (245 >= a1862658444)) && (a1293712589 == 33 && a1491071731 == 33))) && ((-137 < a770071847) && (-92 >= a770071847))))) {
    	if(((a1140224045 == 33 && (a42170353 == 33 && a815886759 == 2)) && ((a1472462791 == 33 && ((a806730426 == 6 &&  cf==1 ) && a871674684 == 4)) && a1763171942 == 33))) {
    		calculate_outputm200(input);
    	} 
    	if(((((40 < a1189507312) && (188 >= a1189507312)) && (((-118 < a723108336) && (30 >= a723108336)) && a785058364 == 11)) && ((a976945745 == 2 && (a1717386854 == 33 && ( cf==1  && a806730426 == 7))) && a369624711 == 6))) {
    		calculate_outputm201(input);
    	} 
    } 
    if((((( cf==1  && a2029515987 == 36) && ((134 < a847823400) && (351 >= a847823400))) && a976945745 == 2) && (((a526854419 == 33 && a882589857 == 10) && a815886759 == 2) && a570886160 == 33))) {
    	if(((a1823597932 == 33 && (a1140224045 == 33 && ((40 < a1189507312) && (188 >= a1189507312)))) && ((((a1377897560 == 13 &&  cf==1 ) && a1678927341 == 10) && ((185 < a1862658444) && (245 >= a1862658444))) && a526854419 == 33))) {
    		calculate_outputm204(input);
    	} 
    } 
}
 void calculate_outputm206(int input) {
    if(((((((36 < a835146412) && (110 >= a835146412)) && a2128522778 == 33) && a785058364 == 11) && ((-5 < a1711061361) && (114 >= a1711061361))) && ((((input == 98) &&  cf==1 ) && a1909685633 == 33) && ((-113 < a1562022185) && (38 >= a1562022185))))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a976945745 = (a1678927341 - 7);
    	a2052893331 = (a882589857 + 6);
    	a815886759 = (a882589857 + -7);
    	a1917402140 = (a304998879 / a1538778197);
    	a1263839693 = 36 ;
    	a1409922970 = (a2052893331 + -3); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if((((a871674684 == 4 && ((input == 116) &&  cf==1 )) && a1491071731 == 33) && (((74 < a2147255888) && (267 >= a2147255888)) && (a337942537 == 5 && (a1823597932 == 33 && a815886759 == 2))))) {
    	cf = 0;
    	a905282705 = 36 ;
    	a15249890 = ((((((a1541342791 * a1541342791) % 14999) + 8524) / 5) / 5) + -20531);
    	a796195142 = 34 ;
    	a1143554178 = ((((((a1541342791 * a15249890) % 14999) * 2) % 14784) - -15214) - -2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a1140224045 == 33 && ((a369624711 == 6 && ( cf==1  && (input == 97))) && a1538778197 == 2)) && (a976945745 == 2 && (a785058364 == 11 && a570886160 == 33)))) {
    	cf = 0;
    	a1541342791 = ((((((a1541342791 * a1189507312) % 14999) + 14557) % 59) + 219) * 1);
    	a1228745271 = (((((a835146412 * a723108336) % 23) - -84) + -27648) - -27648);
    	a1224074430 = (((((a1541342791 * a1541342791) % 14999) - 3975) - 6377) - 9589); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm208(int input) {
    if((((a526854419 == 33 && ((a1763171942 == 33 && (((input == 98) &&  cf==1 ) && a394986443 == 11)) && ((-120 < a177640787) && (-82 >= a177640787)))) && a1293712589 == 33) && a455265888 == 2)) {
    	cf = 0;
    	a304998879 = (a394986443 + -7);
    	a847823400 = (((((a847823400 * a912673804) % 14999) - -9846) - 24721) / 5);
    	a796195142 = 32 ;
    	a1610801558 = (((((((a847823400 * a1711061361) % 14999) * 2) + 3) * 1) % 14982) + -15017);
    	a309620346 = (a1538778197 + 12);
    	a570886160 = 32 ;
    	a1649499722 = (a771824360 + 3);
    	a1562022185 = ((((a1562022185 * a177640787) + -20186) + -3227) - 1979);
    	a394986443 = (a337942537 - -5);
    	a177640787 = (((((a177640787 * a1610801558) % 14999) + -27670) + -944) * 1);
    	a770071847 = ((((((a770071847 * a2147255888) % 14999) - 11501) * 10) / 9) + -110);
    	a337942537 = ((a815886759 - a913550374) + 6);
    	a1763171942 = 32 ;
    	a1862658444 = ((((((a1862658444 * a2139432823) % 14999) - 11422) + 32368) + -17193) - 8762);
    	a1538778197 = (a882589857 + -9);
    	a1678927341 = (a882589857 - 1);
    	a1611619350 = 35 ;
    	a882589857 = (a369624711 + 4);
    	a1293712589 = 32 ;
    	a42170353 = 32 ;
    	a771824360 = ((a304998879 + a1678927341) + -5); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm212(int input) {
    if(((((-113 < a1562022185) && (38 >= a1562022185)) && ((input == 79) &&  cf==1 )) && (((-45 < a807447096) && (7 >= a807447096)) && (a1140224045 == 33 && (a1763171942 == 33 && (((-5 < a1711061361) && (114 >= a1711061361)) && a1661935098 == 33)))))) {
    	cf = 0;
    	a882589857 = (a771824360 - -1);
    	a1562022185 = ((((a1862658444 * a1610801558) / 5) - 5713) * 4);
    	a1610801558 = ((((((((a2139432823 * a1862658444) % 14999) % 67) + 57) - 6046) / 5) * -1) / 10);
    	a1189507312 = (((((a1189507312 * a1562022185) % 14999) + -1710) / 5) - 2124);
    	a337942537 = ((a394986443 / a1260631) + 3);
    	a796195142 = 32 ;
    	a1140224045 = 32 ;
    	a42170353 = 32 ;
    	a815886759 = (a871674684 + -2);
    	a1611619350 = 33 ;
    	a807447096 = (((((a807447096 * a770071847) - 12978) * 10) / 9) / 5);
    	a1661935098 = 32 ;
    	a1293712589 = 32 ;
    	a976902422 = (((((a2147255888 * a1541342791) % 14999) - -14854) + 9) - -104);
    	a369624711 = (a815886759 + 4);
    	a2147255888 = ((((((a1562022185 * a912673804) % 14999) - 14939) - 46) + 20968) - 20942);
    	a1678927341 = (a976945745 + 7);
    	a785058364 = (a455265888 + 8);
    	a177640787 = ((((a177640787 * a1711061361) + -15959) + -102) * 1);
    	a912673804 = (((((((a912673804 * a1562022185) % 14999) + -355) * 1) + 683) % 14952) - 15047);
    	a1862658444 = ((((((a1862658444 * a1541342791) % 14999) - 16193) * 1) + 13289) - 26535);
    	a770071847 = ((((((a770071847 * a847823400) % 14999) % 14931) - 15067) - 2) - 1);
    	a1763171942 = 32 ;
    	a881287135 = (a1917402140 + 5);
    	a1917402140 = (a304998879 + -2);
    	a2139432823 = ((((((a2139432823 * a1189507312) % 14999) + -690) % 14920) - 15078) * 1); 
    	 printf("");//printf("%d\n", 120); fflush(stdout); 
    } if(((((-137 < a770071847) && (-92 >= a770071847)) && a1717386854 == 33) && ((a785058364 == 11 && ((a42170353 == 33 && ((input == 65) &&  cf==1 )) && a815886759 == 2)) && a394986443 == 11))) {
    	cf = 0;
    	a706197976 = 32 ;
    	a1940475432 = (((((a912673804 * a1862658444) + 10031) / 5) % 34) + 109);
    	a796195142 = 33 ;
    	a2052893331 = (a976945745 + 11); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm215(int input) {
    if(((a1491071731 == 33 && ((((185 < a1862658444) && (245 >= a1862658444)) && ((-118 < a723108336) && (30 >= a723108336))) && a1661935098 == 33)) && ((a1909685633 == 33 && ( cf==1  && (input == 81))) && ((-96 < a912673804) && (35 >= a912673804))))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a1143554178 = ((((a1711061361 * a723108336) - 9199) - 3012) * 1);
    	a2052893331 = (a337942537 + 10);
    	a534143625 = ((((((a1143554178 * a1143554178) % 14999) - -5381) * 1) + 6598) - 26976); 
    	 printf("");//printf("%d\n", 133); fflush(stdout); 
    } 
}
 void calculate_outputm21(int input) {
    if(((a1909685633 == 33 && a1917402140 == 3) && (a1538778197 == 2 && (a570886160 == 33 && ((( cf==1  && a1244737994 == 32) && a42170353 == 33) && a2128522778 == 33))))) {
    	if(((((-137 < a770071847) && (-92 >= a770071847)) && (((36 < a835146412) && (110 >= a835146412)) && (a976945745 == 2 && a1917402140 == 3))) && (a369624711 == 6 && ((a1495349871 == 33 &&  cf==1 ) && a871674684 == 4)))) {
    		calculate_outputm206(input);
    	} 
    } 
    if(((( cf==1  && a1244737994 == 34) && ((-120 < a177640787) && (-82 >= a177640787))) && (((185 < a1862658444) && (245 >= a1862658444)) && (((74 < a2147255888) && (267 >= a2147255888)) && (((-5 < a1711061361) && (114 >= a1711061361)) && (a304998879 == 5 && a570886160 == 33)))))) {
    	if(((((a913550374 == 3 &&  cf==1 ) && a1717386854 == 33) && a42170353 == 33) && (((a394986443 == 11 && ((134 < a847823400) && (351 >= a847823400))) && ((185 < a1862658444) && (245 >= a1862658444))) && ((36 < a835146412) && (110 >= a835146412))))) {
    		calculate_outputm208(input);
    	} 
    } 
    if((((((-159 < a2139432823) && (44 >= a2139432823)) && a369624711 == 6) && a1917402140 == 3) && (((-45 < a807447096) && (7 >= a807447096)) && ((((-137 < a770071847) && (-92 >= a770071847)) && (a1244737994 == 36 &&  cf==1 )) && a785058364 == 11)))) {
    	if(((a1678927341 == 10 && (((40 < a1189507312) && (188 >= a1189507312)) && ((a394986443 == 11 && (a1260631 == 6 &&  cf==1 )) && ((-120 < a177640787) && (-82 >= a177640787))))) && (a455265888 == 2 && ((-5 < a1711061361) && (114 >= a1711061361))))) {
    		calculate_outputm212(input);
    	} 
    	if(((a871674684 == 4 && ((((-118 < a723108336) && (30 >= a723108336)) && (a1260631 == 10 &&  cf==1 )) && a1661935098 == 33)) && (a1678927341 == 10 && (a1491071731 == 33 && ((36 < a835146412) && (110 >= a835146412)))))) {
    		calculate_outputm215(input);
    	} 
    } 
}
 void calculate_outputm218(int input) {
    if(((((((-92 < a770071847) && (-2 >= a770071847)) && a976945745 == 3) && ((351 < a847823400) && (400 >= a847823400))) && a337942537 == 6) && ((((input == 101) &&  cf==1 ) && ((7 < a807447096) && (218 >= a807447096))) && a369624711 == 7))) {
    	cf = 0;
    	a1717386854 = 33 ;
    	a1472462791 = 33 ;
    	a1909685633 = 33 ;
    	a1293712589 = 33 ;
    	a796195142 = 33 ;
    	a177640787 = ((((((a169710014 * a169710014) % 14999) / 5) + 19285) % 18) - 117);
    	a785058364 = ((a1538778197 - a1538778197) - -11);
    	a2147255888 = (((((((a177640787 * a807447096) % 96) - -264) - 75) / 5) * 59) / 10);
    	a1562022185 = (((((((a1562022185 * a2147255888) % 14999) / 5) / 5) + -15900) % 75) + -1);
    	a1711061361 = ((((((a169710014 * a177640787) % 14999) - 9854) + -2255) % 59) + 54);
    	a771824360 = ((a394986443 / a882589857) - -8);
    	a847823400 = (((((((a847823400 * a807447096) % 14999) - -1157) % 108) - -239) * 9) / 10);
    	a1862658444 = ((((((((a1862658444 * a177640787) % 14999) - 10248) % 29) + 214) / 5) * 51) / 10);
    	a774885508 = (a304998879 + -3);
    	a42170353 = 33 ;
    	a723108336 = (((((((a723108336 * a2147255888) % 14999) + -25950) % 73) - 30) - 12048) - -12078);
    	a976945745 = (a1917402140 + -2);
    	a1763171942 = 33 ;
    	a1661935098 = 33 ;
    	a1491071731 = 33 ;
    	a369624711 = a304998879;
    	a1823597932 = 33 ;
    	a912673804 = ((((((a2139432823 * a169710014) % 14999) % 65) - 29) + -2) - 0);
    	a815886759 = a455265888;
    	a835146412 = ((((((a835146412 * a169710014) % 14999) % 36) + 73) + -587) - -587);
    	a15249890 = ((((((a976902422 * a976902422) % 14999) - -6550) * 1) * 10) / 9);
    	a1189507312 = ((((((a1189507312 * a177640787) % 14999) - -17749) * 1) % 73) + 114);
    	a337942537 = (a369624711 + -1);
    	a526854419 = 33 ;
    	a1140224045 = 33 ;
    	a871550570 = 33 ;
    	a570886160 = 33 ;
    	a2128522778 = 33 ;
    	a871674684 = (a771824360 - 5);
    	a2139432823 = ((((((a2139432823 * a835146412) % 101) + -102) * 5) % 101) + -33);
    	a770071847 = (((((a1711061361 * a912673804) % 22) - 114) - -3623) - 3622);
    	a2052893331 = (a1678927341 + 3);
    	a1917402140 = (a815886759 - -1);
    	a1610801558 = (((((((a1610801558 * a770071847) % 12) - 23) * 1) * 5) % 12) - 16);
    	a304998879 = ((a1538778197 * a1538778197) + -4);
    	a1538778197 = (a369624711 + -5); 
    	 printf("");//printf("%d\n", 122); fflush(stdout); 
    } if((((( cf==1  && (input == 103)) && ((245 < a1862658444) && (266 >= a1862658444))) && a1140224045 == 34) && ((a976945745 == 3 && (a871550570 == 34 && ((188 < a1189507312) && (267 >= a1189507312)))) && a1823597932 == 34))) {
    	cf = 0;
    	a15249890 = (((((((a976902422 * a976902422) % 14999) - 16875) % 27) - -297) + -30227) - -30234);
    	a394986443 = (a1917402140 - -8);
    	a1678927341 = (a815886759 + 8);
    	a770071847 = ((((((a770071847 * a807447096) - -21498) / 5) - -19390) % 44) + -54);
    	a871674684 = (a976945745 + 2);
    	a1192100362 = (((((a15249890 * a1862658444) % 14999) - 18703) - -32666) + 375);
    	a738555482 = (a785058364 + -1);
    	a882589857 = (a369624711 - -4);
    	a796195142 = 34 ;
    	a785058364 = (a771824360 - -2);
    	a177640787 = (((((a177640787 * a1562022185) % 29) + -49) - -5561) + -5545);
    	a835146412 = ((((((a835146412 * a169710014) % 14999) % 71) + 182) - 1) * 1);
    	a42170353 = 34 ;
    	a807447096 = (((((((a807447096 * a1711061361) % 14999) / 5) - 2308) * 5) % 105) + 112);
    	a1917402140 = (a815886759 - -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((7 < a807447096) && (218 >= a807447096)) && (( cf==1  && (input == 105)) && a42170353 == 34)) && ((38 < a1562022185) && (229 >= a1562022185))) && a1678927341 == 11) && (((30 < a723108336) && (121 >= a723108336)) && a1717386854 == 34))) {
    	cf = 0;
    	a882589857 = (a1538778197 - -8);
    	a42170353 = 34 ;
    	a785058364 = ((a337942537 * a304998879) + -24);
    	a796195142 = 34 ;
    	a871674684 = (a771824360 - 5);
    	a738555482 = (a815886759 - -8);
    	a1192100362 = ((((((a835146412 * a1862658444) % 14999) - -9508) * 10) / 9) * 1);
    	a15249890 = (((((a2139432823 * a912673804) - 9771) % 27) - -296) - -1);
    	a770071847 = (((((a770071847 * a723108336) % 44) + -23) + -2) / 5);
    	a1917402140 = (a1538778197 + 1);
    	a807447096 = (((((((a807447096 * a1189507312) % 14999) % 105) - -64) + -44) - -6370) + -6280);
    	a835146412 = (((((((a1711061361 * a2147255888) % 14999) / 5) - 9811) / 5) % 71) + 221);
    	a1678927341 = (a771824360 + 1);
    	a394986443 = (a304998879 - -6);
    	a177640787 = ((((((a177640787 * a847823400) % 14999) % 29) + -50) - 8211) - -8210); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1293712589 == 34 && ((( cf==1  && (input == 104)) && a369624711 == 7) && a976945745 == 3)) && ((a570886160 == 34 && a1917402140 == 4) && ((35 < a912673804) && (95 >= a912673804))))) {
    	cf = 0;
    	a738555482 = (a1917402140 - -7);
    	a15249890 = (((((a177640787 * a1562022185) % 27) + 303) + -12410) + 12405);
    	a394986443 = ((a738555482 * a1538778197) - 21);
    	a770071847 = ((((((a770071847 * a1711061361) + 1107) / 5) - 22653) % 44) + -31);
    	a882589857 = ((a976945745 / a871674684) - -11);
    	a785058364 = (a771824360 - -2);
    	a871674684 = (a815886759 + 2);
    	a807447096 = ((((((a807447096 * a723108336) - -419) - -2988) + -8022) % 105) - -112);
    	a796195142 = 34 ;
    	a835146412 = (((((((a835146412 * a2139432823) % 14999) + 3249) % 71) + 119) / 5) + 157);
    	a177640787 = (((((a912673804 * a2139432823) % 29) - 67) - 26117) - -26124);
    	a1192100362 = ((((((a169710014 * a976902422) % 14999) % 14887) - -15111) * 1) - -2);
    	a42170353 = 34 ;
    	a1678927341 = (a337942537 - -5);
    	a1917402140 = (a738555482 + -7); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((a1717386854 == 34 && (((44 < a2139432823) && (247 >= a2139432823)) && (a1661935098 == 34 && ((((188 < a1189507312) && (267 >= a1189507312)) && (( cf==1  && (input == 115)) && a337942537 == 6)) && a1491071731 == 34))))) {
    	cf = 0;
    	a1611619350 = 32 ;
    	a402335329 = 36 ;
    	a796195142 = 32 ;
    	a1129487110 = ((((((a976902422 * a912673804) % 14999) / 5) - -1840) - 29616) + 29509); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm219(int input) {
    if(((a815886759 == 3 && (a976945745 == 3 && (a1917402140 == 4 && a871550570 == 34))) && ((a1538778197 == 3 && ( cf==1  && (input == 93))) && ((114 < a1711061361) && (231 >= a1711061361))))) {
    	cf = 0;
    	a1817778538 = (a394986443 + -6);
    	a369624711 = (a455265888 - -3);
    	a871674684 = (a1678927341 + -7);
    	a882589857 = (a1678927341 - 1);
    	a337942537 = (a976945745 - -2);
    	a976945745 = (a1817778538 - 4);
    	a2052893331 = ((a785058364 * a1917402140) - 38);
    	a1909685633 = 33 ;
    	a1717386854 = 33 ;
    	a871550570 = 33 ;
    	a570886160 = 33 ;
    	a526854419 = 33 ;
    	a770071847 = ((((((a2139432823 * a912673804) % 22) + -114) - 1) - 12614) - -12614);
    	a455265888 = ((a1817778538 * a771824360) + -58);
    	a2128522778 = 33 ;
    	a2147255888 = ((((((((a2147255888 * a847823400) % 14999) - -9135) % 96) - -142) * 5) % 96) - -77);
    	a42170353 = 33 ;
    	a1472462791 = 33 ;
    	a1763171942 = 33 ;
    	a723108336 = (((((a723108336 * a1562022185) % 73) + -108) / 5) / 5);
    	a597484636 = 35 ;
    	a394986443 = (a815886759 - -8);
    	a177640787 = (((((((a1711061361 * a1711061361) % 14999) % 18) + -108) / 5) * 49) / 10);
    	a815886759 = ((a1409922970 + a882589857) - 16);
    	a1189507312 = ((((((a1189507312 * a1862658444) % 14999) + 2511) + -7183) % 73) + 115);
    	a807447096 = (((((a807447096 * a770071847) % 25) - -3) - 20) + -2);
    	a1293712589 = 33 ;
    	a1538778197 = ((a771824360 * a871674684) + -38);
    	a1862658444 = (((((a1862658444 * a912673804) + 7586) * 1) % 29) - -214);
    	a771824360 = (a1817778538 + 3);
    	a796195142 = 33 ;
    	a1711061361 = ((((((a1711061361 * a912673804) - 893) + 6878) + 4429) % 59) + 54);
    	a785058364 = (a304998879 + 6); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((a570886160 == 34 && ((-92 < a770071847) && (-2 >= a770071847))) && a1678927341 == 11) && (a42170353 == 34 && ((a1140224045 == 34 && ( cf==1  && (input == 90))) && ((7 < a807447096) && (218 >= a807447096)))))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a216810048 = 36 ;
    	a1611619350 = 35 ;
    	a1649499722 = (a394986443 + -3); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm221(int input) {
    if((((a1717386854 == 34 && ((input == 79) &&  cf==1 )) && ((44 < a2139432823) && (247 >= a2139432823))) && (a1763171942 == 34 && (a42170353 == 34 && (a815886759 == 3 && a570886160 == 34))))) {
    	cf = 0;
    	a2128522778 = 33 ;
    	a1405419384 = (a771824360 - -7);
    	a785058364 = ((a771824360 + a815886759) + -1);
    	a815886759 = ((a304998879 + a1405419384) + -20);
    	a455265888 = ((a1405419384 * a882589857) - 184);
    	a1678927341 = (a871674684 - -6);
    	a835146412 = ((((((((a1862658444 * a847823400) % 14999) % 36) + 58) * 9) / 10) * 9) / 10);
    	a1823597932 = 34 ;
    	a807447096 = (((((a807447096 * a723108336) % 105) - -100) - 73) - 9);
    	a1763171942 = 34 ;
    	a1661935098 = 34 ;
    	a871550570 = 34 ;
    	a369624711 = ((a1917402140 + a1405419384) + -14); 
    	 printf("");//printf("%d\n", 120); fflush(stdout); 
    } 
}
 void calculate_outputm222(int input) {
    if((((a1909685633 == 34 && (((267 < a2147255888) && (391 >= a2147255888)) && ((30 < a723108336) && (121 >= a723108336)))) && ((-11 < a1610801558) && (124 >= a1610801558))) && ((( cf==1  && (input == 98)) && a394986443 == 12) && a1661935098 == 34))) {
    	cf = 0;
    	a394986443 = (a1405419384 - 3);
    	a882589857 = (a394986443 - 1);
    	a847823400 = (((((((a847823400 * a169710014) % 14999) / 5) - 8902) + -15123) % 108) + 297);
    	a1472462791 = 33 ;
    	a1610801558 = (((((a1610801558 * a2139432823) % 12) - 23) * 1) - -1);
    	a1917402140 = (a871674684 + -2);
    	a1909685633 = 33 ;
    	a871674684 = ((a976945745 + a771824360) + -9);
    	a2147255888 = (((((((a2147255888 * a723108336) % 14999) / 5) / 5) + -29830) % 96) + 183);
    	a1562022185 = ((((((a1562022185 * a1711061361) / 5) % 75) - 36) - -3660) - 3661);
    	a871550570 = 33 ;
    	a1763171942 = 33 ;
    	a1862658444 = (((((a1862658444 * a912673804) % 29) - -215) + 2) + -3);
    	a785058364 = ((a1678927341 + a771824360) + -9);
    	a526854419 = 33 ;
    	a1661935098 = 33 ;
    	a12903048 = (a369624711 + 3);
    	a2052893331 = (a337942537 - -4);
    	a597484636 = 34 ;
    	a796195142 = 33 ;
    	a1823597932 = 33 ;
    	a42170353 = 33 ;
    	a455265888 = (a369624711 - 5);
    	a1717386854 = 33 ;
    	a1140224045 = 33 ;
    	a369624711 = (a1538778197 + 4); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1917402140 == 4 && (((input == 103) &&  cf==1 ) && a871550570 == 34)) && (((((7 < a807447096) && (218 >= a807447096)) && a394986443 == 12) && a1717386854 == 34) && a1823597932 == 34))) {
    	cf = 0;
    	a216810048 = 35 ;
    	a796195142 = 32 ;
    	a1611619350 = 35 ;
    	a1649499722 = ((a455265888 + a871674684) - -1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if((((input == 109) &&  cf==1 ) && (a1763171942 == 34 && (((a526854419 == 34 && (a785058364 == 12 && a42170353 == 34)) && a1140224045 == 34) && ((245 < a1862658444) && (266 >= a1862658444)))))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a15249890 = (((((a723108336 * a1610801558) % 27) + 296) + -2) + 2);
    	a1192100362 = ((((((a15249890 * a15249890) % 14999) / 5) % 80) - 34) - 12);
    	a1377897560 = (a976945745 + 4); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm223(int input) {
    if(((((input == 75) &&  cf==1 ) && a394986443 == 12) && ((((a976945745 == 3 && a304998879 == 6) && ((-11 < a1610801558) && (124 >= a1610801558))) && a1538778197 == 3) && ((-92 < a770071847) && (-2 >= a770071847))))) {
    	cf = 0;
    	a1472462791 = 33 ;
    	a1862658444 = (((((a912673804 * a723108336) + 16780) - 19890) % 29) - -216);
    	a177640787 = ((((((a1862658444 * a912673804) % 18) + -106) - 11) + 16276) - 16277);
    	a526854419 = 33 ;
    	a455265888 = ((a394986443 * a1538778197) - 34);
    	a785058364 = (a455265888 + 9);
    	a1189507312 = (((((a835146412 * a835146412) / 5) - -5153) % 73) + 96);
    	a42170353 = 33 ;
    	a847823400 = (((((((a847823400 * a835146412) % 14999) % 108) - -179) - 1) * 10) / 9);
    	a882589857 = (a1538778197 + 7);
    	a1909685633 = 33 ;
    	a1562022185 = ((((((((a1562022185 * a177640787) % 75) - 20) * 9) / 10) * 5) % 75) + 9);
    	a1763171942 = 33 ;
    	a871674684 = (a1538778197 - -1);
    	a1610801558 = (((((a1610801558 * a1189507312) / 5) % 12) + -23) * 1);
    	a1140224045 = 33 ;
    	a1711061361 = (((((((a912673804 * a1862658444) % 59) + 30) * 9) / 10) - 6261) - -6277);
    	a304998879 = (a455265888 + 3);
    	a2052893331 = ((a1538778197 / a1405419384) - -10);
    	a2139432823 = (((((((a2139432823 * a169710014) % 14999) % 101) - 56) * 5) % 101) + -57);
    	a369624711 = (a871674684 - -2);
    	a770071847 = (((((((a770071847 * a169710014) % 14999) % 22) + -114) + -1) / 5) + -86);
    	a1661935098 = 33 ;
    	a1717386854 = 33 ;
    	a796195142 = 33 ;
    	a1823597932 = 33 ;
    	a597484636 = 34 ;
    	a1678927341 = ((a771824360 / a394986443) - -10);
    	a912673804 = ((((((a912673804 * a1862658444) / 5) + 6502) - -17210) % 65) - 37);
    	a2147255888 = (((((((a2147255888 * a1711061361) % 14999) + -3958) % 96) - -170) + -13609) + 13610);
    	a1917402140 = (a1405419384 - 14);
    	a570886160 = 33 ;
    	a12903048 = (a394986443 + -2);
    	a1538778197 = ((a1405419384 / a976945745) + -3);
    	a871550570 = 33 ;
    	a394986443 = ((a882589857 + a304998879) - 4); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((((245 < a1862658444) && (266 >= a1862658444)) && ((-82 < a177640787) && (-22 >= a177640787))) && a1293712589 == 34) && (((((-92 < a770071847) && (-2 >= a770071847)) && ( cf==1  && (input == 113))) && ((30 < a723108336) && (121 >= a723108336))) && ((188 < a1189507312) && (267 >= a1189507312))))) {
    	cf = 0;
    	a835146412 = ((((((((a1862658444 * a169710014) % 14999) % 71) + 182) + -1) - 966) * -2) / 10);
    	a2128522778 = 34 ;
    	a534143625 = ((((((a169710014 * a169710014) % 14999) - -2497) * 1) * 1) + -17485);
    	a1420843252 = 35 ;
    	a169710014 = ((((((a169710014 * a534143625) % 14999) % 14842) - -15157) * 1) + 0); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((44 < a2139432823) && (247 >= a2139432823)) && (a1538778197 == 3 && ((input == 111) &&  cf==1 ))) && (((114 < a1711061361) && (231 >= a1711061361)) && (a1491071731 == 34 && (((-82 < a177640787) && (-22 >= a177640787)) && ((35 < a912673804) && (95 >= a912673804))))))) {
    	cf = 0;
    	a1224074430 = ((((((a2147255888 * a2147255888) % 14999) % 15) - -89) - 2) + 3);
    	a21974463 = (a976945745 - -7);
    	a169710014 = (((((((a169710014 * a1224074430) % 14999) % 46) + 268) - 29342) + -283) - -29624); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((188 < a1189507312) && (267 >= a1189507312)) && a771824360 == 10) && ((a570886160 == 34 && ((((35 < a912673804) && (95 >= a912673804)) && ((input == 110) &&  cf==1 )) && a882589857 == 11)) && ((267 < a2147255888) && (391 >= a2147255888))))) {
    	cf = 0;
    	a835146412 = ((((((a1562022185 * a1562022185) % 14999) % 71) + 146) - 32) * 1);
    	a1420843252 = 35 ;
    	a2128522778 = 34 ;
    	a169710014 = (((((((a169710014 * a1862658444) % 14999) % 14842) + 15157) - -1) / 5) - -13981);
    	a534143625 = (((((a2139432823 * a2139432823) % 14999) - -10690) - -2538) * -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm224(int input) {
    if(((((114 < a1711061361) && (231 >= a1711061361)) && ((((38 < a1562022185) && (229 >= a1562022185)) && a2128522778 == 34) && ((-92 < a770071847) && (-2 >= a770071847)))) && (a1717386854 == 34 && (( cf==1  && (input == 75)) && ((-11 < a1610801558) && (124 >= a1610801558)))))) {
    	cf = 0;
    	a1491071731 = 34 ;
    	a1538778197 = (a771824360 + -9);
    	a1823597932 = 32 ;
    	a1584925463 = a369624711;
    	a15249890 = ((((((a169710014 * a169710014) % 14999) * 2) % 15077) - 14921) - 2);
    	a177640787 = ((((a177640787 * a1189507312) - 7608) * 1) + -303);
    	a871674684 = ((a369624711 - a394986443) - -8);
    	a1661935098 = 32 ;
    	a1763171942 = 32 ;
    	a304998879 = ((a337942537 * a771824360) - 54);
    	a882589857 = ((a815886759 + a455265888) + 3);
    	a796195142 = 34 ;
    	a1472462791 = 32 ;
    	a570886160 = 32 ;
    	a1140224045 = 34 ;
    	a815886759 = (a976945745 - 2);
    	a905282705 = 34 ;
    	a1678927341 = (a1584925463 - -2);
    	a369624711 = ((a455265888 / a337942537) + 5); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((((input == 82) &&  cf==1 ) && a785058364 == 12) && ((a570886160 == 34 && ((a1293712589 == 34 && ((351 < a847823400) && (400 >= a847823400))) && ((267 < a2147255888) && (391 >= a2147255888)))) && ((38 < a1562022185) && (229 >= a1562022185))))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a491168833 = (a871674684 + 4);
    	a1244737994 = 36 ;
    	a15249890 = (((((a1189507312 * a1189507312) % 14999) - -5083) * 1) * 1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm225(int input) {
    if(((((38 < a1562022185) && (229 >= a1562022185)) && a871674684 == 5) && (((351 < a847823400) && (400 >= a847823400)) && ((a785058364 == 12 && (((input == 75) &&  cf==1 ) && a394986443 == 12)) && a1823597932 == 34)))) {
    	cf = 0;
    	a1611619350 = 35 ;
    	a785058364 = (a976945745 - -7);
    	a304998879 = (a976945745 - -2);
    	a1649499722 = (a369624711 - -4);
    	a1140224045 = 32 ;
    	a815886759 = (a337942537 + -3);
    	a871674684 = a455265888;
    	a2147255888 = (((((((a2147255888 * a1189507312) % 14999) % 96) + 171) + 1) / 5) + 171);
    	a771824360 = ((a394986443 - a394986443) + 9);
    	a1661935098 = 32 ;
    	a847823400 = (((((a1862658444 * a1862658444) % 14999) + -22628) * 1) * 1);
    	a455265888 = (a976945745 + -1);
    	a882589857 = ((a1842951122 - a1917402140) + 7);
    	a1823597932 = 33 ;
    	a1909685633 = 33 ;
    	a1485869055 = 32 ;
    	a1562022185 = (((((a1562022185 * a177640787) % 14999) - 12588) * 1) * 1);
    	a1917402140 = (a785058364 - 7);
    	a570886160 = 32 ;
    	a2128522778 = 33 ;
    	a871550570 = 32 ;
    	a1472462791 = 32 ;
    	a369624711 = (a1842951122 - 1);
    	a1293712589 = 33 ;
    	a796195142 = 32 ;
    	a1717386854 = 33 ;
    	a723108336 = (((((((a723108336 * a1189507312) % 14999) * 2) / 5) * 5) % 14941) + -15058);
    	a394986443 = (a785058364 + 1);
    	a1538778197 = (a1678927341 - 7);
    	a1862658444 = (((((a1862658444 * a847823400) % 14999) - 14990) + -7) * 1); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1538778197 == 3 && (a785058364 == 12 && ((38 < a1562022185) && (229 >= a1562022185)))) && ((a570886160 == 34 && (( cf==1  && (input == 100)) && a771824360 == 10)) && a455265888 == 3))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a491168833 = (a455265888 - -2);
    	a1162352213 = ((a976945745 * a369624711) - 12);
    	a15249890 = ((((((a723108336 * a1862658444) % 14999) - 16275) / 5) + -1463) - -14781); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a1472462791 == 34 && ((input == 68) &&  cf==1 )) && (a815886759 == 3 && (a1661935098 == 34 && (a871550570 == 34 && (a1917402140 == 4 && a2128522778 == 34)))))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a1260631 = ((a394986443 + a1842951122) + -11);
    	a1244737994 = 36 ;
    	a1541342791 = (((((((a169710014 * a169710014) % 14999) % 14758) + 15240) / 5) * 5) - -4); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm226(int input) {
    if(((((((input == 93) &&  cf==1 ) && ((351 < a847823400) && (400 >= a847823400))) && ((267 < a2147255888) && (391 >= a2147255888))) && a42170353 == 34) && (a1717386854 == 34 && (a337942537 == 6 && a785058364 == 12)))) {
    	cf = 0;
    	a2139432823 = (((((((a2139432823 * a1862658444) % 14999) / 5) + -22732) + 14839) % 101) + 38);
    	a337942537 = (a1842951122 - a1538778197);
    	a1610801558 = ((((((a1610801558 * a2139432823) % 12) - 22) * 1) / 5) + -9);
    	a2034779655 = ((((((a2147255888 * a169710014) % 14999) - 5890) / 5) / 5) - 715);
    	a770071847 = ((((((a847823400 * a1610801558) + -13396) + 12835) + -5842) % 22) - 93);
    	a526854419 = 33 ;
    	a42170353 = 33 ;
    	a807447096 = (((((a807447096 * a177640787) % 25) + -19) - -1) / 5);
    	a1823597932 = 33 ;
    	a369624711 = (a1538778197 + 3);
    	a304998879 = a337942537;
    	a1189507312 = (((((((a1189507312 * a1862658444) % 14999) + 2334) % 73) - -113) * 9) / 10);
    	a1293712589 = 33 ;
    	a1472462791 = 33 ;
    	a796195142 = 33 ;
    	a2147255888 = (((((((a2139432823 * a1562022185) % 14999) % 96) - -171) * 5) % 96) + 167);
    	a723108336 = ((((((a723108336 * a1711061361) % 73) - 59) + -54) - 18792) - -18805);
    	a1232289479 = ((a1538778197 * a785058364) - 22);
    	a1140224045 = 33 ;
    	a1678927341 = (a815886759 - -7);
    	a1661935098 = 33 ;
    	a882589857 = (a1538778197 + 7);
    	a1917402140 = ((a815886759 - a337942537) + 5);
    	a2128522778 = 33 ;
    	a785058364 = (a771824360 - -1);
    	a835146412 = (((((a835146412 * a912673804) - -3728) + 1603) % 36) + 45);
    	a871674684 = (a1538778197 + 1);
    	a2052893331 = (a976945745 - -14);
    	a771824360 = (a304998879 + 4);
    	a1491071731 = 33 ;
    	a1909685633 = 33 ;
    	a871550570 = 33 ;
    	a1538778197 = (a1917402140 + -1);
    	a912673804 = (((((a835146412 * a2139432823) - -20754) % 65) - 67) / 5);
    	a976945745 = ((a337942537 * a394986443) - 58);
    	a1717386854 = 33 ;
    	a394986443 = ((a815886759 / a337942537) + 11);
    	a815886759 = (a337942537 + -3); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if(((((((188 < a1189507312) && (267 >= a1189507312)) && (a1823597932 == 34 && a304998879 == 6)) && a1472462791 == 34) && a1678927341 == 11) && (a570886160 == 34 && ((input == 55) &&  cf==1 )))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a15249890 = ((((((((a2139432823 * a807447096) % 14999) % 55) + 161) * 10) / 9) + 18592) - 18596);
    	a1147553654 = (((((a723108336 * a847823400) % 14999) + 11517) - -535) - -2881);
    	a169710014 = ((((((a169710014 * a1147553654) % 14999) + -6750) - 6067) % 14842) + 15157); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((-82 < a177640787) && (-22 >= a177640787)) && (a1678927341 == 11 && (a394986443 == 12 && ((114 < a1711061361) && (231 >= a1711061361))))) && (a304998879 == 6 && (((input == 57) &&  cf==1 ) && a1717386854 == 34)))) {
    	cf = 0;
    	a1661935098 = 33 ;
    	a1420843252 = 33 ;
    	a304998879 = (a1842951122 - 3);
    	a847823400 = ((((((a847823400 * a1562022185) % 14999) % 108) + 228) - -5) + -13);
    	a1823597932 = 33 ;
    	a2139432823 = (((((a2139432823 * a770071847) + 19044) % 101) - 57) + -1);
    	a835146412 = (((((((a835146412 * a1610801558) % 14999) - 5529) * 1) * 1) % 36) + 73);
    	a1409922970 = (a369624711 + 1);
    	a912673804 = ((((((a912673804 * a770071847) % 65) - -11) + -38) + 19704) - 19700); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1717386854 == 34 && a570886160 == 34) && ((((110 < a835146412) && (253 >= a835146412)) && (a815886759 == 3 && (( cf==1  && (input == 58)) && a1538778197 == 3))) && ((-11 < a1610801558) && (124 >= a1610801558))))) {
    	cf = 0;
    	a796195142 = 34 ;
    	a15249890 = (((((((a912673804 * a2147255888) % 14999) % 55) - -178) * 10) / 9) + -10);
    	a1147553654 = ((((a723108336 * a723108336) + 4531) - -6757) / 5);
    	a169710014 = (((((((a169710014 * a1147553654) % 14999) + -10553) - -3099) - 6079) % 14842) - -15157); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a1717386854 == 34 && a1491071731 == 34) && a871550570 == 34) && (a42170353 == 34 && ((((input == 59) &&  cf==1 ) && ((30 < a723108336) && (121 >= a723108336))) && a1823597932 == 34)))) {
    	cf = 0;
    	a169710014 = ((((((a169710014 * a1862658444) % 14999) + -14707) % 14842) - -15157) + 0);
    	a796195142 = 34 ;
    	a1147553654 = ((((((a1862658444 * a1610801558) % 14999) - -4748) % 14738) + 15261) * 1);
    	a15249890 = (((((((a1189507312 * a1610801558) % 14999) / 5) % 55) + 210) / 5) + 142); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm22(int input) {
    if((((((30 < a723108336) && (121 >= a723108336)) && a1140224045 == 34) && a1293712589 == 34) && (a1678927341 == 11 && (a1538778197 == 3 && (( cf==1  && a1420843252 == 32) && ((38 < a1562022185) && (229 >= a1562022185))))))) {
    	if(((a1661935098 == 34 && ((197 < a976902422 &&  cf==1 ) && a815886759 == 3)) && (((7 < a807447096) && (218 >= a807447096)) && (a2128522778 == 34 && (((-11 < a1610801558) && (124 >= a1610801558)) && a1917402140 == 4))))) {
    		calculate_outputm218(input);
    	} 
    } 
    if(((a2128522778 == 34 && (a1763171942 == 34 && (((7 < a807447096) && (218 >= a807447096)) && ((245 < a1862658444) && (266 >= a1862658444))))) && (a394986443 == 12 && ((a1420843252 == 33 &&  cf==1 ) && a1491071731 == 34)))) {
    	if(((((267 < a2147255888) && (391 >= a2147255888)) && (((a1409922970 == 8 &&  cf==1 ) && a455265888 == 3) && a976945745 == 3)) && (a337942537 == 6 && (((188 < a1189507312) && (267 >= a1189507312)) && a394986443 == 12)))) {
    		calculate_outputm219(input);
    	} 
    } 
    if((((a1917402140 == 4 && ((351 < a847823400) && (400 >= a847823400))) && ((-11 < a1610801558) && (124 >= a1610801558))) && ((a1293712589 == 34 && (a1140224045 == 34 && ( cf==1  && a1420843252 == 34))) && a1717386854 == 34))) {
    	if(((a1405419384 == 12 &&  cf==1 ) && (((a1472462791 == 34 && (a1823597932 == 34 && (a304998879 == 6 && ((7 < a807447096) && (218 >= a807447096))))) && a2128522778 == 34) && a1140224045 == 34))) {
    		calculate_outputm221(input);
    	} 
    	if((((( cf==1  && a1405419384 == 14) && a526854419 == 34) && a1661935098 == 34) && ((((267 < a2147255888) && (391 >= a2147255888)) && (((7 < a807447096) && (218 >= a807447096)) && a1917402140 == 4)) && a369624711 == 7))) {
    		calculate_outputm222(input);
    	} 
    	if(((a42170353 == 34 && (a1293712589 == 34 && (a1491071731 == 34 && ( cf==1  && a1405419384 == 17)))) && ((a337942537 == 6 && a1909685633 == 34) && ((44 < a2139432823) && (247 >= a2139432823))))) {
    		calculate_outputm223(input);
    	} 
    } 
    if(((((351 < a847823400) && (400 >= a847823400)) && ((-82 < a177640787) && (-22 >= a177640787))) && (a1909685633 == 34 && (a1917402140 == 4 && (a455265888 == 3 && (a1823597932 == 34 && ( cf==1  && a1420843252 == 35))))))) {
    	if(((((a1218693435 == 36 &&  cf==1 ) && ((-11 < a1610801558) && (124 >= a1610801558))) && a2128522778 == 34) && (((114 < a1711061361) && (231 >= a1711061361)) && (((35 < a912673804) && (95 >= a912673804)) && (a815886759 == 3 && a882589857 == 11))))) {
    		calculate_outputm224(input);
    	} 
    } 
    if(((a1140224045 == 34 && (a771824360 == 10 && (a1420843252 == 36 &&  cf==1 ))) && (((a369624711 == 7 && a1717386854 == 34) && a1472462791 == 34) && a570886160 == 34))) {
    	if(((a976945745 == 3 && (a1909685633 == 34 && (a304998879 == 6 && (((-11 < a1610801558) && (124 >= a1610801558)) && ((a1842951122 == 6 &&  cf==1 ) && ((245 < a1862658444) && (266 >= a1862658444))))))) && a871674684 == 5)) {
    		calculate_outputm225(input);
    	} 
    	if((((((188 < a1189507312) && (267 >= a1189507312)) && ((44 < a2139432823) && (247 >= a2139432823))) && a1661935098 == 34) && ((a369624711 == 7 && (a771824360 == 10 && ( cf==1  && a1842951122 == 8))) && a1717386854 == 34))) {
    		calculate_outputm226(input);
    	} 
    } 
}
 void calculate_outputm228(int input) {
    if(((a976945745 == 3 && ((a1763171942 == 34 && a455265888 == 3) && a1293712589 == 34)) && ((((188 < a1189507312) && (267 >= a1189507312)) && ( cf==1  && (input == 75))) && ((-11 < a1610801558) && (124 >= a1610801558))))) {
    	cf = 0;
    	a42170353 = 33 ;
    	a738555482 = ((a976945745 + a1538778197) - 1);
    	a394986443 = (a976945745 + 8);
    	a1711061361 = ((((((((a1711061361 * a1189507312) % 14999) % 59) - -8) * 5) * 5) % 59) + 54);
    	a796195142 = 34 ;
    	a15249890 = (((((((a169710014 * a169710014) % 14999) % 27) + 282) + -3) / 5) + 215);
    	a1678927341 = ((a815886759 + a455265888) + 4);
    	a1192100362 = ((((((((a169710014 * a169710014) % 14999) + -16887) * -2) / 10) + -11800) * -1) / 10);
    	a871674684 = (a882589857 - 7);
    	a455265888 = ((a369624711 + a882589857) + -16);
    	a2147255888 = ((((((a2147255888 * a1189507312) % 14999) + 7442) * 1) % 96) + 157);
    	a1189507312 = ((((((a912673804 * a847823400) % 14999) / 5) + -24659) % 73) - -183);
    	a815886759 = (a913550374 + -8);
    	a835146412 = (((((((a835146412 * a1862658444) % 14999) % 36) - -61) - -7) - -16749) - 16779); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a785058364 == 12 && (((((267 < a2147255888) && (391 >= a2147255888)) && a1717386854 == 34) && a1909685633 == 34) && a42170353 == 34)) && (a1678927341 == 11 && ((input == 110) &&  cf==1 )))) {
    	cf = 0;
    	a796195142 = 35 ;
    	a435971279 = (a337942537 + 3);
    	a1409922970 = ((a976945745 / a435971279) - -14);
    	a1541342791 = (((((a169710014 * a169710014) % 14999) + -19815) / 5) + -4847); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm229(int input) {
    if((((a1909685633 == 34 && a455265888 == 3) && ((114 < a1711061361) && (231 >= a1711061361))) && ((a815886759 == 3 && (( cf==1  && (input == 98)) && a2128522778 == 34)) && a1763171942 == 34))) {
    	cf = 0;
    	a723108336 = ((((((a723108336 * a1189507312) % 14999) % 14941) - 15058) + 24632) + -24633);
    	a402335329 = 33 ;
    	a455265888 = (a882589857 - 10);
    	a570886160 = 32 ;
    	a1293712589 = 32 ;
    	a1711061361 = (((((((a1711061361 * a2139432823) % 14999) / 5) + 12851) / 5) % 59) - -21);
    	a1649499722 = (a771824360 - 1);
    	a1491071731 = 32 ;
    	a1909685633 = 33 ;
    	a1763171942 = 32 ;
    	a1862658444 = (((((a2147255888 * a723108336) % 14999) + -14833) + -166) - 2);
    	a1562022185 = ((((((a1562022185 * a177640787) % 14999) - -18937) + 8424) + -16323) + -16532);
    	a770071847 = (((((((a177640787 * a177640787) % 14999) / 5) + -24071) * 1) % 22) - 105);
    	a42170353 = 32 ;
    	a1610801558 = (((((((a1610801558 * a835146412) % 14999) + 11603) * 1) * 1) % 14982) + -15017);
    	a2128522778 = 32 ;
    	a1538778197 = (a771824360 - 9);
    	a1678927341 = (a455265888 + 8);
    	a882589857 = (a871674684 - -4);
    	a807447096 = (((((((a807447096 * a1562022185) % 14999) + -3434) * 10) / 9) * 10) / 9);
    	a871674684 = ((a1917402140 / a1649499722) - -3);
    	a912673804 = ((((((a912673804 * a169710014) * -1) / 10) / 5) * 10) / 3);
    	a1661935098 = 33 ;
    	a1717386854 = 32 ;
    	a1611619350 = 32 ;
    	a796195142 = 32 ;
    	a847823400 = (((((a847823400 * a169710014) % 14999) - 27992) * 1) + -980);
    	a871550570 = 34 ;
    	a771824360 = (a1649499722 + -1);
    	a835146412 = ((((((a835146412 * a723108336) % 14999) % 36) + 73) / 5) + 86);
    	a526854419 = 32 ;
    	a815886759 = (a369624711 + -4); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } 
}
 void calculate_outputm230(int input) {
    if(((a871550570 == 34 && ( cf==1  && (input == 69))) && (((267 < a2147255888) && (391 >= a2147255888)) && (a1538778197 == 3 && ((a1678927341 == 11 && ((35 < a912673804) && (95 >= a912673804))) && a1491071731 == 34))))) {
    	cf = 0;
    	a169710014 = ((((a169710014 / -5) * 5) * 10) / 9);
    	a1420843252 = 32 ;
    	a976902422 = ((((((a169710014 * a1862658444) % 14999) + -10248) % 92) + -86) - -1); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm232(int input) {
    if(((a785058364 == 12 && (((7 < a807447096) && (218 >= a807447096)) && (a1763171942 == 34 && a1293712589 == 34))) && (a455265888 == 3 && (((input == 113) &&  cf==1 ) && ((-11 < a1610801558) && (124 >= a1610801558)))))) {
    	cf = 0;
    	a976945745 = (a337942537 + -4);
    	a1144199001 = ((((((a169710014 * a1862658444) % 14999) - -5082) * 10) / 9) * 1);
    	a785058364 = (a771824360 - -1);
    	a1610801558 = ((((((a1610801558 * a1711061361) / 5) % 12) + -22) / 5) - 21);
    	a1538778197 = (a455265888 - 1);
    	a771824360 = (a976945745 + 8);
    	a1491071731 = 33 ;
    	a770071847 = ((((((a912673804 * a1189507312) % 22) - 126) / 5) * 10) / 2);
    	a1711061361 = (((((((a1189507312 * a723108336) % 14999) % 59) + -1) + 11304) * 2) - 22609);
    	a807447096 = (((((a807447096 * a912673804) - 26641) - -28412) % 25) + -41);
    	a1140224045 = 33 ;
    	a706197976 = 36 ;
    	a796195142 = 33 ;
    	a2139432823 = ((((((a912673804 * a1562022185) % 101) + -79) * 5) % 101) + -56);
    	a1862658444 = ((((((a1610801558 * a807447096) % 29) - -216) / 5) * 51) / 10);
    	a2052893331 = (a882589857 + 2);
    	a526854419 = 33 ;
    	a1823597932 = 33 ;
    	a42170353 = 33 ;
    	a847823400 = ((((((a1144199001 * a807447096) % 14999) / 5) % 108) + 242) - 0);
    	a1189507312 = (((((((((a1144199001 * a723108336) % 14999) % 73) - -108) * 9) / 10) * 5) % 73) - -92);
    	a1763171942 = 34 ;
    	a835146412 = ((((((a835146412 * a770071847) % 14999) % 36) + 72) + 1) - -1);
    	a1562022185 = (((((((a2147255888 * a2147255888) % 14999) - -3629) % 95) + 90) * 9) / 10);
    	a882589857 = (a960419217 - 1);
    	a1293712589 = 33 ;
    	a337942537 = ((a1538778197 + a1538778197) + 1);
    	a304998879 = ((a2052893331 - a785058364) - -3);
    	a369624711 = (a1917402140 + 2);
    	a2147255888 = (((((a2147255888 * a1610801558) % 61) - -373) + -14718) + 14687);
    	a871674684 = ((a785058364 * a785058364) + -117);
    	a2128522778 = 34 ;
    	a815886759 = (a455265888 + -1);
    	a570886160 = 33 ;
    	a1909685633 = 33 ;
    	a1917402140 = ((a2052893331 + a455265888) + -13);
    	a1661935098 = 33 ;
    	a394986443 = ((a2052893331 * a1678927341) + -132);
    	a455265888 = (a785058364 - 9);
    	a1472462791 = 33 ;
    	a912673804 = (((((a912673804 * a723108336) % 65) + -30) - 58) / 5);
    	a723108336 = (((((a723108336 * a807447096) % 73) - 42) + -15227) + 15225);
    	a1717386854 = 33 ;
    	a1678927341 = (a1538778197 + 8); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((((38 < a1562022185) && (229 >= a1562022185)) && (((110 < a835146412) && (253 >= a835146412)) && ((188 < a1189507312) && (267 >= a1189507312)))) && a871674684 == 5) && a815886759 == 3) && (((input == 75) &&  cf==1 ) && a1491071731 == 34))) {
    	cf = 0;
    	a1538778197 = (a785058364 + -11);
    	a402335329 = 33 ;
    	a1917402140 = (a785058364 - 10);
    	a570886160 = 32 ;
    	a723108336 = (((((a177640787 * a807447096) % 14999) + -3470) + -8824) * 1);
    	a1909685633 = 33 ;
    	a1189507312 = (((((a835146412 * a835146412) % 14999) - -2421) - 27746) - 2800);
    	a1491071731 = 32 ;
    	a2147255888 = ((((((a2147255888 * a723108336) % 14999) / 5) + -22479) * 10) / 9);
    	a912673804 = ((((a912673804 * a770071847) / 5) - 2634) + -7711);
    	a770071847 = ((((((a2147255888 * a1862658444) % 14999) % 22) + -113) * 1) + -2);
    	a1562022185 = (((((((a1562022185 * a1189507312) % 14999) / 5) + 16010) / 5) * -1) / 10);
    	a1610801558 = (((((((a1610801558 * a1189507312) % 14999) + -8883) / 5) * 5) % 14982) + -15017);
    	a1293712589 = 32 ;
    	a1649499722 = ((a882589857 * a337942537) + -57);
    	a526854419 = 32 ;
    	a815886759 = (a785058364 - 11);
    	a796195142 = 32 ;
    	a1611619350 = 32 ;
    	a882589857 = (a394986443 + -1);
    	a1711061361 = ((((((a1711061361 * a2147255888) % 14999) % 59) + 54) - 28930) + 28930);
    	a2128522778 = 32 ;
    	a807447096 = (((((a2139432823 * a177640787) % 14999) + 12241) + -23380) + -11492);
    	a1717386854 = 32 ;
    	a1678927341 = ((a304998879 / a369624711) - -9);
    	a976945745 = (a771824360 - 9);
    	a455265888 = a1538778197;
    	a771824360 = ((a871674684 + a337942537) - 3);
    	a835146412 = (((((((a177640787 * a177640787) % 14999) % 36) + 51) * 10) / 9) - -14);
    	a1763171942 = 32 ;
    	a1472462791 = 32 ;
    	a871674684 = ((a771824360 + a394986443) - 15);
    	a1862658444 = ((((((a1862658444 * a177640787) % 14999) + -6571) * 10) / 9) + -2898);
    	a871550570 = 34 ;
    	a1661935098 = 33 ;
    	a337942537 = ((a960419217 / a1538778197) + -7);
    	a785058364 = (a1917402140 - -8); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a2128522778 == 34 && (((input == 110) &&  cf==1 ) && a815886759 == 3)) && a526854419 == 34) && ((((-92 < a770071847) && (-2 >= a770071847)) && a1909685633 == 34) && a1917402140 == 4))) {
    	cf = 0;
    	a1293712589 = 33 ;
    	a1717386854 = 33 ;
    	a835146412 = ((((((a835146412 * a1562022185) % 14999) + -15313) * 1) % 36) + 93);
    	a570886160 = 32 ;
    	a2139432823 = (((((a169710014 * a1711061361) % 14999) + -28326) - 1657) - 13);
    	a785058364 = ((a1538778197 * a871674684) - 4);
    	a2128522778 = 33 ;
    	a1823597932 = 33 ;
    	a1862658444 = ((((((a1862658444 * a835146412) - 31641) % 29) + 224) / 5) - -152);
    	a337942537 = ((a785058364 - a785058364) - -4);
    	a770071847 = (((((((a1711061361 * a807447096) % 14999) % 22) - 133) * 5) % 22) + -100);
    	a806730426 = (a1678927341 + -4);
    	a976945745 = (a960419217 + -9);
    	a177640787 = (((((((a770071847 * a1189507312) % 14999) - 193) * 1) / 5) % 18) - 87);
    	a1491071731 = 33 ;
    	a771824360 = (a785058364 + -2);
    	a526854419 = 32 ;
    	a42170353 = 33 ;
    	a1189507312 = ((((((a1610801558 * a1610801558) % 73) + 114) + -1) + 18179) + -18176);
    	a723108336 = ((((((a723108336 * a912673804) % 73) + -105) * 5) % 73) + 2);
    	a1763171942 = 33 ;
    	a1541342791 = (((((((a1610801558 * a2147255888) % 14999) + -9135) * 1) / 5) % 81) + 401);
    	a807447096 = (((((((a807447096 * a1610801558) - 22231) % 25) - 19) * 5) % 25) + -19);
    	a1678927341 = (a815886759 - -7);
    	a871674684 = ((a960419217 + a455265888) + -11);
    	a1140224045 = 33 ;
    	a1917402140 = ((a771824360 - a455265888) - 4);
    	a2147255888 = ((((((a2147255888 * a1189507312) % 14999) + -2736) - 13070) * 10) / 9);
    	a304998879 = (a815886759 + 2);
    	a1472462791 = 32 ;
    	a912673804 = ((((((a169710014 * a1711061361) % 14999) / 5) - 164) / 5) - 20214);
    	a1538778197 = (a785058364 + -10);
    	a369624711 = (a960419217 + -5);
    	a815886759 = (a455265888 - 1);
    	a882589857 = (a455265888 + 7);
    	a455265888 = (a785058364 + -10);
    	a796195142 = 35 ;
    	a394986443 = (a785058364 - 1);
    	a2029515987 = 34 ;
    	a1562022185 = (((((a1711061361 * a1862658444) % 14999) / 5) / 5) + -26810);
    	a847823400 = ((((a770071847 * a177640787) - -9793) - 18306) - 23734);
    	a1610801558 = ((((((a1610801558 * a1711061361) % 14982) + -15017) + 5062) + 23674) - 28736);
    	a1711061361 = (((((a1711061361 * a835146412) % 59) - -17) + 15744) + -15716); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a1717386854 == 34 && (a1538778197 == 3 && ((a1472462791 == 34 && ((input == 111) &&  cf==1 )) && ((188 < a1189507312) && (267 >= a1189507312))))) && (a1661935098 == 34 && a1293712589 == 34))) {
    	cf = 0;
    	a526854419 = 32 ;
    	a1717386854 = 33 ;
    	a369624711 = (a1917402140 - -2);
    	a835146412 = ((((((a835146412 * a1189507312) % 14999) / 5) / 5) % 36) + 53);
    	a815886759 = (a882589857 - 9);
    	a1862658444 = (((((((a1862658444 * a1189507312) % 14999) - -10592) * 1) * 1) % 29) + 194);
    	a1541342791 = ((((((a2147255888 * a1711061361) % 14999) % 81) + 346) + -2) - -58);
    	a976945745 = (a1538778197 - 1);
    	a1538778197 = (a369624711 - 5);
    	a770071847 = ((((((a770071847 * a912673804) % 22) - 102) * 10) / 9) + 0);
    	a177640787 = ((((((a835146412 * a2147255888) % 14999) % 18) + -103) + 24136) - 24149);
    	a570886160 = 32 ;
    	a1711061361 = ((((((a1610801558 * a835146412) - -5953) % 59) - 4) - 2161) - -2197);
    	a1293712589 = 33 ;
    	a847823400 = ((((a770071847 * a770071847) - 36826) / 5) + -18811);
    	a771824360 = (a455265888 + 6);
    	a723108336 = ((((((a723108336 * a1562022185) * 1) / 5) - -9419) % 73) + -75);
    	a1472462791 = 32 ;
    	a1562022185 = ((((a1711061361 * a770071847) + -6263) - 1564) - 4543);
    	a2029515987 = 34 ;
    	a1189507312 = ((((((a177640787 * a1610801558) % 73) - -114) - 27897) * 1) + 27896);
    	a2128522778 = 33 ;
    	a1491071731 = 33 ;
    	a785058364 = (a871674684 - -6);
    	a1140224045 = 33 ;
    	a42170353 = 33 ;
    	a1678927341 = (a976945745 - -8);
    	a1610801558 = (((((a169710014 * a2147255888) % 14999) - 27674) * 1) * 1);
    	a807447096 = ((((((a807447096 * a912673804) % 25) - 17) - 7) + -8551) - -8531);
    	a337942537 = (a369624711 + -2);
    	a1823597932 = 33 ;
    	a871674684 = ((a815886759 * a1678927341) - 17);
    	a806730426 = (a882589857 - 4);
    	a394986443 = (a369624711 + 4);
    	a304998879 = ((a960419217 / a1917402140) + 3);
    	a796195142 = 35 ;
    	a455265888 = (a369624711 - 5);
    	a912673804 = (((((a835146412 * a1541342791) % 14999) + -20536) + -1569) + -5277);
    	a2139432823 = (((((a1862658444 * a2147255888) % 14999) - -14436) - -424) + -35245);
    	a882589857 = ((a785058364 * a1917402140) - 34);
    	a1763171942 = 33 ;
    	a1917402140 = (a369624711 + -4);
    	a2147255888 = (((((a2147255888 * a770071847) % 14999) - 5771) * 1) * 1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm233(int input) {
    if(((a1538778197 == 3 && ((a1140224045 == 34 && ((188 < a1189507312) && (267 >= a1189507312))) && a1678927341 == 11)) && (a455265888 == 3 && (a1717386854 == 34 && ((input == 110) &&  cf==1 ))))) {
    	cf = 0;
    	a2052893331 = ((a337942537 + a1678927341) + -1);
    	a682023469 = (a1917402140 - -4);
    	a1409922970 = ((a2052893331 - a304998879) - -1);
    	a1678927341 = (a394986443 - 2);
    	a1909685633 = 33 ;
    	a570886160 = 33 ;
    	a2147255888 = ((((((a723108336 * a723108336) / 5) + 12871) * 1) % 96) + 82);
    	a42170353 = 33 ;
    	a1823597932 = 33 ;
    	a455265888 = ((a2052893331 / a785058364) + 1);
    	a1917402140 = (a2052893331 + -13);
    	a796195142 = 33 ;
    	a770071847 = (((((a177640787 * a723108336) / 5) + -25443) % 22) - 96);
    	a369624711 = (a882589857 + -5);
    	a304998879 = (a1678927341 + -5);
    	a1140224045 = 33 ;
    	a871674684 = (a785058364 + -8);
    	a912673804 = (((((a912673804 * a2147255888) - 20769) % 65) - 30) + 1);
    	a1538778197 = (a682023469 - 7);
    	a1491071731 = 33 ;
    	a976945745 = ((a394986443 * a960419217) - 166);
    	a835146412 = ((((((a835146412 * a1610801558) % 14999) % 36) + 72) + 1) - 1);
    	a1862658444 = (((((a1610801558 * a1562022185) * 1) % 29) + 216) + 1);
    	a815886759 = (a882589857 - 10);
    	a771824360 = (a337942537 + 3);
    	a1763171942 = 33 ;
    	a2139432823 = (((((a807447096 * a807447096) % 101) + -56) + -1) - 1);
    	a2128522778 = 32 ;
    	a785058364 = (a2052893331 - 5);
    	a1661935098 = 33 ;
    	a1610801558 = (((((((a1610801558 * a1862658444) % 14999) % 12) + -23) - -25332) + 3083) + -28415);
    	a1717386854 = 33 ;
    	a1189507312 = ((((((a1189507312 * a770071847) % 14999) + 2972) % 73) + 113) - -3);
    	a526854419 = 33 ;
    	a1711061361 = (((((((a847823400 * a847823400) % 14999) / 5) % 59) + 49) + -18389) - -18344);
    	a1562022185 = (((((a1562022185 * a723108336) + 2264) % 75) + -89) / 5);
    	a1293712589 = 33 ;
    	a847823400 = (((((((a2147255888 * a169710014) % 14999) / 5) % 108) + 173) + 27261) - 27230);
    	a337942537 = (a2052893331 + -11);
    	a882589857 = (a1409922970 - 1);
    	a723108336 = ((((((a723108336 * a2147255888) % 14999) % 73) + -60) - 6) - 10);
    	a394986443 = (a1678927341 - -1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((((245 < a1862658444) && (266 >= a1862658444)) && (a2128522778 == 34 && ((input == 75) &&  cf==1 ))) && ((-92 < a770071847) && (-2 >= a770071847))) && (((188 < a1189507312) && (267 >= a1189507312)) && (a337942537 == 6 && ((-82 < a177640787) && (-22 >= a177640787)))))) {
    	cf = 0;
    	a419313210 = 33 ;
    	a847823400 = ((((((a1189507312 * a2139432823) % 14999) - 7516) * 10) / 9) * 1);
    	a785058364 = (a1917402140 - -6);
    	a1562022185 = (((((a1562022185 * a1711061361) % 14999) + -13080) / 5) * 5);
    	a1763171942 = 32 ;
    	a912673804 = (((((a177640787 * a177640787) + -13513) + -8579) * 10) / 9);
    	a1678927341 = (a815886759 - -6);
    	a1862658444 = (((((a1862658444 * a912673804) % 14999) - 14031) * 1) * 1);
    	a526854419 = 32 ;
    	a1649499722 = a960419217;
    	a455265888 = (a369624711 / a337942537);
    	a976945745 = (a1678927341 / a369624711);
    	a815886759 = (a871674684 - 4);
    	a871674684 = ((a455265888 * a882589857) - 8);
    	a1293712589 = 32 ;
    	a835146412 = (((((a835146412 * a1189507312) % 14999) - -1411) * -1) / 5);
    	a177640787 = ((((((a723108336 * a2139432823) % 14999) - -21745) / 5) * 10) / -9);
    	a882589857 = (a369624711 + 2);
    	a304998879 = (a394986443 - 8);
    	a337942537 = (a369624711 + -3);
    	a1611619350 = 35 ;
    	a796195142 = 32 ;
    	a394986443 = ((a1538778197 / a960419217) - -10);
    	a1189507312 = ((((((a1189507312 * a847823400) % 14999) - 12282) * 1) / 5) + -739); 
    	 printf("");//printf("%d\n", 128); fflush(stdout); 
    } if(((((( cf==1  && (input == 113)) && ((267 < a2147255888) && (391 >= a2147255888))) && a1538778197 == 3) && ((35 < a912673804) && (95 >= a912673804))) && (a369624711 == 7 && (((-82 < a177640787) && (-22 >= a177640787)) && a1763171942 == 34)))) {
    	cf = 0;
    	a526854419 = 33 ;
    	a369624711 = (a785058364 - 6);
    	a770071847 = (((((a770071847 * a169710014) * 1) % 22) + -98) + 1);
    	a1909685633 = 33 ;
    	a912673804 = ((((((((a912673804 * a847823400) % 14999) / 5) % 65) - 45) * 5) % 65) - 30);
    	a2128522778 = 32 ;
    	a1189507312 = (((((((a912673804 * a912673804) % 73) - -114) * 5) * 5) % 73) - -100);
    	a682023469 = (a304998879 + 2);
    	a337942537 = ((a815886759 + a960419217) + -12);
    	a1293712589 = 33 ;
    	a1823597932 = 33 ;
    	a1409922970 = (a455265888 - -8);
    	a1661935098 = 33 ;
    	a796195142 = 33 ;
    	a1862658444 = (((((((a1189507312 * a1189507312) % 14999) - 4824) / 5) - -12396) % 29) + 203);
    	a847823400 = ((((((a2147255888 * a770071847) % 14999) + 8742) % 108) + 242) + 2);
    	a882589857 = ((a1538778197 + a1538778197) + 4);
    	a304998879 = a871674684;
    	a2052893331 = ((a1678927341 / a394986443) + 16);
    	a976945745 = ((a1678927341 * a785058364) - 130);
    	a815886759 = (a1917402140 + -3);
    	a1140224045 = 33 ;
    	a1538778197 = (a882589857 - 9);
    	a570886160 = 33 ;
    	a1763171942 = 33 ;
    	a785058364 = 11;
    	a394986443 = 11;
    	a42170353 = 33 ;
    	a2139432823 = ((((((a2147255888 * a2147255888) % 14999) % 101) + -70) + -78) + 92);
    	a1678927341 = a771824360;
    	a1711061361 = ((((((a2147255888 * a2147255888) % 14999) - 13260) % 59) - -54) + 0);
    	a835146412 = ((((((a835146412 * a1862658444) % 14999) % 36) + 66) - -1) + -26);
    	a1610801558 = (((((a1610801558 * a723108336) / 5) - -3555) % 12) - 23);
    	a1491071731 = 33 ;
    	a1717386854 = 33 ;
    	a455265888 = (a882589857 - 8);
    	a723108336 = ((((((a2147255888 * a177640787) % 14999) % 73) + -44) / 5) - -22);
    	a1917402140 = ((a871674684 - a871674684) - -3);
    	a771824360 = (a871674684 - -4);
    	a1562022185 = ((((((a1562022185 * a2139432823) % 14999) % 75) - 36) - 1) - -1);
    	a871674684 = (a882589857 + -6);
    	a2147255888 = (((((((a2147255888 * a807447096) % 96) + 170) - -2) * 5) % 96) - -143); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((a1538778197 == 3 && (((267 < a2147255888) && (391 >= a2147255888)) && (((38 < a1562022185) && (229 >= a1562022185)) && ((a1491071731 == 34 && (a1717386854 == 34 && ( cf==1  && (input == 111)))) && a1909685633 == 34))))) {
    	cf = 0;
    	a2052893331 = ((a1917402140 * a785058364) + -32);
    	a1909685633 = 33 ;
    	a2139432823 = (((((((a1189507312 * a169710014) % 14999) % 101) + -56) * 5) % 101) + -57);
    	a1409922970 = (a337942537 - -5);
    	a976945745 = (a815886759 - 1);
    	a912673804 = (((((a912673804 * a1610801558) % 65) + -30) + -25181) - -25180);
    	a2128522778 = 32 ;
    	a785058364 = ((a455265888 + a976945745) - -6);
    	a526854419 = 33 ;
    	a1763171942 = 33 ;
    	a1862658444 = ((((((a1862658444 * a807447096) % 29) + 215) - -20926) / 5) + -4012);
    	a1491071731 = 33 ;
    	a1823597932 = 33 ;
    	a771824360 = (a304998879 + 3);
    	a1917402140 = ((a2052893331 / a455265888) - 2);
    	a337942537 = a871674684;
    	a2147255888 = (((((((a2147255888 * a2139432823) % 14999) % 96) - -170) / 5) + 2355) + -2203);
    	a815886759 = (a1678927341 - 10);
    	a369624711 = (a882589857 + -5);
    	a1562022185 = (((((a770071847 * a723108336) % 75) + 11) - -19) + -56);
    	a770071847 = ((((((a2139432823 * a2139432823) / 5) / 5) + 11999) % 22) + -125);
    	a42170353 = 33 ;
    	a871674684 = ((a1409922970 + a1538778197) - 10);
    	a570886160 = 33 ;
    	a682023469 = ((a882589857 - a394986443) - -9);
    	a723108336 = (((((((a847823400 * a847823400) % 14999) - 13276) * 2) / 5) % 73) - 43);
    	a847823400 = (((((a169710014 * a807447096) % 108) + 243) + -28553) + 28553);
    	a1140224045 = 33 ;
    	a1610801558 = (((((a1610801558 * a1562022185) / 5) - 20594) % 12) - 13);
    	a1717386854 = 33 ;
    	a394986443 = ((a455265888 + a976945745) - -6);
    	a835146412 = ((((((a835146412 * a177640787) % 36) - -90) * 5) % 36) - -50);
    	a304998879 = ((a1409922970 - a455265888) + -3);
    	a1678927341 = (a976945745 + 8);
    	a796195142 = 33 ;
    	a1293712589 = 33 ;
    	a1661935098 = 33 ;
    	a1538778197 = (a960419217 - 13);
    	a1711061361 = (((((((a1189507312 * a169710014) % 14999) - -8095) - 33933) * 1) % 59) + 106);
    	a1189507312 = ((((((a1189507312 * a912673804) % 73) - -115) - 27654) + 25162) + 2490);
    	a882589857 = (a455265888 - -7);
    	a455265888 = (a1409922970 - 9); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((((a785058364 == 12 && a1491071731 == 34) && ((351 < a847823400) && (400 >= a847823400))) && a1823597932 == 34) && ((a526854419 == 34 && ( cf==1  && (input == 93))) && ((-11 < a1610801558) && (124 >= a1610801558))))) {
    	cf = 0;
    	a1457121074 = 36 ;
    	a1244737994 = 33 ;
    	a796195142 = 35 ;
    	a1541342791 = ((((((a1862658444 * a847823400) % 14999) + 9390) - -1579) * 10) / 9); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm23(int input) {
    if(((a570886160 == 34 && (a369624711 == 7 && a1909685633 == 34)) && (((((-11 < a1610801558) && (124 >= a1610801558)) && ( cf==1  && a1871179310 == 32)) && a394986443 == 12) && a1661935098 == 34))) {
    	if(((((114 < a1711061361) && (231 >= a1711061361)) && ((((110 < a835146412) && (253 >= a835146412)) && ( cf==1  && a913550374 == 10)) && a394986443 == 12)) && (((44 < a2139432823) && (247 >= a2139432823)) && (((267 < a2147255888) && (391 >= a2147255888)) && a1491071731 == 34)))) {
    		calculate_outputm228(input);
    	} 
    } 
    if((((a570886160 == 34 && (a42170353 == 34 && ((110 < a835146412) && (253 >= a835146412)))) && a1678927341 == 11) && (((38 < a1562022185) && (229 >= a1562022185)) && (((-11 < a1610801558) && (124 >= a1610801558)) && (a1871179310 == 34 &&  cf==1 ))))) {
    	if(((a1538778197 == 3 && ((a1717386854 == 34 && a815886759 == 3) && a1909685633 == 34)) && (((351 < a847823400) && (400 >= a847823400)) && ((a1429598563 == 35 &&  cf==1 ) && ((7 < a807447096) && (218 >= a807447096)))))) {
    		calculate_outputm229(input);
    	} 
    } 
    if(((((a1871179310 == 35 &&  cf==1 ) && a1491071731 == 34) && a785058364 == 12) && (a1472462791 == 34 && (((267 < a2147255888) && (391 >= a2147255888)) && (a1140224045 == 34 && ((-11 < a1610801558) && (124 >= a1610801558))))))) {
    	if((((((351 < a847823400) && (400 >= a847823400)) && a815886759 == 3) && a42170353 == 34) && (((110 < a835146412) && (253 >= a835146412)) && (((a1817778538 == 6 &&  cf==1 ) && a1763171942 == 34) && a871674684 == 5)))) {
    		calculate_outputm230(input);
    	} 
    } 
    if((((( cf==1  && a1871179310 == 36) && a1717386854 == 34) && a1491071731 == 34) && (a1909685633 == 34 && ((((245 < a1862658444) && (266 >= a1862658444)) && a976945745 == 3) && ((110 < a835146412) && (253 >= a835146412)))))) {
    	if(((((110 < a835146412) && (253 >= a835146412)) && a1717386854 == 34) && (((a570886160 == 34 && ((a960419217 == 11 &&  cf==1 ) && ((267 < a2147255888) && (391 >= a2147255888)))) && ((-11 < a1610801558) && (124 >= a1610801558))) && a1678927341 == 11))) {
    		calculate_outputm232(input);
    	} 
    	if(((((110 < a835146412) && (253 >= a835146412)) && (((a960419217 == 14 &&  cf==1 ) && ((-11 < a1610801558) && (124 >= a1610801558))) && a1678927341 == 11)) && ((a976945745 == 3 && a369624711 == 7) && a337942537 == 6))) {
    		calculate_outputm233(input);
    	} 
    } 
}
 void calculate_outputm237(int input) {
    if((((((( cf==1  && (input == 98)) && a871550570 == 34) && a304998879 == 6) && ((-82 < a177640787) && (-22 >= a177640787))) && a337942537 == 6) && (a882589857 == 11 && a771824360 == 10))) {
    	cf = 0;
    	a1909685633 = 33 ;
    	a1293712589 = 33 ;
    	a723108336 = (((((a723108336 * a770071847) % 73) - 11) * 5) / 5);
    	a871674684 = ((a1538778197 * a815886759) + -5);
    	a1409922970 = ((a1917402140 / a785058364) + 13);
    	a304998879 = (a882589857 + -6);
    	a369624711 = (a976945745 - -3);
    	a337942537 = (a455265888 + 3);
    	a807447096 = ((((((((a807447096 * a1189507312) % 14999) % 25) + -43) * 9) / 10) - -19652) + -19628);
    	a177640787 = ((((((a177640787 * a1562022185) % 18) - 99) / 5) * 52) / 10);
    	a871550570 = 33 ;
    	a1763171942 = 33 ;
    	a1717386854 = 33 ;
    	a2052893331 = (a882589857 + 5);
    	a1610801558 = (((((a1610801558 * a1189507312) % 12) + -23) + 1) * 1);
    	a1917402140 = (a1678927341 - 8);
    	a1263839693 = 36 ;
    	a1472462791 = 33 ;
    	a785058364 = (a1538778197 - -8);
    	a771824360 = (a882589857 + -2);
    	a526854419 = 33 ;
    	a796195142 = 33 ;
    	a1538778197 = ((a976945745 / a1409922970) - -2);
    	a882589857 = ((a304998879 / a976945745) - -9); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm238(int input) {
    if((((a882589857 == 11 && (((-92 < a770071847) && (-2 >= a770071847)) && ((44 < a2139432823) && (247 >= a2139432823)))) && ((188 < a1189507312) && (267 >= a1189507312))) && ((a570886160 == 34 && ((input == 81) &&  cf==1 )) && ((245 < a1862658444) && (266 >= a1862658444))))) {
    	cf = 0;
    	a15249890 = (((((a1224074430 * a169710014) - 5325) - 5976) % 14838) + 15161);
    	a2074917498 = ((a976945745 / a304998879) - -4);
    	a796195142 = 34 ;
    	a491168833 = (a1917402140 - -7); 
    	 printf("");//printf("%d\n", 123); fflush(stdout); 
    } if((((((-82 < a177640787) && (-22 >= a177640787)) && ( cf==1  && (input == 76))) && ((35 < a912673804) && (95 >= a912673804))) && (a785058364 == 12 && (a1823597932 == 34 && (a394986443 == 12 && ((351 < a847823400) && (400 >= a847823400))))))) {
    	cf = 0;
    	a1218693435 = 35 ;
    	a796195142 = 32 ;
    	a1611619350 = 36 ;
    	a563057875 = (a337942537 - -9); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm239(int input) {
    if(((a337942537 == 6 && (a455265888 == 3 && ((-11 < a1610801558) && (124 >= a1610801558)))) && ((((44 < a2139432823) && (247 >= a2139432823)) && (((114 < a1711061361) && (231 >= a1711061361)) && ( cf==1  && (input == 75)))) && a394986443 == 12))) {
    	cf = 0;
    	a2147255888 = ((((((((a2147255888 * a1610801558) % 14999) % 61) - -330) + -2) * 5) % 61) - -308);
    	a807447096 = (((((((a1562022185 * a1862658444) % 14999) % 105) - -54) * 10) / 9) + 15);
    	a570886160 = 34 ;
    	a491168833 = ((a304998879 / a304998879) - -10);
    	a526854419 = 34 ;
    	a2074917498 = (a1678927341 + -4);
    	a796195142 = 34 ;
    	a1717386854 = 34 ;
    	a1538778197 = ((a394986443 - a337942537) - 3);
    	a912673804 = ((((((a1711061361 * a723108336) - -499) * 1) - 5862) % 29) - -65);
    	a835146412 = ((((((a1862658444 * a1224074430) % 71) - -113) + -26716) - 1279) - -28061);
    	a2128522778 = 34 ;
    	a1763171942 = 34 ;
    	a1711061361 = (((((((a169710014 * a2139432823) % 14999) + 6519) - -966) + 4959) % 58) + 138);
    	a15249890 = ((((a1224074430 * a1862658444) + 684) + 237) + 32);
    	a815886759 = (a882589857 + -8);
    	a871674684 = (a21974463 + -5); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if((((a369624711 == 7 && (a570886160 == 34 && a1678927341 == 11)) && a337942537 == 6) && ((a304998879 == 6 && ((input == 114) &&  cf==1 )) && ((114 < a1711061361) && (231 >= a1711061361))))) {
    	cf = 0;
    	a402335329 = 33 ;
    	a1611619350 = 32 ;
    	a796195142 = 32 ;
    	a1649499722 = (a1538778197 + 5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm240(int input) {
    if(((a1472462791 == 34 && ((a871674684 == 5 && (a1538778197 == 3 && ((-82 < a177640787) && (-22 >= a177640787)))) && a976945745 == 3)) && (( cf==1  && (input == 110)) && a871550570 == 34))) {
    	cf = 0;
    	a1140224045 = 32 ;
    	a42170353 = 34 ;
    	a1717386854 = 34 ;
    	a1189507312 = (((((a1189507312 * a2139432823) % 14999) - 28506) + -83) * 1);
    	a1921018930 = ((((((a2147255888 * a1711061361) % 14999) + -21201) / 5) % 90) - -203);
    	a976945745 = ((a1538778197 - a369624711) + 5);
    	a15249890 = (((((((a1921018930 * a1224074430) % 14999) / 5) % 55) + 177) + -11288) + 11316);
    	a847823400 = (((((((a169710014 * a1610801558) % 14999) * 2) * 1) - -1) % 24) + 375);
    	a912673804 = (((((((a2139432823 * a1862658444) % 14999) % 29) + 41) - 2) + 22409) - 22408);
    	a771824360 = (a1538778197 - -7);
    	a1909685633 = 34 ;
    	a1678927341 = (a785058364 - 1);
    	a785058364 = ((a304998879 / a304998879) + 9);
    	a871674684 = (a1538778197 - -2);
    	a1763171942 = 34 ;
    	a1823597932 = 32 ;
    	a796195142 = 34 ;
    	a1147553654 = (((((((a15249890 * a313727472) % 14999) + 5766) * 3) + 605) % 78) - -223);
    	a1562022185 = ((((((a313727472 * a15249890) % 14999) - -17180) + 1363) % 95) - -81);
    	a570886160 = 34 ;
    	a807447096 = (((((((a807447096 * a770071847) % 105) - -152) * 9) / 10) + 29231) + -29255);
    	a455265888 = ((a882589857 - a1538778197) - 5);
    	a394986443 = (a337942537 - -4);
    	a304998879 = (a337942537 + -2);
    	a337942537 = (a1538778197 + 1); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if((((a42170353 == 34 && ((a815886759 == 3 && ((input == 111) &&  cf==1 )) && a337942537 == 6)) && a1661935098 == 34) && (a369624711 == 7 && ((44 < a2139432823) && (247 >= a2139432823))))) {
    	cf = 0;
    	a304998879 = ((a976945745 + a815886759) - 2);
    	a1562022185 = (((((a1610801558 * a1711061361) % 95) + 134) * 1) - -1);
    	a1921018930 = (((((((a835146412 * a169710014) % 14999) % 90) + 81) - 1) * 10) / 9);
    	a570886160 = 34 ;
    	a1147553654 = ((((((((a1224074430 * a169710014) % 14999) - -10010) % 78) - -164) * 5) % 78) - -180);
    	a771824360 = (a1538778197 + 7);
    	a847823400 = ((((((a177640787 * a1189507312) / 5) % 24) + 398) - -1050) + -1064);
    	a1678927341 = (a369624711 - -4);
    	a1189507312 = (((((a1921018930 * a1224074430) % 14999) / 5) - -24516) / -5);
    	a15249890 = (((((((a1147553654 * a807447096) % 14999) % 55) + 166) / 5) * 48) / 10);
    	a796195142 = 34 ;
    	a1717386854 = 34 ;
    	a42170353 = 34 ;
    	a1909685633 = 34 ;
    	a1140224045 = 32 ;
    	a455265888 = (a882589857 + -8);
    	a1763171942 = 34 ;
    	a1823597932 = 32 ;
    	a807447096 = (((((((a807447096 * a1921018930) % 14999) % 105) - -88) / 5) * 10) / 9);
    	a785058364 = ((a815886759 - a976945745) - -10);
    	a912673804 = ((((((((a1711061361 * a2139432823) % 14999) + -10813) % 29) - -64) * 5) % 29) - -62);
    	a337942537 = (a1538778197 - -1);
    	a871674684 = (a976945745 + 2);
    	a394986443 = (a976945745 - -7);
    	a976945745 = (a1917402140 + -3); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } if(((a871674684 == 5 && (a785058364 == 12 && (((114 < a1711061361) && (231 >= a1711061361)) && a882589857 == 11))) && (((267 < a2147255888) && (391 >= a2147255888)) && (a1538778197 == 3 && ((input == 75) &&  cf==1 ))))) {
    	cf = 0;
    	a807447096 = (((((a807447096 * a1224074430) % 14999) - 29573) / 5) * 5);
    	a337942537 = (a871674684 + -1);
    	a785058364 = ((a771824360 * a394986443) - 70);
    	a1610801558 = ((((((a1610801558 * a835146412) % 14999) / 5) - 18639) * 10) / 9);
    	a976945745 = (a785058364 + -9);
    	a871674684 = (a976945745 - -2);
    	a2139432823 = (((((a2139432823 * a1862658444) % 14999) - 21282) * 1) - 1803);
    	a402335329 = 33 ;
    	a2128522778 = 32 ;
    	a1717386854 = 32 ;
    	a570886160 = 32 ;
    	a2147255888 = (((((a2147255888 * a313727472) % 14999) - 6408) - 7795) - 344);
    	a871550570 = 34 ;
    	a1293712589 = 32 ;
    	a42170353 = 32 ;
    	a177640787 = ((((a177640787 * a1862658444) * 1) + -3915) - 4330);
    	a1611619350 = 32 ;
    	a1491071731 = 32 ;
    	a1862658444 = ((((((a1862658444 * a313727472) % 14999) + -9616) / 5) * 10) / 9);
    	a369624711 = (a1678927341 - 4);
    	a1649499722 = (a304998879 - -3);
    	a723108336 = ((((((a723108336 * a835146412) % 14999) + 11282) * -1) / 10) * 5);
    	a1917402140 = ((a337942537 - a771824360) + 6);
    	a304998879 = ((a1538778197 + a455265888) - 2);
    	a1909685633 = 33 ;
    	a796195142 = 32 ;
    	a455265888 = (a815886759 - 2);
    	a882589857 = (a1917402140 - -7);
    	a815886759 = ((a1538778197 / a337942537) + 1);
    	a1189507312 = (((((a1189507312 * a770071847) + -384) * 1) * 10) / 9);
    	a526854419 = 32 ;
    	a1140224045 = 32 ;
    	a1711061361 = ((((((a1711061361 * a847823400) % 14999) / 5) % 59) + 54) - 0);
    	a1661935098 = 33 ;
    	a1538778197 = (a1917402140 - 1);
    	a770071847 = ((((((a847823400 * a835146412) % 14999) / 5) * 5) % 22) + -113);
    	a1472462791 = 32 ;
    	a835146412 = ((((((a835146412 * a807447096) % 14999) % 36) + 73) * 1) + 1); 
    	 printf("");//printf("%d\n", 129); fflush(stdout); 
    } if(((a871674684 == 5 && (a1140224045 == 34 && a1917402140 == 4)) && ((a570886160 == 34 && (((188 < a1189507312) && (267 >= a1189507312)) && ((input == 113) &&  cf==1 ))) && a976945745 == 3))) {
    	cf = 0;
    	a42170353 = 33 ;
    	a882589857 = (a337942537 + 4);
    	a1409922970 = (a455265888 + 6);
    	a1917402140 = (a337942537 + -3);
    	a912673804 = (((((a313727472 * a1610801558) % 65) - 29) + -2) + 0);
    	a847823400 = ((((((a1610801558 * a770071847) + 19293) % 108) + 207) * 10) / 9);
    	a1678927341 = a882589857;
    	a2147255888 = (((((((a2147255888 * a807447096) % 14999) - -5091) % 96) + 142) / 5) + 65);
    	a1909685633 = 33 ;
    	a771824360 = ((a871674684 + a1917402140) - -1);
    	a570886160 = 33 ;
    	a1661935098 = 33 ;
    	a835146412 = ((((((a177640787 * a1862658444) % 36) + 78) / 5) - 14012) + 14068);
    	a1189507312 = ((((((a1224074430 * a807447096) % 14999) - 1010) % 73) - -114) - 1);
    	a394986443 = ((a337942537 - a1917402140) - -8);
    	a2052893331 = ((a1538778197 + a785058364) + 1);
    	a770071847 = (((((((a835146412 * a1189507312) % 22) + -134) - -19) * 5) % 22) + -97);
    	a785058364 = (a771824360 - -2);
    	a1862658444 = ((((((a847823400 * a770071847) % 14999) - -19166) * 1) % 29) + 201);
    	a871550570 = 33 ;
    	a1562022185 = (((((a723108336 * a313727472) * 2) % 75) - -19) + 10);
    	a976945745 = (a2052893331 - 14);
    	a1610801558 = (((((((a177640787 * a1224074430) % 14999) % 12) - 23) + -1) - 23317) - -23318);
    	a871674684 = (a815886759 + 1);
    	a1293712589 = 33 ;
    	a526854419 = 33 ;
    	a1140224045 = 33 ;
    	a807447096 = (((((((a169710014 * a1711061361) % 14999) % 25) + -39) - -14258) * 2) + -28479);
    	a1823597932 = 33 ;
    	a723108336 = ((((((a723108336 * a2139432823) - -110) % 73) + -111) - 15925) + 15952);
    	a796195142 = 33 ;
    	a1538778197 = ((a882589857 - a1678927341) + 2);
    	a2139432823 = ((((((a2147255888 * a1189507312) % 14999) % 101) + -154) / 5) + -118);
    	a1763171942 = 33 ;
    	a304998879 = (a337942537 + -1);
    	a455265888 = ((a882589857 + a369624711) - 15);
    	a1472462791 = 33 ;
    	a1711061361 = (((((((a2147255888 * a1189507312) % 14999) + -12050) % 59) - -55) + -11027) + 11026);
    	a369624711 = (a815886759 - -3);
    	a177640787 = ((((((a177640787 * a1189507312) + 22630) % 18) - 99) + -29126) - -29114);
    	a815886759 = (a771824360 + -7);
    	a2128522778 = 33 ;
    	a1491071731 = 33 ;
    	a390274319 = 32 ;
    	a337942537 = (a882589857 - 5); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm241(int input) {
    if((((a1909685633 == 34 && (a1538778197 == 3 && a871550570 == 34)) && ((267 < a2147255888) && (391 >= a2147255888))) && ((a526854419 == 34 && ((input == 75) &&  cf==1 )) && a337942537 == 6))) {
    	cf = 0;
    	a491168833 = (a1917402140 - -7);
    	a2074917498 = ((a1678927341 / a1917402140) - -2);
    	a796195142 = 34 ;
    	a15249890 = (((((a1189507312 * a2147255888) % 14999) - -408) * 1) - -10500); 
    	 printf("");//printf("%d\n", 123); fflush(stdout); 
    } if(((a871550570 == 34 && (a42170353 == 34 && (a337942537 == 6 && (a2128522778 == 34 && a526854419 == 34)))) && (a1909685633 == 34 && ( cf==1  && (input == 96))))) {
    	cf = 0;
    	a1611619350 = 33 ;
    	a796195142 = 32 ;
    	a976902422 = ((((((a1224074430 * a1224074430) % 14999) - -7830) + 1847) * 10) / 9);
    	a881287135 = (a1538778197 - -8); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((a871674684 == 5 && (( cf==1  && (input == 93)) && a1909685633 == 34)) && (((-82 < a177640787) && (-22 >= a177640787)) && ((a369624711 == 7 && a42170353 == 34) && a976945745 == 3)))) {
    	cf = 0;
    	a774885508 = ((a882589857 * a1538778197) + -28);
    	a796195142 = 33 ;
    	a15249890 = ((((((a835146412 * a723108336) % 14999) - 9057) - 10253) / 5) + 6302);
    	a2052893331 = (a394986443 + 2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm24(int input) {
    if(((((7 < a807447096) && (218 >= a807447096)) && ((((-50 < a1224074430) && (78 >= a1224074430)) &&  cf==1 ) && a871550570 == 34)) && (a1717386854 == 34 && ((a771824360 == 10 && a1472462791 == 34) && a785058364 == 12)))) {
    	if((( cf==1  && ((-102 < a1129487110) && (-23 >= a1129487110))) && ((a815886759 == 3 && ((a871550570 == 34 && (a1763171942 == 34 && a871674684 == 5)) && a1538778197 == 3)) && a369624711 == 7))) {
    		calculate_outputm237(input);
    	} 
    	if((((((((-23 < a1129487110) && (103 >= a1129487110)) &&  cf==1 ) && ((267 < a2147255888) && (391 >= a2147255888))) && a1293712589 == 34) && a337942537 == 6) && (a1823597932 == 34 && (a771824360 == 10 && a1678927341 == 11)))) {
    		calculate_outputm238(input);
    	} 
    } 
    if((((( cf==1  && ((78 < a1224074430) && (109 >= a1224074430))) && a369624711 == 7) && ((267 < a2147255888) && (391 >= a2147255888))) && (a815886759 == 3 && ((a1763171942 == 34 && ((351 < a847823400) && (400 >= a847823400))) && a1661935098 == 34)))) {
    	if(((a21974463 == 10 &&  cf==1 ) && (a785058364 == 12 && (((188 < a1189507312) && (267 >= a1189507312)) && (a337942537 == 6 && (a871550570 == 34 && (((30 < a723108336) && (121 >= a723108336)) && ((351 < a847823400) && (400 >= a847823400))))))))) {
    		calculate_outputm239(input);
    	} 
    } 
    if((( cf==1  && 109 < a1224074430) && ((a455265888 == 3 && ((a2128522778 == 34 && (a1472462791 == 34 && a1491071731 == 34)) && a369624711 == 7)) && ((30 < a723108336) && (121 >= a723108336))))) {
    	if(((((7 < a807447096) && (218 >= a807447096)) && (((((-92 < a770071847) && (-2 >= a770071847)) && a2128522778 == 34) && a42170353 == 34) && ((245 < a1862658444) && (266 >= a1862658444)))) && ((((-116 < a313727472) && (-95 >= a313727472)) &&  cf==1 ) && a1140224045 == 34))) {
    		calculate_outputm240(input);
    	} 
    	if((((a1823597932 == 34 && (((38 < a1562022185) && (229 >= a1562022185)) && ((44 < a2139432823) && (247 >= a2139432823)))) && a1140224045 == 34) && (((((-95 < a313727472) && (39 >= a313727472)) &&  cf==1 ) && a337942537 == 6) && a304998879 == 6))) {
    		calculate_outputm241(input);
    	} 
    } 
}
 void calculate_outputm242(int input) {
    if((((a785058364 == 12 && a871674684 == 5) && a1472462791 == 34) && (((((267 < a2147255888) && (391 >= a2147255888)) && ((input == 75) &&  cf==1 )) && a1763171942 == 34) && a394986443 == 12))) {
    	cf = 0;
    	a1562022185 = (((((a1562022185 * a1711061361) % 14999) + 12432) - 30329) * 1);
    	a1192100362 = ((((((((a807447096 * a2147255888) % 14999) % 80) - 85) * 5) * 5) % 80) - 6);
    	a871674684 = ((a815886759 / a337942537) - -3);
    	a882589857 = (a976945745 - -8);
    	a723108336 = (((((a723108336 * a177640787) * 10) / 9) - 286) / 5);
    	a1140224045 = 32 ;
    	a796195142 = 32 ;
    	a1189507312 = (((((a1189507312 * a770071847) + 23592) + -28098) - -9353) + -9450);
    	a1611619350 = 34 ;
    	a566378298 = 33 ;
    	a770071847 = (((((a770071847 * a1610801558) % 14999) - 21320) + -4388) + -3534);
    	a1717386854 = 32 ;
    	a815886759 = (a771824360 + -7);
    	a785058364 = (a394986443 - 2);
    	a1763171942 = 32 ;
    	a807447096 = ((((a807447096 * a912673804) + -18552) + -8094) * 1);
    	a835146412 = (((((a835146412 * a847823400) % 14999) + -889) - 14099) * 1); 
    	 printf("");//printf("%d\n", 123); fflush(stdout); 
    } 
}
 void calculate_outputm245(int input) {
    if(((((188 < a1189507312) && (267 >= a1189507312)) && ((a1917402140 == 4 && a1823597932 == 34) && ((114 < a1711061361) && (231 >= a1711061361)))) && ((((input == 75) &&  cf==1 ) && a871550570 == 34) && a1538778197 == 3))) {
    	cf = 0;
    	a1823597932 = 33 ;
    	a871674684 = (a455265888 + 3);
    	a1491071731 = 33 ;
    	a1611619350 = 36 ;
    	a394986443 = a771824360;
    	a796195142 = 32 ;
    	a1711061361 = ((((((a1711061361 * a835146412) % 14999) - -8814) / 5) - 3205) + -5571);
    	a807447096 = (((((a807447096 * a1862658444) % 14999) - 29582) - 236) + 4627);
    	a770071847 = ((((a770071847 * a1862658444) / 5) / 5) - 4510);
    	a1218693435 = 33 ;
    	a1763171942 = 32 ;
    	a976945745 = ((a455265888 / a337942537) - -1);
    	a871550570 = 32 ;
    	a534143625 = (((((((a723108336 * a1862658444) % 14999) % 25) + 122) + -17674) / 5) + 3618);
    	a1909685633 = 33 ;
    	a1538778197 = (a394986443 + -9);
    	a1678927341 = ((a1110504460 / a455265888) + 2);
    	a882589857 = (a337942537 + 5);
    	a1917402140 = ((a455265888 + a369624711) - 3);
    	a1610801558 = (((((((a1610801558 * a2147255888) % 14999) - 4034) % 14982) - 15017) / 5) + -23099);
    	a526854419 = 33 ;
    	a2147255888 = (((((a912673804 * a177640787) % 14999) - 25793) / 5) / 5);
    	a1293712589 = 33 ;
    	a177640787 = ((((((a177640787 * a847823400) % 14999) - 9632) % 14940) - 15059) - 2);
    	a771824360 = (a337942537 - -5);
    	a1189507312 = (((((a1189507312 * a169710014) % 14999) + 12974) * -1) + -742);
    	a1862658444 = (((((((a723108336 * a1189507312) % 14999) % 29) + 214) - 23824) / 5) - -4921);
    	a723108336 = (((((a723108336 * a770071847) % 14999) + -10985) * 1) * 1); 
    	 printf("");//printf("%d\n", 132); fflush(stdout); 
    } if(((a1909685633 == 34 && (a976945745 == 3 && ( cf==1  && (input == 56)))) && (((a1538778197 == 3 && a1823597932 == 34) && ((30 < a723108336) && (121 >= a723108336))) && ((-92 < a770071847) && (-2 >= a770071847))))) {
    	cf = 0;
    	a1541342791 = ((((((a169710014 * a169710014) % 14999) + 10240) * 1) + -5097) * -1);
    	a796195142 = 35 ;
    	a435971279 = (a1678927341 + -1);
    	a234980720 = (a771824360 + 2); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm247(int input) {
    if(((a882589857 == 11 && (((7 < a807447096) && (218 >= a807447096)) && (a871550570 == 34 && ((245 < a1862658444) && (266 >= a1862658444))))) && (a1538778197 == 3 && (((351 < a847823400) && (400 >= a847823400)) && ((input == 75) &&  cf==1 ))))) {
    	cf = 0;
    	a770071847 = (((((a770071847 * a807447096) % 22) + -104) + 1) - 5);
    	a304998879 = (a815886759 - -2);
    	a1538778197 = (a785058364 - 10);
    	a1491071731 = 34 ;
    	a2128522778 = 33 ;
    	a912673804 = ((((((((a169710014 * a835146412) % 14999) % 65) + -88) * 5) * 5) % 65) - -7);
    	a1405419384 = ((a976945745 * a976945745) - -5);
    	a570886160 = 33 ;
    	a1420843252 = 34 ;
    	a169710014 = (((((a169710014 * a534143625) % 14999) + -14953) + -8) / 5);
    	a1189507312 = ((((((a847823400 * a534143625) % 14999) / 5) % 73) + 114) + -1);
    	a835146412 = ((((((a847823400 * a1610801558) % 14999) * 2) % 36) - -72) - -3);
    	a2139432823 = ((((((a2139432823 * a534143625) % 14999) % 101) - 57) / 5) + -126);
    	a1711061361 = (((((((a1711061361 * a1862658444) % 14999) % 59) - 1) - -47) * 9) / 10);
    	a177640787 = ((((((a177640787 * a534143625) % 14999) % 18) + -100) * 1) - -1);
    	a1678927341 = (a882589857 - 1); 
    	 printf("");//printf("%d\n", 125); fflush(stdout); 
    } if(((a1538778197 == 3 && a2128522778 == 34) && (((((267 < a2147255888) && (391 >= a2147255888)) && (a1917402140 == 4 && ((input == 67) &&  cf==1 ))) && ((110 < a835146412) && (253 >= a835146412))) && a570886160 == 34))) {
    	cf = 0;
    	a796195142 = 32 ;
    	a1218693435 = 34 ;
    	a1611619350 = 36 ;
    	a602327392 = (a304998879 - -5); 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } if(((((( cf==1  && (input == 88)) && a1678927341 == 11) && ((-11 < a1610801558) && (124 >= a1610801558))) && a455265888 == 3) && (a771824360 == 10 && (a815886759 == 3 && ((7 < a807447096) && (218 >= a807447096)))))) {
    	cf = 0;
    	a1218693435 = 36 ;
    	a1611619350 = 36 ;
    	a796195142 = 32 ;
    	a1094902983 = 36 ; 
    	 printf("");//printf("%d\n", 127); fflush(stdout); 
    } 
}
 void calculate_outputm248(int input) {
    if(((a526854419 == 34 && (a1717386854 == 34 && (a369624711 == 7 && a815886759 == 3))) && ((((input == 98) &&  cf==1 ) && ((188 < a1189507312) && (267 >= a1189507312))) && ((38 < a1562022185) && (229 >= a1562022185))))) {
    	cf = 0;
    	a796195142 = 33 ;
    	a2034779655 = (((((a1711061361 * a807447096) % 14999) / 5) - 8361) * 3);
    	a1491071731 = 33 ;
    	a1917402140 = ((a1678927341 - a785058364) - -4);
    	a871674684 = (a337942537 + -1);
    	a1909685633 = 33 ;
    	a770071847 = ((((((((a770071847 * a2147255888) % 14999) - 5993) % 22) - 100) * 5) % 22) - 113);
    	a1189507312 = (((((a1189507312 * a177640787) % 73) + 153) / 5) - -120);
    	a1140224045 = 33 ;
    	a882589857 = (a785058364 + -1);
    	a1717386854 = 33 ;
    	a1232289479 = (a455265888 - -11);
    	a807447096 = ((((((a770071847 * a1610801558) * 5) % 25) - 29) * 9) / 10);
    	a2052893331 = (a369624711 + 10);
    	a815886759 = (a337942537 + -3);
    	a1538778197 = ((a807046857 + a807046857) - 10);
    	a723108336 = (((((a723108336 * a912673804) % 73) + -42) + -1) + -2);
    	a2147255888 = ((((((a2147255888 * a1562022185) % 14999) - 15792) % 96) + 170) + 48);
    	a1293712589 = 33 ;
    	a526854419 = 33 ;
    	a304998879 = ((a771824360 / a785058364) - -5);
    	a369624711 = (a815886759 - -4); 
    	 printf("");//printf("%d\n", 118); fflush(stdout); 
    } 
}
 void calculate_outputm25(int input) {
    if(((a882589857 == 11 && ((188 < a1189507312) && (267 >= a1189507312))) && ((((a1293712589 == 34 && ( cf==1  && a1420843252 == 32)) && ((35 < a912673804) && (95 >= a912673804))) && a1763171942 == 34) && a815886759 == 3))) {
    	if((((a1140224045 == 34 && ((((-82 < a177640787) && (-22 >= a177640787)) && a1717386854 == 34) && ((110 < a835146412) && (253 >= a835146412)))) && ((38 < a1562022185) && (229 >= a1562022185))) && (a871674684 == 5 && (a806730426 == 5 &&  cf==1 )))) {
    		calculate_outputm242(input);
    	} 
    } 
    if(((a1538778197 == 3 && ((7 < a807447096) && (218 >= a807447096))) && ((((( cf==1  && a1420843252 == 34) && a771824360 == 10) && a394986443 == 12) && a1763171942 == 34) && ((114 < a1711061361) && (231 >= a1711061361))))) {
    	if(((((((7 < a807447096) && (218 >= a807447096)) && a871550570 == 34) && ((-11 < a1610801558) && (124 >= a1610801558))) && a976945745 == 3) && ((a1293712589 == 34 && (a1110504460 == 7 &&  cf==1 )) && a1917402140 == 4))) {
    		calculate_outputm245(input);
    	} 
    } 
    if((((a1538778197 == 3 && ( cf==1  && a1420843252 == 35)) && a570886160 == 34) && ((a1717386854 == 34 && (((44 < a2139432823) && (247 >= a2139432823)) && a42170353 == 34)) && a771824360 == 10))) {
    	if(((a1823597932 == 34 && ((((-82 < a177640787) && (-22 >= a177640787)) && ((-92 < a770071847) && (-2 >= a770071847))) && ((114 < a1711061361) && (231 >= a1711061361)))) && ((( cf==1  && a534143625 <=  104) && a369624711 == 7) && a1909685633 == 34))) {
    		calculate_outputm247(input);
    	} 
    } 
    if(((a871674684 == 5 && (a882589857 == 11 && ( cf==1  && a1420843252 == 36))) && (a526854419 == 34 && (a1538778197 == 3 && (a1917402140 == 4 && a1140224045 == 34))))) {
    	if(((( cf==1  && a807046857 == 6) && a871674684 == 5) && ((a1717386854 == 34 && (a882589857 == 11 && (a570886160 == 34 && a304998879 == 6))) && ((-82 < a177640787) && (-22 >= a177640787))))) {
    		calculate_outputm248(input);
    	} 
    } 
}

 void calculate_output(int input) {
        cf = 1;

    if(((a337942537 == 4 && ((a882589857 == 9 && (a796195142 == 32 &&  cf==1 )) && a1189507312 <=  40)) && (a1562022185 <=  -113 && (a42170353 == 32 && a1763171942 == 32)))) {
    	if(((a177640787 <=  -120 && (((a1293712589 == 32 && ( cf==1  && a1611619350 == 32)) && a2147255888 <=  74) && a337942537 == 4)) && (a976945745 == 1 && a2128522778 == 32))) {
    		calculate_outputm1(input);
    	} 
    	if((((a1823597932 == 32 && (( cf==1  && a1611619350 == 33) && a1472462791 == 32)) && a882589857 == 9) && (a912673804 <=  -96 && (a770071847 <=  -137 && a304998879 == 4)))) {
    		calculate_outputm2(input);
    	} 
    	if(((a42170353 == 32 && (a1661935098 == 32 && (((a770071847 <=  -137 && a807447096 <=  -45) && a369624711 == 5) && a871674684 == 3))) && ( cf==1  && a1611619350 == 34))) {
    		calculate_outputm3(input);
    	} 
    	if(((a1661935098 == 32 && (a1763171942 == 32 && (a570886160 == 32 && a337942537 == 4))) && ((a1472462791 == 32 && (a1611619350 == 35 &&  cf==1 )) && a177640787 <=  -120))) {
    		calculate_outputm4(input);
    	} 
    	if(((((a770071847 <=  -137 && a835146412 <=  36) && a976945745 == 1) && a1763171942 == 32) && (a1711061361 <=  -5 && ((a1611619350 == 36 &&  cf==1 ) && a847823400 <=  134)))) {
    		calculate_outputm5(input);
    	} 
    } 
    if(((((-137 < a770071847) && (-92 >= a770071847)) && a1661935098 == 33) && ((((((-96 < a912673804) && (35 >= a912673804)) && ( cf==1  && a796195142 == 33)) && a1909685633 == 33) && a871674684 == 4) && ((36 < a835146412) && (110 >= a835146412))))) {
    	if(((((36 < a835146412) && (110 >= a835146412)) && ((((-96 < a912673804) && (35 >= a912673804)) && (( cf==1  && a2052893331 == 10) && a304998879 == 5)) && ((40 < a1189507312) && (188 >= a1189507312)))) && (a785058364 == 11 && a882589857 == 10))) {
    		calculate_outputm6(input);
    	} 
    	if(((a304998879 == 5 && (((185 < a1862658444) && (245 >= a1862658444)) && (a1491071731 == 33 && ((((-96 < a912673804) && (35 >= a912673804)) && (a2052893331 == 11 &&  cf==1 )) && a570886160 == 33)))) && ((-45 < a807447096) && (7 >= a807447096)))) {
    		calculate_outputm7(input);
    	} 
    	if(((a1823597932 == 33 && ((a771824360 == 9 && ((-118 < a723108336) && (30 >= a723108336))) && a42170353 == 33)) && (a369624711 == 6 && ((a2052893331 == 12 &&  cf==1 ) && a1917402140 == 3)))) {
    		calculate_outputm8(input);
    	} 
    	if(((a1823597932 == 33 && ((((-159 < a2139432823) && (44 >= a2139432823)) && a1140224045 == 33) && ((36 < a835146412) && (110 >= a835146412)))) && ((((-96 < a912673804) && (35 >= a912673804)) && (a2052893331 == 13 &&  cf==1 )) && a526854419 == 33))) {
    		calculate_outputm9(input);
    	} 
    	if(((a570886160 == 33 && ((a2052893331 == 14 &&  cf==1 ) && a526854419 == 33)) && (((134 < a847823400) && (351 >= a847823400)) && ((a337942537 == 5 && ((40 < a1189507312) && (188 >= a1189507312))) && a2128522778 == 33)))) {
    		calculate_outputm10(input);
    	} 
    	if(((a785058364 == 11 && (a304998879 == 5 && ((-113 < a1562022185) && (38 >= a1562022185)))) && (a871674684 == 4 && ((( cf==1  && a2052893331 == 15) && ((74 < a2147255888) && (267 >= a2147255888))) && a1763171942 == 33)))) {
    		calculate_outputm11(input);
    	} 
    	if(((a1717386854 == 33 && ( cf==1  && a2052893331 == 16)) && (((134 < a847823400) && (351 >= a847823400)) && (((((74 < a2147255888) && (267 >= a2147255888)) && a1763171942 == 33) && ((40 < a1189507312) && (188 >= a1189507312))) && ((-113 < a1562022185) && (38 >= a1562022185)))))) {
    		calculate_outputm12(input);
    	} 
    	if(((a1661935098 == 33 && a815886759 == 2) && ((((a394986443 == 11 && (a2052893331 == 17 &&  cf==1 )) && a304998879 == 5) && ((36 < a835146412) && (110 >= a835146412))) && a871674684 == 4))) {
    		calculate_outputm13(input);
    	} 
    } 
    if(((((a771824360 == 10 && (((245 < a1862658444) && (266 >= a1862658444)) && ( cf==1  && a796195142 == 34))) && ((38 < a1562022185) && (229 >= a1562022185))) && ((30 < a723108336) && (121 >= a723108336))) && (a1293712589 == 34 && ((-11 < a1610801558) && (124 >= a1610801558))))) {
    	if(((((351 < a847823400) && (400 >= a847823400)) && (( cf==1  && a15249890 <=  155) && ((7 < a807447096) && (218 >= a807447096)))) && (((-11 < a1610801558) && (124 >= a1610801558)) && ((a455265888 == 3 && a1917402140 == 4) && a1909685633 == 34)))) {
    		calculate_outputm14(input);
    	} 
    	if(((((((44 < a2139432823) && (247 >= a2139432823)) && (((155 < a15249890) && (267 >= a15249890)) &&  cf==1 )) && ((245 < a1862658444) && (266 >= a1862658444))) && a526854419 == 34) && (a882589857 == 11 && (a1917402140 == 4 && ((-82 < a177640787) && (-22 >= a177640787)))))) {
    		calculate_outputm15(input);
    	} 
    	if(((a570886160 == 34 && (((35 < a912673804) && (95 >= a912673804)) && a976945745 == 3)) && (a1538778197 == 3 && ((( cf==1  && ((267 < a15249890) && (323 >= a15249890))) && ((44 < a2139432823) && (247 >= a2139432823))) && a369624711 == 7)))) {
    		calculate_outputm16(input);
    	} 
    	if(((a976945745 == 3 && (a1491071731 == 34 && ( cf==1  && 323 < a15249890))) && (((a455265888 == 3 && ((188 < a1189507312) && (267 >= a1189507312))) && a882589857 == 11) && ((-11 < a1610801558) && (124 >= a1610801558))))) {
    		calculate_outputm17(input);
    	} 
    } 
    if(((a1293712589 == 33 && (a42170353 == 33 && (((185 < a1862658444) && (245 >= a1862658444)) && ((-5 < a1711061361) && (114 >= a1711061361))))) && (a882589857 == 10 && (( cf==1  && a796195142 == 35) && a1678927341 == 10)))) {
    	if((((a976945745 == 2 && ((a455265888 == 2 && a771824360 == 9) && a1140224045 == 33)) && a304998879 == 5) && (a871550570 == 33 && ( cf==1  && a1541342791 <=  198)))) {
    		calculate_outputm18(input);
    	} 
    	if(((a1140224045 == 33 && (a42170353 == 33 && (( cf==1  && ((198 < a1541342791) && (318 >= a1541342791))) && a882589857 == 10))) && ((a304998879 == 5 && a337942537 == 5) && a1823597932 == 33))) {
    		calculate_outputm19(input);
    	} 
    	if(((a304998879 == 5 && ((((-137 < a770071847) && (-92 >= a770071847)) && ((-120 < a177640787) && (-82 >= a177640787))) && a2128522778 == 33)) && (((((318 < a1541342791) && (482 >= a1541342791)) &&  cf==1 ) && a815886759 == 2) && a771824360 == 9))) {
    		calculate_outputm20(input);
    	} 
    	if(((((-36 < a1610801558) && (-11 >= a1610801558)) && a337942537 == 5) && (((-113 < a1562022185) && (38 >= a1562022185)) && ((((482 < a1541342791 &&  cf==1 ) && ((74 < a2147255888) && (267 >= a2147255888))) && ((-96 < a912673804) && (35 >= a912673804))) && ((-137 < a770071847) && (-92 >= a770071847)))))) {
    		calculate_outputm21(input);
    	} 
    } 
    if((((((30 < a723108336) && (121 >= a723108336)) && a871674684 == 5) && a1909685633 == 34) && (a526854419 == 34 && (a882589857 == 11 && (( cf==1  && a796195142 == 36) && a1293712589 == 34))))) {
    	if(((((( cf==1  && a169710014 <=  51) && a1909685633 == 34) && a1472462791 == 34) && ((38 < a1562022185) && (229 >= a1562022185))) && (a771824360 == 10 && (((267 < a2147255888) && (391 >= a2147255888)) && a871674684 == 5)))) {
    		calculate_outputm22(input);
    	} 
    	if(((((35 < a912673804) && (95 >= a912673804)) && ((a526854419 == 34 && a1491071731 == 34) && a815886759 == 3)) && (a771824360 == 10 && (((38 < a1562022185) && (229 >= a1562022185)) && (((51 < a169710014) && (221 >= a169710014)) &&  cf==1 ))))) {
    		calculate_outputm23(input);
    	} 
    	if((((a304998879 == 6 && (((221 < a169710014) && (315 >= a169710014)) &&  cf==1 )) && a337942537 == 6) && (((-11 < a1610801558) && (124 >= a1610801558)) && (a1909685633 == 34 && (a1293712589 == 34 && a976945745 == 3))))) {
    		calculate_outputm24(input);
    	} 
    	if(((a1491071731 == 34 && (a882589857 == 11 && ((267 < a2147255888) && (391 >= a2147255888)))) && ((((-92 < a770071847) && (-2 >= a770071847)) && (( cf==1  && 315 < a169710014) && ((-82 < a177640787) && (-22 >= a177640787)))) && ((114 < a1711061361) && (231 >= a1711061361))))) {
    		calculate_outputm25(input);
    	} 
    } 
    errorCheck();

    if( cf==1 ) 
    {
    //fprintf(stderr, "Invalid input: %d\n", input); 
}
}

int input,output;
int main()
{
kappa = 0;
    // main i/o-loop

   int symb;
   for (int FLAG=0;FLAG<BOUND;FLAG++)
    {
    klee_make_symbolic(&symb, sizeof(int ), "symb");     
        // operate eca engine
          
          if((symb != 55) && (symb != 56) && (symb != 57) && (symb != 58) && (symb != 59) && (symb != 60) && (symb != 61) && (symb != 62) && (symb != 63) && (symb != 64) && (symb != 65)){
		if((symb != 66) && (symb != 67) && (symb != 68) && (symb != 69) && (symb != 70) && (symb != 71) && (symb != 72) && (symb != 73) && (symb != 74) && (symb != 75) && (symb != 76) && (symb != 77)){
         if((symb != 78) && (symb != 79) && (symb != 80) && (symb != 81) && (symb != 82) && (symb != 83) && (symb != 84) && (symb != 85) && (symb != 86) && (symb != 87) && (symb != 88) && (symb != 89)){
	     if((symb != 90) && (symb != 91) && (symb != 92) && (symb != 93) && (symb != 94) && (symb != 95) && (symb != 96) && (symb != 97) && (symb != 98) && (symb != 99) && (symb != 100)){ 
         if((symb != 101) && (symb != 102) && (symb != 103) && (symb != 104) && (symb != 105) && (symb != 106) && (symb != 107) && (symb != 108) && (symb != 109) && (symb != 110)){
		if((symb != 111) && (symb != 112) && (symb != 113) && (symb != 114) && (symb != 115) && (symb != 116)){
          return -2;
		}
		 }
		 }
       }
     }
   }
          
        calculate_output(symb);
    }
}
