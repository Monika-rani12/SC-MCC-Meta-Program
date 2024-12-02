#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>

    #define BOUND 1

	// inputs
	int inputs[] = {3,5,9,8,6,1,4,7,10,2};

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
	void calculate_outputm241(int);
	void calculate_outputm242(int);
	void calculate_outputm243(int);
	void calculate_outputm244(int);
	void calculate_outputm245(int);
	void calculate_outputm246(int);
	void calculate_outputm247(int);
	void calculate_outputm248(int);
	void calculate_outputm249(int);
	void calculate_outputm250(int);
	void calculate_outputm251(int);
	void calculate_outputm252(int);
	void calculate_outputm253(int);
	void calculate_outputm254(int);
	void calculate_outputm255(int);
	void calculate_outputm256(int);
	void calculate_outputm257(int);
	void calculate_outputm258(int);
	void calculate_outputm259(int);
	void calculate_outputm260(int);

	 int a81,a158,a45,a168,a100,a120,a63,a119,a112,a27;
	 
	 int a86  = 36;
	 int a176 = 3;
	 int a200  = 35;
	 int a95 = 9;
	 int a79 = 6;
	 int a53  = 32;
	 int a11 = 6;
	 int a96  = 33;
	 int a193 = 8;
	 int a43  = 34;
	 int a72 = 9;
	 int a54  = 32;
	 int a1  = 33;
	 int a19  = 34;
	 int a196 = 6;
	 int a136 = 10;
	 int a64 = 9;
	 int a22 = 8;
	 int a123 = 5;
	 int a89  = 34;
	 int a26 = 3;
	 int a21  = 35;
	 int a187 = 4;
	 int a103  = 33;
	 int a184 = 6;
	 int a9  = 34;
	 int a154  = 32;
	 int a39 = 8;
	 int a144  = 32;
	 int a87  = 35;
	 int a25 = 5;
	 int a75 = 9;
	 int a24 = 11;
	 int a153 = 4;
	 int a162  = 32;
	 int a70  = 33;
	 int a151  = 35;
	 int a3  = 32;
	 int a68 = 3;
	 int a52 = 11;
	 int a31  = 36;
	 int a171 = 8;
	 int a174 = 8;
	 int a47  = 33;
	 int a46  = 32;
	 int a146  = 32;
	 int a131 = 10;
	 int a114 = 9;
	 int a2 = 4;
	 int a185 = 14;
	 int a115  = 32;
	 int a105 = 11;
	 int a128 = 2;
	 int a82  = 35;
	 int a140 = 5;
	 int a65 = 10;
	 int a23  = 35;
	 int a113 = 6;
	 int a126 = 4;
	 int a58 = 8;
	 int a150 = 5;
	 int a55  = 32;
	 int a90  = 32;
	 int a50 = 6;
	 int a6 = 10;
	 int a127 = 7;
	 int a28 = 10;
	 int a0  = 32;
	 int a141  = 32;
	 int a164 = 6;
	 int a179  = 32;
	 int a175 = 11;
	 int a84  = 32;
	 int a7 = 4;
	 int a125  = 32;
	 int a85  = 36;
	 int a12  = 32;
	 int a17  = 32;
	 int a36  = 32;
	 int a78  = 32;
	 int a71 = 12;
	 int a35  = 34;
	 int a104  = 32;
	 int a110 = 6;
	 int a167 = 2;
	 int a156 = 6;
	 int a66 = 4;
	 int a62 = 4;
	 int a122  = 36;
	 int a186  = 33;
	 int a93 = 3;
	 int a15 = 10;
	 int a97 = 4;
	 int a20 = 4;
	 int a180  = 32;
	 int a32  = 32;
	 int a59 = 6;
	 int a67  = 34;
	 int a61 = 5;
	 int a30  = 32;
	 int a42  = 32;
	 int a88  = 32;
	 int a134 = 17;
	 int a76 = 5;
	 int a163  = 36;
	 int a155  = 32;
	 int a34  = 32;
	 int a133 = 5;
	 int a190 = 13;
	 int a137  = 32;
	 int a189 = 15;
	 int a181 = 14;
	 int a111  = 34;
	 int a37 = 9;
	 int a91  = 33;
	 int a152 = 9;
	 int a56 = 9;
	 int a74  = 32;
	 int a165  = 32;
	 int a109  = 32;
	 int a5  = 32;
	 int a198  = 35;
	 int a177 = 11;
	 int a29  = 33;
	 int a178  = 32;
	 int a60 = 8;
	 int a49 = 10;
	 int a121  = 32;
	 int a10 = 3;
	 int a94  = 36;
	 int a8 = 15;
	 int a182  = 36;
	 int a129  = 32;
	 int a139  = 33;
	 int a145 = 8;
	 int a106 = 12;
	 int a183 = 16;
	 int a157 = 6;
	 int a118  = 32;
	 int a41  = 32;
	 int a51  = 32;
	 int a69  = 32;
	 int a16 = 10;
	 int a77 = 11;
	 int a98 = 12;
	 int a197 = 7;
	 int a13 = 3;
	 int a40  = 36;
	 int a169  = 32;
	 int cf = 1;
	 int a108 = 4;
	 int a147 = 1;
	 int a172  = 32;
	 int a138  = 35;
	 int a160  = 32;
	 int a191 = 10;
	 int a135 = 11;
	 int a48  = 32;
	 int a101  = 32;
	 int a142  = 32;


	void errorCheck() {

	}
 void calculate_outputm35(int input) {
printf("POINT: 1\n");

    if(((a46 == 33 && ((a146 == 33 && a128 == 1) && a160 == 33)) && ((( cf==1  && (input == 10)) && a128 == 1) && a119 == 33))) {
printf("POINT: 2\n");
    	cf = 0;
    	a79 = 7;
    	a196 = 7;
    	a153 = 4;
    	a160 = 34 ;
    	a69 = 32 ;
    	a16 = 11;
    	a128 = 3;
    	a46 = 34 ;
    	a119 = 34 ;
    	a110 = 7;
    	a121 = 32 ;
    	a179 = 32 ;
    	a174 = 8;
    	a146 = 34 ;
    	a65 = 11;
    	a125 = 32 ;
    	a88 = 32 ;
    	a118 = 34 ;
    	a0 = 32 ;
    	a15 = 10;
    	a197 = 8;
    	a53 = 34 ;
    	a34 = 34 ;
    	a141 = 32 ;
    	a176 = 3;
    	a115 = 34 ;
    	a200 = 34 ;
    	a135 = 11;
    	a190 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 3\n");

    if(((a121 == 33 && (a69 == 33 && (a84 == 33 && ((input == 1) &&  cf==1 )))) && ((a153 == 3 && a0 == 33) && a141 == 33))) {
printf("POINT: 4\n");
    	cf = 0;
    	a53 = 34 ;
    	a160 = 34 ;
    	a174 = 8;
    	a69 = 32 ;
    	a128 = 3;
    	a115 = 34 ;
    	a153 = 4;
    	a0 = 32 ;
    	a110 = 7;
    	a79 = 7;
    	a197 = 8;
    	a118 = 34 ;
    	a15 = 10;
    	a16 = 11;
    	a34 = 34 ;
    	a46 = 34 ;
    	a196 = 7;
    	a88 = 32 ;
    	a141 = 32 ;
    	a200 = 34 ;
    	a125 = 32 ;
    	a176 = 3;
    	a135 = 11;
    	a65 = 11;
    	a121 = 32 ;
    	a179 = 32 ;
    	a146 = 34 ;
    	a119 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm36(int input) {
printf("POINT: 5\n");

    if(((((( cf==1  && (input == 6)) && a154 == 33) && a193 == 7) && a16 == 9) && ((a160 == 33 && a34 == 33) && a131 == 9))) {
printf("POINT: 6\n");
    	cf = 0;
    	a15 = 10;
    	a163 = 32 ;
    	a95 = 9;
    	a158 = 13;
    	a88 = 32 ;
    	a16 = 10;
    	a119 = 32 ;
    	a196 = 6;
    	a110 = 6;
    	a34 = 32 ;
    	a200 = 36 ;
    	a79 = 6;
    	a131 = 10;
    	a193 = 8;
    	a123 = 6; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 7\n");

    if(((( cf==1  && (input == 9)) && a179 == 33) && (((a110 == 5 && (a176 == 2 && a121 == 33)) && a2 == 3) && a95 == 8))) {
printf("POINT: 8\n");
    	cf = 0;
    	a51 = 32 ;
    	a154 = 32 ;
    	a125 = 32 ;
    	a163 = 32 ;
    	a121 = 32 ;
    	a16 = 10;
    	a200 = 36 ;
    	a22 = 8;
    	a84 = 32 ;
    	a110 = 6;
    	a131 = 10;
    	a150 = 5;
    	a34 = 32 ;
    	a119 = 32 ;
    	a193 = 8;
    	a128 = 2;
    	a69 = 32 ;
    	a15 = 10;
    	a95 = 9;
    	a88 = 32 ;
    	a146 = 32 ;
    	a2 = 4;
    	a158 = 13;
    	a160 = 32 ;
    	a123 = 10; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm37(int input) {
printf("POINT: 9\n");

    if(((((a120 == 5 && a88 == 33) && a169 == 33) && a97 == 3) && ((( cf==1  && (input == 9)) && a84 == 33) && a126 == 3))) {
printf("POINT: 10\n");
    	cf = 0;
    	a32 = 33 ;
    	a79 = 6;
    	a118 = 33 ;
    	a179 = 32 ;
    	a125 = 33 ;
    	a17 = 32 ;
    	a196 = 6;
    	a97 = 4;
    	a126 = 4;
    	a144 = 33 ;
    	a119 = 33 ;
    	a184 = 5;
    	a81 = 10;
    	a180 = 33 ;
    	a127 = 6;
    	a69 = 33 ;
    	a134 = 10;
    	a200 = 35 ;
    	a110 = 6;
    	a84 = 33 ;
    	a187 = 3;
    	a15 = 9;
    	a2 = 3;
    	a178 = 33 ;
    	a152 = 8;
    	a164 = 6;
    	a53 = 32 ;
    	a154 = 33 ;
    	a146 = 33 ;
    	a120 = 6;
    	a88 = 33 ;
    	a121 = 32 ;
    	a39 = 7;
    	a112 = 33 ;
    	a93 = 2;
    	a28 = 9;
    	a167 = 1;
    	a45 = 33 ;
    	a10 = 7; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm38(int input) {
printf("POINT: 11\n");

    if(((a105 == 10 && ( cf==1  && (input == 6))) && (a88 == 33 && (a167 == 1 && ((a79 == 5 && a90 == 33) && a12 == 33))))) {
printf("POINT: 12\n");
    	cf = 0;
    	a118 = 34 ;
    	a22 = 8;
    	a79 = 6;
    	a153 = 5;
    	a88 = 32 ;
    	a69 = 32 ;
    	a179 = 32 ;
    	a126 = 4;
    	a167 = 3;
    	a25 = 6;
    	a17 = 32 ;
    	a144 = 32 ;
    	a0 = 32 ;
    	a12 = 32 ;
    	a200 = 36 ;
    	a137 = 34 ;
    	a110 = 7;
    	a105 = 11;
    	a158 = 7;
    	a196 = 6;
    	a84 = 32 ;
    	a37 = 10;
    	a53 = 34 ;
    	a90 = 32 ;
    	a160 = 34 ;
    	a20 = 4;
    	a15 = 11;
    	a125 = 34 ;
    	a121 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 13\n");

    if(((a53 == 33 && (a25 == 4 && ((input == 9) &&  cf==1 ))) && ((a84 == 33 && (a25 == 4 && a22 == 7)) && a144 == 33))) {
printf("POINT: 14\n");
    	cf = 0;
    	a25 = 6;
    	a160 = 34 ;
    	a88 = 32 ;
    	a144 = 32 ;
    	a22 = 8;
    	a105 = 11;
    	a79 = 6;
    	a12 = 32 ;
    	a118 = 34 ;
    	a167 = 3;
    	a90 = 32 ;
    	a200 = 36 ;
    	a196 = 6;
    	a20 = 4;
    	a0 = 32 ;
    	a126 = 4;
    	a137 = 34 ;
    	a69 = 32 ;
    	a17 = 32 ;
    	a37 = 10;
    	a84 = 32 ;
    	a15 = 11;
    	a125 = 34 ;
    	a53 = 34 ;
    	a121 = 32 ;
    	a153 = 5;
    	a110 = 7;
    	a158 = 7;
    	a179 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 15\n");

    if(((a167 == 1 && (a84 == 33 && ( cf==1  && (input == 10)))) && (a121 == 33 && ((a84 == 33 && a20 == 3) && a84 == 33)))) {
printf("POINT: 16\n");
    	cf = 0;
    	a12 = 32 ;
    	a167 = 3;
    	a37 = 10;
    	a79 = 6;
    	a69 = 32 ;
    	a0 = 32 ;
    	a17 = 32 ;
    	a121 = 32 ;
    	a137 = 34 ;
    	a15 = 11;
    	a126 = 4;
    	a196 = 6;
    	a160 = 34 ;
    	a25 = 6;
    	a179 = 32 ;
    	a88 = 32 ;
    	a158 = 7;
    	a20 = 4;
    	a84 = 32 ;
    	a53 = 34 ;
    	a144 = 32 ;
    	a90 = 32 ;
    	a125 = 34 ;
    	a110 = 7;
    	a105 = 11;
    	a118 = 34 ;
    	a22 = 8;
    	a153 = 5;
    	a200 = 36 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm1(int input) {
printf("POINT: 17\n");

    if(((a53 == 33 && (a16 == 9 && (a115 == 33 && a34 == 33))) && (a84 == 33 && (a34 == 33 && ( cf==1  && a186 == 32))))) {
printf("POINT: 18\n");
printf("POINT: 19\n");

    	if(((a125 == 33 && (((a176 == 2 && ( cf==1  && a177 == 14)) && a174 == 7) && a118 == 33)) && (a81 == 10 && a65 == 9))) {
printf("POINT: 20\n");
    		calculate_outputm35(input);
    	} 
    } 
printf("POINT: 21\n");

    if(((((a150 == 4 && ( cf==1  && a186 == 34)) && a51 == 33) && a69 == 33) && ((a22 == 7 && a196 == 5) && a146 == 33))) {
printf("POINT: 22\n");
printf("POINT: 23\n");

    	if((((( cf==1  && a177 == 12) && a128 == 1) && a150 == 4) && (a154 == 33 && ((a30 == 33 && a165 == 33) && a119 == 33)))) {
printf("POINT: 24\n");
    		calculate_outputm36(input);
    	} 
    } 
printf("POINT: 25\n");

    if((((a20 == 3 && a12 == 33) && a125 == 33) && (a118 == 33 && ((a126 == 3 && ( cf==1  && a186 == 36)) && a17 == 33)))) {
printf("POINT: 26\n");
printf("POINT: 27\n");

    	if(((a180 == 33 && ((a126 == 3 && a39 == 7) && a146 == 33)) && ((a12 == 33 && (a100 == 33 &&  cf==1 )) && a179 == 33))) {
printf("POINT: 28\n");
    		calculate_outputm37(input);
    	} 
printf("POINT: 29\n");

    	if(((a0 == 33 && ((a153 == 3 && ((a37 == 8 && ( cf==1  && a100 == 35)) && a153 == 3)) && a20 == 3)) && a84 == 33)) {
printf("POINT: 30\n");
    		calculate_outputm38(input);
    	} 
    } 
}
 void calculate_outputm39(int input) {
printf("POINT: 31\n");

    if(((a141 == 33 && ((a115 == 33 && ((input == 5) &&  cf==1 )) && a110 == 5)) && ((a196 == 5 && a196 == 5) && a112 == 33))) {
printf("POINT: 32\n");
    	cf = 0;
    	a119 = 32 ;
    	a84 = 32 ;
    	a112 = 32 ;
    	a178 = 32 ;
    	a118 = 34 ;
    	a22 = 8;
    	a125 = 34 ;
    	a55 = 32 ;
    	a53 = 34 ;
    	a121 = 32 ;
    	a160 = 34 ;
    	a25 = 6;
    	a17 = 32 ;
    	a97 = 5;
    	a26 = 4;
    	a93 = 4;
    	a81 = 11;
    	a41 = 34 ;
    	a110 = 7;
    	a105 = 11;
    	a28 = 10;
    	a115 = 32 ;
    	a20 = 4;
    	a39 = 8;
    	a32 = 34 ;
    	a153 = 5;
    	a146 = 32 ;
    	a109 = 34 ;
    	a158 = 7;
    	a174 = 8;
    	a196 = 6;
    	a15 = 11;
    	a65 = 10;
    	a179 = 32 ;
    	a16 = 10;
    	a127 = 8;
    	a37 = 10;
    	a46 = 32 ;
    	a69 = 32 ;
    	a187 = 5;
    	a141 = 32 ;
    	a45 = 32 ;
    	a193 = 8;
    	a137 = 34 ;
    	a180 = 34 ;
    	a140 = 5;
    	a95 = 9;
    	a200 = 36 ;
    	a104 = 34 ;
    	a169 = 34 ;
    	a48 = 34 ;
    	a152 = 10;
    	a167 = 3;
    	a64 = 10; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 33\n");

    if((((a141 == 33 && (( cf==1  && (input == 10)) && a178 == 33)) && a65 == 9) && (a17 == 33 && (a46 == 33 && a55 == 33)))) {
printf("POINT: 34\n");
    	cf = 0;
    	a69 = 32 ;
    	a118 = 32 ;
    	a179 = 33 ;
    	a141 = 32 ;
    	a193 = 8;
    	a140 = 6;
    	a153 = 4;
    	a65 = 10;
    	a53 = 32 ;
    	a68 = 2;
    	a112 = 32 ;
    	a158 = 12;
    	a154 = 33 ;
    	a16 = 10;
    	a81 = 11;
    	a97 = 4;
    	a15 = 10;
    	a84 = 32 ;
    	a184 = 5;
    	a45 = 32 ;
    	a178 = 32 ;
    	a62 = 6;
    	a17 = 32 ;
    	a115 = 32 ;
    	a39 = 8;
    	a121 = 32 ;
    	a196 = 6;
    	a110 = 6;
    	a32 = 32 ;
    	a46 = 32 ;
    	a20 = 4;
    	a95 = 9;
    	a28 = 10;
    	a146 = 32 ;
    	a51 = 33 ;
    	a187 = 4;
    	a200 = 36 ;
    	a71 = 13; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 35\n");

    if(((a22 == 7 && a118 == 33) && (a28 == 9 && (a97 == 3 && ((( cf==1  && (input == 3)) && a20 == 3) && a105 == 10))))) {
printf("POINT: 36\n");
    	cf = 0;
    	a84 = 34 ;
    	a105 = 11;
    	a187 = 4;
    	a81 = 11;
    	a20 = 4;
    	a178 = 32 ;
    	a46 = 32 ;
    	a28 = 10;
    	a119 = 34 ;
    	a158 = 7;
    	a45 = 34 ;
    	a110 = 6;
    	a196 = 7;
    	a22 = 8;
    	a64 = 16;
    	a112 = 32 ;
    	a15 = 10;
    	a97 = 4;
    	a95 = 9;
    	a141 = 34 ;
    	a16 = 10;
    	a69 = 32 ;
    	a17 = 32 ;
    	a115 = 32 ;
    	a65 = 10;
    	a140 = 6;
    	a39 = 9;
    	a121 = 32 ;
    	a118 = 32 ;
    	a193 = 9;
    	a53 = 32 ;
    	a200 = 36 ;
    	a153 = 4;
    	a55 = 32 ;
    	a174 = 8;
    	a125 = 32 ;
    	a152 = 9;
    	a32 = 32 ;
    	a189 = 16; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 37\n");

    if(((a119 == 33 && a84 == 33) && ((a20 == 3 && (a140 == 4 && (a81 == 10 && ( cf==1  && (input == 6))))) && a112 == 33))) {
printf("POINT: 38\n");
    	cf = 0;
    	a146 = 33 ;
    	a37 = 8;
    	a176 = 4;
    	a20 = 4;
    	a193 = 8;
    	a118 = 34 ;
    	a51 = 33 ;
    	a179 = 33 ;
    	a34 = 33 ;
    	a109 = 34 ;
    	a45 = 34 ;
    	a150 = 4;
    	a26 = 2;
    	a30 = 34 ;
    	a25 = 4;
    	a68 = 4;
    	a144 = 33 ;
    	a1 = 33 ;
    	a184 = 6;
    	a169 = 33 ;
    	a104 = 34 ;
    	a126 = 3;
    	a115 = 32 ;
    	a12 = 33 ;
    	a28 = 11;
    	a65 = 11;
    	a154 = 33 ;
    	a160 = 33 ;
    	a56 = 8;
    	a41 = 34 ;
    	a141 = 32 ;
    	a88 = 33 ;
    	a128 = 1;
    	a90 = 33 ;
    	a119 = 34 ;
    	a180 = 34 ;
    	a19 = 34 ;
    	a86 = 35 ;
    	a152 = 10;
    	a39 = 8;
    	a112 = 32 ;
    	a81 = 11;
    	a22 = 8;
    	a105 = 12;
    	a120 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm40(int input) {
printf("POINT: 39\n");

    if(((((input == 1) &&  cf==1 ) && a28 == 9) && (a152 == 8 && (a68 == 2 && (a127 == 6 && (a165 == 33 && a68 == 2)))))) {
printf("POINT: 40\n");
    	cf = 0;
    	a167 = 5;
    	a26 = 3;
    	a165 = 33 ;
    	a41 = 35 ;
    	a30 = 35 ;
    	a179 = 32 ;
    	a51 = 35 ;
    	a90 = 34 ;
    	a200 = 34 ;
    	a131 = 16;
    	a138 = 35 ;
    	a152 = 14;
    	a120 = 9;
    	a12 = 36 ;
    	a39 = 12;
    	a180 = 36 ;
    	a110 = 5;
    	a32 = 36 ;
    	a97 = 3;
    	a79 = 8;
    	a28 = 10;
    	a140 = 10;
    	a121 = 36 ;
    	a193 = 12;
    	a95 = 12;
    	a68 = 2;
    	a56 = 12;
    	a105 = 13;
    	a17 = 33 ;
    	a48 = 32 ;
    	a178 = 33 ;
    	a150 = 8;
    	a2 = 6;
    	a0 = 35 ;
    	a125 = 35 ;
    	a141 = 33 ;
    	a84 = 33 ;
    	a109 = 36 ;
    	a126 = 8;
    	a160 = 33 ;
    	a196 = 6;
    	a187 = 8;
    	a174 = 12;
    	a34 = 33 ;
    	a20 = 4;
    	a22 = 14;
    	a15 = 14;
    	a135 = 10;
    	a45 = 36 ;
    	a104 = 32 ;
    	a53 = 35 ;
    	a37 = 15;
    	a46 = 33 ;
    	a171 = 5; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 41\n");

    if(((a179 == 33 && (a12 == 33 && (a126 == 3 && a95 == 8))) && (a97 == 3 && (a127 == 6 && ((input == 5) &&  cf==1 ))))) {
printf("POINT: 42\n");
    	cf = 0;
printf("POINT: 43\n");

    	if(((a174 == 10 || a164 == 8) && !(a196 == 11))) {
printf("POINT: 44\n");
    	a200 = 36 ;
    	a109 = 35 ;
    	a16 = 12;
    	a97 = 10;
    	a68 = 7;
    	a81 = 14;
    	a179 = 35 ;
    	a128 = 6;
    	a0 = 36 ;
    	a110 = 5;
    	a152 = 13;
    	a150 = 10;
    	a193 = 11;
    	a69 = 35 ;
    	a153 = 8;
    	a184 = 12;
    	a101 = 33 ;
    	a17 = 36 ;
    	a196 = 11;
    	a126 = 7;
    	a105 = 10;
    	a12 = 33 ;
    	a45 = 35 ;
    	a140 = 4;
    	a41 = 35 ;
    	a34 = 33 ;
    	a144 = 36 ;
    	a118 = 34 ;
    	a79 = 7;
    	a48 = 33 ;
    	a28 = 9;
    	a146 = 35 ;
    	a90 = 35 ;
    	a93 = 7;
    	a169 = 33 ;
    	a51 = 34 ;
    	a95 = 8;
    	a158 = 12;
    	a62 = 9;
    	a53 = 35 ;
    	a174 = 10;
    	a119 = 35 ;
    	a165 = 33 ;
    	a180 = 33 ;
    	a125 = 36 ;
    	a32 = 35 ;
    	a112 = 35 ;
    	a127 = 6;
    	a131 = 14;
    	a37 = 11;
    	a154 = 34 ;
    	a141 = 36 ;
    	a178 = 35 ;
    	a133 = 3; 
    	}else {
printf("POINT: 46\n");
    	a141 = 35 ;
    	a167 = 8;
    	a125 = 36 ;
    	a101 = 32 ;
    	a152 = 14;
    	a150 = 7;
    	a127 = 8;
    	a109 = 33 ;
    	a119 = 33 ;
    	a115 = 36 ;
    	a153 = 7;
    	a22 = 12;
    	a51 = 33 ;
    	a68 = 3;
    	a112 = 36 ;
    	a26 = 3;
    	a140 = 7;
    	a157 = 11;
    	a0 = 36 ;
    	a95 = 8;
    	a34 = 35 ;
    	a53 = 35 ;
    	a81 = 13;
    	a126 = 6;
    	a184 = 10;
    	a90 = 35 ;
    	a48 = 33 ;
    	a105 = 14;
    	a46 = 33 ;
    	a28 = 10;
    	a135 = 15;
    	a144 = 36 ;
    	a88 = 35 ;
    	a165 = 33 ;
    	a97 = 7;
    	a37 = 11;
    	a104 = 32 ;
    	a131 = 11;
    	a17 = 35 ;
    	a2 = 4;
    	a41 = 35 ;
    	a32 = 36 ;
    	a84 = 32 ;
    	a79 = 10;
    	a69 = 33 ;
    	a20 = 7;
    	a187 = 9;
    	a200 = 34 ;
    	a55 = 32 ;
    	a16 = 11;
    	a110 = 9;
    	a193 = 11;
    	a121 = 35 ;
    	a39 = 13;
    	a45 = 33 ;
    	a65 = 13;
    	a178 = 33 ;
    	a15 = 13;
    	a174 = 9;
    	a179 = 36 ;
    	a196 = 6;
    	a160 = 32 ;
    	a12 = 36 ;
    	a180 = 33 ;
    	a98 = 8;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 47\n");

    if((((a180 == 33 && a180 == 33) && a180 == 33) && (a109 == 33 && ((a178 == 33 && ((input == 7) &&  cf==1 )) && a184 == 5)))) {
printf("POINT: 48\n");
    	cf = 0;
    	a17 = 34 ;
    	a34 = 35 ;
    	a160 = 36 ;
    	a22 = 7;
    	a109 = 34 ;
    	a68 = 4;
    	a179 = 36 ;
    	a26 = 5;
    	a53 = 35 ;
    	a131 = 16;
    	a125 = 35 ;
    	a46 = 35 ;
    	a41 = 34 ;
    	a56 = 13;
    	a81 = 16;
    	a16 = 13;
    	a90 = 33 ;
    	a158 = 9;
    	a37 = 10;
    	a101 = 34 ;
    	a165 = 33 ;
    	a144 = 35 ;
    	a0 = 34 ;
    	a178 = 33 ;
    	a200 = 36 ;
    	a48 = 36 ;
    	a140 = 7;
    	a84 = 36 ;
    	a153 = 9;
    	a146 = 33 ;
    	a51 = 35 ;
    	a28 = 9;
    	a127 = 13;
    	a136 = 14;
    	a141 = 35 ;
    	a97 = 6;
    	a150 = 7;
    	a169 = 36 ;
    	a152 = 15;
    	a105 = 16;
    	a15 = 9;
    	a45 = 36 ;
    	a25 = 9;
    	a167 = 6;
    	a12 = 35 ;
    	a39 = 12;
    	a95 = 10;
    	a32 = 35 ;
    	a196 = 8;
    	a118 = 32 ;
    	a79 = 10;
    	a119 = 33 ;
    	a69 = 36 ;
    	a104 = 34 ;
    	a174 = 13;
    	a187 = 5;
    	a184 = 7;
    	a128 = 8;
    	a180 = 36 ;
    	a110 = 11;
    	a115 = 33 ;
    	a193 = 11;
    	a93 = 8;
    	a154 = 34 ;
    	a2 = 6;
    	a49 = 13; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 49\n");

    if(((((a119 == 33 && ( cf==1  && (input == 10))) && a81 == 10) && a41 == 33) && (a105 == 10 && (a165 == 33 && a127 == 6)))) {
printf("POINT: 50\n");
    	cf = 0;
    	a105 = 11;
    	a15 = 9;
    	a187 = 6;
    	a119 = 35 ;
    	a104 = 33 ;
    	a90 = 35 ;
    	a28 = 10;
    	a84 = 32 ;
    	a91 = 32 ;
    	a65 = 10;
    	a193 = 14;
    	a150 = 10;
    	a200 = 34 ;
    	a68 = 8;
    	a152 = 11;
    	a97 = 7;
    	a0 = 36 ;
    	a135 = 15;
    	a110 = 5;
    	a101 = 32 ;
    	a22 = 11;
    	a109 = 35 ;
    	a41 = 35 ;
    	a48 = 32 ;
    	a46 = 32 ;
    	a53 = 35 ;
    	a121 = 32 ;
    	a180 = 36 ;
    	a20 = 9;
    	a32 = 35 ;
    	a131 = 12;
    	a88 = 35 ;
    	a34 = 36 ;
    	a79 = 11;
    	a167 = 2;
    	a179 = 33 ;
    	a160 = 35 ;
    	a196 = 12;
    	a127 = 12;
    	a55 = 32 ;
    	a165 = 36 ;
    	a157 = 9; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 51\n");

    if(((( cf==1  && (input == 9)) && a140 == 4) && (((a22 == 7 && (a0 == 33 && a153 == 3)) && a101 == 33) && a180 == 33))) {
printf("POINT: 52\n");
    	cf = 0;
printf("POINT: 53\n");

    	if(a61 == 5) {
printf("POINT: 54\n");
    	a125 = 36 ;
    	a135 = 15;
    	a119 = 36 ;
    	a40 = 33 ;
    	a200 = 34 ;
    	a32 = 32 ;
    	a176 = 8;
    	a179 = 32 ;
    	a20 = 4;
    	a180 = 32 ;
    	a90 = 33 ;
    	a115 = 36 ;
    	a196 = 6;
    	a167 = 8;
    	a17 = 33 ;
    	a53 = 36 ;
    	a104 = 36 ;
    	a174 = 8;
    	a187 = 3;
    	a157 = 6; 
    	}else {
printf("POINT: 56\n");
    	a127 = 8;
    	a45 = 34 ;
    	a178 = 33 ;
    	a119 = 35 ;
    	a131 = 13;
    	a12 = 33 ;
    	a22 = 14;
    	a34 = 34 ;
    	a105 = 17;
    	a17 = 35 ;
    	a126 = 9;
    	a152 = 10;
    	a140 = 10;
    	a174 = 9;
    	a93 = 6;
    	a69 = 36 ;
    	a79 = 8;
    	a32 = 34 ;
    	a53 = 35 ;
    	a2 = 7;
    	a150 = 6;
    	a165 = 34 ;
    	a0 = 34 ;
    	a141 = 33 ;
    	a28 = 15;
    	a51 = 35 ;
    	a193 = 13;
    	a89 = 36 ;
    	a125 = 34 ;
    	a184 = 11;
    	a196 = 7;
    	a16 = 11;
    	a146 = 34 ;
    	a84 = 33 ;
    	a144 = 33 ;
    	a109 = 34 ;
    	a153 = 3;
    	a187 = 3;
    	a95 = 14;
    	a101 = 33 ;
    	a81 = 13;
    	a169 = 34 ;
    	a37 = 8;
    	a154 = 34 ;
    	a179 = 33 ;
    	a158 = 11;
    	a41 = 36 ;
    	a90 = 36 ;
    	a180 = 33 ;
    	a68 = 5;
    	a128 = 4;
    	a15 = 15;
    	a97 = 3;
    	a48 = 34 ;
    	a167 = 4;
    	a39 = 14;
    	a110 = 7;
    	a200 = 36 ;
    	a185 = 12;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 57\n");

    if(((((a90 == 33 && a22 == 7) && a196 == 5) && a28 == 9) && (a180 == 33 && (((input == 2) &&  cf==1 ) && a53 == 33)))) {
printf("POINT: 58\n");
    	cf = 0;
    	a128 = 1;
    	a101 = 32 ;
    	a53 = 34 ;
    	a180 = 34 ;
    	a131 = 11;
    	a126 = 8;
    	a22 = 13;
    	a150 = 8;
    	a196 = 7;
    	a28 = 15;
    	a144 = 34 ;
    	a65 = 14;
    	a37 = 11;
    	a146 = 35 ;
    	a81 = 12;
    	a112 = 35 ;
    	a169 = 35 ;
    	a45 = 36 ;
    	a12 = 36 ;
    	a84 = 35 ;
    	a187 = 10;
    	a165 = 33 ;
    	a79 = 9;
    	a152 = 8;
    	a88 = 33 ;
    	a2 = 9;
    	a39 = 10;
    	a68 = 5;
    	a34 = 35 ;
    	a178 = 35 ;
    	a127 = 6;
    	a69 = 36 ;
    	a32 = 34 ;
    	a20 = 6;
    	a200 = 32 ;
    	a119 = 35 ;
    	a105 = 14;
    	a179 = 34 ;
    	a51 = 33 ;
    	a15 = 15;
    	a41 = 36 ;
    	a109 = 34 ;
    	a115 = 34 ;
    	a120 = 7;
    	a97 = 5;
    	a141 = 35 ;
    	a193 = 14;
    	a95 = 14;
    	a174 = 11;
    	a17 = 33 ;
    	a140 = 9;
    	a184 = 6;
    	a154 = 35 ;
    	a30 = 35 ;
    	a198 = 32 ;
    	a167 = 3;
    	a48 = 35 ;
    	a153 = 6;
    	a110 = 12;
    	a0 = 33 ;
    	a90 = 33 ;
    	a54 = 35 ;
    	a16 = 14;
    	a93 = 5;
    	a125 = 34 ;
    	a134 = 15; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 59\n");

    if((((((input == 4) &&  cf==1 ) && a140 == 4) && a165 == 33) && (a144 == 33 && (a165 == 33 && (a184 == 5 && a109 == 33))))) {
printf("POINT: 60\n");
    	cf = 0;
printf("POINT: 61\n");

    	if(((a174 == 8 || a134 == 11) && !(a151 == 36))) {
printf("POINT: 62\n");
    	a69 = 36 ;
    	a12 = 36 ;
    	a180 = 33 ;
    	a48 = 34 ;
    	a119 = 34 ;
    	a187 = 7;
    	a178 = 35 ;
    	a28 = 16;
    	a79 = 8;
    	a51 = 33 ;
    	a93 = 5;
    	a193 = 11;
    	a174 = 12;
    	a126 = 5;
    	a85 = 34 ;
    	a101 = 35 ;
    	a196 = 10;
    	a105 = 13;
    	a68 = 9;
    	a146 = 36 ;
    	a2 = 3;
    	a125 = 35 ;
    	a109 = 36 ;
    	a200 = 36 ;
    	a158 = 9;
    	a154 = 33 ;
    	a0 = 35 ;
    	a45 = 35 ;
    	a32 = 33 ;
    	a34 = 33 ;
    	a131 = 12;
    	a128 = 7;
    	a127 = 12;
    	a15 = 15;
    	a41 = 36 ;
    	a136 = 11; 
    	}else {
printf("POINT: 64\n");
    	a34 = 36 ;
    	a45 = 34 ;
    	a200 = 36 ;
    	a93 = 8;
    	a68 = 4;
    	a126 = 8;
    	a22 = 12;
    	a37 = 12;
    	a105 = 16;
    	a141 = 33 ;
    	a131 = 16;
    	a119 = 36 ;
    	a196 = 11;
    	a48 = 36 ;
    	a12 = 36 ;
    	a32 = 34 ;
    	a101 = 34 ;
    	a178 = 36 ;
    	a47 = 33 ;
    	a125 = 34 ;
    	a41 = 34 ;
    	a0 = 34 ;
    	a179 = 33 ;
    	a17 = 35 ;
    	a127 = 9;
    	a2 = 10;
    	a51 = 33 ;
    	a193 = 14;
    	a158 = 6;
    	a174 = 11;
    	a60 = 6;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 65\n");

    if((((a131 == 9 && a15 == 9) && a0 == 33) && (((( cf==1  && (input == 8)) && a127 == 6) && a178 == 33) && a105 == 10))) {
printf("POINT: 66\n");
    	cf = 0;
printf("POINT: 67\n");

    	if(a19 == 36) {
printf("POINT: 68\n");
    	a193 = 8;
    	a129 = 36 ;
    	a152 = 10;
    	a169 = 35 ;
    	a93 = 4;
    	a12 = 33 ;
    	a2 = 9;
    	a81 = 16;
    	a131 = 16;
    	a30 = 32 ;
    	a22 = 14;
    	a154 = 35 ;
    	a144 = 33 ;
    	a37 = 12;
    	a32 = 35 ;
    	a153 = 8;
    	a16 = 15;
    	a112 = 33 ;
    	a125 = 33 ;
    	a90 = 33 ;
    	a127 = 8;
    	a196 = 12;
    	a174 = 14;
    	a122 = 36 ;
    	a110 = 7;
    	a34 = 36 ;
    	a51 = 32 ;
    	a104 = 35 ;
    	a95 = 11;
    	a79 = 8;
    	a45 = 36 ;
    	a187 = 8;
    	a48 = 35 ;
    	a53 = 33 ;
    	a97 = 10;
    	a84 = 36 ;
    	a167 = 5;
    	a15 = 14;
    	a200 = 36 ;
    	a150 = 10;
    	a165 = 35 ;
    	a179 = 34 ;
    	a184 = 6;
    	a178 = 33 ;
    	a101 = 32 ;
    	a141 = 33 ;
    	a68 = 9;
    	a28 = 9;
    	a56 = 9;
    	a46 = 35 ;
    	a128 = 5;
    	a140 = 9;
    	a118 = 33 ;
    	a0 = 33 ;
    	a109 = 35 ;
    	a180 = 35 ;
    	a119 = 33 ;
    	a126 = 5;
    	a25 = 11;
    	a105 = 13;
    	a41 = 35 ;
    	a69 = 33 ;
    	a17 = 35 ;
    	a39 = 9;
    	a158 = 8; 
    	}else {
printf("POINT: 70\n");
    	a55 = 34 ;
    	a184 = 10;
    	a109 = 35 ;
    	a131 = 14;
    	a121 = 36 ;
    	a16 = 14;
    	a25 = 11;
    	a160 = 32 ;
    	a167 = 1;
    	a29 = 33 ;
    	a187 = 3;
    	a46 = 32 ;
    	a12 = 35 ;
    	a120 = 9;
    	a141 = 34 ;
    	a180 = 33 ;
    	a112 = 36 ;
    	a178 = 36 ;
    	a150 = 5;
    	a119 = 36 ;
    	a56 = 11;
    	a0 = 36 ;
    	a126 = 8;
    	a144 = 35 ;
    	a152 = 11;
    	a26 = 6;
    	a17 = 32 ;
    	a79 = 6;
    	a39 = 11;
    	a81 = 17;
    	a118 = 32 ;
    	a153 = 3;
    	a196 = 5;
    	a22 = 14;
    	a93 = 6;
    	a32 = 35 ;
    	a48 = 36 ;
    	a101 = 35 ;
    	a34 = 33 ;
    	a193 = 11;
    	a20 = 9;
    	a115 = 33 ;
    	a104 = 35 ;
    	a86 = 36 ;
    	a65 = 15;
    	a176 = 6;
    	a169 = 36 ;
    	a97 = 9;
    	a37 = 14;
    	a140 = 9;
    	a123 = 6;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 71\n");

    if(((((((input == 6) &&  cf==1 ) && a79 == 5) && a167 == 1) && a105 == 10) && (a37 == 8 && (a178 == 33 && a97 == 3)))) {
printf("POINT: 72\n");
    	cf = 0;
printf("POINT: 73\n");

    	if(a41 == 32) {
printf("POINT: 74\n");
    	a109 = 36 ;
    	a169 = 34 ;
    	a68 = 7;
    	a178 = 36 ;
    	a97 = 5;
    	a141 = 34 ;
    	a12 = 33 ;
    	a128 = 1;
    	a154 = 36 ;
    	a105 = 17;
    	a167 = 8;
    	a28 = 12;
    	a90 = 34 ;
    	a158 = 10;
    	a187 = 8;
    	a183 = 12;
    	a34 = 36 ;
    	a127 = 6;
    	a119 = 35 ;
    	a180 = 33 ;
    	a146 = 33 ;
    	a41 = 36 ;
    	a39 = 12;
    	a0 = 35 ;
    	a53 = 35 ;
    	a16 = 11;
    	a79 = 10;
    	a37 = 10;
    	a101 = 36 ;
    	a200 = 36 ;
    	a131 = 12;
    	a110 = 10;
    	a165 = 33 ;
    	a126 = 10;
    	a93 = 5;
    	a174 = 9;
    	a7 = 6; 
    	}else {
printf("POINT: 76\n");
    	a126 = 7;
    	a153 = 10;
    	a20 = 6;
    	a200 = 32 ;
    	a131 = 14;
    	a34 = 36 ;
    	a187 = 10;
    	a146 = 36 ;
    	a169 = 35 ;
    	a48 = 36 ;
    	a120 = 11;
    	a165 = 36 ;
    	a88 = 36 ;
    	a154 = 34 ;
    	a45 = 33 ;
    	a95 = 13;
    	a178 = 33 ;
    	a198 = 34 ;
    	a144 = 36 ;
    	a22 = 12;
    	a118 = 34 ;
    	a180 = 35 ;
    	a90 = 33 ;
    	a58 = 5;
    	a0 = 36 ;
    	a150 = 11;
    	a179 = 33 ;
    	a41 = 36 ;
    	a101 = 34 ;
    	a152 = 12;
    	a72 = 5;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 77\n");

    if(((a2 == 3 && ((input == 3) &&  cf==1 )) && ((a196 == 5 && ((a105 == 10 && a48 == 33) && a150 == 4)) && a119 == 33))) {
printf("POINT: 78\n");
    	cf = 0;
printf("POINT: 79\n");

    	if((a39 == 14 || (a129 == 34 || (a48 == 35 && (a42 == 33 && a43 == 34))))) {
printf("POINT: 80\n");
    	a88 = 35 ;
    	a112 = 33 ;
    	a30 = 33 ;
    	a68 = 4;
    	a97 = 6;
    	a39 = 13;
    	a20 = 10;
    	a104 = 33 ;
    	a180 = 32 ;
    	a178 = 35 ;
    	a67 = 33 ;
    	a2 = 8;
    	a126 = 4;
    	a119 = 35 ;
    	a196 = 5;
    	a0 = 35 ;
    	a174 = 10;
    	a95 = 13;
    	a140 = 10;
    	a135 = 8;
    	a131 = 13;
    	a150 = 10;
    	a153 = 8;
    	a37 = 12;
    	a115 = 33 ;
    	a127 = 11;
    	a187 = 10;
    	a79 = 11;
    	a12 = 35 ;
    	a69 = 36 ;
    	a165 = 36 ;
    	a200 = 34 ;
    	a17 = 33 ;
    	a93 = 4;
    	a22 = 12;
    	a53 = 33 ;
    	a56 = 8;
    	a46 = 36 ;
    	a55 = 32 ;
    	a65 = 13;
    	a34 = 35 ;
    	a41 = 35 ;
    	a32 = 36 ;
    	a90 = 32 ;
    	a51 = 33 ;
    	a28 = 13;
    	a160 = 35 ;
    	a125 = 32 ;
    	a16 = 12;
    	a141 = 33 ;
    	a45 = 36 ;
    	a184 = 12;
    	a101 = 33 ;
    	a193 = 8;
    	a144 = 33 ;
    	a48 = 33 ;
    	a15 = 13;
    	a109 = 36 ;
    	a105 = 17;
    	a179 = 34 ;
    	a118 = 32 ;
    	a26 = 6;
    	a110 = 12;
    	a84 = 35 ;
    	a167 = 4;
    	a152 = 10;
    	a121 = 36 ;
    	a13 = 9; 
    	}else {
printf("POINT: 82\n");
    	a121 = 32 ;
    	a55 = 32 ;
    	a2 = 8;
    	a140 = 8;
    	a126 = 7;
    	a93 = 4;
    	a101 = 35 ;
    	a186 = 32 ;
    	a56 = 12;
    	a86 = 33 ;
    	a104 = 35 ;
    	a51 = 35 ;
    	a45 = 36 ;
    	a127 = 7;
    	a131 = 9;
    	a32 = 35 ;
    	a46 = 36 ;
    	a22 = 13;
    	a37 = 14;
    	a26 = 5;
    	a17 = 36 ;
    	a184 = 10;
    	a128 = 6;
    	a152 = 13;
    	a160 = 35 ;
    	a112 = 36 ;
    	a41 = 34 ;
    	a187 = 7;
    	a68 = 9;
    	a12 = 35 ;
    	a150 = 10;
    	a180 = 32 ;
    	a115 = 32 ;
    	a88 = 35 ;
    	a48 = 36 ;
    	a109 = 33 ;
    	a167 = 6;
    	a30 = 32 ;
    	a176 = 9;
    	a105 = 16;
    	a39 = 10;
    	a28 = 14;
    	a118 = 36 ;
    	a144 = 33 ;
    	a95 = 14;
    	a97 = 3;
    	a165 = 33 ;
    	a90 = 34 ;
    	a178 = 36 ;
    	a146 = 36 ;
    	a169 = 33 ;
    	a65 = 12;
    	a177 = 14;
    	}printf("%d\n", 15);  
    } 
}
 void calculate_outputm41(int input) {
printf("POINT: 83\n");

    if(((a68 == 2 && (((input == 7) &&  cf==1 ) && a112 == 33)) && (a84 == 33 && ((a184 == 5 && a53 == 33) && a119 == 33)))) {
printf("POINT: 84\n");
    	cf = 0;
    	a95 = 9;
    	a110 = 6;
    	a34 = 32 ;
    	a28 = 10;
    	a32 = 32 ;
    	a146 = 32 ;
    	a160 = 32 ;
    	a53 = 32 ;
    	a131 = 10;
    	a17 = 32 ;
    	a62 = 6;
    	a112 = 32 ;
    	a20 = 4;
    	a45 = 32 ;
    	a118 = 32 ;
    	a69 = 32 ;
    	a200 = 36 ;
    	a158 = 12;
    	a25 = 5;
    	a196 = 6;
    	a15 = 10;
    	a84 = 32 ;
    	a16 = 10;
    	a71 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 85\n");

    if(((a105 == 10 && (a25 == 4 && (a174 == 7 && (a22 == 7 && ((input == 10) &&  cf==1 ))))) && (a32 == 33 && a131 == 9))) {
printf("POINT: 86\n");
    	cf = 0;
    	a200 = 36 ;
    	a32 = 32 ;
    	a118 = 32 ;
    	a34 = 32 ;
    	a45 = 32 ;
    	a110 = 6;
    	a84 = 32 ;
    	a15 = 10;
    	a69 = 32 ;
    	a53 = 32 ;
    	a158 = 12;
    	a131 = 10;
    	a95 = 9;
    	a17 = 32 ;
    	a16 = 10;
    	a196 = 6;
    	a112 = 32 ;
    	a20 = 4;
    	a62 = 6;
    	a28 = 10;
    	a25 = 5;
    	a146 = 32 ;
    	a160 = 32 ;
    	a71 = 13; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 87\n");

    if(((a196 == 5 && a15 == 9) && (a55 == 33 && (((((input == 1) &&  cf==1 ) && a154 == 33) && a45 == 33) && a146 == 33)))) {
printf("POINT: 88\n");
    	cf = 0;
    	a174 = 8;
    	a84 = 32 ;
    	a167 = 3;
    	a140 = 5;
    	a152 = 10;
    	a34 = 32 ;
    	a110 = 7;
    	a16 = 10;
    	a200 = 36 ;
    	a179 = 32 ;
    	a160 = 34 ;
    	a41 = 34 ;
    	a55 = 32 ;
    	a180 = 34 ;
    	a45 = 32 ;
    	a17 = 32 ;
    	a158 = 7;
    	a37 = 10;
    	a15 = 11;
    	a51 = 32 ;
    	a105 = 11;
    	a109 = 34 ;
    	a119 = 32 ;
    	a32 = 34 ;
    	a97 = 5;
    	a68 = 3;
    	a169 = 34 ;
    	a137 = 34 ;
    	a196 = 6;
    	a25 = 6;
    	a118 = 34 ;
    	a22 = 8;
    	a69 = 32 ;
    	a26 = 4;
    	a131 = 10;
    	a95 = 9;
    	a53 = 34 ;
    	a154 = 32 ;
    	a184 = 7;
    	a153 = 5;
    	a127 = 8;
    	a93 = 4;
    	a28 = 10;
    	a20 = 4;
    	a125 = 34 ;
    	a187 = 5;
    	a146 = 32 ;
    	a48 = 34 ;
    	a112 = 32 ;
    	a104 = 34 ;
    	a64 = 10; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm42(int input) {
printf("POINT: 89\n");

    if((((a140 == 4 && (((input == 5) &&  cf==1 ) && a20 == 3)) && a15 == 9) && ((a90 == 33 && a26 == 2) && a109 == 33))) {
printf("POINT: 90\n");
    	cf = 0;
    	a110 = 7;
    	a51 = 32 ;
    	a152 = 10;
    	a167 = 3;
    	a46 = 32 ;
    	a37 = 10;
    	a17 = 32 ;
    	a128 = 2;
    	a120 = 6;
    	a55 = 32 ;
    	a2 = 4;
    	a135 = 12;
    	a88 = 32 ;
    	a174 = 9;
    	a140 = 6;
    	a79 = 6;
    	a95 = 10;
    	a30 = 32 ;
    	a84 = 32 ;
    	a34 = 32 ;
    	a200 = 34 ;
    	a169 = 34 ;
    	a20 = 4;
    	a28 = 10;
    	a119 = 32 ;
    	a160 = 34 ;
    	a121 = 32 ;
    	a0 = 32 ;
    	a16 = 10;
    	a125 = 34 ;
    	a90 = 32 ;
    	a126 = 4;
    	a15 = 11;
    	a165 = 32 ;
    	a154 = 34 ;
    	a193 = 8;
    	a39 = 8;
    	a144 = 32 ;
    	a32 = 34 ;
    	a141 = 34 ;
    	a131 = 10;
    	a153 = 5;
    	a93 = 4;
    	a41 = 34 ;
    	a115 = 32 ;
    	a118 = 34 ;
    	a53 = 34 ;
    	a196 = 7;
    	a94 = 32 ;
    	a81 = 11;
    	a68 = 3;
    	a109 = 34 ;
    	a69 = 34 ;
    	a26 = 4;
    	a45 = 32 ;
    	a25 = 6;
    	a156 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 91\n");

    if((((((( cf==1  && (input == 1)) && a17 == 33) && a0 == 33) && a126 == 3) && a93 == 2) && (a196 == 5 && a93 == 2))) {
printf("POINT: 92\n");
    	cf = 0;
    	a180 = 34 ;
    	a193 = 8;
    	a39 = 8;
    	a110 = 6;
    	a32 = 34 ;
    	a141 = 32 ;
    	a112 = 32 ;
    	a101 = 32 ;
    	a26 = 3;
    	a79 = 6;
    	a184 = 7;
    	a150 = 5;
    	a154 = 32 ;
    	a115 = 32 ;
    	a179 = 32 ;
    	a51 = 32 ;
    	a41 = 34 ;
    	a196 = 6;
    	a119 = 32 ;
    	a17 = 32 ;
    	a118 = 34 ;
    	a45 = 32 ;
    	a65 = 10;
    	a28 = 10;
    	a20 = 4;
    	a128 = 2;
    	a53 = 32 ;
    	a25 = 6;
    	a68 = 3;
    	a97 = 5;
    	a146 = 32 ;
    	a165 = 32 ;
    	a174 = 8;
    	a93 = 3;
    	a22 = 8;
    	a95 = 9;
    	a15 = 11;
    	a160 = 34 ;
    	a127 = 8;
    	a105 = 11;
    	a56 = 9;
    	a125 = 34 ;
    	a104 = 34 ;
    	a140 = 5;
    	a158 = 7;
    	a48 = 34 ;
    	a121 = 32 ;
    	a2 = 4;
    	a84 = 32 ;
    	a152 = 10;
    	a64 = 9;
    	a120 = 6;
    	a187 = 5;
    	a153 = 5;
    	a126 = 4;
    	a90 = 32 ;
    	a167 = 3;
    	a0 = 32 ;
    	a176 = 3;
    	a178 = 32 ;
    	a46 = 32 ;
    	a109 = 34 ;
    	a69 = 32 ;
    	a200 = 36 ;
    	a12 = 32 ;
    	a144 = 32 ;
    	a13 = 5; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 93\n");

    if((a0 == 33 && (a121 == 33 && (a0 == 33 && ((a32 == 33 && (((input == 10) &&  cf==1 ) && a95 == 8)) && a196 == 5))))) {
printf("POINT: 94\n");
    	cf = 0;
    	a176 = 3;
    	a26 = 4;
    	a180 = 34 ;
    	a28 = 10;
    	a12 = 32 ;
    	a112 = 32 ;
    	a118 = 34 ;
    	a167 = 3;
    	a37 = 10;
    	a125 = 34 ;
    	a45 = 32 ;
    	a128 = 2;
    	a90 = 32 ;
    	a120 = 6;
    	a48 = 34 ;
    	a53 = 34 ;
    	a150 = 5;
    	a97 = 5;
    	a174 = 8;
    	a15 = 10;
    	a158 = 6;
    	a109 = 34 ;
    	a187 = 4;
    	a153 = 4;
    	a25 = 6;
    	a16 = 10;
    	a178 = 32 ;
    	a184 = 7;
    	a69 = 32 ;
    	a152 = 10;
    	a56 = 9;
    	a110 = 6;
    	a0 = 32 ;
    	a104 = 34 ;
    	a68 = 3;
    	a51 = 32 ;
    	a22 = 8;
    	a93 = 3;
    	a127 = 7;
    	a105 = 11;
    	a2 = 4;
    	a20 = 4;
    	a65 = 10;
    	a144 = 32 ;
    	a47 = 34 ;
    	a39 = 8;
    	a165 = 32 ;
    	a126 = 4;
    	a17 = 32 ;
    	a141 = 32 ;
    	a32 = 34 ;
    	a200 = 36 ;
    	a154 = 32 ;
    	a179 = 32 ;
    	a146 = 32 ;
    	a84 = 32 ;
    	a196 = 6;
    	a140 = 5;
    	a121 = 32 ;
    	a95 = 9;
    	a169 = 34 ;
    	a79 = 6;
    	a101 = 32 ;
    	a183 = 16; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 95\n");

    if((((a121 == 33 && a154 == 33) && a25 == 4) && (((a109 == 33 && ((input == 7) &&  cf==1 )) && a20 == 3) && a84 == 33))) {
printf("POINT: 96\n");
    	cf = 0;
    	a153 = 5;
    	a69 = 32 ;
    	a12 = 32 ;
    	a28 = 10;
    	a131 = 10;
    	a184 = 7;
    	a84 = 32 ;
    	a93 = 4;
    	a81 = 11;
    	a32 = 34 ;
    	a45 = 32 ;
    	a109 = 34 ;
    	a152 = 10;
    	a118 = 34 ;
    	a16 = 10;
    	a53 = 34 ;
    	a15 = 11;
    	a140 = 6;
    	a2 = 4;
    	a128 = 2;
    	a119 = 32 ;
    	a37 = 10;
    	a88 = 32 ;
    	a126 = 4;
    	a0 = 32 ;
    	a34 = 32 ;
    	a193 = 8;
    	a68 = 3;
    	a90 = 32 ;
    	a22 = 8;
    	a144 = 32 ;
    	a179 = 32 ;
    	a41 = 34 ;
    	a110 = 7;
    	a196 = 7;
    	a30 = 34 ;
    	a127 = 8;
    	a51 = 32 ;
    	a135 = 9;
    	a174 = 9;
    	a20 = 4;
    	a169 = 34 ;
    	a97 = 5;
    	a112 = 32 ;
    	a95 = 9;
    	a154 = 34 ;
    	a200 = 34 ;
    	a141 = 34 ;
    	a105 = 11;
    	a160 = 34 ;
    	a25 = 6;
    	a46 = 32 ;
    	a79 = 6;
    	a17 = 34 ;
    	a125 = 34 ;
    	a56 = 9;
    	a39 = 8;
    	a115 = 32 ;
    	a121 = 32 ;
    	a65 = 10;
    	a165 = 32 ;
    	a26 = 4;
    	a164 = 9;
    	a55 = 34 ;
    	a101 = 32 ;
    	a176 = 3;
    	a157 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm43(int input) {
printf("POINT: 97\n");

    if(((a45 == 33 && a144 == 33) && ((a187 == 3 && (a69 == 33 && (((input == 10) &&  cf==1 ) && a12 == 33))) && a25 == 4))) {
printf("POINT: 98\n");
    	cf = 0;
    	a146 = 34 ;
    	a126 = 5;
    	a17 = 32 ;
    	a101 = 32 ;
    	a119 = 32 ;
    	a0 = 32 ;
    	a30 = 34 ;
    	a154 = 32 ;
    	a51 = 32 ;
    	a53 = 34 ;
    	a34 = 32 ;
    	a118 = 34 ;
    	a184 = 7;
    	a141 = 32 ;
    	a26 = 3;
    	a174 = 8;
    	a169 = 32 ;
    	a150 = 5;
    	a160 = 32 ;
    	a140 = 5;
    	a48 = 32 ;
    	a176 = 3;
    	a144 = 32 ;
    	a115 = 32 ;
    	a97 = 4;
    	a185 = 16;
    	a28 = 11;
    	a153 = 4;
    	a12 = 32 ;
    	a95 = 9;
    	a196 = 6;
    	a39 = 8;
    	a46 = 34 ;
    	a32 = 32 ;
    	a104 = 34 ;
    	a110 = 7;
    	a152 = 9;
    	a127 = 7;
    	a193 = 9;
    	a158 = 11;
    	a200 = 36 ;
    	a79 = 6;
    	a37 = 9;
    	a178 = 32 ;
    	a56 = 10;
    	a187 = 4;
    	a121 = 32 ;
    	a69 = 34 ;
    	a16 = 10;
    	a41 = 34 ;
    	a68 = 3;
    	a15 = 10;
    	a25 = 6;
    	a165 = 32 ;
    	a88 = 32 ;
    	a109 = 32 ;
    	a167 = 2;
    	a179 = 32 ;
    	a84 = 32 ;
    	a55 = 32 ;
    	a45 = 32 ;
    	a180 = 34 ;
    	a125 = 32 ;
    	a2 = 4;
    	a62 = 10; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 99\n");

    if(((a140 == 4 && ((a41 == 33 && ((input == 6) &&  cf==1 )) && a187 == 3)) && ((a179 == 33 && a56 == 8) && a121 == 33))) {
printf("POINT: 100\n");
    	cf = 0;
    	a153 = 4;
    	a187 = 5;
    	a140 = 5;
    	a41 = 34 ;
    	a115 = 32 ;
    	a56 = 10;
    	a150 = 5;
    	a68 = 3;
    	a95 = 9;
    	a17 = 34 ;
    	a120 = 6;
    	a15 = 10;
    	a84 = 32 ;
    	a69 = 34 ;
    	a53 = 34 ;
    	a104 = 34 ;
    	a152 = 9;
    	a30 = 34 ;
    	a125 = 32 ;
    	a97 = 4;
    	a121 = 34 ;
    	a141 = 32 ;
    	a131 = 10;
    	a184 = 7;
    	a25 = 6;
    	a110 = 7;
    	a112 = 34 ;
    	a128 = 2;
    	a176 = 3;
    	a169 = 32 ;
    	a179 = 32 ;
    	a81 = 11;
    	a200 = 34 ;
    	a165 = 32 ;
    	a12 = 34 ;
    	a174 = 9;
    	a118 = 34 ;
    	a20 = 4;
    	a105 = 11;
    	a37 = 9;
    	a55 = 32 ;
    	a65 = 10;
    	a45 = 32 ;
    	a144 = 34 ;
    	a26 = 3;
    	a88 = 32 ;
    	a93 = 3;
    	a51 = 34 ;
    	a32 = 32 ;
    	a90 = 34 ;
    	a79 = 6;
    	a119 = 32 ;
    	a109 = 32 ;
    	a16 = 10;
    	a135 = 8;
    	a22 = 8;
    	a48 = 34 ;
    	a138 = 32 ;
    	a28 = 11;
    	a13 = 6; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 101\n");

    if(((a68 == 2 && (a48 == 33 && (a56 == 8 && a174 == 7))) && ((a88 == 33 && ( cf==1  && (input == 9))) && a30 == 33))) {
printf("POINT: 102\n");
    	cf = 0;
    	a120 = 6;
    	a65 = 10;
    	a56 = 9;
    	a144 = 32 ;
    	a90 = 34 ;
    	a198 = 32 ;
    	a20 = 4;
    	a93 = 3;
    	a17 = 34 ;
    	a84 = 32 ;
    	a119 = 32 ;
    	a200 = 32 ;
    	a26 = 3;
    	a30 = 34 ;
    	a110 = 6;
    	a15 = 10;
    	a2 = 4;
    	a69 = 34 ;
    	a146 = 34 ;
    	a169 = 32 ;
    	a154 = 32 ;
    	a101 = 34 ;
    	a34 = 32 ;
    	a187 = 4;
    	a152 = 9;
    	a54 = 35 ;
    	a193 = 9;
    	a118 = 32 ;
    	a112 = 34 ;
    	a179 = 32 ;
    	a174 = 8;
    	a131 = 10;
    	a196 = 6;
    	a37 = 9;
    	a127 = 7;
    	a140 = 5;
    	a115 = 32 ;
    	a53 = 32 ;
    	a121 = 32 ;
    	a88 = 32 ;
    	a41 = 34 ;
    	a25 = 5;
    	a153 = 4;
    	a125 = 32 ;
    	a0 = 32 ;
    	a32 = 32 ;
    	a45 = 32 ;
    	a167 = 2;
    	a180 = 32 ;
    	a51 = 32 ;
    	a46 = 32 ;
    	a128 = 2;
    	a95 = 9;
    	a48 = 32 ;
    	a126 = 4;
    	a160 = 32 ;
    	a39 = 8;
    	a104 = 32 ;
    	a141 = 32 ;
    	a68 = 3;
    	a28 = 11;
    	a184 = 7;
    	a12 = 32 ;
    	a178 = 32 ;
    	a134 = 15; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm44(int input) {
printf("POINT: 103\n");

    if((((a56 == 8 && a25 == 4) && a167 == 1) && (((( cf==1  && (input == 10)) && a160 == 33) && a25 == 4) && a41 == 33))) {
printf("POINT: 104\n");
    	cf = 0;
    	a165 = 32 ;
    	a178 = 32 ;
    	a115 = 32 ;
    	a128 = 2;
    	a176 = 3;
    	a152 = 10;
    	a187 = 5;
    	a68 = 3;
    	a41 = 34 ;
    	a112 = 32 ;
    	a127 = 8;
    	a34 = 32 ;
    	a97 = 5;
    	a120 = 6;
    	a184 = 7;
    	a39 = 8;
    	a30 = 32 ;
    	a131 = 10;
    	a119 = 32 ;
    	a56 = 9;
    	a186 = 36 ;
    	a32 = 34 ;
    	a146 = 32 ;
    	a174 = 8;
    	a141 = 32 ;
    	a55 = 32 ;
    	a104 = 34 ;
    	a150 = 5;
    	a193 = 8;
    	a86 = 33 ;
    	a45 = 32 ;
    	a93 = 4;
    	a154 = 32 ;
    	a2 = 4;
    	a28 = 10;
    	a81 = 11;
    	a16 = 10;
    	a51 = 32 ;
    	a180 = 34 ;
    	a65 = 10;
    	a101 = 32 ;
    	a26 = 4;
    	a46 = 32 ;
    	a48 = 34 ;
    	a140 = 5;
    	a169 = 34 ;
    	a100 = 35 ;
    	a109 = 34 ;
    	a95 = 9; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 105\n");

    if((((a79 == 5 && (a120 == 5 && (a2 == 3 && ((input == 7) &&  cf==1 )))) && a88 == 33) && (a20 == 3 && a15 == 9))) {
printf("POINT: 106\n");
    	cf = 0;
    	a115 = 32 ;
    	a154 = 32 ;
    	a88 = 32 ;
    	a30 = 32 ;
    	a182 = 32 ;
    	a150 = 5;
    	a176 = 3;
    	a126 = 4;
    	a55 = 32 ;
    	a174 = 8;
    	a68 = 3;
    	a140 = 5;
    	a41 = 34 ;
    	a180 = 34 ;
    	a128 = 2;
    	a28 = 10;
    	a184 = 7;
    	a187 = 5;
    	a56 = 9;
    	a97 = 5;
    	a101 = 32 ;
    	a193 = 8;
    	a127 = 8;
    	a22 = 8;
    	a12 = 32 ;
    	a146 = 32 ;
    	a45 = 32 ;
    	a27 = 32 ;
    	a169 = 34 ;
    	a152 = 10;
    	a141 = 32 ;
    	a32 = 34 ;
    	a178 = 32 ;
    	a144 = 32 ;
    	a39 = 8;
    	a165 = 32 ;
    	a46 = 32 ;
    	a109 = 34 ;
    	a2 = 4;
    	a179 = 32 ;
    	a196 = 6;
    	a119 = 32 ;
    	a20 = 4;
    	a79 = 6;
    	a86 = 34 ;
    	a25 = 6;
    	a121 = 32 ;
    	a93 = 4;
    	a95 = 9; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm45(int input) {
printf("POINT: 107\n");

    if(((a12 == 33 && (a180 == 33 && a51 == 33)) && ((a51 == 33 && (a115 == 33 && ( cf==1  && (input == 7)))) && a112 == 33))) {
printf("POINT: 108\n");
    	cf = 0;
    	a28 = 11;
    	a193 = 8;
    	a86 = 34 ;
    	a109 = 32 ;
    	a12 = 33 ;
    	a30 = 33 ;
    	a146 = 33 ;
    	a153 = 4;
    	a127 = 8;
    	a167 = 1;
    	a37 = 8;
    	a176 = 4;
    	a90 = 34 ;
    	a178 = 33 ;
    	a27 = 33 ;
    	a104 = 33 ;
    	a45 = 33 ;
    	a46 = 32 ;
    	a48 = 32 ;
    	a97 = 5;
    	a95 = 8;
    	a21 = 32 ;
    	a187 = 3;
    	a41 = 33 ;
    	a140 = 6;
    	a68 = 4;
    	a105 = 12;
    	a128 = 2;
    	a169 = 33 ;
    	a51 = 33 ;
    	a55 = 34 ;
    	a16 = 10;
    	a2 = 3;
    	a165 = 34 ;
    	a179 = 34 ;
    	a126 = 3;
    	a119 = 32 ;
    	a150 = 4;
    	a88 = 34 ;
    	a141 = 34 ;
    	a180 = 33 ;
    	a25 = 4;
    	a121 = 32 ;
    	a154 = 33 ;
    	a0 = 33 ;
    	a26 = 2;
    	a196 = 5; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 109\n");

    if(((a104 == 33 && (((input == 5) &&  cf==1 ) && a125 == 33)) && ((a187 == 3 && (a154 == 33 && a150 == 4)) && a65 == 9))) {
printf("POINT: 110\n");
    	cf = 0;
    	a55 = 32 ;
    	a141 = 32 ;
    	a60 = 8;
    	a180 = 32 ;
    	a97 = 5;
    	a144 = 34 ;
    	a126 = 4;
    	a37 = 9;
    	a90 = 32 ;
    	a81 = 11;
    	a165 = 32 ;
    	a112 = 32 ;
    	a65 = 11;
    	a160 = 34 ;
    	a184 = 6;
    	a154 = 34 ;
    	a104 = 32 ;
    	a127 = 8;
    	a46 = 34 ;
    	a120 = 6;
    	a20 = 4;
    	a28 = 10;
    	a51 = 32 ;
    	a140 = 5;
    	a26 = 3;
    	a88 = 32 ;
    	a198 = 35 ;
    	a56 = 10;
    	a179 = 32 ;
    	a150 = 5;
    	a0 = 32 ;
    	a16 = 11;
    	a101 = 34 ;
    	a22 = 8;
    	a93 = 3;
    	a152 = 9;
    	a187 = 5;
    	a17 = 32 ;
    	a84 = 33 ;
    	a12 = 32 ;
    	a39 = 9;
    	a69 = 32 ;
    	a153 = 4;
    	a119 = 34 ;
    	a105 = 12;
    	a41 = 32 ;
    	a48 = 32 ;
    	a146 = 34 ;
    	a32 = 34 ;
    	a15 = 10;
    	a68 = 3;
    	a200 = 32 ;
    	a2 = 4;
    	a45 = 34 ;
    	a30 = 34 ;
    	a25 = 5;
    	a95 = 9;
    	a169 = 32 ;
    	a167 = 2;
    	a34 = 34 ;
    	a79 = 7;
    	a128 = 3;
    	a174 = 8;
    	a131 = 10;
    	a115 = 32 ;
    	a196 = 7;
    	a109 = 32 ;
    	a110 = 7;
    	a178 = 32 ;
    	a176 = 3;
    	a125 = 32 ;
    	a118 = 32 ;
    	a53 = 32 ;
    	a62 = 11; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 111\n");

    if(((a30 == 33 && (a0 == 33 && ((a41 == 33 && a22 == 7) && a101 == 33))) && (a178 == 33 && ((input == 9) &&  cf==1 )))) {
printf("POINT: 112\n");
    	cf = 0;
    	a56 = 8;
    	a200 = 34 ;
    	a131 = 11;
    	a178 = 33 ;
    	a30 = 34 ;
    	a104 = 34 ;
    	a135 = 14;
    	a65 = 9;
    	a81 = 10;
    	a120 = 5;
    	a109 = 32 ;
    	a150 = 4;
    	a193 = 8;
    	a169 = 33 ;
    	a45 = 34 ;
    	a39 = 7;
    	a17 = 34 ;
    	a0 = 34 ;
    	a153 = 4;
    	a41 = 34 ;
    	a95 = 8;
    	a93 = 2;
    	a101 = 33 ;
    	a180 = 34 ;
    	a2 = 3;
    	a12 = 34 ;
    	a22 = 9;
    	a110 = 5;
    	a128 = 3;
    	a32 = 33 ;
    	a112 = 34 ;
    	a46 = 34 ;
    	a174 = 9;
    	a118 = 33 ;
    	a126 = 3;
    	a144 = 33 ;
    	a160 = 33 ;
    	a20 = 3;
    	a119 = 34 ;
    	a15 = 9;
    	a34 = 33 ;
    	a184 = 5;
    	a69 = 34 ;
    	a152 = 10;
    	a48 = 32 ;
    	a115 = 34 ;
    	a121 = 32 ;
    	a79 = 5;
    	a51 = 33 ;
    	a26 = 4;
    	a16 = 11;
    	a53 = 34 ;
    	a84 = 34 ;
    	a154 = 33 ;
    	a91 = 36 ;
    	a125 = 33 ;
    	a187 = 5;
    	a98 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm46(int input) {
printf("POINT: 113\n");

    if(((((a84 == 33 && ( cf==1  && (input == 6))) && a120 == 5) && a126 == 3) && ((a153 == 3 && a179 == 33) && a65 == 9))) {
printf("POINT: 114\n");
    	cf = 0;
printf("POINT: 115\n");

    	if(((a101 == 36 && (a36 == 34 || !(a47 == 32))) || !(a24 == 9))) {
printf("POINT: 116\n");
    	a184 = 6;
    	a51 = 33 ;
    	a120 = 5;
    	a160 = 34 ;
    	a144 = 32 ;
    	a200 = 36 ;
    	a32 = 32 ;
    	a45 = 33 ;
    	a141 = 32 ;
    	a39 = 8;
    	a146 = 32 ;
    	a16 = 10;
    	a69 = 32 ;
    	a174 = 7;
    	a128 = 2;
    	a140 = 5;
    	a158 = 13;
    	a53 = 32 ;
    	a154 = 33 ;
    	a178 = 32 ;
    	a153 = 4;
    	a152 = 9;
    	a79 = 7;
    	a65 = 9;
    	a104 = 33 ;
    	a90 = 32 ;
    	a125 = 33 ;
    	a15 = 9;
    	a81 = 10;
    	a46 = 32 ;
    	a119 = 32 ;
    	a110 = 5;
    	a84 = 33 ;
    	a163 = 35 ;
    	a48 = 32 ;
    	a88 = 32 ;
    	a30 = 33 ;
    	a176 = 3;
    	a22 = 8;
    	a109 = 33 ;
    	a187 = 5;
    	a112 = 32 ;
    	a165 = 33 ;
    	a93 = 3;
    	a126 = 4;
    	a179 = 32 ;
    	a2 = 4;
    	a118 = 34 ;
    	a180 = 32 ;
    	a167 = 2;
    	a17 = 32 ;
    	a28 = 11;
    	a121 = 32 ;
    	a95 = 8;
    	a6 = 6; 
    	}else {
printf("POINT: 118\n");
    	a153 = 4;
    	a121 = 32 ;
    	a154 = 32 ;
    	a200 = 35 ;
    	a134 = 11;
    	a17 = 32 ;
    	a51 = 32 ;
    	a15 = 10;
    	a30 = 32 ;
    	a125 = 32 ;
    	a45 = 32 ;
    	a103 = 32 ;
    	a104 = 32 ;
    	a179 = 32 ;
    	a88 = 32 ;
    	a174 = 8;
    	a165 = 32 ;
    	a144 = 32 ;
    	a95 = 9;
    	a77 = 7;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 119\n");

    if((((a109 == 33 && ( cf==1  && (input == 10))) && a88 == 33) && (a104 == 33 && ((a110 == 5 && a69 == 33) && a30 == 33)))) {
printf("POINT: 120\n");
    	cf = 0;
    	a68 = 4;
    	a120 = 6;
    	a105 = 12;
    	a17 = 34 ;
    	a32 = 32 ;
    	a174 = 9;
    	a126 = 4;
    	a30 = 32 ;
    	a15 = 10;
    	a118 = 32 ;
    	a56 = 9;
    	a69 = 34 ;
    	a154 = 32 ;
    	a187 = 5;
    	a104 = 32 ;
    	a121 = 34 ;
    	a97 = 5;
    	a28 = 11;
    	a193 = 8;
    	a158 = 11;
    	a84 = 34 ;
    	a88 = 32 ;
    	a176 = 4;
    	a65 = 10;
    	a160 = 34 ;
    	a144 = 32 ;
    	a153 = 4;
    	a200 = 36 ;
    	a146 = 34 ;
    	a165 = 34 ;
    	a53 = 34 ;
    	a110 = 6;
    	a180 = 32 ;
    	a81 = 12;
    	a196 = 7;
    	a79 = 7;
    	a45 = 34 ;
    	a48 = 34 ;
    	a51 = 34 ;
    	a119 = 34 ;
    	a152 = 9;
    	a179 = 32 ;
    	a178 = 34 ;
    	a55 = 34 ;
    	a125 = 32 ;
    	a95 = 10;
    	a184 = 7;
    	a25 = 5;
    	a185 = 10;
    	a90 = 32 ;
    	a41 = 34 ;
    	a109 = 34 ;
    	a11 = 1; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm2(int input) {
printf("POINT: 121\n");

    if(((a39 == 7 && a16 == 9) && (((a193 == 7 && ((a77 == 5 &&  cf==1 ) && a105 == 10)) && a17 == 33) && a187 == 3))) {
printf("POINT: 122\n");
printf("POINT: 123\n");

    	if(((a153 == 3 && ((a105 == 10 && (a145 == 7 &&  cf==1 )) && a125 == 33)) && (a193 == 7 && (a187 == 3 && a121 == 33)))) {
printf("POINT: 124\n");
    		calculate_outputm39(input);
    	} 
printf("POINT: 125\n");

    	if((((a51 == 33 && ((a53 == 33 && a34 == 33) && a193 == 7)) && a141 == 33) && (a184 == 5 && ( cf==1  && a145 == 12)))) {
printf("POINT: 126\n");
    		calculate_outputm40(input);
    	} 
    } 
printf("POINT: 127\n");

    if(((( cf==1  && a77 == 6) && a22 == 7) && (a16 == 9 && (((a51 == 33 && a179 == 33) && a112 == 33) && a34 == 33)))) {
printf("POINT: 128\n");
printf("POINT: 129\n");

    	if((((a146 == 33 && a20 == 3) && a118 == 33) && (a152 == 8 && ((a28 == 9 && ( cf==1  && a136 == 10)) && a160 == 33)))) {
printf("POINT: 130\n");
    		calculate_outputm41(input);
    	} 
    } 
printf("POINT: 131\n");

    if((((a77 == 7 &&  cf==1 ) && a69 == 33) && (a69 == 33 && (((a28 == 9 && a141 == 33) && a153 == 3) && a26 == 2)))) {
printf("POINT: 132\n");
printf("POINT: 133\n");

    	if((((a84 == 33 && (( cf==1  && a62 == 4) && a0 == 33)) && a68 == 2) && ((a69 == 33 && a118 == 33) && a121 == 33))) {
printf("POINT: 134\n");
    		calculate_outputm42(input);
    	} 
printf("POINT: 135\n");

    	if(((((a62 == 6 &&  cf==1 ) && a84 == 33) && a179 == 33) && ((a104 == 33 && (a56 == 8 && a51 == 33)) && a118 == 33))) {
printf("POINT: 136\n");
    		calculate_outputm43(input);
    	} 
    } 
printf("POINT: 137\n");

    if((((a184 == 5 && a131 == 9) && a17 == 33) && ((a26 == 2 && (a154 == 33 && (a77 == 9 &&  cf==1 ))) && a0 == 33))) {
printf("POINT: 138\n");
printf("POINT: 139\n");

    	if(((a150 == 4 && (a45 == 33 && (a16 == 9 && a101 == 33))) && ((a56 == 8 && ( cf==1  && a147 == 1)) && a46 == 33))) {
printf("POINT: 140\n");
    		calculate_outputm44(input);
    	} 
printf("POINT: 141\n");

    	if((((a152 == 8 && a126 == 3) && a2 == 3) && (((a126 == 3 && (a147 == 5 &&  cf==1 )) && a169 == 33) && a22 == 7))) {
printf("POINT: 142\n");
    		calculate_outputm45(input);
    	} 
    } 
printf("POINT: 143\n");

    if(((a146 == 33 && ((a51 == 33 && (a165 == 33 && ( cf==1  && a77 == 11))) && a90 == 33)) && (a180 == 33 && a121 == 33))) {
printf("POINT: 144\n");
printf("POINT: 145\n");

    	if(((a174 == 7 && (a144 == 33 && (a109 == 33 && (a152 == 8 && a154 == 33)))) && (( cf==1  && a98 == 13) && a95 == 8))) {
printf("POINT: 146\n");
    		calculate_outputm46(input);
    	} 
    } 
}
 void calculate_outputm47(int input) {
printf("POINT: 147\n");

    if((((input == 7) &&  cf==1 ) && (a154 == 33 && (((a127 == 6 && (a39 == 7 && a165 == 33)) && a88 == 33) && a187 == 3)))) {
printf("POINT: 148\n");
    	cf = 0;
    	a32 = 34 ;
    	a86 = 32 ;
    	a200 = 34 ;
    	a178 = 32 ;
    	a81 = 12;
    	a110 = 7;
    	a45 = 32 ;
    	a126 = 5;
    	a26 = 4;
    	a180 = 34 ;
    	a196 = 7;
    	a119 = 32 ;
    	a39 = 9;
    	a153 = 5;
    	a187 = 5;
    	a53 = 34 ;
    	a88 = 32 ;
    	a79 = 7;
    	a17 = 34 ;
    	a144 = 34 ;
    	a112 = 34 ;
    	a28 = 11;
    	a146 = 34 ;
    	a125 = 34 ;
    	a127 = 7;
    	a69 = 34 ;
    	a16 = 11;
    	a56 = 10;
    	a179 = 34 ;
    	a97 = 5;
    	a0 = 32 ;
    	a154 = 34 ;
    	a140 = 6;
    	a167 = 3;
    	a118 = 34 ;
    	a90 = 34 ;
    	a25 = 6;
    	a184 = 7;
    	a34 = 32 ;
    	a93 = 3;
    	a160 = 34 ;
    	a15 = 11;
    	a152 = 10;
    	a151 = 35 ;
    	a2 = 4;
    	a120 = 7;
    	a115 = 34 ;
    	a135 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 149\n");

    if(((a152 == 8 && ( cf==1  && (input == 5))) && (a119 == 33 && (a79 == 5 && ((a165 == 33 && a120 == 5) && a2 == 3))))) {
printf("POINT: 150\n");
    	cf = 0;
    	a128 = 2;
    	a196 = 7;
    	a77 = 7;
    	a93 = 3;
    	a86 = 32 ;
    	a79 = 6;
    	a120 = 6;
    	a105 = 11;
    	a112 = 32 ;
    	a95 = 8;
    	a30 = 33 ;
    	a121 = 33 ;
    	a141 = 33 ;
    	a104 = 33 ;
    	a180 = 34 ;
    	a140 = 4;
    	a146 = 34 ;
    	a154 = 34 ;
    	a160 = 34 ;
    	a39 = 9;
    	a126 = 5;
    	a81 = 11;
    	a26 = 2;
    	a90 = 32 ;
    	a12 = 33 ;
    	a153 = 3;
    	a46 = 34 ;
    	a150 = 5;
    	a20 = 4;
    	a174 = 7;
    	a22 = 8;
    	a34 = 34 ;
    	a65 = 10;
    	a178 = 34 ;
    	a56 = 8;
    	a109 = 32 ;
    	a127 = 8;
    	a2 = 5;
    	a48 = 33 ;
    	a165 = 32 ;
    	a41 = 33 ;
    	a167 = 3;
    	a51 = 33 ;
    	a0 = 34 ;
    	a68 = 2;
    	a62 = 6; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 151\n");

    if(((a144 == 33 && a154 == 33) && ((a45 == 33 && ((( cf==1  && (input == 1)) && a15 == 9) && a126 == 3)) && a196 == 5))) {
printf("POINT: 152\n");
    	cf = 0;
    	a178 = 32 ;
    	a20 = 4;
    	a15 = 11;
    	a150 = 5;
    	a121 = 32 ;
    	a69 = 32 ;
    	a68 = 3;
    	a158 = 7;
    	a105 = 11;
    	a146 = 32 ;
    	a101 = 32 ;
    	a193 = 8;
    	a0 = 32 ;
    	a110 = 7;
    	a125 = 34 ;
    	a26 = 4;
    	a154 = 32 ;
    	a17 = 32 ;
    	a34 = 32 ;
    	a88 = 32 ;
    	a84 = 32 ;
    	a196 = 6;
    	a200 = 36 ;
    	a165 = 32 ;
    	a97 = 5;
    	a160 = 34 ;
    	a39 = 8;
    	a90 = 32 ;
    	a152 = 10;
    	a144 = 32 ;
    	a22 = 8;
    	a2 = 4;
    	a184 = 7;
    	a180 = 34 ;
    	a45 = 32 ;
    	a179 = 32 ;
    	a28 = 10;
    	a93 = 4;
    	a118 = 34 ;
    	a25 = 6;
    	a119 = 32 ;
    	a167 = 3;
    	a79 = 6;
    	a53 = 34 ;
    	a137 = 34 ;
    	a65 = 10;
    	a153 = 5;
    	a127 = 8;
    	a187 = 5;
    	a51 = 32 ;
    	a112 = 32 ;
    	a32 = 34 ;
    	a81 = 11;
    	a126 = 4;
    	a120 = 6;
    	a128 = 2;
    	a174 = 8;
    	a64 = 10; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 153\n");

    if((((a0 == 33 && (a180 == 33 && a81 == 10)) && a120 == 5) && ((((input == 6) &&  cf==1 ) && a179 == 33) && a178 == 33))) {
printf("POINT: 154\n");
    	cf = 0;
    	a81 = 11;
    	a187 = 4;
    	a39 = 8;
    	a120 = 6;
    	a79 = 6;
    	a69 = 32 ;
    	a32 = 32 ;
    	a165 = 32 ;
    	a53 = 32 ;
    	a25 = 5;
    	a34 = 32 ;
    	a134 = 10;
    	a0 = 32 ;
    	a200 = 35 ;
    	a36 = 33 ;
    	a112 = 32 ;
    	a164 = 8; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm48(int input) {
printf("POINT: 155\n");

    if(((a25 == 4 && ((a65 == 9 && ((input == 3) &&  cf==1 )) && a37 == 8)) && ((a81 == 10 && a20 == 3) && a115 == 33))) {
printf("POINT: 156\n");
    	cf = 0;
    	a97 = 4;
    	a184 = 6;
    	a160 = 32 ;
    	a167 = 2;
    	a55 = 32 ;
    	a150 = 5;
    	a105 = 11;
    	a51 = 32 ;
    	a95 = 9;
    	a126 = 4;
    	a144 = 32 ;
    	a174 = 8;
    	a178 = 32 ;
    	a152 = 9;
    	a12 = 32 ;
    	a101 = 32 ;
    	a125 = 32 ;
    	a39 = 8;
    	a141 = 32 ;
    	a180 = 32 ;
    	a115 = 32 ;
    	a0 = 32 ;
    	a112 = 32 ;
    	a120 = 6;
    	a146 = 32 ;
    	a79 = 6;
    	a68 = 3;
    	a187 = 4;
    	a131 = 10;
    	a30 = 32 ;
    	a179 = 32 ;
    	a2 = 4;
    	a69 = 32 ;
    	a45 = 32 ;
    	a53 = 32 ;
    	a127 = 7;
    	a90 = 32 ;
    	a65 = 10;
    	a140 = 5;
    	a165 = 32 ;
    	a22 = 8;
    	a20 = 4;
    	a25 = 5;
    	a32 = 32 ;
    	a169 = 32 ;
    	a84 = 32 ;
    	a89 = 36 ;
    	a41 = 32 ;
    	a56 = 9;
    	a196 = 6;
    	a118 = 32 ;
    	a37 = 9;
    	a26 = 3;
    	a158 = 11;
    	a200 = 36 ;
    	a88 = 32 ;
    	a28 = 10;
    	a17 = 32 ;
    	a110 = 6;
    	a15 = 10;
    	a154 = 32 ;
    	a81 = 11;
    	a104 = 32 ;
    	a34 = 32 ;
    	a176 = 3;
    	a93 = 3;
    	a185 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 157\n");

    if(((a101 == 33 && (((a152 == 8 && a25 == 4) && a34 == 33) && a160 == 33)) && (((input == 9) &&  cf==1 ) && a144 == 33))) {
printf("POINT: 158\n");
    	cf = 0;
    	a15 = 10;
    	a196 = 7;
    	a167 = 2;
    	a93 = 3;
    	a160 = 32 ;
    	a126 = 4;
    	a154 = 32 ;
    	a180 = 32 ;
    	a30 = 34 ;
    	a22 = 8;
    	a112 = 34 ;
    	a81 = 11;
    	a146 = 32 ;
    	a127 = 7;
    	a45 = 32 ;
    	a69 = 32 ;
    	a68 = 3;
    	a95 = 9;
    	a125 = 32 ;
    	a150 = 5;
    	a17 = 34 ;
    	a104 = 32 ;
    	a131 = 10;
    	a0 = 32 ;
    	a84 = 32 ;
    	a26 = 3;
    	a86 = 32 ;
    	a25 = 6;
    	a12 = 32 ;
    	a41 = 34 ;
    	a115 = 32 ;
    	a187 = 4;
    	a174 = 9;
    	a28 = 10;
    	a200 = 32 ;
    	a51 = 32 ;
    	a178 = 32 ;
    	a53 = 34 ;
    	a198 = 33 ;
    	a152 = 10;
    	a37 = 10;
    	a176 = 3;
    	a181 = 15; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 159\n");

    if(((a144 == 33 && (((a53 == 33 && a184 == 5) && a17 == 33) && a79 == 5)) && (( cf==1  && (input == 1)) && a196 == 5))) {
printf("POINT: 160\n");
    	cf = 0;
printf("POINT: 161\n");

    	if((a87 == 36 && (a28 == 9 && a5 == 35))) {
printf("POINT: 162\n");
    	a196 = 7;
    	a86 = 32 ;
    	a25 = 6;
    	a146 = 34 ;
    	a167 = 3;
    	a37 = 10;
    	a77 = 9;
    	a147 = 5; 
    	}else {
printf("POINT: 164\n");
    	a28 = 10;
    	a0 = 32 ;
    	a69 = 32 ;
    	a22 = 8;
    	a131 = 10;
    	a41 = 34 ;
    	a146 = 32 ;
    	a95 = 9;
    	a81 = 11;
    	a125 = 32 ;
    	a68 = 3;
    	a93 = 3;
    	a160 = 32 ;
    	a180 = 32 ;
    	a26 = 3;
    	a187 = 4;
    	a25 = 6;
    	a154 = 32 ;
    	a45 = 32 ;
    	a112 = 34 ;
    	a53 = 34 ;
    	a127 = 7;
    	a51 = 32 ;
    	a150 = 5;
    	a12 = 32 ;
    	a15 = 10;
    	a198 = 33 ;
    	a196 = 7;
    	a126 = 4;
    	a178 = 32 ;
    	a86 = 32 ;
    	a104 = 32 ;
    	a200 = 32 ;
    	a30 = 34 ;
    	a115 = 32 ;
    	a17 = 34 ;
    	a167 = 2;
    	a37 = 10;
    	a84 = 32 ;
    	a176 = 3;
    	a174 = 9;
    	a152 = 10;
    	a181 = 15;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 165\n");

    if(((a56 == 8 && ( cf==1  && (input == 6))) && ((a167 == 1 && (a17 == 33 && (a146 == 33 && a39 == 7))) && a174 == 7))) {
printf("POINT: 166\n");
    	cf = 0;
    	a176 = 3;
    	a160 = 34 ;
    	a104 = 34 ;
    	a150 = 5;
    	a146 = 34 ;
    	a179 = 32 ;
    	a200 = 34 ;
    	a32 = 34 ;
    	a141 = 32 ;
    	a126 = 4;
    	a101 = 34 ;
    	a128 = 3;
    	a30 = 34 ;
    	a53 = 34 ;
    	a39 = 9;
    	a69 = 32 ;
    	a56 = 10;
    	a125 = 32 ;
    	a22 = 9;
    	a15 = 10;
    	a16 = 11;
    	a0 = 32 ;
    	a26 = 4;
    	a167 = 2;
    	a65 = 11;
    	a25 = 5;
    	a68 = 3;
    	a45 = 34 ;
    	a90 = 32 ;
    	a118 = 34 ;
    	a2 = 4;
    	a93 = 3;
    	a196 = 7;
    	a135 = 11;
    	a187 = 5;
    	a184 = 6;
    	a17 = 34 ;
    	a197 = 8;
    	a20 = 4;
    	a165 = 32 ;
    	a144 = 34 ;
    	a51 = 32 ;
    	a131 = 10;
    	a119 = 34 ;
    	a152 = 9;
    	a115 = 34 ;
    	a79 = 7;
    	a120 = 6;
    	a112 = 34 ;
    	a34 = 34 ;
    	a178 = 32 ;
    	a46 = 34 ;
    	a12 = 32 ;
    	a174 = 8;
    	a95 = 10;
    	a169 = 32 ;
    	a193 = 7;
    	a88 = 32 ;
    	a37 = 9;
    	a110 = 7;
    	a154 = 34 ;
    	a41 = 32 ;
    	a180 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm49(int input) {
printf("POINT: 167\n");

    if(((a160 == 33 && ( cf==1  && (input == 9))) && ((a0 == 33 && (a90 == 33 && (a81 == 10 && a153 == 3))) && a48 == 33))) {
printf("POINT: 168\n");
    	cf = 0;
    	a167 = 3;
    	a153 = 5;
    	a53 = 34 ;
    	a118 = 34 ;
    	a110 = 7;
    	a120 = 6;
    	a112 = 32 ;
    	a37 = 10;
    	a69 = 32 ;
    	a34 = 32 ;
    	a200 = 36 ;
    	a0 = 32 ;
    	a81 = 11;
    	a90 = 32 ;
    	a125 = 34 ;
    	a16 = 10;
    	a15 = 11;
    	a65 = 10;
    	a51 = 32 ;
    	a26 = 4;
    	a158 = 7;
    	a48 = 34 ;
    	a137 = 34 ;
    	a104 = 34 ;
    	a84 = 32 ;
    	a160 = 34 ;
    	a105 = 11;
    	a131 = 10;
    	a17 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 169\n");

    if(((a37 == 8 && ((a131 == 9 && a0 == 33) && a16 == 9)) && (a51 == 33 && (a17 == 33 && ((input == 3) &&  cf==1 ))))) {
printf("POINT: 170\n");
    	cf = 0;
    	a153 = 5;
    	a53 = 34 ;
    	a34 = 32 ;
    	a15 = 11;
    	a131 = 10;
    	a65 = 10;
    	a16 = 10;
    	a81 = 11;
    	a112 = 32 ;
    	a51 = 32 ;
    	a0 = 32 ;
    	a118 = 34 ;
    	a37 = 10;
    	a137 = 34 ;
    	a120 = 6;
    	a200 = 36 ;
    	a84 = 32 ;
    	a167 = 3;
    	a26 = 4;
    	a90 = 32 ;
    	a105 = 11;
    	a160 = 34 ;
    	a110 = 7;
    	a48 = 34 ;
    	a69 = 32 ;
    	a125 = 34 ;
    	a17 = 32 ;
    	a158 = 7;
    	a104 = 34 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm50(int input) {
printf("POINT: 171\n");

    if(((a167 == 1 && (a69 == 33 && a104 == 33)) && (a127 == 6 && ((a115 == 33 && ( cf==1  && (input == 6))) && a144 == 33)))) {
printf("POINT: 172\n");
    	cf = 0;
    	a128 = 1;
    	a180 = 33 ;
    	a48 = 34 ;
    	a39 = 14;
    	a12 = 33 ;
    	a118 = 36 ;
    	a134 = 16;
    	a152 = 13;
    	a15 = 9;
    	a112 = 33 ;
    	a84 = 34 ;
    	a69 = 35 ;
    	a104 = 35 ;
    	a131 = 14;
    	a0 = 36 ;
    	a169 = 35 ;
    	a184 = 9;
    	a119 = 36 ;
    	a167 = 5;
    	a200 = 35 ;
    	a105 = 17;
    	a55 = 33 ;
    	a174 = 13;
    	a3 = 34 ;
    	a141 = 33 ;
    	a68 = 2;
    	a16 = 15;
    	a127 = 10;
    	a81 = 13;
    	a110 = 12;
    	a140 = 9;
    	a144 = 33 ;
    	a146 = 34 ;
    	a97 = 3;
    	a2 = 7;
    	a20 = 8;
    	a179 = 35 ;
    	a120 = 5;
    	a56 = 12;
    	a125 = 35 ;
    	a65 = 15;
    	a34 = 36 ;
    	a17 = 34 ;
    	a193 = 13;
    	a90 = 36 ;
    	a53 = 33 ;
    	a115 = 35 ;
    	a45 = 32 ;
    	a196 = 5;
    	a101 = 35 ;
    	a75 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 173\n");

    if(((a112 == 33 && ((a0 == 33 && a128 == 1) && a140 == 4)) && ((((input == 2) &&  cf==1 ) && a56 == 8) && a196 == 5))) {
printf("POINT: 174\n");
    	cf = 0;
    	a169 = 34 ;
    	a45 = 33 ;
    	a112 = 35 ;
    	a39 = 12;
    	a119 = 36 ;
    	a110 = 5;
    	a65 = 12;
    	a152 = 9;
    	a131 = 14;
    	a174 = 7;
    	a127 = 9;
    	a150 = 7;
    	a141 = 35 ;
    	a56 = 12;
    	a196 = 7;
    	a12 = 36 ;
    	a20 = 5;
    	a84 = 36 ;
    	a41 = 36 ;
    	a15 = 9;
    	a153 = 7;
    	a184 = 12;
    	a22 = 14;
    	a115 = 36 ;
    	a109 = 36 ;
    	a48 = 32 ;
    	a17 = 36 ;
    	a118 = 36 ;
    	a79 = 5;
    	a154 = 33 ;
    	a158 = 7;
    	a51 = 34 ;
    	a68 = 9;
    	a0 = 34 ;
    	a55 = 36 ;
    	a2 = 10;
    	a179 = 33 ;
    	a125 = 33 ;
    	a146 = 33 ;
    	a180 = 32 ;
    	a25 = 10;
    	a128 = 4;
    	a187 = 6;
    	a81 = 16;
    	a90 = 35 ;
    	a176 = 9;
    	a120 = 7;
    	a167 = 6;
    	a165 = 33 ;
    	a69 = 34 ;
    	a104 = 36 ;
    	a101 = 34 ;
    	a193 = 12;
    	a32 = 32 ;
    	a53 = 35 ;
    	a144 = 35 ;
    	a64 = 9;
    	a200 = 36 ;
    	a140 = 10;
    	a160 = 36 ;
    	a97 = 7;
    	a105 = 17;
    	a34 = 36 ;
    	a28 = 15;
    	a46 = 35 ;
    	a16 = 16;
    	a13 = 5; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 175\n");

    if(((a169 == 33 && ((a118 == 33 && a90 == 33) && a48 == 33)) && ((a174 == 7 && ( cf==1  && (input == 5))) && a105 == 10))) {
printf("POINT: 176\n");
    	cf = 0;
    	a158 = 7;
    	a140 = 9;
    	a53 = 33 ;
    	a97 = 8;
    	a26 = 2;
    	a25 = 11;
    	a128 = 1;
    	a37 = 14;
    	a196 = 5;
    	a144 = 36 ;
    	a115 = 35 ;
    	a0 = 35 ;
    	a179 = 36 ;
    	a84 = 35 ;
    	a119 = 36 ;
    	a20 = 9;
    	a167 = 6;
    	a12 = 34 ;
    	a55 = 35 ;
    	a184 = 6;
    	a127 = 11;
    	a2 = 8;
    	a110 = 10;
    	a41 = 35 ;
    	a93 = 2;
    	a118 = 33 ;
    	a81 = 10;
    	a65 = 14;
    	a69 = 35 ;
    	a120 = 9;
    	a169 = 32 ;
    	a34 = 35 ;
    	a101 = 35 ;
    	a17 = 33 ;
    	a16 = 16;
    	a56 = 14;
    	a146 = 36 ;
    	a112 = 36 ;
    	a68 = 5;
    	a160 = 32 ;
    	a174 = 9;
    	a48 = 33 ;
    	a200 = 36 ;
    	a90 = 35 ;
    	a104 = 35 ;
    	a131 = 14;
    	a137 = 34 ;
    	a153 = 10;
    	a193 = 11;
    	a109 = 32 ;
    	a125 = 36 ;
    	a141 = 33 ;
    	a180 = 35 ;
    	a105 = 15;
    	a152 = 13;
    	a15 = 14;
    	a32 = 36 ;
    	a187 = 10;
    	a64 = 10; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 177\n");

    if((((a65 == 9 && (a144 == 33 && a180 == 33)) && a34 == 33) && ((a15 == 9 && ( cf==1  && (input == 1))) && a131 == 9))) {
printf("POINT: 178\n");
    	cf = 0;
    	a179 = 35 ;
    	a112 = 36 ;
    	a16 = 14;
    	a0 = 34 ;
    	a15 = 12;
    	a3 = 34 ;
    	a134 = 16;
    	a167 = 3;
    	a55 = 36 ;
    	a128 = 5;
    	a180 = 35 ;
    	a90 = 35 ;
    	a120 = 10;
    	a69 = 34 ;
    	a110 = 8;
    	a200 = 35 ;
    	a20 = 3;
    	a119 = 35 ;
    	a53 = 33 ;
    	a101 = 33 ;
    	a48 = 33 ;
    	a84 = 34 ;
    	a45 = 33 ;
    	a184 = 5;
    	a131 = 13;
    	a68 = 7;
    	a118 = 34 ;
    	a144 = 35 ;
    	a12 = 35 ;
    	a105 = 12;
    	a97 = 6;
    	a193 = 14;
    	a196 = 7;
    	a174 = 9;
    	a81 = 17;
    	a39 = 13;
    	a140 = 9;
    	a17 = 36 ;
    	a115 = 36 ;
    	a146 = 35 ;
    	a141 = 35 ;
    	a152 = 12;
    	a34 = 36 ;
    	a125 = 33 ;
    	a104 = 34 ;
    	a169 = 33 ;
    	a127 = 9;
    	a2 = 6;
    	a65 = 9;
    	a56 = 8;
    	a75 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 179\n");

    if((((a110 == 5 && (((input == 8) &&  cf==1 ) && a128 == 1)) && a56 == 8) && ((a104 == 33 && a146 == 33) && a119 == 33))) {
printf("POINT: 180\n");
    	cf = 0;
printf("POINT: 181\n");

    	if((((!(a150 == 4) || (a19 == 34 && !(a75 == 9))) || !(a185 == 10)) && !(a184 == 12))) {
printf("POINT: 182\n");
    	a140 = 9;
    	a146 = 34 ;
    	a127 = 8;
    	a104 = 33 ;
    	a12 = 34 ;
    	a39 = 11;
    	a20 = 6;
    	a109 = 36 ;
    	a48 = 32 ;
    	a158 = 12;
    	a118 = 36 ;
    	a62 = 5;
    	a200 = 36 ;
    	a53 = 36 ;
    	a150 = 6;
    	a25 = 5;
    	a101 = 34 ;
    	a128 = 4;
    	a2 = 3;
    	a154 = 35 ;
    	a69 = 33 ;
    	a84 = 36 ;
    	a65 = 13;
    	a152 = 11;
    	a97 = 6;
    	a196 = 8;
    	a144 = 34 ;
    	a160 = 33 ;
    	a179 = 34 ;
    	a55 = 34 ;
    	a15 = 12;
    	a30 = 33 ;
    	a141 = 35 ;
    	a90 = 35 ;
    	a79 = 5;
    	a112 = 36 ;
    	a110 = 5;
    	a105 = 15;
    	a193 = 12;
    	a121 = 34 ;
    	a17 = 33 ;
    	a176 = 9;
    	a126 = 7;
    	a125 = 36 ;
    	a178 = 34 ;
    	a169 = 36 ;
    	a115 = 35 ;
    	a180 = 33 ;
    	a56 = 12;
    	a81 = 14;
    	a165 = 35 ;
    	a184 = 5;
    	a68 = 8;
    	a120 = 10;
    	a131 = 16;
    	a167 = 5;
    	a26 = 5;
    	a34 = 35 ;
    	a0 = 35 ;
    	a119 = 33 ;
    	a32 = 33 ;
    	a174 = 11;
    	a16 = 15;
    	a71 = 7; 
    	}else {
printf("POINT: 184\n");
    	a105 = 13;
    	a84 = 35 ;
    	a160 = 33 ;
    	a154 = 34 ;
    	a141 = 34 ;
    	a46 = 33 ;
    	a112 = 33 ;
    	a193 = 13;
    	a28 = 11;
    	a62 = 5;
    	a131 = 14;
    	a167 = 4;
    	a39 = 13;
    	a165 = 35 ;
    	a79 = 7;
    	a178 = 33 ;
    	a81 = 13;
    	a196 = 10;
    	a144 = 33 ;
    	a20 = 10;
    	a12 = 33 ;
    	a56 = 11;
    	a68 = 8;
    	a152 = 8;
    	a200 = 36 ;
    	a127 = 9;
    	a146 = 33 ;
    	a53 = 36 ;
    	a45 = 34 ;
    	a104 = 33 ;
    	a125 = 34 ;
    	a90 = 33 ;
    	a180 = 33 ;
    	a158 = 12;
    	a110 = 10;
    	a34 = 36 ;
    	a65 = 15;
    	a109 = 34 ;
    	a119 = 35 ;
    	a174 = 9;
    	a17 = 34 ;
    	a97 = 5;
    	a55 = 34 ;
    	a2 = 6;
    	a169 = 34 ;
    	a0 = 34 ;
    	a184 = 7;
    	a118 = 36 ;
    	a179 = 35 ;
    	a51 = 35 ;
    	a22 = 13;
    	a101 = 36 ;
    	a115 = 35 ;
    	a16 = 12;
    	a140 = 8;
    	a37 = 15;
    	a120 = 5;
    	a176 = 2;
    	a48 = 34 ;
    	a15 = 16;
    	a32 = 36 ;
    	a128 = 3;
    	a69 = 35 ;
    	a71 = 10;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 185\n");

    if(((a55 == 33 && ( cf==1  && (input == 3))) && (a184 == 5 && (a2 == 3 && (a68 == 2 && (a120 == 5 && a146 == 33)))))) {
printf("POINT: 186\n");
    	cf = 0;
printf("POINT: 187\n");

    	if((a140 == 9 || (a193 == 13 && (a145 == 5 && !(a128 == 6))))) {
printf("POINT: 188\n");
    	a105 = 17;
    	a104 = 34 ;
    	a16 = 14;
    	a2 = 8;
    	a169 = 35 ;
    	a119 = 33 ;
    	a127 = 8;
    	a167 = 1;
    	a90 = 36 ;
    	a125 = 33 ;
    	a180 = 36 ;
    	a184 = 9;
    	a12 = 36 ;
    	a15 = 16;
    	a68 = 4;
    	a69 = 33 ;
    	a101 = 34 ;
    	a55 = 35 ;
    	a39 = 10;
    	a45 = 35 ;
    	a48 = 36 ;
    	a110 = 11;
    	a141 = 33 ;
    	a20 = 3;
    	a140 = 11;
    	a84 = 34 ;
    	a56 = 8;
    	a152 = 14;
    	a126 = 5;
    	a176 = 2;
    	a174 = 7;
    	a158 = 8;
    	a93 = 2;
    	a112 = 35 ;
    	a131 = 15;
    	a122 = 32 ;
    	a97 = 8;
    	a179 = 33 ;
    	a81 = 13;
    	a154 = 34 ;
    	a17 = 36 ;
    	a0 = 33 ;
    	a128 = 7;
    	a34 = 35 ;
    	a65 = 15;
    	a193 = 12;
    	a28 = 13;
    	a118 = 34 ;
    	a41 = 34 ;
    	a200 = 36 ;
    	a51 = 35 ;
    	a120 = 9;
    	a144 = 36 ;
    	a146 = 35 ;
    	a53 = 34 ;
    	a25 = 10;
    	a196 = 9;
    	a115 = 33 ;
    	a183 = 14; 
    	}else {
printf("POINT: 190\n");
    	a55 = 33 ;
    	a90 = 34 ;
    	a196 = 10;
    	a120 = 10;
    	a2 = 9;
    	a56 = 11;
    	a112 = 36 ;
    	a141 = 34 ;
    	a16 = 9;
    	a174 = 12;
    	a0 = 33 ;
    	a12 = 36 ;
    	a167 = 5;
    	a184 = 8;
    	a200 = 36 ;
    	a115 = 34 ;
    	a105 = 14;
    	a20 = 6;
    	a153 = 4;
    	a48 = 33 ;
    	a158 = 10;
    	a131 = 9;
    	a84 = 35 ;
    	a97 = 6;
    	a180 = 34 ;
    	a144 = 34 ;
    	a128 = 3;
    	a169 = 34 ;
    	a25 = 9;
    	a101 = 36 ;
    	a146 = 34 ;
    	a127 = 9;
    	a110 = 7;
    	a53 = 32 ;
    	a17 = 35 ;
    	a179 = 34 ;
    	a34 = 35 ;
    	a37 = 8;
    	a15 = 16;
    	a81 = 13;
    	a125 = 33 ;
    	a119 = 33 ;
    	a183 = 14;
    	a140 = 6;
    	a68 = 6;
    	a152 = 10;
    	a193 = 9;
    	a104 = 33 ;
    	a69 = 35 ;
    	a65 = 16;
    	a118 = 33 ;
    	a156 = 6;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 191\n");

    if(((a53 == 33 && (( cf==1  && (input == 7)) && a84 == 33)) && ((a128 == 1 && (a16 == 9 && a174 == 7)) && a196 == 5))) {
printf("POINT: 192\n");
    	cf = 0;
    	 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 193\n");

    if(((a69 == 33 && (a17 == 33 && (a112 == 33 && (a146 == 33 && a146 == 33)))) && (( cf==1  && (input == 9)) && a167 == 1))) {
printf("POINT: 194\n");
    	cf = 0;
    	a68 = 9;
    	a141 = 36 ;
    	a65 = 16;
    	a158 = 11;
    	a125 = 35 ;
    	a2 = 7;
    	a112 = 35 ;
    	a144 = 35 ;
    	a115 = 36 ;
    	a131 = 13;
    	a179 = 36 ;
    	a56 = 14;
    	a34 = 36 ;
    	a0 = 33 ;
    	a146 = 33 ;
    	a105 = 13;
    	a184 = 12;
    	a48 = 35 ;
    	a12 = 33 ;
    	a20 = 10;
    	a119 = 36 ;
    	a200 = 36 ;
    	a36 = 32 ;
    	a167 = 6;
    	a185 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 195\n");

    if((((a112 == 33 && a56 == 8) && a127 == 6) && ((a17 == 33 && (a15 == 9 && ((input == 10) &&  cf==1 ))) && a101 == 33))) {
printf("POINT: 196\n");
    	cf = 0;
    	a140 = 7;
    	a112 = 35 ;
    	a90 = 36 ;
    	a185 = 15;
    	a120 = 11;
    	a2 = 5;
    	a15 = 14;
    	a167 = 4;
    	a84 = 35 ;
    	a17 = 36 ;
    	a146 = 36 ;
    	a97 = 6;
    	a65 = 13;
    	a128 = 5;
    	a34 = 34 ;
    	a20 = 6;
    	a12 = 34 ;
    	a53 = 33 ;
    	a180 = 35 ;
    	a56 = 15;
    	a95 = 9;
    	a55 = 36 ;
    	a193 = 12;
    	a125 = 34 ;
    	a127 = 11;
    	a158 = 11;
    	a184 = 12;
    	a16 = 16;
    	a131 = 9;
    	a0 = 35 ;
    	a144 = 35 ;
    	a48 = 35 ;
    	a169 = 36 ;
    	a41 = 32 ;
    	a141 = 36 ;
    	a104 = 36 ;
    	a101 = 34 ;
    	a115 = 36 ;
    	a22 = 11;
    	a81 = 16;
    	a119 = 36 ;
    	a32 = 33 ;
    	a152 = 8;
    	a69 = 33 ;
    	a196 = 12;
    	a110 = 12;
    	a179 = 34 ;
    	a200 = 36 ;
    	a105 = 17;
    	a174 = 13;
    	a68 = 2;
    	a118 = 36 ;
    	a58 = 2; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 197\n");

    if((((((input == 4) &&  cf==1 ) && a141 == 33) && a120 == 5) && (((a68 == 2 && a196 == 5) && a118 == 33) && a180 == 33))) {
printf("POINT: 198\n");
    	cf = 0;
    	a48 = 35 ;
    	a141 = 33 ;
    	a121 = 36 ;
    	a2 = 10;
    	a105 = 15;
    	a127 = 10;
    	a69 = 33 ;
    	a174 = 12;
    	a179 = 34 ;
    	a185 = 16;
    	a65 = 13;
    	a115 = 35 ;
    	a112 = 33 ;
    	a12 = 34 ;
    	a196 = 10;
    	a120 = 5;
    	a16 = 9;
    	a158 = 11;
    	a146 = 35 ;
    	a144 = 36 ;
    	a32 = 36 ;
    	a110 = 11;
    	a15 = 13;
    	a97 = 8;
    	a104 = 32 ;
    	a140 = 9;
    	a193 = 14;
    	a152 = 8;
    	a45 = 36 ;
    	a125 = 34 ;
    	a34 = 36 ;
    	a184 = 12;
    	a55 = 35 ;
    	a20 = 9;
    	a167 = 3;
    	a118 = 33 ;
    	a119 = 36 ;
    	a17 = 35 ;
    	a81 = 14;
    	a131 = 16;
    	a187 = 7;
    	a0 = 34 ;
    	a200 = 36 ;
    	a53 = 36 ;
    	a101 = 36 ;
    	a90 = 34 ;
    	a169 = 36 ;
    	a128 = 8;
    	a68 = 8;
    	a180 = 35 ;
    	a56 = 11;
    	a62 = 4; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm51(int input) {
printf("POINT: 199\n");

    if(((( cf==1  && (input == 9)) && a180 == 33) && ((((a141 == 33 && a39 == 7) && a84 == 33) && a150 == 4) && a118 == 33))) {
printf("POINT: 200\n");
    	cf = 0;
    	a12 = 32 ;
    	a3 = 35 ;
    	a125 = 32 ;
    	a17 = 32 ;
    	a30 = 32 ;
    	a118 = 32 ;
    	a200 = 32 ;
    	a141 = 32 ;
    	a84 = 32 ;
    	a104 = 32 ;
    	a180 = 32 ;
    	a139 = 35 ;
    	a150 = 5;
    	a34 = 32 ;
    	a69 = 32 ;
    	a112 = 32 ;
    	a97 = 4;
    	a53 = 32 ;
    	a198 = 36 ;
    	a55 = 32 ;
    	a81 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm52(int input) {
printf("POINT: 201\n");

    if((((((a128 == 1 && a84 == 33) && a93 == 2) && a84 == 33) && a112 == 33) && (( cf==1  && (input == 10)) && a97 == 3))) {
printf("POINT: 202\n");
    	cf = 0;
    	a53 = 33 ;
    	a41 = 33 ;
    	a104 = 36 ;
    	a51 = 36 ;
    	a46 = 36 ;
    	a69 = 33 ;
    	a26 = 8;
    	a88 = 35 ;
    	a45 = 33 ;
    	a184 = 5;
    	a15 = 11;
    	a34 = 33 ;
    	a68 = 6;
    	a146 = 36 ;
    	a56 = 13;
    	a39 = 14;
    	a25 = 9;
    	a196 = 5;
    	a180 = 33 ;
    	a109 = 33 ;
    	a174 = 10;
    	a165 = 35 ;
    	a93 = 2;
    	a84 = 33 ;
    	a152 = 8;
    	a55 = 35 ;
    	a179 = 36 ;
    	a17 = 32 ;
    	a81 = 10;
    	a200 = 34 ;
    	a187 = 10;
    	a79 = 7;
    	a119 = 36 ;
    	a28 = 12;
    	a0 = 36 ;
    	a193 = 13;
    	a100 = 32 ;
    	a94 = 36 ;
    	a127 = 11;
    	a101 = 35 ;
    	a105 = 10;
    	a121 = 35 ;
    	a125 = 33 ;
    	a140 = 4;
    	a2 = 6;
    	a32 = 33 ;
    	a128 = 8;
    	a153 = 5;
    	a97 = 9;
    	a112 = 36 ;
    	a120 = 12;
    	a115 = 33 ;
    	a37 = 8;
    	a110 = 11;
    	a178 = 32 ;
    	a144 = 35 ;
    	a135 = 12; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 203\n");

    if(((a25 == 4 && ((a51 == 33 && a79 == 5) && a121 == 33)) && (a26 == 2 && (( cf==1  && (input == 2)) && a46 == 33)))) {
printf("POINT: 204\n");
    	cf = 0;
printf("POINT: 205\n");

    	if((((a119 == 35 || (a71 == 12 && a171 == 10)) && !(a76 == 6)) || a158 == 6)) {
printf("POINT: 206\n");
    	a158 = 10;
    	a81 = 14;
    	a110 = 9;
    	a37 = 8;
    	a144 = 35 ;
    	a56 = 12;
    	a69 = 35 ;
    	a97 = 9;
    	a140 = 9;
    	a95 = 10;
    	a34 = 33 ;
    	a193 = 13;
    	a88 = 36 ;
    	a187 = 5;
    	a26 = 7;
    	a174 = 13;
    	a119 = 35 ;
    	a184 = 11;
    	a32 = 34 ;
    	a84 = 33 ;
    	a118 = 35 ;
    	a154 = 36 ;
    	a165 = 34 ;
    	a120 = 7;
    	a51 = 33 ;
    	a176 = 2;
    	a2 = 6;
    	a183 = 12;
    	a90 = 34 ;
    	a101 = 36 ;
    	a0 = 36 ;
    	a121 = 33 ;
    	a30 = 33 ;
    	a169 = 34 ;
    	a25 = 10;
    	a178 = 33 ;
    	a179 = 34 ;
    	a39 = 10;
    	a196 = 5;
    	a79 = 7;
    	a93 = 5;
    	a22 = 7;
    	a41 = 33 ;
    	a55 = 34 ;
    	a150 = 4;
    	a126 = 6;
    	a127 = 11;
    	a112 = 33 ;
    	a46 = 33 ;
    	a125 = 33 ;
    	a48 = 36 ;
    	a45 = 36 ;
    	a141 = 35 ;
    	a160 = 33 ;
    	a153 = 8;
    	a152 = 12;
    	a53 = 33 ;
    	a15 = 15;
    	a128 = 6;
    	a115 = 33 ;
    	a105 = 10;
    	a109 = 35 ;
    	a200 = 36 ;
    	a7 = 5; 
    	}else {
printf("POINT: 208\n");
    	a101 = 34 ;
    	a146 = 34 ;
    	a12 = 36 ;
    	a34 = 35 ;
    	a153 = 6;
    	a115 = 35 ;
    	a17 = 32 ;
    	a165 = 34 ;
    	a56 = 15;
    	a90 = 35 ;
    	a25 = 6;
    	a20 = 9;
    	a186 = 36 ;
    	a95 = 15;
    	a41 = 33 ;
    	a180 = 36 ;
    	a86 = 33 ;
    	a0 = 35 ;
    	a100 = 33 ;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 209\n");

    if((( cf==1  && (input == 6)) && (a193 == 7 && (a154 == 33 && (((a88 == 33 && a154 == 33) && a125 == 33) && a2 == 3))))) {
printf("POINT: 210\n");
    	cf = 0;
    	a165 = 36 ;
    	a41 = 32 ;
    	a105 = 14;
    	a46 = 33 ;
    	a150 = 11;
    	a109 = 33 ;
    	a104 = 33 ;
    	a37 = 14;
    	a20 = 3;
    	a154 = 32 ;
    	a110 = 6;
    	a34 = 35 ;
    	a45 = 32 ;
    	a157 = 11;
    	a169 = 36 ;
    	a28 = 12;
    	a0 = 36 ;
    	a120 = 8;
    	a56 = 15;
    	a30 = 35 ;
    	a12 = 35 ;
    	a81 = 10;
    	a152 = 11;
    	a131 = 16;
    	a53 = 33 ;
    	a15 = 9;
    	a17 = 36 ;
    	a167 = 6;
    	a79 = 9;
    	a68 = 7;
    	a128 = 2;
    	a112 = 32 ;
    	a95 = 12;
    	a48 = 33 ;
    	a135 = 15;
    	a55 = 36 ;
    	a118 = 35 ;
    	a51 = 35 ;
    	a180 = 35 ;
    	a176 = 6;
    	a39 = 13;
    	a65 = 13;
    	a140 = 5;
    	a160 = 36 ;
    	a153 = 5;
    	a69 = 36 ;
    	a16 = 16;
    	a200 = 34 ;
    	a179 = 32 ;
    	a22 = 8;
    	a126 = 6;
    	a97 = 9;
    	a125 = 35 ;
    	a84 = 35 ;
    	a144 = 36 ;
    	a25 = 11;
    	a90 = 34 ;
    	a193 = 14;
    	a26 = 5;
    	a184 = 9;
    	a146 = 33 ;
    	a121 = 33 ;
    	a127 = 7;
    	a88 = 35 ;
    	a178 = 36 ;
    	a119 = 35 ;
    	a187 = 6;
    	a2 = 3;
    	a174 = 10;
    	a115 = 33 ;
    	a196 = 6;
    	a101 = 35 ;
    	a93 = 5;
    	a98 = 12; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 211\n");

    if((((( cf==1  && (input == 3)) && a127 == 6) && a95 == 8) && (((a144 == 33 && a193 == 7) && a115 == 33) && a169 == 33))) {
printf("POINT: 212\n");
    	cf = 0;
printf("POINT: 213\n");

    	if((a111 == 36 || a154 == 36)) {
printf("POINT: 214\n");
    	a150 = 4;
    	a179 = 35 ;
    	a125 = 36 ;
    	a160 = 33 ;
    	a46 = 33 ;
    	a135 = 8;
    	a41 = 32 ;
    	a127 = 7;
    	a45 = 36 ;
    	a200 = 34 ;
    	a88 = 33 ;
    	a13 = 5;
    	a178 = 35 ;
    	a112 = 32 ;
    	a79 = 5;
    	a93 = 2;
    	a26 = 8;
    	a97 = 7;
    	a2 = 10;
    	a110 = 5;
    	a55 = 35 ;
    	a84 = 32 ;
    	a95 = 8;
    	a176 = 2;
    	a128 = 7;
    	a104 = 36 ;
    	a56 = 11;
    	a12 = 33 ;
    	a169 = 36 ;
    	a184 = 10;
    	a0 = 35 ;
    	a120 = 12;
    	a25 = 10;
    	a115 = 35 ;
    	a165 = 32 ;
    	a146 = 33 ;
    	a154 = 34 ;
    	a101 = 32 ;
    	a81 = 14;
    	a193 = 8;
    	a53 = 33 ;
    	a167 = 8;
    	a68 = 2;
    	a39 = 11;
    	a90 = 32 ;
    	a140 = 9;
    	a144 = 35 ;
    	a22 = 11;
    	a126 = 4;
    	a187 = 10;
    	a121 = 32 ;
    	a20 = 6;
    	a51 = 32 ;
    	a16 = 9;
    	a48 = 33 ;
    	a69 = 36 ;
    	a118 = 32 ;
    	a153 = 4;
    	a105 = 10;
    	a34 = 36 ;
    	a180 = 33 ;
    	a196 = 9;
    	a15 = 14;
    	a109 = 33 ;
    	a119 = 33 ;
    	a131 = 9;
    	a6 = 5; 
    	}else {
printf("POINT: 216\n");
    	a104 = 32 ;
    	a127 = 12;
    	a174 = 12;
    	a53 = 36 ;
    	a34 = 33 ;
    	a131 = 14;
    	a41 = 33 ;
    	a101 = 35 ;
    	a48 = 35 ;
    	a100 = 36 ;
    	a178 = 33 ;
    	a37 = 8;
    	a184 = 6;
    	a79 = 9;
    	a15 = 14;
    	a0 = 33 ;
    	a105 = 11;
    	a55 = 32 ;
    	a110 = 7;
    	a118 = 35 ;
    	a154 = 36 ;
    	a153 = 5;
    	a84 = 32 ;
    	a65 = 16;
    	a196 = 6;
    	a46 = 35 ;
    	a146 = 32 ;
    	a176 = 8;
    	a95 = 12;
    	a152 = 11;
    	a187 = 10;
    	a45 = 32 ;
    	a51 = 32 ;
    	a2 = 7;
    	a125 = 35 ;
    	a169 = 36 ;
    	a121 = 33 ;
    	a119 = 32 ;
    	a109 = 35 ;
    	a160 = 33 ;
    	a97 = 8;
    	a69 = 36 ;
    	a150 = 6;
    	a120 = 9;
    	a180 = 36 ;
    	a68 = 5;
    	a179 = 36 ;
    	a81 = 12;
    	a39 = 7;
    	a115 = 33 ;
    	a94 = 36 ;
    	a32 = 35 ;
    	a56 = 10;
    	a90 = 35 ;
    	a126 = 7;
    	a193 = 10;
    	a93 = 5;
    	a28 = 16;
    	a25 = 4;
    	a200 = 34 ;
    	a140 = 10;
    	a26 = 5;
    	a165 = 35 ;
    	a144 = 33 ;
    	a128 = 8;
    	a112 = 32 ;
    	a17 = 32 ;
    	a88 = 36 ;
    	a135 = 12;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 217\n");

    if(((a193 == 7 && (a144 == 33 && ((input == 9) &&  cf==1 ))) && ((a97 == 3 && (a26 == 2 && a112 == 33)) && a178 == 33))) {
printf("POINT: 218\n");
    	cf = 0;
    	a112 = 33 ;
    	a84 = 33 ;
    	a12 = 34 ;
    	a152 = 9;
    	a30 = 35 ;
    	a128 = 3;
    	a20 = 4;
    	a135 = 11;
    	a165 = 33 ;
    	a88 = 32 ;
    	a15 = 16;
    	a69 = 34 ;
    	a193 = 10;
    	a65 = 15;
    	a146 = 36 ;
    	a141 = 34 ;
    	a39 = 10;
    	a45 = 34 ;
    	a131 = 14;
    	a125 = 32 ;
    	a197 = 6;
    	a46 = 33 ;
    	a2 = 4;
    	a176 = 2;
    	a81 = 16;
    	a178 = 35 ;
    	a169 = 35 ;
    	a90 = 36 ;
    	a105 = 14;
    	a126 = 5;
    	a118 = 33 ;
    	a97 = 10;
    	a200 = 34 ;
    	a144 = 33 ;
    	a154 = 34 ;
    	a93 = 9;
    	a109 = 36 ;
    	a56 = 11;
    	a167 = 6;
    	a101 = 33 ;
    	a0 = 32 ;
    	a140 = 9;
    	a22 = 14;
    	a17 = 33 ;
    	a121 = 32 ;
    	a28 = 11;
    	a127 = 11;
    	a26 = 7;
    	a41 = 33 ;
    	a25 = 7;
    	a180 = 33 ;
    	a160 = 32 ;
    	a120 = 8;
    	a53 = 36 ;
    	a68 = 2;
    	a187 = 3;
    	a16 = 11;
    	a196 = 10;
    	a110 = 10;
    	a184 = 8;
    	a37 = 11;
    	a115 = 33 ;
    	a34 = 32 ;
    	a119 = 35 ;
    	a48 = 33 ;
    	a51 = 36 ;
    	a104 = 33 ;
    	a179 = 32 ;
    	a79 = 7;
    	a150 = 10;
    	a153 = 6;
    	a55 = 32 ;
    	a95 = 12;
    	a75 = 8; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 219\n");

    if(((a127 == 6 && ( cf==1  && (input == 4))) && (a81 == 10 && (a56 == 8 && (a115 == 33 && (a165 == 33 && a2 == 3)))))) {
printf("POINT: 220\n");
    	cf = 0;
    	a165 = 35 ;
    	a180 = 32 ;
    	a56 = 14;
    	a146 = 32 ;
    	a186 = 36 ;
    	a0 = 35 ;
    	a86 = 33 ;
    	a115 = 33 ;
    	a25 = 8;
    	a90 = 33 ;
    	a34 = 33 ;
    	a153 = 6;
    	a17 = 34 ;
    	a101 = 35 ;
    	a20 = 10;
    	a41 = 36 ;
    	a95 = 8;
    	a12 = 36 ;
    	a100 = 33 ; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 221\n");

    if(((a45 == 33 && a165 == 33) && (a25 == 4 && (((a110 == 5 && ((input == 8) &&  cf==1 )) && a105 == 10) && a101 == 33)))) {
printf("POINT: 222\n");
    	cf = 0;
    	a153 = 8;
    	a55 = 36 ;
    	a150 = 7;
    	a56 = 13;
    	a97 = 6;
    	a34 = 36 ;
    	a26 = 8;
    	a48 = 32 ;
    	a17 = 34 ;
    	a28 = 15;
    	a128 = 3;
    	a178 = 35 ;
    	a93 = 8;
    	a193 = 10;
    	a53 = 32 ;
    	a179 = 36 ;
    	a167 = 8;
    	a32 = 33 ;
    	a15 = 10;
    	a105 = 14;
    	a90 = 36 ;
    	a184 = 10;
    	a118 = 32 ;
    	a152 = 11;
    	a131 = 13;
    	a176 = 6;
    	a165 = 32 ;
    	a95 = 14;
    	a37 = 11;
    	a115 = 35 ;
    	a112 = 33 ;
    	a110 = 8;
    	a119 = 35 ;
    	a101 = 36 ;
    	a109 = 32 ;
    	a0 = 36 ;
    	a51 = 34 ;
    	a30 = 34 ;
    	a174 = 12;
    	a196 = 9;
    	a91 = 34 ;
    	a79 = 11;
    	a22 = 14;
    	a121 = 35 ;
    	a69 = 36 ;
    	a154 = 36 ;
    	a81 = 15;
    	a16 = 11;
    	a88 = 35 ;
    	a104 = 36 ;
    	a39 = 10;
    	a120 = 9;
    	a68 = 9;
    	a65 = 10;
    	a141 = 36 ;
    	a2 = 7;
    	a144 = 36 ;
    	a180 = 35 ;
    	a12 = 34 ;
    	a41 = 35 ;
    	a140 = 8;
    	a126 = 3;
    	a135 = 9;
    	a187 = 4;
    	a84 = 33 ;
    	a146 = 35 ;
    	a125 = 35 ;
    	a200 = 34 ;
    	a25 = 7;
    	a127 = 9;
    	a46 = 36 ;
    	a20 = 10;
    	a169 = 33 ;
    	a45 = 35 ;
    	a160 = 36 ;
    	a164 = 8; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 223\n");

    if(((((input == 7) &&  cf==1 ) && a179 == 33) && (((a39 == 7 && (a81 == 10 && a150 == 4)) && a178 == 33) && a41 == 33))) {
printf("POINT: 224\n");
    	cf = 0;
    	a88 = 33 ;
    	a36 = 32 ;
    	a56 = 13;
    	a25 = 10;
    	a176 = 8;
    	a179 = 34 ;
    	a48 = 35 ;
    	a141 = 34 ;
    	a158 = 11;
    	a2 = 9;
    	a0 = 34 ;
    	a112 = 35 ;
    	a93 = 7;
    	a119 = 35 ;
    	a144 = 36 ;
    	a115 = 34 ;
    	a126 = 6;
    	a105 = 15;
    	a34 = 36 ;
    	a125 = 35 ;
    	a26 = 7;
    	a200 = 36 ;
    	a184 = 9;
    	a185 = 13; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 225\n");

    if(((a153 == 3 && (a0 == 33 && ( cf==1  && (input == 5)))) && ((a127 == 6 && (a187 == 3 && a0 == 33)) && a193 == 7))) {
printf("POINT: 226\n");
    	cf = 0;
printf("POINT: 227\n");

    	if(a26 == 7) {
printf("POINT: 228\n");
    	a160 = 34 ;
    	a26 = 6;
    	a167 = 5;
    	a97 = 7;
    	a200 = 35 ;
    	a141 = 33 ;
    	a25 = 9;
    	a90 = 34 ;
    	a105 = 16;
    	a84 = 32 ;
    	a95 = 14;
    	a109 = 35 ;
    	a28 = 11;
    	a53 = 35 ;
    	a125 = 36 ;
    	a152 = 14;
    	a153 = 6;
    	a184 = 11;
    	a118 = 33 ;
    	a110 = 12;
    	a140 = 8;
    	a193 = 9;
    	a45 = 34 ;
    	a121 = 36 ;
    	a120 = 9;
    	a0 = 36 ;
    	a55 = 33 ;
    	a134 = 12;
    	a174 = 9;
    	a56 = 14;
    	a34 = 33 ;
    	a79 = 10;
    	a15 = 15;
    	a176 = 2;
    	a187 = 10;
    	a165 = 33 ;
    	a32 = 33 ;
    	a51 = 34 ;
    	a127 = 13;
    	a46 = 36 ;
    	a41 = 33 ;
    	a144 = 33 ;
    	a126 = 7;
    	a112 = 36 ;
    	a88 = 33 ;
    	a81 = 15;
    	a65 = 12;
    	a48 = 33 ;
    	a12 = 33 ;
    	a178 = 33 ;
    	a94 = 35 ;
    	a39 = 7;
    	a150 = 8;
    	a115 = 36 ;
    	a2 = 5;
    	a30 = 35 ;
    	a196 = 9;
    	a128 = 8;
    	a154 = 35 ;
    	a119 = 35 ;
    	a169 = 35 ;
    	a179 = 34 ;
    	a17 = 33 ;
    	a101 = 35 ;
    	a69 = 35 ;
    	a93 = 4;
    	a191 = 9; 
    	}else {
printf("POINT: 230\n");
    	a184 = 5;
    	a34 = 36 ;
    	a158 = 12;
    	a154 = 34 ;
    	a25 = 10;
    	a169 = 33 ;
    	a88 = 34 ;
    	a144 = 36 ;
    	a165 = 34 ;
    	a109 = 36 ;
    	a0 = 33 ;
    	a160 = 35 ;
    	a118 = 36 ;
    	a119 = 32 ;
    	a110 = 11;
    	a45 = 33 ;
    	a200 = 36 ;
    	a128 = 1;
    	a179 = 33 ;
    	a115 = 33 ;
    	a127 = 10;
    	a193 = 14;
    	a2 = 10;
    	a126 = 5;
    	a39 = 10;
    	a176 = 8;
    	a180 = 33 ;
    	a15 = 11;
    	a62 = 6;
    	a56 = 13;
    	a95 = 15;
    	a121 = 35 ;
    	a178 = 33 ;
    	a125 = 34 ;
    	a41 = 33 ;
    	a150 = 11;
    	a69 = 36 ;
    	a46 = 32 ;
    	a153 = 9;
    	a26 = 6;
    	a101 = 32 ;
    	a53 = 32 ;
    	a93 = 9;
    	a196 = 12;
    	a112 = 32 ;
    	a22 = 12;
    	a51 = 33 ;
    	a174 = 9;
    	a141 = 34 ;
    	a90 = 35 ;
    	a55 = 32 ;
    	a48 = 36 ;
    	a105 = 12;
    	a140 = 4;
    	a79 = 5;
    	a120 = 9;
    	a97 = 9;
    	a187 = 6;
    	a71 = 12;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 231\n");

    if(((a140 == 4 && (a90 == 33 && a109 == 33)) && (((a196 == 5 && ( cf==1  && (input == 1))) && a184 == 5) && a93 == 2))) {
printf("POINT: 232\n");
    	cf = 0;
printf("POINT: 233\n");

    	if((a179 == 32 && (!(a10 == 3) || ((a163 == 33 ||  cf!=1 ) && !(a31 == 36))))) {
printf("POINT: 234\n");
    	a200 = 34 ;
    	a12 = 36 ;
    	a187 = 8;
    	a81 = 13;
    	a121 = 35 ;
    	a20 = 9;
    	a30 = 32 ;
    	a46 = 32 ;
    	a26 = 7;
    	a196 = 11;
    	a34 = 35 ;
    	a93 = 7;
    	a127 = 9;
    	a22 = 12;
    	a128 = 7;
    	a140 = 4;
    	a178 = 32 ;
    	a154 = 33 ;
    	a179 = 35 ;
    	a176 = 3;
    	a146 = 32 ;
    	a0 = 35 ;
    	a135 = 9;
    	a15 = 15;
    	a2 = 4;
    	a88 = 36 ;
    	a79 = 12;
    	a17 = 32 ;
    	a105 = 16;
    	a84 = 36 ;
    	a180 = 33 ;
    	a90 = 33 ;
    	a55 = 36 ;
    	a109 = 33 ;
    	a184 = 12;
    	a5 = 33 ;
    	a45 = 35 ;
    	a101 = 36 ;
    	a95 = 11;
    	a193 = 14;
    	a48 = 32 ;
    	a37 = 12;
    	a104 = 35 ;
    	a119 = 33 ;
    	a56 = 12;
    	a165 = 36 ;
    	a144 = 36 ;
    	a150 = 5;
    	a112 = 36 ;
    	a167 = 8;
    	a126 = 10;
    	a53 = 33 ;
    	a169 = 35 ;
    	a69 = 36 ;
    	a97 = 8;
    	a164 = 13; 
    	}else {
printf("POINT: 236\n");
    	a84 = 35 ;
    	a68 = 9;
    	a179 = 33 ;
    	a119 = 36 ;
    	a15 = 14;
    	a193 = 7;
    	a34 = 36 ;
    	a53 = 36 ;
    	a39 = 7;
    	a101 = 36 ;
    	a180 = 33 ;
    	a26 = 8;
    	a0 = 35 ;
    	a200 = 36 ;
    	a79 = 8;
    	a37 = 9;
    	a146 = 32 ;
    	a128 = 5;
    	a2 = 8;
    	a97 = 8;
    	a127 = 11;
    	a46 = 36 ;
    	a115 = 33 ;
    	a104 = 32 ;
    	a112 = 36 ;
    	a69 = 35 ;
    	a153 = 6;
    	a41 = 35 ;
    	a187 = 7;
    	a88 = 33 ;
    	a25 = 6;
    	a45 = 33 ;
    	a56 = 8;
    	a81 = 13;
    	a51 = 33 ;
    	a144 = 34 ;
    	a32 = 34 ;
    	a184 = 11;
    	a196 = 11;
    	a174 = 12;
    	a120 = 5;
    	a178 = 32 ;
    	a121 = 33 ;
    	a28 = 12;
    	a93 = 2;
    	a140 = 7;
    	a125 = 33 ;
    	a17 = 36 ;
    	a110 = 11;
    	a105 = 11;
    	a165 = 34 ;
    	a109 = 35 ;
    	a158 = 11;
    	a55 = 33 ;
    	a185 = 11;
    	}printf("%d\n", 21);  
    } 
}
 void calculate_outputm3(int input) {
printf("POINT: 237\n");

    if(((((a146 == 33 && (a17 == 33 && a25 == 4)) && a93 == 2) && a167 == 1) && (( cf==1  && a27 == 33) && a53 == 33))) {
printf("POINT: 238\n");
printf("POINT: 239\n");

    	if(((( cf==1  && a21 == 33) && a126 == 3) && ((a28 == 9 && (a184 == 5 && (a90 == 33 && a84 == 33))) && a32 == 33))) {
printf("POINT: 240\n");
    		calculate_outputm47(input);
    	} 
printf("POINT: 241\n");

    	if(((((a21 == 32 &&  cf==1 ) && a152 == 8) && a15 == 9) && (a32 == 33 && ((a115 == 33 && a22 == 7) && a131 == 9)))) {
printf("POINT: 242\n");
    		calculate_outputm48(input);
    	} 
    } 
printf("POINT: 243\n");

    if(((a17 == 33 && ((a167 == 1 && a105 == 10) && a69 == 33)) && (a26 == 2 && (a105 == 10 && (a27 == 32 &&  cf==1 ))))) {
printf("POINT: 244\n");
printf("POINT: 245\n");

    	if(((a53 == 33 && (( cf==1  && a182 == 32) && a104 == 33)) && ((a53 == 33 && (a53 == 33 && a16 == 9)) && a65 == 9))) {
printf("POINT: 246\n");
    		calculate_outputm49(input);
    	} 
    } 
printf("POINT: 247\n");

    if((((a104 == 33 && (a12 == 33 && a104 == 33)) && a17 == 33) && ((a179 == 33 && ( cf==1  && a27 == 35)) && a97 == 3))) {
printf("POINT: 248\n");
printf("POINT: 249\n");

    	if((((((a96 == 32 &&  cf==1 ) && a81 == 10) && a20 == 3) && a144 == 33) && (a16 == 9 && (a152 == 8 && a193 == 7)))) {
printf("POINT: 250\n");
    		calculate_outputm50(input);
    	} 
printf("POINT: 251\n");

    	if(((a30 == 33 && (a150 == 4 && a32 == 33)) && (a141 == 33 && (a55 == 33 && (( cf==1  && a96 == 34) && a81 == 10))))) {
printf("POINT: 252\n");
    		calculate_outputm51(input);
    	} 
    } 
printf("POINT: 253\n");

    if(((a109 == 33 && (a55 == 33 && (( cf==1  && a27 == 36) && a119 == 33))) && ((a110 == 5 && a126 == 3) && a176 == 2))) {
printf("POINT: 254\n");
printf("POINT: 255\n");

    	if(((((a90 == 33 && a48 == 33) && a53 == 33) && a110 == 5) && (a160 == 33 && (a15 == 9 && ( cf==1  && a23 == 35))))) {
printf("POINT: 256\n");
    		calculate_outputm52(input);
    	} 
    } 
}
 void calculate_outputm53(int input) {
printf("POINT: 257\n");

    if((((a128 == 1 && a56 == 8) && a126 == 3) && (((a55 == 33 && ( cf==1  && (input == 10))) && a160 == 33) && a153 == 3))) {
printf("POINT: 258\n");
    	cf = 0;
    	a88 = 34 ;
    	a200 = 34 ;
    	a165 = 32 ;
    	a115 = 32 ;
    	a160 = 34 ;
    	a95 = 9;
    	a15 = 11;
    	a193 = 8;
    	a135 = 10;
    	a20 = 4;
    	a51 = 34 ;
    	a146 = 34 ;
    	a126 = 4;
    	a79 = 6;
    	a196 = 7;
    	a154 = 34 ;
    	a144 = 32 ;
    	a37 = 10;
    	a93 = 3;
    	a12 = 32 ;
    	a2 = 4;
    	a169 = 32 ;
    	a121 = 32 ;
    	a184 = 5;
    	a48 = 32 ;
    	a187 = 5;
    	a125 = 33 ;
    	a55 = 34 ;
    	a179 = 34 ;
    	a101 = 32 ;
    	a16 = 10;
    	a120 = 7;
    	a25 = 5;
    	a81 = 11;
    	a178 = 34 ;
    	a26 = 4;
    	a150 = 5;
    	a22 = 7;
    	a34 = 32 ;
    	a17 = 34 ;
    	a97 = 5;
    	a84 = 32 ;
    	a78 = 33 ;
    	a131 = 10;
    	a53 = 34 ;
    	a174 = 7;
    	a39 = 8;
    	a112 = 32 ;
    	a110 = 6;
    	a167 = 2;
    	a127 = 7;
    	a32 = 32 ;
    	a140 = 6;
    	a56 = 9;
    	a153 = 4;
    	a46 = 32 ;
    	a90 = 32 ;
    	a69 = 32 ;
    	a0 = 32 ;
    	a128 = 3;
    	a141 = 32 ;
    	a171 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 259\n");

    if(((a179 == 33 && (a144 == 33 && a90 == 33)) && (a154 == 33 && (a34 == 33 && (a196 == 5 && ( cf==1  && (input == 9))))))) {
printf("POINT: 260\n");
    	cf = 0;
    	a37 = 8;
    	a101 = 32 ;
    	a179 = 33 ;
    	a25 = 4;
    	a176 = 4;
    	a46 = 33 ;
    	a119 = 32 ;
    	a105 = 12;
    	a34 = 32 ;
    	a95 = 9;
    	a153 = 3;
    	a196 = 5;
    	a140 = 4;
    	a12 = 32 ;
    	a51 = 33 ;
    	a154 = 33 ;
    	a160 = 32 ;
    	a22 = 8;
    	a174 = 8;
    	a141 = 32 ;
    	a152 = 10;
    	a69 = 33 ;
    	a39 = 8;
    	a81 = 11;
    	a55 = 32 ;
    	a169 = 32 ;
    	a90 = 33 ;
    	a144 = 33 ;
    	a15 = 9;
    	a56 = 8;
    	a28 = 11;
    	a53 = 32 ;
    	a110 = 6;
    	a45 = 32 ;
    	a126 = 3;
    	a88 = 32 ;
    	a150 = 5;
    	a136 = 13;
    	a128 = 2;
    	a180 = 32 ;
    	a178 = 33 ;
    	a184 = 6;
    	a68 = 3;
    	a109 = 32 ;
    	a120 = 5;
    	a146 = 33 ;
    	a79 = 6;
    	a121 = 32 ;
    	a30 = 34 ;
    	a187 = 4;
    	a200 = 36 ;
    	a158 = 9;
    	a41 = 32 ;
    	a65 = 11;
    	a104 = 34 ;
    	a17 = 33 ;
    	a125 = 33 ;
    	a112 = 32 ;
    	a165 = 32 ;
    	a84 = 33 ;
    	a97 = 3;
    	a115 = 32 ;
    	a118 = 34 ;
    	a26 = 2;
    	a133 = 2; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 261\n");

    if(((a140 == 4 && (a174 == 7 && ((input == 6) &&  cf==1 ))) && (a187 == 3 && (a46 == 33 && (a128 == 1 && a37 == 8))))) {
printf("POINT: 262\n");
    	cf = 0;
    	a110 = 6;
    	a154 = 33 ;
    	a153 = 4;
    	a104 = 32 ;
    	a119 = 34 ;
    	a12 = 33 ;
    	a65 = 11;
    	a105 = 11;
    	a15 = 9;
    	a184 = 6;
    	a95 = 8;
    	a93 = 3;
    	a109 = 34 ;
    	a56 = 8;
    	a150 = 5;
    	a55 = 33 ;
    	a88 = 32 ;
    	a152 = 10;
    	a141 = 32 ;
    	a32 = 32 ;
    	a146 = 32 ;
    	a69 = 32 ;
    	a90 = 32 ;
    	a125 = 33 ;
    	a45 = 34 ;
    	a140 = 5;
    	a144 = 33 ;
    	a128 = 1;
    	a84 = 33 ;
    	a51 = 33 ;
    	a179 = 33 ;
    	a48 = 32 ;
    	a46 = 33 ;
    	a160 = 33 ;
    	a180 = 34 ;
    	a196 = 5;
    	a28 = 11;
    	a34 = 32 ;
    	a17 = 33 ;
    	a81 = 11;
    	a94 = 35 ;
    	a121 = 33 ;
    	a97 = 4;
    	a126 = 4;
    	a37 = 9;
    	a169 = 33 ;
    	a41 = 34 ;
    	a118 = 32 ;
    	a26 = 2;
    	a16 = 10;
    	a120 = 5;
    	a178 = 33 ;
    	a134 = 12;
    	a187 = 3;
    	a30 = 34 ;
    	a53 = 32 ;
    	a68 = 3;
    	a200 = 35 ;
    	a174 = 7;
    	a20 = 4;
    	a176 = 4;
    	a2 = 4;
    	a25 = 4;
    	a167 = 2;
    	a191 = 12; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 263\n");

    if(((((input == 1) &&  cf==1 ) && a120 == 5) && (a51 == 33 && (a26 == 2 && (a55 == 33 && (a174 == 7 && a97 == 3)))))) {
printf("POINT: 264\n");
    	cf = 0;
    	a48 = 32 ;
    	a200 = 36 ;
    	a118 = 32 ;
    	a152 = 8;
    	a55 = 32 ;
    	a144 = 32 ;
    	a34 = 32 ;
    	a105 = 11;
    	a154 = 33 ;
    	a176 = 3;
    	a65 = 10;
    	a165 = 32 ;
    	a167 = 2;
    	a47 = 36 ;
    	a90 = 32 ;
    	a69 = 32 ;
    	a150 = 5;
    	a128 = 2;
    	a153 = 4;
    	a110 = 6;
    	a88 = 32 ;
    	a32 = 32 ;
    	a146 = 32 ;
    	a25 = 5;
    	a193 = 8;
    	a93 = 3;
    	a140 = 6;
    	a26 = 3;
    	a95 = 9;
    	a16 = 10;
    	a160 = 32 ;
    	a51 = 33 ;
    	a45 = 32 ;
    	a104 = 32 ;
    	a174 = 7;
    	a196 = 6;
    	a109 = 32 ;
    	a115 = 32 ;
    	a30 = 32 ;
    	a179 = 33 ;
    	a46 = 32 ;
    	a97 = 4;
    	a37 = 9;
    	a180 = 32 ;
    	a126 = 4;
    	a79 = 6;
    	a41 = 32 ;
    	a84 = 32 ;
    	a22 = 7;
    	a2 = 4;
    	a12 = 32 ;
    	a169 = 32 ;
    	a120 = 6;
    	a178 = 32 ;
    	a125 = 33 ;
    	a127 = 7;
    	a68 = 2;
    	a56 = 9;
    	a15 = 10;
    	a158 = 9;
    	a28 = 10;
    	a121 = 32 ;
    	a17 = 32 ;
    	a53 = 32 ;
    	a119 = 32 ;
    	a187 = 4;
    	a136 = 10; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm54(int input) {
printf("POINT: 265\n");

    if(((a178 == 33 && a30 == 33) && (a193 == 7 && (a110 == 5 && (a140 == 4 && (a125 == 33 && ((input == 6) &&  cf==1 ))))))) {
printf("POINT: 266\n");
    	cf = 0;
    	a140 = 5;
    	a178 = 32 ;
    	a120 = 6;
    	a128 = 2;
    	a167 = 2;
    	a69 = 32 ;
    	a144 = 32 ;
    	a53 = 32 ;
    	a121 = 32 ;
    	a126 = 4;
    	a196 = 6;
    	a158 = 12;
    	a118 = 32 ;
    	a84 = 32 ;
    	a30 = 32 ;
    	a200 = 36 ;
    	a0 = 32 ;
    	a162 = 32 ;
    	a95 = 9;
    	a62 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm55(int input) {
printf("POINT: 267\n");

    if(((a22 == 7 && (a51 == 33 && ( cf==1  && (input == 10)))) && (a69 == 33 && (a39 == 7 && (a180 == 33 && a28 == 9))))) {
printf("POINT: 268\n");
    	cf = 0;
    	a200 = 36 ;
    	a0 = 32 ;
    	a167 = 2;
    	a36 = 32 ;
    	a28 = 10;
    	a2 = 4;
    	a158 = 11;
    	a119 = 32 ;
    	a126 = 4;
    	a125 = 32 ;
    	a144 = 32 ;
    	a146 = 32 ;
    	a185 = 13; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 269\n");

    if((((a160 == 33 && (a118 == 33 && (a2 == 3 && a167 == 1))) && a51 == 33) && (a146 == 33 && ( cf==1  && (input == 7))))) {
printf("POINT: 270\n");
    	cf = 0;
    	a90 = 32 ;
    	a28 = 10;
    	a53 = 32 ;
    	a62 = 6;
    	a180 = 32 ;
    	a105 = 10;
    	a15 = 10;
    	a160 = 32 ;
    	a184 = 5;
    	a126 = 4;
    	a69 = 32 ;
    	a196 = 6;
    	a179 = 33 ;
    	a121 = 32 ;
    	a187 = 4;
    	a97 = 4;
    	a0 = 32 ;
    	a68 = 2;
    	a167 = 2;
    	a2 = 4;
    	a110 = 6;
    	a95 = 9;
    	a140 = 6;
    	a158 = 12;
    	a84 = 32 ;
    	a200 = 36 ;
    	a144 = 32 ;
    	a178 = 32 ;
    	a118 = 32 ;
    	a39 = 8;
    	a146 = 32 ;
    	a128 = 2;
    	a193 = 8;
    	a71 = 13; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm4(int input) {
printf("POINT: 271\n");

    if((((a55 == 33 && ((a169 == 33 && a150 == 4) && a17 == 33)) && a25 == 4) && (( cf==1  && a19 == 34) && a12 == 33))) {
printf("POINT: 272\n");
printf("POINT: 273\n");

    	if(((a178 == 33 && (a140 == 4 && (a37 == 8 && a146 == 33))) && (a88 == 33 && (a128 == 1 && (a1 == 33 &&  cf==1 ))))) {
printf("POINT: 274\n");
    		calculate_outputm53(input);
    	} 
    } 
printf("POINT: 275\n");

    if(((((a0 == 33 && ( cf==1  && a19 == 35)) && a193 == 7) && a126 == 3) && ((a167 == 1 && a196 == 5) && a90 == 33))) {
printf("POINT: 276\n");
printf("POINT: 277\n");

    	if(((((a0 == 33 && (a59 == 5 &&  cf==1 )) && a144 == 33) && a30 == 33) && ((a120 == 5 && a118 == 33) && a167 == 1))) {
printf("POINT: 278\n");
    		calculate_outputm54(input);
    	} 
printf("POINT: 279\n");

    	if((((a119 == 33 && (a97 == 3 && ( cf==1  && a59 == 8))) && a119 == 33) && ((a178 == 33 && a187 == 3) && a146 == 33))) {
printf("POINT: 280\n");
    		calculate_outputm55(input);
    	} 
    } 
}
 void calculate_outputm56(int input) {
printf("POINT: 281\n");

    if(((a51 == 33 && a45 == 33) && (a169 == 33 && (a20 == 3 && (a28 == 9 && (( cf==1  && (input == 7)) && a95 == 8)))))) {
printf("POINT: 282\n");
    	cf = 0;
    	a46 = 34 ;
    	a17 = 33 ;
    	a16 = 10;
    	a105 = 11;
    	a26 = 2;
    	a109 = 32 ;
    	a165 = 32 ;
    	a88 = 33 ;
    	a120 = 6;
    	a97 = 4;
    	a127 = 8;
    	a79 = 6;
    	a112 = 32 ;
    	a32 = 33 ;
    	a22 = 8;
    	a34 = 34 ;
    	a65 = 10;
    	a12 = 33 ;
    	a86 = 32 ;
    	a140 = 4;
    	a187 = 3;
    	a178 = 34 ;
    	a30 = 33 ;
    	a152 = 8;
    	a150 = 5;
    	a90 = 32 ;
    	a77 = 7;
    	a48 = 33 ;
    	a20 = 4;
    	a128 = 2;
    	a81 = 11;
    	a153 = 3;
    	a0 = 34 ;
    	a144 = 33 ;
    	a2 = 5;
    	a62 = 6; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 283\n");

    if(((a118 == 33 && ((input == 1) &&  cf==1 )) && ((a179 == 33 && ((a105 == 10 && a41 == 33) && a121 == 33)) && a127 == 6))) {
printf("POINT: 284\n");
    	cf = 0;
    	a105 = 12;
    	a110 = 7;
    	a2 = 4;
    	a41 = 34 ;
    	a179 = 34 ;
    	a104 = 34 ;
    	a53 = 34 ;
    	a69 = 34 ;
    	a127 = 7;
    	a28 = 11;
    	a68 = 4;
    	a20 = 5;
    	a90 = 34 ;
    	a46 = 32 ;
    	a121 = 34 ;
    	a25 = 6;
    	a45 = 32 ;
    	a120 = 7;
    	a15 = 11;
    	a151 = 35 ;
    	a174 = 9;
    	a200 = 34 ;
    	a51 = 34 ;
    	a56 = 10;
    	a169 = 34 ;
    	a125 = 34 ;
    	a118 = 34 ;
    	a86 = 32 ;
    	a135 = 13; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm57(int input) {
printf("POINT: 285\n");

    if((((a2 == 3 && (a152 == 8 && a79 == 5)) && a45 == 33) && (a15 == 9 && (a46 == 33 && ( cf==1  && (input == 5)))))) {
printf("POINT: 286\n");
    	cf = 0;
    	a200 = 36 ;
    	a180 = 34 ;
    	a144 = 34 ;
    	a30 = 32 ;
    	a167 = 2;
    	a178 = 32 ;
    	a127 = 8;
    	a48 = 32 ;
    	a118 = 34 ;
    	a121 = 32 ;
    	a141 = 32 ;
    	a15 = 10;
    	a41 = 32 ;
    	a46 = 34 ;
    	a56 = 10;
    	a112 = 34 ;
    	a140 = 5;
    	a32 = 34 ;
    	a105 = 12;
    	a90 = 32 ;
    	a39 = 9;
    	a28 = 11;
    	a51 = 32 ;
    	a150 = 5;
    	a17 = 34 ;
    	a184 = 6;
    	a176 = 3;
    	a169 = 32 ;
    	a115 = 32 ;
    	a125 = 32 ;
    	a25 = 5;
    	a104 = 32 ;
    	a174 = 8;
    	a179 = 32 ;
    	a187 = 5;
    	a95 = 9;
    	a65 = 11;
    	a53 = 34 ;
    	a97 = 5;
    	a37 = 9;
    	a81 = 10;
    	a152 = 9;
    	a69 = 32 ;
    	a158 = 12;
    	a110 = 7;
    	a2 = 4;
    	a84 = 32 ;
    	a126 = 4;
    	a101 = 34 ;
    	a160 = 34 ;
    	a16 = 10;
    	a193 = 7;
    	a62 = 9;
    	a154 = 34 ;
    	a93 = 3;
    	a79 = 7;
    	a45 = 34 ;
    	a109 = 32 ;
    	a68 = 3;
    	a133 = 7; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 287\n");

    if(((a25 == 4 && (a32 == 33 && a104 == 33)) && ((a126 == 3 && (a101 == 33 && ( cf==1  && (input == 4)))) && a160 == 33))) {
printf("POINT: 288\n");
    	cf = 0;
    	a84 = 32 ;
    	a112 = 33 ;
    	a169 = 32 ;
    	a79 = 6;
    	a140 = 4;
    	a90 = 33 ;
    	a115 = 33 ;
    	a104 = 33 ;
    	a28 = 10;
    	a184 = 5;
    	a101 = 33 ;
    	a39 = 9;
    	a95 = 9;
    	a26 = 3;
    	a45 = 33 ;
    	a126 = 4;
    	a48 = 32 ;
    	a93 = 3;
    	a174 = 7;
    	a154 = 34 ;
    	a15 = 9;
    	a122 = 36 ;
    	a68 = 3;
    	a2 = 3;
    	a16 = 9;
    	a193 = 7;
    	a22 = 8;
    	a160 = 33 ;
    	a125 = 32 ;
    	a55 = 32 ;
    	a165 = 32 ;
    	a65 = 11;
    	a69 = 33 ;
    	a53 = 33 ;
    	a129 = 32 ;
    	a25 = 4;
    	a144 = 33 ;
    	a110 = 6;
    	a176 = 3;
    	a196 = 6;
    	a37 = 8;
    	a127 = 8;
    	a109 = 33 ;
    	a46 = 32 ;
    	a30 = 33 ;
    	a17 = 34 ;
    	a200 = 36 ;
    	a179 = 32 ;
    	a41 = 32 ;
    	a32 = 32 ;
    	a150 = 5;
    	a187 = 5;
    	a120 = 6;
    	a105 = 10;
    	a167 = 2;
    	a152 = 8;
    	a158 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 289\n");

    if((((a112 == 33 && a30 == 33) && a125 == 33) && ((a105 == 10 && (a144 == 33 && ( cf==1  && (input == 1)))) && a144 == 33))) {
printf("POINT: 290\n");
    	cf = 0;
    	a30 = 34 ;
    	a28 = 11;
    	a121 = 33 ;
    	a104 = 34 ;
    	a112 = 34 ;
    	a56 = 10;
    	a140 = 6;
    	a119 = 33 ;
    	a81 = 10;
    	a196 = 5;
    	a25 = 5;
    	a97 = 5;
    	a186 = 32 ;
    	a95 = 10;
    	a153 = 3;
    	a26 = 4;
    	a22 = 9;
    	a146 = 33 ;
    	a88 = 33 ;
    	a141 = 33 ;
    	a90 = 32 ;
    	a45 = 34 ;
    	a101 = 34 ;
    	a184 = 6;
    	a144 = 34 ;
    	a105 = 12;
    	a109 = 32 ;
    	a37 = 9;
    	a126 = 4;
    	a152 = 9;
    	a0 = 33 ;
    	a86 = 33 ;
    	a68 = 3;
    	a34 = 33 ;
    	a180 = 34 ;
    	a128 = 1;
    	a32 = 34 ;
    	a55 = 34 ;
    	a2 = 4;
    	a118 = 33 ;
    	a177 = 14; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm58(int input) {
printf("POINT: 291\n");

    if(((((a28 == 9 && ( cf==1  && (input == 3))) && a45 == 33) && a26 == 2) && ((a104 == 33 && a126 == 3) && a150 == 4))) {
printf("POINT: 292\n");
    	cf = 0;
printf("POINT: 293\n");

    	if(((!(a125 == 35) || a12 == 36) && a98 == 7)) {
printf("POINT: 294\n");
    	a179 = 32 ;
    	a68 = 3;
    	a45 = 32 ;
    	a55 = 32 ;
    	a150 = 5;
    	a88 = 32 ;
    	a26 = 3;
    	a134 = 15;
    	a141 = 32 ;
    	a109 = 32 ;
    	a12 = 32 ;
    	a2 = 3;
    	a16 = 9;
    	a140 = 5;
    	a0 = 32 ;
    	a48 = 34 ;
    	a193 = 8;
    	a144 = 33 ;
    	a174 = 8;
    	a146 = 32 ;
    	a32 = 33 ;
    	a114 = 14;
    	a187 = 5;
    	a125 = 32 ;
    	a84 = 32 ;
    	a79 = 6;
    	a165 = 32 ;
    	a200 = 35 ;
    	a105 = 10;
    	a160 = 33 ;
    	a28 = 10;
    	a8 = 12; 
    	}else {
printf("POINT: 296\n");
    	a48 = 34 ;
    	a30 = 33 ;
    	a200 = 36 ;
    	a90 = 32 ;
    	a88 = 32 ;
    	a126 = 4;
    	a15 = 10;
    	a42 = 32 ;
    	a55 = 32 ;
    	a12 = 32 ;
    	a174 = 7;
    	a146 = 32 ;
    	a28 = 10;
    	a193 = 9;
    	a26 = 3;
    	a158 = 7;
    	a0 = 32 ;
    	a95 = 9;
    	a150 = 5;
    	a165 = 32 ;
    	a187 = 4;
    	a68 = 3;
    	a32 = 33 ;
    	a144 = 33 ;
    	a105 = 10;
    	a115 = 33 ;
    	a25 = 5;
    	a160 = 33 ;
    	a46 = 32 ;
    	a141 = 32 ;
    	a64 = 11;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 297\n");

    if(((a88 == 33 && ((input == 7) &&  cf==1 )) && ((a146 == 33 && ((a193 == 7 && a104 == 33) && a90 == 33)) && a88 == 33))) {
printf("POINT: 298\n");
    	cf = 0;
    	a105 = 12;
    	a140 = 6;
    	a81 = 10;
    	a179 = 32 ;
    	a16 = 11;
    	a65 = 11;
    	a150 = 5;
    	a37 = 9;
    	a25 = 5;
    	a109 = 32 ;
    	a101 = 34 ;
    	a141 = 32 ;
    	a12 = 32 ;
    	a30 = 34 ;
    	a135 = 11;
    	a22 = 9;
    	a174 = 8;
    	a115 = 34 ;
    	a160 = 34 ;
    	a187 = 5;
    	a128 = 3;
    	a88 = 32 ;
    	a104 = 34 ;
    	a154 = 34 ;
    	a200 = 34 ;
    	a125 = 32 ;
    	a196 = 7;
    	a34 = 34 ;
    	a26 = 4;
    	a68 = 3;
    	a95 = 10;
    	a32 = 34 ;
    	a53 = 34 ;
    	a165 = 32 ;
    	a39 = 9;
    	a79 = 7;
    	a144 = 34 ;
    	a119 = 34 ;
    	a184 = 6;
    	a97 = 5;
    	a146 = 34 ;
    	a28 = 11;
    	a15 = 10;
    	a45 = 34 ;
    	a127 = 8;
    	a197 = 8;
    	a69 = 32 ;
    	a126 = 4;
    	a0 = 32 ;
    	a56 = 10;
    	a90 = 32 ;
    	a112 = 34 ;
    	a46 = 34 ;
    	a55 = 34 ;
    	a110 = 7;
    	a118 = 34 ;
    	a17 = 34 ;
    	a180 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 299\n");

    if((((a95 == 8 && a184 == 5) && a12 == 33) && (a184 == 5 && (a26 == 2 && (( cf==1  && (input == 9)) && a187 == 3))))) {
printf("POINT: 300\n");
    	cf = 0;
    	a200 = 32 ;
    	a165 = 32 ;
    	a84 = 32 ;
    	a79 = 6;
    	a68 = 3;
    	a26 = 3;
    	a184 = 6;
    	a88 = 32 ;
    	a15 = 10;
    	a198 = 34 ;
    	a58 = 5;
    	a0 = 32 ;
    	a193 = 8;
    	a112 = 32 ;
    	a37 = 9;
    	a95 = 9;
    	a187 = 4;
    	a141 = 32 ;
    	a146 = 32 ;
    	a12 = 32 ;
    	a150 = 5;
    	a46 = 32 ;
    	a104 = 32 ;
    	a72 = 4; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 301\n");

    if(((a79 == 5 && (a141 == 33 && a88 == 33)) && (a28 == 9 && ((((input == 5) &&  cf==1 ) && a0 == 33) && a0 == 33)))) {
printf("POINT: 302\n");
    	cf = 0;
    	a79 = 7;
    	a12 = 32 ;
    	a97 = 5;
    	a30 = 34 ;
    	a34 = 34 ;
    	a68 = 3;
    	a81 = 10;
    	a56 = 10;
    	a144 = 34 ;
    	a184 = 6;
    	a146 = 34 ;
    	a140 = 6;
    	a104 = 34 ;
    	a65 = 11;
    	a69 = 32 ;
    	a39 = 9;
    	a115 = 34 ;
    	a28 = 11;
    	a187 = 5;
    	a165 = 32 ;
    	a154 = 34 ;
    	a0 = 32 ;
    	a128 = 3;
    	a110 = 7;
    	a109 = 32 ;
    	a150 = 5;
    	a127 = 8;
    	a46 = 34 ;
    	a25 = 5;
    	a37 = 9;
    	a105 = 12;
    	a112 = 34 ;
    	a135 = 11;
    	a45 = 34 ;
    	a197 = 8;
    	a141 = 32 ;
    	a119 = 34 ;
    	a55 = 34 ;
    	a174 = 8;
    	a17 = 34 ;
    	a88 = 32 ;
    	a16 = 11;
    	a125 = 32 ;
    	a180 = 34 ;
    	a53 = 34 ;
    	a179 = 32 ;
    	a160 = 34 ;
    	a126 = 4;
    	a101 = 34 ;
    	a90 = 32 ;
    	a196 = 7;
    	a118 = 34 ;
    	a22 = 9;
    	a15 = 10;
    	a95 = 10;
    	a200 = 34 ;
    	a32 = 34 ;
    	a26 = 4;
    	a190 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm5(int input) {
printf("POINT: 303\n");

    if(((a120 == 5 && (a28 == 9 && a2 == 3)) && (((( cf==1  && a29 == 33) && a110 == 5) && a25 == 4) && a56 == 8))) {
printf("POINT: 304\n");
printf("POINT: 305\n");

    	if((((a46 == 33 && ( cf==1  && a123 == 6)) && a174 == 7) && ((a104 == 33 && (a41 == 33 && a15 == 9)) && a165 == 33))) {
printf("POINT: 306\n");
    		calculate_outputm56(input);
    	} 
    } 
printf("POINT: 307\n");

    if((((a109 == 33 && a112 == 33) && a112 == 33) && (a84 == 33 && ((a140 == 4 && (a29 == 34 &&  cf==1 )) && a37 == 8)))) {
printf("POINT: 308\n");
printf("POINT: 309\n");

    	if(((((a184 == 5 && ( cf==1  && a162 == 33)) && a115 == 33) && a174 == 7) && (a16 == 9 && (a16 == 9 && a112 == 33)))) {
printf("POINT: 310\n");
    		calculate_outputm57(input);
    	} 
printf("POINT: 311\n");

    	if((a84 == 33 && (a165 == 33 && (a46 == 33 && (a55 == 33 && ((( cf==1  && a162 == 32) && a110 == 5) && a165 == 33)))))) {
printf("POINT: 312\n");
    		calculate_outputm58(input);
    	} 
    } 
}
 void calculate_outputm59(int input) {
printf("POINT: 313\n");

    if((((a34 == 32 && ( cf==1  && (input == 7))) && a79 == 6) && ((a95 == 9 && (a69 == 32 && a196 == 6)) && a84 == 32))) {
printf("POINT: 314\n");
    	cf = 0;
    	a22 = 7;
    	a158 = 12;
    	a51 = 33 ;
    	a200 = 36 ;
    	a179 = 33 ;
    	a62 = 6;
    	a71 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 315\n");

    if(((a146 == 32 && ((((input == 10) &&  cf==1 ) && a179 == 32) && a101 == 32)) && (a160 == 32 && (a127 == 7 && a90 == 32)))) {
printf("POINT: 316\n");
    	cf = 0;
    	a200 = 36 ;
    	a22 = 7;
    	a158 = 12;
    	a62 = 6;
    	a179 = 33 ;
    	a51 = 33 ;
    	a71 = 13; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 317\n");

    if((((a127 == 7 && (a41 == 32 && a160 == 32)) && a51 == 32) && ((( cf==1  && (input == 1)) && a22 == 8) && a28 == 10))) {
printf("POINT: 318\n");
    	cf = 0;
    	a41 = 34 ;
    	a158 = 7;
    	a160 = 34 ;
    	a53 = 34 ;
    	a93 = 4;
    	a152 = 10;
    	a109 = 34 ;
    	a125 = 34 ;
    	a104 = 34 ;
    	a167 = 3;
    	a154 = 32 ;
    	a32 = 34 ;
    	a48 = 34 ;
    	a97 = 5;
    	a105 = 11;
    	a37 = 10;
    	a169 = 34 ;
    	a140 = 5;
    	a180 = 34 ;
    	a153 = 5;
    	a25 = 6;
    	a110 = 7;
    	a119 = 32 ;
    	a68 = 3;
    	a184 = 7;
    	a15 = 11;
    	a137 = 34 ;
    	a174 = 8;
    	a118 = 34 ;
    	a127 = 8;
    	a26 = 4;
    	a200 = 36 ;
    	a187 = 5;
    	a55 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm60(int input) {
printf("POINT: 319\n");

    if(((a184 == 6 && (((a127 == 7 && (a93 == 3 && a97 == 4)) && a39 == 8) && a119 == 32)) && ((input == 1) &&  cf==1 ))) {
printf("POINT: 320\n");
    	cf = 0;
    	a16 = 10;
    	a15 = 16;
    	a169 = 32 ;
    	a184 = 12;
    	a39 = 11;
    	a105 = 10;
    	a20 = 6;
    	a2 = 4;
    	a115 = 33 ;
    	a53 = 36 ;
    	a69 = 35 ;
    	a174 = 12;
    	a84 = 36 ;
    	a200 = 34 ;
    	a12 = 36 ;
    	a125 = 32 ;
    	a167 = 1;
    	a17 = 33 ;
    	a187 = 8;
    	a79 = 6;
    	a25 = 11;
    	a101 = 35 ;
    	a152 = 15;
    	a32 = 33 ;
    	a180 = 33 ;
    	a90 = 33 ;
    	a121 = 32 ;
    	a28 = 13;
    	a26 = 5;
    	a140 = 9;
    	a68 = 5;
    	a81 = 11;
    	a56 = 12;
    	a45 = 35 ;
    	a120 = 8;
    	a37 = 14;
    	a150 = 8;
    	a97 = 6;
    	a41 = 35 ;
    	a98 = 8;
    	a160 = 32 ;
    	a65 = 15;
    	a126 = 6;
    	a141 = 36 ;
    	a146 = 35 ;
    	a30 = 35 ;
    	a109 = 36 ;
    	a104 = 36 ;
    	a128 = 1;
    	a51 = 32 ;
    	a154 = 32 ;
    	a179 = 32 ;
    	a48 = 35 ;
    	a118 = 32 ;
    	a153 = 10;
    	a110 = 12;
    	a135 = 14;
    	a175 = 15; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 321\n");

    if(((a41 == 32 && ((((input == 7) &&  cf==1 ) && a126 == 4) && a41 == 32)) && (a65 == 10 && (a101 == 32 && a160 == 32)))) {
printf("POINT: 322\n");
    	cf = 0;
    	a184 = 12;
    	a105 = 13;
    	a125 = 32 ;
    	a160 = 32 ;
    	a45 = 36 ;
    	a118 = 36 ;
    	a53 = 36 ;
    	a93 = 4;
    	a193 = 12;
    	a150 = 8;
    	a120 = 12;
    	a79 = 9;
    	a144 = 35 ;
    	a180 = 36 ;
    	a17 = 34 ;
    	a55 = 32 ;
    	a119 = 35 ;
    	a41 = 34 ;
    	a65 = 13;
    	a158 = 12;
    	a62 = 11;
    	a46 = 32 ;
    	a2 = 3;
    	a110 = 11;
    	a167 = 4;
    	a81 = 13;
    	a97 = 9;
    	a37 = 14;
    	a128 = 7;
    	a152 = 13;
    	a200 = 36 ;
    	a112 = 36 ;
    	a84 = 35 ;
    	a196 = 9;
    	a140 = 6;
    	a22 = 13;
    	a49 = 9; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 323\n");

    if(((a2 == 4 && a101 == 32) && (a30 == 32 && (a109 == 32 && (a68 == 3 && (((input == 8) &&  cf==1 ) && a93 == 3)))))) {
printf("POINT: 324\n");
    	cf = 0;
    	a37 = 10;
    	a39 = 14;
    	a68 = 5;
    	a0 = 34 ;
    	a105 = 14;
    	a45 = 36 ;
    	a115 = 35 ;
    	a180 = 35 ;
    	a140 = 11;
    	a95 = 12;
    	a144 = 35 ;
    	a165 = 33 ;
    	a32 = 33 ;
    	a131 = 11;
    	a20 = 3;
    	a26 = 4;
    	a69 = 36 ;
    	a121 = 36 ;
    	a187 = 8;
    	a179 = 35 ;
    	a53 = 32 ;
    	a30 = 35 ;
    	a128 = 1;
    	a169 = 35 ;
    	a184 = 10;
    	a150 = 10;
    	a178 = 36 ;
    	a25 = 4;
    	a200 = 34 ;
    	a34 = 33 ;
    	a84 = 35 ;
    	a12 = 35 ;
    	a51 = 34 ;
    	a153 = 9;
    	a176 = 8;
    	a79 = 6;
    	a152 = 15;
    	a17 = 33 ;
    	a110 = 11;
    	a101 = 36 ;
    	a167 = 7;
    	a88 = 36 ;
    	a48 = 33 ;
    	a55 = 33 ;
    	a15 = 9;
    	a118 = 36 ;
    	a46 = 33 ;
    	a41 = 33 ;
    	a141 = 33 ;
    	a160 = 34 ;
    	a65 = 15;
    	a154 = 35 ;
    	a127 = 11;
    	a90 = 34 ;
    	a146 = 35 ;
    	a9 = 34 ;
    	a2 = 10;
    	a97 = 10;
    	a119 = 32 ;
    	a174 = 11;
    	a16 = 13;
    	a109 = 35 ;
    	a120 = 9;
    	a104 = 32 ;
    	a56 = 11;
    	a125 = 33 ;
    	a81 = 17;
    	a28 = 9;
    	a93 = 9;
    	a126 = 3;
    	a135 = 13; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 325\n");

    if((( cf==1  && (input == 4)) && (a118 == 32 && (a128 == 2 && (a26 == 3 && (a109 == 32 && (a84 == 32 && a79 == 6))))))) {
printf("POINT: 326\n");
    	cf = 0;
printf("POINT: 327\n");

    	if((((a89 == 35 && a97 == 8) || !(a54 == 34)) || a76 == 8)) {
printf("POINT: 328\n");
    	a193 = 11;
    	a93 = 7;
    	a160 = 35 ;
    	a26 = 8;
    	a158 = 7;
    	a137 = 34 ;
    	a167 = 5;
    	a187 = 6;
    	a112 = 35 ;
    	a118 = 36 ;
    	a152 = 9;
    	a144 = 36 ;
    	a48 = 33 ;
    	a125 = 35 ;
    	a110 = 5;
    	a15 = 14;
    	a41 = 32 ;
    	a22 = 14;
    	a25 = 8;
    	a180 = 35 ;
    	a53 = 36 ;
    	a109 = 33 ;
    	a32 = 35 ;
    	a184 = 5;
    	a127 = 10;
    	a169 = 32 ;
    	a37 = 11;
    	a153 = 3;
    	a200 = 36 ;
    	a196 = 10;
    	a97 = 7;
    	a104 = 32 ;
    	a64 = 10; 
    	}else {
printf("POINT: 330\n");

    	}printf("%d\n", 18);  
    } 
printf("POINT: 331\n");

    if((((( cf==1  && (input == 5)) && a97 == 4) && a152 == 9) && ((a109 == 32 && (a105 == 11 && a109 == 32)) && a17 == 32))) {
printf("POINT: 332\n");
    	cf = 0;
printf("POINT: 333\n");

    	if((!(a0 == 36) || (a164 == 13 && a100 == 32))) {
printf("POINT: 334\n");
    	a32 = 33 ;
    	a69 = 34 ;
    	a126 = 5;
    	a183 = 12;
    	a120 = 9;
    	a15 = 12;
    	a45 = 36 ;
    	a97 = 8;
    	a174 = 10;
    	a158 = 10;
    	a144 = 33 ;
    	a112 = 36 ;
    	a179 = 36 ;
    	a25 = 4;
    	a26 = 2;
    	a196 = 9;
    	a115 = 35 ;
    	a109 = 35 ;
    	a193 = 14;
    	a22 = 9;
    	a150 = 7;
    	a84 = 35 ;
    	a79 = 9;
    	a95 = 10;
    	a2 = 3;
    	a165 = 34 ;
    	a68 = 7;
    	a56 = 11;
    	a53 = 35 ;
    	a105 = 12;
    	a125 = 32 ;
    	a55 = 36 ;
    	a110 = 8;
    	a101 = 33 ;
    	a128 = 5;
    	a104 = 35 ;
    	a118 = 36 ;
    	a169 = 36 ;
    	a154 = 36 ;
    	a121 = 36 ;
    	a200 = 36 ;
    	a140 = 11;
    	a184 = 9;
    	a152 = 11;
    	a90 = 33 ;
    	a7 = 7; 
    	}else {
printf("POINT: 336\n");
    	a193 = 11;
    	a37 = 8;
    	a15 = 13;
    	a60 = 8;
    	a198 = 35 ;
    	a119 = 33 ;
    	a120 = 8;
    	a25 = 5;
    	a179 = 36 ;
    	a153 = 4;
    	a146 = 36 ;
    	a22 = 10;
    	a176 = 9;
    	a53 = 33 ;
    	a169 = 36 ;
    	a112 = 36 ;
    	a65 = 14;
    	a105 = 11;
    	a2 = 4;
    	a141 = 32 ;
    	a93 = 3;
    	a62 = 4;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 337\n");

    if((((a152 == 9 && (a88 == 32 && (a97 == 4 && ((input == 6) &&  cf==1 )))) && a39 == 8) && (a187 == 4 && a39 == 8))) {
printf("POINT: 338\n");
    	cf = 0;
    	a140 = 7;
    	a179 = 33 ;
    	a65 = 12;
    	a169 = 33 ;
    	a139 = 35 ;
    	a176 = 5;
    	a93 = 9;
    	a53 = 32 ;
    	a112 = 35 ;
    	a22 = 9;
    	a105 = 17;
    	a119 = 32 ;
    	a100 = 34 ;
    	a200 = 35 ;
    	a25 = 8;
    	a15 = 9;
    	a141 = 35 ;
    	a120 = 11;
    	a187 = 10;
    	a193 = 14;
    	a37 = 11;
    	a128 = 5;
    	a2 = 7;
    	a153 = 10;
    	a121 = 32 ;
    	a146 = 36 ;
    	a16 = 16;
    	a134 = 14; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 339\n");

    if(((a55 == 32 && (a97 == 4 && (a30 == 32 && (a154 == 32 && a174 == 8)))) && (a95 == 9 && ( cf==1  && (input == 9))))) {
printf("POINT: 340\n");
    	cf = 0;
    	a17 = 34 ;
    	a79 = 9;
    	a146 = 33 ;
    	a180 = 36 ;
    	a128 = 2;
    	a101 = 36 ;
    	a140 = 9;
    	a104 = 33 ;
    	a158 = 11;
    	a37 = 9;
    	a15 = 14;
    	a39 = 14;
    	a105 = 14;
    	a112 = 35 ;
    	a16 = 13;
    	a184 = 6;
    	a90 = 33 ;
    	a153 = 9;
    	a120 = 6;
    	a127 = 10;
    	a126 = 6;
    	a36 = 34 ;
    	a95 = 10;
    	a32 = 32 ;
    	a118 = 34 ;
    	a51 = 35 ;
    	a45 = 34 ;
    	a160 = 32 ;
    	a46 = 35 ;
    	a144 = 33 ;
    	a55 = 35 ;
    	a200 = 36 ;
    	a22 = 12;
    	a154 = 32 ;
    	a41 = 32 ;
    	a68 = 9;
    	a69 = 34 ;
    	a185 = 13; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 341\n");

    if(((a115 == 32 && ((a125 == 32 && a90 == 32) && a169 == 32)) && ((((input == 2) &&  cf==1 ) && a154 == 32) && a15 == 10))) {
printf("POINT: 342\n");
    	cf = 0;
printf("POINT: 343\n");

    	if((!(a190 == 15) || (a177 == 17 && ((a121 == 32 || a37 == 14) && !(a115 == 33))))) {
printf("POINT: 344\n");
    	a101 = 33 ;
    	a119 = 34 ;
    	a127 = 11;
    	a178 = 33 ;
    	a196 = 12;
    	a193 = 11;
    	a144 = 34 ;
    	a169 = 33 ;
    	a2 = 8;
    	a187 = 3;
    	a200 = 35 ;
    	a30 = 36 ;
    	a20 = 6;
    	a105 = 10;
    	a109 = 33 ;
    	a25 = 8;
    	a68 = 8;
    	a88 = 34 ;
    	a31 = 33 ;
    	a69 = 35 ;
    	a22 = 10;
    	a128 = 4;
    	a126 = 8;
    	a174 = 7;
    	a32 = 36 ;
    	a46 = 34 ;
    	a125 = 34 ;
    	a94 = 32 ;
    	a41 = 33 ;
    	a160 = 34 ;
    	a180 = 35 ;
    	a45 = 33 ;
    	a176 = 9;
    	a28 = 11;
    	a39 = 9;
    	a134 = 12; 
    	}else {
printf("POINT: 346\n");
    	a51 = 33 ;
    	a97 = 10;
    	a125 = 33 ;
    	a121 = 33 ;
    	a144 = 35 ;
    	a17 = 35 ;
    	a154 = 35 ;
    	a118 = 33 ;
    	a180 = 36 ;
    	a196 = 5;
    	a200 = 36 ;
    	a28 = 12;
    	a68 = 9;
    	a37 = 9;
    	a25 = 8;
    	a178 = 36 ;
    	a150 = 10;
    	a104 = 35 ;
    	a128 = 1;
    	a65 = 16;
    	a32 = 32 ;
    	a184 = 9;
    	a165 = 33 ;
    	a2 = 9;
    	a101 = 35 ;
    	a158 = 6;
    	a193 = 14;
    	a22 = 7;
    	a169 = 35 ;
    	a152 = 14;
    	a167 = 8;
    	a56 = 12;
    	a16 = 15;
    	a109 = 33 ;
    	a90 = 35 ;
    	a48 = 32 ;
    	a39 = 12;
    	a26 = 3;
    	a79 = 5;
    	a174 = 10;
    	a112 = 36 ;
    	a47 = 34 ;
    	a69 = 35 ;
    	a120 = 5;
    	a95 = 12;
    	a53 = 35 ;
    	a183 = 16;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 347\n");

    if((((((a126 == 4 && (a84 == 32 && ((input == 10) &&  cf==1 ))) && a17 == 32) && a140 == 5) && a2 == 4) && a174 == 8)) {
printf("POINT: 348\n");
    	cf = 0;
printf("POINT: 349\n");

    	if((((a53 == 36 && !(a184 == 8)) || !(a155 == 36)) || a126 == 10)) {
printf("POINT: 350\n");
    	a90 = 34 ;
    	a32 = 36 ;
    	a196 = 11;
    	a79 = 7;
    	a104 = 32 ;
    	a193 = 10;
    	a22 = 7;
    	a95 = 15;
    	a17 = 36 ;
    	a141 = 35 ;
    	a160 = 35 ;
    	a16 = 13;
    	a84 = 36 ;
    	a136 = 14;
    	a110 = 7;
    	a56 = 12;
    	a97 = 7;
    	a28 = 14;
    	a26 = 2;
    	a120 = 8;
    	a140 = 7;
    	a153 = 10;
    	a158 = 9;
    	a179 = 36 ;
    	a48 = 33 ;
    	a81 = 16;
    	a167 = 8;
    	a53 = 34 ;
    	a37 = 15;
    	a200 = 36 ;
    	a184 = 6;
    	a152 = 11;
    	a144 = 34 ;
    	a15 = 16;
    	a112 = 36 ;
    	a109 = 35 ;
    	a49 = 12; 
    	}else {
printf("POINT: 352\n");
    	a200 = 36 ;
    	a112 = 34 ;
    	a144 = 35 ;
    	a62 = 8;
    	a22 = 7;
    	a196 = 5;
    	a158 = 12;
    	a11 = 8;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 353\n");

    if((((a16 == 10 && ( cf==1  && (input == 3))) && a140 == 5) && ((a37 == 9 && (a176 == 3 && a45 == 32)) && a16 == 10))) {
printf("POINT: 354\n");
    	cf = 0;
printf("POINT: 355\n");

    	if(((!(a76 == 8) && (!(a94 == 34) && a162 == 34)) || a70 == 32)) {
printf("POINT: 356\n");
    	a140 = 10;
    	a126 = 7;
    	a109 = 35 ;
    	a128 = 7;
    	a46 = 32 ;
    	a121 = 32 ;
    	a48 = 35 ;
    	a150 = 7;
    	a135 = 8;
    	a53 = 32 ;
    	a0 = 32 ;
    	a187 = 10;
    	a153 = 9;
    	a174 = 13;
    	a137 = 36 ;
    	a22 = 14;
    	a119 = 35 ;
    	a125 = 35 ;
    	a104 = 32 ;
    	a97 = 6;
    	a200 = 34 ;
    	a15 = 13;
    	a25 = 7;
    	a88 = 36 ;
    	a81 = 11;
    	a169 = 33 ;
    	a101 = 36 ;
    	a84 = 35 ;
    	a28 = 14;
    	a141 = 36 ;
    	a34 = 32 ;
    	a39 = 13;
    	a51 = 35 ;
    	a180 = 36 ;
    	a56 = 9;
    	a146 = 33 ;
    	a131 = 14;
    	a17 = 33 ;
    	a12 = 32 ;
    	a90 = 35 ;
    	a160 = 33 ;
    	a115 = 35 ;
    	a110 = 6;
    	a20 = 9;
    	a176 = 2;
    	a37 = 14;
    	a93 = 7;
    	a105 = 17;
    	a152 = 13;
    	a127 = 10;
    	a13 = 8; 
    	}else {
printf("POINT: 358\n");
    	a187 = 10;
    	a84 = 32 ;
    	a37 = 13;
    	a94 = 32 ;
    	a81 = 14;
    	a55 = 36 ;
    	a47 = 35 ;
    	a160 = 36 ;
    	a200 = 36 ;
    	a144 = 36 ;
    	a196 = 9;
    	a28 = 10;
    	a22 = 9;
    	a109 = 35 ;
    	a193 = 13;
    	a112 = 36 ;
    	a158 = 6;
    	}printf("%d\n", 15);  
    } 
}
 void calculate_outputm61(int input) {
printf("POINT: 359\n");

    if(((a88 == 32 && (a84 == 32 && a68 == 3)) && ((a160 == 32 && (( cf==1  && (input == 4)) && a118 == 32)) && a34 == 32))) {
printf("POINT: 360\n");
    	cf = 0;
    	a174 = 9;
    	a193 = 11;
    	a152 = 10;
    	a200 = 36 ;
    	a184 = 10;
    	a126 = 5;
    	a62 = 6;
    	a55 = 34 ;
    	a65 = 12;
    	a154 = 36 ;
    	a179 = 35 ;
    	a68 = 8;
    	a140 = 7;
    	a146 = 34 ;
    	a12 = 36 ;
    	a158 = 12;
    	a22 = 11;
    	a51 = 32 ;
    	a71 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 361\n");

    if((((input == 6) &&  cf==1 ) && (((a115 == 32 && ((a25 == 5 && a16 == 10) && a97 == 4)) && a187 == 4) && a104 == 32))) {
printf("POINT: 362\n");
    	cf = 0;
    	a30 = 34 ;
    	a135 = 12;
    	a0 = 35 ;
    	a167 = 6;
    	a45 = 36 ;
    	a154 = 32 ;
    	a150 = 9;
    	a2 = 3;
    	a20 = 9;
    	a28 = 11;
    	a180 = 35 ;
    	a68 = 7;
    	a121 = 35 ;
    	a81 = 13;
    	a196 = 8;
    	a46 = 33 ;
    	a141 = 36 ;
    	a17 = 35 ;
    	a120 = 8;
    	a104 = 33 ;
    	a94 = 32 ;
    	a90 = 35 ;
    	a12 = 33 ;
    	a32 = 36 ;
    	a97 = 6;
    	a118 = 32 ;
    	a144 = 35 ;
    	a179 = 33 ;
    	a176 = 6;
    	a37 = 14;
    	a112 = 33 ;
    	a16 = 15;
    	a152 = 9;
    	a53 = 36 ;
    	a160 = 35 ;
    	a187 = 10;
    	a127 = 11;
    	a79 = 7;
    	a174 = 8;
    	a165 = 35 ;
    	a41 = 32 ;
    	a153 = 4;
    	a109 = 33 ;
    	a193 = 13;
    	a15 = 12;
    	a25 = 10;
    	a131 = 14;
    	a26 = 9;
    	a55 = 36 ;
    	a146 = 32 ;
    	a88 = 36 ;
    	a125 = 32 ;
    	a200 = 34 ;
    	a84 = 35 ;
    	a69 = 32 ;
    	a22 = 13;
    	a110 = 5;
    	a169 = 35 ;
    	a115 = 36 ;
    	a65 = 9;
    	a93 = 2;
    	a119 = 36 ;
    	a39 = 7;
    	a105 = 11;
    	a51 = 36 ;
    	a56 = 13;
    	a101 = 32 ;
    	a48 = 36 ;
    	a184 = 11;
    	a178 = 35 ;
    	a126 = 7;
    	a128 = 3;
    	a34 = 33 ;
    	a140 = 11;
    	a95 = 12;
    	a156 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 363\n");

    if(((a101 == 32 && a45 == 32) && ((a28 == 10 && (a174 == 8 && (((input == 2) &&  cf==1 ) && a121 == 32))) && a95 == 9))) {
printf("POINT: 364\n");
    	cf = 0;
printf("POINT: 365\n");

    	if(((!(a1 == 35) && ((a15 == 15 && a77 == 6) && a16 == 16)) && a74 == 36)) {
printf("POINT: 366\n");
    	a126 = 8;
    	a163 = 33 ;
    	a196 = 7;
    	a146 = 36 ;
    	a152 = 14;
    	a118 = 32 ;
    	a193 = 12;
    	a109 = 33 ;
    	a105 = 13;
    	a12 = 35 ;
    	a184 = 11;
    	a140 = 6;
    	a160 = 32 ;
    	a48 = 32 ;
    	a120 = 12;
    	a158 = 13;
    	a101 = 35 ;
    	a17 = 32 ;
    	a65 = 13;
    	a200 = 36 ;
    	a125 = 36 ;
    	a179 = 35 ;
    	a167 = 7;
    	a119 = 33 ;
    	a6 = 9; 
    	}else {
printf("POINT: 368\n");

    	}printf("%d\n", 17);  
    } 
printf("POINT: 369\n");

    if((((a140 == 5 && (a184 == 6 && ((input == 8) &&  cf==1 ))) && a196 == 6) && ((a48 == 32 && a32 == 32) && a167 == 2))) {
printf("POINT: 370\n");
    	cf = 0;
    	a45 = 32 ;
    	a84 = 36 ;
    	a22 = 7;
    	a17 = 33 ;
    	a15 = 12;
    	a88 = 36 ;
    	a179 = 33 ;
    	a193 = 14;
    	a127 = 12;
    	a2 = 7;
    	a20 = 7;
    	a25 = 10;
    	a144 = 36 ;
    	a105 = 15;
    	a153 = 3;
    	a12 = 35 ;
    	a184 = 5;
    	a140 = 8;
    	a174 = 13;
    	a128 = 1;
    	a126 = 10;
    	a93 = 6;
    	a112 = 33 ;
    	a41 = 34 ;
    	a165 = 33 ;
    	a119 = 35 ;
    	a16 = 11;
    	a118 = 34 ;
    	a65 = 16;
    	a146 = 35 ;
    	a97 = 5;
    	a48 = 35 ;
    	a141 = 36 ;
    	a176 = 5;
    	a81 = 15;
    	a125 = 35 ;
    	a90 = 36 ;
    	a51 = 33 ;
    	a120 = 10;
    	a131 = 13;
    	a39 = 14;
    	a109 = 36 ;
    	a160 = 36 ;
    	a196 = 6;
    	a32 = 33 ;
    	a198 = 36 ;
    	a69 = 33 ;
    	a101 = 34 ;
    	a3 = 34 ;
    	a34 = 35 ;
    	a147 = 3; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 371\n");

    if(((a184 == 6 && (a26 == 3 && ( cf==1  && (input == 3)))) && (a120 == 6 && (a25 == 5 && (a179 == 32 && a51 == 32))))) {
printf("POINT: 372\n");
    	cf = 0;
    	a97 = 3;
    	a141 = 36 ;
    	a93 = 2;
    	a51 = 35 ;
    	a184 = 8;
    	a37 = 14;
    	a118 = 35 ;
    	a121 = 34 ;
    	a90 = 36 ;
    	a32 = 33 ;
    	a200 = 33 ;
    	a41 = 36 ;
    	a174 = 8;
    	a17 = 33 ;
    	a119 = 35 ;
    	a150 = 11;
    	a86 = 36 ;
    	a128 = 3;
    	a176 = 9;
    	a110 = 12;
    	a167 = 8;
    	a153 = 6;
    	a109 = 36 ;
    	a25 = 5;
    	a154 = 34 ;
    	a34 = 34 ;
    	a140 = 8;
    	a84 = 35 ;
    	a115 = 36 ;
    	a95 = 13;
    	a178 = 35 ;
    	a46 = 32 ;
    	a45 = 34 ;
    	a187 = 10;
    	a144 = 34 ;
    	a160 = 33 ;
    	a65 = 9;
    	a101 = 34 ;
    	a104 = 35 ;
    	a81 = 17;
    	a16 = 14;
    	a179 = 35 ;
    	a26 = 7;
    	a0 = 32 ;
    	a22 = 12;
    	a180 = 35 ;
    	a56 = 15;
    	a30 = 35 ;
    	a127 = 11;
    	a53 = 34 ;
    	a68 = 4;
    	a152 = 13;
    	a131 = 11;
    	a120 = 12;
    	a28 = 12;
    	a48 = 33 ;
    	a20 = 7;
    	a169 = 34 ;
    	a2 = 5;
    	a79 = 12;
    	a15 = 10;
    	a55 = 36 ;
    	a105 = 10;
    	a112 = 35 ;
    	a165 = 34 ;
    	a196 = 9;
    	a39 = 12;
    	a88 = 36 ;
    	a29 = 34 ;
    	a69 = 36 ;
    	a162 = 32 ; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 373\n");

    if(((a154 == 32 && (a131 == 10 && (a169 == 32 && ((input == 1) &&  cf==1 )))) && ((a160 == 32 && a53 == 32) && a15 == 10))) {
printf("POINT: 374\n");
    	cf = 0;
printf("POINT: 375\n");

    	if(a156 == 10) {
printf("POINT: 376\n");
    	a20 = 7;
    	a28 = 13;
    	a54 = 36 ;
    	a53 = 36 ;
    	a32 = 32 ;
    	a69 = 36 ;
    	a84 = 35 ;
    	a55 = 36 ;
    	a97 = 8;
    	a141 = 34 ;
    	a115 = 35 ;
    	a112 = 35 ;
    	a174 = 13;
    	a198 = 32 ;
    	a17 = 36 ;
    	a118 = 36 ;
    	a81 = 17;
    	a110 = 9;
    	a15 = 12;
    	a135 = 13; 
    	}else {
printf("POINT: 378\n");
    	a193 = 13;
    	a126 = 6;
    	a53 = 32 ;
    	a134 = 15;
    	a84 = 36 ;
    	a20 = 4;
    	a12 = 34 ;
    	a119 = 33 ;
    	a104 = 32 ;
    	a146 = 36 ;
    	a125 = 34 ;
    	a200 = 35 ;
    	a65 = 9;
    	a128 = 8;
    	a17 = 35 ;
    	a167 = 1;
    	a112 = 33 ;
    	a74 = 33 ;
    	a105 = 10;
    	a118 = 35 ;
    	a114 = 16;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 379\n");

    if(((((a127 == 7 && a154 == 32) && a110 == 6) && a101 == 32) && (a160 == 32 && (a56 == 9 && ( cf==1  && (input == 10)))))) {
printf("POINT: 380\n");
    	cf = 0;
    	a15 = 12;
    	a179 = 33 ;
    	a0 = 35 ;
    	a53 = 35 ;
    	a84 = 36 ;
    	a135 = 9;
    	a140 = 10;
    	a118 = 35 ;
    	a178 = 32 ;
    	a39 = 13;
    	a104 = 36 ;
    	a12 = 34 ;
    	a184 = 5;
    	a101 = 35 ;
    	a109 = 32 ;
    	a30 = 32 ;
    	a22 = 9;
    	a88 = 35 ;
    	a55 = 36 ;
    	a69 = 34 ;
    	a125 = 36 ;
    	a120 = 9;
    	a32 = 35 ;
    	a131 = 14;
    	a193 = 12;
    	a20 = 6;
    	a112 = 34 ;
    	a56 = 10;
    	a115 = 35 ;
    	a200 = 34 ;
    	a154 = 33 ;
    	a167 = 7;
    	a169 = 36 ;
    	a121 = 34 ;
    	a126 = 8;
    	a164 = 9;
    	a81 = 12;
    	a128 = 1;
    	a141 = 36 ;
    	a45 = 35 ;
    	a17 = 32 ;
    	a176 = 6;
    	a95 = 11;
    	a153 = 6;
    	a174 = 13;
    	a2 = 8;
    	a187 = 9;
    	a105 = 10;
    	a146 = 32 ;
    	a144 = 33 ;
    	a150 = 10;
    	a110 = 6;
    	a97 = 4;
    	a65 = 16;
    	a160 = 33 ;
    	a16 = 15;
    	a119 = 34 ;
    	a180 = 36 ;
    	a127 = 9;
    	a37 = 11;
    	a51 = 36 ;
    	a46 = 36 ;
    	a196 = 9;
    	a152 = 13;
    	a90 = 33 ;
    	a48 = 36 ;
    	a34 = 36 ;
    	a25 = 9;
    	a68 = 8;
    	a79 = 5;
    	a26 = 6;
    	a28 = 9;
    	a93 = 6;
    	a165 = 33 ;
    	a41 = 35 ;
    	a157 = 6; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 381\n");

    if(((a17 == 32 && ((a176 == 3 && ((a28 == 10 && a30 == 32) && a109 == 32)) && a2 == 4)) && ((input == 7) &&  cf==1 ))) {
printf("POINT: 382\n");
    	cf = 0;
    	a200 = 36 ;
    	a125 = 35 ;
    	a65 = 12;
    	a146 = 33 ;
    	a184 = 9;
    	a105 = 10;
    	a119 = 33 ;
    	a126 = 10;
    	a47 = 35 ;
    	a193 = 13;
    	a94 = 36 ;
    	a118 = 32 ;
    	a12 = 36 ;
    	a26 = 7;
    	a158 = 6; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 383\n");

    if(((a144 == 32 && (a69 == 32 && (a95 == 9 && ((input == 9) &&  cf==1 )))) && (a167 == 2 && (a93 == 3 && a144 == 32)))) {
printf("POINT: 384\n");
    	cf = 0;
printf("POINT: 385\n");

    	if(a30 == 36) {
printf("POINT: 386\n");
    	a16 = 9;
    	a97 = 10;
    	a32 = 36 ;
    	a90 = 35 ;
    	a25 = 11;
    	a154 = 33 ;
    	a26 = 2;
    	a65 = 9;
    	a28 = 15;
    	a48 = 35 ;
    	a12 = 33 ;
    	a118 = 33 ;
    	a22 = 7;
    	a69 = 34 ;
    	a180 = 33 ;
    	a126 = 8;
    	a101 = 33 ;
    	a174 = 10;
    	a169 = 35 ;
    	a146 = 35 ;
    	a128 = 3;
    	a104 = 33 ;
    	a39 = 7;
    	a47 = 34 ;
    	a178 = 35 ;
    	a184 = 8;
    	a56 = 15;
    	a193 = 7;
    	a119 = 34 ;
    	a105 = 12;
    	a68 = 8;
    	a51 = 35 ;
    	a158 = 6;
    	a125 = 35 ;
    	a167 = 4;
    	a37 = 9;
    	a165 = 36 ;
    	a121 = 34 ;
    	a79 = 7;
    	a150 = 7;
    	a53 = 35 ;
    	a2 = 5;
    	a17 = 36 ;
    	a109 = 35 ;
    	a112 = 35 ;
    	a120 = 10;
    	a95 = 13;
    	a152 = 9;
    	a144 = 35 ;
    	a200 = 36 ;
    	a183 = 16; 
    	}else {
printf("POINT: 388\n");
    	a118 = 35 ;
    	a28 = 10;
    	a55 = 35 ;
    	a112 = 34 ;
    	a17 = 36 ;
    	a12 = 36 ;
    	a110 = 6;
    	a84 = 36 ;
    	a81 = 16;
    	a158 = 10;
    	a125 = 34 ;
    	a1 = 35 ;
    	a200 = 36 ;
    	a183 = 10;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 389\n");

    if((((a69 == 32 && (a46 == 32 && ((input == 5) &&  cf==1 ))) && a176 == 3) && (a128 == 2 && (a141 == 32 && a196 == 6)))) {
printf("POINT: 390\n");
    	cf = 0;
printf("POINT: 391\n");

    	if((a108 == 6 || a2 == 5)) {
printf("POINT: 392\n");
    	a12 = 35 ;
    	a65 = 16;
    	a119 = 34 ;
    	a146 = 36 ;
    	a60 = 8;
    	a125 = 33 ;
    	a126 = 8;
    	a198 = 35 ;
    	a62 = 10; 
    	}else {
printf("POINT: 394\n");
    	a22 = 7;
    	a131 = 11;
    	a12 = 34 ;
    	a179 = 36 ;
    	a53 = 33 ;
    	a140 = 8;
    	a93 = 9;
    	a193 = 14;
    	a118 = 35 ;
    	a28 = 10;
    	a154 = 36 ;
    	a146 = 32 ;
    	a153 = 7;
    	a2 = 6;
    	a125 = 32 ;
    	a86 = 34 ;
    	a68 = 2;
    	a128 = 2;
    	a119 = 34 ;
    	a126 = 6;
    	a30 = 34 ;
    	a144 = 35 ;
    	a196 = 8;
    	a39 = 12;
    	a45 = 33 ;
    	a187 = 4;
    	a34 = 33 ;
    	a97 = 10;
    	a65 = 12;
    	a88 = 34 ;
    	a56 = 15;
    	a55 = 33 ;
    	a90 = 34 ;
    	a46 = 35 ;
    	a160 = 36 ;
    	a105 = 13;
    	a48 = 33 ;
    	a167 = 6;
    	a152 = 15;
    	a32 = 33 ;
    	a51 = 34 ;
    	a66 = 10;
    	}printf("%d\n", 18);  
    } 
}
 void calculate_outputm62(int input) {
printf("POINT: 395\n");

    if(((a15 == 10 && (a146 == 32 && ((input == 5) &&  cf==1 ))) && (((a104 == 32 && a125 == 32) && a46 == 32) && a81 == 11))) {
printf("POINT: 396\n");
    	cf = 0;
    	a55 = 32 ;
    	a39 = 9;
    	a146 = 34 ;
    	a84 = 33 ;
    	a144 = 34 ;
    	a127 = 8;
    	a198 = 35 ;
    	a90 = 32 ;
    	a48 = 32 ;
    	a112 = 32 ;
    	a93 = 3;
    	a174 = 8;
    	a128 = 3;
    	a154 = 34 ;
    	a110 = 7;
    	a88 = 32 ;
    	a179 = 32 ;
    	a37 = 9;
    	a153 = 4;
    	a30 = 34 ;
    	a41 = 32 ;
    	a17 = 32 ;
    	a105 = 12;
    	a109 = 32 ;
    	a97 = 5;
    	a187 = 5;
    	a119 = 34 ;
    	a167 = 2;
    	a176 = 3;
    	a53 = 32 ;
    	a45 = 34 ;
    	a152 = 9;
    	a101 = 34 ;
    	a34 = 34 ;
    	a65 = 11;
    	a56 = 10;
    	a118 = 32 ;
    	a12 = 32 ;
    	a184 = 6;
    	a165 = 32 ;
    	a196 = 7;
    	a131 = 10;
    	a20 = 4;
    	a141 = 32 ;
    	a2 = 4;
    	a32 = 34 ;
    	a46 = 34 ;
    	a140 = 5;
    	a120 = 6;
    	a79 = 7;
    	a169 = 32 ;
    	a15 = 10;
    	a60 = 8;
    	a25 = 5;
    	a16 = 11;
    	a160 = 34 ;
    	a62 = 11; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 397\n");

    if((((a176 == 3 && (a15 == 10 && ((a146 == 32 && a68 == 3) && a115 == 32))) && a12 == 32) && ((input == 7) &&  cf==1 ))) {
printf("POINT: 398\n");
    	cf = 0;
    	a28 = 11;
    	a152 = 8;
    	a131 = 9;
    	a187 = 3;
    	a176 = 4;
    	a69 = 33 ;
    	a169 = 33 ;
    	a127 = 8;
    	a180 = 33 ;
    	a25 = 4;
    	a27 = 33 ;
    	a84 = 33 ;
    	a140 = 6;
    	a17 = 33 ;
    	a37 = 8;
    	a115 = 33 ;
    	a112 = 33 ;
    	a2 = 3;
    	a128 = 2;
    	a193 = 8;
    	a150 = 4;
    	a95 = 8;
    	a146 = 33 ;
    	a55 = 34 ;
    	a126 = 3;
    	a179 = 34 ;
    	a86 = 34 ;
    	a41 = 33 ;
    	a196 = 5;
    	a51 = 33 ;
    	a21 = 32 ;
    	a154 = 33 ;
    	a45 = 33 ;
    	a121 = 32 ;
    	a160 = 33 ;
    	a53 = 33 ;
    	a141 = 34 ;
    	a90 = 34 ;
    	a167 = 1;
    	a178 = 33 ;
    	a26 = 2;
    	a81 = 10;
    	a93 = 2;
    	a119 = 32 ;
    	a0 = 33 ;
    	a174 = 7;
    	a97 = 5;
    	a153 = 4;
    	a105 = 12;
    	a200 = 33 ;
    	a68 = 4;
    	a12 = 33 ;
    	a88 = 34 ;
    	a46 = 32 ;
    	a16 = 10;
    	a30 = 33 ;
    	a125 = 33 ;
    	a109 = 32 ;
    	a15 = 9;
    	a165 = 34 ;
    	a104 = 33 ;
    	a48 = 32 ;
    	a22 = 7; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 399\n");

    if((a93 == 3 && ((((a154 == 32 && (((input == 9) &&  cf==1 ) && a160 == 32)) && a154 == 32) && a121 == 32) && a26 == 3))) {
printf("POINT: 400\n");
    	cf = 0;
    	a28 = 11;
    	a20 = 3;
    	a118 = 33 ;
    	a125 = 33 ;
    	a131 = 11;
    	a69 = 34 ;
    	a32 = 33 ;
    	a81 = 10;
    	a79 = 5;
    	a34 = 33 ;
    	a84 = 34 ;
    	a68 = 4;
    	a178 = 33 ;
    	a180 = 34 ;
    	a0 = 34 ;
    	a200 = 34 ;
    	a167 = 3;
    	a45 = 34 ;
    	a169 = 33 ;
    	a109 = 32 ;
    	a12 = 34 ;
    	a176 = 4;
    	a144 = 33 ;
    	a193 = 8;
    	a121 = 32 ;
    	a160 = 33 ;
    	a150 = 4;
    	a65 = 9;
    	a91 = 36 ;
    	a95 = 8;
    	a187 = 5;
    	a154 = 33 ;
    	a15 = 9;
    	a2 = 3;
    	a127 = 8;
    	a22 = 9;
    	a128 = 3;
    	a93 = 2;
    	a115 = 34 ;
    	a146 = 34 ;
    	a120 = 5;
    	a56 = 8;
    	a110 = 5;
    	a184 = 5;
    	a48 = 32 ;
    	a39 = 7;
    	a46 = 34 ;
    	a135 = 14;
    	a51 = 33 ;
    	a119 = 34 ;
    	a126 = 3;
    	a104 = 34 ;
    	a26 = 4;
    	a16 = 11;
    	a153 = 4;
    	a101 = 33 ;
    	a98 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm63(int input) {
printf("POINT: 401\n");

    if(((a53 == 32 && ((a119 == 32 && a112 == 32) && a68 == 3)) && (a146 == 32 && (((input == 1) &&  cf==1 ) && a0 == 32)))) {
printf("POINT: 402\n");
    	cf = 0;
    	a165 = 34 ;
    	a94 = 32 ;
    	a55 = 34 ;
    	a146 = 34 ;
    	a22 = 9;
    	a17 = 34 ;
    	a184 = 7;
    	a135 = 12;
    	a101 = 34 ;
    	a196 = 7;
    	a110 = 7;
    	a178 = 34 ;
    	a104 = 34 ;
    	a180 = 34 ;
    	a53 = 34 ;
    	a200 = 34 ;
    	a156 = 6; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 403\n");

    if(((((a46 == 32 && ((input == 3) &&  cf==1 )) && a55 == 32) && a51 == 32) && ((a0 == 32 && a196 == 6) && a180 == 32))) {
printf("POINT: 404\n");
    	cf = 0;
    	a120 = 6;
    	a48 = 32 ;
    	a97 = 5;
    	a16 = 10;
    	a2 = 5;
    	a118 = 32 ;
    	a93 = 4;
    	a153 = 5;
    	a154 = 34 ;
    	a167 = 3;
    	a131 = 10;
    	a41 = 32 ;
    	a56 = 9;
    	a95 = 9;
    	a141 = 34 ;
    	a125 = 34 ;
    	a105 = 12;
    	a179 = 34 ;
    	a65 = 10;
    	a37 = 10;
    	a20 = 5;
    	a193 = 8;
    	a169 = 32 ;
    	a174 = 9;
    	a34 = 32 ;
    	a12 = 32 ;
    	a187 = 5;
    	a28 = 11;
    	a30 = 32 ;
    	a88 = 32 ;
    	a81 = 12;
    	a128 = 3; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 405\n");

    if(((a126 == 4 && (( cf==1  && (input == 4)) && a110 == 6)) && (a32 == 32 && (a55 == 32 && (a22 == 8 && a165 == 32))))) {
printf("POINT: 406\n");
    	cf = 0;
    	a180 = 34 ;
    	a22 = 9;
    	a165 = 34 ;
    	a184 = 7;
    	a94 = 32 ;
    	a17 = 34 ;
    	a55 = 34 ;
    	a146 = 34 ;
    	a104 = 34 ;
    	a110 = 7;
    	a101 = 34 ;
    	a200 = 34 ;
    	a135 = 12;
    	a53 = 34 ;
    	a178 = 34 ;
    	a196 = 7;
    	a156 = 6; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm64(int input) {
printf("POINT: 407\n");

    if(((a16 == 10 && a141 == 32) && (a37 == 9 && (((( cf==1  && (input == 1)) && a169 == 32) && a112 == 32) && a141 == 32)))) {
printf("POINT: 408\n");
    	cf = 0;
    	a193 = 9;
    	a12 = 34 ;
    	a109 = 34 ;
    	a97 = 4;
    	a200 = 34 ;
    	a79 = 7;
    	a128 = 2;
    	a174 = 9;
    	a48 = 34 ;
    	a141 = 34 ;
    	a81 = 12;
    	a121 = 34 ;
    	a41 = 34 ;
    	a22 = 8;
    	a104 = 34 ;
    	a101 = 34 ;
    	a169 = 34 ;
    	a32 = 34 ;
    	a172 = 34 ;
    	a135 = 9;
    	a46 = 34 ;
    	a15 = 11;
    	a165 = 34 ;
    	a150 = 6;
    	a37 = 10;
    	a55 = 32 ;
    	a127 = 8;
    	a30 = 34 ;
    	a180 = 34 ;
    	a51 = 34 ;
    	a110 = 7;
    	a164 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 409\n");

    if(((a174 == 8 && a25 == 5) && (a180 == 32 && (((a20 == 4 && ((input == 9) &&  cf==1 )) && a26 == 3) && a101 == 32)))) {
printf("POINT: 410\n");
    	cf = 0;
    	a104 = 34 ;
    	a178 = 34 ;
    	a17 = 34 ;
    	a165 = 34 ;
    	a37 = 10;
    	a141 = 34 ;
    	a81 = 12;
    	a180 = 34 ;
    	a20 = 5;
    	a94 = 32 ;
    	a135 = 12;
    	a110 = 7;
    	a200 = 34 ;
    	a184 = 7;
    	a101 = 34 ;
    	a174 = 9;
    	a156 = 6; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm65(int input) {
printf("POINT: 411\n");

    if(((a152 == 9 && ((a154 == 32 && a105 == 11) && a97 == 4)) && ((a28 == 10 && ( cf==1  && (input == 3))) && a69 == 32))) {
printf("POINT: 412\n");
    	cf = 0;
    	a55 = 33 ;
    	a152 = 8;
    	a62 = 6;
    	a200 = 36 ;
    	a154 = 33 ;
    	a158 = 12;
    	a105 = 10;
    	a71 = 13; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 413\n");

    if(((((a193 == 8 && a160 == 32) && a104 == 32) && a46 == 32) && ((((input == 10) &&  cf==1 ) && a101 == 32) && a53 == 32))) {
printf("POINT: 414\n");
    	cf = 0;
    	a51 = 33 ;
    	a68 = 2;
    	a141 = 32 ;
    	a16 = 10;
    	a30 = 32 ;
    	a140 = 6;
    	a118 = 32 ;
    	a119 = 33 ;
    	a39 = 8;
    	a112 = 32 ;
    	a144 = 32 ;
    	a131 = 10;
    	a79 = 6;
    	a12 = 32 ;
    	a90 = 32 ;
    	a56 = 9;
    	a45 = 32 ;
    	a125 = 33 ;
    	a41 = 32 ;
    	a81 = 11;
    	a20 = 4;
    	a32 = 32 ;
    	a184 = 5;
    	a88 = 32 ;
    	a95 = 9;
    	a120 = 6;
    	a179 = 33 ;
    	a167 = 2;
    	a196 = 6;
    	a110 = 6;
    	a26 = 3;
    	a174 = 7;
    	a37 = 9;
    	a22 = 7;
    	a128 = 2; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 415\n");

    if(((a115 == 32 && (a153 == 4 && ((( cf==1  && (input == 7)) && a65 == 10) && a109 == 32))) && (a25 == 5 && a65 == 10))) {
printf("POINT: 416\n");
    	cf = 0;
    	a68 = 3;
    	a125 = 34 ;
    	a104 = 34 ;
    	a179 = 32 ;
    	a109 = 34 ;
    	a169 = 34 ;
    	a26 = 4;
    	a180 = 34 ;
    	a137 = 34 ;
    	a51 = 32 ;
    	a15 = 11;
    	a118 = 34 ;
    	a140 = 5;
    	a160 = 34 ;
    	a53 = 34 ;
    	a153 = 5;
    	a127 = 8;
    	a187 = 5;
    	a158 = 7;
    	a25 = 6;
    	a184 = 7;
    	a32 = 34 ;
    	a93 = 4;
    	a48 = 34 ;
    	a119 = 32 ;
    	a41 = 34 ;
    	a174 = 8;
    	a200 = 36 ;
    	a167 = 3;
    	a110 = 7;
    	a152 = 10;
    	a37 = 10;
    	a22 = 8;
    	a97 = 5;
    	a64 = 10; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 417\n");

    if((((a84 == 32 && (a17 == 32 && (a15 == 10 && a55 == 32))) && a34 == 32) && (a93 == 3 && ((input == 6) &&  cf==1 )))) {
printf("POINT: 418\n");
    	cf = 0;
    	a127 = 8;
    	a41 = 34 ;
    	a180 = 34 ;
    	a119 = 32 ;
    	a26 = 4;
    	a22 = 8;
    	a169 = 34 ;
    	a200 = 36 ;
    	a93 = 4;
    	a125 = 34 ;
    	a48 = 34 ;
    	a184 = 7;
    	a104 = 34 ;
    	a51 = 32 ;
    	a152 = 10;
    	a109 = 34 ;
    	a153 = 5;
    	a158 = 7;
    	a37 = 10;
    	a15 = 11;
    	a179 = 32 ;
    	a97 = 5;
    	a187 = 5;
    	a118 = 34 ;
    	a174 = 8;
    	a110 = 7;
    	a140 = 5;
    	a53 = 34 ;
    	a137 = 34 ;
    	a160 = 34 ;
    	a25 = 6;
    	a68 = 3;
    	a32 = 34 ;
    	a167 = 3;
    	a64 = 10; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm66(int input) {
printf("POINT: 419\n");

    if(((a115 == 32 && (a16 == 10 && ((input == 3) &&  cf==1 ))) && (a81 == 11 && (a187 == 4 && (a160 == 32 && a115 == 32))))) {
printf("POINT: 420\n");
    	cf = 0;
printf("POINT: 421\n");

    	if((a51 == 32 && a89 == 32)) {
printf("POINT: 422\n");
    	a200 = 33 ;
    	a77 = 9;
    	a17 = 35 ;
    	a45 = 35 ;
    	a0 = 32 ;
    	a25 = 11;
    	a32 = 32 ;
    	a160 = 36 ;
    	a34 = 34 ;
    	a110 = 12;
    	a125 = 34 ;
    	a22 = 14;
    	a150 = 10;
    	a146 = 32 ;
    	a176 = 2;
    	a127 = 12;
    	a180 = 32 ;
    	a86 = 32 ;
    	a174 = 9;
    	a20 = 8;
    	a93 = 5;
    	a12 = 35 ;
    	a26 = 9;
    	a152 = 11;
    	a120 = 10;
    	a69 = 32 ;
    	a105 = 10;
    	a55 = 33 ;
    	a28 = 15;
    	a68 = 2;
    	a178 = 35 ;
    	a141 = 32 ;
    	a97 = 6;
    	a95 = 11;
    	a84 = 34 ;
    	a131 = 10;
    	a56 = 10;
    	a51 = 35 ;
    	a30 = 35 ;
    	a112 = 36 ;
    	a115 = 34 ;
    	a118 = 36 ;
    	a126 = 10;
    	a39 = 12;
    	a179 = 35 ;
    	a169 = 36 ;
    	a79 = 8;
    	a2 = 10;
    	a15 = 16;
    	a154 = 34 ;
    	a101 = 36 ;
    	a187 = 5;
    	a167 = 8;
    	a88 = 36 ;
    	a184 = 6;
    	a144 = 34 ;
    	a81 = 12;
    	a65 = 16;
    	a196 = 6;
    	a90 = 32 ;
    	a41 = 32 ;
    	a104 = 35 ;
    	a140 = 8;
    	a53 = 34 ;
    	a147 = 5; 
    	}else {
printf("POINT: 424\n");
    	a17 = 33 ;
    	a32 = 35 ;
    	a53 = 33 ;
    	a56 = 10;
    	a152 = 9;
    	a55 = 33 ;
    	a20 = 9;
    	a140 = 5;
    	a79 = 9;
    	a25 = 9;
    	a39 = 8;
    	a88 = 36 ;
    	a110 = 8;
    	a184 = 7;
    	a196 = 11;
    	a86 = 32 ;
    	a97 = 7;
    	a101 = 35 ;
    	a105 = 17;
    	a144 = 36 ;
    	a26 = 4;
    	a90 = 32 ;
    	a179 = 32 ;
    	a118 = 35 ;
    	a141 = 32 ;
    	a120 = 9;
    	a65 = 12;
    	a30 = 35 ;
    	a41 = 35 ;
    	a112 = 35 ;
    	a174 = 7;
    	a34 = 35 ;
    	a181 = 15;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 425\n");

    if(((a46 == 32 && (a187 == 4 && ((input == 6) &&  cf==1 ))) && (((a55 == 32 && a196 == 6) && a112 == 32) && a169 == 32))) {
printf("POINT: 426\n");
    	cf = 0;
printf("POINT: 427\n");

    	if(a70 == 36) {
printf("POINT: 428\n");
    	a174 = 12;
    	a55 = 36 ;
    	a17 = 34 ;
    	a105 = 11;
    	a176 = 7;
    	a53 = 32 ;
    	a165 = 34 ;
    	a152 = 8;
    	a2 = 6;
    	a120 = 11;
    	a179 = 35 ;
    	a154 = 35 ;
    	a94 = 35 ;
    	a134 = 12;
    	a169 = 32 ;
    	a39 = 7;
    	a128 = 4;
    	a45 = 35 ;
    	a41 = 34 ;
    	a20 = 6;
    	a25 = 9;
    	a34 = 33 ;
    	a26 = 9;
    	a93 = 5;
    	a37 = 15;
    	a200 = 35 ;
    	a56 = 8;
    	a141 = 36 ;
    	a191 = 13; 
    	}else {
printf("POINT: 430\n");
    	a3 = 34 ;
    	a141 = 35 ;
    	a200 = 35 ;
    	a2 = 7;
    	a120 = 11;
    	a53 = 36 ;
    	a179 = 32 ;
    	a20 = 9;
    	a165 = 34 ;
    	a176 = 6;
    	a37 = 11;
    	a134 = 16;
    	a26 = 9;
    	a34 = 35 ;
    	a15 = 15;
    	a75 = 5;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 431\n");

    if((((a174 == 8 && (a16 == 10 && a184 == 6)) && a32 == 32) && (a79 == 6 && (a51 == 32 && ( cf==1  && (input == 4)))))) {
printf("POINT: 432\n");
    	cf = 0;
printf("POINT: 433\n");

    	if((!(a126 == 4) && (!(a187 == 6) || ((!(a9 == 34) && a158 == 8) && a85 == 32)))) {
printf("POINT: 434\n");
    	a141 = 32 ;
    	a134 = 16;
    	a176 = 6;
    	a200 = 35 ;
    	a3 = 34 ;
    	a34 = 36 ;
    	a2 = 9;
    	a53 = 35 ;
    	a15 = 13;
    	a179 = 35 ;
    	a26 = 8;
    	a165 = 33 ;
    	a120 = 8;
    	a37 = 13;
    	a20 = 5;
    	a75 = 5; 
    	}else {
printf("POINT: 436\n");
    	a25 = 7;
    	a200 = 35 ;
    	a26 = 9;
    	a2 = 8;
    	a152 = 10;
    	a94 = 35 ;
    	a39 = 13;
    	a169 = 35 ;
    	a154 = 35 ;
    	a134 = 12;
    	a174 = 10;
    	a56 = 12;
    	a120 = 10;
    	a55 = 36 ;
    	a37 = 11;
    	a45 = 35 ;
    	a179 = 32 ;
    	a34 = 33 ;
    	a141 = 33 ;
    	a20 = 6;
    	a128 = 1;
    	a105 = 16;
    	a17 = 36 ;
    	a165 = 35 ;
    	a93 = 5;
    	a41 = 36 ;
    	a176 = 3;
    	a53 = 36 ;
    	a191 = 13;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 437\n");

    if((( cf==1  && (input == 8)) && (((a53 == 32 && (a160 == 32 && (a97 == 4 && a109 == 32))) && a55 == 32) && a17 == 32))) {
printf("POINT: 438\n");
    	cf = 0;
printf("POINT: 439\n");

    	if((a39 == 11 && (!(a169 == 35) || (!(a52 == 9) || a54 == 36)))) {
printf("POINT: 440\n");
    	a34 = 35 ;
    	a163 = 36 ;
    	a37 = 8;
    	a20 = 7;
    	a200 = 36 ;
    	a186 = 33 ;
    	a26 = 6;
    	a165 = 36 ;
    	a158 = 13; 
    	}else {
printf("POINT: 442\n");
    	a112 = 33 ;
    	a174 = 9;
    	a198 = 36 ;
    	a3 = 32 ;
    	a81 = 13;
    	a184 = 9;
    	a37 = 12;
    	a179 = 33 ;
    	a165 = 34 ;
    	a110 = 6;
    	a68 = 8;
    	a109 = 32 ;
    	a146 = 34 ;
    	a12 = 36 ;
    	a16 = 15;
    	a120 = 7;
    	a140 = 7;
    	a39 = 7;
    	a131 = 14;
    	a15 = 9;
    	a51 = 34 ;
    	a119 = 36 ;
    	a46 = 33 ;
    	a25 = 8;
    	a97 = 3;
    	a176 = 9;
    	a90 = 34 ;
    	a26 = 2;
    	a55 = 36 ;
    	a125 = 36 ;
    	a56 = 12;
    	a115 = 36 ;
    	a167 = 4;
    	a2 = 3;
    	a88 = 36 ;
    	a32 = 32 ;
    	a127 = 13;
    	a41 = 36 ;
    	a105 = 17;
    	a153 = 6;
    	a20 = 5;
    	a93 = 6;
    	a84 = 34 ;
    	a34 = 33 ;
    	a28 = 13;
    	a50 = 5;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 443\n");

    if((((a84 == 32 && ( cf==1  && (input == 2))) && a45 == 32) && ((a30 == 32 && (a15 == 10 && a187 == 4)) && a15 == 10))) {
printf("POINT: 444\n");
    	cf = 0;
printf("POINT: 445\n");

    	if((a26 == 4 || ((a45 == 35 && !(a81 == 15)) || !(a145 == 9)))) {
printf("POINT: 446\n");
    	a196 = 12;
    	a97 = 7;
    	a0 = 36 ;
    	a115 = 35 ;
    	a53 = 32 ;
    	a118 = 36 ;
    	a120 = 9;
    	a150 = 7;
    	a112 = 35 ;
    	a98 = 13;
    	a45 = 35 ;
    	a200 = 34 ;
    	a17 = 36 ;
    	a128 = 5;
    	a167 = 5;
    	a104 = 36 ;
    	a193 = 10;
    	a39 = 7;
    	a180 = 35 ;
    	a187 = 7;
    	a146 = 33 ;
    	a174 = 10;
    	a178 = 32 ;
    	a16 = 9;
    	a135 = 14;
    	a179 = 32 ;
    	a69 = 35 ;
    	a64 = 9; 
    	}else {
printf("POINT: 448\n");
    	a65 = 12;
    	a34 = 35 ;
    	a81 = 14;
    	a79 = 11;
    	a84 = 35 ;
    	a51 = 34 ;
    	a128 = 8;
    	a180 = 34 ;
    	a48 = 35 ;
    	a62 = 5;
    	a127 = 10;
    	a22 = 13;
    	a154 = 36 ;
    	a26 = 8;
    	a120 = 7;
    	a115 = 35 ;
    	a46 = 33 ;
    	a112 = 34 ;
    	a176 = 7;
    	a160 = 33 ;
    	a144 = 33 ;
    	a32 = 35 ;
    	a152 = 10;
    	a20 = 10;
    	a45 = 36 ;
    	a90 = 36 ;
    	a174 = 14;
    	a167 = 5;
    	a105 = 17;
    	a200 = 36 ;
    	a140 = 6;
    	a193 = 9;
    	a28 = 15;
    	a39 = 10;
    	a17 = 34 ;
    	a37 = 8;
    	a109 = 35 ;
    	a158 = 12;
    	a165 = 36 ;
    	a178 = 35 ;
    	a71 = 10;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 449\n");

    if(((a101 == 32 && (a79 == 6 && (a46 == 32 && a121 == 32))) && (a110 == 6 && (((input == 10) &&  cf==1 ) && a115 == 32)))) {
printf("POINT: 450\n");
    	cf = 0;
    	a86 = 33 ;
    	a152 = 13;
    	a26 = 8;
    	a154 = 34 ;
    	a55 = 35 ;
    	a20 = 3;
    	a184 = 7;
    	a119 = 36 ;
    	a125 = 34 ;
    	a174 = 9;
    	a37 = 8;
    	a140 = 7;
    	a68 = 5;
    	a34 = 35 ;
    	a105 = 11;
    	a165 = 36 ;
    	a177 = 11; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 451\n");

    if((a120 == 6 && (((a51 == 32 && ((a131 == 10 && ( cf==1  && (input == 9))) && a69 == 32)) && a127 == 7) && a90 == 32))) {
printf("POINT: 452\n");
    	cf = 0;
    	a200 = 36 ;
    	a81 = 16;
    	a110 = 12;
    	a119 = 36 ;
    	a118 = 35 ;
    	a26 = 7;
    	a17 = 32 ;
    	a193 = 13;
    	a165 = 36 ;
    	a105 = 11;
    	a20 = 7;
    	a28 = 15;
    	a55 = 32 ;
    	a1 = 35 ;
    	a34 = 35 ;
    	a112 = 35 ;
    	a65 = 16;
    	a84 = 34 ;
    	a158 = 10;
    	a183 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 453\n");

    if(((a179 == 32 && ((a169 == 32 && a41 == 32) && a69 == 32)) && ((( cf==1  && (input == 1)) && a15 == 10) && a55 == 32))) {
printf("POINT: 454\n");
    	cf = 0;
printf("POINT: 455\n");

    	if((a11 == 8 || a59 == 8)) {
printf("POINT: 456\n");
    	a198 = 35 ;
    	a165 = 35 ;
    	a37 = 14;
    	a60 = 8;
    	a20 = 6;
    	a26 = 7;
    	a34 = 34 ;
    	a62 = 10; 
    	}else {
printf("POINT: 458\n");
    	a126 = 6;
    	a56 = 13;
    	a140 = 7;
    	a119 = 36 ;
    	a121 = 35 ;
    	a118 = 33 ;
    	a0 = 34 ;
    	a154 = 33 ;
    	a93 = 3;
    	a104 = 33 ;
    	a109 = 35 ;
    	a55 = 36 ;
    	a32 = 35 ;
    	a174 = 12;
    	a200 = 34 ;
    	a127 = 6;
    	a20 = 9;
    	a196 = 6;
    	a167 = 1;
    	a187 = 9;
    	a115 = 36 ;
    	a120 = 12;
    	a141 = 34 ;
    	a81 = 17;
    	a48 = 35 ;
    	a25 = 4;
    	a46 = 33 ;
    	a144 = 34 ;
    	a69 = 33 ;
    	a193 = 13;
    	a105 = 17;
    	a180 = 32 ;
    	a125 = 35 ;
    	a16 = 13;
    	a41 = 35 ;
    	a12 = 36 ;
    	a97 = 9;
    	a91 = 34 ;
    	a88 = 33 ;
    	a22 = 12;
    	a179 = 36 ;
    	a37 = 13;
    	a90 = 36 ;
    	a95 = 14;
    	a178 = 34 ;
    	a2 = 7;
    	a84 = 33 ;
    	a150 = 5;
    	a152 = 13;
    	a28 = 14;
    	a30 = 34 ;
    	a169 = 33 ;
    	a101 = 33 ;
    	a176 = 9;
    	a51 = 34 ;
    	a160 = 35 ;
    	a45 = 34 ;
    	a153 = 3;
    	a26 = 3;
    	a146 = 33 ;
    	a39 = 11;
    	a110 = 5;
    	a184 = 6;
    	a53 = 33 ;
    	a65 = 10;
    	a17 = 33 ;
    	a112 = 33 ;
    	a15 = 9;
    	a135 = 9;
    	a128 = 8;
    	a68 = 2;
    	a131 = 9;
    	a79 = 5;
    	a164 = 8;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 459\n");

    if((a81 == 11 && (((((( cf==1  && (input == 7)) && a167 == 2) && a126 == 4) && a30 == 32) && a187 == 4) && a128 == 2))) {
printf("POINT: 460\n");
    	cf = 0;
    	a56 = 13;
    	a141 = 35 ;
    	a81 = 17;
    	a121 = 33 ;
    	a34 = 35 ;
    	a37 = 11;
    	a109 = 33 ;
    	a26 = 9;
    	a30 = 35 ;
    	a120 = 10;
    	a178 = 33 ;
    	a62 = 5;
    	a160 = 33 ;
    	a158 = 12;
    	a167 = 1;
    	a179 = 33 ;
    	a165 = 33 ;
    	a115 = 34 ;
    	a32 = 35 ;
    	a118 = 35 ;
    	a180 = 36 ;
    	a144 = 35 ;
    	a184 = 12;
    	a20 = 7;
    	a25 = 4;
    	a15 = 13;
    	a152 = 12;
    	a126 = 3;
    	a101 = 33 ;
    	a140 = 11;
    	a200 = 36 ;
    	a125 = 33 ;
    	a53 = 36 ;
    	a48 = 32 ;
    	a150 = 11;
    	a68 = 9;
    	a154 = 33 ;
    	a39 = 7;
    	a17 = 35 ;
    	a79 = 5;
    	a176 = 6;
    	a169 = 33 ;
    	a71 = 7; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 461\n");

    if((((((a25 == 5 && (((input == 5) &&  cf==1 ) && a53 == 32)) && a109 == 32) && a15 == 10) && a32 == 32) && a0 == 32)) {
printf("POINT: 462\n");
    	cf = 0;
    	a158 = 7;
    	a141 = 36 ;
    	a179 = 36 ;
    	a140 = 11;
    	a45 = 36 ;
    	a146 = 33 ;
    	a34 = 35 ;
    	a20 = 7;
    	a165 = 35 ;
    	a26 = 8;
    	a84 = 32 ;
    	a37 = 13;
    	a119 = 35 ;
    	a196 = 11;
    	a193 = 12;
    	a184 = 11;
    	a39 = 13;
    	a64 = 16;
    	a200 = 36 ;
    	a189 = 16; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm67(int input) {
printf("POINT: 463\n");

    if(((a46 == 32 && (a128 == 2 && (a26 == 3 && (a30 == 32 && ((input == 5) &&  cf==1 ))))) && (a178 == 32 && a187 == 4))) {
printf("POINT: 464\n");
    	cf = 0;
    	a3 = 32 ;
    	a200 = 36 ;
    	a158 = 10;
    	a183 = 13; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 465\n");

    if(((a193 == 8 && (a45 == 32 && ((a187 == 4 && a30 == 32) && a90 == 32))) && (a165 == 32 && ((input == 3) &&  cf==1 )))) {
printf("POINT: 466\n");
    	cf = 0;
    	a41 = 32 ;
    	a146 = 32 ;
    	a144 = 32 ;
    	a34 = 32 ;
    	a160 = 32 ;
    	a196 = 6;
    	a93 = 3;
    	a15 = 10;
    	a169 = 32 ;
    	a131 = 10;
    	a48 = 32 ;
    	a56 = 9; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm6(int input) {
printf("POINT: 467\n");

    if((a126 == 4 && (((a0 == 32 && (a109 == 32 && (a65 == 10 && ( cf==1  && a86 == 33)))) && a118 == 32) && a169 == 32))) {
printf("POINT: 468\n");
printf("POINT: 469\n");

    	if((((a128 == 2 && (a177 == 11 &&  cf==1 )) && a167 == 2) && (a167 == 2 && (a25 == 5 && (a65 == 10 && a45 == 32))))) {
printf("POINT: 470\n");
    		calculate_outputm59(input);
    	} 
printf("POINT: 471\n");

    	if((((a119 == 32 && a53 == 32) && a184 == 6) && ((a174 == 8 && (a2 == 4 && ( cf==1  && a177 == 13))) && a140 == 5))) {
printf("POINT: 472\n");
    		calculate_outputm60(input);
    	} 
    } 
printf("POINT: 473\n");

    if(((a127 == 7 && (a131 == 10 && ((a127 == 7 && (a45 == 32 && a15 == 10)) && a16 == 10))) && (a86 == 32 &&  cf==1 ))) {
printf("POINT: 474\n");
printf("POINT: 475\n");

    	if(((a140 == 5 && (a176 == 3 && a32 == 32)) && (a16 == 10 && (a90 == 32 && (( cf==1  && a181 == 14) && a2 == 4))))) {
printf("POINT: 476\n");
    		calculate_outputm61(input);
    	} 
printf("POINT: 477\n");

    	if(((a45 == 32 && (a22 == 8 && ((a28 == 10 && a187 == 4) && a167 == 2))) && ((a181 == 15 &&  cf==1 ) && a28 == 10))) {
printf("POINT: 478\n");
    		calculate_outputm62(input);
    	} 
    } 
printf("POINT: 479\n");

    if(((a184 == 6 && (a110 == 6 && (a86 == 34 &&  cf==1 ))) && (a110 == 6 && ((a15 == 10 && a101 == 32) && a17 == 32)))) {
printf("POINT: 480\n");
printf("POINT: 481\n");

    	if((((a101 == 32 && (a26 == 3 && a150 == 5)) && a25 == 5) && (a178 == 32 && ((a66 == 5 &&  cf==1 ) && a25 == 5)))) {
printf("POINT: 482\n");
    		calculate_outputm63(input);
    	} 
printf("POINT: 483\n");

    	if(((a120 == 6 && a16 == 10) && (a165 == 32 && (a41 == 32 && ((a95 == 9 && ( cf==1  && a66 == 10)) && a81 == 11))))) {
printf("POINT: 484\n");
    		calculate_outputm64(input);
    	} 
    } 
printf("POINT: 485\n");

    if(((a187 == 4 && (a2 == 4 && a169 == 32)) && (a193 == 8 && (a105 == 11 && ((a86 == 35 &&  cf==1 ) && a146 == 32))))) {
printf("POINT: 486\n");
printf("POINT: 487\n");

    	if(((a48 == 32 && ((( cf==1  && a61 == 2) && a69 == 32) && a126 == 4)) && ((a104 == 32 && a165 == 32) && a93 == 3))) {
printf("POINT: 488\n");
    		calculate_outputm65(input);
    	} 
printf("POINT: 489\n");

    	if((((a88 == 32 && a39 == 8) && a0 == 32) && (a118 == 32 && ((( cf==1  && a61 == 7) && a146 == 32) && a48 == 32)))) {
printf("POINT: 490\n");
    		calculate_outputm66(input);
    	} 
    } 
printf("POINT: 491\n");

    if((((((a16 == 10 && ( cf==1  && a86 == 36)) && a20 == 4) && a88 == 32) && a115 == 32) && (a28 == 10 && a12 == 32))) {
printf("POINT: 492\n");
printf("POINT: 493\n");

    	if((((a125 == 32 && (( cf==1  && a89 == 35) && a176 == 3)) && a110 == 6) && ((a0 == 32 && a128 == 2) && a115 == 32))) {
printf("POINT: 494\n");
    		calculate_outputm67(input);
    	} 
    } 
}
 void calculate_outputm68(int input) {
printf("POINT: 495\n");

    if(((a120 == 6 && (a68 == 3 && (( cf==1  && (input == 5)) && a93 == 3))) && ((a84 == 32 && a41 == 32) && a90 == 32))) {
printf("POINT: 496\n");
    	cf = 0;
    	a184 = 7;
    	a46 = 32 ;
    	a179 = 32 ;
    	a105 = 11;
    	a81 = 11;
    	a109 = 34 ;
    	a56 = 9;
    	a127 = 8;
    	a25 = 6;
    	a131 = 10;
    	a115 = 32 ;
    	a112 = 32 ;
    	a88 = 32 ;
    	a68 = 3;
    	a165 = 32 ;
    	a90 = 32 ;
    	a97 = 5;
    	a198 = 36 ;
    	a110 = 7;
    	a55 = 32 ;
    	a174 = 8;
    	a15 = 11;
    	a37 = 10;
    	a167 = 3;
    	a125 = 34 ;
    	a140 = 5;
    	a120 = 6;
    	a32 = 34 ;
    	a93 = 4;
    	a176 = 3;
    	a39 = 8;
    	a3 = 32 ;
    	a153 = 5;
    	a119 = 32 ;
    	a16 = 10;
    	a2 = 4;
    	a146 = 32 ;
    	a28 = 10;
    	a51 = 32 ;
    	a12 = 32 ;
    	a41 = 34 ;
    	a84 = 32 ;
    	a50 = 5; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 497\n");

    if(((a128 == 2 && (a68 == 3 && a28 == 10)) && (a16 == 10 && (a84 == 32 && (((input == 3) &&  cf==1 ) && a160 == 32))))) {
printf("POINT: 498\n");
    	cf = 0;
    	a140 = 5;
    	a120 = 6;
    	a25 = 6;
    	a48 = 34 ;
    	a180 = 34 ;
    	a153 = 5;
    	a174 = 8;
    	a200 = 36 ;
    	a160 = 34 ;
    	a45 = 32 ;
    	a22 = 8;
    	a154 = 32 ;
    	a115 = 32 ;
    	a104 = 34 ;
    	a79 = 6;
    	a112 = 32 ;
    	a196 = 6;
    	a121 = 32 ;
    	a158 = 11;
    	a109 = 34 ;
    	a141 = 32 ;
    	a15 = 11;
    	a179 = 32 ;
    	a37 = 10;
    	a119 = 32 ;
    	a12 = 32 ;
    	a2 = 4;
    	a127 = 8;
    	a169 = 34 ;
    	a55 = 32 ;
    	a39 = 8;
    	a126 = 4;
    	a51 = 32 ;
    	a105 = 11;
    	a165 = 32 ;
    	a93 = 4;
    	a187 = 5;
    	a146 = 32 ;
    	a70 = 33 ;
    	a178 = 32 ;
    	a90 = 32 ;
    	a69 = 32 ;
    	a97 = 5;
    	a184 = 7;
    	a84 = 32 ;
    	a32 = 34 ;
    	a81 = 11;
    	a118 = 34 ;
    	a128 = 2;
    	a56 = 9;
    	a185 = 14; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 499\n");

    if(((a55 == 32 && ((a120 == 6 && ( cf==1  && (input == 10))) && a30 == 32)) && (a150 == 5 && (a88 == 32 && a174 == 8)))) {
printf("POINT: 500\n");
    	cf = 0;
    	a17 = 32 ;
    	a153 = 5;
    	a167 = 3;
    	a174 = 9;
    	a200 = 34 ;
    	a112 = 32 ;
    	a126 = 4;
    	a154 = 32 ;
    	a109 = 34 ;
    	a93 = 4;
    	a26 = 4;
    	a46 = 32 ;
    	a45 = 32 ;
    	a37 = 10;
    	a176 = 4;
    	a22 = 8;
    	a197 = 6;
    	a84 = 34 ;
    	a125 = 34 ;
    	a141 = 32 ;
    	a34 = 34 ;
    	a160 = 34 ;
    	a90 = 32 ;
    	a118 = 34 ;
    	a178 = 34 ;
    	a101 = 34 ;
    	a28 = 10;
    	a41 = 34 ;
    	a127 = 8;
    	a187 = 5;
    	a135 = 11;
    	a68 = 3;
    	a0 = 34 ;
    	a152 = 10;
    	a30 = 34 ;
    	a184 = 7;
    	a120 = 7;
    	a25 = 6;
    	a169 = 34 ;
    	a196 = 7;
    	a121 = 34 ;
    	a20 = 5;
    	a55 = 34 ;
    	a15 = 11;
    	a193 = 9;
    	a131 = 10;
    	a95 = 9;
    	a53 = 34 ;
    	a69 = 32 ;
    	a51 = 32 ;
    	a48 = 34 ;
    	a128 = 2;
    	a150 = 6;
    	a105 = 11;
    	a12 = 32 ;
    	a88 = 34 ;
    	a81 = 11;
    	a110 = 7;
    	a119 = 34 ;
    	a180 = 34 ;
    	a79 = 6;
    	a39 = 8;
    	a144 = 34 ;
    	a140 = 5;
    	a165 = 32 ;
    	a65 = 10;
    	a16 = 10;
    	a104 = 34 ;
    	a75 = 8; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 501\n");

    if((((((input == 1) &&  cf==1 ) && a187 == 4) && a84 == 32) && (a110 == 6 && (a17 == 32 && (a167 == 2 && a81 == 11))))) {
printf("POINT: 502\n");
    	cf = 0;
    	a46 = 32 ;
    	a126 = 4;
    	a154 = 32 ;
    	a68 = 3;
    	a34 = 32 ;
    	a169 = 34 ;
    	a127 = 8;
    	a160 = 34 ;
    	a120 = 7;
    	a26 = 4;
    	a90 = 32 ;
    	a144 = 34 ;
    	a81 = 12;
    	a152 = 10;
    	a115 = 32 ;
    	a37 = 10;
    	a94 = 33 ;
    	a79 = 6;
    	a141 = 34 ;
    	a119 = 32 ;
    	a53 = 34 ;
    	a167 = 3;
    	a17 = 34 ;
    	a84 = 34 ;
    	a28 = 11;
    	a30 = 32 ;
    	a193 = 8;
    	a22 = 8;
    	a101 = 34 ;
    	a165 = 32 ;
    	a174 = 8;
    	a41 = 34 ;
    	a95 = 10;
    	a178 = 32 ;
    	a121 = 32 ;
    	a93 = 4;
    	a118 = 34 ;
    	a55 = 32 ;
    	a150 = 5;
    	a131 = 10;
    	a65 = 11;
    	a196 = 7;
    	a88 = 32 ;
    	a48 = 34 ;
    	a176 = 4;
    	a104 = 34 ;
    	a125 = 34 ;
    	a16 = 10;
    	a45 = 32 ;
    	a0 = 32 ;
    	a32 = 34 ;
    	a140 = 6;
    	a69 = 32 ;
    	a20 = 4;
    	a200 = 34 ;
    	a128 = 3;
    	a187 = 5;
    	a109 = 34 ;
    	a15 = 11;
    	a151 = 34 ;
    	a51 = 32 ;
    	a180 = 34 ;
    	a184 = 7;
    	a110 = 7;
    	a135 = 12; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm69(int input) {
printf("POINT: 503\n");

    if((((a104 == 32 && a160 == 32) && a118 == 32) && (((( cf==1  && (input == 6)) && a79 == 6) && a79 == 6) && a97 == 4))) {
printf("POINT: 504\n");
    	cf = 0;
    	a109 = 34 ;
    	a144 = 34 ;
    	a2 = 3;
    	a90 = 33 ;
    	a15 = 9;
    	a32 = 34 ;
    	a16 = 11;
    	a174 = 7;
    	a176 = 3;
    	a97 = 5;
    	a95 = 8;
    	a160 = 34 ;
    	a51 = 33 ;
    	a68 = 2;
    	a29 = 33 ;
    	a20 = 3;
    	a118 = 33 ;
    	a28 = 9;
    	a46 = 33 ;
    	a39 = 9;
    	a125 = 33 ;
    	a120 = 5;
    	a30 = 32 ;
    	a81 = 12;
    	a196 = 7;
    	a153 = 5;
    	a79 = 7;
    	a152 = 10;
    	a167 = 3;
    	a187 = 5;
    	a169 = 33 ;
    	a105 = 10;
    	a179 = 33 ;
    	a127 = 6;
    	a180 = 34 ;
    	a110 = 5;
    	a25 = 4;
    	a22 = 9;
    	a165 = 33 ;
    	a121 = 33 ;
    	a128 = 3;
    	a84 = 33 ;
    	a104 = 33 ;
    	a48 = 34 ;
    	a45 = 33 ;
    	a86 = 36 ;
    	a55 = 32 ;
    	a41 = 33 ;
    	a26 = 4;
    	a150 = 6;
    	a200 = 33 ;
    	a37 = 10;
    	a65 = 11;
    	a56 = 8;
    	a140 = 6;
    	a154 = 34 ;
    	a126 = 5;
    	a53 = 33 ;
    	a115 = 34 ;
    	a141 = 33 ;
    	a69 = 33 ;
    	a123 = 6; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 505\n");

    if((((( cf==1  && (input == 1)) && a105 == 11) && a25 == 5) && ((a26 == 3 && (a104 == 32 && a26 == 3)) && a68 == 3))) {
printf("POINT: 506\n");
    	cf = 0;
    	a25 = 6;
    	a200 = 36 ;
    	a51 = 34 ;
    	a196 = 7;
    	a122 = 36 ;
    	a104 = 34 ;
    	a129 = 36 ;
    	a46 = 34 ;
    	a118 = 34 ;
    	a56 = 10;
    	a158 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 507\n");

    if(((a174 == 8 && ((((input == 3) &&  cf==1 ) && a144 == 32) && a56 == 9)) && ((a121 == 32 && a53 == 32) && a22 == 8))) {
printf("POINT: 508\n");
    	cf = 0;
    	a144 = 34 ;
    	a53 = 33 ;
    	a200 = 33 ;
    	a169 = 33 ;
    	a97 = 5;
    	a126 = 5;
    	a120 = 5;
    	a180 = 34 ;
    	a176 = 3;
    	a30 = 32 ;
    	a20 = 3;
    	a121 = 33 ;
    	a79 = 7;
    	a45 = 33 ;
    	a65 = 11;
    	a128 = 3;
    	a69 = 33 ;
    	a95 = 8;
    	a48 = 34 ;
    	a153 = 5;
    	a41 = 33 ;
    	a196 = 7;
    	a16 = 11;
    	a86 = 36 ;
    	a28 = 9;
    	a167 = 3;
    	a90 = 33 ;
    	a29 = 33 ;
    	a2 = 3;
    	a127 = 6;
    	a68 = 2;
    	a25 = 4;
    	a150 = 6;
    	a140 = 6;
    	a84 = 33 ;
    	a179 = 33 ;
    	a115 = 34 ;
    	a118 = 33 ;
    	a46 = 33 ;
    	a187 = 5;
    	a141 = 33 ;
    	a165 = 33 ;
    	a174 = 7;
    	a81 = 12;
    	a32 = 34 ;
    	a15 = 9;
    	a56 = 8;
    	a51 = 33 ;
    	a55 = 32 ;
    	a37 = 10;
    	a105 = 10;
    	a26 = 4;
    	a22 = 9;
    	a154 = 34 ;
    	a104 = 33 ;
    	a125 = 33 ;
    	a110 = 5;
    	a152 = 10;
    	a160 = 34 ;
    	a39 = 9;
    	a109 = 34 ;
    	a123 = 6; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm70(int input) {
printf("POINT: 509\n");

    if(((a187 == 4 && ((a128 == 2 && ((a22 == 8 && a120 == 6) && a48 == 32)) && a153 == 4)) && ((input == 10) &&  cf==1 ))) {
printf("POINT: 510\n");
    	cf = 0;
    	a178 = 33 ;
    	a30 = 32 ;
    	a154 = 32 ;
    	a48 = 32 ;
    	a51 = 32 ;
    	a45 = 33 ;
    	a167 = 2;
    	a12 = 32 ;
    	a88 = 32 ;
    	a144 = 32 ;
    	a179 = 34 ;
    	a56 = 9;
    	a152 = 8;
    	a95 = 8;
    	a150 = 5;
    	a2 = 4;
    	a180 = 32 ;
    	a39 = 7;
    	a25 = 5;
    	a22 = 7;
    	a184 = 7;
    	a131 = 10;
    	a104 = 32 ;
    	a165 = 32 ;
    	a79 = 6;
    	a16 = 9;
    	a169 = 32 ;
    	a86 = 32 ;
    	a41 = 32 ;
    	a176 = 3;
    	a46 = 33 ;
    	a109 = 32 ;
    	a126 = 4;
    	a37 = 9;
    	a77 = 5;
    	a200 = 33 ;
    	a120 = 6;
    	a101 = 32 ;
    	a26 = 3;
    	a90 = 32 ;
    	a0 = 32 ;
    	a68 = 3;
    	a160 = 32 ;
    	a127 = 7;
    	a121 = 33 ;
    	a196 = 5;
    	a128 = 2;
    	a34 = 32 ;
    	a153 = 3;
    	a140 = 4;
    	a146 = 34 ;
    	a187 = 3;
    	a93 = 3;
    	a145 = 7; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm7(int input) {
printf("POINT: 511\n");

    if((((a109 == 32 && (a55 == 32 && a34 == 32)) && a176 == 3) && (a81 == 11 && (( cf==1  && a54 == 35) && a126 == 4)))) {
printf("POINT: 512\n");
printf("POINT: 513\n");

    	if((((a187 == 4 && (a134 == 11 &&  cf==1 )) && a184 == 6) && (a127 == 7 && ((a176 == 3 && a193 == 8) && a119 == 32)))) {
printf("POINT: 514\n");
    		calculate_outputm68(input);
    	} 
printf("POINT: 515\n");

    	if(((a153 == 4 && (a165 == 32 && (a97 == 4 && (a46 == 32 && ( cf==1  && a134 == 15))))) && (a97 == 4 && a15 == 10))) {
printf("POINT: 516\n");
    		calculate_outputm69(input);
    	} 
    } 
printf("POINT: 517\n");

    if(((a153 == 4 && (a95 == 9 && ((a88 == 32 && ( cf==1  && a54 == 36)) && a109 == 32))) && (a104 == 32 && a150 == 5))) {
printf("POINT: 518\n");
printf("POINT: 519\n");

    	if((((a39 == 8 && (a150 == 5 && (a45 == 32 && a39 == 8))) && a0 == 32) && (( cf==1  && a135 == 13) && a152 == 9))) {
printf("POINT: 520\n");
    		calculate_outputm70(input);
    	} 
    } 
}
 void calculate_outputm71(int input) {
printf("POINT: 521\n");

    if(((((input == 9) &&  cf==1 ) && a39 == 8) && ((a0 == 32 && (a2 == 4 && (a95 == 9 && a55 == 32))) && a68 == 3))) {
printf("POINT: 522\n");
    	cf = 0;
    	a144 = 34 ;
    	a98 = 8;
    	a135 = 14;
    	a187 = 5;
    	a2 = 5;
    	a180 = 34 ;
    	a104 = 34 ;
    	a200 = 34 ;
    	a126 = 5;
    	a175 = 9; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm72(int input) {
printf("POINT: 523\n");

    if(((a37 == 9 && (a22 == 8 && (a126 == 4 && ((input == 5) &&  cf==1 )))) && (a51 == 32 && (a48 == 32 && a104 == 32)))) {
printf("POINT: 524\n");
    	cf = 0;
printf("POINT: 525\n");

    	if(a146 == 36) {
printf("POINT: 526\n");
    	a184 = 6;
    	a48 = 32 ;
    	a127 = 7;
    	a196 = 6;
    	a128 = 2;
    	a37 = 9;
    	a53 = 32 ;
    	a160 = 32 ;
    	a118 = 32 ;
    	a179 = 32 ;
    	a180 = 32 ;
    	a158 = 7;
    	a200 = 36 ;
    	a129 = 35 ;
    	a30 = 32 ;
    	a167 = 2;
    	a120 = 6;
    	a97 = 4;
    	a28 = 11;
    	a104 = 32 ;
    	a110 = 6;
    	a32 = 32 ;
    	a41 = 32 ;
    	a79 = 6;
    	a125 = 32 ;
    	a140 = 5;
    	a105 = 11;
    	a112 = 32 ;
    	a169 = 34 ;
    	a115 = 32 ;
    	a176 = 3;
    	a144 = 32 ;
    	a2 = 4;
    	a81 = 11;
    	a25 = 5;
    	a119 = 34 ;
    	a165 = 32 ;
    	a15 = 10;
    	a141 = 32 ;
    	a154 = 32 ;
    	a26 = 4;
    	a64 = 15; 
    	}else {
printf("POINT: 528\n");
    	a134 = 10;
    	a164 = 13;
    	a200 = 35 ;
    	a157 = 10;
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm73(int input) {
printf("POINT: 529\n");

    if((( cf==1  && (input == 1)) && ((((a93 == 3 && (a109 == 32 && a81 == 11)) && a45 == 32) && a93 == 3) && a69 == 32))) {
printf("POINT: 530\n");
    	cf = 0;
    	a95 = 15;
    	a45 = 34 ;
    	a115 = 35 ;
    	a12 = 35 ;
    	a125 = 36 ;
    	a131 = 14;
    	a193 = 13;
    	a17 = 35 ;
    	a37 = 8;
    	a32 = 36 ;
    	a39 = 12;
    	a28 = 10;
    	a152 = 14;
    	a179 = 34 ;
    	a69 = 36 ;
    	a84 = 35 ;
    	a198 = 32 ;
    	a187 = 8;
    	a2 = 3;
    	a127 = 9;
    	a169 = 35 ;
    	a48 = 33 ;
    	a88 = 34 ;
    	a30 = 32 ;
    	a128 = 8;
    	a93 = 7;
    	a65 = 16;
    	a54 = 35 ;
    	a146 = 33 ;
    	a41 = 33 ;
    	a120 = 7;
    	a154 = 34 ;
    	a90 = 33 ;
    	a20 = 7;
    	a101 = 36 ;
    	a184 = 9;
    	a119 = 35 ;
    	a167 = 1;
    	a141 = 33 ;
    	a110 = 10;
    	a112 = 32 ;
    	a134 = 15; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 531\n");

    if(((a93 == 3 && a141 == 32) && (a15 == 10 && (a26 == 3 && ((((input == 9) &&  cf==1 ) && a90 == 32) && a165 == 32))))) {
printf("POINT: 532\n");
    	cf = 0;
printf("POINT: 533\n");

    	if((a137 == 35 || (a122 == 35 || !(a128 == 7)))) {
printf("POINT: 534\n");
    	a53 = 33 ;
    	a120 = 11;
    	a200 = 35 ;
    	a184 = 5;
    	a15 = 15;
    	a176 = 6;
    	a179 = 32 ;
    	a134 = 16;
    	a2 = 4;
    	a3 = 34 ;
    	a141 = 33 ;
    	a75 = 5; 
    	}else {
printf("POINT: 536\n");
    	a169 = 34 ;
    	a69 = 33 ;
    	a154 = 34 ;
    	a28 = 11;
    	a46 = 36 ;
    	a39 = 14;
    	a144 = 34 ;
    	a25 = 4;
    	a184 = 10;
    	a41 = 34 ;
    	a93 = 7;
    	a160 = 34 ;
    	a68 = 4;
    	a84 = 33 ;
    	a90 = 36 ;
    	a48 = 36 ;
    	a187 = 6;
    	a53 = 35 ;
    	a200 = 36 ;
    	a121 = 34 ;
    	a176 = 2;
    	a167 = 8;
    	a112 = 36 ;
    	a45 = 36 ;
    	a105 = 15;
    	a2 = 5;
    	a56 = 14;
    	a196 = 10;
    	a158 = 7;
    	a180 = 36 ;
    	a79 = 11;
    	a165 = 34 ;
    	a140 = 9;
    	a115 = 33 ;
    	a64 = 16;
    	a193 = 13;
    	a179 = 36 ;
    	a37 = 10;
    	a30 = 35 ;
    	a119 = 33 ;
    	a150 = 9;
    	a32 = 35 ;
    	a97 = 8;
    	a189 = 12;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 537\n");

    if((((a112 == 32 && a34 == 32) && a119 == 32) && (a95 == 9 && (a115 == 32 && (a39 == 8 && ( cf==1  && (input == 2))))))) {
printf("POINT: 538\n");
    	cf = 0;
printf("POINT: 539\n");

    	if(((a28 == 16 && (a103 == 36 && a142 == 36)) && !(a10 == 4))) {
printf("POINT: 540\n");
    	a41 = 35 ;
    	a95 = 10;
    	a68 = 3;
    	a184 = 12;
    	a17 = 36 ;
    	a118 = 36 ;
    	a180 = 36 ;
    	a105 = 13;
    	a55 = 33 ;
    	a104 = 32 ;
    	a120 = 12;
    	a146 = 32 ;
    	a200 = 36 ;
    	a153 = 9;
    	a51 = 36 ;
    	a154 = 33 ;
    	a196 = 12;
    	a69 = 35 ;
    	a36 = 34 ;
    	a112 = 32 ;
    	a16 = 10;
    	a158 = 11;
    	a79 = 8;
    	a32 = 33 ;
    	a126 = 5;
    	a15 = 15;
    	a37 = 10;
    	a127 = 10;
    	a45 = 35 ;
    	a140 = 9;
    	a46 = 36 ;
    	a193 = 10;
    	a101 = 35 ;
    	a128 = 1;
    	a39 = 11;
    	a160 = 36 ;
    	a90 = 32 ;
    	a185 = 13; 
    	}else {
printf("POINT: 542\n");
    	a37 = 11;
    	a0 = 32 ;
    	a65 = 14;
    	a200 = 34 ;
    	a193 = 10;
    	a146 = 32 ;
    	a88 = 36 ;
    	a16 = 12;
    	a46 = 36 ;
    	a101 = 35 ;
    	a81 = 14;
    	a127 = 12;
    	a112 = 32 ;
    	a109 = 32 ;
    	a56 = 14;
    	a119 = 35 ;
    	a184 = 11;
    	a68 = 3;
    	a196 = 9;
    	a169 = 32 ;
    	a131 = 12;
    	a110 = 12;
    	a160 = 32 ;
    	a187 = 3;
    	a84 = 32 ;
    	a152 = 13;
    	a167 = 1;
    	a165 = 35 ;
    	a154 = 36 ;
    	a41 = 32 ;
    	a20 = 8;
    	a140 = 7;
    	a144 = 35 ;
    	a150 = 11;
    	a164 = 10;
    	a153 = 9;
    	a48 = 36 ;
    	a180 = 33 ;
    	a179 = 33 ;
    	a34 = 33 ;
    	a104 = 33 ;
    	a32 = 32 ;
    	a79 = 11;
    	a128 = 8;
    	a55 = 36 ;
    	a178 = 32 ;
    	a93 = 9;
    	a90 = 35 ;
    	a53 = 32 ;
    	a2 = 6;
    	a135 = 9;
    	a15 = 10;
    	a39 = 12;
    	a121 = 32 ;
    	a28 = 10;
    	a22 = 7;
    	a97 = 9;
    	a105 = 16;
    	a17 = 32 ;
    	a52 = 12;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 543\n");

    if(((a2 == 4 && (((a53 == 32 && a176 == 3) && a37 == 9) && a109 == 32)) && (a68 == 3 && ((input == 7) &&  cf==1 )))) {
printf("POINT: 544\n");
    	cf = 0;
    	a137 = 32 ;
    	a158 = 7;
    	a200 = 36 ;
    	a64 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 545\n");

    if(((a150 == 5 && (a144 == 32 && ((input == 6) &&  cf==1 ))) && (((a101 == 32 && a101 == 32) && a79 == 6) && a140 == 5))) {
printf("POINT: 546\n");
    	cf = 0;
    	a93 = 9;
    	a53 = 32 ;
    	a88 = 33 ;
    	a68 = 7;
    	a152 = 9;
    	a200 = 34 ;
    	a104 = 32 ;
    	a121 = 33 ;
    	a127 = 12;
    	a41 = 33 ;
    	a28 = 15;
    	a150 = 7;
    	a22 = 14;
    	a15 = 9;
    	a109 = 32 ;
    	a91 = 32 ;
    	a131 = 12;
    	a48 = 33 ;
    	a165 = 35 ;
    	a101 = 35 ;
    	a84 = 35 ;
    	a128 = 4;
    	a160 = 33 ;
    	a154 = 33 ;
    	a146 = 35 ;
    	a169 = 32 ;
    	a110 = 9;
    	a32 = 36 ;
    	a167 = 6;
    	a20 = 4;
    	a79 = 8;
    	a196 = 9;
    	a180 = 36 ;
    	a179 = 36 ;
    	a90 = 33 ;
    	a119 = 36 ;
    	a55 = 36 ;
    	a193 = 12;
    	a135 = 15;
    	a97 = 7;
    	a46 = 33 ;
    	a187 = 3;
    	a34 = 36 ;
    	a65 = 9;
    	a105 = 13;
    	a0 = 35 ;
    	a157 = 9; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 547\n");

    if(((((a160 == 32 && (a165 == 32 && a30 == 32)) && a30 == 32) && a121 == 32) && (a12 == 32 && ((input == 10) &&  cf==1 )))) {
printf("POINT: 548\n");
    	cf = 0;
printf("POINT: 549\n");

    	if((((a49 == 8 || !(a187 == 10)) || !(a137 == 35)) || !(a13 == 4))) {
printf("POINT: 550\n");
    	a125 = 35 ;
    	a81 = 10;
    	a97 = 9;
    	a45 = 34 ;
    	a126 = 8;
    	a110 = 7;
    	a28 = 16;
    	a167 = 6;
    	a101 = 36 ;
    	a30 = 36 ;
    	a120 = 10;
    	a118 = 36 ;
    	a53 = 34 ;
    	a127 = 6;
    	a26 = 8;
    	a146 = 34 ;
    	a90 = 34 ;
    	a178 = 35 ;
    	a179 = 36 ;
    	a55 = 35 ;
    	a25 = 7;
    	a128 = 1;
    	a51 = 34 ;
    	a180 = 35 ;
    	a141 = 33 ;
    	a184 = 5;
    	a174 = 13;
    	a144 = 33 ;
    	a37 = 10;
    	a158 = 8;
    	a193 = 9;
    	a69 = 35 ;
    	a187 = 8;
    	a22 = 10;
    	a200 = 36 ;
    	a153 = 7;
    	a109 = 35 ;
    	a65 = 9;
    	a39 = 9;
    	a176 = 7;
    	a122 = 33 ;
    	a140 = 7;
    	a154 = 36 ;
    	a196 = 10;
    	a56 = 11;
    	a113 = 3; 
    	}else {
printf("POINT: 552\n");
    	a167 = 8;
    	a104 = 36 ;
    	a119 = 33 ;
    	a84 = 32 ;
    	a184 = 11;
    	a134 = 13;
    	a20 = 8;
    	a112 = 33 ;
    	a39 = 10;
    	a118 = 33 ;
    	a200 = 35 ;
    	a45 = 33 ;
    	a3 = 34 ;
    	a17 = 36 ;
    	a128 = 6;
    	a53 = 35 ;
    	a150 = 11;
    	a183 = 10;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 553\n");

    if((((a119 == 32 && ( cf==1  && (input == 5))) && a65 == 10) && (a119 == 32 && (a131 == 10 && (a126 == 4 && a88 == 32))))) {
printf("POINT: 554\n");
    	cf = 0;
    	a97 = 3;
    	a81 = 17;
    	a167 = 8;
    	a186 = 36 ;
    	a30 = 35 ;
    	a128 = 4;
    	a69 = 34 ;
    	a20 = 7;
    	a174 = 14;
    	a22 = 10;
    	a153 = 6;
    	a176 = 4;
    	a55 = 36 ;
    	a15 = 16;
    	a110 = 6;
    	a16 = 13;
    	a160 = 32 ;
    	a37 = 13;
    	a45 = 35 ;
    	a152 = 13;
    	a115 = 36 ;
    	a90 = 34 ;
    	a2 = 8;
    	a68 = 5;
    	a88 = 32 ;
    	a17 = 32 ;
    	a112 = 36 ;
    	a32 = 36 ;
    	a26 = 6;
    	a53 = 34 ;
    	a65 = 16;
    	a28 = 13;
    	a121 = 34 ;
    	a131 = 13;
    	a12 = 36 ;
    	a118 = 32 ;
    	a104 = 32 ;
    	a105 = 15;
    	a101 = 34 ;
    	a79 = 8;
    	a180 = 36 ;
    	a165 = 36 ;
    	a144 = 35 ;
    	a46 = 36 ;
    	a146 = 35 ;
    	a48 = 35 ;
    	a119 = 33 ;
    	a127 = 10;
    	a125 = 36 ;
    	a140 = 11;
    	a187 = 7;
    	a179 = 32 ;
    	a39 = 14;
    	a126 = 5;
    	a93 = 2;
    	a34 = 36 ;
    	a56 = 10;
    	a154 = 35 ;
    	a109 = 32 ;
    	a196 = 11;
    	a120 = 5;
    	a200 = 33 ;
    	a84 = 36 ;
    	a95 = 8;
    	a193 = 9;
    	a169 = 32 ;
    	a178 = 33 ;
    	a41 = 35 ;
    	a184 = 8;
    	a86 = 33 ;
    	a25 = 7;
    	a0 = 36 ;
    	a51 = 36 ;
    	a141 = 34 ;
    	a150 = 9;
    	a100 = 35 ; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 555\n");

    if(((a150 == 5 && (( cf==1  && (input == 3)) && a0 == 32)) && ((a25 == 5 && (a152 == 9 && a180 == 32)) && a12 == 32))) {
printf("POINT: 556\n");
    	cf = 0;
printf("POINT: 557\n");

    	if((a146 == 35 && !(a1 == 36))) {
printf("POINT: 558\n");
    	a104 = 36 ;
    	a126 = 7;
    	a101 = 32 ;
    	a185 = 15;
    	a193 = 13;
    	a39 = 14;
    	a196 = 11;
    	a28 = 16;
    	a41 = 35 ;
    	a146 = 33 ;
    	a180 = 33 ;
    	a56 = 9;
    	a187 = 7;
    	a46 = 32 ;
    	a169 = 36 ;
    	a120 = 10;
    	a200 = 36 ;
    	a53 = 33 ;
    	a30 = 32 ;
    	a110 = 11;
    	a118 = 32 ;
    	a51 = 35 ;
    	a158 = 11;
    	a17 = 36 ;
    	a25 = 11;
    	a58 = 4; 
    	}else {
printf("POINT: 560\n");
    	a200 = 33 ;
    	a77 = 7;
    	a167 = 8;
    	a174 = 14;
    	a179 = 34 ;
    	a118 = 36 ;
    	a32 = 36 ;
    	a45 = 35 ;
    	a160 = 33 ;
    	a28 = 10;
    	a141 = 34 ;
    	a56 = 14;
    	a2 = 8;
    	a196 = 6;
    	a104 = 36 ;
    	a125 = 36 ;
    	a30 = 32 ;
    	a178 = 36 ;
    	a127 = 9;
    	a88 = 35 ;
    	a187 = 6;
    	a110 = 8;
    	a46 = 33 ;
    	a144 = 32 ;
    	a15 = 16;
    	a41 = 32 ;
    	a48 = 36 ;
    	a0 = 35 ;
    	a69 = 32 ;
    	a180 = 32 ;
    	a53 = 32 ;
    	a153 = 6;
    	a17 = 36 ;
    	a84 = 35 ;
    	a12 = 35 ;
    	a126 = 8;
    	a154 = 35 ;
    	a39 = 11;
    	a121 = 35 ;
    	a86 = 32 ;
    	a193 = 10;
    	a51 = 32 ;
    	a152 = 9;
    	a140 = 8;
    	a101 = 32 ;
    	a25 = 10;
    	a34 = 36 ;
    	a26 = 3;
    	a146 = 33 ;
    	a68 = 8;
    	a95 = 12;
    	a62 = 6;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 561\n");

    if(((a56 == 9 && ((((input == 8) &&  cf==1 ) && a121 == 32) && a105 == 11)) && ((a154 == 32 && a167 == 2) && a68 == 3))) {
printf("POINT: 562\n");
    	cf = 0;
    	a53 = 35 ;
    	a22 = 10;
    	a178 = 33 ;
    	a65 = 14;
    	a93 = 9;
    	a34 = 35 ;
    	a54 = 36 ;
    	a196 = 11;
    	a179 = 34 ;
    	a152 = 10;
    	a146 = 36 ;
    	a45 = 36 ;
    	a118 = 35 ;
    	a160 = 35 ;
    	a174 = 9;
    	a46 = 33 ;
    	a127 = 13;
    	a81 = 14;
    	a28 = 12;
    	a95 = 12;
    	a104 = 36 ;
    	a180 = 35 ;
    	a84 = 34 ;
    	a119 = 32 ;
    	a68 = 5;
    	a169 = 35 ;
    	a15 = 14;
    	a2 = 10;
    	a144 = 35 ;
    	a48 = 33 ;
    	a126 = 7;
    	a90 = 33 ;
    	a32 = 34 ;
    	a200 = 35 ;
    	a69 = 36 ;
    	a134 = 17;
    	a184 = 6;
    	a191 = 15; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 563\n");

    if((((a120 == 6 && ((input == 4) &&  cf==1 )) && a51 == 32) && (a37 == 9 && ((a118 == 32 && a16 == 10) && a81 == 11)))) {
printf("POINT: 564\n");
    	cf = 0;
    	a93 = 8;
    	a118 = 36 ;
    	a25 = 4;
    	a79 = 5;
    	a17 = 36 ;
    	a28 = 13;
    	a140 = 4;
    	a126 = 7;
    	a20 = 9;
    	a12 = 34 ;
    	a176 = 4;
    	a97 = 6;
    	a146 = 36 ;
    	a15 = 13;
    	a39 = 8;
    	a121 = 32 ;
    	a153 = 6;
    	a104 = 33 ;
    	a48 = 32 ;
    	a34 = 32 ;
    	a30 = 36 ;
    	a55 = 36 ;
    	a127 = 6;
    	a180 = 33 ;
    	a179 = 35 ;
    	a128 = 5;
    	a196 = 11;
    	a115 = 36 ;
    	a165 = 33 ;
    	a41 = 33 ;
    	a88 = 33 ;
    	a101 = 32 ;
    	a105 = 14;
    	a152 = 14;
    	a150 = 11;
    	a169 = 36 ;
    	a26 = 5;
    	a90 = 35 ;
    	a154 = 36 ;
    	a141 = 33 ;
    	a81 = 17;
    	a109 = 33 ;
    	a178 = 32 ;
    	a46 = 33 ;
    	a144 = 32 ;
    	a68 = 7;
    	a119 = 36 ;
    	a160 = 33 ;
    	a187 = 8;
    	a13 = 7;
    	a16 = 14;
    	a84 = 32 ;
    	a51 = 32 ;
    	a110 = 5;
    	a167 = 5;
    	a95 = 12;
    	a112 = 35 ;
    	a174 = 7;
    	a37 = 15;
    	a200 = 34 ;
    	a120 = 9;
    	a0 = 33 ;
    	a45 = 36 ;
    	a56 = 15;
    	a193 = 13;
    	a53 = 32 ;
    	a135 = 8;
    	a65 = 15;
    	a2 = 3;
    	a22 = 13;
    	a32 = 36 ;
    	a69 = 33 ;
    	a131 = 15;
    	a125 = 32 ;
    	a24 = 7; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm74(int input) {
printf("POINT: 565\n");

    if((((a165 == 32 && a37 == 9) && a127 == 7) && (a97 == 4 && ((( cf==1  && (input == 7)) && a109 == 32) && a196 == 6)))) {
printf("POINT: 566\n");
    	cf = 0;
    	a30 = 34 ;
    	a97 = 5;
    	a127 = 8;
    	a135 = 11;
    	a187 = 5;
    	a200 = 34 ;
    	a160 = 34 ;
    	a196 = 7;
    	a115 = 34 ;
    	a144 = 34 ;
    	a46 = 34 ;
    	a65 = 11;
    	a197 = 8;
    	a140 = 6;
    	a180 = 34 ;
    	a104 = 34 ;
    	a16 = 11;
    	a190 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm75(int input) {
printf("POINT: 567\n");

    if(((( cf==1  && (input == 10)) && a81 == 11) && (a25 == 5 && (a65 == 10 && ((a144 == 32 && a169 == 32) && a165 == 32))))) {
printf("POINT: 568\n");
    	cf = 0;
    	a119 = 33 ;
    	a131 = 10;
    	a146 = 32 ;
    	a45 = 32 ;
    	a28 = 10;
    	a180 = 32 ;
    	a84 = 33 ;
    	a81 = 11;
    	a51 = 32 ;
    	a55 = 32 ;
    	a125 = 32 ;
    	a118 = 32 ;
    	a134 = 17;
    	a34 = 32 ;
    	a127 = 7;
    	a90 = 32 ;
    	a54 = 36 ;
    	a154 = 32 ;
    	a2 = 4;
    	a184 = 5;
    	a152 = 8;
    	a46 = 32 ;
    	a112 = 32 ;
    	a196 = 6;
    	a174 = 7;
    	a104 = 32 ;
    	a53 = 32 ;
    	a95 = 8;
    	a20 = 4;
    	a22 = 7;
    	a69 = 33 ;
    	a48 = 32 ;
    	a15 = 9;
    	a144 = 32 ;
    	a126 = 4;
    	a200 = 35 ;
    	a65 = 10;
    	a160 = 32 ;
    	a32 = 33 ;
    	a68 = 2;
    	a169 = 32 ;
    	a105 = 11;
    	a178 = 32 ;
    	a179 = 33 ;
    	a93 = 3;
    	a191 = 15; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 569\n");

    if(((((a127 == 7 && a53 == 32) && a169 == 32) && a196 == 6) && (a93 == 3 && (((input == 1) &&  cf==1 ) && a45 == 32)))) {
printf("POINT: 570\n");
    	cf = 0;
    	a90 = 32 ;
    	a51 = 33 ;
    	a141 = 32 ;
    	a68 = 2;
    	a30 = 32 ;
    	a118 = 32 ;
    	a12 = 32 ;
    	a140 = 6;
    	a125 = 33 ;
    	a55 = 32 ;
    	a16 = 10;
    	a131 = 10;
    	a26 = 3;
    	a112 = 32 ;
    	a86 = 35 ;
    	a22 = 7;
    	a41 = 32 ;
    	a15 = 10;
    	a81 = 11;
    	a119 = 33 ;
    	a20 = 4;
    	a167 = 2;
    	a69 = 32 ;
    	a84 = 32 ;
    	a174 = 7;
    	a88 = 32 ;
    	a45 = 32 ;
    	a128 = 2;
    	a56 = 9;
    	a105 = 11;
    	a152 = 9;
    	a39 = 8;
    	a79 = 6;
    	a154 = 32 ;
    	a120 = 6;
    	a37 = 9;
    	a196 = 6;
    	a95 = 9;
    	a184 = 5;
    	a198 = 33 ;
    	a144 = 32 ;
    	a110 = 6;
    	a179 = 33 ;
    	a32 = 32 ;
    	a61 = 2; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 571\n");

    if(((a110 == 6 && (a153 == 4 && a28 == 10)) && ((a118 == 32 && (a146 == 32 && ((input == 3) &&  cf==1 ))) && a150 == 5))) {
printf("POINT: 572\n");
    	cf = 0;
    	a45 = 33 ;
    	a53 = 33 ;
    	a115 = 32 ;
    	a110 = 5;
    	a46 = 32 ;
    	a30 = 32 ;
    	a150 = 5;
    	a104 = 32 ;
    	a17 = 33 ;
    	a180 = 32 ;
    	a2 = 4;
    	a0 = 32 ;
    	a176 = 3;
    	a56 = 9;
    	a41 = 32 ;
    	a121 = 32 ;
    	a65 = 10;
    	a165 = 32 ;
    	a88 = 32 ;
    	a48 = 32 ;
    	a34 = 33 ;
    	a37 = 9;
    	a127 = 7;
    	a144 = 32 ;
    	a16 = 9;
    	a97 = 4;
    	a25 = 4;
    	a109 = 32 ;
    	a39 = 8;
    	a146 = 33 ;
    	a193 = 8;
    	a81 = 11;
    	a126 = 4;
    	a26 = 3;
    	a178 = 32 ;
    	a128 = 2;
    	a12 = 32 ;
    	a141 = 32 ;
    	a200 = 33 ;
    	a77 = 6;
    	a140 = 6;
    	a169 = 32 ;
    	a187 = 4;
    	a196 = 5;
    	a160 = 33 ;
    	a86 = 32 ;
    	a90 = 32 ;
    	a79 = 6;
    	a167 = 2;
    	a28 = 9;
    	a101 = 32 ;
    	a153 = 4;
    	a93 = 3;
    	a120 = 6;
    	a118 = 33 ;
    	a136 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm76(int input) {
printf("POINT: 573\n");

    if((((a154 == 32 && (a115 == 32 && (( cf==1  && (input == 6)) && a101 == 32))) && a127 == 7) && (a79 == 6 && a184 == 6))) {
printf("POINT: 574\n");
    	cf = 0;
    	a196 = 6;
    	a69 = 33 ;
    	a25 = 5;
    	a112 = 33 ;
    	a3 = 35 ;
    	a126 = 4;
    	a34 = 32 ;
    	a110 = 5;
    	a68 = 3;
    	a169 = 32 ;
    	a146 = 32 ;
    	a105 = 10;
    	a48 = 34 ;
    	a65 = 10;
    	a32 = 33 ;
    	a141 = 32 ;
    	a53 = 33 ;
    	a51 = 32 ;
    	a119 = 32 ;
    	a84 = 33 ;
    	a28 = 10;
    	a118 = 32 ;
    	a109 = 33 ;
    	a26 = 3;
    	a56 = 9;
    	a16 = 10;
    	a55 = 32 ;
    	a154 = 32 ;
    	a20 = 4;
    	a134 = 16;
    	a179 = 34 ;
    	a88 = 32 ;
    	a12 = 32 ;
    	a22 = 8;
    	a160 = 33 ;
    	a90 = 32 ;
    	a127 = 7;
    	a187 = 4;
    	a30 = 33 ;
    	a45 = 33 ;
    	a193 = 9;
    	a200 = 35 ;
    	a140 = 4;
    	a125 = 33 ;
    	a144 = 33 ;
    	a152 = 9;
    	a178 = 32 ;
    	a153 = 4;
    	a184 = 5;
    	a167 = 2;
    	a121 = 32 ;
    	a174 = 7;
    	a46 = 32 ;
    	a104 = 33 ;
    	a58 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 575\n");

    if((((a131 == 10 && (a37 == 9 && (a39 == 8 && ((input == 5) &&  cf==1 )))) && a2 == 4) && (a178 == 32 && a97 == 4))) {
printf("POINT: 576\n");
    	cf = 0;
    	a118 = 34 ;
    	a126 = 3;
    	a30 = 34 ;
    	a140 = 4;
    	a55 = 33 ;
    	a180 = 32 ;
    	a25 = 5;
    	a101 = 32 ;
    	a193 = 8;
    	a179 = 34 ;
    	a153 = 4;
    	a125 = 33 ;
    	a178 = 32 ;
    	a51 = 32 ;
    	a200 = 36 ;
    	a26 = 3;
    	a39 = 8;
    	a81 = 11;
    	a196 = 6;
    	a144 = 32 ;
    	a167 = 2;
    	a22 = 9;
    	a122 = 33 ;
    	a158 = 8;
    	a90 = 33 ;
    	a176 = 3;
    	a174 = 9;
    	a127 = 7;
    	a110 = 5;
    	a45 = 33 ;
    	a109 = 33 ;
    	a53 = 33 ;
    	a65 = 11;
    	a69 = 33 ;
    	a97 = 4;
    	a128 = 2;
    	a37 = 9;
    	a120 = 6;
    	a146 = 32 ;
    	a187 = 4;
    	a154 = 32 ;
    	a56 = 10;
    	a28 = 9;
    	a141 = 32 ;
    	a184 = 6;
    	a113 = 3; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 577\n");

    if(((((a141 == 32 && a146 == 32) && a81 == 11) && a16 == 10) && (a16 == 10 && (a193 == 8 && ((input == 7) &&  cf==1 ))))) {
printf("POINT: 578\n");
    	cf = 0;
    	a41 = 32 ;
    	a2 = 4;
    	a12 = 33 ;
    	a20 = 4;
    	a22 = 8;
    	a144 = 32 ;
    	a0 = 33 ;
    	a68 = 2;
    	a115 = 32 ;
    	a127 = 7;
    	a105 = 11;
    	a48 = 32 ;
    	a187 = 3;
    	a141 = 33 ;
    	a162 = 32 ;
    	a179 = 34 ;
    	a121 = 32 ;
    	a101 = 32 ;
    	a196 = 6;
    	a32 = 32 ;
    	a95 = 8;
    	a29 = 34 ;
    	a97 = 4;
    	a150 = 4;
    	a154 = 32 ;
    	a118 = 32 ;
    	a39 = 8;
    	a152 = 9;
    	a200 = 33 ;
    	a56 = 9;
    	a79 = 5;
    	a15 = 9;
    	a146 = 33 ;
    	a167 = 2;
    	a120 = 6;
    	a180 = 32 ;
    	a51 = 32 ;
    	a193 = 7;
    	a30 = 32 ;
    	a128 = 2;
    	a119 = 32 ;
    	a184 = 5;
    	a160 = 32 ;
    	a81 = 11;
    	a34 = 32 ;
    	a37 = 8;
    	a16 = 10;
    	a17 = 32 ;
    	a88 = 33 ;
    	a131 = 10;
    	a46 = 33 ;
    	a153 = 4;
    	a165 = 33 ;
    	a25 = 4;
    	a65 = 10;
    	a178 = 32 ;
    	a169 = 32 ;
    	a176 = 3;
    	a93 = 3;
    	a84 = 33 ;
    	a104 = 33 ;
    	a174 = 9;
    	a86 = 36 ;
    	a112 = 33 ;
    	a26 = 2; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 579\n");

    if(((a97 == 4 && (a34 == 32 && ((( cf==1  && (input == 1)) && a41 == 32) && a160 == 32))) && (a193 == 8 && a41 == 32))) {
printf("POINT: 580\n");
    	cf = 0;
    	a135 = 15;
    	a93 = 4;
    	a169 = 34 ;
    	a20 = 5;
    	a115 = 34 ;
    	a90 = 34 ;
    	a146 = 34 ;
    	a17 = 34 ;
    	a119 = 34 ;
    	a176 = 4;
    	a196 = 7;
    	a125 = 34 ;
    	a53 = 34 ;
    	a40 = 33 ;
    	a187 = 5;
    	a128 = 3;
    	a32 = 34 ;
    	a154 = 34 ;
    	a180 = 34 ;
    	a167 = 3;
    	a104 = 34 ;
    	a200 = 34 ;
    	a157 = 6; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm77(int input) {
printf("POINT: 581\n");

    if(((a179 == 32 && (a45 == 32 && ((input == 5) &&  cf==1 ))) && (((a146 == 32 && a95 == 9) && a121 == 32) && a45 == 32))) {
printf("POINT: 582\n");
    	cf = 0;
    	a121 = 33 ;
    	a179 = 33 ;
    	a200 = 33 ;
    	a180 = 33 ;
    	a100 = 33 ;
    	a146 = 33 ;
    	a86 = 33 ;
    	a160 = 33 ;
    	a186 = 36 ;
    	a126 = 3; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm78(int input) {
printf("POINT: 583\n");

    if(((a51 == 32 && a187 == 4) && ((((( cf==1  && (input == 5)) && a165 == 32) && a121 == 32) && a90 == 32) && a110 == 6))) {
printf("POINT: 584\n");
    	cf = 0;
    	a164 = 13;
    	a200 = 35 ;
    	a134 = 10;
    	a157 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 585\n");

    if((((a25 == 5 && a69 == 32) && a15 == 10) && (a165 == 32 && (a184 == 6 && (a176 == 3 && ((input == 4) &&  cf==1 )))))) {
printf("POINT: 586\n");
    	cf = 0;
    	a28 = 11;
    	a109 = 32 ;
    	a141 = 34 ;
    	a200 = 36 ;
    	a184 = 5;
    	a53 = 33 ;
    	a125 = 33 ;
    	a68 = 4;
    	a30 = 33 ;
    	a56 = 8;
    	a144 = 33 ;
    	a128 = 2;
    	a193 = 8;
    	a39 = 7;
    	a176 = 4;
    	a160 = 33 ;
    	a153 = 4;
    	a42 = 34 ;
    	a127 = 8;
    	a46 = 33 ;
    	a167 = 3;
    	a90 = 34 ;
    	a26 = 2;
    	a84 = 33 ;
    	a25 = 6;
    	a17 = 33 ;
    	a196 = 7;
    	a158 = 7;
    	a69 = 33 ;
    	a105 = 12;
    	a2 = 3;
    	a112 = 33 ;
    	a180 = 33 ;
    	a32 = 33 ;
    	a169 = 33 ;
    	a51 = 33 ;
    	a45 = 33 ;
    	a48 = 34 ;
    	a174 = 7;
    	a15 = 9;
    	a115 = 33 ;
    	a37 = 10;
    	a104 = 33 ;
    	a64 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm8(int input) {
printf("POINT: 587\n");

    if((((a131 == 10 && ( cf==1  && a58 == 2)) && a110 == 6) && (a48 == 32 && ((a41 == 32 && a39 == 8) && a20 == 4)))) {
printf("POINT: 588\n");
printf("POINT: 589\n");

    	if((((a93 == 3 && (a39 == 8 && a126 == 4)) && a101 == 32) && (a39 == 8 && (a178 == 32 && ( cf==1  && a27 == 35))))) {
printf("POINT: 590\n");
    		calculate_outputm71(input);
    	} 
printf("POINT: 591\n");

    	if(((a95 == 9 && (a121 == 32 && (a167 == 2 && (a154 == 32 && ( cf==1  && a27 == 36))))) && (a121 == 32 && a112 == 32))) {
printf("POINT: 592\n");
    		calculate_outputm72(input);
    	} 
    } 
printf("POINT: 593\n");

    if((((a121 == 32 && (a84 == 32 && (a125 == 32 && (a109 == 32 && a30 == 32)))) && a150 == 5) && ( cf==1  && a58 == 3))) {
printf("POINT: 594\n");
printf("POINT: 595\n");

    	if((((a110 == 6 && a119 == 32) && a165 == 32) && ((((a76 == 7 &&  cf==1 ) && a127 == 7) && a179 == 32) && a180 == 32))) {
printf("POINT: 596\n");
    		calculate_outputm73(input);
    	} 
    } 
printf("POINT: 597\n");

    if((((a58 == 4 &&  cf==1 ) && a90 == 32) && ((((a90 == 32 && a12 == 32) && a16 == 10) && a121 == 32) && a65 == 10))) {
printf("POINT: 598\n");
printf("POINT: 599\n");

    	if(((a160 == 32 && (( cf==1  && a74 == 34) && a65 == 10)) && (((a131 == 10 && a30 == 32) && a140 == 5) && a115 == 32))) {
printf("POINT: 600\n");
    		calculate_outputm74(input);
    	} 
printf("POINT: 601\n");

    	if((((a34 == 32 && (a165 == 32 && (a109 == 32 && (a178 == 32 && a17 == 32)))) && a144 == 32) && ( cf==1  && a74 == 35))) {
printf("POINT: 602\n");
    		calculate_outputm75(input);
    	} 
    } 
printf("POINT: 603\n");

    if(((a154 == 32 && ((a58 == 5 &&  cf==1 ) && a48 == 32)) && (a176 == 3 && ((a112 == 32 && a152 == 9) && a41 == 32)))) {
printf("POINT: 604\n");
printf("POINT: 605\n");

    	if(((a176 == 3 && (a0 == 32 && ( cf==1  && a72 == 4))) && (((a167 == 2 && a196 == 6) && a17 == 32) && a26 == 3))) {
printf("POINT: 606\n");
    		calculate_outputm76(input);
    	} 
printf("POINT: 607\n");

    	if(((a65 == 10 && a25 == 5) && ((((a121 == 32 && (a72 == 5 &&  cf==1 )) && a26 == 3) && a22 == 8) && a126 == 4))) {
printf("POINT: 608\n");
    		calculate_outputm77(input);
    	} 
    } 
printf("POINT: 609\n");

    if(((a178 == 32 && (a65 == 10 && (a65 == 10 && a101 == 32))) && (a110 == 6 && (( cf==1  && a58 == 7) && a2 == 4)))) {
printf("POINT: 610\n");
printf("POINT: 611\n");

    	if(((a37 == 9 && a180 == 32) && (a0 == 32 && ((a25 == 5 && ((a35 == 33 &&  cf==1 ) && a65 == 10)) && a56 == 9)))) {
printf("POINT: 612\n");
    		calculate_outputm78(input);
    	} 
    } 
}
 void calculate_outputm79(int input) {
printf("POINT: 613\n");

    if(((a187 == 4 && (a95 == 9 && (a16 == 10 && a17 == 32))) && (a125 == 32 && (a193 == 8 && ( cf==1  && (input == 3)))))) {
printf("POINT: 614\n");
    	cf = 0;
    	a128 = 3;
    	a187 = 5;
    	a100 = 34 ;
    	a140 = 6;
    	a121 = 34 ;
    	a200 = 35 ;
    	a139 = 35 ;
    	a16 = 11;
    	a134 = 14; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm80(int input) {
printf("POINT: 615\n");

    if(((a0 == 32 && (a169 == 32 && a178 == 32)) && (a84 == 32 && ((( cf==1  && (input == 10)) && a140 == 5) && a101 == 32)))) {
printf("POINT: 616\n");
    	cf = 0;
    	a200 = 35 ;
    	a103 = 35 ;
    	a138 = 32 ;
    	a134 = 11; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 617\n");

    if(((a109 == 32 && (a90 == 32 && (a119 == 32 && ((input == 3) &&  cf==1 )))) && ((a0 == 32 && a187 == 4) && a110 == 6))) {
printf("POINT: 618\n");
    	cf = 0;
    	a48 = 32 ;
    	a153 = 4;
    	a53 = 32 ;
    	a55 = 32 ;
    	a184 = 6;
    	a154 = 32 ;
    	a144 = 32 ;
    	a165 = 32 ;
    	a69 = 32 ;
    	a125 = 32 ;
    	a176 = 3;
    	a12 = 32 ;
    	a45 = 32 ;
    	a32 = 32 ;
    	a88 = 32 ;
    	a25 = 6;
    	a56 = 9;
    	a128 = 2;
    	a174 = 8;
    	a193 = 8;
    	a30 = 32 ;
    	a16 = 10;
    	a51 = 32 ;
    	a126 = 4;
    	a26 = 3;
    	a15 = 11;
    	a141 = 32 ;
    	a93 = 3;
    	a37 = 9;
    	a46 = 32 ;
    	a131 = 10;
    	a2 = 4;
    	a20 = 4;
    	a146 = 32 ;
    	a118 = 34 ;
    	a41 = 32 ;
    	a105 = 11;
    	a179 = 32 ;
    	a160 = 32 ;
    	a65 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 619\n");

    if(((a79 == 6 && (a39 == 8 && a110 == 6)) && (a167 == 2 && ((a120 == 6 && ((input == 6) &&  cf==1 )) && a97 == 4)))) {
printf("POINT: 620\n");
    	cf = 0;
    	a53 = 34 ;
    	a97 = 5;
    	a104 = 34 ;
    	a110 = 7;
    	a169 = 34 ;
    	a200 = 36 ;
    	a48 = 34 ;
    	a137 = 34 ;
    	a127 = 8;
    	a41 = 34 ;
    	a153 = 5;
    	a125 = 34 ;
    	a152 = 10;
    	a167 = 3;
    	a158 = 7;
    	a37 = 10;
    	a184 = 7;
    	a160 = 34 ;
    	a32 = 34 ;
    	a93 = 4;
    	a180 = 34 ;
    	a187 = 5;
    	a26 = 4;
    	a109 = 34 ;
    	a64 = 10; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm81(int input) {
printf("POINT: 621\n");

    if((((a93 == 3 && a127 == 7) && a128 == 2) && (a105 == 11 && (a88 == 32 && (((input == 5) &&  cf==1 ) && a20 == 4))))) {
printf("POINT: 622\n");
    	cf = 0;
printf("POINT: 623\n");

    	if(a84 == 34) {
printf("POINT: 624\n");
    	a169 = 33 ;
    	a2 = 8;
    	a154 = 34 ;
    	a134 = 12;
    	a55 = 34 ;
    	a179 = 36 ;
    	a152 = 10;
    	a25 = 9;
    	a45 = 36 ;
    	a176 = 2;
    	a41 = 33 ;
    	a200 = 35 ;
    	a128 = 7;
    	a56 = 13;
    	a120 = 12;
    	a94 = 35 ;
    	a39 = 11;
    	a53 = 32 ;
    	a105 = 16;
    	a174 = 7;
    	a141 = 33 ;
    	a93 = 6;
    	a17 = 36 ;
    	a191 = 13; 
    	}else {
printf("POINT: 626\n");
    	a53 = 32 ;
    	a134 = 16;
    	a15 = 16;
    	a2 = 3;
    	a120 = 8;
    	a3 = 34 ;
    	a200 = 35 ;
    	a176 = 3;
    	a141 = 32 ;
    	a75 = 5;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 627\n");

    if((((a118 == 32 && ( cf==1  && (input == 4))) && a127 == 7) && (a90 == 32 && (a105 == 11 && (a174 == 8 && a0 == 32))))) {
printf("POINT: 628\n");
    	cf = 0;
    	a48 = 33 ;
    	a25 = 5;
    	a30 = 35 ;
    	a84 = 34 ;
    	a141 = 33 ;
    	a69 = 35 ;
    	a32 = 36 ;
    	a146 = 36 ;
    	a135 = 12;
    	a51 = 35 ;
    	a22 = 10;
    	a153 = 4;
    	a174 = 11;
    	a37 = 13;
    	a110 = 9;
    	a126 = 5;
    	a17 = 33 ;
    	a125 = 33 ;
    	a167 = 7;
    	a79 = 9;
    	a184 = 5;
    	a20 = 8;
    	a178 = 33 ;
    	a2 = 6;
    	a12 = 32 ;
    	a176 = 5;
    	a112 = 33 ;
    	a120 = 12;
    	a150 = 11;
    	a152 = 12;
    	a88 = 36 ;
    	a41 = 33 ;
    	a90 = 33 ;
    	a55 = 33 ;
    	a95 = 15;
    	a127 = 12;
    	a0 = 36 ;
    	a160 = 33 ;
    	a109 = 36 ;
    	a81 = 14;
    	a140 = 11;
    	a128 = 6;
    	a193 = 13;
    	a104 = 36 ;
    	a144 = 34 ;
    	a121 = 35 ;
    	a200 = 34 ;
    	a39 = 12;
    	a187 = 4;
    	a68 = 5;
    	a154 = 32 ;
    	a65 = 15;
    	a28 = 11;
    	a131 = 13;
    	a34 = 35 ;
    	a105 = 13;
    	a115 = 34 ;
    	a26 = 7;
    	a94 = 32 ;
    	a180 = 35 ;
    	a118 = 36 ;
    	a169 = 33 ;
    	a56 = 8;
    	a119 = 36 ;
    	a16 = 11;
    	a196 = 8;
    	a53 = 32 ;
    	a101 = 35 ;
    	a46 = 33 ;
    	a45 = 34 ;
    	a97 = 7;
    	a15 = 14;
    	a93 = 2;
    	a165 = 34 ;
    	a156 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 629\n");

    if(((a160 == 32 && ((a118 == 32 && a39 == 8) && a140 == 5)) && (a128 == 2 && (( cf==1  && (input == 3)) && a140 == 5)))) {
printf("POINT: 630\n");
    	cf = 0;
    	a25 = 11;
    	a32 = 36 ;
    	a15 = 13;
    	a51 = 36 ;
    	a140 = 8;
    	a158 = 9;
    	a39 = 11;
    	a90 = 35 ;
    	a17 = 34 ;
    	a154 = 33 ;
    	a95 = 12;
    	a37 = 13;
    	a97 = 9;
    	a179 = 36 ;
    	a120 = 10;
    	a112 = 34 ;
    	a110 = 6;
    	a45 = 33 ;
    	a28 = 12;
    	a41 = 35 ;
    	a81 = 17;
    	a174 = 10;
    	a178 = 35 ;
    	a68 = 6;
    	a43 = 34 ;
    	a153 = 6;
    	a160 = 32 ;
    	a84 = 35 ;
    	a152 = 12;
    	a126 = 7;
    	a105 = 10;
    	a146 = 35 ;
    	a104 = 36 ;
    	a26 = 7;
    	a2 = 10;
    	a93 = 6;
    	a144 = 33 ;
    	a46 = 36 ;
    	a184 = 7;
    	a176 = 6;
    	a200 = 36 ;
    	a22 = 11;
    	a169 = 32 ;
    	a69 = 33 ;
    	a136 = 9; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 631\n");

    if(((a104 == 32 && (a26 == 3 && (a167 == 2 && a41 == 32))) && ((a150 == 5 && ( cf==1  && (input == 7))) && a131 == 10))) {
printf("POINT: 632\n");
    	cf = 0;
    	a180 = 36 ;
    	a200 = 36 ;
    	a32 = 36 ;
    	a22 = 12;
    	a101 = 32 ;
    	a55 = 33 ;
    	a112 = 32 ;
    	a53 = 33 ;
    	a46 = 36 ;
    	a79 = 9;
    	a81 = 11;
    	a118 = 35 ;
    	a158 = 12;
    	a84 = 34 ;
    	a179 = 36 ;
    	a127 = 6;
    	a119 = 35 ;
    	a71 = 12; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 633\n");

    if((((((( cf==1  && (input == 1)) && a81 == 11) && a152 == 9) && a90 == 32) && a95 == 9) && (a37 == 9 && a28 == 10))) {
printf("POINT: 634\n");
    	cf = 0;
printf("POINT: 635\n");

    	if(a91 == 35) {
printf("POINT: 636\n");
    	a109 = 32 ;
    	a193 = 9;
    	a69 = 32 ;
    	a84 = 32 ;
    	a101 = 32 ;
    	a179 = 36 ;
    	a176 = 8;
    	a17 = 33 ;
    	a115 = 34 ;
    	a140 = 6;
    	a105 = 14;
    	a32 = 34 ;
    	a95 = 12;
    	a90 = 34 ;
    	a200 = 33 ;
    	a150 = 11;
    	a2 = 5;
    	a125 = 36 ;
    	a184 = 10;
    	a104 = 35 ;
    	a29 = 34 ;
    	a187 = 6;
    	a46 = 34 ;
    	a167 = 1;
    	a126 = 7;
    	a68 = 8;
    	a79 = 11;
    	a28 = 13;
    	a37 = 13;
    	a112 = 34 ;
    	a152 = 11;
    	a48 = 35 ;
    	a127 = 11;
    	a169 = 33 ;
    	a16 = 11;
    	a65 = 14;
    	a110 = 11;
    	a41 = 33 ;
    	a53 = 32 ;
    	a30 = 35 ;
    	a15 = 16;
    	a93 = 9;
    	a160 = 35 ;
    	a39 = 14;
    	a86 = 36 ;
    	a45 = 34 ;
    	a25 = 11;
    	a174 = 12;
    	a144 = 36 ;
    	a154 = 32 ;
    	a162 = 33 ; 
    	}else {
printf("POINT: 638\n");
    	a51 = 32 ;
    	a81 = 11;
    	a69 = 36 ;
    	a105 = 11;
    	a41 = 36 ;
    	a146 = 35 ;
    	a100 = 32 ;
    	a109 = 32 ;
    	a196 = 10;
    	a112 = 35 ;
    	a121 = 33 ;
    	a28 = 13;
    	a26 = 2;
    	a101 = 33 ;
    	a37 = 11;
    	a140 = 8;
    	a119 = 36 ;
    	a55 = 35 ;
    	a97 = 9;
    	a180 = 36 ;
    	a53 = 36 ;
    	a39 = 10;
    	a184 = 6;
    	a94 = 36 ;
    	a187 = 9;
    	a152 = 13;
    	a68 = 8;
    	a17 = 33 ;
    	a200 = 34 ;
    	a115 = 35 ;
    	a104 = 33 ;
    	a46 = 33 ;
    	a128 = 5;
    	a178 = 36 ;
    	a135 = 12;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 639\n");

    if((((a51 == 32 && a37 == 9) && a69 == 32) && ((a93 == 3 && (( cf==1  && (input == 6)) && a55 == 32)) && a22 == 8))) {
printf("POINT: 640\n");
    	cf = 0;
    	a179 = 33 ;
    	a53 = 36 ;
    	a184 = 10;
    	a26 = 7;
    	a118 = 32 ;
    	a200 = 36 ;
    	a158 = 7;
    	a187 = 10;
    	a137 = 34 ;
    	a153 = 6;
    	a97 = 6;
    	a104 = 33 ;
    	a41 = 32 ;
    	a32 = 32 ;
    	a15 = 13;
    	a127 = 12;
    	a109 = 33 ;
    	a25 = 7;
    	a160 = 33 ;
    	a167 = 5;
    	a93 = 7;
    	a125 = 36 ;
    	a48 = 35 ;
    	a37 = 15;
    	a169 = 35 ;
    	a110 = 9;
    	a180 = 35 ;
    	a152 = 11;
    	a64 = 10; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 641\n");

    if(((a51 == 32 && (a22 == 8 && (a93 == 3 && (((input == 9) &&  cf==1 ) && a46 == 32)))) && (a69 == 32 && a22 == 8))) {
printf("POINT: 642\n");
    	cf = 0;
    	a158 = 9;
    	a85 = 34 ;
    	a200 = 36 ;
    	a136 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 643\n");

    if(((((input == 8) &&  cf==1 ) && a90 == 32) && (a146 == 32 && ((a169 == 32 && (a79 == 6 && a15 == 10)) && a184 == 6)))) {
printf("POINT: 644\n");
    	cf = 0;
    	a28 = 13;
    	a37 = 10;
    	a154 = 35 ;
    	a45 = 34 ;
    	a125 = 33 ;
    	a95 = 13;
    	a54 = 35 ;
    	a32 = 34 ;
    	a152 = 13;
    	a48 = 33 ;
    	a167 = 3;
    	a93 = 4;
    	a12 = 36 ;
    	a41 = 36 ;
    	a187 = 3;
    	a112 = 36 ;
    	a128 = 5;
    	a110 = 8;
    	a146 = 35 ;
    	a88 = 33 ;
    	a141 = 34 ;
    	a101 = 36 ;
    	a179 = 33 ;
    	a115 = 35 ;
    	a65 = 12;
    	a69 = 33 ;
    	a169 = 33 ;
    	a119 = 35 ;
    	a2 = 10;
    	a120 = 7;
    	a84 = 34 ;
    	a127 = 6;
    	a131 = 12;
    	a90 = 32 ;
    	a30 = 33 ;
    	a198 = 32 ;
    	a184 = 6;
    	a20 = 9;
    	a39 = 12;
    	a193 = 8;
    	a17 = 36 ;
    	a134 = 15; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 645\n");

    if(((a81 == 11 && (((input == 10) &&  cf==1 ) && a112 == 32)) && (a2 == 4 && (a180 == 32 && (a109 == 32 && a17 == 32))))) {
printf("POINT: 646\n");
    	cf = 0;
    	a17 = 32 ;
    	a140 = 11;
    	a93 = 5;
    	a135 = 10;
    	a200 = 34 ;
    	a160 = 35 ;
    	a138 = 35 ;
    	a30 = 36 ;
    	a97 = 4;
    	a180 = 33 ;
    	a187 = 6;
    	a121 = 32 ;
    	a84 = 35 ;
    	a53 = 36 ;
    	a79 = 12;
    	a39 = 8;
    	a105 = 15;
    	a51 = 32 ;
    	a146 = 36 ;
    	a167 = 4;
    	a104 = 35 ;
    	a120 = 8;
    	a128 = 8;
    	a46 = 35 ;
    	a174 = 14;
    	a196 = 9;
    	a26 = 5;
    	a34 = 36 ;
    	a154 = 32 ;
    	a165 = 32 ;
    	a193 = 11;
    	a20 = 10;
    	a45 = 35 ;
    	a152 = 8;
    	a37 = 9;
    	a22 = 11;
    	a48 = 35 ;
    	a32 = 33 ;
    	a0 = 35 ;
    	a15 = 13;
    	a150 = 9;
    	a95 = 15;
    	a28 = 12;
    	a126 = 4;
    	a109 = 33 ;
    	a178 = 33 ;
    	a56 = 9;
    	a171 = 5; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 647\n");

    if(((((a81 == 11 && (a34 == 32 && ( cf==1  && (input == 2)))) && a187 == 4) && a81 == 11) && (a84 == 32 && a154 == 32))) {
printf("POINT: 648\n");
    	cf = 0;
    	a128 = 7;
    	a165 = 32 ;
    	a81 = 16;
    	a34 = 36 ;
    	a15 = 15;
    	a90 = 35 ;
    	a121 = 33 ;
    	a45 = 32 ;
    	a46 = 35 ;
    	a135 = 8;
    	a140 = 10;
    	a131 = 13;
    	a119 = 35 ;
    	a144 = 36 ;
    	a120 = 9;
    	a187 = 7;
    	a179 = 34 ;
    	a125 = 35 ;
    	a180 = 35 ;
    	a154 = 35 ;
    	a2 = 6;
    	a13 = 5;
    	a93 = 9;
    	a101 = 33 ;
    	a118 = 35 ;
    	a174 = 12;
    	a20 = 9;
    	a169 = 32 ;
    	a0 = 33 ;
    	a37 = 9;
    	a68 = 2;
    	a30 = 36 ;
    	a25 = 10;
    	a196 = 11;
    	a112 = 35 ;
    	a53 = 36 ;
    	a79 = 8;
    	a16 = 12;
    	a95 = 8;
    	a65 = 12;
    	a127 = 6;
    	a28 = 13;
    	a105 = 15;
    	a12 = 32 ;
    	a41 = 33 ;
    	a146 = 33 ;
    	a104 = 36 ;
    	a176 = 8;
    	a160 = 33 ;
    	a56 = 12;
    	a115 = 33 ;
    	a26 = 9;
    	a97 = 9;
    	a150 = 11;
    	a48 = 35 ;
    	a200 = 34 ;
    	a69 = 32 ;
    	a32 = 32 ;
    	a88 = 33 ;
    	a6 = 11; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm82(int input) {
printf("POINT: 649\n");

    if((((a69 == 32 && ((( cf==1  && (input == 4)) && a165 == 32) && a55 == 32)) && a17 == 32) && (a97 == 4 && a45 == 32))) {
printf("POINT: 650\n");
    	cf = 0;
    	a36 = 33 ;
    	a200 = 35 ;
    	a134 = 10;
    	a164 = 8; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 651\n");

    if(((((a84 == 32 && a32 == 32) && a97 == 4) && a179 == 32) && (a41 == 32 && (( cf==1  && (input == 7)) && a48 == 32)))) {
printf("POINT: 652\n");
    	cf = 0;
    	a153 = 4;
    	a45 = 32 ;
    	a196 = 6;
    	a185 = 15;
    	a17 = 32 ;
    	a79 = 6;
    	a105 = 11;
    	a56 = 9;
    	a104 = 32 ;
    	a101 = 32 ;
    	a169 = 32 ;
    	a28 = 10;
    	a68 = 3;
    	a174 = 8;
    	a178 = 32 ;
    	a152 = 9;
    	a184 = 6;
    	a193 = 8;
    	a146 = 32 ;
    	a180 = 32 ;
    	a128 = 2;
    	a200 = 36 ;
    	a165 = 32 ;
    	a150 = 5;
    	a93 = 3;
    	a110 = 6;
    	a158 = 11;
    	a144 = 32 ;
    	a126 = 4;
    	a30 = 32 ;
    	a119 = 32 ;
    	a176 = 3;
    	a81 = 11;
    	a41 = 32 ;
    	a187 = 4;
    	a95 = 9;
    	a154 = 32 ;
    	a112 = 32 ;
    	a84 = 32 ;
    	a160 = 32 ;
    	a46 = 32 ;
    	a39 = 8;
    	a118 = 32 ;
    	a51 = 32 ;
    	a22 = 8;
    	a58 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 653\n");

    if((((a25 == 5 && (a101 == 32 && a146 == 32)) && a167 == 2) && ((a101 == 32 && ((input == 9) &&  cf==1 )) && a174 == 8))) {
printf("POINT: 654\n");
    	cf = 0;
    	a62 = 5;
    	a105 = 11;
    	a152 = 9;
    	a81 = 11;
    	a37 = 9;
    	a176 = 3;
    	a109 = 32 ;
    	a165 = 32 ;
    	a167 = 2;
    	a180 = 32 ;
    	a48 = 32 ;
    	a158 = 12;
    	a45 = 32 ;
    	a39 = 8;
    	a51 = 32 ;
    	a112 = 32 ;
    	a65 = 10;
    	a17 = 32 ;
    	a127 = 7;
    	a174 = 8;
    	a178 = 32 ;
    	a28 = 10;
    	a193 = 8;
    	a79 = 6;
    	a90 = 32 ;
    	a160 = 32 ;
    	a120 = 6;
    	a154 = 32 ;
    	a46 = 32 ;
    	a32 = 32 ;
    	a84 = 32 ;
    	a140 = 5;
    	a128 = 2;
    	a22 = 8;
    	a144 = 32 ;
    	a200 = 36 ;
    	a115 = 32 ;
    	a71 = 10; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm83(int input) {
printf("POINT: 655\n");

    if(((((a20 == 4 && a125 == 32) && a126 == 4) && a150 == 5) && (a68 == 3 && (a20 == 4 && ( cf==1  && (input == 7)))))) {
printf("POINT: 656\n");
    	cf = 0;
    	a198 = 33 ;
    	a84 = 32 ;
    	a112 = 34 ;
    	a32 = 33 ;
    	a55 = 34 ;
    	a34 = 33 ;
    	a53 = 34 ;
    	a90 = 34 ;
    	a79 = 5;
    	a16 = 10;
    	a46 = 32 ;
    	a174 = 9;
    	a20 = 3;
    	a56 = 8;
    	a146 = 32 ;
    	a179 = 34 ;
    	a152 = 10;
    	a118 = 33 ;
    	a86 = 32 ;
    	a101 = 33 ;
    	a141 = 34 ;
    	a65 = 9;
    	a120 = 5;
    	a165 = 34 ;
    	a37 = 10;
    	a110 = 5;
    	a184 = 5;
    	a41 = 34 ;
    	a140 = 6;
    	a144 = 33 ;
    	a160 = 32 ;
    	a45 = 32 ;
    	a17 = 34 ;
    	a25 = 6;
    	a88 = 34 ;
    	a154 = 32 ;
    	a127 = 7;
    	a187 = 4;
    	a39 = 7;
    	a181 = 15; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 657\n");

    if((((a26 == 3 && a140 == 5) && a53 == 32) && ((a184 == 6 && (( cf==1  && (input == 5)) && a118 == 32)) && a178 == 32))) {
printf("POINT: 658\n");
    	cf = 0;
    	a140 = 6;
    	a81 = 10;
    	a55 = 34 ;
    	a115 = 34 ;
    	a197 = 8;
    	a53 = 34 ;
    	a28 = 11;
    	a200 = 34 ;
    	a17 = 34 ;
    	a95 = 10;
    	a104 = 34 ;
    	a118 = 34 ;
    	a135 = 11;
    	a193 = 7;
    	a112 = 34 ;
    	a22 = 9;
    	a26 = 4;
    	a180 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm9(int input) {
printf("POINT: 659\n");

    if(((a115 == 32 && a68 == 3) && (((a22 == 8 && ((a60 == 8 &&  cf==1 ) && a140 == 5)) && a152 == 9) && a112 == 32))) {
printf("POINT: 660\n");
printf("POINT: 661\n");

    	if(((a152 == 9 && ((a101 == 32 && (a62 == 4 &&  cf==1 )) && a128 == 2)) && ((a109 == 32 && a118 == 32) && a104 == 32))) {
printf("POINT: 662\n");
    		calculate_outputm79(input);
    	} 
printf("POINT: 663\n");

    	if(((a196 == 6 && ((( cf==1  && a62 == 5) && a152 == 9) && a95 == 9)) && ((a127 == 7 && a34 == 32) && a101 == 32))) {
printf("POINT: 664\n");
    		calculate_outputm80(input);
    	} 
printf("POINT: 665\n");

    	if(((a184 == 6 && (a51 == 32 && (a39 == 8 && a17 == 32))) && (a187 == 4 && ((a62 == 6 &&  cf==1 ) && a95 == 9)))) {
printf("POINT: 666\n");
    		calculate_outputm81(input);
    	} 
printf("POINT: 667\n");

    	if(((a81 == 11 && (a109 == 32 && (a2 == 4 && a121 == 32))) && (a51 == 32 && (a51 == 32 && ( cf==1  && a62 == 10))))) {
printf("POINT: 668\n");
    		calculate_outputm82(input);
    	} 
printf("POINT: 669\n");

    	if(((a81 == 11 && (a95 == 9 && (a193 == 8 && a69 == 32))) && ((( cf==1  && a62 == 11) && a51 == 32) && a55 == 32))) {
printf("POINT: 670\n");
    		calculate_outputm83(input);
    	} 
    } 
}
 void calculate_outputm84(int input) {
printf("POINT: 671\n");

    if(((a22 == 8 && (a22 == 8 && a141 == 32)) && ((a20 == 4 && (( cf==1  && (input == 10)) && a144 == 32)) && a104 == 32))) {
printf("POINT: 672\n");
    	cf = 0;
    	a137 = 34 ;
    	a26 = 4;
    	a158 = 7;
    	a118 = 34 ;
    	a48 = 34 ;
    	a152 = 10;
    	a169 = 34 ;
    	a53 = 34 ;
    	a180 = 34 ;
    	a160 = 34 ;
    	a200 = 36 ;
    	a187 = 5;
    	a104 = 34 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 673\n");

    if(((a128 == 2 && (((( cf==1  && (input == 4)) && a48 == 32) && a196 == 6) && a17 == 32)) && (a34 == 32 && a118 == 32))) {
printf("POINT: 674\n");
    	cf = 0;
    	a118 = 34 ;
    	a200 = 36 ;
    	a180 = 34 ;
    	a169 = 34 ;
    	a160 = 34 ;
    	a158 = 7;
    	a48 = 34 ;
    	a152 = 10;
    	a137 = 34 ;
    	a53 = 34 ;
    	a104 = 34 ;
    	a26 = 4;
    	a187 = 5;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 675\n");

    if((((a180 == 32 && (a45 == 32 && (a187 == 4 && a154 == 32))) && a169 == 32) && (a152 == 9 && ((input == 1) &&  cf==1 )))) {
printf("POINT: 676\n");
    	cf = 0;
    	a118 = 34 ;
    	a180 = 34 ;
    	a169 = 34 ;
    	a200 = 36 ;
    	a137 = 34 ;
    	a53 = 34 ;
    	a158 = 7;
    	a104 = 34 ;
    	a160 = 34 ;
    	a187 = 5;
    	a48 = 34 ;
    	a26 = 4;
    	a152 = 10;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm85(int input) {
printf("POINT: 677\n");

    if(((a150 == 5 && (a68 == 3 && (a152 == 9 && ( cf==1  && (input == 3))))) && (a104 == 32 && (a110 == 6 && a167 == 2)))) {
printf("POINT: 678\n");
    	cf = 0;
    	a158 = 7;
    	a64 = 16;
    	a200 = 36 ;
    	a189 = 16; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm86(int input) {
printf("POINT: 679\n");

    if(((a69 == 32 && a95 == 9) && (((a93 == 3 && (( cf==1  && (input == 9)) && a174 == 8)) && a93 == 3) && a34 == 32))) {
printf("POINT: 680\n");
    	cf = 0;
    	a150 = 5;
    	a169 = 32 ;
    	a118 = 32 ;
    	a155 = 35 ;
    	a93 = 3;
    	a126 = 4;
    	a84 = 32 ;
    	a115 = 32 ;
    	a30 = 32 ;
    	a125 = 32 ;
    	a79 = 6;
    	a180 = 32 ;
    	a200 = 36 ;
    	a26 = 3;
    	a174 = 8;
    	a158 = 7;
    	a81 = 11;
    	a104 = 32 ;
    	a187 = 4;
    	a165 = 32 ;
    	a140 = 5;
    	a64 = 14; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm10(int input) {
printf("POINT: 681\n");

    if((((a160 == 32 && a126 == 4) && a101 == 32) && (a65 == 10 && ((a193 == 8 && (a3 == 32 &&  cf==1 )) && a160 == 32)))) {
printf("POINT: 682\n");
printf("POINT: 683\n");

    	if(((a50 == 5 &&  cf==1 ) && ((a128 == 2 && ((a95 == 9 && (a193 == 8 && a45 == 32)) && a69 == 32)) && a53 == 32))) {
printf("POINT: 684\n");
    		calculate_outputm84(input);
    	} 
    } 
printf("POINT: 685\n");

    if(((a154 == 32 && (a79 == 6 && a154 == 32)) && ((a37 == 9 && (( cf==1  && a3 == 34) && a55 == 32)) && a68 == 3))) {
printf("POINT: 686\n");
printf("POINT: 687\n");

    	if(((a53 == 32 && (a147 == 3 &&  cf==1 )) && (a46 == 32 && (a95 == 9 && (a56 == 9 && (a115 == 32 && a28 == 10)))))) {
printf("POINT: 688\n");
    		calculate_outputm85(input);
    	} 
    } 
printf("POINT: 689\n");

    if(((a126 == 4 && (a150 == 5 && a140 == 5)) && ((((a3 == 35 &&  cf==1 ) && a125 == 32) && a12 == 32) && a169 == 32))) {
printf("POINT: 690\n");
printf("POINT: 691\n");

    	if((((((a81 == 11 && (a139 == 35 &&  cf==1 )) && a97 == 4) && a115 == 32) && a118 == 32) && (a84 == 32 && a165 == 32))) {
printf("POINT: 692\n");
    		calculate_outputm86(input);
    	} 
    } 
}
 void calculate_outputm87(int input) {
printf("POINT: 693\n");

    if(((((a79 == 7 && a41 == 34) && a0 == 34) && a184 == 7) && ((a53 == 34 && ((input == 7) &&  cf==1 )) && a95 == 10))) {
printf("POINT: 694\n");
    	cf = 0;
    	a48 = 34 ;
    	a118 = 34 ;
    	a101 = 32 ;
    	a39 = 8;
    	a110 = 7;
    	a2 = 4;
    	a81 = 11;
    	a68 = 3;
    	a152 = 10;
    	a140 = 5;
    	a115 = 32 ;
    	a153 = 5;
    	a119 = 32 ;
    	a25 = 6;
    	a125 = 34 ;
    	a126 = 4;
    	a32 = 34 ;
    	a51 = 32 ;
    	a56 = 9;
    	a90 = 32 ;
    	a169 = 34 ;
    	a127 = 8;
    	a105 = 11;
    	a112 = 32 ;
    	a15 = 11;
    	a45 = 32 ;
    	a184 = 7;
    	a69 = 32 ;
    	a65 = 10;
    	a176 = 3;
    	a46 = 32 ;
    	a150 = 5;
    	a98 = 13;
    	a12 = 32 ;
    	a144 = 32 ;
    	a141 = 32 ;
    	a55 = 32 ;
    	a88 = 32 ;
    	a120 = 6;
    	a30 = 32 ;
    	a131 = 10;
    	a41 = 34 ;
    	a109 = 34 ;
    	a16 = 10;
    	a135 = 14;
    	a64 = 11; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 695\n");

    if(((a28 == 11 && (a160 == 34 && ( cf==1  && (input == 1)))) && (a169 == 34 && ((a104 == 34 && a53 == 34) && a48 == 34)))) {
printf("POINT: 696\n");
    	cf = 0;
    	a158 = 12;
    	a121 = 32 ;
    	a178 = 32 ;
    	a187 = 4;
    	a179 = 33 ;
    	a167 = 2;
    	a28 = 10;
    	a90 = 32 ;
    	a196 = 6;
    	a97 = 4;
    	a0 = 32 ;
    	a127 = 7;
    	a34 = 32 ;
    	a146 = 32 ;
    	a104 = 32 ;
    	a41 = 32 ;
    	a79 = 6;
    	a53 = 32 ;
    	a131 = 10;
    	a160 = 32 ;
    	a154 = 33 ;
    	a93 = 3;
    	a119 = 33 ;
    	a37 = 9;
    	a193 = 8;
    	a84 = 32 ;
    	a128 = 2;
    	a180 = 32 ;
    	a184 = 5;
    	a174 = 7;
    	a26 = 3;
    	a32 = 32 ;
    	a169 = 32 ;
    	a48 = 32 ;
    	a62 = 6;
    	a17 = 32 ;
    	a95 = 9;
    	a46 = 32 ;
    	a56 = 9;
    	a39 = 8;
    	a200 = 36 ;
    	a69 = 32 ;
    	a22 = 7;
    	a165 = 32 ;
    	a20 = 4;
    	a71 = 13; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm88(int input) {
printf("POINT: 697\n");

    if((((a165 == 34 && (a68 == 4 && a26 == 4)) && a146 == 34) && (a141 == 34 && (a53 == 34 && ( cf==1  && (input == 6)))))) {
printf("POINT: 698\n");
    	cf = 0;
    	a121 = 32 ;
    	a95 = 9;
    	a2 = 4;
    	a97 = 4;
    	a176 = 3;
    	a154 = 32 ;
    	a167 = 2;
    	a93 = 3;
    	a56 = 9;
    	a28 = 10;
    	a32 = 32 ;
    	a65 = 10;
    	a81 = 11;
    	a41 = 32 ;
    	a144 = 32 ;
    	a25 = 5;
    	a86 = 33 ;
    	a90 = 32 ;
    	a37 = 9;
    	a125 = 32 ;
    	a169 = 32 ;
    	a26 = 3;
    	a178 = 32 ;
    	a46 = 32 ;
    	a17 = 32 ;
    	a0 = 32 ;
    	a152 = 9;
    	a48 = 32 ;
    	a30 = 32 ;
    	a174 = 8;
    	a131 = 10;
    	a9 = 34 ;
    	a160 = 32 ;
    	a16 = 10;
    	a150 = 5;
    	a110 = 6;
    	a128 = 2;
    	a51 = 32 ;
    	a135 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 699\n");

    if(((((input == 5) &&  cf==1 ) && a16 == 11) && (((a174 == 9 && (a2 == 5 && a146 == 34)) && a39 == 9) && a180 == 34))) {
printf("POINT: 700\n");
    	cf = 0;
    	a174 = 8;
    	a125 = 32 ;
    	a68 = 3;
    	a2 = 4;
    	a88 = 32 ;
    	a56 = 9;
    	a112 = 32 ;
    	a34 = 32 ;
    	a167 = 2;
    	a120 = 6;
    	a121 = 32 ;
    	a16 = 10;
    	a126 = 4;
    	a64 = 16;
    	a109 = 32 ;
    	a55 = 32 ;
    	a12 = 32 ;
    	a165 = 32 ;
    	a26 = 3;
    	a69 = 32 ;
    	a46 = 32 ;
    	a90 = 32 ;
    	a153 = 4;
    	a187 = 4;
    	a53 = 32 ;
    	a22 = 8;
    	a115 = 32 ;
    	a48 = 32 ;
    	a158 = 7;
    	a15 = 10;
    	a131 = 10;
    	a104 = 32 ;
    	a20 = 4;
    	a101 = 32 ;
    	a200 = 36 ;
    	a93 = 3;
    	a118 = 32 ;
    	a41 = 32 ;
    	a79 = 6;
    	a51 = 32 ;
    	a180 = 32 ;
    	a0 = 32 ;
    	a105 = 11;
    	a127 = 7;
    	a32 = 32 ;
    	a189 = 16; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 701\n");

    if((((a121 == 34 && ( cf==1  && (input == 10))) && a93 == 4) && (a127 == 8 && ((a90 == 34 && a167 == 3) && a174 == 9)))) {
printf("POINT: 702\n");
    	cf = 0;
    	a68 = 3;
    	a64 = 16;
    	a56 = 9;
    	a32 = 32 ;
    	a120 = 6;
    	a26 = 3;
    	a22 = 8;
    	a12 = 32 ;
    	a20 = 4;
    	a34 = 32 ;
    	a41 = 32 ;
    	a127 = 7;
    	a0 = 32 ;
    	a187 = 4;
    	a180 = 32 ;
    	a69 = 32 ;
    	a16 = 10;
    	a131 = 10;
    	a104 = 32 ;
    	a167 = 2;
    	a115 = 32 ;
    	a105 = 11;
    	a90 = 32 ;
    	a55 = 32 ;
    	a126 = 4;
    	a51 = 32 ;
    	a53 = 32 ;
    	a121 = 32 ;
    	a101 = 32 ;
    	a15 = 10;
    	a165 = 32 ;
    	a112 = 32 ;
    	a125 = 32 ;
    	a93 = 3;
    	a48 = 32 ;
    	a46 = 32 ;
    	a2 = 4;
    	a200 = 36 ;
    	a158 = 7;
    	a109 = 32 ;
    	a153 = 4;
    	a118 = 32 ;
    	a79 = 6;
    	a174 = 8;
    	a88 = 32 ;
    	a189 = 16; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 703\n");

    if(((a51 == 34 && (a2 == 5 && (a127 == 8 && ((input == 4) &&  cf==1 )))) && (a12 == 34 && (a26 == 4 && a41 == 34)))) {
printf("POINT: 704\n");
    	cf = 0;
    	a97 = 5;
    	a90 = 32 ;
    	a125 = 32 ;
    	a95 = 10;
    	a0 = 32 ;
    	a65 = 11;
    	a16 = 10;
    	a167 = 2;
    	a154 = 34 ;
    	a56 = 9;
    	a22 = 8;
    	a120 = 6;
    	a178 = 34 ;
    	a28 = 11;
    	a160 = 34 ;
    	a34 = 32 ;
    	a15 = 10;
    	a169 = 34 ;
    	a131 = 10;
    	a118 = 32 ;
    	a128 = 3;
    	a126 = 4;
    	a193 = 8;
    	a174 = 8;
    	a157 = 11;
    	a135 = 15;
    	a153 = 4;
    	a127 = 7;
    	a37 = 10;
    	a152 = 10;
    	a81 = 12;
    	a17 = 34 ;
    	a12 = 32 ;
    	a98 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm89(int input) {
printf("POINT: 705\n");

    if((((a37 == 10 && ( cf==1  && (input == 5))) && a65 == 11) && (a144 == 34 && ((a79 == 7 && a104 == 34) && a68 == 4)))) {
printf("POINT: 706\n");
    	cf = 0;
    	a121 = 33 ;
    	a2 = 10;
    	a56 = 11;
    	a101 = 36 ;
    	a127 = 11;
    	a146 = 36 ;
    	a93 = 8;
    	a37 = 8;
    	a0 = 36 ;
    	a176 = 9;
    	a12 = 35 ;
    	a104 = 34 ;
    	a46 = 35 ;
    	a154 = 36 ;
    	a45 = 36 ;
    	a90 = 36 ;
    	a158 = 7;
    	a112 = 36 ;
    	a140 = 10;
    	a187 = 9;
    	a119 = 35 ;
    	a196 = 9;
    	a97 = 8;
    	a79 = 9;
    	a131 = 11;
    	a200 = 36 ;
    	a150 = 11;
    	a48 = 33 ;
    	a68 = 8;
    	a26 = 2;
    	a115 = 34 ;
    	a120 = 5;
    	a69 = 36 ;
    	a15 = 11;
    	a20 = 3;
    	a95 = 8;
    	a105 = 14;
    	a32 = 35 ;
    	a53 = 33 ;
    	a28 = 9;
    	a34 = 33 ;
    	a41 = 35 ;
    	a169 = 33 ;
    	a180 = 34 ;
    	a88 = 33 ;
    	a65 = 13;
    	a81 = 16;
    	a30 = 33 ;
    	a118 = 35 ;
    	a128 = 7;
    	a144 = 36 ;
    	a165 = 33 ;
    	a160 = 34 ;
    	a64 = 16;
    	a16 = 15;
    	a125 = 36 ;
    	a25 = 4;
    	a189 = 13; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 707\n");

    if(((a41 == 34 && (a125 == 34 && a25 == 6)) && (a81 == 12 && (a125 == 34 && (a174 == 9 && ( cf==1  && (input == 7))))))) {
printf("POINT: 708\n");
    	cf = 0;
printf("POINT: 709\n");

    	if((a113 == 4 || a22 == 11)) {
printf("POINT: 710\n");
    	a95 = 15;
    	a176 = 3;
    	a37 = 10;
    	a180 = 33 ;
    	a93 = 3;
    	a126 = 5;
    	a120 = 7;
    	a141 = 36 ;
    	a48 = 36 ;
    	a34 = 36 ;
    	a55 = 35 ;
    	a45 = 36 ;
    	a178 = 36 ;
    	a69 = 32 ;
    	a15 = 14;
    	a84 = 35 ;
    	a79 = 10;
    	a127 = 9;
    	a88 = 32 ;
    	a86 = 34 ;
    	a118 = 32 ;
    	a150 = 8;
    	a169 = 32 ;
    	a16 = 12;
    	a200 = 33 ;
    	a30 = 35 ;
    	a196 = 7;
    	a154 = 35 ;
    	a90 = 34 ;
    	a184 = 9;
    	a2 = 4;
    	a39 = 10;
    	a28 = 13;
    	a68 = 7;
    	a26 = 7;
    	a125 = 36 ;
    	a53 = 32 ;
    	a41 = 35 ;
    	a51 = 32 ;
    	a97 = 6;
    	a12 = 33 ;
    	a20 = 6;
    	a187 = 10;
    	a46 = 32 ;
    	a115 = 32 ;
    	a25 = 7;
    	a109 = 36 ;
    	a0 = 34 ;
    	a128 = 5;
    	a146 = 36 ;
    	a160 = 36 ;
    	a153 = 8;
    	a131 = 13;
    	a193 = 11;
    	a81 = 16;
    	a140 = 10;
    	a112 = 34 ;
    	a101 = 35 ;
    	a165 = 36 ;
    	a104 = 36 ;
    	a110 = 6;
    	a65 = 15;
    	a144 = 34 ;
    	a121 = 35 ;
    	a179 = 32 ;
    	a119 = 35 ;
    	a105 = 12;
    	a27 = 36 ;
    	a56 = 9;
    	a23 = 35 ; 
    	}else {
printf("POINT: 712\n");
    	a176 = 6;
    	a150 = 6;
    	a178 = 34 ;
    	a69 = 33 ;
    	a93 = 8;
    	a135 = 14;
    	a12 = 35 ;
    	a90 = 36 ;
    	a193 = 8;
    	a1 = 35 ;
    	a101 = 35 ;
    	a17 = 36 ;
    	a84 = 33 ;
    	a152 = 14;
    	a0 = 35 ;
    	a68 = 5;
    	a56 = 10;
    	a41 = 35 ;
    	a16 = 14;
    	a153 = 3;
    	a39 = 12;
    	a34 = 35 ;
    	a118 = 35 ;
    	a46 = 36 ;
    	a125 = 33 ;
    	a121 = 35 ;
    	a154 = 34 ;
    	a20 = 9;
    	a169 = 33 ;
    	a167 = 5;
    	a112 = 34 ;
    	a109 = 33 ;
    	a32 = 33 ;
    	a126 = 7;
    	a25 = 10;
    	a127 = 9;
    	a95 = 14;
    	a131 = 14;
    	a22 = 9;
    	a88 = 36 ;
    	a55 = 33 ;
    	a79 = 12;
    	a65 = 11;
    	a15 = 11;
    	a115 = 33 ;
    	a140 = 7;
    	a98 = 12;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 713\n");

    if((((a16 == 11 && a53 == 34) && a90 == 34) && (a20 == 5 && (a32 == 34 && (a104 == 34 && ( cf==1  && (input == 6))))))) {
printf("POINT: 714\n");
    	cf = 0;
    	a126 = 5;
    	a16 = 16;
    	a174 = 12;
    	a65 = 11;
    	a2 = 6;
    	a15 = 15;
    	a34 = 34 ;
    	a101 = 35 ;
    	a90 = 34 ;
    	a184 = 12;
    	a200 = 33 ;
    	a153 = 4;
    	a131 = 15;
    	a81 = 15;
    	a41 = 36 ;
    	a120 = 11;
    	a144 = 32 ;
    	a37 = 14;
    	a110 = 12;
    	a17 = 32 ;
    	a121 = 32 ;
    	a45 = 34 ;
    	a84 = 34 ;
    	a196 = 10;
    	a69 = 35 ;
    	a22 = 9;
    	a48 = 34 ;
    	a51 = 36 ;
    	a0 = 32 ;
    	a105 = 11;
    	a32 = 32 ;
    	a56 = 12;
    	a46 = 35 ;
    	a118 = 32 ;
    	a160 = 32 ;
    	a167 = 5;
    	a125 = 35 ;
    	a25 = 10;
    	a86 = 32 ;
    	a79 = 8;
    	a20 = 7;
    	a26 = 9;
    	a77 = 9;
    	a150 = 6;
    	a53 = 34 ;
    	a88 = 32 ;
    	a154 = 32 ;
    	a152 = 12;
    	a95 = 11;
    	a104 = 34 ;
    	a12 = 32 ;
    	a112 = 32 ;
    	a179 = 36 ;
    	a147 = 1; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 715\n");

    if(((a101 == 34 && (((( cf==1  && (input == 4)) && a160 == 34) && a131 == 11) && a12 == 34)) && (a69 == 34 && a105 == 12))) {
printf("POINT: 716\n");
    	cf = 0;
    	a127 = 10;
    	a2 = 6;
    	a128 = 4;
    	a25 = 6;
    	a120 = 8;
    	a56 = 15;
    	a165 = 34 ;
    	a0 = 36 ;
    	a45 = 34 ;
    	a16 = 11;
    	a119 = 33 ;
    	a65 = 12;
    	a121 = 35 ;
    	a150 = 7;
    	a53 = 35 ;
    	a125 = 36 ;
    	a12 = 35 ;
    	a32 = 33 ;
    	a160 = 34 ;
    	a196 = 11;
    	a68 = 6;
    	a34 = 34 ;
    	a94 = 36 ;
    	a101 = 36 ;
    	a79 = 11;
    	a169 = 35 ;
    	a104 = 35 ;
    	a112 = 34 ;
    	a41 = 35 ;
    	a88 = 34 ;
    	a176 = 5;
    	a184 = 8;
    	a174 = 11;
    	a20 = 6;
    	a90 = 33 ;
    	a30 = 35 ;
    	a28 = 12;
    	a180 = 35 ;
    	a48 = 33 ;
    	a93 = 9;
    	a47 = 35 ;
    	a95 = 10;
    	a81 = 17;
    	a69 = 33 ;
    	a146 = 33 ;
    	a131 = 15;
    	a115 = 34 ;
    	a97 = 8;
    	a37 = 8;
    	a154 = 36 ;
    	a140 = 9;
    	a46 = 36 ;
    	a15 = 16;
    	a105 = 17;
    	a144 = 34 ;
    	a200 = 36 ;
    	a187 = 8;
    	a158 = 6; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 717\n");

    if(((a176 == 4 && ((a165 == 34 && ( cf==1  && (input == 8))) && a15 == 11)) && (a105 == 12 && (a79 == 7 && a165 == 34)))) {
printf("POINT: 718\n");
    	cf = 0;
    	a112 = 35 ;
    	a105 = 13;
    	a0 = 36 ;
    	a53 = 32 ;
    	a118 = 33 ;
    	a167 = 7;
    	a25 = 11;
    	a97 = 9;
    	a193 = 14;
    	a20 = 5;
    	a187 = 5;
    	a48 = 34 ;
    	a153 = 6;
    	a174 = 10;
    	a77 = 5;
    	a140 = 10;
    	a104 = 33 ;
    	a34 = 32 ;
    	a200 = 33 ;
    	a119 = 36 ;
    	a12 = 35 ;
    	a120 = 5;
    	a22 = 12;
    	a131 = 13;
    	a90 = 36 ;
    	a15 = 11;
    	a32 = 34 ;
    	a126 = 7;
    	a17 = 34 ;
    	a150 = 7;
    	a69 = 34 ;
    	a86 = 32 ;
    	a39 = 14;
    	a45 = 35 ;
    	a115 = 35 ;
    	a46 = 34 ;
    	a180 = 35 ;
    	a84 = 35 ;
    	a196 = 9;
    	a16 = 13;
    	a79 = 6;
    	a101 = 35 ;
    	a30 = 35 ;
    	a51 = 32 ;
    	a184 = 7;
    	a141 = 36 ;
    	a178 = 32 ;
    	a179 = 32 ;
    	a56 = 8;
    	a125 = 34 ;
    	a41 = 36 ;
    	a176 = 2;
    	a65 = 16;
    	a88 = 35 ;
    	a2 = 7;
    	a68 = 6;
    	a160 = 35 ;
    	a165 = 32 ;
    	a152 = 10;
    	a28 = 13;
    	a37 = 13;
    	a81 = 12;
    	a121 = 34 ;
    	a26 = 5;
    	a127 = 12;
    	a110 = 7;
    	a144 = 35 ;
    	a109 = 36 ;
    	a95 = 9;
    	a145 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 719\n");

    if(((a88 == 34 && (a79 == 7 && a121 == 34)) && (a48 == 34 && (a146 == 34 && (a154 == 34 && ((input == 9) &&  cf==1 )))))) {
printf("POINT: 720\n");
    	cf = 0;
    	a152 = 14;
    	a25 = 8;
    	a176 = 2;
    	a127 = 13;
    	a56 = 15;
    	a20 = 10;
    	a131 = 12;
    	a88 = 36 ;
    	a125 = 32 ;
    	a101 = 34 ;
    	a90 = 35 ;
    	a15 = 12;
    	a118 = 32 ;
    	a154 = 35 ;
    	a128 = 1;
    	a30 = 36 ;
    	a180 = 36 ;
    	a45 = 35 ;
    	a112 = 34 ;
    	a141 = 36 ;
    	a53 = 33 ;
    	a150 = 7;
    	a26 = 4;
    	a68 = 8;
    	a22 = 14;
    	a17 = 34 ;
    	a65 = 15;
    	a81 = 16;
    	a51 = 36 ;
    	a28 = 13;
    	a126 = 5;
    	a0 = 33 ;
    	a200 = 36 ;
    	a119 = 35 ;
    	a146 = 35 ;
    	a37 = 13;
    	a144 = 36 ;
    	a79 = 5;
    	a93 = 8;
    	a169 = 36 ;
    	a97 = 5;
    	a69 = 36 ;
    	a178 = 32 ;
    	a104 = 36 ;
    	a39 = 13;
    	a2 = 8;
    	a120 = 11;
    	a84 = 36 ;
    	a179 = 34 ;
    	a121 = 35 ;
    	a115 = 35 ;
    	a165 = 34 ;
    	a140 = 7;
    	a187 = 8;
    	a46 = 32 ;
    	a12 = 35 ;
    	a160 = 33 ;
    	a153 = 6;
    	a105 = 15;
    	a34 = 35 ;
    	a184 = 7;
    	a95 = 11;
    	a174 = 14;
    	a158 = 9;
    	a41 = 35 ;
    	a136 = 13;
    	a196 = 12;
    	a133 = 2; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 721\n");

    if((((a160 == 34 && ( cf==1  && (input == 3))) && a146 == 34) && ((a115 == 34 && (a95 == 10 && a112 == 34)) && a28 == 11))) {
printf("POINT: 722\n");
    	cf = 0;
printf("POINT: 723\n");

    	if((!(a29 == 34) || (a112 == 34 && !(a5 == 36)))) {
printf("POINT: 724\n");
    	a41 = 36 ;
    	a120 = 11;
    	a0 = 36 ;
    	a127 = 8;
    	a30 = 35 ;
    	a121 = 35 ;
    	a160 = 36 ;
    	a119 = 32 ;
    	a65 = 15;
    	a128 = 6;
    	a104 = 36 ;
    	a131 = 14;
    	a184 = 11;
    	a146 = 35 ;
    	a129 = 35 ;
    	a140 = 9;
    	a144 = 34 ;
    	a48 = 36 ;
    	a53 = 34 ;
    	a90 = 36 ;
    	a69 = 36 ;
    	a46 = 36 ;
    	a26 = 5;
    	a34 = 35 ;
    	a79 = 8;
    	a180 = 36 ;
    	a150 = 10;
    	a97 = 10;
    	a169 = 35 ;
    	a16 = 16;
    	a179 = 33 ;
    	a165 = 35 ;
    	a176 = 9;
    	a110 = 11;
    	a154 = 35 ;
    	a196 = 10;
    	a125 = 33 ;
    	a187 = 6;
    	a81 = 16;
    	a118 = 34 ;
    	a12 = 34 ;
    	a37 = 13;
    	a25 = 9;
    	a28 = 13;
    	a105 = 15;
    	a158 = 7;
    	a45 = 35 ;
    	a112 = 35 ;
    	a15 = 14;
    	a115 = 36 ;
    	a174 = 14;
    	a167 = 7;
    	a56 = 11;
    	a20 = 3;
    	a93 = 4;
    	a68 = 6;
    	a95 = 14;
    	a88 = 36 ;
    	a2 = 3;
    	a141 = 33 ;
    	a101 = 33 ;
    	a32 = 35 ;
    	a200 = 36 ;
    	a64 = 15; 
    	}else {
printf("POINT: 726\n");
    	a120 = 8;
    	a53 = 33 ;
    	a32 = 35 ;
    	a25 = 6;
    	a176 = 7;
    	a127 = 6;
    	a180 = 34 ;
    	a160 = 34 ;
    	a196 = 10;
    	a140 = 11;
    	a41 = 35 ;
    	a65 = 14;
    	a169 = 34 ;
    	a2 = 8;
    	a131 = 9;
    	a15 = 16;
    	a200 = 35 ;
    	a56 = 13;
    	a125 = 33 ;
    	a37 = 13;
    	a20 = 7;
    	a128 = 5;
    	a46 = 36 ;
    	a16 = 15;
    	a144 = 36 ;
    	a165 = 35 ;
    	a134 = 10;
    	a93 = 8;
    	a88 = 33 ;
    	a150 = 10;
    	a12 = 36 ;
    	a101 = 33 ;
    	a164 = 13;
    	a174 = 7;
    	a69 = 33 ;
    	a95 = 8;
    	a34 = 35 ;
    	a105 = 10;
    	a68 = 5;
    	a119 = 34 ;
    	a45 = 34 ;
    	a79 = 8;
    	a121 = 35 ;
    	a30 = 34 ;
    	a146 = 36 ;
    	a112 = 34 ;
    	a97 = 7;
    	a187 = 8;
    	a115 = 36 ;
    	a104 = 36 ;
    	a81 = 15;
    	a0 = 33 ;
    	a154 = 36 ;
    	a90 = 34 ;
    	a118 = 33 ;
    	a48 = 36 ;
    	a157 = 10;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 727\n");

    if(((a20 == 5 && a28 == 11) && (a65 == 11 && ((a169 == 34 && (( cf==1  && (input == 10)) && a34 == 34)) && a150 == 6)))) {
printf("POINT: 728\n");
    	cf = 0;
printf("POINT: 729\n");

    	if(a103 == 34) {
printf("POINT: 730\n");
    	a119 = 36 ;
    	a15 = 16;
    	a81 = 14;
    	a68 = 9;
    	a51 = 32 ;
    	a48 = 33 ;
    	a56 = 12;
    	a12 = 33 ;
    	a22 = 12;
    	a167 = 4;
    	a32 = 34 ;
    	a90 = 35 ;
    	a165 = 34 ;
    	a46 = 36 ;
    	a69 = 34 ;
    	a16 = 10;
    	a121 = 35 ;
    	a20 = 10;
    	a178 = 36 ;
    	a94 = 32 ;
    	a141 = 32 ;
    	a17 = 35 ;
    	a112 = 33 ;
    	a37 = 11;
    	a26 = 4;
    	a184 = 11;
    	a118 = 35 ;
    	a84 = 32 ;
    	a176 = 8;
    	a152 = 13;
    	a65 = 16;
    	a144 = 34 ;
    	a30 = 32 ;
    	a110 = 6;
    	a179 = 36 ;
    	a127 = 9;
    	a135 = 12;
    	a193 = 10;
    	a140 = 6;
    	a120 = 12;
    	a45 = 33 ;
    	a125 = 34 ;
    	a28 = 12;
    	a160 = 35 ;
    	a0 = 34 ;
    	a156 = 7; 
    	}else {
printf("POINT: 732\n");
    	a68 = 8;
    	a45 = 33 ;
    	a101 = 34 ;
    	a125 = 33 ;
    	a32 = 34 ;
    	a165 = 33 ;
    	a100 = 34 ;
    	a97 = 8;
    	a180 = 33 ;
    	a131 = 16;
    	a154 = 33 ;
    	a30 = 36 ;
    	a0 = 33 ;
    	a150 = 7;
    	a79 = 8;
    	a153 = 3;
    	a112 = 34 ;
    	a81 = 14;
    	a118 = 36 ;
    	a160 = 36 ;
    	a48 = 36 ;
    	a115 = 35 ;
    	a34 = 35 ;
    	a127 = 13;
    	a88 = 36 ;
    	a41 = 36 ;
    	a46 = 34 ;
    	a12 = 36 ;
    	a95 = 14;
    	a200 = 35 ;
    	a179 = 33 ;
    	a174 = 12;
    	a20 = 3;
    	a141 = 36 ;
    	a26 = 6;
    	a139 = 35 ;
    	a90 = 34 ;
    	a104 = 33 ;
    	a56 = 10;
    	a69 = 34 ;
    	a134 = 14;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 733\n");

    if(((((a120 == 7 && ( cf==1  && (input == 2))) && a34 == 34) && a196 == 7) && (a90 == 34 && (a112 == 34 && a115 == 34)))) {
printf("POINT: 734\n");
    	cf = 0;
    	a34 = 33 ;
    	a160 = 33 ;
    	a95 = 14;
    	a119 = 33 ;
    	a68 = 6;
    	a200 = 36 ;
    	a93 = 8;
    	a65 = 14;
    	a146 = 33 ;
    	a16 = 16;
    	a140 = 6;
    	a45 = 34 ;
    	a115 = 36 ;
    	a88 = 35 ;
    	a154 = 33 ;
    	a56 = 8;
    	a158 = 13;
    	a48 = 34 ;
    	a2 = 3;
    	a125 = 36 ;
    	a101 = 34 ;
    	a150 = 8;
    	a97 = 9;
    	a90 = 33 ;
    	a37 = 12;
    	a128 = 8;
    	a0 = 34 ;
    	a187 = 6;
    	a46 = 36 ;
    	a131 = 16;
    	a120 = 11;
    	a15 = 11;
    	a104 = 34 ;
    	a112 = 36 ;
    	a28 = 12;
    	a163 = 32 ;
    	a169 = 35 ;
    	a174 = 10;
    	a69 = 35 ;
    	a121 = 33 ;
    	a20 = 10;
    	a127 = 9;
    	a25 = 7;
    	a118 = 33 ;
    	a180 = 34 ;
    	a41 = 36 ;
    	a144 = 33 ;
    	a12 = 35 ;
    	a123 = 10; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 735\n");

    if(((a121 == 34 && ( cf==1  && (input == 1))) && ((a45 == 34 && ((a25 == 6 && a2 == 5) && a154 == 34)) && a93 == 4))) {
printf("POINT: 736\n");
    	cf = 0;
printf("POINT: 737\n");

    	if(((a178 == 33 && a52 == 8) && a68 == 8)) {
printf("POINT: 738\n");
    	a104 = 35 ;
    	a165 = 36 ;
    	a169 = 36 ;
    	a101 = 35 ;
    	a46 = 34 ;
    	a125 = 34 ;
    	a16 = 15;
    	a200 = 35 ;
    	a48 = 33 ;
    	a0 = 34 ;
    	a88 = 35 ;
    	a112 = 35 ;
    	a160 = 33 ;
    	a15 = 16;
    	a115 = 34 ;
    	a53 = 34 ;
    	a26 = 9;
    	a90 = 36 ;
    	a152 = 15;
    	a79 = 11;
    	a32 = 36 ;
    	a20 = 3;
    	a65 = 9;
    	a69 = 35 ;
    	a68 = 7;
    	a174 = 13;
    	a180 = 34 ;
    	a120 = 9;
    	a127 = 10;
    	a25 = 9;
    	a45 = 35 ;
    	a56 = 10;
    	a95 = 14;
    	a93 = 5;
    	a176 = 2;
    	a154 = 34 ;
    	a140 = 9;
    	a55 = 32 ;
    	a105 = 12;
    	a2 = 6;
    	a119 = 35 ;
    	a12 = 35 ;
    	a150 = 6;
    	a121 = 33 ;
    	a34 = 34 ;
    	a109 = 33 ;
    	a134 = 15;
    	a168 = 35 ;
    	a146 = 36 ;
    	a28 = 9;
    	a97 = 9;
    	a41 = 33 ;
    	a131 = 13;
    	a118 = 35 ;
    	a37 = 15;
    	a114 = 13; 
    	}else {
printf("POINT: 740\n");
    	a93 = 2;
    	a39 = 14;
    	a46 = 33 ;
    	a17 = 33 ;
    	a69 = 34 ;
    	a34 = 34 ;
    	a169 = 36 ;
    	a184 = 10;
    	a167 = 3;
    	a95 = 14;
    	a135 = 10;
    	a55 = 35 ;
    	a179 = 35 ;
    	a32 = 35 ;
    	a90 = 34 ;
    	a84 = 36 ;
    	a127 = 8;
    	a141 = 35 ;
    	a12 = 33 ;
    	a16 = 15;
    	a178 = 35 ;
    	a20 = 9;
    	a193 = 9;
    	a22 = 12;
    	a25 = 10;
    	a79 = 10;
    	a150 = 10;
    	a153 = 7;
    	a115 = 36 ;
    	a48 = 36 ;
    	a125 = 36 ;
    	a152 = 8;
    	a144 = 35 ;
    	a2 = 3;
    	a101 = 33 ;
    	a56 = 14;
    	a121 = 34 ;
    	a112 = 35 ;
    	a81 = 10;
    	a78 = 33 ;
    	a174 = 10;
    	a0 = 34 ;
    	a110 = 9;
    	a165 = 36 ;
    	a126 = 7;
    	a131 = 16;
    	a109 = 35 ;
    	a51 = 32 ;
    	a171 = 11;
    	}printf("%d\n", 16);  
    } 
}
 void calculate_outputm90(int input) {
printf("POINT: 741\n");

    if(((((( cf==1  && (input == 10)) && a34 == 34) && a101 == 34) && a144 == 34) && ((a178 == 34 && a174 == 9) && a118 == 34))) {
printf("POINT: 742\n");
    	cf = 0;
    	a115 = 34 ;
    	a20 = 3;
    	a46 = 33 ;
    	a69 = 33 ;
    	a68 = 2;
    	a65 = 11;
    	a37 = 10;
    	a165 = 33 ;
    	a176 = 3;
    	a32 = 34 ;
    	a121 = 33 ;
    	a125 = 33 ;
    	a152 = 10;
    	a109 = 34 ;
    	a15 = 9;
    	a110 = 5;
    	a95 = 8;
    	a56 = 8;
    	a86 = 36 ;
    	a153 = 5;
    	a105 = 10;
    	a179 = 33 ;
    	a120 = 5;
    	a169 = 33 ;
    	a29 = 33 ;
    	a140 = 6;
    	a141 = 33 ;
    	a200 = 33 ;
    	a0 = 32 ;
    	a34 = 32 ;
    	a45 = 33 ;
    	a30 = 32 ;
    	a128 = 3;
    	a51 = 33 ;
    	a104 = 33 ;
    	a174 = 7;
    	a55 = 32 ;
    	a25 = 4;
    	a97 = 5;
    	a28 = 9;
    	a127 = 6;
    	a26 = 4;
    	a22 = 9;
    	a79 = 7;
    	a81 = 12;
    	a150 = 6;
    	a53 = 33 ;
    	a118 = 33 ;
    	a178 = 32 ;
    	a12 = 32 ;
    	a41 = 33 ;
    	a2 = 3;
    	a84 = 33 ;
    	a90 = 33 ;
    	a16 = 11;
    	a123 = 6; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 743\n");

    if((((a30 == 34 && a174 == 9) && a30 == 34) && ((a110 == 7 && (( cf==1  && (input == 9)) && a56 == 10)) && a160 == 34))) {
printf("POINT: 744\n");
    	cf = 0;
    	a158 = 11;
    	a120 = 6;
    	a2 = 4;
    	a169 = 32 ;
    	a154 = 32 ;
    	a121 = 32 ;
    	a17 = 32 ;
    	a174 = 8;
    	a160 = 32 ;
    	a167 = 2;
    	a200 = 36 ;
    	a34 = 32 ;
    	a12 = 32 ;
    	a127 = 7;
    	a178 = 32 ;
    	a41 = 32 ;
    	a185 = 15;
    	a144 = 32 ;
    	a48 = 32 ;
    	a0 = 32 ;
    	a58 = 4; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 745\n");

    if(((a180 == 34 && (a193 == 9 && ((input == 5) &&  cf==1 ))) && ((a28 == 11 && (a53 == 34 && a51 == 34)) && a53 == 34))) {
printf("POINT: 746\n");
    	cf = 0;
    	a88 = 33 ;
    	a187 = 3;
    	a144 = 33 ;
    	a41 = 33 ;
    	a125 = 33 ;
    	a110 = 5;
    	a69 = 33 ;
    	a53 = 33 ;
    	a25 = 4;
    	a200 = 33 ;
    	a95 = 8;
    	a68 = 2;
    	a32 = 33 ;
    	a15 = 9;
    	a51 = 33 ;
    	a17 = 33 ;
    	a84 = 33 ;
    	a112 = 32 ;
    	a48 = 33 ;
    	a77 = 7;
    	a86 = 32 ;
    	a118 = 33 ;
    	a141 = 33 ;
    	a140 = 4;
    	a12 = 33 ;
    	a28 = 9;
    	a45 = 33 ;
    	a179 = 33 ;
    	a30 = 33 ;
    	a90 = 32 ;
    	a121 = 33 ;
    	a26 = 2;
    	a56 = 8;
    	a104 = 33 ;
    	a153 = 3;
    	a174 = 7;
    	a152 = 8;
    	a62 = 6; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 747\n");

    if(((a39 == 9 && (a56 == 10 && (a154 == 34 && a12 == 34))) && ((a178 == 34 && ((input == 6) &&  cf==1 )) && a25 == 6))) {
printf("POINT: 748\n");
    	cf = 0;
printf("POINT: 749\n");

    	if(((((a54 == 34 && !(a0 == 35)) && a100 == 35) || a75 == 4) && a7 == 6)) {
printf("POINT: 750\n");
    	a34 = 32 ;
    	a144 = 32 ;
    	a12 = 32 ;
    	a53 = 32 ;
    	a200 = 36 ;
    	a129 = 36 ;
    	a178 = 32 ;
    	a167 = 2;
    	a110 = 6;
    	a121 = 32 ;
    	a154 = 32 ;
    	a187 = 4;
    	a180 = 32 ;
    	a127 = 7;
    	a39 = 8;
    	a2 = 4;
    	a126 = 4;
    	a0 = 32 ;
    	a174 = 8;
    	a160 = 32 ;
    	a48 = 32 ;
    	a122 = 36 ;
    	a158 = 8; 
    	}else {
printf("POINT: 752\n");
    	a29 = 33 ;
    	a55 = 32 ;
    	a128 = 3;
    	a90 = 33 ;
    	a25 = 4;
    	a120 = 5;
    	a20 = 3;
    	a153 = 5;
    	a178 = 32 ;
    	a65 = 11;
    	a0 = 32 ;
    	a169 = 33 ;
    	a118 = 33 ;
    	a26 = 4;
    	a140 = 6;
    	a30 = 32 ;
    	a69 = 33 ;
    	a152 = 10;
    	a84 = 33 ;
    	a45 = 33 ;
    	a16 = 11;
    	a34 = 32 ;
    	a125 = 33 ;
    	a141 = 33 ;
    	a150 = 6;
    	a95 = 8;
    	a56 = 8;
    	a32 = 34 ;
    	a176 = 3;
    	a115 = 34 ;
    	a104 = 33 ;
    	a81 = 12;
    	a174 = 7;
    	a68 = 2;
    	a22 = 9;
    	a97 = 5;
    	a28 = 9;
    	a105 = 10;
    	a109 = 34 ;
    	a86 = 36 ;
    	a41 = 33 ;
    	a200 = 33 ;
    	a37 = 10;
    	a165 = 33 ;
    	a79 = 7;
    	a2 = 3;
    	a179 = 33 ;
    	a15 = 9;
    	a53 = 33 ;
    	a127 = 6;
    	a46 = 33 ;
    	a12 = 32 ;
    	a121 = 33 ;
    	a51 = 33 ;
    	a110 = 5;
    	a123 = 6;
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm91(int input) {
printf("POINT: 753\n");

    if(((a140 == 6 && ((a28 == 11 && a153 == 5) && a128 == 3)) && ((( cf==1  && (input == 10)) && a34 == 34) && a69 == 34))) {
printf("POINT: 754\n");
    	cf = 0;
    	a126 = 4;
    	a69 = 32 ;
    	a121 = 32 ;
    	a193 = 7;
    	a37 = 9;
    	a178 = 32 ;
    	a25 = 5;
    	a41 = 32 ;
    	a125 = 32 ;
    	a169 = 32 ;
    	a15 = 10;
    	a109 = 32 ;
    	a20 = 4;
    	a81 = 10;
    	a152 = 9;
    	a150 = 5;
    	a135 = 11;
    	a119 = 34 ;
    	a0 = 32 ;
    	a179 = 32 ;
    	a68 = 3;
    	a90 = 32 ;
    	a30 = 34 ;
    	a174 = 8;
    	a167 = 2;
    	a184 = 6;
    	a120 = 6;
    	a153 = 4;
    	a45 = 34 ;
    	a48 = 32 ;
    	a197 = 8;
    	a51 = 32 ;
    	a190 = 11; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 755\n");

    if(((a118 == 34 && (a174 == 9 && a105 == 12)) && ((a187 == 5 && (( cf==1  && (input == 4)) && a167 == 3)) && a150 == 6))) {
printf("POINT: 756\n");
    	cf = 0;
    	a178 = 32 ;
    	a86 = 32 ;
    	a0 = 32 ;
    	a151 = 35 ;
    	a46 = 32 ;
    	a34 = 32 ;
    	a127 = 7;
    	a135 = 13; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 757\n");

    if((((a22 == 9 && a178 == 34) && a90 == 34) && (a104 == 34 && ((( cf==1  && (input == 1)) && a180 == 34) && a37 == 10)))) {
printf("POINT: 758\n");
    	cf = 0;
    	a34 = 32 ;
    	a151 = 35 ;
    	a127 = 7;
    	a86 = 32 ;
    	a0 = 32 ;
    	a46 = 32 ;
    	a178 = 32 ;
    	a135 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 759\n");

    if(((a140 == 6 && a110 == 7) && (a196 == 7 && (a17 == 34 && ((a97 == 5 && ( cf==1  && (input == 7))) && a167 == 3))))) {
printf("POINT: 760\n");
    	cf = 0;
    	a46 = 32 ;
    	a34 = 32 ;
    	a151 = 35 ;
    	a127 = 7;
    	a86 = 32 ;
    	a0 = 32 ;
    	a178 = 32 ;
    	a135 = 13; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm92(int input) {
printf("POINT: 761\n");

    if(((a167 == 3 && (a178 == 34 && ( cf==1  && (input == 1)))) && (a178 == 34 && (a180 == 34 && (a45 == 34 && a169 == 34))))) {
printf("POINT: 762\n");
    	cf = 0;
    	a56 = 9;
    	a0 = 32 ;
    	a178 = 32 ;
    	a128 = 2;
    	a34 = 32 ;
    	a135 = 9;
    	a22 = 8;
    	a109 = 34 ;
    	a79 = 7;
    	a45 = 32 ;
    	a172 = 34 ;
    	a164 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 763\n");

    if(((a37 == 10 && ( cf==1  && (input == 9))) && ((a81 == 12 && (a48 == 34 && (a48 == 34 && a15 == 11))) && a30 == 34))) {
printf("POINT: 764\n");
    	cf = 0;
    	a184 = 6;
    	a126 = 4;
    	a165 = 34 ;
    	a90 = 32 ;
    	a110 = 7;
    	a105 = 12;
    	a39 = 9;
    	a68 = 3;
    	a176 = 3;
    	a95 = 9;
    	a69 = 32 ;
    	a153 = 5;
    	a154 = 34 ;
    	a88 = 32 ;
    	a179 = 34 ;
    	a131 = 10;
    	a32 = 34 ;
    	a101 = 34 ;
    	a25 = 5;
    	a65 = 10;
    	a2 = 5;
    	a160 = 34 ;
    	a152 = 10;
    	a17 = 32 ;
    	a118 = 32 ;
    	a84 = 32 ;
    	a51 = 34 ;
    	a193 = 9;
    	a26 = 3;
    	a112 = 32 ;
    	a12 = 34 ;
    	a150 = 6;
    	a16 = 10;
    	a20 = 4;
    	a125 = 34 ;
    	a119 = 32 ;
    	a120 = 6;
    	a55 = 32 ;
    	a28 = 11;
    	a41 = 34 ;
    	a97 = 4; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm93(int input) {
printf("POINT: 765\n");

    if((((a39 == 9 && (a115 == 34 && (a128 == 3 && a126 == 5))) && a109 == 34) && (( cf==1  && (input == 3)) && a109 == 34))) {
printf("POINT: 766\n");
    	cf = 0;
    	a105 = 16;
    	a34 = 34 ;
    	a94 = 32 ;
    	a51 = 35 ;
    	a39 = 10;
    	a20 = 6;
    	a25 = 6;
    	a115 = 34 ;
    	a112 = 35 ;
    	a17 = 33 ;
    	a141 = 34 ;
    	a144 = 35 ;
    	a152 = 14;
    	a47 = 35 ;
    	a169 = 35 ;
    	a101 = 35 ;
    	a12 = 36 ;
    	a196 = 9;
    	a48 = 36 ;
    	a153 = 8;
    	a55 = 35 ;
    	a90 = 34 ;
    	a176 = 7;
    	a104 = 36 ;
    	a110 = 5;
    	a131 = 15;
    	a146 = 36 ;
    	a0 = 34 ;
    	a46 = 36 ;
    	a56 = 8;
    	a126 = 3;
    	a15 = 9;
    	a93 = 5;
    	a88 = 34 ;
    	a180 = 34 ;
    	a121 = 35 ;
    	a97 = 9;
    	a53 = 33 ;
    	a125 = 33 ;
    	a150 = 11;
    	a140 = 10;
    	a200 = 36 ;
    	a128 = 8;
    	a127 = 10;
    	a193 = 14;
    	a174 = 14;
    	a119 = 35 ;
    	a158 = 6; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 767\n");

    if(((a88 == 34 && (a105 == 12 && (a51 == 34 && (a174 == 9 && (a146 == 34 && a56 == 10))))) && ((input == 6) &&  cf==1 ))) {
printf("POINT: 768\n");
    	cf = 0;
    	a196 = 5;
    	a101 = 36 ;
    	a32 = 32 ;
    	a20 = 10;
    	a79 = 7;
    	a200 = 36 ;
    	a25 = 7;
    	a56 = 11;
    	a17 = 34 ;
    	a53 = 32 ;
    	a180 = 36 ;
    	a174 = 14;
    	a42 = 32 ;
    	a153 = 6;
    	a119 = 36 ;
    	a179 = 35 ;
    	a93 = 6;
    	a131 = 15;
    	a90 = 33 ;
    	a112 = 32 ;
    	a88 = 33 ;
    	a109 = 36 ;
    	a81 = 15;
    	a46 = 36 ;
    	a51 = 36 ;
    	a34 = 36 ;
    	a39 = 9;
    	a160 = 32 ;
    	a125 = 34 ;
    	a127 = 8;
    	a169 = 33 ;
    	a115 = 32 ;
    	a184 = 10;
    	a140 = 10;
    	a30 = 35 ;
    	a15 = 13;
    	a45 = 36 ;
    	a128 = 4;
    	a158 = 7;
    	a12 = 34 ;
    	a176 = 5;
    	a150 = 11;
    	a28 = 13;
    	a69 = 34 ;
    	a187 = 5;
    	a110 = 11;
    	a104 = 36 ;
    	a84 = 34 ;
    	a144 = 36 ;
    	a141 = 36 ;
    	a97 = 10;
    	a146 = 36 ;
    	a152 = 10;
    	a0 = 33 ;
    	a121 = 36 ;
    	a126 = 7;
    	a37 = 12;
    	a105 = 14;
    	a64 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 769\n");

    if((((a176 == 4 && ( cf==1  && (input == 1))) && a88 == 34) && ((a150 == 6 && (a115 == 34 && a112 == 34)) && a110 == 7))) {
printf("POINT: 770\n");
    	cf = 0;
    	a153 = 9;
    	a112 = 32 ;
    	a152 = 14;
    	a119 = 36 ;
    	a45 = 35 ;
    	a28 = 14;
    	a97 = 6;
    	a134 = 10;
    	a178 = 34 ;
    	a125 = 35 ;
    	a2 = 6;
    	a56 = 12;
    	a0 = 35 ;
    	a144 = 36 ;
    	a115 = 33 ;
    	a15 = 10;
    	a53 = 35 ;
    	a17 = 34 ;
    	a126 = 3;
    	a84 = 32 ;
    	a121 = 33 ;
    	a69 = 32 ;
    	a118 = 35 ;
    	a200 = 35 ;
    	a101 = 34 ;
    	a184 = 12;
    	a196 = 12;
    	a167 = 7;
    	a110 = 9;
    	a146 = 32 ;
    	a154 = 34 ;
    	a131 = 9;
    	a127 = 7;
    	a39 = 12;
    	a34 = 34 ;
    	a187 = 4;
    	a25 = 10;
    	a88 = 34 ;
    	a180 = 35 ;
    	a93 = 7;
    	a90 = 33 ;
    	a81 = 12;
    	a164 = 6;
    	a32 = 36 ;
    	a10 = 7; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 771\n");

    if(((((a51 == 34 && a196 == 7) && a169 == 34) && a56 == 10) && (a97 == 5 && (a0 == 34 && ( cf==1  && (input == 4)))))) {
printf("POINT: 772\n");
    	cf = 0;
    	a34 = 35 ;
    	a110 = 7;
    	a180 = 33 ;
    	a121 = 33 ;
    	a131 = 14;
    	a146 = 33 ;
    	a15 = 9;
    	a125 = 36 ;
    	a115 = 36 ;
    	a0 = 35 ;
    	a141 = 36 ;
    	a81 = 17;
    	a153 = 7;
    	a90 = 33 ;
    	a167 = 1;
    	a56 = 14;
    	a193 = 10;
    	a93 = 4;
    	a88 = 34 ;
    	a28 = 15;
    	a200 = 35 ;
    	a187 = 5;
    	a51 = 33 ;
    	a12 = 34 ;
    	a3 = 34 ;
    	a152 = 11;
    	a97 = 10;
    	a176 = 5;
    	a109 = 35 ;
    	a144 = 33 ;
    	a101 = 35 ;
    	a45 = 32 ;
    	a105 = 15;
    	a196 = 5;
    	a140 = 11;
    	a174 = 14;
    	a46 = 33 ;
    	a25 = 6;
    	a48 = 34 ;
    	a160 = 36 ;
    	a118 = 35 ;
    	a37 = 15;
    	a134 = 13;
    	a169 = 36 ;
    	a126 = 7;
    	a127 = 6;
    	a183 = 10; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 773\n");

    if(((a28 == 11 && (a39 == 9 && (( cf==1  && (input == 2)) && a28 == 11))) && ((a28 == 11 && a105 == 12) && a112 == 34))) {
printf("POINT: 774\n");
    	cf = 0;
printf("POINT: 775\n");

    	if((((a39 == 13 && a146 == 34) || !(a171 == 11)) && a90 == 32)) {
printf("POINT: 776\n");
    	a17 = 34 ;
    	a46 = 36 ;
    	a28 = 10;
    	a68 = 7;
    	a34 = 33 ;
    	a196 = 10;
    	a93 = 2;
    	a146 = 33 ;
    	a109 = 33 ;
    	a153 = 9;
    	a158 = 11;
    	a84 = 33 ;
    	a45 = 34 ;
    	a121 = 33 ;
    	a126 = 3;
    	a119 = 34 ;
    	a88 = 33 ;
    	a160 = 33 ;
    	a180 = 33 ;
    	a169 = 34 ;
    	a184 = 5;
    	a48 = 35 ;
    	a25 = 10;
    	a150 = 4;
    	a0 = 34 ;
    	a41 = 33 ;
    	a174 = 14;
    	a105 = 10;
    	a176 = 7;
    	a55 = 34 ;
    	a101 = 36 ;
    	a30 = 33 ;
    	a53 = 33 ;
    	a90 = 36 ;
    	a81 = 14;
    	a141 = 36 ;
    	a37 = 11;
    	a128 = 5;
    	a127 = 12;
    	a144 = 34 ;
    	a187 = 8;
    	a110 = 9;
    	a20 = 3;
    	a152 = 8;
    	a79 = 12;
    	a112 = 34 ;
    	a12 = 34 ;
    	a200 = 36 ;
    	a115 = 34 ;
    	a16 = 15;
    	a69 = 36 ;
    	a131 = 11;
    	a104 = 36 ;
    	a39 = 12;
    	a193 = 14;
    	a51 = 36 ;
    	a118 = 36 ;
    	a140 = 7;
    	a15 = 11;
    	a97 = 3;
    	a185 = 16;
    	a125 = 34 ;
    	a56 = 8;
    	a32 = 34 ;
    	a165 = 33 ;
    	a62 = 10; 
    	}else {
printf("POINT: 778\n");
    	a84 = 35 ;
    	a127 = 10;
    	a158 = 13;
    	a169 = 33 ;
    	a97 = 5;
    	a174 = 11;
    	a12 = 36 ;
    	a176 = 7;
    	a141 = 35 ;
    	a20 = 9;
    	a88 = 36 ;
    	a112 = 36 ;
    	a131 = 16;
    	a37 = 14;
    	a140 = 7;
    	a56 = 12;
    	a45 = 35 ;
    	a32 = 33 ;
    	a160 = 35 ;
    	a144 = 34 ;
    	a34 = 34 ;
    	a39 = 11;
    	a125 = 35 ;
    	a105 = 14;
    	a93 = 6;
    	a69 = 35 ;
    	a153 = 8;
    	a0 = 33 ;
    	a53 = 35 ;
    	a121 = 34 ;
    	a15 = 11;
    	a115 = 34 ;
    	a119 = 33 ;
    	a90 = 32 ;
    	a152 = 13;
    	a184 = 5;
    	a109 = 34 ;
    	a163 = 33 ;
    	a128 = 2;
    	a193 = 11;
    	a180 = 36 ;
    	a30 = 33 ;
    	a48 = 36 ;
    	a81 = 17;
    	a200 = 36 ;
    	a25 = 7;
    	a28 = 14;
    	a17 = 33 ;
    	a150 = 11;
    	a6 = 8;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 779\n");

    if((((((a25 == 6 && a144 == 34) && a56 == 10) && a119 == 34) && a131 == 11) && (((input == 5) &&  cf==1 ) && a0 == 34))) {
printf("POINT: 780\n");
    	cf = 0;
    	a110 = 7;
    	a37 = 10;
    	a153 = 7;
    	a193 = 13;
    	a150 = 8;
    	a187 = 8;
    	a84 = 35 ;
    	a93 = 7;
    	a97 = 10;
    	a152 = 14;
    	a125 = 33 ;
    	a53 = 34 ;
    	a176 = 8;
    	a160 = 33 ;
    	a127 = 6;
    	a128 = 3;
    	a141 = 35 ;
    	a90 = 33 ;
    	a39 = 10;
    	a121 = 35 ;
    	a200 = 35 ;
    	a81 = 16;
    	a180 = 36 ;
    	a115 = 36 ;
    	a0 = 34 ;
    	a17 = 36 ;
    	a12 = 35 ;
    	a101 = 35 ;
    	a140 = 11;
    	a196 = 5;
    	a138 = 32 ;
    	a56 = 8;
    	a51 = 36 ;
    	a103 = 35 ;
    	a112 = 36 ;
    	a119 = 36 ;
    	a46 = 36 ;
    	a20 = 7;
    	a146 = 33 ;
    	a34 = 34 ;
    	a88 = 33 ;
    	a48 = 36 ;
    	a131 = 14;
    	a28 = 13;
    	a109 = 34 ;
    	a104 = 33 ;
    	a169 = 33 ;
    	a134 = 11; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 781\n");

    if((((a56 == 10 && ((input == 10) &&  cf==1 )) && a15 == 11) && (a12 == 34 && ((a169 == 34 && a153 == 5) && a34 == 34)))) {
printf("POINT: 782\n");
    	cf = 0;
    	a37 = 8;
    	a2 = 8;
    	a68 = 6;
    	a34 = 33 ;
    	a144 = 35 ;
    	a53 = 34 ;
    	a196 = 6;
    	a109 = 36 ;
    	a20 = 6;
    	a48 = 36 ;
    	a51 = 36 ;
    	a127 = 12;
    	a167 = 7;
    	a169 = 34 ;
    	a32 = 34 ;
    	a84 = 32 ;
    	a46 = 36 ;
    	a152 = 10;
    	a125 = 36 ;
    	a121 = 36 ;
    	a112 = 35 ;
    	a12 = 33 ;
    	a115 = 36 ;
    	a131 = 12;
    	a105 = 17;
    	a28 = 14;
    	a158 = 12;
    	a17 = 33 ;
    	a0 = 36 ;
    	a174 = 13;
    	a22 = 7;
    	a93 = 8;
    	a97 = 8;
    	a200 = 36 ;
    	a153 = 6;
    	a110 = 10;
    	a146 = 35 ;
    	a126 = 8;
    	a160 = 36 ;
    	a56 = 11;
    	a101 = 35 ;
    	a176 = 7;
    	a165 = 34 ;
    	a90 = 35 ;
    	a119 = 33 ;
    	a140 = 9;
    	a184 = 5;
    	a15 = 14;
    	a81 = 14;
    	a88 = 36 ;
    	a25 = 11;
    	a39 = 7;
    	a62 = 11;
    	a104 = 35 ;
    	a180 = 33 ;
    	a150 = 4;
    	a120 = 8;
    	a141 = 35 ;
    	a65 = 14;
    	a128 = 4;
    	a193 = 13;
    	a187 = 8;
    	a49 = 7; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 783\n");

    if(((a119 == 34 && (a34 == 34 && ((( cf==1  && (input == 8)) && a53 == 34) && a152 == 10))) && (a97 == 5 && a56 == 10))) {
printf("POINT: 784\n");
    	cf = 0;
    	a127 = 11;
    	a128 = 4;
    	a140 = 11;
    	a176 = 2;
    	a152 = 12;
    	a90 = 36 ;
    	a160 = 33 ;
    	a119 = 33 ;
    	a16 = 15;
    	a135 = 11;
    	a141 = 34 ;
    	a55 = 33 ;
    	a169 = 34 ;
    	a126 = 6;
    	a150 = 6;
    	a88 = 36 ;
    	a125 = 34 ;
    	a39 = 7;
    	a41 = 33 ;
    	a112 = 36 ;
    	a97 = 6;
    	a105 = 15;
    	a110 = 10;
    	a46 = 36 ;
    	a121 = 35 ;
    	a118 = 36 ;
    	a30 = 35 ;
    	a131 = 12;
    	a69 = 33 ;
    	a197 = 6;
    	a12 = 36 ;
    	a179 = 36 ;
    	a93 = 5;
    	a79 = 10;
    	a37 = 12;
    	a75 = 6; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 785\n");

    if((((a196 == 7 && a140 == 6) && a20 == 5) && (a37 == 10 && (a153 == 5 && (((input == 9) &&  cf==1 ) && a34 == 34))))) {
printf("POINT: 786\n");
    	cf = 0;
    	a30 = 36 ;
    	a153 = 7;
    	a88 = 33 ;
    	a45 = 36 ;
    	a37 = 8;
    	a79 = 5;
    	a135 = 11;
    	a174 = 12;
    	a0 = 33 ;
    	a48 = 35 ;
    	a176 = 2;
    	a32 = 35 ;
    	a141 = 35 ;
    	a152 = 11;
    	a12 = 35 ;
    	a118 = 33 ;
    	a90 = 35 ;
    	a16 = 13;
    	a125 = 35 ;
    	a55 = 36 ;
    	a15 = 11;
    	a26 = 3;
    	a197 = 8;
    	a121 = 36 ;
    	a95 = 14;
    	a65 = 13;
    	a51 = 34 ;
    	a126 = 9;
    	a169 = 36 ;
    	a25 = 7;
    	a154 = 35 ;
    	a22 = 14;
    	a20 = 9;
    	a93 = 5;
    	a193 = 9;
    	a109 = 36 ;
    	a131 = 13;
    	a84 = 34 ;
    	a150 = 6;
    	a81 = 12;
    	a190 = 11; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 787\n");

    if(((((input == 7) &&  cf==1 ) && a84 == 34) && (((a160 == 34 && (a176 == 4 && a88 == 34)) && a180 == 34) && a20 == 5))) {
printf("POINT: 788\n");
    	cf = 0;
    	a112 = 33 ;
    	a110 = 9;
    	a169 = 34 ;
    	a101 = 36 ;
    	a153 = 3;
    	a131 = 9;
    	a0 = 35 ;
    	a34 = 36 ;
    	a180 = 34 ;
    	a193 = 12;
    	a25 = 8;
    	a104 = 34 ;
    	a56 = 13;
    	a200 = 36 ;
    	a163 = 32 ;
    	a88 = 35 ;
    	a15 = 13;
    	a20 = 3;
    	a12 = 34 ;
    	a187 = 6;
    	a196 = 7;
    	a119 = 33 ;
    	a48 = 33 ;
    	a158 = 13;
    	a123 = 6; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm94(int input) {
printf("POINT: 789\n");

    if((((a90 == 34 && ((input == 1) &&  cf==1 )) && a125 == 34) && (((a84 == 34 && a193 == 9) && a95 == 10) && a119 == 34))) {
printf("POINT: 790\n");
    	cf = 0;
    	a90 = 32 ;
    	a37 = 9;
    	a84 = 33 ;
    	a174 = 8;
    	a125 = 32 ;
    	a197 = 8;
    	a141 = 32 ;
    	a88 = 32 ;
    	a48 = 32 ;
    	a150 = 5;
    	a167 = 2;
    	a121 = 32 ;
    	a20 = 4;
    	a126 = 4;
    	a0 = 32 ;
    	a193 = 7;
    	a169 = 32 ;
    	a135 = 11;
    	a190 = 11; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 791\n");

    if(((((input == 10) &&  cf==1 ) && a88 == 34) && ((a167 == 3 && (a37 == 10 && (a88 == 34 && a174 == 9))) && a110 == 7))) {
printf("POINT: 792\n");
    	cf = 0;
    	a150 = 5;
    	a121 = 32 ;
    	a193 = 7;
    	a167 = 2;
    	a174 = 8;
    	a84 = 33 ;
    	a169 = 32 ;
    	a48 = 32 ;
    	a20 = 4;
    	a90 = 32 ;
    	a0 = 32 ;
    	a135 = 11;
    	a141 = 32 ;
    	a125 = 32 ;
    	a88 = 32 ;
    	a197 = 8;
    	a37 = 9;
    	a126 = 4;
    	a190 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm11(int input) {
printf("POINT: 793\n");

    if((((a32 == 34 && (a131 == 11 && ( cf==1  && a13 == 4))) && a20 == 5) && ((a193 == 9 && a69 == 34) && a119 == 34))) {
printf("POINT: 794\n");
printf("POINT: 795\n");

    	if(((((a90 == 34 && ((a185 == 14 &&  cf==1 ) && a184 == 7)) && a53 == 34) && a39 == 9) && (a39 == 9 && a131 == 11))) {
printf("POINT: 796\n");
    		calculate_outputm87(input);
    	} 
    } 
printf("POINT: 797\n");

    if((((((a32 == 34 && a32 == 34) && a125 == 34) && a0 == 34) && a131 == 11) && ((a13 == 5 &&  cf==1 ) && a46 == 34))) {
printf("POINT: 798\n");
printf("POINT: 799\n");

    	if(((a46 == 34 && (a6 == 5 &&  cf==1 )) && (((a79 == 7 && (a165 == 34 && a187 == 5)) && a121 == 34) && a0 == 34))) {
printf("POINT: 800\n");
    		calculate_outputm88(input);
    	} 
printf("POINT: 801\n");

    	if((((a118 == 34 && (a0 == 34 && a97 == 5)) && a68 == 4) && (a45 == 34 && (a119 == 34 && ( cf==1  && a6 == 11))))) {
printf("POINT: 802\n");
    		calculate_outputm89(input);
    	} 
    } 
printf("POINT: 803\n");

    if((((a34 == 34 && (a187 == 5 && a196 == 7)) && a167 == 3) && ((a2 == 5 && (a13 == 6 &&  cf==1 )) && a154 == 34))) {
printf("POINT: 804\n");
printf("POINT: 805\n");

    	if(((a51 == 34 && (a160 == 34 && (a126 == 5 && a121 == 34))) && (a48 == 34 && (a193 == 9 && ( cf==1  && a138 == 32))))) {
printf("POINT: 806\n");
    		calculate_outputm90(input);
    	} 
    } 
printf("POINT: 807\n");

    if(((((a81 == 12 && a16 == 11) && a39 == 9) && a196 == 7) && (a184 == 7 && (a17 == 34 && (a13 == 7 &&  cf==1 ))))) {
printf("POINT: 808\n");
printf("POINT: 809\n");

    	if((((a112 == 34 && (a187 == 5 && a56 == 10)) && a174 == 9) && (a160 == 34 && (( cf==1  && a24 == 7) && a105 == 12)))) {
printf("POINT: 810\n");
    		calculate_outputm91(input);
    	} 
    } 
printf("POINT: 811\n");

    if((((a141 == 34 && (a53 == 34 && ( cf==1  && a13 == 8))) && a93 == 4) && (a144 == 34 && (a141 == 34 && a37 == 10)))) {
printf("POINT: 812\n");
printf("POINT: 813\n");

    	if(((a48 == 34 && ( cf==1  && a137 == 33)) && ((a128 == 3 && (a140 == 6 && (a22 == 9 && a34 == 34))) && a174 == 9))) {
printf("POINT: 814\n");
    		calculate_outputm92(input);
    	} 
printf("POINT: 815\n");

    	if((((a176 == 4 && a115 == 34) && a90 == 34) && ((a160 == 34 && (a34 == 34 && ( cf==1  && a137 == 36))) && a125 == 34))) {
printf("POINT: 816\n");
    		calculate_outputm93(input);
    	} 
    } 
printf("POINT: 817\n");

    if(((a169 == 34 && (a126 == 5 && a110 == 7)) && ((a20 == 5 && ((a13 == 9 &&  cf==1 ) && a34 == 34)) && a180 == 34))) {
printf("POINT: 818\n");
printf("POINT: 819\n");

    	if(((((( cf==1  && a67 == 33) && a150 == 6) && a141 == 34) && a174 == 9) && (a65 == 11 && (a160 == 34 && a167 == 3)))) {
printf("POINT: 820\n");
    		calculate_outputm94(input);
    	} 
    } 
}
 void calculate_outputm95(int input) {
printf("POINT: 821\n");

    if(((((input == 7) &&  cf==1 ) && a125 == 34) && ((((a16 == 11 && a160 == 34) && a0 == 34) && a34 == 34) && a32 == 34))) {
printf("POINT: 822\n");
    	cf = 0;
    	a34 = 32 ;
    	a0 = 32 ;
    	a146 = 32 ;
    	a158 = 12;
    	a160 = 32 ;
    	a112 = 32 ;
    	a187 = 4;
    	a97 = 4;
    	a144 = 32 ;
    	a196 = 6;
    	a127 = 7;
    	a200 = 36 ;
    	a41 = 32 ;
    	a180 = 32 ;
    	a62 = 8;
    	a153 = 4;
    	a167 = 2;
    	a48 = 32 ;
    	a104 = 32 ;
    	a12 = 32 ;
    	a152 = 9;
    	a150 = 5;
    	a16 = 10;
    	a11 = 8; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 823\n");

    if((((a112 == 34 && a193 == 9) && a12 == 34) && (a118 == 34 && (a34 == 34 && (((input == 1) &&  cf==1 ) && a184 == 7))))) {
printf("POINT: 824\n");
    	cf = 0;
    	a112 = 32 ;
    	a146 = 32 ;
    	a115 = 32 ;
    	a169 = 32 ;
    	a81 = 11;
    	a103 = 35 ;
    	a16 = 10;
    	a187 = 4;
    	a93 = 3;
    	a180 = 32 ;
    	a193 = 8;
    	a34 = 32 ;
    	a138 = 32 ;
    	a26 = 3;
    	a48 = 32 ;
    	a41 = 32 ;
    	a110 = 6;
    	a153 = 4;
    	a141 = 32 ;
    	a109 = 32 ;
    	a127 = 7;
    	a32 = 32 ;
    	a53 = 32 ;
    	a184 = 6;
    	a152 = 9;
    	a12 = 32 ;
    	a97 = 4;
    	a125 = 32 ;
    	a150 = 5;
    	a196 = 6;
    	a0 = 32 ;
    	a37 = 9;
    	a65 = 10;
    	a200 = 35 ;
    	a160 = 32 ;
    	a167 = 2;
    	a104 = 32 ;
    	a134 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 825\n");

    if(((a41 == 34 && (a110 == 7 && a12 == 34)) && (a0 == 34 && (a144 == 34 && (a109 == 34 && ((input == 6) &&  cf==1 )))))) {
printf("POINT: 826\n");
    	cf = 0;
    	a12 = 32 ;
    	a41 = 32 ;
    	a193 = 8;
    	a110 = 6;
    	a112 = 32 ;
    	a34 = 32 ;
    	a164 = 10;
    	a16 = 10;
    	a52 = 9; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm96(int input) {
printf("POINT: 827\n");

    if(((a105 == 12 && (((a90 == 34 && a68 == 4) && a79 == 7) && a187 == 5)) && (a93 == 4 && ((input == 1) &&  cf==1 )))) {
printf("POINT: 828\n");
    	cf = 0;
    	a84 = 32 ;
    	a28 = 10;
    	a68 = 3;
    	a131 = 10;
    	a150 = 5;
    	a121 = 32 ;
    	a196 = 6;
    	a158 = 7;
    	a179 = 32 ;
    	a137 = 34 ;
    	a88 = 32 ;
    	a165 = 32 ;
    	a105 = 11;
    	a46 = 32 ;
    	a79 = 6;
    	a146 = 32 ;
    	a200 = 36 ;
    	a193 = 8;
    	a22 = 8;
    	a34 = 32 ;
    	a65 = 10;
    	a90 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 829\n");

    if((((a131 == 11 && ((input == 6) &&  cf==1 )) && a28 == 11) && ((a165 == 34 && (a15 == 11 && a179 == 34)) && a109 == 34))) {
printf("POINT: 830\n");
    	cf = 0;
    	a121 = 32 ;
    	a179 = 32 ;
    	a28 = 10;
    	a137 = 34 ;
    	a105 = 11;
    	a200 = 36 ;
    	a68 = 3;
    	a165 = 32 ;
    	a158 = 7;
    	a90 = 32 ;
    	a150 = 5;
    	a46 = 32 ;
    	a146 = 32 ;
    	a22 = 8;
    	a88 = 32 ;
    	a65 = 10;
    	a84 = 32 ;
    	a34 = 32 ;
    	a193 = 8;
    	a196 = 6;
    	a131 = 10;
    	a79 = 6;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 831\n");

    if(((a46 == 34 && (a34 == 34 && (a65 == 11 && a121 == 34))) && (a88 == 34 && (a131 == 11 && ( cf==1  && (input == 5)))))) {
printf("POINT: 832\n");
    	cf = 0;
    	a158 = 7;
    	a46 = 32 ;
    	a84 = 32 ;
    	a131 = 10;
    	a68 = 3;
    	a137 = 34 ;
    	a22 = 8;
    	a88 = 32 ;
    	a65 = 10;
    	a121 = 32 ;
    	a196 = 6;
    	a146 = 32 ;
    	a105 = 11;
    	a165 = 32 ;
    	a200 = 36 ;
    	a150 = 5;
    	a193 = 8;
    	a90 = 32 ;
    	a179 = 32 ;
    	a79 = 6;
    	a28 = 10;
    	a34 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm97(int input) {
printf("POINT: 833\n");

    if(((a178 == 34 && (( cf==1  && (input == 4)) && a174 == 9)) && (a48 == 34 && ((a120 == 7 && a141 == 34) && a140 == 6)))) {
printf("POINT: 834\n");
    	cf = 0;
    	a200 = 36 ;
    	a55 = 32 ;
    	a141 = 32 ;
    	a178 = 32 ;
    	a30 = 32 ;
    	a174 = 8;
    	a154 = 32 ;
    	a158 = 7;
    	a137 = 34 ;
    	a140 = 5;
    	a150 = 5;
    	a17 = 32 ;
    	a120 = 6;
    	a146 = 32 ;
    	a196 = 6;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm98(int input) {
printf("POINT: 835\n");

    if(((a160 == 34 && (a15 == 11 && a97 == 5)) && (a0 == 34 && (a0 == 34 && (((input == 7) &&  cf==1 ) && a153 == 5))))) {
printf("POINT: 836\n");
    	cf = 0;
    	a180 = 34 ;
    	a97 = 4;
    	a81 = 11;
    	a79 = 6;
    	a160 = 34 ;
    	a25 = 6;
    	a39 = 8;
    	a140 = 5;
    	a101 = 32 ;
    	a144 = 32 ;
    	a15 = 11;
    	a165 = 32 ;
    	a184 = 7;
    	a93 = 3;
    	a187 = 4;
    	a17 = 32 ;
    	a154 = 32 ;
    	a127 = 7;
    	a118 = 34 ;
    	a48 = 34 ;
    	a68 = 3;
    	a150 = 5;
    	a125 = 34 ;
    	a0 = 32 ;
    	a121 = 32 ;
    	a146 = 32 ;
    	a65 = 10;
    	a153 = 4;
    	a158 = 12;
    	a30 = 32 ;
    	a179 = 32 ;
    	a126 = 4;
    	a120 = 6;
    	a141 = 32 ;
    	a26 = 4;
    	a167 = 3;
    	a53 = 34 ;
    	a178 = 32 ;
    	a62 = 5;
    	a200 = 36 ;
    	a104 = 32 ;
    	a176 = 3;
    	a115 = 32 ;
    	a196 = 6;
    	a169 = 34 ;
    	a32 = 34 ;
    	a152 = 10;
    	a37 = 9;
    	a109 = 34 ;
    	a56 = 9;
    	a71 = 7; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm99(int input) {
printf("POINT: 837\n");

    if(((a180 == 34 && a55 == 34) && ((((( cf==1  && (input == 9)) && a121 == 34) && a90 == 34) && a41 == 34) && a152 == 10))) {
printf("POINT: 838\n");
    	cf = 0;
    	a135 = 15;
    	a91 = 32 ;
    	a157 = 9; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 839\n");

    if(((a101 == 34 && ( cf==1  && (input == 6))) && ((a20 == 5 && (a15 == 11 && (a16 == 11 && a34 == 34))) && a160 == 34))) {
printf("POINT: 840\n");
    	cf = 0;
    	a144 = 32 ;
    	a53 = 32 ;
    	a121 = 32 ;
    	a167 = 2;
    	a68 = 3;
    	a84 = 32 ;
    	a46 = 32 ;
    	a152 = 9;
    	a88 = 32 ;
    	a17 = 32 ;
    	a93 = 3;
    	a65 = 10;
    	a128 = 2;
    	a3 = 34 ;
    	a119 = 32 ;
    	a131 = 10;
    	a0 = 32 ;
    	a180 = 32 ;
    	a16 = 10;
    	a160 = 32 ;
    	a97 = 4;
    	a165 = 32 ;
    	a48 = 32 ;
    	a41 = 32 ;
    	a109 = 32 ;
    	a150 = 5;
    	a193 = 8;
    	a34 = 32 ;
    	a79 = 6;
    	a20 = 4;
    	a154 = 32 ;
    	a196 = 6;
    	a104 = 32 ;
    	a169 = 32 ;
    	a134 = 16;
    	a22 = 8;
    	a200 = 35 ;
    	a37 = 9;
    	a28 = 10;
    	a101 = 32 ;
    	a178 = 32 ;
    	a187 = 4;
    	a75 = 4; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 841\n");

    if(((a154 == 34 && (a169 == 34 && a28 == 11)) && (a178 == 34 && ((a144 == 34 && ((input == 10) &&  cf==1 )) && a16 == 11)))) {
printf("POINT: 842\n");
    	cf = 0;
    	a15 = 9;
    	a131 = 9;
    	a16 = 9;
    	a46 = 33 ;
    	a150 = 4;
    	a118 = 33 ;
    	a77 = 9;
    	a81 = 10;
    	a154 = 33 ;
    	a125 = 33 ;
    	a45 = 33 ;
    	a200 = 33 ;
    	a121 = 33 ;
    	a174 = 7;
    	a95 = 8;
    	a32 = 33 ;
    	a152 = 8;
    	a88 = 33 ;
    	a25 = 4;
    	a126 = 3;
    	a12 = 33 ;
    	a196 = 5;
    	a0 = 33 ;
    	a65 = 9;
    	a84 = 33 ;
    	a2 = 3;
    	a26 = 2;
    	a112 = 33 ;
    	a179 = 33 ;
    	a53 = 33 ;
    	a34 = 33 ;
    	a79 = 5;
    	a144 = 33 ;
    	a20 = 3;
    	a41 = 33 ;
    	a105 = 10;
    	a160 = 33 ;
    	a56 = 8;
    	a37 = 8;
    	a86 = 32 ;
    	a90 = 33 ;
    	a17 = 33 ;
    	a104 = 33 ;
    	a51 = 33 ;
    	a167 = 1;
    	a153 = 3;
    	a120 = 5;
    	a48 = 33 ;
    	a110 = 5;
    	a22 = 7;
    	a69 = 33 ;
    	a101 = 33 ;
    	a147 = 1; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 843\n");

    if(((((a154 == 34 && a110 == 7) && a119 == 34) && a178 == 34) && (a34 == 34 && (( cf==1  && (input == 4)) && a140 == 6)))) {
printf("POINT: 844\n");
    	cf = 0;
    	a125 = 33 ;
    	a120 = 7;
    	a141 = 33 ;
    	a121 = 33 ;
    	a0 = 33 ;
    	a110 = 5;
    	a90 = 33 ;
    	a174 = 7;
    	a154 = 33 ;
    	a12 = 34 ;
    	a17 = 33 ;
    	a32 = 33 ;
    	a126 = 3;
    	a200 = 33 ;
    	a153 = 3;
    	a34 = 32 ;
    	a93 = 2;
    	a69 = 33 ;
    	a196 = 5;
    	a26 = 2;
    	a86 = 32 ;
    	a28 = 9;
    	a25 = 4;
    	a169 = 32 ;
    	a15 = 9;
    	a109 = 33 ;
    	a160 = 32 ;
    	a81 = 11;
    	a193 = 8;
    	a88 = 32 ;
    	a84 = 33 ;
    	a16 = 10;
    	a77 = 7;
    	a119 = 32 ;
    	a68 = 2;
    	a184 = 7;
    	a46 = 32 ;
    	a55 = 32 ;
    	a140 = 4;
    	a45 = 33 ;
    	a41 = 32 ;
    	a131 = 10;
    	a152 = 8;
    	a37 = 9;
    	a95 = 8;
    	a53 = 33 ;
    	a20 = 3;
    	a118 = 33 ;
    	a176 = 4;
    	a62 = 4; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm100(int input) {
printf("POINT: 845\n");

    if((((((a193 == 9 && (a153 == 5 && ( cf==1  && (input == 7)))) && a101 == 34) && a187 == 5) && a53 == 34) && a196 == 7)) {
printf("POINT: 846\n");
    	cf = 0;
printf("POINT: 847\n");

    	if((a65 == 14 && (a104 == 34 && ((!(a41 == 34) && a24 == 8) || a182 == 33)))) {
printf("POINT: 848\n");
    	a110 = 6;
    	a144 = 32 ;
    	a68 = 3;
    	a53 = 32 ;
    	a179 = 34 ;
    	a125 = 32 ;
    	a28 = 11;
    	a150 = 6;
    	a126 = 4;
    	a41 = 32 ;
    	a160 = 32 ;
    	a180 = 32 ;
    	a2 = 5;
    	a51 = 34 ;
    	a93 = 3;
    	a200 = 36 ;
    	a153 = 5;
    	a196 = 6;
    	a5 = 34 ;
    	a187 = 4;
    	a12 = 32 ;
    	a146 = 32 ;
    	a152 = 10;
    	a154 = 32 ;
    	a193 = 9;
    	a158 = 7;
    	a115 = 32 ;
    	a48 = 32 ;
    	a104 = 32 ;
    	a118 = 32 ;
    	a79 = 6;
    	a39 = 9;
    	a165 = 32 ;
    	a32 = 32 ;
    	a101 = 32 ;
    	a84 = 32 ;
    	a105 = 11;
    	a64 = 12; 
    	}else {
printf("POINT: 850\n");
    	a17 = 34 ;
    	a20 = 5;
    	a90 = 34 ;
    	a126 = 5;
    	a119 = 34 ;
    	a95 = 10;
    	a176 = 4;
    	a56 = 10;
    	a0 = 34 ;
    	a101 = 32 ;
    	a84 = 34 ;
    	a26 = 4;
    	a5 = 33 ;
    	a22 = 9;
    	a178 = 34 ;
    	a184 = 7;
    	a55 = 34 ;
    	a45 = 34 ;
    	a112 = 34 ;
    	a128 = 3;
    	a34 = 34 ;
    	a164 = 13;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 851\n");

    if((((a2 == 5 && a51 == 34) && a12 == 34) && ((a101 == 34 && (a144 == 34 && ((input == 10) &&  cf==1 ))) && a154 == 34))) {
printf("POINT: 852\n");
    	cf = 0;
    	a94 = 32 ;
    	a55 = 34 ;
    	a30 = 32 ;
    	a150 = 5;
    	a46 = 32 ;
    	a12 = 32 ;
    	a178 = 34 ;
    	a48 = 32 ;
    	a22 = 9;
    	a20 = 5;
    	a17 = 34 ;
    	a135 = 12;
    	a128 = 3;
    	a169 = 32 ;
    	a51 = 32 ;
    	a32 = 32 ;
    	a41 = 32 ;
    	a121 = 32 ;
    	a184 = 7;
    	a193 = 8;
    	a15 = 10;
    	a127 = 7;
    	a97 = 5;
    	a156 = 6; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm101(int input) {
printf("POINT: 853\n");

    if(((a184 == 7 && (a196 == 7 && a154 == 34)) && (a180 == 34 && (a128 == 3 && (a34 == 34 && ( cf==1  && (input == 9))))))) {
printf("POINT: 854\n");
    	cf = 0;
    	a105 = 12;
    	a68 = 3;
    	a45 = 32 ;
    	a84 = 32 ;
    	a127 = 8;
    	a178 = 32 ;
    	a56 = 9;
    	a28 = 11;
    	a120 = 6;
    	a51 = 34 ;
    	a165 = 34 ;
    	a12 = 34 ;
    	a167 = 3;
    	a15 = 11;
    	a110 = 7;
    	a118 = 32 ;
    	a41 = 34 ;
    	a140 = 6;
    	a153 = 5;
    	a25 = 5;
    	a16 = 10;
    	a48 = 34 ;
    	a125 = 34 ;
    	a150 = 6;
    	a34 = 32 ;
    	a40 = 35 ;
    	a88 = 32 ;
    	a22 = 8;
    	a46 = 34 ;
    	a101 = 34 ;
    	a39 = 9;
    	a55 = 32 ;
    	a81 = 12;
    	a152 = 10;
    	a69 = 32 ;
    	a184 = 6;
    	a160 = 34 ;
    	a131 = 10;
    	a26 = 3;
    	a30 = 34 ;
    	a97 = 4;
    	a65 = 10;
    	a135 = 15;
    	a0 = 32 ;
    	a126 = 4;
    	a157 = 6; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 855\n");

    if(((a144 == 34 && ((a84 == 34 && ( cf==1  && (input == 10))) && a126 == 5)) && ((a150 == 6 && a165 == 34) && a55 == 34))) {
printf("POINT: 856\n");
    	cf = 0;
    	a158 = 7;
    	a81 = 11;
    	a34 = 32 ;
    	a115 = 32 ;
    	a104 = 32 ;
    	a30 = 32 ;
    	a20 = 4;
    	a141 = 32 ;
    	a126 = 4;
    	a46 = 32 ;
    	a79 = 6;
    	a12 = 32 ;
    	a17 = 32 ;
    	a55 = 32 ;
    	a140 = 5;
    	a26 = 3;
    	a53 = 32 ;
    	a200 = 36 ;
    	a178 = 32 ;
    	a154 = 32 ;
    	a127 = 7;
    	a121 = 32 ;
    	a180 = 32 ;
    	a119 = 32 ;
    	a118 = 32 ;
    	a95 = 9;
    	a184 = 6;
    	a155 = 35 ;
    	a125 = 32 ;
    	a196 = 6;
    	a187 = 4;
    	a0 = 32 ;
    	a174 = 8;
    	a84 = 32 ;
    	a169 = 32 ;
    	a150 = 5;
    	a112 = 32 ;
    	a93 = 3;
    	a165 = 32 ;
    	a64 = 14; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 857\n");

    if((((a179 == 34 && (a154 == 34 && a193 == 9)) && a15 == 11) && (a56 == 10 && (a109 == 34 && ((input == 3) &&  cf==1 ))))) {
printf("POINT: 858\n");
    	cf = 0;
    	a20 = 4;
    	a150 = 6;
    	a105 = 12;
    	a179 = 34 ;
    	a153 = 5;
    	a97 = 4;
    	a69 = 32 ;
    	a110 = 7;
    	a112 = 32 ;
    	a41 = 34 ;
    	a120 = 6;
    	a184 = 6;
    	a84 = 32 ;
    	a88 = 32 ;
    	a160 = 34 ;
    	a137 = 33 ;
    	a165 = 34 ;
    	a65 = 10;
    	a125 = 34 ;
    	a51 = 34 ;
    	a131 = 10;
    	a152 = 10;
    	a16 = 10;
    	a126 = 4;
    	a176 = 3;
    	a32 = 34 ;
    	a154 = 34 ;
    	a193 = 9;
    	a39 = 9;
    	a17 = 32 ;
    	a135 = 8;
    	a28 = 11;
    	a26 = 3;
    	a95 = 9;
    	a25 = 5;
    	a101 = 34 ;
    	a12 = 34 ;
    	a2 = 5;
    	a55 = 32 ;
    	a90 = 32 ;
    	a118 = 32 ;
    	a119 = 32 ;
    	a68 = 3;
    	a13 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm12(int input) {
printf("POINT: 859\n");

    if(((((( cf==1  && a164 == 6) && a153 == 5) && a152 == 10) && a65 == 11) && (a193 == 9 && (a104 == 34 && a25 == 6)))) {
printf("POINT: 860\n");
printf("POINT: 861\n");

    	if((((a187 == 5 && a0 == 34) && a81 == 12) && (a81 == 12 && (((a49 == 14 &&  cf==1 ) && a110 == 7) && a141 == 34)))) {
printf("POINT: 862\n");
    		calculate_outputm95(input);
    	} 
    } 
printf("POINT: 863\n");

    if(((a90 == 34 && a131 == 11) && (a22 == 9 && (a84 == 34 && ((a127 == 8 && ( cf==1  && a164 == 8)) && a79 == 7))))) {
printf("POINT: 864\n");
printf("POINT: 865\n");

    	if(((((a68 == 4 && a104 == 34) && a88 == 34) && a90 == 34) && (a68 == 4 && (( cf==1  && a91 == 34) && a193 == 9)))) {
printf("POINT: 866\n");
    		calculate_outputm96(input);
    	} 
    } 
printf("POINT: 867\n");

    if(((a154 == 34 && ((a150 == 6 && (a146 == 34 && a110 == 7)) && a30 == 34)) && (a150 == 6 && ( cf==1  && a164 == 9)))) {
printf("POINT: 868\n");
printf("POINT: 869\n");

    	if((((a32 == 34 && (a196 == 7 && (a157 == 6 &&  cf==1 ))) && a17 == 34) && ((a120 == 7 && a118 == 34) && a55 == 34))) {
printf("POINT: 870\n");
    		calculate_outputm97(input);
    	} 
    } 
printf("POINT: 871\n");

    if(((a150 == 6 && (a109 == 34 && (a164 == 10 &&  cf==1 ))) && (((a65 == 11 && a37 == 10) && a15 == 11) && a127 == 8))) {
printf("POINT: 872\n");
printf("POINT: 873\n");

    	if((((a146 == 34 && (a153 == 5 && a115 == 34)) && a26 == 4) && (((a52 == 9 &&  cf==1 ) && a146 == 34) && a169 == 34))) {
printf("POINT: 874\n");
    		calculate_outputm98(input);
    	} 
printf("POINT: 875\n");

    	if(((a110 == 7 && (a165 == 34 && (a121 == 34 && a39 == 9))) && (a112 == 34 && (a17 == 34 && ( cf==1  && a52 == 12))))) {
printf("POINT: 876\n");
    		calculate_outputm99(input);
    	} 
    } 
printf("POINT: 877\n");

    if(((a32 == 34 && (a101 == 34 && ((a164 == 12 &&  cf==1 ) && a41 == 34))) && (a39 == 9 && (a37 == 10 && a160 == 34)))) {
printf("POINT: 878\n");
printf("POINT: 879\n");

    	if(((a32 == 34 && (a154 == 34 && ((a172 == 34 &&  cf==1 ) && a53 == 34))) && ((a30 == 34 && a152 == 10) && a15 == 11))) {
printf("POINT: 880\n");
    		calculate_outputm100(input);
    	} 
    } 
printf("POINT: 881\n");

    if(((a179 == 34 && (a105 == 12 && a178 == 34)) && (a95 == 10 && ((a178 == 34 && (a164 == 13 &&  cf==1 )) && a26 == 4)))) {
printf("POINT: 882\n");
printf("POINT: 883\n");

    	if((a119 == 34 && (a56 == 10 && (((a105 == 12 && ((a5 == 33 &&  cf==1 ) && a174 == 9)) && a128 == 3) && a12 == 34)))) {
printf("POINT: 884\n");
    		calculate_outputm101(input);
    	} 
    } 
}
 void calculate_outputm102(int input) {
printf("POINT: 885\n");

    if((a126 == 5 && (a105 == 12 && (a34 == 34 && ((a146 == 34 && (( cf==1  && (input == 9)) && a48 == 34)) && a17 == 34))))) {
printf("POINT: 886\n");
    	cf = 0;
    	a46 = 32 ;
    	a41 = 34 ;
    	a2 = 4;
    	a25 = 6;
    	a144 = 32 ;
    	a127 = 8;
    	a32 = 34 ;
    	a118 = 34 ;
    	a125 = 34 ;
    	a110 = 7;
    	a12 = 32 ;
    	a105 = 11;
    	a48 = 34 ;
    	a135 = 14;
    	a115 = 32 ;
    	a15 = 11;
    	a81 = 11;
    	a88 = 32 ;
    	a69 = 32 ;
    	a51 = 32 ;
    	a176 = 3;
    	a109 = 34 ;
    	a131 = 10;
    	a56 = 9;
    	a112 = 32 ;
    	a45 = 32 ;
    	a126 = 4;
    	a169 = 34 ;
    	a39 = 8;
    	a65 = 10;
    	a101 = 32 ;
    	a120 = 6;
    	a184 = 7;
    	a140 = 5;
    	a153 = 5;
    	a55 = 32 ;
    	a90 = 32 ;
    	a98 = 13;
    	a150 = 5;
    	a141 = 32 ;
    	a68 = 3;
    	a119 = 32 ;
    	a16 = 10;
    	a152 = 10;
    	a30 = 32 ;
    	a64 = 11; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 887\n");

    if(((a140 == 6 && a167 == 3) && (a46 == 34 && (a146 == 34 && (a154 == 34 && (((input == 6) &&  cf==1 ) && a0 == 34)))))) {
printf("POINT: 888\n");
    	cf = 0;
    	a150 = 5;
    	a28 = 10;
    	a48 = 34 ;
    	a126 = 5;
    	a146 = 34 ;
    	a144 = 32 ;
    	a154 = 32 ;
    	a104 = 34 ;
    	a127 = 8;
    	a187 = 5;
    	a69 = 32 ;
    	a196 = 6;
    	a101 = 32 ;
    	a180 = 34 ;
    	a51 = 32 ;
    	a165 = 34 ;
    	a95 = 9;
    	a55 = 32 ;
    	a93 = 3;
    	a184 = 7;
    	a105 = 12;
    	a118 = 34 ;
    	a97 = 5;
    	a46 = 34 ;
    	a120 = 7;
    	a179 = 32 ;
    	a152 = 10;
    	a174 = 9;
    	a56 = 10;
    	a30 = 32 ;
    	a53 = 34 ;
    	a112 = 32 ;
    	a34 = 32 ;
    	a128 = 3;
    	a15 = 11;
    	a109 = 34 ;
    	a0 = 32 ;
    	a200 = 36 ;
    	a39 = 8;
    	a169 = 34 ;
    	a84 = 34 ;
    	a193 = 8;
    	a160 = 32 ;
    	a153 = 5;
    	a140 = 6;
    	a121 = 34 ;
    	a158 = 11;
    	a79 = 7;
    	a16 = 10;
    	a45 = 32 ;
    	a167 = 2;
    	a81 = 11;
    	a26 = 3;
    	a178 = 32 ;
    	a22 = 9;
    	a32 = 34 ;
    	a17 = 34 ;
    	a119 = 32 ;
    	a36 = 33 ;
    	a20 = 4;
    	a37 = 10;
    	a185 = 13; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm103(int input) {
printf("POINT: 889\n");

    if(((a118 == 34 && (( cf==1  && (input == 1)) && a48 == 34)) && (a25 == 6 && (a187 == 5 && (a45 == 34 && a176 == 4))))) {
printf("POINT: 890\n");
    	cf = 0;
    	a200 = 35 ;
    	a87 = 35 ;
    	a54 = 32 ;
    	a134 = 17; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 891\n");

    if(((((a153 == 5 && ( cf==1  && (input == 9))) && a112 == 34) && a121 == 34) && ((a118 == 34 && a120 == 7) && a153 == 5))) {
printf("POINT: 892\n");
    	cf = 0;
    	a178 = 34 ;
    	a53 = 34 ;
    	a12 = 33 ;
    	a152 = 13;
    	a97 = 5;
    	a22 = 12;
    	a68 = 2;
    	a196 = 10;
    	a127 = 8;
    	a3 = 34 ;
    	a184 = 11;
    	a34 = 33 ;
    	a128 = 6;
    	a169 = 36 ;
    	a30 = 36 ;
    	a200 = 35 ;
    	a115 = 33 ;
    	a65 = 11;
    	a187 = 6;
    	a26 = 8;
    	a48 = 36 ;
    	a180 = 35 ;
    	a176 = 5;
    	a105 = 13;
    	a104 = 33 ;
    	a25 = 6;
    	a51 = 36 ;
    	a120 = 9;
    	a55 = 36 ;
    	a79 = 10;
    	a144 = 33 ;
    	a125 = 36 ;
    	a90 = 35 ;
    	a167 = 1;
    	a56 = 8;
    	a118 = 34 ;
    	a15 = 16;
    	a126 = 10;
    	a179 = 33 ;
    	a160 = 33 ;
    	a146 = 34 ;
    	a37 = 13;
    	a140 = 4;
    	a153 = 10;
    	a109 = 34 ;
    	a17 = 34 ;
    	a69 = 35 ;
    	a134 = 16;
    	a154 = 33 ;
    	a174 = 14;
    	a112 = 35 ;
    	a121 = 35 ;
    	a75 = 11; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 893\n");

    if(((a25 == 6 && (a174 == 9 && a160 == 34)) && (a152 == 10 && (a128 == 3 && (a125 == 34 && ((input == 6) &&  cf==1 )))))) {
printf("POINT: 894\n");
    	cf = 0;
    	a20 = 3;
    	a165 = 36 ;
    	a150 = 7;
    	a98 = 13;
    	a121 = 36 ;
    	a25 = 10;
    	a0 = 36 ;
    	a90 = 34 ;
    	a51 = 36 ;
    	a193 = 12;
    	a56 = 10;
    	a16 = 15;
    	a65 = 12;
    	a154 = 33 ;
    	a135 = 14;
    	a153 = 6;
    	a176 = 2;
    	a144 = 34 ;
    	a127 = 8;
    	a12 = 36 ;
    	a126 = 6;
    	a160 = 34 ;
    	a15 = 15;
    	a48 = 35 ;
    	a64 = 9; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 895\n");

    if(((((((input == 5) &&  cf==1 ) && a146 == 34) && a65 == 11) && a26 == 4) && ((a196 == 7 && a69 == 34) && a144 == 34))) {
printf("POINT: 896\n");
    	cf = 0;
printf("POINT: 897\n");

    	if((a16 == 9 || (a43 == 32 || !(a79 == 12)))) {
printf("POINT: 898\n");
    	a167 = 8;
    	a128 = 6;
    	a39 = 11;
    	a120 = 12;
    	a97 = 5;
    	a200 = 35 ;
    	a69 = 33 ;
    	a154 = 34 ;
    	a28 = 15;
    	a179 = 33 ;
    	a121 = 35 ;
    	a164 = 13;
    	a17 = 36 ;
    	a146 = 35 ;
    	a53 = 34 ;
    	a187 = 9;
    	a126 = 8;
    	a79 = 10;
    	a68 = 4;
    	a56 = 10;
    	a134 = 10;
    	a34 = 33 ;
    	a115 = 35 ;
    	a112 = 35 ;
    	a125 = 35 ;
    	a48 = 36 ;
    	a176 = 6;
    	a55 = 36 ;
    	a22 = 9;
    	a153 = 3;
    	a51 = 33 ;
    	a90 = 36 ;
    	a12 = 34 ;
    	a144 = 33 ;
    	a30 = 33 ;
    	a152 = 14;
    	a65 = 11;
    	a15 = 9;
    	a25 = 7;
    	a127 = 13;
    	a196 = 8;
    	a37 = 14;
    	a118 = 33 ;
    	a105 = 16;
    	a169 = 34 ;
    	a109 = 35 ;
    	a174 = 11;
    	a180 = 36 ;
    	a160 = 35 ;
    	a45 = 36 ;
    	a104 = 34 ;
    	a178 = 33 ;
    	a157 = 10; 
    	}else {
printf("POINT: 900\n");
    	a69 = 34 ;
    	a115 = 36 ;
    	a144 = 36 ;
    	a17 = 34 ;
    	a109 = 35 ;
    	a126 = 9;
    	a121 = 36 ;
    	a120 = 12;
    	a140 = 9;
    	a178 = 33 ;
    	a22 = 7;
    	a129 = 35 ;
    	a53 = 35 ;
    	a153 = 5;
    	a15 = 16;
    	a55 = 35 ;
    	a28 = 13;
    	a104 = 36 ;
    	a196 = 12;
    	a160 = 33 ;
    	a180 = 34 ;
    	a81 = 12;
    	a30 = 33 ;
    	a184 = 5;
    	a97 = 5;
    	a125 = 33 ;
    	a2 = 10;
    	a37 = 15;
    	a41 = 33 ;
    	a128 = 5;
    	a152 = 15;
    	a158 = 7;
    	a12 = 34 ;
    	a167 = 3;
    	a90 = 33 ;
    	a174 = 7;
    	a110 = 7;
    	a127 = 8;
    	a146 = 36 ;
    	a118 = 36 ;
    	a105 = 12;
    	a200 = 36 ;
    	a26 = 2;
    	a119 = 35 ;
    	a32 = 36 ;
    	a68 = 2;
    	a56 = 8;
    	a112 = 36 ;
    	a45 = 33 ;
    	a169 = 32 ;
    	a25 = 7;
    	a187 = 5;
    	a176 = 5;
    	a65 = 12;
    	a154 = 34 ;
    	a165 = 33 ;
    	a39 = 9;
    	a51 = 36 ;
    	a79 = 11;
    	a179 = 35 ;
    	a34 = 33 ;
    	a48 = 33 ;
    	a141 = 35 ;
    	a64 = 15;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 901\n");

    if(((a90 == 34 && (a105 == 12 && a97 == 5)) && ((a68 == 4 && (a65 == 11 && ((input == 2) &&  cf==1 ))) && a12 == 34))) {
printf("POINT: 902\n");
    	cf = 0;
printf("POINT: 903\n");

    	if((!(a152 == 11) || a112 == 36)) {
printf("POINT: 904\n");
    	a135 = 15;
    	a32 = 32 ;
    	a20 = 10;
    	a119 = 33 ;
    	a40 = 33 ;
    	a93 = 5;
    	a157 = 6; 
    	}else {
printf("POINT: 906\n");
    	a178 = 35 ;
    	a126 = 10;
    	a37 = 14;
    	a167 = 6;
    	a169 = 34 ;
    	a39 = 7;
    	a152 = 13;
    	a180 = 36 ;
    	a160 = 34 ;
    	a25 = 11;
    	a15 = 12;
    	a115 = 34 ;
    	a146 = 34 ;
    	a97 = 5;
    	a69 = 34 ;
    	a120 = 12;
    	a118 = 33 ;
    	a125 = 36 ;
    	a56 = 14;
    	a26 = 8;
    	a196 = 8;
    	a104 = 36 ;
    	a55 = 33 ;
    	a176 = 9;
    	a51 = 36 ;
    	a105 = 10;
    	a30 = 33 ;
    	a48 = 36 ;
    	a121 = 33 ;
    	a22 = 9;
    	a186 = 33 ;
    	a179 = 35 ;
    	a200 = 36 ;
    	a45 = 36 ;
    	a128 = 6;
    	a153 = 3;
    	a53 = 35 ;
    	a163 = 36 ;
    	a187 = 8;
    	a174 = 12;
    	a34 = 36 ;
    	a12 = 35 ;
    	a79 = 12;
    	a154 = 34 ;
    	a127 = 12;
    	a144 = 33 ;
    	a17 = 33 ;
    	a68 = 2;
    	a112 = 34 ;
    	a90 = 35 ;
    	a109 = 35 ;
    	a65 = 9;
    	a158 = 13;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 907\n");

    if(((a128 == 3 && (a25 == 6 && (((input == 4) &&  cf==1 ) && a39 == 9))) && ((a79 == 7 && a53 == 34) && a34 == 34))) {
printf("POINT: 908\n");
    	cf = 0;
    	a46 = 32 ;
    	a118 = 36 ;
    	a127 = 12;
    	a146 = 32 ;
    	a109 = 36 ;
    	a3 = 34 ;
    	a15 = 12;
    	a153 = 8;
    	a16 = 11;
    	a79 = 9;
    	a53 = 32 ;
    	a125 = 36 ;
    	a112 = 34 ;
    	a39 = 8;
    	a90 = 34 ;
    	a104 = 35 ;
    	a128 = 5;
    	a141 = 32 ;
    	a30 = 33 ;
    	a167 = 8;
    	a84 = 32 ;
    	a196 = 8;
    	a178 = 33 ;
    	a68 = 7;
    	a26 = 2;
    	a134 = 16;
    	a22 = 14;
    	a12 = 35 ;
    	a25 = 7;
    	a105 = 16;
    	a34 = 33 ;
    	a115 = 33 ;
    	a144 = 34 ;
    	a119 = 36 ;
    	a169 = 36 ;
    	a81 = 13;
    	a174 = 12;
    	a65 = 10;
    	a193 = 10;
    	a126 = 8;
    	a184 = 10;
    	a95 = 8;
    	a51 = 36 ;
    	a200 = 35 ;
    	a176 = 2;
    	a154 = 35 ;
    	a187 = 3;
    	a179 = 32 ;
    	a55 = 36 ;
    	a120 = 7;
    	a48 = 33 ;
    	a17 = 34 ;
    	a97 = 10;
    	a121 = 32 ;
    	a160 = 33 ;
    	a56 = 11;
    	a140 = 10;
    	a28 = 15;
    	a45 = 35 ;
    	a69 = 36 ;
    	a152 = 9;
    	a37 = 14;
    	a180 = 34 ;
    	a75 = 10; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 909\n");

    if(((a30 == 34 && (a34 == 34 && a196 == 7)) && (a115 == 34 && ((a154 == 34 && ( cf==1  && (input == 7))) && a126 == 5)))) {
printf("POINT: 910\n");
    	cf = 0;
    	a160 = 34 ;
    	a112 = 36 ;
    	a81 = 13;
    	a22 = 10;
    	a176 = 6;
    	a25 = 11;
    	a179 = 33 ;
    	a32 = 36 ;
    	a158 = 10;
    	a196 = 8;
    	a126 = 5;
    	a97 = 8;
    	a174 = 9;
    	a45 = 36 ;
    	a53 = 35 ;
    	a105 = 17;
    	a128 = 3;
    	a180 = 33 ;
    	a118 = 34 ;
    	a127 = 13;
    	a68 = 8;
    	a15 = 13;
    	a144 = 35 ;
    	a79 = 7;
    	a30 = 35 ;
    	a51 = 36 ;
    	a55 = 33 ;
    	a110 = 12;
    	a184 = 10;
    	a115 = 36 ;
    	a12 = 34 ;
    	a37 = 14;
    	a167 = 4;
    	a56 = 13;
    	a90 = 36 ;
    	a154 = 34 ;
    	a153 = 3;
    	a178 = 35 ;
    	a65 = 13;
    	a34 = 36 ;
    	a26 = 5;
    	a165 = 35 ;
    	a48 = 36 ;
    	a120 = 9;
    	a183 = 12;
    	a121 = 35 ;
    	a69 = 36 ;
    	a125 = 34 ;
    	a39 = 11;
    	a169 = 33 ;
    	a141 = 36 ;
    	a187 = 6;
    	a17 = 33 ;
    	a200 = 36 ;
    	a146 = 33 ;
    	a152 = 13;
    	a109 = 34 ;
    	a104 = 35 ;
    	a7 = 4; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 911\n");

    if(((a104 == 34 && (((a126 == 5 && a39 == 9) && a167 == 3) && a55 == 34)) && (((input == 8) &&  cf==1 ) && a56 == 10))) {
printf("POINT: 912\n");
    	cf = 0;
    	a126 = 3;
    	a158 = 8;
    	a53 = 36 ;
    	a30 = 34 ;
    	a55 = 33 ;
    	a68 = 4;
    	a79 = 11;
    	a174 = 7;
    	a118 = 33 ;
    	a93 = 6;
    	a128 = 4;
    	a120 = 11;
    	a51 = 36 ;
    	a154 = 36 ;
    	a2 = 8;
    	a41 = 34 ;
    	a22 = 7;
    	a56 = 14;
    	a109 = 35 ;
    	a12 = 34 ;
    	a26 = 5;
    	a200 = 36 ;
    	a196 = 11;
    	a37 = 8;
    	a69 = 34 ;
    	a160 = 36 ;
    	a144 = 36 ;
    	a110 = 11;
    	a25 = 11;
    	a127 = 10;
    	a176 = 6;
    	a105 = 10;
    	a125 = 33 ;
    	a153 = 8;
    	a121 = 35 ;
    	a97 = 6;
    	a122 = 32 ;
    	a112 = 33 ;
    	a39 = 14;
    	a152 = 8;
    	a179 = 35 ;
    	a115 = 33 ;
    	a169 = 35 ;
    	a180 = 36 ;
    	a167 = 6;
    	a34 = 33 ;
    	a187 = 6;
    	a17 = 34 ;
    	a146 = 35 ;
    	a45 = 36 ;
    	a65 = 13;
    	a141 = 35 ;
    	a28 = 11;
    	a48 = 34 ;
    	a15 = 9;
    	a178 = 35 ;
    	a90 = 36 ;
    	a104 = 34 ;
    	a183 = 14; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 913\n");

    if((((a68 == 4 && a179 == 34) && a126 == 5) && ((a178 == 34 && (a53 == 34 && ((input == 10) &&  cf==1 ))) && a51 == 34))) {
printf("POINT: 914\n");
    	cf = 0;
printf("POINT: 915\n");

    	if((!(a5 == 34) && (a115 == 36 || (a77 == 7 && a144 == 32)))) {
printf("POINT: 916\n");
    	a193 = 10;
    	a165 = 32 ;
    	a141 = 32 ;
    	a140 = 7;
    	a119 = 33 ;
    	a5 = 33 ;
    	a0 = 35 ;
    	a84 = 36 ;
    	a81 = 11;
    	a95 = 8;
    	a46 = 33 ;
    	a20 = 8;
    	a135 = 9;
    	a69 = 33 ;
    	a93 = 7;
    	a65 = 12;
    	a150 = 8;
    	a2 = 7;
    	a184 = 12;
    	a97 = 9;
    	a32 = 36 ;
    	a164 = 13; 
    	}else {
printf("POINT: 918\n");
    	a81 = 15;
    	a17 = 36 ;
    	a28 = 14;
    	a141 = 32 ;
    	a110 = 6;
    	a160 = 35 ;
    	a131 = 11;
    	a25 = 11;
    	a152 = 11;
    	a84 = 35 ;
    	a46 = 36 ;
    	a65 = 15;
    	a120 = 8;
    	a88 = 36 ;
    	a95 = 12;
    	a126 = 3;
    	a0 = 36 ;
    	a101 = 33 ;
    	a97 = 6;
    	a193 = 11;
    	a119 = 36 ;
    	a118 = 34 ;
    	a90 = 34 ;
    	a26 = 2;
    	a16 = 14;
    	a150 = 10;
    	a105 = 14;
    	a55 = 36 ;
    	a154 = 35 ;
    	a140 = 7;
    	a165 = 32 ;
    	a93 = 3;
    	a12 = 33 ;
    	a39 = 12;
    	a153 = 6;
    	a69 = 35 ;
    	a184 = 9;
    	a176 = 9;
    	a125 = 32 ;
    	a41 = 32 ;
    	a68 = 8;
    	a32 = 35 ;
    	a20 = 7;
    	a2 = 9;
    	a179 = 33 ;
    	a112 = 36 ;
    	a51 = 35 ;
    	a135 = 8;
    	a137 = 33 ;
    	a13 = 8;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 919\n");

    if((((((input == 3) &&  cf==1 ) && a65 == 11) && a26 == 4) && (((a17 == 34 && a48 == 34) && a22 == 9) && a128 == 3))) {
printf("POINT: 920\n");
    	cf = 0;
printf("POINT: 921\n");

    	if((((a115 == 32 && !(a138 == 36)) && !(a5 == 32)) || a61 == 8)) {
printf("POINT: 922\n");
    	a105 = 17;
    	a153 = 8;
    	a30 = 35 ;
    	a178 = 33 ;
    	a55 = 36 ;
    	a90 = 35 ;
    	a51 = 35 ;
    	a68 = 6;
    	a146 = 35 ;
    	a160 = 34 ;
    	a12 = 33 ;
    	a114 = 12;
    	a176 = 6;
    	a128 = 3;
    	a65 = 14;
    	a97 = 9;
    	a120 = 12;
    	a179 = 35 ;
    	a174 = 13;
    	a127 = 13;
    	a45 = 36 ;
    	a196 = 7;
    	a121 = 35 ;
    	a17 = 33 ;
    	a48 = 35 ;
    	a125 = 33 ;
    	a134 = 15;
    	a187 = 6;
    	a79 = 9;
    	a144 = 33 ;
    	a126 = 3;
    	a15 = 16;
    	a25 = 4;
    	a169 = 34 ;
    	a200 = 35 ;
    	a104 = 36 ;
    	a34 = 34 ;
    	a180 = 35 ;
    	a115 = 33 ;
    	a167 = 7;
    	a109 = 35 ;
    	a22 = 13;
    	a39 = 13;
    	a118 = 34 ;
    	a37 = 10;
    	a154 = 34 ;
    	a147 = 1; 
    	}else {
printf("POINT: 924\n");
    	a125 = 33 ;
    	a28 = 13;
    	a150 = 4;
    	a138 = 32 ;
    	a153 = 3;
    	a32 = 33 ;
    	a55 = 34 ;
    	a69 = 33 ;
    	a169 = 34 ;
    	a26 = 2;
    	a135 = 8;
    	a88 = 34 ;
    	a101 = 35 ;
    	a176 = 7;
    	a20 = 5;
    	a81 = 12;
    	a95 = 11;
    	a140 = 6;
    	a115 = 33 ;
    	a112 = 32 ;
    	a128 = 1;
    	a15 = 16;
    	a110 = 9;
    	a152 = 13;
    	a193 = 11;
    	a141 = 35 ;
    	a46 = 33 ;
    	a119 = 35 ;
    	a93 = 6;
    	a90 = 36 ;
    	a17 = 32 ;
    	a131 = 11;
    	a2 = 3;
    	a79 = 12;
    	a97 = 7;
    	a184 = 12;
    	a68 = 5;
    	a84 = 33 ;
    	a179 = 35 ;
    	a105 = 12;
    	a120 = 9;
    	a45 = 36 ;
    	a22 = 13;
    	a16 = 16;
    	a65 = 13;
    	a109 = 33 ;
    	a41 = 36 ;
    	a0 = 36 ;
    	a37 = 15;
    	a165 = 35 ;
    	a13 = 6;
    	}printf("%d\n", 18);  
    } 
}
 void calculate_outputm104(int input) {
printf("POINT: 925\n");

    if(((a25 == 6 && a37 == 10) && (a169 == 34 && (((a112 == 34 && ((input == 4) &&  cf==1 )) && a180 == 34) && a37 == 10)))) {
printf("POINT: 926\n");
    	cf = 0;
    	a2 = 3;
    	a25 = 4;
    	a110 = 5;
    	a12 = 32 ;
    	a104 = 33 ;
    	a118 = 33 ;
    	a95 = 8;
    	a53 = 33 ;
    	a68 = 2;
    	a51 = 33 ;
    	a86 = 36 ;
    	a178 = 32 ;
    	a125 = 33 ;
    	a56 = 8;
    	a176 = 3;
    	a174 = 7;
    	a121 = 33 ;
    	a15 = 9;
    	a69 = 33 ;
    	a20 = 3;
    	a46 = 33 ;
    	a105 = 10;
    	a29 = 33 ;
    	a179 = 33 ;
    	a120 = 5;
    	a45 = 33 ;
    	a41 = 33 ;
    	a169 = 33 ;
    	a84 = 33 ;
    	a90 = 33 ;
    	a165 = 33 ;
    	a127 = 6;
    	a200 = 33 ;
    	a55 = 32 ;
    	a28 = 9;
    	a141 = 33 ;
    	a123 = 6; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 927\n");

    if((((a68 == 4 && (a81 == 12 && a81 == 12)) && a152 == 10) && (a109 == 34 && (a65 == 11 && ((input == 9) &&  cf==1 ))))) {
printf("POINT: 928\n");
    	cf = 0;
printf("POINT: 929\n");

    	if(((a26 == 2 && a41 == 32) || a108 == 10)) {
printf("POINT: 930\n");
    	a150 = 5;
    	a45 = 32 ;
    	a32 = 32 ;
    	a179 = 32 ;
    	a16 = 10;
    	a121 = 32 ;
    	a128 = 2;
    	a30 = 34 ;
    	a26 = 3;
    	a126 = 4;
    	a200 = 36 ;
    	a178 = 32 ;
    	a174 = 8;
    	a160 = 32 ;
    	a22 = 8;
    	a154 = 32 ;
    	a68 = 3;
    	a120 = 6;
    	a152 = 9;
    	a46 = 34 ;
    	a65 = 10;
    	a125 = 32 ;
    	a169 = 32 ;
    	a79 = 6;
    	a20 = 4;
    	a140 = 5;
    	a180 = 32 ;
    	a122 = 36 ;
    	a167 = 2;
    	a115 = 32 ;
    	a109 = 32 ;
    	a110 = 6;
    	a15 = 10;
    	a153 = 4;
    	a144 = 32 ;
    	a48 = 32 ;
    	a37 = 9;
    	a12 = 32 ;
    	a39 = 8;
    	a97 = 4;
    	a105 = 11;
    	a129 = 36 ;
    	a187 = 4;
    	a81 = 11;
    	a53 = 32 ;
    	a158 = 8; 
    	}else {
printf("POINT: 932\n");
    	a200 = 33 ;
    	a178 = 32 ;
    	a176 = 3;
    	a120 = 5;
    	a55 = 32 ;
    	a15 = 9;
    	a69 = 33 ;
    	a56 = 8;
    	a174 = 7;
    	a28 = 9;
    	a169 = 33 ;
    	a104 = 33 ;
    	a110 = 5;
    	a105 = 10;
    	a179 = 33 ;
    	a125 = 33 ;
    	a141 = 33 ;
    	a165 = 33 ;
    	a84 = 33 ;
    	a68 = 2;
    	a2 = 3;
    	a118 = 33 ;
    	a20 = 3;
    	a12 = 32 ;
    	a90 = 33 ;
    	a95 = 8;
    	a51 = 33 ;
    	a45 = 33 ;
    	a46 = 33 ;
    	a127 = 6;
    	a25 = 4;
    	a121 = 33 ;
    	a29 = 33 ;
    	a86 = 36 ;
    	a53 = 33 ;
    	a41 = 33 ;
    	a123 = 6;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 933\n");

    if((((((input == 10) &&  cf==1 ) && a146 == 34) && a16 == 11) && (a69 == 34 && (a180 == 34 && (a193 == 9 && a25 == 6))))) {
printf("POINT: 934\n");
    	cf = 0;
    	a45 = 32 ;
    	a178 = 32 ;
    	a151 = 35 ;
    	a86 = 32 ;
    	a12 = 32 ;
    	a135 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 935\n");

    if((((a109 == 34 && (a68 == 4 && a125 == 34)) && a56 == 10) && (a32 == 34 && (( cf==1  && (input == 3)) && a154 == 34)))) {
printf("POINT: 936\n");
    	cf = 0;
    	a90 = 32 ;
    	a30 = 34 ;
    	a120 = 6;
    	a152 = 9;
    	a46 = 34 ;
    	a48 = 32 ;
    	a184 = 6;
    	a174 = 8;
    	a68 = 3;
    	a81 = 10;
    	a178 = 32 ;
    	a69 = 32 ;
    	a121 = 32 ;
    	a179 = 32 ;
    	a84 = 33 ;
    	a150 = 5;
    	a25 = 5;
    	a197 = 8;
    	a127 = 8;
    	a119 = 34 ;
    	a167 = 2;
    	a135 = 11;
    	a37 = 9;
    	a109 = 32 ;
    	a12 = 32 ;
    	a169 = 32 ;
    	a51 = 32 ;
    	a193 = 7;
    	a126 = 4;
    	a95 = 10;
    	a20 = 4;
    	a41 = 32 ;
    	a55 = 34 ;
    	a34 = 34 ;
    	a125 = 32 ;
    	a153 = 4;
    	a15 = 10;
    	a190 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm105(int input) {
printf("POINT: 937\n");

    if((((a34 == 34 && ((input == 7) &&  cf==1 )) && a141 == 34) && (a126 == 5 && (a68 == 4 && (a165 == 34 && a84 == 34))))) {
printf("POINT: 938\n");
    	cf = 0;
    	a144 = 32 ;
    	a179 = 32 ;
    	a200 = 36 ;
    	a187 = 4;
    	a45 = 32 ;
    	a68 = 3;
    	a22 = 8;
    	a176 = 3;
    	a154 = 32 ;
    	a28 = 10;
    	a51 = 32 ;
    	a101 = 32 ;
    	a112 = 32 ;
    	a25 = 5;
    	a90 = 32 ;
    	a150 = 5;
    	a95 = 9;
    	a48 = 32 ;
    	a152 = 9;
    	a127 = 7;
    	a141 = 32 ;
    	a136 = 15;
    	a140 = 5;
    	a37 = 9;
    	a2 = 4;
    	a184 = 6;
    	a15 = 10;
    	a93 = 3;
    	a53 = 32 ;
    	a174 = 8;
    	a196 = 6;
    	a180 = 32 ;
    	a56 = 9;
    	a79 = 6;
    	a105 = 11;
    	a17 = 32 ;
    	a30 = 32 ;
    	a104 = 32 ;
    	a97 = 4;
    	a109 = 33 ;
    	a39 = 8;
    	a84 = 33 ;
    	a118 = 32 ;
    	a126 = 4;
    	a32 = 32 ;
    	a34 = 32 ;
    	a16 = 10;
    	a41 = 32 ;
    	a160 = 34 ;
    	a110 = 5;
    	a65 = 9;
    	a158 = 9;
    	a146 = 32 ;
    	a165 = 32 ;
    	a61 = 7; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm106(int input) {
printf("POINT: 939\n");

    if(((a174 == 9 && (a17 == 34 && a88 == 34)) && (((((input == 6) &&  cf==1 ) && a176 == 4) && a165 == 34) && a128 == 3))) {
printf("POINT: 940\n");
    	cf = 0;
    	a68 = 3;
    	a88 = 32 ;
    	a112 = 32 ;
    	a56 = 9;
    	a169 = 32 ;
    	a37 = 9;
    	a196 = 5;
    	a187 = 3;
    	a146 = 32 ;
    	a30 = 32 ;
    	a25 = 5;
    	a34 = 32 ;
    	a97 = 4;
    	a119 = 33 ;
    	a165 = 32 ;
    	a115 = 32 ;
    	a53 = 32 ;
    	a174 = 8;
    	a55 = 32 ;
    	a131 = 10;
    	a81 = 11;
    	a180 = 33 ;
    	a16 = 10;
    	a22 = 7;
    	a127 = 7;
    	a134 = 16;
    	a154 = 32 ;
    	a46 = 32 ;
    	a15 = 9;
    	a3 = 32 ;
    	a17 = 32 ;
    	a128 = 2;
    	a125 = 33 ;
    	a51 = 33 ;
    	a109 = 32 ;
    	a104 = 32 ;
    	a200 = 35 ;
    	a26 = 3;
    	a8 = 12; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 941\n");

    if(((a68 == 4 && ( cf==1  && (input == 3))) && (((a176 == 4 && (a65 == 11 && a65 == 11)) && a22 == 9) && a32 == 34))) {
printf("POINT: 942\n");
    	cf = 0;
    	a176 = 3;
    	a15 = 9;
    	a88 = 33 ;
    	a41 = 34 ;
    	a178 = 33 ;
    	a17 = 33 ;
    	a65 = 11;
    	a26 = 3;
    	a104 = 34 ;
    	a144 = 33 ;
    	a150 = 6;
    	a153 = 4;
    	a22 = 9;
    	a167 = 1;
    	a12 = 32 ;
    	a95 = 9;
    	a101 = 34 ;
    	a193 = 9;
    	a105 = 12;
    	a0 = 33 ;
    	a20 = 5;
    	a112 = 33 ;
    	a53 = 33 ;
    	a118 = 33 ;
    	a169 = 34 ;
    	a45 = 33 ;
    	a140 = 5;
    	a165 = 33 ;
    	a86 = 34 ;
    	a121 = 34 ;
    	a160 = 32 ;
    	a126 = 3;
    	a79 = 5;
    	a55 = 32 ;
    	a109 = 34 ;
    	a32 = 33 ;
    	a141 = 32 ;
    	a97 = 4;
    	a187 = 3;
    	a93 = 2;
    	a16 = 10;
    	a146 = 33 ;
    	a131 = 10;
    	a152 = 8;
    	a81 = 10;
    	a21 = 33 ;
    	a46 = 32 ;
    	a2 = 3;
    	a37 = 10;
    	a184 = 5;
    	a56 = 9;
    	a119 = 33 ;
    	a68 = 4;
    	a120 = 5;
    	a125 = 33 ;
    	a179 = 33 ;
    	a180 = 33 ;
    	a48 = 34 ;
    	a128 = 3;
    	a51 = 34 ;
    	a69 = 33 ;
    	a27 = 33 ;
    	a115 = 32 ;
    	a196 = 5;
    	a174 = 9;
    	a200 = 33 ;
    	a30 = 32 ;
    	a25 = 4; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm107(int input) {
printf("POINT: 943\n");

    if(((((( cf==1  && (input == 6)) && a112 == 34) && a125 == 34) && a174 == 9) && (a153 == 5 && (a193 == 9 && a53 == 34)))) {
printf("POINT: 944\n");
    	cf = 0;
    	a200 = 36 ;
    	a115 = 32 ;
    	a120 = 6;
    	a105 = 11;
    	a158 = 6;
    	a125 = 32 ;
    	a193 = 8;
    	a51 = 32 ;
    	a119 = 32 ;
    	a47 = 33 ;
    	a93 = 3;
    	a178 = 32 ;
    	a32 = 32 ;
    	a196 = 6;
    	a68 = 3;
    	a17 = 32 ;
    	a121 = 32 ;
    	a179 = 32 ;
    	a45 = 32 ;
    	a174 = 8;
    	a2 = 4;
    	a60 = 6; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 945\n");

    if(((a180 == 34 && ((a153 == 5 && ( cf==1  && (input == 1))) && a112 == 34)) && (a69 == 34 && (a193 == 9 && a32 == 34)))) {
printf("POINT: 946\n");
    	cf = 0;
    	a16 = 10;
    	a26 = 3;
    	a119 = 32 ;
    	a101 = 32 ;
    	a68 = 3;
    	a25 = 5;
    	a112 = 32 ;
    	a95 = 9;
    	a97 = 4;
    	a3 = 35 ;
    	a196 = 6;
    	a15 = 10;
    	a56 = 9;
    	a144 = 32 ;
    	a193 = 8;
    	a51 = 32 ;
    	a104 = 32 ;
    	a180 = 32 ;
    	a187 = 4;
    	a153 = 4;
    	a12 = 32 ;
    	a32 = 32 ;
    	a200 = 35 ;
    	a45 = 32 ;
    	a134 = 13;
    	a118 = 32 ;
    	a41 = 32 ;
    	a20 = 4;
    	a48 = 32 ;
    	a115 = 32 ;
    	a106 = 9; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm108(int input) {
printf("POINT: 947\n");

    if(((a105 == 12 && ((input == 10) &&  cf==1 )) && ((((a196 == 7 && a146 == 34) && a41 == 34) && a154 == 34) && a88 == 34))) {
printf("POINT: 948\n");
    	cf = 0;
    	a152 = 8;
    	a53 = 32 ;
    	a28 = 10;
    	a51 = 33 ;
    	a15 = 10;
    	a180 = 32 ;
    	a109 = 32 ;
    	a105 = 10;
    	a37 = 9;
    	a128 = 2;
    	a178 = 32 ;
    	a30 = 32 ;
    	a55 = 33 ;
    	a146 = 32 ;
    	a88 = 32 ;
    	a160 = 32 ;
    	a158 = 12;
    	a120 = 6;
    	a26 = 3;
    	a65 = 10;
    	a154 = 33 ;
    	a179 = 33 ;
    	a97 = 4;
    	a176 = 3;
    	a45 = 32 ;
    	a68 = 2;
    	a17 = 32 ;
    	a200 = 36 ;
    	a62 = 6;
    	a41 = 32 ;
    	a119 = 33 ;
    	a196 = 6;
    	a187 = 4;
    	a118 = 32 ;
    	a104 = 32 ;
    	a71 = 13; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 949\n");

    if(((a65 == 11 && a120 == 7) && (a179 == 34 && (a178 == 34 && (a160 == 34 && (a28 == 11 && ( cf==1  && (input == 3)))))))) {
printf("POINT: 950\n");
    	cf = 0;
    	a115 = 32 ;
    	a32 = 32 ;
    	a84 = 32 ;
    	a101 = 32 ;
    	a95 = 9;
    	a2 = 4;
    	a79 = 6;
    	a81 = 11;
    	a169 = 32 ;
    	a110 = 6;
    	a184 = 5;
    	a141 = 32 ;
    	a69 = 32 ;
    	a93 = 3;
    	a46 = 32 ;
    	a25 = 5;
    	a144 = 32 ;
    	a16 = 10;
    	a167 = 2;
    	a153 = 4;
    	a12 = 32 ;
    	a150 = 5;
    	a193 = 8;
    	a56 = 9;
    	a0 = 32 ;
    	a131 = 10;
    	a174 = 7;
    	a90 = 32 ;
    	a39 = 8;
    	a125 = 33 ;
    	a112 = 32 ;
    	a165 = 32 ;
    	a48 = 32 ;
    	a20 = 4;
    	a127 = 7;
    	a121 = 32 ;
    	a22 = 7;
    	a34 = 32 ;
    	a126 = 4; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 951\n");

    if((((((((input == 1) &&  cf==1 ) && a97 == 5) && a140 == 6) && a26 == 4) && a119 == 34) && (a128 == 3 && a140 == 6))) {
printf("POINT: 952\n");
    	cf = 0;
    	a176 = 3;
    	a68 = 2;
    	a51 = 33 ;
    	a88 = 32 ;
    	a118 = 32 ;
    	a17 = 32 ;
    	a158 = 12;
    	a200 = 36 ;
    	a30 = 32 ;
    	a41 = 32 ;
    	a53 = 32 ;
    	a180 = 32 ;
    	a15 = 10;
    	a154 = 33 ;
    	a109 = 32 ;
    	a179 = 33 ;
    	a26 = 3;
    	a62 = 6;
    	a146 = 32 ;
    	a37 = 9;
    	a28 = 10;
    	a152 = 8;
    	a104 = 32 ;
    	a178 = 32 ;
    	a97 = 4;
    	a119 = 33 ;
    	a160 = 32 ;
    	a105 = 10;
    	a65 = 10;
    	a55 = 33 ;
    	a196 = 6;
    	a128 = 2;
    	a187 = 4;
    	a120 = 6;
    	a45 = 32 ;
    	a71 = 13; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm109(int input) {
printf("POINT: 953\n");

    if(((a101 == 34 && a109 == 34) && (a178 == 34 && (a17 == 34 && ((((input == 5) &&  cf==1 ) && a48 == 34) && a41 == 34))))) {
printf("POINT: 954\n");
    	cf = 0;
    	a119 = 32 ;
    	a88 = 34 ;
    	a69 = 34 ;
    	a34 = 33 ;
    	a17 = 34 ;
    	a152 = 10;
    	a15 = 14;
    	a32 = 34 ;
    	a45 = 36 ;
    	a39 = 14;
    	a101 = 34 ;
    	a187 = 8;
    	a134 = 10;
    	a81 = 12;
    	a154 = 35 ;
    	a144 = 32 ;
    	a0 = 34 ;
    	a30 = 36 ;
    	a178 = 35 ;
    	a131 = 9;
    	a127 = 13;
    	a2 = 9;
    	a90 = 36 ;
    	a95 = 10;
    	a167 = 2;
    	a28 = 12;
    	a93 = 7;
    	a125 = 35 ;
    	a165 = 33 ;
    	a79 = 10;
    	a200 = 35 ;
    	a164 = 6;
    	a120 = 5;
    	a84 = 34 ;
    	a196 = 11;
    	a153 = 8;
    	a121 = 35 ;
    	a184 = 11;
    	a22 = 7;
    	a112 = 36 ;
    	a179 = 36 ;
    	a146 = 35 ;
    	a97 = 3;
    	a41 = 36 ;
    	a180 = 32 ;
    	a118 = 35 ;
    	a53 = 35 ;
    	a10 = 7; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 955\n");

    if(((((a95 == 10 && a97 == 5) && a79 == 7) && a45 == 34) && (a95 == 10 && (a105 == 12 && ( cf==1  && (input == 1)))))) {
printf("POINT: 956\n");
    	cf = 0;
printf("POINT: 957\n");

    	if(a60 == 12) {
printf("POINT: 958\n");
    	a167 = 6;
    	a48 = 33 ;
    	a56 = 8;
    	a110 = 8;
    	a178 = 36 ;
    	a127 = 9;
    	a165 = 35 ;
    	a16 = 12;
    	a121 = 36 ;
    	a158 = 11;
    	a185 = 15;
    	a200 = 36 ;
    	a79 = 11;
    	a131 = 14;
    	a105 = 14;
    	a17 = 35 ;
    	a153 = 7;
    	a25 = 11;
    	a174 = 7;
    	a109 = 34 ;
    	a26 = 4;
    	a95 = 13;
    	a15 = 14;
    	a120 = 7;
    	a81 = 10;
    	a20 = 8;
    	a144 = 34 ;
    	a169 = 33 ;
    	a34 = 33 ;
    	a55 = 33 ;
    	a150 = 4;
    	a22 = 12;
    	a65 = 9;
    	a152 = 12;
    	a68 = 7;
    	a28 = 14;
    	a41 = 34 ;
    	a0 = 34 ;
    	a126 = 8;
    	a84 = 35 ;
    	a179 = 34 ;
    	a2 = 5;
    	a97 = 7;
    	a125 = 35 ;
    	a93 = 4;
    	a58 = 4; 
    	}else {
printf("POINT: 960\n");
    	a187 = 8;
    	a121 = 32 ;
    	a41 = 32 ;
    	a140 = 6;
    	a105 = 16;
    	a65 = 9;
    	a90 = 34 ;
    	a126 = 6;
    	a104 = 32 ;
    	a25 = 5;
    	a56 = 9;
    	a16 = 15;
    	a26 = 3;
    	a160 = 35 ;
    	a79 = 12;
    	a97 = 6;
    	a165 = 33 ;
    	a109 = 33 ;
    	a120 = 7;
    	a144 = 35 ;
    	a28 = 15;
    	a30 = 32 ;
    	a153 = 10;
    	a17 = 35 ;
    	a110 = 12;
    	a77 = 7;
    	a125 = 34 ;
    	a200 = 33 ;
    	a118 = 35 ;
    	a53 = 35 ;
    	a68 = 3;
    	a45 = 34 ;
    	a81 = 15;
    	a51 = 35 ;
    	a32 = 32 ;
    	a152 = 14;
    	a179 = 36 ;
    	a48 = 35 ;
    	a131 = 11;
    	a84 = 34 ;
    	a141 = 32 ;
    	a95 = 15;
    	a93 = 8;
    	a86 = 32 ;
    	a15 = 12;
    	a12 = 34 ;
    	a55 = 33 ;
    	a112 = 33 ;
    	a150 = 11;
    	a20 = 6;
    	a22 = 7;
    	a174 = 14;
    	a154 = 36 ;
    	a88 = 35 ;
    	a62 = 6;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 961\n");

    if((((a53 == 34 && ((input == 8) &&  cf==1 )) && a41 == 34) && (a180 == 34 && (a81 == 12 && (a144 == 34 && a22 == 9))))) {
printf("POINT: 962\n");
    	cf = 0;
printf("POINT: 963\n");

    	if((a105 == 11 && (a134 == 14 && a160 == 32))) {
printf("POINT: 964\n");
    	a187 = 8;
    	a12 = 33 ;
    	a174 = 9;
    	a41 = 35 ;
    	a48 = 36 ;
    	a95 = 13;
    	a153 = 8;
    	a120 = 7;
    	a97 = 8;
    	a28 = 9;
    	a165 = 33 ;
    	a160 = 35 ;
    	a146 = 36 ;
    	a104 = 35 ;
    	a22 = 7;
    	a34 = 36 ;
    	a178 = 34 ;
    	a69 = 34 ;
    	a167 = 3;
    	a65 = 9;
    	a15 = 11;
    	a150 = 11;
    	a144 = 35 ;
    	a121 = 33 ;
    	a20 = 10;
    	a32 = 35 ;
    	a200 = 35 ;
    	a110 = 10;
    	a179 = 36 ;
    	a109 = 34 ;
    	a3 = 33 ;
    	a125 = 35 ;
    	a17 = 34 ;
    	a105 = 14;
    	a0 = 33 ;
    	a2 = 5;
    	a26 = 8;
    	a127 = 12;
    	a128 = 6;
    	a53 = 34 ;
    	a131 = 13;
    	a84 = 33 ;
    	a101 = 35 ;
    	a193 = 10;
    	a180 = 36 ;
    	a55 = 36 ;
    	a56 = 8;
    	a152 = 13;
    	a93 = 5;
    	a16 = 14;
    	a90 = 33 ;
    	a45 = 33 ;
    	a196 = 12;
    	a118 = 35 ;
    	a46 = 35 ;
    	a119 = 34 ;
    	a68 = 9;
    	a140 = 4;
    	a112 = 33 ;
    	a51 = 34 ;
    	a39 = 11;
    	a37 = 15;
    	a134 = 13;
    	a81 = 17;
    	a30 = 35 ;
    	a184 = 9;
    	a79 = 9;
    	a175 = 14; 
    	}else {
printf("POINT: 966\n");
    	a115 = 36 ;
    	a40 = 33 ;
    	a154 = 32 ;
    	a128 = 8;
    	a169 = 33 ;
    	a32 = 33 ;
    	a135 = 15;
    	a176 = 2;
    	a119 = 33 ;
    	a157 = 6;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 967\n");

    if(((a174 == 9 && (a146 == 34 && a127 == 8)) && (((a165 == 34 && ((input == 9) &&  cf==1 )) && a193 == 9) && a37 == 10))) {
printf("POINT: 968\n");
    	cf = 0;
    	a95 = 12;
    	a128 = 7;
    	a112 = 36 ;
    	a0 = 36 ;
    	a167 = 1;
    	a65 = 11;
    	a121 = 34 ;
    	a176 = 5;
    	a131 = 12;
    	a152 = 13;
    	a1 = 35 ;
    	a135 = 14;
    	a17 = 35 ;
    	a15 = 9;
    	a34 = 35 ;
    	a119 = 32 ;
    	a140 = 9;
    	a127 = 13;
    	a68 = 4;
    	a56 = 8;
    	a25 = 4;
    	a90 = 35 ;
    	a153 = 7;
    	a22 = 9;
    	a28 = 12;
    	a126 = 9;
    	a69 = 35 ;
    	a16 = 12;
    	a178 = 34 ;
    	a88 = 35 ;
    	a51 = 33 ;
    	a39 = 14;
    	a46 = 34 ;
    	a150 = 7;
    	a179 = 36 ;
    	a160 = 35 ;
    	a93 = 4;
    	a79 = 12;
    	a118 = 34 ;
    	a169 = 34 ;
    	a41 = 34 ;
    	a125 = 34 ;
    	a32 = 36 ;
    	a101 = 33 ;
    	a20 = 10;
    	a98 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 969\n");

    if((a34 == 34 && (a97 == 5 && ((((a167 == 3 && ( cf==1  && (input == 2))) && a125 == 34) && a68 == 4) && a118 == 34)))) {
printf("POINT: 970\n");
    	cf = 0;
    	a2 = 3;
    	a30 = 34 ;
    	a12 = 32 ;
    	a105 = 16;
    	a142 = 35 ;
    	a65 = 13;
    	a131 = 12;
    	a0 = 34 ;
    	a128 = 6;
    	a20 = 8;
    	a167 = 5;
    	a144 = 34 ;
    	a34 = 36 ;
    	a126 = 6;
    	a26 = 5;
    	a112 = 36 ;
    	a141 = 32 ;
    	a93 = 7;
    	a171 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 971\n");

    if((a131 == 11 && (a34 == 34 && (((a109 == 34 && (a79 == 7 && ( cf==1  && (input == 7)))) && a46 == 34) && a90 == 34)))) {
printf("POINT: 972\n");
    	cf = 0;
    	a20 = 10;
    	a55 = 34 ;
    	a45 = 34 ;
    	a104 = 32 ;
    	a126 = 9;
    	a105 = 17;
    	a26 = 7;
    	a141 = 36 ;
    	a37 = 11;
    	a32 = 36 ;
    	a41 = 33 ;
    	a118 = 35 ;
    	a101 = 34 ;
    	a144 = 34 ;
    	a46 = 33 ;
    	a158 = 11;
    	a165 = 34 ;
    	a68 = 7;
    	a51 = 35 ;
    	a48 = 32 ;
    	a160 = 36 ;
    	a200 = 36 ;
    	a120 = 5;
    	a140 = 11;
    	a53 = 35 ;
    	a121 = 34 ;
    	a65 = 14;
    	a152 = 14;
    	a178 = 36 ;
    	a17 = 35 ;
    	a15 = 13;
    	a0 = 36 ;
    	a125 = 33 ;
    	a196 = 7;
    	a153 = 3;
    	a25 = 5;
    	a22 = 12;
    	a174 = 13;
    	a2 = 3;
    	a30 = 34 ;
    	a179 = 33 ;
    	a146 = 36 ;
    	a150 = 10;
    	a16 = 16;
    	a169 = 33 ;
    	a90 = 36 ;
    	a154 = 36 ;
    	a119 = 34 ;
    	a84 = 35 ;
    	a128 = 5;
    	a180 = 32 ;
    	a97 = 9;
    	a69 = 34 ;
    	a112 = 34 ;
    	a70 = 33 ;
    	a93 = 3;
    	a34 = 35 ;
    	a187 = 8;
    	a167 = 5;
    	a109 = 33 ;
    	a193 = 14;
    	a39 = 7;
    	a81 = 17;
    	a131 = 12;
    	a184 = 8;
    	a95 = 8;
    	a79 = 12;
    	a127 = 11;
    	a185 = 14; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 973\n");

    if((((a26 == 4 && a16 == 11) && a48 == 34) && (((a187 == 5 && ( cf==1  && (input == 3))) && a39 == 9) && a55 == 34))) {
printf("POINT: 974\n");
    	cf = 0;
printf("POINT: 975\n");

    	if((a146 == 36 || (a53 == 34 || (!(a22 == 14) && a93 == 4)))) {
printf("POINT: 976\n");
    	a20 = 8;
    	a26 = 7;
    	a22 = 13;
    	a118 = 35 ;
    	a169 = 32 ;
    	a28 = 12;
    	a97 = 6;
    	a0 = 35 ;
    	a34 = 35 ;
    	a140 = 4;
    	a79 = 8;
    	a135 = 9;
    	a84 = 34 ;
    	a141 = 35 ;
    	a120 = 12;
    	a32 = 35 ;
    	a109 = 36 ;
    	a112 = 35 ;
    	a160 = 36 ;
    	a16 = 9;
    	a55 = 33 ;
    	a95 = 10;
    	a68 = 9;
    	a65 = 11;
    	a45 = 35 ;
    	a110 = 11;
    	a90 = 33 ;
    	a154 = 35 ;
    	a12 = 35 ;
    	a178 = 35 ;
    	a131 = 9;
    	a69 = 34 ;
    	a172 = 34 ;
    	a17 = 33 ;
    	a164 = 12; 
    	}else {
printf("POINT: 978\n");
    	a115 = 35 ;
    	a112 = 33 ;
    	a144 = 33 ;
    	a55 = 34 ;
    	a37 = 8;
    	a200 = 36 ;
    	a121 = 36 ;
    	a174 = 13;
    	a90 = 34 ;
    	a39 = 11;
    	a187 = 9;
    	a79 = 8;
    	a48 = 33 ;
    	a150 = 9;
    	a153 = 6;
    	a125 = 33 ;
    	a152 = 15;
    	a179 = 33 ;
    	a93 = 2;
    	a56 = 14;
    	a69 = 33 ;
    	a180 = 36 ;
    	a84 = 36 ;
    	a178 = 35 ;
    	a120 = 9;
    	a65 = 13;
    	a122 = 35 ;
    	a118 = 35 ;
    	a127 = 13;
    	a53 = 35 ;
    	a128 = 8;
    	a34 = 35 ;
    	a0 = 33 ;
    	a169 = 33 ;
    	a16 = 11;
    	a101 = 34 ;
    	a193 = 9;
    	a165 = 34 ;
    	a110 = 11;
    	a15 = 14;
    	a36 = 33 ;
    	a167 = 7;
    	a20 = 5;
    	a46 = 34 ;
    	a141 = 35 ;
    	a146 = 33 ;
    	a51 = 35 ;
    	a17 = 33 ;
    	a105 = 15;
    	a184 = 8;
    	a81 = 13;
    	a68 = 9;
    	a2 = 6;
    	a104 = 36 ;
    	a95 = 15;
    	a22 = 12;
    	a176 = 9;
    	a30 = 36 ;
    	a45 = 35 ;
    	a126 = 3;
    	a131 = 16;
    	a41 = 34 ;
    	a97 = 9;
    	a196 = 9;
    	a109 = 34 ;
    	a26 = 2;
    	a158 = 8;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 979\n");

    if(((a84 == 34 && (a30 == 34 && (a125 == 34 && a46 == 34))) && (a105 == 12 && (( cf==1  && (input == 6)) && a150 == 6)))) {
printf("POINT: 980\n");
    	cf = 0;
printf("POINT: 981\n");

    	if((!(a104 == 36) || ((a108 == 11 || !(a112 == 35)) && !(a39 == 13)))) {
printf("POINT: 982\n");
    	a46 = 33 ;
    	a15 = 9;
    	a79 = 5;
    	a193 = 9;
    	a26 = 4;
    	a153 = 6;
    	a112 = 35 ;
    	a69 = 36 ;
    	a167 = 7;
    	a16 = 13;
    	a68 = 8;
    	a90 = 35 ;
    	a144 = 35 ;
    	a200 = 36 ;
    	a104 = 35 ;
    	a65 = 16;
    	a174 = 12;
    	a0 = 33 ;
    	a163 = 33 ;
    	a34 = 36 ;
    	a152 = 8;
    	a84 = 33 ;
    	a53 = 33 ;
    	a51 = 35 ;
    	a2 = 3;
    	a30 = 34 ;
    	a95 = 14;
    	a45 = 33 ;
    	a20 = 7;
    	a109 = 33 ;
    	a180 = 34 ;
    	a101 = 33 ;
    	a17 = 36 ;
    	a178 = 34 ;
    	a48 = 36 ;
    	a187 = 5;
    	a39 = 12;
    	a196 = 12;
    	a37 = 11;
    	a118 = 33 ;
    	a158 = 13;
    	a81 = 15;
    	a93 = 8;
    	a120 = 9;
    	a146 = 36 ;
    	a150 = 11;
    	a41 = 34 ;
    	a121 = 35 ;
    	a22 = 14;
    	a105 = 13;
    	a55 = 35 ;
    	a127 = 8;
    	a179 = 34 ;
    	a131 = 14;
    	a165 = 36 ;
    	a97 = 8;
    	a125 = 35 ;
    	a6 = 11; 
    	}else {
printf("POINT: 984\n");
    	a128 = 8;
    	a180 = 33 ;
    	a56 = 10;
    	a41 = 34 ;
    	a16 = 14;
    	a22 = 10;
    	a193 = 11;
    	a17 = 35 ;
    	a93 = 4;
    	a158 = 10;
    	a90 = 33 ;
    	a97 = 5;
    	a154 = 33 ;
    	a112 = 33 ;
    	a68 = 8;
    	a165 = 34 ;
    	a178 = 33 ;
    	a32 = 33 ;
    	a34 = 34 ;
    	a196 = 12;
    	a131 = 12;
    	a126 = 3;
    	a150 = 10;
    	a95 = 11;
    	a153 = 5;
    	a69 = 35 ;
    	a109 = 35 ;
    	a15 = 11;
    	a200 = 36 ;
    	a53 = 33 ;
    	a51 = 34 ;
    	a105 = 12;
    	a26 = 2;
    	a20 = 5;
    	a0 = 35 ;
    	a184 = 9;
    	a187 = 3;
    	a55 = 34 ;
    	a120 = 12;
    	a152 = 15;
    	a144 = 34 ;
    	a2 = 9;
    	a146 = 34 ;
    	a101 = 35 ;
    	a37 = 14;
    	a167 = 5;
    	a118 = 34 ;
    	a183 = 12;
    	a121 = 36 ;
    	a115 = 35 ;
    	a46 = 33 ;
    	a174 = 7;
    	a104 = 35 ;
    	a84 = 35 ;
    	a127 = 12;
    	a140 = 11;
    	a81 = 17;
    	a141 = 34 ;
    	a79 = 9;
    	a30 = 34 ;
    	a45 = 36 ;
    	a48 = 34 ;
    	a125 = 36 ;
    	a169 = 34 ;
    	a65 = 16;
    	a179 = 35 ;
    	a39 = 14;
    	a7 = 5;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 985\n");

    if(((a20 == 5 && a45 == 34) && (((a65 == 11 && (a196 == 7 && ( cf==1  && (input == 10)))) && a53 == 34) && a125 == 34))) {
printf("POINT: 986\n");
    	cf = 0;
printf("POINT: 987\n");

    	if((!(a146 == 35) && a13 == 10)) {
printf("POINT: 988\n");
    	a95 = 9;
    	a153 = 6;
    	a86 = 34 ;
    	a16 = 13;
    	a97 = 6;
    	a84 = 36 ;
    	a109 = 34 ;
    	a141 = 33 ;
    	a131 = 10;
    	a112 = 35 ;
    	a200 = 33 ;
    	a46 = 36 ;
    	a121 = 34 ;
    	a12 = 35 ;
    	a34 = 35 ;
    	a45 = 36 ;
    	a68 = 7;
    	a146 = 34 ;
    	a154 = 32 ;
    	a32 = 34 ;
    	a22 = 12;
    	a187 = 7;
    	a152 = 13;
    	a93 = 4;
    	a56 = 12;
    	a30 = 36 ;
    	a126 = 6;
    	a79 = 12;
    	a125 = 35 ;
    	a27 = 33 ;
    	a37 = 13;
    	a39 = 12;
    	a20 = 9;
    	a176 = 9;
    	a127 = 10;
    	a193 = 13;
    	a178 = 35 ;
    	a41 = 36 ;
    	a110 = 7;
    	a105 = 10;
    	a167 = 7;
    	a26 = 6;
    	a150 = 11;
    	a115 = 35 ;
    	a28 = 12;
    	a128 = 6;
    	a65 = 10;
    	a165 = 36 ;
    	a2 = 6;
    	a88 = 32 ;
    	a90 = 36 ;
    	a180 = 36 ;
    	a101 = 32 ;
    	a120 = 10;
    	a15 = 15;
    	a184 = 8;
    	a140 = 5;
    	a118 = 35 ;
    	a17 = 36 ;
    	a53 = 36 ;
    	a144 = 34 ;
    	a196 = 8;
    	a160 = 32 ;
    	a51 = 34 ;
    	a169 = 35 ;
    	a119 = 35 ;
    	a48 = 35 ;
    	a25 = 5;
    	a179 = 36 ;
    	a55 = 36 ;
    	a104 = 35 ;
    	a174 = 12;
    	a81 = 13;
    	a0 = 34 ;
    	a21 = 32 ; 
    	}else {
printf("POINT: 990\n");
    	a109 = 35 ;
    	a158 = 11;
    	a180 = 34 ;
    	a26 = 2;
    	a81 = 15;
    	a65 = 13;
    	a125 = 33 ;
    	a193 = 11;
    	a104 = 33 ;
    	a34 = 35 ;
    	a55 = 33 ;
    	a0 = 33 ;
    	a165 = 33 ;
    	a185 = 10;
    	a56 = 10;
    	a187 = 8;
    	a127 = 12;
    	a120 = 5;
    	a95 = 12;
    	a30 = 36 ;
    	a178 = 35 ;
    	a68 = 6;
    	a144 = 34 ;
    	a16 = 12;
    	a174 = 12;
    	a48 = 32 ;
    	a126 = 9;
    	a118 = 35 ;
    	a93 = 2;
    	a176 = 2;
    	a105 = 11;
    	a101 = 36 ;
    	a167 = 8;
    	a196 = 8;
    	a146 = 32 ;
    	a153 = 6;
    	a150 = 11;
    	a2 = 3;
    	a152 = 11;
    	a46 = 35 ;
    	a79 = 12;
    	a39 = 9;
    	a25 = 7;
    	a37 = 8;
    	a51 = 35 ;
    	a84 = 35 ;
    	a28 = 12;
    	a179 = 34 ;
    	a45 = 35 ;
    	a184 = 9;
    	a112 = 35 ;
    	a97 = 10;
    	a20 = 3;
    	a90 = 34 ;
    	a22 = 13;
    	a119 = 36 ;
    	a17 = 32 ;
    	a53 = 36 ;
    	a41 = 36 ;
    	a69 = 32 ;
    	a131 = 13;
    	a121 = 33 ;
    	a15 = 14;
    	a200 = 36 ;
    	a160 = 36 ;
    	a11 = 1;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 991\n");

    if((((input == 4) &&  cf==1 ) && (a39 == 9 && ((a121 == 34 && (a68 == 4 && (a196 == 7 && a120 == 7))) && a2 == 5)))) {
printf("POINT: 992\n");
    	cf = 0;
    	a105 = 14;
    	a152 = 13;
    	a81 = 17;
    	a37 = 8;
    	a119 = 33 ;
    	a174 = 12;
    	a150 = 9;
    	a69 = 34 ;
    	a46 = 36 ;
    	a26 = 9;
    	a65 = 9;
    	a158 = 7;
    	a48 = 33 ;
    	a153 = 10;
    	a53 = 33 ;
    	a22 = 12;
    	a55 = 35 ;
    	a140 = 10;
    	a90 = 34 ;
    	a64 = 16;
    	a104 = 33 ;
    	a125 = 33 ;
    	a141 = 36 ;
    	a184 = 8;
    	a34 = 35 ;
    	a2 = 10;
    	a109 = 35 ;
    	a79 = 8;
    	a16 = 13;
    	a95 = 8;
    	a97 = 10;
    	a180 = 36 ;
    	a41 = 35 ;
    	a121 = 33 ;
    	a167 = 4;
    	a120 = 7;
    	a51 = 35 ;
    	a15 = 9;
    	a93 = 2;
    	a0 = 34 ;
    	a118 = 35 ;
    	a144 = 33 ;
    	a17 = 33 ;
    	a200 = 36 ;
    	a165 = 36 ;
    	a112 = 33 ;
    	a187 = 7;
    	a131 = 16;
    	a178 = 35 ;
    	a101 = 36 ;
    	a68 = 8;
    	a30 = 34 ;
    	a20 = 6;
    	a127 = 6;
    	a189 = 16; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm110(int input) {
printf("POINT: 993\n");

    if(((a48 == 34 && ((a125 == 34 && a51 == 34) && a55 == 34)) && ((a16 == 11 && ((input == 10) &&  cf==1 )) && a128 == 3))) {
printf("POINT: 994\n");
    	cf = 0;
    	a36 = 32 ;
    	a158 = 11;
    	a48 = 32 ;
    	a125 = 32 ;
    	a146 = 32 ;
    	a141 = 32 ;
    	a12 = 32 ;
    	a179 = 32 ;
    	a126 = 4;
    	a200 = 36 ;
    	a68 = 3;
    	a185 = 13; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm13(int input) {
printf("POINT: 995\n");

    if(((((a30 == 34 && a20 == 5) && a56 == 10) && a32 == 34) && ((a152 == 10 && ( cf==1  && a171 == 5)) && a39 == 9))) {
printf("POINT: 996\n");
printf("POINT: 997\n");

    	if(((a193 == 9 && (a150 == 6 && ( cf==1  && a138 == 35))) && (((a39 == 9 && a120 == 7) && a187 == 5) && a174 == 9))) {
printf("POINT: 998\n");
    		calculate_outputm102(input);
    	} 
    } 
printf("POINT: 999\n");

    if(((a25 == 6 && (a37 == 10 && (a45 == 34 && (a152 == 10 && a90 == 34)))) && ((a171 == 6 &&  cf==1 ) && a187 == 5))) {
printf("POINT: 1000\n");
printf("POINT: 1001\n");

    	if(((( cf==1  && a74 == 32) && a144 == 34) && (a127 == 8 && ((a126 == 5 && (a115 == 34 && a25 == 6)) && a179 == 34)))) {
printf("POINT: 1002\n");
    		calculate_outputm103(input);
    	} 
    } 
printf("POINT: 1003\n");

    if(((((a171 == 7 &&  cf==1 ) && a68 == 4) && a178 == 34) && (a152 == 10 && (a90 == 34 && (a105 == 12 && a16 == 11))))) {
printf("POINT: 1004\n");
printf("POINT: 1005\n");

    	if(((a37 == 10 && (((a50 == 3 &&  cf==1 ) && a15 == 11) && a187 == 5)) && ((a37 == 10 && a144 == 34) && a12 == 34))) {
printf("POINT: 1006\n");
    		calculate_outputm104(input);
    	} 
    } 
printf("POINT: 1007\n");

    if((((a51 == 34 && a68 == 4) && a51 == 34) && (((a112 == 34 && (a171 == 8 &&  cf==1 )) && a79 == 7) && a146 == 34))) {
printf("POINT: 1008\n");
printf("POINT: 1009\n");

    	if(((a95 == 10 && (a51 == 34 && a41 == 34)) && ((a2 == 5 && ((a89 == 35 &&  cf==1 ) && a39 == 9)) && a32 == 34))) {
printf("POINT: 1010\n");
    		calculate_outputm105(input);
    	} 
    } 
printf("POINT: 1011\n");

    if(((a165 == 34 && (((a171 == 9 &&  cf==1 ) && a125 == 34) && a131 == 11)) && ((a115 == 34 && a81 == 12) && a15 == 11))) {
printf("POINT: 1012\n");
printf("POINT: 1013\n");

    	if(((a104 == 34 && (a25 == 6 && ( cf==1  && a186 == 34))) && ((a37 == 10 && (a119 == 34 && a112 == 34)) && a169 == 34))) {
printf("POINT: 1014\n");
    		calculate_outputm106(input);
    	} 
    } 
printf("POINT: 1015\n");

    if(((a120 == 7 && (a121 == 34 && (a17 == 34 && a115 == 34))) && ((a26 == 4 && (a171 == 10 &&  cf==1 )) && a68 == 4))) {
printf("POINT: 1016\n");
printf("POINT: 1017\n");

    	if(((a152 == 10 && (a112 == 34 && a53 == 34)) && ((a144 == 34 && (a125 == 34 && ( cf==1  && a138 == 33))) && a81 == 12))) {
printf("POINT: 1018\n");
    		calculate_outputm107(input);
    	} 
    } 
printf("POINT: 1019\n");

    if((((((a17 == 34 && a152 == 10) && a55 == 34) && a17 == 34) && a30 == 34) && (( cf==1  && a171 == 11) && a68 == 4))) {
printf("POINT: 1020\n");
printf("POINT: 1021\n");

    	if((((((a176 == 4 && ( cf==1  && a78 == 33)) && a37 == 10) && a104 == 34) && a118 == 34) && (a196 == 7 && a51 == 34))) {
printf("POINT: 1022\n");
    		calculate_outputm108(input);
    	} 
printf("POINT: 1023\n");

    	if((((a78 == 35 &&  cf==1 ) && a46 == 34) && ((((a0 == 34 && a55 == 34) && a112 == 34) && a153 == 5) && a93 == 4))) {
printf("POINT: 1024\n");
    		calculate_outputm109(input);
    	} 
    } 
printf("POINT: 1025\n");

    if(((a68 == 4 && ((a37 == 10 && a12 == 34) && a109 == 34)) && (((a171 == 12 &&  cf==1 ) && a141 == 34) && a48 == 34))) {
printf("POINT: 1026\n");
printf("POINT: 1027\n");

    	if(((a55 == 34 && (a187 == 5 && a126 == 5)) && (((a180 == 34 && ( cf==1  && a142 == 35)) && a37 == 10) && a193 == 9))) {
printf("POINT: 1028\n");
    		calculate_outputm110(input);
    	} 
    } 
}
 void calculate_outputm111(int input) {
printf("POINT: 1029\n");

    if(((a25 == 6 && (a153 == 5 && ( cf==1  && (input == 1)))) && (a16 == 11 && ((a79 == 7 && a144 == 34) && a0 == 34)))) {
printf("POINT: 1030\n");
    	cf = 0;
    	a118 = 32 ;
    	a153 = 3;
    	a152 = 8;
    	a95 = 8;
    	a48 = 33 ;
    	a179 = 33 ;
    	a65 = 10;
    	a196 = 7;
    	a85 = 34 ;
    	a180 = 32 ;
    	a193 = 9;
    	a2 = 5;
    	a110 = 5;
    	a174 = 7;
    	a41 = 33 ;
    	a115 = 32 ;
    	a126 = 5;
    	a20 = 4;
    	a55 = 32 ;
    	a46 = 34 ;
    	a53 = 33 ;
    	a32 = 33 ;
    	a176 = 3;
    	a150 = 5;
    	a79 = 6;
    	a3 = 32 ;
    	a84 = 33 ;
    	a45 = 33 ;
    	a81 = 11;
    	a69 = 33 ;
    	a104 = 32 ;
    	a144 = 33 ;
    	a26 = 2;
    	a120 = 6;
    	a12 = 33 ;
    	a15 = 10;
    	a28 = 9;
    	a167 = 3;
    	a17 = 33 ;
    	a187 = 3;
    	a30 = 32 ;
    	a200 = 35 ;
    	a25 = 4;
    	a51 = 33 ;
    	a34 = 32 ;
    	a16 = 10;
    	a121 = 33 ;
    	a56 = 8;
    	a39 = 9;
    	a125 = 33 ;
    	a146 = 34 ;
    	a127 = 8;
    	a105 = 11;
    	a112 = 32 ;
    	a101 = 34 ;
    	a109 = 32 ;
    	a0 = 32 ;
    	a134 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1031\n");

    if(((((a69 == 34 && ((input == 10) &&  cf==1 )) && a20 == 5) && a41 == 34) && ((a55 == 34 && a15 == 11) && a81 == 12))) {
printf("POINT: 1032\n");
    	cf = 0;
    	a51 = 34 ;
    	a176 = 4;
    	a17 = 34 ;
    	a104 = 32 ;
    	a69 = 34 ;
    	a95 = 10;
    	a178 = 34 ;
    	a196 = 7;
    	a160 = 34 ;
    	a193 = 8;
    	a79 = 7;
    	a81 = 12;
    	a25 = 5;
    	a121 = 34 ;
    	a200 = 36 ;
    	a97 = 5;
    	a68 = 4;
    	a187 = 5;
    	a185 = 10;
    	a55 = 34 ;
    	a158 = 11;
    	a34 = 32 ;
    	a41 = 34 ;
    	a48 = 34 ;
    	a174 = 9;
    	a119 = 34 ;
    	a179 = 32 ;
    	a0 = 32 ;
    	a53 = 34 ;
    	a120 = 6;
    	a109 = 34 ;
    	a184 = 7;
    	a56 = 9;
    	a16 = 10;
    	a101 = 32 ;
    	a30 = 32 ;
    	a126 = 4;
    	a153 = 4;
    	a45 = 34 ;
    	a115 = 32 ;
    	a165 = 34 ;
    	a146 = 34 ;
    	a20 = 4;
    	a15 = 10;
    	a28 = 11;
    	a144 = 32 ;
    	a118 = 32 ;
    	a105 = 12;
    	a84 = 34 ;
    	a180 = 32 ;
    	a11 = 1; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1033\n");

    if((( cf==1  && (input == 7)) && (((((a16 == 11 && a0 == 34) && a17 == 34) && a15 == 11) && a115 == 34) && a81 == 12))) {
printf("POINT: 1034\n");
    	cf = 0;
    	a84 = 32 ;
    	a146 = 32 ;
    	a16 = 10;
    	a167 = 2;
    	a134 = 16;
    	a41 = 32 ;
    	a56 = 9;
    	a140 = 6;
    	a112 = 32 ;
    	a79 = 6;
    	a69 = 32 ;
    	a26 = 3;
    	a3 = 32 ;
    	a95 = 9;
    	a174 = 7;
    	a187 = 4;
    	a2 = 4;
    	a200 = 35 ;
    	a152 = 8;
    	a153 = 4;
    	a196 = 6;
    	a115 = 32 ;
    	a30 = 32 ;
    	a193 = 8;
    	a48 = 32 ;
    	a104 = 32 ;
    	a109 = 32 ;
    	a55 = 32 ;
    	a118 = 32 ;
    	a144 = 32 ;
    	a81 = 11;
    	a25 = 5;
    	a17 = 32 ;
    	a51 = 32 ;
    	a179 = 32 ;
    	a34 = 32 ;
    	a125 = 33 ;
    	a160 = 32 ;
    	a20 = 4;
    	a39 = 8;
    	a53 = 32 ;
    	a15 = 10;
    	a119 = 33 ;
    	a28 = 10;
    	a184 = 5;
    	a0 = 32 ;
    	a101 = 32 ;
    	a180 = 32 ;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm112(int input) {
printf("POINT: 1035\n");

    if(((a127 == 8 && (( cf==1  && (input == 4)) && a110 == 7)) && (a97 == 5 && ((a2 == 5 && a174 == 9) && a178 == 34)))) {
printf("POINT: 1036\n");
    	cf = 0;
    	a34 = 32 ;
    	a56 = 9;
    	a55 = 32 ;
    	a146 = 32 ;
    	a158 = 7;
    	a2 = 4;
    	a150 = 5;
    	a121 = 32 ;
    	a193 = 8;
    	a200 = 36 ;
    	a88 = 32 ;
    	a84 = 32 ;
    	a101 = 32 ;
    	a120 = 6;
    	a176 = 3;
    	a115 = 32 ;
    	a30 = 32 ;
    	a0 = 32 ;
    	a178 = 32 ;
    	a144 = 32 ;
    	a20 = 4;
    	a137 = 34 ;
    	a119 = 32 ;
    	a179 = 32 ;
    	a174 = 8;
    	a196 = 6;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1037\n");

    if((((a56 == 10 && (a178 == 34 && a32 == 34)) && a174 == 9) && ((a88 == 34 && ((input == 10) &&  cf==1 )) && a84 == 34))) {
printf("POINT: 1038\n");
    	cf = 0;
    	a34 = 32 ;
    	a137 = 34 ;
    	a84 = 32 ;
    	a120 = 6;
    	a200 = 36 ;
    	a20 = 4;
    	a193 = 8;
    	a119 = 32 ;
    	a121 = 32 ;
    	a196 = 6;
    	a0 = 32 ;
    	a56 = 9;
    	a158 = 7;
    	a150 = 5;
    	a115 = 32 ;
    	a178 = 32 ;
    	a146 = 32 ;
    	a179 = 32 ;
    	a174 = 8;
    	a176 = 3;
    	a88 = 32 ;
    	a101 = 32 ;
    	a30 = 32 ;
    	a55 = 32 ;
    	a144 = 32 ;
    	a2 = 4;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1039\n");

    if(((a121 == 34 && (((input == 7) &&  cf==1 ) && a176 == 4)) && ((a119 == 34 && (a120 == 7 && a101 == 34)) && a193 == 9))) {
printf("POINT: 1040\n");
    	cf = 0;
    	a178 = 32 ;
    	a30 = 32 ;
    	a196 = 6;
    	a158 = 7;
    	a193 = 8;
    	a115 = 32 ;
    	a119 = 32 ;
    	a174 = 8;
    	a0 = 32 ;
    	a200 = 36 ;
    	a176 = 3;
    	a56 = 9;
    	a120 = 6;
    	a150 = 5;
    	a34 = 32 ;
    	a101 = 32 ;
    	a84 = 32 ;
    	a20 = 4;
    	a88 = 32 ;
    	a179 = 32 ;
    	a2 = 4;
    	a137 = 34 ;
    	a144 = 32 ;
    	a55 = 32 ;
    	a121 = 32 ;
    	a146 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm113(int input) {
printf("POINT: 1041\n");

    if((((a131 == 11 && a20 == 5) && a128 == 3) && (a97 == 5 && (a84 == 34 && (( cf==1  && (input == 9)) && a16 == 11))))) {
printf("POINT: 1042\n");
    	cf = 0;
printf("POINT: 1043\n");

    	if((!(a27 == 35) || a198 == 36)) {
printf("POINT: 1044\n");
    	a180 = 33 ;
    	a184 = 12;
    	a169 = 35 ;
    	a16 = 9;
    	a196 = 9;
    	a121 = 34 ;
    	a65 = 14;
    	a55 = 35 ;
    	a53 = 35 ;
    	a88 = 35 ;
    	a158 = 7;
    	a178 = 34 ;
    	a30 = 34 ;
    	a20 = 5;
    	a118 = 35 ;
    	a126 = 6;
    	a141 = 35 ;
    	a155 = 35 ;
    	a200 = 36 ;
    	a150 = 9;
    	a187 = 3;
    	a165 = 33 ;
    	a46 = 33 ;
    	a115 = 36 ;
    	a81 = 15;
    	a112 = 36 ;
    	a84 = 36 ;
    	a125 = 33 ;
    	a26 = 4;
    	a97 = 9;
    	a131 = 12;
    	a140 = 10;
    	a93 = 8;
    	a104 = 35 ;
    	a119 = 34 ;
    	a174 = 7;
    	a79 = 12;
    	a34 = 35 ;
    	a64 = 14; 
    	}else {
printf("POINT: 1046\n");
    	a118 = 34 ;
    	a150 = 6;
    	a131 = 12;
    	a84 = 34 ;
    	a200 = 32 ;
    	a20 = 3;
    	a174 = 10;
    	a196 = 11;
    	a34 = 36 ;
    	a169 = 33 ;
    	a88 = 35 ;
    	a3 = 35 ;
    	a104 = 34 ;
    	a55 = 34 ;
    	a187 = 7;
    	a93 = 6;
    	a26 = 9;
    	a81 = 12;
    	a184 = 9;
    	a30 = 35 ;
    	a180 = 36 ;
    	a178 = 34 ;
    	a97 = 6;
    	a46 = 34 ;
    	a198 = 36 ;
    	a125 = 36 ;
    	a115 = 35 ;
    	a79 = 7;
    	a141 = 35 ;
    	a16 = 9;
    	a112 = 34 ;
    	a140 = 10;
    	a65 = 11;
    	a121 = 33 ;
    	a53 = 34 ;
    	a119 = 34 ;
    	a139 = 35 ;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1047\n");

    if((((a46 == 34 && a65 == 11) && a88 == 34) && (a179 == 34 && ((((input == 2) &&  cf==1 ) && a118 == 34) && a187 == 5)))) {
printf("POINT: 1048\n");
    	cf = 0;
printf("POINT: 1049\n");

    	if(a87 == 32) {
printf("POINT: 1050\n");
    	a79 = 10;
    	a104 = 36 ;
    	a26 = 2;
    	a30 = 36 ;
    	a45 = 34 ;
    	a139 = 35 ;
    	a180 = 35 ;
    	a32 = 35 ;
    	a84 = 34 ;
    	a88 = 34 ;
    	a150 = 7;
    	a200 = 35 ;
    	a55 = 33 ;
    	a174 = 9;
    	a110 = 11;
    	a178 = 33 ;
    	a46 = 33 ;
    	a118 = 35 ;
    	a112 = 35 ;
    	a15 = 10;
    	a97 = 9;
    	a81 = 10;
    	a34 = 33 ;
    	a20 = 10;
    	a2 = 8;
    	a39 = 13;
    	a184 = 8;
    	a152 = 10;
    	a160 = 36 ;
    	a48 = 34 ;
    	a41 = 36 ;
    	a115 = 35 ;
    	a167 = 1;
    	a125 = 35 ;
    	a100 = 34 ;
    	a193 = 9;
    	a131 = 15;
    	a134 = 14; 
    	}else {
printf("POINT: 1052\n");
    	a2 = 6;
    	a165 = 36 ;
    	a41 = 33 ;
    	a109 = 32 ;
    	a39 = 13;
    	a150 = 9;
    	a153 = 3;
    	a110 = 5;
    	a118 = 33 ;
    	a12 = 32 ;
    	a167 = 2;
    	a140 = 11;
    	a105 = 10;
    	a68 = 4;
    	a34 = 36 ;
    	a65 = 11;
    	a56 = 15;
    	a22 = 11;
    	a26 = 9;
    	a125 = 32 ;
    	a28 = 15;
    	a0 = 35 ;
    	a15 = 15;
    	a152 = 14;
    	a84 = 36 ;
    	a40 = 35 ;
    	a178 = 33 ;
    	a88 = 34 ;
    	a48 = 35 ;
    	a51 = 33 ;
    	a160 = 33 ;
    	a97 = 3;
    	a90 = 33 ;
    	a81 = 15;
    	a16 = 12;
    	a17 = 32 ;
    	a120 = 7;
    	a184 = 5;
    	a69 = 34 ;
    	a95 = 12;
    	a45 = 35 ;
    	a127 = 13;
    	a46 = 35 ;
    	a55 = 34 ;
    	a101 = 33 ;
    	a30 = 33 ;
    	a25 = 4;
    	a131 = 14;
    	a135 = 15;
    	a154 = 36 ;
    	a126 = 9;
    	a157 = 6;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1053\n");

    if(((((input == 3) &&  cf==1 ) && a179 == 34) && (a169 == 34 && (a178 == 34 && ((a34 == 34 && a55 == 34) && a32 == 34))))) {
printf("POINT: 1054\n");
    	cf = 0;
    	a150 = 8;
    	a20 = 9;
    	a93 = 2;
    	a16 = 14;
    	a198 = 33 ;
    	a84 = 33 ;
    	a178 = 36 ;
    	a131 = 15;
    	a15 = 14;
    	a196 = 12;
    	a121 = 35 ;
    	a187 = 10;
    	a45 = 34 ;
    	a125 = 33 ;
    	a104 = 35 ;
    	a88 = 34 ;
    	a193 = 13;
    	a200 = 32 ;
    	a48 = 35 ;
    	a128 = 8;
    	a30 = 35 ;
    	a46 = 36 ;
    	a176 = 5;
    	a180 = 36 ;
    	a41 = 36 ;
    	a146 = 33 ;
    	a26 = 6;
    	a86 = 36 ;
    	a34 = 34 ;
    	a56 = 8;
    	a110 = 10;
    	a115 = 35 ;
    	a160 = 35 ;
    	a169 = 33 ;
    	a144 = 35 ;
    	a28 = 12;
    	a89 = 35 ; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1055\n");

    if(((a119 == 34 && (a150 == 6 && a184 == 7)) && (a152 == 10 && ((( cf==1  && (input == 1)) && a79 == 7) && a46 == 34)))) {
printf("POINT: 1056\n");
    	cf = 0;
    	a118 = 35 ;
    	a152 = 12;
    	a115 = 34 ;
    	a34 = 36 ;
    	a196 = 11;
    	a81 = 13;
    	a51 = 35 ;
    	a41 = 35 ;
    	a131 = 15;
    	a141 = 34 ;
    	a200 = 36 ;
    	a119 = 32 ;
    	a176 = 7;
    	a120 = 5;
    	a174 = 7;
    	a128 = 3;
    	a62 = 11;
    	a140 = 10;
    	a37 = 13;
    	a121 = 33 ;
    	a20 = 9;
    	a178 = 33 ;
    	a187 = 5;
    	a110 = 12;
    	a184 = 5;
    	a105 = 14;
    	a84 = 35 ;
    	a16 = 14;
    	a93 = 4;
    	a158 = 12;
    	a153 = 5;
    	a88 = 34 ;
    	a46 = 32 ;
    	a125 = 34 ;
    	a2 = 9;
    	a180 = 35 ;
    	a26 = 9;
    	a65 = 11;
    	a39 = 13;
    	a112 = 36 ;
    	a167 = 3;
    	a28 = 9;
    	a150 = 9;
    	a45 = 36 ;
    	a53 = 34 ;
    	a55 = 34 ;
    	a97 = 9;
    	a25 = 7;
    	a17 = 36 ;
    	a160 = 32 ;
    	a79 = 5;
    	a193 = 14;
    	a22 = 11;
    	a104 = 34 ;
    	a144 = 34 ;
    	a146 = 33 ;
    	a32 = 34 ;
    	a49 = 9; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1057\n");

    if((((a125 == 34 && (a55 == 34 && a121 == 34)) && a25 == 6) && ((a141 == 34 && ( cf==1  && (input == 6))) && a104 == 34))) {
printf("POINT: 1058\n");
    	cf = 0;
    	a167 = 3;
    	a109 = 32 ;
    	a153 = 8;
    	a45 = 36 ;
    	a110 = 5;
    	a88 = 33 ;
    	a30 = 34 ;
    	a68 = 7;
    	a144 = 33 ;
    	a131 = 12;
    	a193 = 7;
    	a174 = 9;
    	a79 = 11;
    	a84 = 34 ;
    	a69 = 35 ;
    	a32 = 34 ;
    	a25 = 7;
    	a120 = 7;
    	a20 = 6;
    	a100 = 32 ;
    	a94 = 36 ;
    	a34 = 36 ;
    	a101 = 35 ;
    	a65 = 12;
    	a93 = 8;
    	a17 = 32 ;
    	a125 = 35 ;
    	a135 = 12; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1059\n");

    if(((a41 == 34 && (a176 == 4 && ((a39 == 9 && (a45 == 34 && a48 == 34)) && a120 == 7))) && ( cf==1  && (input == 10)))) {
printf("POINT: 1060\n");
    	cf = 0;
printf("POINT: 1061\n");

    	if((((a106 == 11 && a51 == 36) && !(a152 == 8)) && !(a172 == 35))) {
printf("POINT: 1062\n");
    	a54 = 35 ;
    	a134 = 17;
    	a176 = 9;
    	a45 = 36 ;
    	a184 = 10;
    	a97 = 6;
    	a152 = 8;
    	a41 = 34 ;
    	a109 = 32 ;
    	a128 = 7;
    	a125 = 35 ;
    	a119 = 34 ;
    	a150 = 6;
    	a160 = 36 ;
    	a37 = 8;
    	a20 = 7;
    	a65 = 12;
    	a81 = 16;
    	a84 = 34 ;
    	a118 = 33 ;
    	a95 = 9;
    	a167 = 8;
    	a110 = 5;
    	a32 = 34 ;
    	a140 = 9;
    	a115 = 36 ;
    	a93 = 7;
    	a53 = 35 ;
    	a112 = 33 ;
    	a196 = 12;
    	a15 = 15;
    	a105 = 10;
    	a187 = 5;
    	a79 = 9;
    	a200 = 35 ;
    	a39 = 10;
    	a25 = 8;
    	a46 = 34 ;
    	a30 = 34 ;
    	a26 = 7;
    	a88 = 34 ;
    	a120 = 8;
    	a146 = 36 ;
    	a141 = 36 ;
    	a28 = 12;
    	a55 = 35 ;
    	a169 = 35 ;
    	a51 = 35 ;
    	a121 = 34 ;
    	a178 = 36 ;
    	a16 = 16;
    	a131 = 11;
    	a144 = 33 ;
    	a108 = 9; 
    	}else {
printf("POINT: 1064\n");
    	a17 = 32 ;
    	a135 = 10;
    	a115 = 36 ;
    	a160 = 33 ;
    	a110 = 11;
    	a0 = 33 ;
    	a176 = 2;
    	a95 = 13;
    	a2 = 6;
    	a25 = 4;
    	a32 = 35 ;
    	a68 = 7;
    	a165 = 33 ;
    	a88 = 35 ;
    	a15 = 9;
    	a141 = 35 ;
    	a101 = 35 ;
    	a184 = 7;
    	a140 = 8;
    	a128 = 7;
    	a78 = 35 ;
    	a119 = 34 ;
    	a127 = 11;
    	a109 = 36 ;
    	a169 = 35 ;
    	a90 = 33 ;
    	a28 = 13;
    	a69 = 36 ;
    	a22 = 12;
    	a171 = 11;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1065\n");

    if((((a196 == 7 && a39 == 9) && a48 == 34) && (a176 == 4 && (a51 == 34 && (((input == 8) &&  cf==1 ) && a196 == 7))))) {
printf("POINT: 1066\n");
    	cf = 0;
printf("POINT: 1067\n");

    	if((a100 == 35 && a51 == 36)) {
printf("POINT: 1068\n");
    	a179 = 32 ;
    	a69 = 32 ;
    	a46 = 32 ;
    	a128 = 5;
    	a184 = 7;
    	a55 = 34 ;
    	a22 = 14;
    	a167 = 1;
    	a104 = 34 ;
    	a97 = 3;
    	a53 = 36 ;
    	a105 = 16;
    	a153 = 6;
    	a12 = 32 ;
    	a126 = 6;
    	a26 = 7;
    	a45 = 34 ;
    	a28 = 14;
    	a95 = 11;
    	a0 = 32 ;
    	a20 = 6;
    	a29 = 34 ;
    	a110 = 11;
    	a68 = 4;
    	a30 = 35 ;
    	a79 = 12;
    	a125 = 34 ;
    	a127 = 13;
    	a154 = 33 ;
    	a15 = 14;
    	a90 = 34 ;
    	a200 = 33 ;
    	a119 = 33 ;
    	a39 = 11;
    	a16 = 13;
    	a196 = 5;
    	a165 = 35 ;
    	a51 = 33 ;
    	a17 = 34 ;
    	a152 = 10;
    	a93 = 4;
    	a37 = 14;
    	a176 = 9;
    	a174 = 8;
    	a109 = 34 ;
    	a84 = 34 ;
    	a141 = 34 ;
    	a48 = 35 ;
    	a146 = 35 ;
    	a81 = 16;
    	a88 = 36 ;
    	a169 = 33 ;
    	a160 = 34 ;
    	a150 = 10;
    	a178 = 33 ;
    	a34 = 36 ;
    	a115 = 34 ;
    	a112 = 34 ;
    	a65 = 9;
    	a86 = 36 ;
    	a118 = 35 ;
    	a56 = 14;
    	a32 = 36 ;
    	a187 = 9;
    	a180 = 33 ;
    	a120 = 5;
    	a25 = 10;
    	a144 = 35 ;
    	a131 = 9;
    	a41 = 34 ;
    	a121 = 36 ;
    	a140 = 8;
    	a193 = 8;
    	a101 = 33 ;
    	a2 = 6;
    	a162 = 32 ; 
    	}else {
printf("POINT: 1070\n");
    	a20 = 5;
    	a17 = 34 ;
    	a37 = 10;
    	a126 = 9;
    	a169 = 35 ;
    	a86 = 34 ;
    	a68 = 9;
    	a53 = 35 ;
    	a97 = 10;
    	a48 = 34 ;
    	a127 = 13;
    	a128 = 8;
    	a56 = 11;
    	a45 = 35 ;
    	a16 = 14;
    	a0 = 32 ;
    	a160 = 32 ;
    	a25 = 9;
    	a174 = 12;
    	a79 = 8;
    	a196 = 12;
    	a120 = 6;
    	a153 = 5;
    	a178 = 33 ;
    	a154 = 34 ;
    	a144 = 35 ;
    	a121 = 36 ;
    	a84 = 35 ;
    	a51 = 35 ;
    	a55 = 34 ;
    	a131 = 13;
    	a184 = 12;
    	a88 = 33 ;
    	a30 = 36 ;
    	a95 = 10;
    	a65 = 13;
    	a101 = 33 ;
    	a150 = 7;
    	a167 = 8;
    	a90 = 35 ;
    	a93 = 8;
    	a28 = 12;
    	a193 = 12;
    	a39 = 10;
    	a180 = 33 ;
    	a176 = 9;
    	a22 = 11;
    	a34 = 32 ;
    	a81 = 11;
    	a27 = 32 ;
    	a140 = 4;
    	a15 = 14;
    	a115 = 34 ;
    	a119 = 36 ;
    	a41 = 33 ;
    	a112 = 36 ;
    	a110 = 9;
    	a12 = 34 ;
    	a125 = 34 ;
    	a26 = 3;
    	a187 = 3;
    	a146 = 34 ;
    	a179 = 35 ;
    	a109 = 36 ;
    	a104 = 35 ;
    	a200 = 33 ;
    	a165 = 33 ;
    	a105 = 11;
    	a152 = 8;
    	a141 = 36 ;
    	a118 = 32 ;
    	a2 = 3;
    	a32 = 35 ;
    	a46 = 36 ;
    	a69 = 36 ;
    	a182 = 32 ;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 1071\n");

    if(((a105 == 12 && (a84 == 34 && (a26 == 4 && (a88 == 34 && ( cf==1  && (input == 5)))))) && (a30 == 34 && a128 == 3))) {
printf("POINT: 1072\n");
    	cf = 0;
printf("POINT: 1073\n");

    	if((a41 == 33 && !(a10 == 6))) {
printf("POINT: 1074\n");
    	a109 = 35 ;
    	a26 = 8;
    	a172 = 34 ;
    	a16 = 9;
    	a84 = 35 ;
    	a12 = 36 ;
    	a118 = 33 ;
    	a2 = 10;
    	a25 = 7;
    	a55 = 36 ;
    	a112 = 33 ;
    	a20 = 7;
    	a101 = 35 ;
    	a184 = 7;
    	a34 = 34 ;
    	a127 = 9;
    	a119 = 35 ;
    	a128 = 4;
    	a45 = 36 ;
    	a88 = 34 ;
    	a120 = 10;
    	a97 = 7;
    	a79 = 5;
    	a178 = 33 ;
    	a15 = 15;
    	a65 = 14;
    	a176 = 2;
    	a131 = 12;
    	a165 = 32 ;
    	a154 = 35 ;
    	a135 = 9;
    	a164 = 12; 
    	}else {
printf("POINT: 1076\n");
    	a160 = 33 ;
    	a51 = 35 ;
    	a34 = 35 ;
    	a79 = 7;
    	a179 = 36 ;
    	a121 = 34 ;
    	a26 = 9;
    	a46 = 36 ;
    	a93 = 4;
    	a120 = 7;
    	a141 = 33 ;
    	a16 = 11;
    	a28 = 9;
    	a105 = 14;
    	a17 = 35 ;
    	a32 = 34 ;
    	a169 = 33 ;
    	a25 = 11;
    	a134 = 13;
    	a30 = 36 ;
    	a146 = 33 ;
    	a140 = 8;
    	a81 = 13;
    	a97 = 7;
    	a144 = 35 ;
    	a37 = 11;
    	a180 = 34 ;
    	a193 = 9;
    	a200 = 35 ;
    	a131 = 13;
    	a65 = 9;
    	a152 = 11;
    	a184 = 10;
    	a48 = 33 ;
    	a110 = 9;
    	a153 = 6;
    	a55 = 34 ;
    	a178 = 36 ;
    	a174 = 14;
    	a176 = 7;
    	a187 = 10;
    	a88 = 35 ;
    	a125 = 33 ;
    	a3 = 34 ;
    	a41 = 35 ;
    	a115 = 35 ;
    	a196 = 9;
    	a183 = 10;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 1077\n");

    if(((a152 == 10 && ((a93 == 4 && (((input == 7) &&  cf==1 ) && a167 == 3)) && a193 == 9)) && (a110 == 7 && a169 == 34))) {
printf("POINT: 1078\n");
    	cf = 0;
printf("POINT: 1079\n");

    	if((a182 == 34 && a168 == 35)) {
printf("POINT: 1080\n");
    	a153 = 5;
    	a48 = 33 ;
    	a51 = 36 ;
    	a184 = 11;
    	a187 = 3;
    	a120 = 5;
    	a198 = 33 ;
    	a81 = 16;
    	a45 = 36 ;
    	a84 = 33 ;
    	a25 = 8;
    	a176 = 5;
    	a28 = 15;
    	a167 = 8;
    	a65 = 14;
    	a119 = 33 ;
    	a105 = 13;
    	a179 = 34 ;
    	a53 = 33 ;
    	a140 = 7;
    	a160 = 33 ;
    	a88 = 34 ;
    	a110 = 9;
    	a152 = 8;
    	a146 = 33 ;
    	a93 = 9;
    	a150 = 4;
    	a86 = 33 ;
    	a131 = 13;
    	a79 = 11;
    	a39 = 13;
    	a97 = 5;
    	a128 = 7;
    	a118 = 34 ;
    	a20 = 6;
    	a32 = 33 ;
    	a115 = 33 ;
    	a37 = 13;
    	a30 = 35 ;
    	a121 = 36 ;
    	a26 = 9;
    	a141 = 33 ;
    	a169 = 33 ;
    	a200 = 32 ;
    	a16 = 16;
    	a180 = 36 ;
    	a125 = 36 ;
    	a174 = 7;
    	a55 = 35 ;
    	a34 = 36 ;
    	a46 = 36 ;
    	a22 = 8;
    	a104 = 33 ;
    	a41 = 36 ;
    	a178 = 35 ;
    	a177 = 13; 
    	}else {
printf("POINT: 1082\n");
    	a126 = 3;
    	a138 = 35 ;
    	a125 = 36 ;
    	a22 = 7;
    	a131 = 16;
    	a15 = 9;
    	a41 = 33 ;
    	a165 = 32 ;
    	a176 = 7;
    	a95 = 11;
    	a88 = 33 ;
    	a0 = 32 ;
    	a56 = 13;
    	a135 = 10;
    	a110 = 5;
    	a115 = 36 ;
    	a65 = 13;
    	a25 = 10;
    	a141 = 35 ;
    	a17 = 35 ;
    	a109 = 36 ;
    	a154 = 36 ;
    	a171 = 5;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1083\n");

    if(((a45 == 34 && (a28 == 11 && (a174 == 9 && a180 == 34))) && ((a115 == 34 && ( cf==1  && (input == 4))) && a174 == 9))) {
printf("POINT: 1084\n");
    	cf = 0;
    	a180 = 33 ;
    	a39 = 10;
    	a144 = 33 ;
    	a152 = 11;
    	a79 = 7;
    	a28 = 16;
    	a184 = 5;
    	a65 = 12;
    	a53 = 35 ;
    	a84 = 33 ;
    	a160 = 34 ;
    	a121 = 34 ;
    	a81 = 10;
    	a131 = 15;
    	a158 = 10;
    	a178 = 36 ;
    	a193 = 12;
    	a167 = 8;
    	a32 = 33 ;
    	a118 = 34 ;
    	a105 = 16;
    	a20 = 6;
    	a51 = 35 ;
    	a93 = 4;
    	a120 = 5;
    	a41 = 36 ;
    	a110 = 9;
    	a55 = 36 ;
    	a30 = 34 ;
    	a150 = 7;
    	a16 = 15;
    	a128 = 1;
    	a169 = 36 ;
    	a34 = 34 ;
    	a183 = 12;
    	a97 = 6;
    	a141 = 34 ;
    	a112 = 35 ;
    	a115 = 34 ;
    	a165 = 33 ;
    	a174 = 7;
    	a48 = 34 ;
    	a119 = 34 ;
    	a37 = 12;
    	a176 = 9;
    	a187 = 7;
    	a104 = 35 ;
    	a196 = 6;
    	a26 = 9;
    	a46 = 36 ;
    	a45 = 34 ;
    	a125 = 36 ;
    	a25 = 11;
    	a88 = 34 ;
    	a200 = 36 ;
    	a146 = 34 ;
    	a140 = 7;
    	a179 = 35 ;
    	a153 = 7;
    	a7 = 4; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm114(int input) {
printf("POINT: 1085\n");

    if((((a39 == 9 && ( cf==1  && (input == 4))) && a65 == 11) && (a165 == 34 && (a120 == 7 && (a121 == 34 && a180 == 34))))) {
printf("POINT: 1086\n");
    	cf = 0;
printf("POINT: 1087\n");

    	if((!(a31 == 33) || a153 == 4)) {
printf("POINT: 1088\n");
    	a84 = 32 ;
    	a112 = 36 ;
    	a158 = 7;
    	a95 = 10;
    	a104 = 35 ;
    	a42 = 32 ;
    	a93 = 4;
    	a180 = 33 ;
    	a125 = 34 ;
    	a196 = 12;
    	a200 = 36 ;
    	a150 = 7;
    	a30 = 35 ;
    	a28 = 14;
    	a45 = 32 ;
    	a167 = 3;
    	a2 = 9;
    	a140 = 5;
    	a37 = 13;
    	a79 = 12;
    	a109 = 36 ;
    	a69 = 32 ;
    	a65 = 13;
    	a146 = 35 ;
    	a17 = 36 ;
    	a34 = 35 ;
    	a184 = 7;
    	a25 = 7;
    	a41 = 34 ;
    	a118 = 36 ;
    	a153 = 10;
    	a39 = 11;
    	a160 = 32 ;
    	a174 = 8;
    	a165 = 34 ;
    	a101 = 34 ;
    	a110 = 6;
    	a48 = 36 ;
    	a15 = 11;
    	a121 = 35 ;
    	a126 = 8;
    	a68 = 9;
    	a176 = 8;
    	a144 = 36 ;
    	a178 = 34 ;
    	a51 = 34 ;
    	a120 = 7;
    	a53 = 32 ;
    	a97 = 8;
    	a115 = 36 ;
    	a32 = 34 ;
    	a105 = 13;
    	a131 = 15;
    	a154 = 35 ;
    	a187 = 6;
    	a64 = 11; 
    	}else {
printf("POINT: 1090\n");
    	a154 = 34 ;
    	a200 = 35 ;
    	a95 = 11;
    	a15 = 16;
    	a184 = 8;
    	a46 = 36 ;
    	a178 = 33 ;
    	a160 = 34 ;
    	a48 = 35 ;
    	a104 = 36 ;
    	a167 = 5;
    	a69 = 36 ;
    	a146 = 36 ;
    	a97 = 9;
    	a114 = 14;
    	a126 = 9;
    	a153 = 5;
    	a120 = 12;
    	a150 = 8;
    	a45 = 34 ;
    	a196 = 9;
    	a93 = 4;
    	a179 = 34 ;
    	a32 = 36 ;
    	a115 = 34 ;
    	a65 = 12;
    	a17 = 35 ;
    	a118 = 34 ;
    	a41 = 36 ;
    	a174 = 9;
    	a131 = 15;
    	a101 = 36 ;
    	a25 = 5;
    	a180 = 35 ;
    	a30 = 35 ;
    	a90 = 35 ;
    	a110 = 9;
    	a105 = 15;
    	a53 = 36 ;
    	a68 = 5;
    	a109 = 36 ;
    	a28 = 9;
    	a193 = 7;
    	a121 = 36 ;
    	a39 = 13;
    	a176 = 5;
    	a84 = 36 ;
    	a37 = 11;
    	a144 = 32 ;
    	a165 = 33 ;
    	a16 = 14;
    	a34 = 36 ;
    	a134 = 15;
    	a51 = 36 ;
    	a79 = 8;
    	a2 = 4;
    	a112 = 35 ;
    	a8 = 12;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 1091\n");

    if(((a118 == 34 && (a120 == 7 && (a146 == 34 && (a196 == 7 && ( cf==1  && (input == 10)))))) && (a193 == 9 && a25 == 6))) {
printf("POINT: 1092\n");
    	cf = 0;
    	a51 = 36 ;
    	a56 = 8;
    	a127 = 11;
    	a105 = 14;
    	a135 = 15;
    	a81 = 15;
    	a140 = 8;
    	a48 = 33 ;
    	a0 = 32 ;
    	a157 = 7;
    	a169 = 35 ;
    	a37 = 14;
    	a55 = 35 ;
    	a20 = 7;
    	a90 = 35 ;
    	a115 = 36 ;
    	a88 = 33 ;
    	a119 = 33 ;
    	a178 = 35 ;
    	a174 = 10;
    	a176 = 4;
    	a22 = 11;
    	a152 = 12;
    	a45 = 35 ;
    	a141 = 33 ;
    	a128 = 4;
    	a126 = 3;
    	a184 = 10;
    	a12 = 32 ;
    	a46 = 33 ;
    	a24 = 11; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1093\n");

    if((((a174 == 9 && (((input == 5) &&  cf==1 ) && a51 == 34)) && a174 == 9) && ((a144 == 34 && a110 == 7) && a176 == 4))) {
printf("POINT: 1094\n");
    	cf = 0;
    	a121 = 32 ;
    	a2 = 3;
    	a37 = 8;
    	a12 = 35 ;
    	a45 = 33 ;
    	a193 = 9;
    	a32 = 34 ;
    	a187 = 8;
    	a144 = 34 ;
    	a34 = 33 ;
    	a84 = 33 ;
    	a146 = 35 ;
    	a17 = 35 ;
    	a112 = 36 ;
    	a48 = 34 ;
    	a196 = 12;
    	a128 = 2;
    	a131 = 11;
    	a15 = 11;
    	a118 = 33 ;
    	a69 = 36 ;
    	a88 = 34 ;
    	a53 = 36 ;
    	a93 = 9;
    	a167 = 6;
    	a182 = 35 ;
    	a134 = 10;
    	a110 = 8;
    	a109 = 34 ;
    	a65 = 15;
    	a46 = 35 ;
    	a178 = 33 ;
    	a51 = 34 ;
    	a152 = 13;
    	a115 = 36 ;
    	a97 = 8;
    	a39 = 10;
    	a41 = 35 ;
    	a153 = 6;
    	a95 = 14;
    	a22 = 13;
    	a200 = 35 ;
    	a176 = 7;
    	a120 = 9;
    	a184 = 6;
    	a20 = 9;
    	a28 = 16;
    	a179 = 36 ;
    	a150 = 6;
    	a180 = 32 ;
    	a154 = 36 ;
    	a165 = 35 ;
    	a126 = 7;
    	a81 = 12;
    	a79 = 9;
    	a101 = 35 ;
    	a174 = 13;
    	a90 = 33 ;
    	a16 = 11;
    	a25 = 7;
    	a26 = 7;
    	a104 = 35 ;
    	a105 = 17;
    	a68 = 4;
    	a30 = 35 ;
    	a125 = 34 ;
    	a160 = 32 ;
    	a164 = 11; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1095\n");

    if(((a41 == 34 && (a154 == 34 && (a104 == 34 && a97 == 5))) && (a65 == 11 && (( cf==1  && (input == 2)) && a196 == 7)))) {
printf("POINT: 1096\n");
    	cf = 0;
printf("POINT: 1097\n");

    	if((( cf!=1  && (a101 == 36 && a23 == 32)) && !(a177 == 10))) {
printf("POINT: 1098\n");
    	a101 = 35 ;
    	a112 = 33 ;
    	a104 = 35 ;
    	a15 = 14;
    	a68 = 8;
    	a158 = 13;
    	a41 = 33 ;
    	a200 = 36 ;
    	a95 = 11;
    	a193 = 12;
    	a32 = 33 ;
    	a187 = 3;
    	a153 = 3;
    	a180 = 36 ;
    	a79 = 5;
    	a163 = 32 ;
    	a34 = 36 ;
    	a196 = 7;
    	a118 = 36 ;
    	a131 = 15;
    	a25 = 8;
    	a110 = 7;
    	a123 = 6; 
    	}else {
printf("POINT: 1100\n");
    	a34 = 33 ;
    	a115 = 35 ;
    	a135 = 10;
    	a25 = 9;
    	a48 = 33 ;
    	a65 = 12;
    	a28 = 12;
    	a131 = 15;
    	a144 = 34 ;
    	a12 = 32 ;
    	a125 = 35 ;
    	a167 = 4;
    	a55 = 35 ;
    	a2 = 10;
    	a128 = 7;
    	a112 = 35 ;
    	a30 = 35 ;
    	a16 = 14;
    	a93 = 4;
    	a141 = 35 ;
    	a176 = 9;
    	a142 = 35 ;
    	a171 = 12;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1101\n");

    if(((a150 == 6 && (a15 == 11 && (a95 == 10 && (a112 == 34 && ( cf==1  && (input == 1)))))) && (a131 == 11 && a53 == 34))) {
printf("POINT: 1102\n");
    	cf = 0;
printf("POINT: 1103\n");

    	if(((a12 == 36 && a46 == 36) || !(a168 == 33))) {
printf("POINT: 1104\n");
    	a2 = 10;
    	a39 = 9;
    	a196 = 7;
    	a167 = 4;
    	a180 = 33 ;
    	a120 = 8;
    	a154 = 35 ;
    	a115 = 34 ;
    	a51 = 32 ;
    	a17 = 34 ;
    	a34 = 34 ;
    	a121 = 36 ;
    	a25 = 9;
    	a95 = 10;
    	a146 = 34 ;
    	a69 = 33 ;
    	a53 = 36 ;
    	a150 = 10;
    	a160 = 34 ;
    	a84 = 34 ;
    	a193 = 9;
    	a79 = 7;
    	a65 = 12;
    	a144 = 34 ;
    	a187 = 10;
    	a174 = 9;
    	a37 = 10;
    	a179 = 36 ;
    	a165 = 36 ;
    	a68 = 8;
    	a176 = 4;
    	a15 = 11;
    	a141 = 36 ;
    	a126 = 5;
    	a32 = 35 ;
    	a55 = 35 ;
    	a152 = 15;
    	a93 = 2;
    	a30 = 36 ;
    	a101 = 34 ;
    	a97 = 8;
    	a45 = 35 ;
    	a169 = 34 ;
    	a122 = 32 ;
    	a131 = 14;
    	a200 = 36 ;
    	a109 = 36 ;
    	a128 = 1;
    	a110 = 9;
    	a112 = 34 ;
    	a56 = 11;
    	a28 = 9;
    	a158 = 8;
    	a105 = 14;
    	a118 = 33 ;
    	a41 = 36 ;
    	a104 = 35 ;
    	a178 = 33 ;
    	a153 = 10;
    	a183 = 14; 
    	}else {
printf("POINT: 1106\n");
    	a128 = 5;
    	a180 = 33 ;
    	a93 = 2;
    	a187 = 3;
    	a127 = 6;
    	a196 = 12;
    	a48 = 33 ;
    	a79 = 8;
    	a22 = 11;
    	a65 = 13;
    	a174 = 14;
    	a30 = 36 ;
    	a51 = 36 ;
    	a20 = 3;
    	a150 = 9;
    	a46 = 34 ;
    	a95 = 10;
    	a17 = 36 ;
    	a3 = 33 ;
    	a16 = 13;
    	a131 = 16;
    	a119 = 33 ;
    	a32 = 35 ;
    	a154 = 34 ;
    	a84 = 33 ;
    	a69 = 35 ;
    	a45 = 34 ;
    	a97 = 9;
    	a37 = 13;
    	a140 = 4;
    	a112 = 35 ;
    	a144 = 35 ;
    	a153 = 10;
    	a109 = 33 ;
    	a200 = 35 ;
    	a56 = 10;
    	a193 = 10;
    	a176 = 4;
    	a25 = 7;
    	a68 = 6;
    	a104 = 36 ;
    	a167 = 7;
    	a2 = 8;
    	a134 = 13;
    	a118 = 36 ;
    	a34 = 33 ;
    	a12 = 35 ;
    	a15 = 9;
    	a184 = 9;
    	a178 = 36 ;
    	a41 = 36 ;
    	a152 = 14;
    	a126 = 10;
    	a165 = 35 ;
    	a125 = 36 ;
    	a146 = 35 ;
    	a26 = 9;
    	a121 = 33 ;
    	a115 = 33 ;
    	a179 = 33 ;
    	a160 = 36 ;
    	a120 = 10;
    	a101 = 34 ;
    	a110 = 5;
    	a81 = 10;
    	a39 = 11;
    	a28 = 12;
    	a53 = 34 ;
    	a175 = 14;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 1107\n");

    if(((a93 == 4 && ( cf==1  && (input == 6))) && ((a126 == 5 && (a153 == 5 && (a109 == 34 && a97 == 5))) && a28 == 11))) {
printf("POINT: 1108\n");
    	cf = 0;
    	a131 = 15;
    	a48 = 32 ;
    	a79 = 12;
    	a101 = 35 ;
    	a68 = 7;
    	a16 = 9;
    	a121 = 33 ;
    	a164 = 6;
    	a81 = 10;
    	a165 = 36 ;
    	a0 = 33 ;
    	a12 = 35 ;
    	a184 = 8;
    	a125 = 32 ;
    	a30 = 34 ;
    	a28 = 14;
    	a176 = 9;
    	a120 = 10;
    	a127 = 6;
    	a152 = 13;
    	a2 = 10;
    	a39 = 10;
    	a17 = 34 ;
    	a174 = 7;
    	a69 = 35 ;
    	a154 = 33 ;
    	a26 = 5;
    	a51 = 35 ;
    	a141 = 32 ;
    	a95 = 14;
    	a45 = 35 ;
    	a178 = 33 ;
    	a135 = 9;
    	a84 = 35 ;
    	a169 = 32 ;
    	a179 = 35 ;
    	a49 = 14; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1109\n");

    if(((a2 == 5 && (a28 == 11 && a179 == 34)) && ((a93 == 4 && (a115 == 34 && ( cf==1  && (input == 3)))) && a120 == 7))) {
printf("POINT: 1110\n");
    	cf = 0;
printf("POINT: 1111\n");

    	if((a59 == 8 && (a12 == 32 && a126 == 10))) {
printf("POINT: 1112\n");
    	a25 = 9;
    	a26 = 4;
    	a179 = 34 ;
    	a165 = 35 ;
    	a41 = 34 ;
    	a160 = 35 ;
    	a15 = 16;
    	a101 = 36 ;
    	a153 = 9;
    	a174 = 9;
    	a68 = 7;
    	a140 = 5;
    	a136 = 13;
    	a180 = 35 ;
    	a17 = 32 ;
    	a104 = 33 ;
    	a125 = 32 ;
    	a95 = 13;
    	a158 = 9;
    	a109 = 33 ;
    	a115 = 34 ;
    	a176 = 5;
    	a178 = 35 ;
    	a97 = 5;
    	a69 = 35 ;
    	a93 = 2;
    	a121 = 36 ;
    	a90 = 36 ;
    	a105 = 10;
    	a131 = 15;
    	a53 = 35 ;
    	a37 = 10;
    	a152 = 15;
    	a65 = 10;
    	a196 = 7;
    	a84 = 35 ;
    	a193 = 13;
    	a56 = 12;
    	a150 = 4;
    	a200 = 36 ;
    	a141 = 33 ;
    	a184 = 10;
    	a81 = 14;
    	a146 = 35 ;
    	a126 = 8;
    	a112 = 36 ;
    	a45 = 34 ;
    	a2 = 10;
    	a46 = 35 ;
    	a118 = 35 ;
    	a39 = 13;
    	a144 = 32 ;
    	a154 = 34 ;
    	a51 = 34 ;
    	a30 = 32 ;
    	a187 = 9;
    	a22 = 7;
    	a79 = 8;
    	a34 = 36 ;
    	a110 = 10;
    	a28 = 15;
    	a120 = 11;
    	a133 = 2; 
    	}else {
printf("POINT: 1114\n");
    	a154 = 35 ;
    	a17 = 33 ;
    	a109 = 35 ;
    	a39 = 11;
    	a25 = 9;
    	a69 = 36 ;
    	a32 = 35 ;
    	a153 = 6;
    	a187 = 9;
    	a179 = 36 ;
    	a176 = 4;
    	a115 = 36 ;
    	a51 = 34 ;
    	a158 = 11;
    	a174 = 13;
    	a22 = 11;
    	a131 = 14;
    	a144 = 34 ;
    	a185 = 15;
    	a104 = 33 ;
    	a79 = 10;
    	a45 = 35 ;
    	a110 = 8;
    	a46 = 33 ;
    	a56 = 13;
    	a68 = 8;
    	a128 = 3;
    	a2 = 9;
    	a65 = 16;
    	a119 = 33 ;
    	a101 = 36 ;
    	a30 = 34 ;
    	a28 = 9;
    	a169 = 35 ;
    	a121 = 36 ;
    	a105 = 10;
    	a196 = 8;
    	a95 = 15;
    	a15 = 14;
    	a167 = 8;
    	a178 = 33 ;
    	a126 = 8;
    	a93 = 9;
    	a120 = 10;
    	a184 = 11;
    	a193 = 9;
    	a180 = 35 ;
    	a152 = 13;
    	a160 = 34 ;
    	a165 = 36 ;
    	a146 = 34 ;
    	a118 = 36 ;
    	a41 = 35 ;
    	a84 = 35 ;
    	a97 = 6;
    	a200 = 36 ;
    	a150 = 4;
    	a112 = 35 ;
    	a37 = 11;
    	a34 = 36 ;
    	a53 = 36 ;
    	a81 = 12;
    	a58 = 8;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 1115\n");

    if(((a69 == 34 && (a84 == 34 && (a15 == 11 && (a118 == 34 && ( cf==1  && (input == 9)))))) && (a28 == 11 && a17 == 34))) {
printf("POINT: 1116\n");
    	cf = 0;
    	a115 = 35 ;
    	a153 = 8;
    	a84 = 36 ;
    	a15 = 15;
    	a68 = 7;
    	a81 = 10;
    	a104 = 35 ;
    	a176 = 2;
    	a41 = 35 ;
    	a17 = 36 ;
    	a178 = 32 ;
    	a131 = 11;
    	a25 = 6;
    	a46 = 36 ;
    	a150 = 4;
    	a121 = 33 ;
    	a112 = 36 ;
    	a158 = 9;
    	a152 = 9;
    	a154 = 35 ;
    	a120 = 11;
    	a45 = 35 ;
    	a30 = 33 ;
    	a51 = 36 ;
    	a28 = 9;
    	a101 = 36 ;
    	a184 = 12;
    	a53 = 35 ;
    	a56 = 9;
    	a144 = 35 ;
    	a193 = 12;
    	a109 = 36 ;
    	a97 = 8;
    	a136 = 13;
    	a2 = 8;
    	a39 = 12;
    	a95 = 12;
    	a34 = 35 ;
    	a174 = 9;
    	a146 = 36 ;
    	a141 = 36 ;
    	a140 = 5;
    	a79 = 8;
    	a26 = 3;
    	a65 = 16;
    	a160 = 34 ;
    	a165 = 36 ;
    	a90 = 36 ;
    	a196 = 10;
    	a180 = 33 ;
    	a118 = 35 ;
    	a200 = 36 ;
    	a105 = 17;
    	a187 = 6;
    	a179 = 35 ;
    	a110 = 10;
    	a37 = 12;
    	a93 = 4;
    	a126 = 6;
    	a69 = 32 ;
    	a125 = 35 ;
    	a22 = 9;
    	a133 = 2; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1117\n");

    if(((a167 == 3 && ((a68 == 4 && (a174 == 9 && ( cf==1  && (input == 8)))) && a178 == 34)) && (a15 == 11 && a109 == 34))) {
printf("POINT: 1118\n");
    	cf = 0;
    	a17 = 35 ;
    	a158 = 7;
    	a200 = 36 ;
    	a193 = 10;
    	a68 = 8;
    	a15 = 14;
    	a178 = 33 ;
    	a65 = 14;
    	a30 = 34 ;
    	a126 = 5;
    	a95 = 12;
    	a28 = 15;
    	a104 = 33 ;
    	a101 = 35 ;
    	a110 = 5;
    	a115 = 33 ;
    	a153 = 5;
    	a118 = 33 ;
    	a112 = 33 ;
    	a146 = 36 ;
    	a137 = 32 ;
    	a144 = 34 ;
    	a109 = 36 ;
    	a34 = 36 ;
    	a174 = 14;
    	a120 = 7;
    	a51 = 33 ;
    	a131 = 15;
    	a64 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1119\n");

    if(((((( cf==1  && (input == 7)) && a37 == 10) && a32 == 34) && a178 == 34) && ((a79 == 7 && a39 == 9) && a112 == 34))) {
printf("POINT: 1120\n");
    	cf = 0;
printf("POINT: 1121\n");

    	if(a10 == 6) {
printf("POINT: 1122\n");
    	a69 = 35 ;
    	a131 = 15;
    	a153 = 6;
    	a89 = 35 ;
    	a135 = 10;
    	a178 = 34 ;
    	a141 = 32 ;
    	a120 = 10;
    	a193 = 14;
    	a121 = 34 ;
    	a167 = 7;
    	a115 = 36 ;
    	a171 = 8; 
    	}else {
printf("POINT: 1124\n");
    	a104 = 35 ;
    	a93 = 7;
    	a90 = 36 ;
    	a178 = 34 ;
    	a65 = 15;
    	a34 = 36 ;
    	a126 = 9;
    	a2 = 8;
    	a48 = 35 ;
    	a158 = 7;
    	a45 = 32 ;
    	a131 = 12;
    	a187 = 6;
    	a32 = 33 ;
    	a95 = 10;
    	a144 = 34 ;
    	a120 = 7;
    	a184 = 8;
    	a53 = 36 ;
    	a176 = 6;
    	a110 = 5;
    	a64 = 16;
    	a17 = 36 ;
    	a84 = 33 ;
    	a119 = 33 ;
    	a105 = 14;
    	a101 = 36 ;
    	a39 = 7;
    	a150 = 11;
    	a146 = 36 ;
    	a51 = 34 ;
    	a196 = 5;
    	a46 = 33 ;
    	a153 = 8;
    	a68 = 5;
    	a121 = 33 ;
    	a193 = 7;
    	a154 = 34 ;
    	a165 = 36 ;
    	a160 = 33 ;
    	a15 = 9;
    	a97 = 10;
    	a79 = 7;
    	a109 = 33 ;
    	a69 = 36 ;
    	a180 = 35 ;
    	a140 = 6;
    	a56 = 15;
    	a167 = 5;
    	a169 = 34 ;
    	a30 = 36 ;
    	a115 = 34 ;
    	a200 = 36 ;
    	a37 = 14;
    	a28 = 12;
    	a118 = 33 ;
    	a112 = 33 ;
    	a41 = 35 ;
    	a25 = 9;
    	a179 = 36 ;
    	a174 = 7;
    	a189 = 12;
    	}printf("%d\n", 26);  
    } 
}
 void calculate_outputm115(int input) {
printf("POINT: 1125\n");

    if((((a178 == 34 && a30 == 34) && a144 == 34) && ((a93 == 4 && (a16 == 11 && ( cf==1  && (input == 5)))) && a30 == 34))) {
printf("POINT: 1126\n");
    	cf = 0;
    	a150 = 5;
    	a112 = 34 ;
    	a131 = 10;
    	a46 = 34 ;
    	a88 = 34 ;
    	a95 = 10;
    	a0 = 32 ;
    	a184 = 6;
    	a154 = 34 ;
    	a135 = 15;
    	a101 = 34 ;
    	a30 = 34 ;
    	a48 = 32 ;
    	a109 = 34 ;
    	a167 = 2;
    	a179 = 34 ;
    	a56 = 10;
    	a125 = 32 ;
    	a157 = 11;
    	a128 = 3;
    	a68 = 4;
    	a178 = 34 ;
    	a160 = 34 ;
    	a41 = 34 ;
    	a193 = 7;
    	a115 = 34 ;
    	a79 = 7;
    	a140 = 6;
    	a25 = 5;
    	a26 = 4;
    	a153 = 4;
    	a81 = 12;
    	a12 = 34 ;
    	a174 = 8;
    	a65 = 11;
    	a34 = 34 ;
    	a121 = 32 ;
    	a90 = 32 ;
    	a120 = 7;
    	a97 = 5;
    	a20 = 5;
    	a51 = 34 ;
    	a144 = 34 ;
    	a126 = 4;
    	a127 = 8;
    	a22 = 9;
    	a152 = 10;
    	a110 = 7;
    	a118 = 34 ;
    	a84 = 33 ;
    	a55 = 34 ;
    	a105 = 12;
    	a28 = 11;
    	a37 = 10;
    	a98 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1127\n");

    if((( cf==1  && (input == 7)) && (a131 == 11 && ((a119 == 34 && ((a115 == 34 && a165 == 34) && a193 == 9)) && a105 == 12)))) {
printf("POINT: 1128\n");
    	cf = 0;
    	a34 = 32 ;
    	a69 = 32 ;
    	a90 = 32 ;
    	a79 = 7;
    	a51 = 32 ;
    	a184 = 7;
    	a121 = 32 ;
    	a81 = 12;
    	a0 = 32 ;
    	a22 = 9;
    	a28 = 11;
    	a153 = 5;
    	a95 = 9;
    	a48 = 32 ;
    	a120 = 6;
    	a84 = 32 ;
    	a101 = 34 ;
    	a55 = 34 ;
    	a25 = 5;
    	a126 = 4;
    	a154 = 34 ;
    	a16 = 10;
    	a12 = 32 ;
    	a105 = 12;
    	a68 = 3;
    	a157 = 5;
    	a135 = 15;
    	a88 = 34 ;
    	a167 = 3;
    	a118 = 32 ;
    	a150 = 6;
    	a193 = 8;
    	a178 = 34 ;
    	a160 = 32 ;
    	a41 = 32 ;
    	a144 = 34 ;
    	a65 = 10;
    	a176 = 3;
    	a37 = 10;
    	a152 = 10;
    	a20 = 5;
    	a97 = 5;
    	a140 = 5;
    	a127 = 7;
    	a56 = 9;
    	a177 = 16; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1129\n");

    if(((a153 == 5 && (a120 == 7 && (a110 == 7 && a165 == 34))) && ((a110 == 7 && ( cf==1  && (input == 4))) && a32 == 34))) {
printf("POINT: 1130\n");
    	cf = 0;
    	a45 = 33 ;
    	a84 = 33 ;
    	a153 = 4;
    	a17 = 33 ;
    	a46 = 33 ;
    	a118 = 32 ;
    	a16 = 10;
    	a178 = 32 ;
    	a34 = 32 ;
    	a131 = 10;
    	a167 = 3;
    	a115 = 33 ;
    	a176 = 4;
    	a53 = 33 ;
    	a105 = 12;
    	a141 = 34 ;
    	a187 = 4;
    	a158 = 7;
    	a51 = 33 ;
    	a65 = 10;
    	a26 = 2;
    	a15 = 9;
    	a174 = 7;
    	a25 = 6;
    	a193 = 8;
    	a30 = 33 ;
    	a196 = 7;
    	a68 = 4;
    	a112 = 33 ;
    	a42 = 34 ;
    	a90 = 34 ;
    	a200 = 36 ;
    	a169 = 33 ;
    	a119 = 32 ;
    	a165 = 32 ;
    	a28 = 11;
    	a104 = 33 ;
    	a48 = 34 ;
    	a32 = 33 ;
    	a140 = 5;
    	a39 = 7;
    	a56 = 8;
    	a146 = 32 ;
    	a41 = 32 ;
    	a160 = 33 ;
    	a180 = 33 ;
    	a121 = 32 ;
    	a69 = 33 ;
    	a2 = 3;
    	a184 = 5;
    	a37 = 10;
    	a144 = 33 ;
    	a109 = 32 ;
    	a110 = 6;
    	a125 = 33 ;
    	a179 = 32 ;
    	a127 = 8;
    	a120 = 6;
    	a93 = 3;
    	a128 = 2;
    	a64 = 11; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1131\n");

    if(((a104 == 34 && ((a69 == 34 && ( cf==1  && (input == 3))) && a65 == 11)) && (a121 == 34 && (a56 == 10 && a48 == 34)))) {
printf("POINT: 1132\n");
    	cf = 0;
    	a112 = 32 ;
    	a0 = 34 ;
    	a109 = 32 ;
    	a79 = 7;
    	a176 = 3;
    	a95 = 10;
    	a120 = 6;
    	a144 = 32 ;
    	a16 = 10;
    	a152 = 8;
    	a25 = 5;
    	a110 = 6;
    	a45 = 32 ;
    	a141 = 32 ;
    	a154 = 34 ;
    	a22 = 9;
    	a65 = 10;
    	a125 = 33 ;
    	a105 = 10;
    	a118 = 32 ;
    	a135 = 8;
    	a15 = 10;
    	a153 = 4;
    	a13 = 4;
    	a20 = 5;
    	a55 = 33 ;
    	a30 = 32 ;
    	a115 = 32 ;
    	a2 = 4;
    	a97 = 5;
    	a185 = 14; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm116(int input) {
printf("POINT: 1133\n");

    if(((a154 == 34 && ((a22 == 9 && a127 == 8) && a55 == 34)) && (a146 == 34 && (a140 == 6 && ( cf==1  && (input == 3)))))) {
printf("POINT: 1134\n");
    	cf = 0;
    	a127 = 7;
    	a65 = 10;
    	a55 = 32 ;
    	a146 = 32 ;
    	a115 = 32 ;
    	a180 = 32 ;
    	a140 = 5;
    	a95 = 9;
    	a84 = 32 ;
    	a39 = 8;
    	a144 = 32 ;
    	a187 = 4;
    	a53 = 32 ;
    	a45 = 32 ;
    	a128 = 2;
    	a193 = 8;
    	a28 = 10;
    	a158 = 11;
    	a22 = 8;
    	a118 = 32 ;
    	a112 = 32 ;
    	a56 = 9;
    	a154 = 32 ;
    	a32 = 32 ;
    	a81 = 11;
    	a17 = 32 ;
    	a79 = 6;
    	a46 = 32 ;
    	a119 = 32 ;
    	a34 = 32 ;
    	a16 = 10;
    	a101 = 32 ;
    	a160 = 32 ;
    	a110 = 6;
    	a89 = 36 ;
    	a196 = 6;
    	a104 = 32 ;
    	a26 = 3;
    	a105 = 11;
    	a97 = 4;
    	a30 = 32 ;
    	a200 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1135\n");

    if(((a17 == 34 && a187 == 5) && (((a97 == 5 && (((input == 10) &&  cf==1 ) && a112 == 34)) && a95 == 10) && a17 == 34))) {
printf("POINT: 1136\n");
    	cf = 0;
printf("POINT: 1137\n");

    	if((a8 == 9 || (!(a179 == 36) || (a177 == 16 && a187 == 8)))) {
printf("POINT: 1138\n");
    	a90 = 33 ;
    	a104 = 33 ;
    	a140 = 5;
    	a84 = 32 ;
    	a95 = 8;
    	a146 = 32 ;
    	a45 = 32 ;
    	a17 = 32 ;
    	a69 = 33 ;
    	a110 = 5;
    	a81 = 11;
    	a65 = 10;
    	a128 = 2;
    	a127 = 7;
    	a2 = 3;
    	a193 = 8;
    	a32 = 33 ;
    	a28 = 10;
    	a126 = 3;
    	a115 = 32 ;
    	a79 = 6;
    	a134 = 15;
    	a184 = 5;
    	a119 = 32 ;
    	a53 = 33 ;
    	a160 = 33 ;
    	a196 = 6;
    	a56 = 9;
    	a154 = 32 ;
    	a180 = 32 ;
    	a25 = 4;
    	a118 = 32 ;
    	a37 = 8;
    	a114 = 14;
    	a30 = 32 ;
    	a144 = 33 ;
    	a46 = 33 ;
    	a16 = 9;
    	a48 = 34 ;
    	a15 = 9;
    	a97 = 4;
    	a200 = 35 ;
    	a112 = 33 ;
    	a26 = 3;
    	a101 = 32 ;
    	a22 = 8;
    	a105 = 10;
    	a39 = 8;
    	a34 = 32 ;
    	a55 = 32 ;
    	a8 = 12; 
    	}else {
printf("POINT: 1140\n");
    	a95 = 9;
    	a158 = 7;
    	a42 = 32 ;
    	a115 = 33 ;
    	a22 = 8;
    	a56 = 9;
    	a110 = 5;
    	a45 = 33 ;
    	a179 = 34 ;
    	a146 = 32 ;
    	a39 = 8;
    	a128 = 2;
    	a69 = 33 ;
    	a97 = 4;
    	a34 = 32 ;
    	a81 = 11;
    	a48 = 34 ;
    	a79 = 5;
    	a184 = 5;
    	a55 = 32 ;
    	a37 = 8;
    	a17 = 32 ;
    	a127 = 7;
    	a16 = 10;
    	a160 = 33 ;
    	a125 = 33 ;
    	a28 = 10;
    	a174 = 7;
    	a30 = 33 ;
    	a112 = 33 ;
    	a65 = 10;
    	a193 = 9;
    	a196 = 6;
    	a109 = 33 ;
    	a101 = 32 ;
    	a200 = 36 ;
    	a140 = 4;
    	a187 = 4;
    	a119 = 32 ;
    	a53 = 33 ;
    	a118 = 32 ;
    	a32 = 33 ;
    	a26 = 3;
    	a104 = 33 ;
    	a144 = 33 ;
    	a154 = 32 ;
    	a105 = 10;
    	a180 = 32 ;
    	a46 = 32 ;
    	a64 = 11;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1141\n");

    if((((a144 == 34 && (((a65 == 11 && a56 == 10) && a16 == 11) && a32 == 34)) && a128 == 3) && ( cf==1  && (input == 4)))) {
printf("POINT: 1142\n");
    	cf = 0;
printf("POINT: 1143\n");

    	if(((!(a45 == 34) && (!(a152 == 15) && a123 == 5)) && a187 == 10)) {
printf("POINT: 1144\n");
    	a51 = 34 ;
    	a119 = 32 ;
    	a45 = 32 ;
    	a144 = 32 ;
    	a65 = 10;
    	a193 = 9;
    	a129 = 36 ;
    	a25 = 6;
    	a32 = 32 ;
    	a53 = 32 ;
    	a128 = 2;
    	a110 = 6;
    	a55 = 32 ;
    	a105 = 11;
    	a115 = 32 ;
    	a22 = 8;
    	a41 = 34 ;
    	a34 = 32 ;
    	a184 = 7;
    	a90 = 34 ;
    	a95 = 9;
    	a122 = 36 ;
    	a39 = 8;
    	a127 = 7;
    	a16 = 10;
    	a187 = 4;
    	a200 = 36 ;
    	a97 = 4;
    	a140 = 5;
    	a160 = 32 ;
    	a79 = 6;
    	a180 = 32 ;
    	a26 = 3;
    	a84 = 32 ;
    	a154 = 32 ;
    	a81 = 11;
    	a69 = 34 ;
    	a158 = 8; 
    	}else {
printf("POINT: 1146\n");
    	a34 = 32 ;
    	a141 = 33 ;
    	a41 = 33 ;
    	a30 = 32 ;
    	a165 = 33 ;
    	a184 = 7;
    	a120 = 5;
    	a126 = 5;
    	a179 = 33 ;
    	a110 = 5;
    	a90 = 33 ;
    	a15 = 9;
    	a127 = 6;
    	a125 = 33 ;
    	a2 = 3;
    	a48 = 34 ;
    	a153 = 5;
    	a53 = 33 ;
    	a104 = 33 ;
    	a109 = 34 ;
    	a25 = 4;
    	a150 = 6;
    	a169 = 33 ;
    	a51 = 33 ;
    	a86 = 36 ;
    	a174 = 7;
    	a20 = 3;
    	a118 = 33 ;
    	a119 = 32 ;
    	a69 = 33 ;
    	a176 = 3;
    	a121 = 33 ;
    	a56 = 8;
    	a68 = 2;
    	a95 = 8;
    	a81 = 12;
    	a29 = 33 ;
    	a45 = 33 ;
    	a193 = 9;
    	a37 = 10;
    	a55 = 32 ;
    	a28 = 9;
    	a167 = 3;
    	a200 = 33 ;
    	a105 = 10;
    	a46 = 33 ;
    	a152 = 10;
    	a123 = 6;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1147\n");

    if((((((input == 6) &&  cf==1 ) && a39 == 9) && a160 == 34) && (a112 == 34 && ((a26 == 4 && a110 == 7) && a16 == 11)))) {
printf("POINT: 1148\n");
    	cf = 0;
    	a160 = 32 ;
    	a180 = 32 ;
    	a79 = 6;
    	a118 = 33 ;
    	a104 = 32 ;
    	a200 = 36 ;
    	a127 = 7;
    	a65 = 9;
    	a56 = 9;
    	a34 = 32 ;
    	a128 = 2;
    	a16 = 10;
    	a187 = 4;
    	a196 = 6;
    	a119 = 33 ;
    	a95 = 9;
    	a53 = 32 ;
    	a97 = 4;
    	a55 = 33 ;
    	a112 = 33 ;
    	a45 = 32 ;
    	a110 = 5;
    	a28 = 9;
    	a115 = 32 ;
    	a1 = 35 ;
    	a46 = 32 ;
    	a39 = 8;
    	a17 = 33 ;
    	a26 = 3;
    	a158 = 10;
    	a22 = 8;
    	a32 = 32 ;
    	a105 = 10;
    	a140 = 5;
    	a183 = 10; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm117(int input) {
printf("POINT: 1149\n");

    if(((((a20 == 5 && ( cf==1  && (input == 5))) && a0 == 34) && a118 == 34) && (a105 == 12 && (a128 == 3 && a141 == 34)))) {
printf("POINT: 1150\n");
    	cf = 0;
    	a15 = 16;
    	a193 = 14;
    	a2 = 3;
    	a153 = 10;
    	a104 = 36 ;
    	a158 = 11;
    	a119 = 35 ;
    	a146 = 36 ;
    	a79 = 8;
    	a26 = 6;
    	a81 = 15;
    	a160 = 33 ;
    	a46 = 36 ;
    	a196 = 5;
    	a69 = 35 ;
    	a105 = 14;
    	a20 = 5;
    	a53 = 34 ;
    	a30 = 36 ;
    	a126 = 6;
    	a174 = 11;
    	a45 = 33 ;
    	a144 = 34 ;
    	a152 = 12;
    	a154 = 33 ;
    	a115 = 34 ;
    	a32 = 35 ;
    	a22 = 14;
    	a169 = 36 ;
    	a167 = 3;
    	a25 = 10;
    	a180 = 34 ;
    	a200 = 36 ;
    	a89 = 36 ;
    	a17 = 36 ;
    	a187 = 5;
    	a121 = 35 ;
    	a34 = 33 ;
    	a84 = 34 ;
    	a0 = 33 ;
    	a141 = 33 ;
    	a48 = 34 ;
    	a184 = 11;
    	a112 = 33 ;
    	a39 = 13;
    	a90 = 33 ;
    	a128 = 5;
    	a118 = 34 ;
    	a55 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1151\n");

    if(((a115 == 34 && (a15 == 11 && a0 == 34)) && ((a104 == 34 && (a152 == 10 && ((input == 1) &&  cf==1 ))) && a184 == 7))) {
printf("POINT: 1152\n");
    	cf = 0;
printf("POINT: 1153\n");

    	if((!(a88 == 34) || ((a84 == 34 && a16 == 15) || !(a134 == 10)))) {
printf("POINT: 1154\n");
    	a39 = 13;
    	a53 = 34 ;
    	a144 = 36 ;
    	a101 = 35 ;
    	a84 = 35 ;
    	a28 = 13;
    	a174 = 12;
    	a81 = 16;
    	a167 = 5;
    	a180 = 34 ;
    	a115 = 34 ;
    	a122 = 36 ;
    	a200 = 36 ;
    	a187 = 3;
    	a121 = 36 ;
    	a22 = 11;
    	a128 = 3;
    	a55 = 35 ;
    	a126 = 5;
    	a153 = 10;
    	a169 = 36 ;
    	a41 = 32 ;
    	a152 = 12;
    	a20 = 10;
    	a15 = 16;
    	a119 = 33 ;
    	a160 = 33 ;
    	a129 = 36 ;
    	a154 = 34 ;
    	a45 = 34 ;
    	a105 = 17;
    	a32 = 34 ;
    	a0 = 35 ;
    	a48 = 33 ;
    	a26 = 5;
    	a141 = 35 ;
    	a2 = 6;
    	a34 = 36 ;
    	a79 = 12;
    	a56 = 13;
    	a51 = 33 ;
    	a158 = 8; 
    	}else {
printf("POINT: 1156\n");
    	a128 = 4;
    	a196 = 12;
    	a193 = 11;
    	a55 = 34 ;
    	a48 = 34 ;
    	a165 = 34 ;
    	a118 = 34 ;
    	a160 = 35 ;
    	a120 = 10;
    	a84 = 35 ;
    	a200 = 33 ;
    	a2 = 10;
    	a86 = 32 ;
    	a110 = 10;
    	a105 = 17;
    	a90 = 35 ;
    	a51 = 35 ;
    	a88 = 35 ;
    	a0 = 35 ;
    	a119 = 34 ;
    	a28 = 15;
    	a121 = 34 ;
    	a153 = 9;
    	a146 = 35 ;
    	a187 = 7;
    	a169 = 36 ;
    	a174 = 11;
    	a17 = 35 ;
    	a179 = 34 ;
    	a25 = 7;
    	a125 = 36 ;
    	a45 = 32 ;
    	a53 = 36 ;
    	a112 = 35 ;
    	a32 = 36 ;
    	a65 = 10;
    	a178 = 34 ;
    	a104 = 34 ;
    	a141 = 35 ;
    	a144 = 32 ;
    	a109 = 34 ;
    	a15 = 16;
    	a184 = 11;
    	a22 = 12;
    	a79 = 5;
    	a20 = 10;
    	a26 = 2;
    	a81 = 17;
    	a152 = 11;
    	a95 = 13;
    	a69 = 32 ;
    	a34 = 34 ;
    	a154 = 34 ;
    	a39 = 12;
    	a115 = 35 ;
    	a126 = 7;
    	a167 = 1;
    	a180 = 35 ;
    	a46 = 33 ;
    	a30 = 36 ;
    	a176 = 7;
    	a77 = 11;
    	a98 = 13;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 1157\n");

    if(((a90 == 34 && ((((input == 10) &&  cf==1 ) && a105 == 12) && a141 == 34)) && (a169 == 34 && (a25 == 6 && a193 == 9)))) {
printf("POINT: 1158\n");
    	cf = 0;
printf("POINT: 1159\n");

    	if(((a37 == 13 && (a91 == 35 && (!(a64 == 11) && a16 == 16))) && a72 == 7)) {
printf("POINT: 1160\n");
    	a126 = 6;
    	a32 = 34 ;
    	a22 = 14;
    	a29 = 34 ;
    	a169 = 35 ;
    	a141 = 36 ;
    	a39 = 10;
    	a26 = 7;
    	a69 = 32 ;
    	a153 = 9;
    	a53 = 36 ;
    	a118 = 33 ;
    	a88 = 36 ;
    	a196 = 12;
    	a84 = 35 ;
    	a105 = 12;
    	a95 = 14;
    	a154 = 33 ;
    	a56 = 15;
    	a28 = 16;
    	a184 = 9;
    	a119 = 36 ;
    	a128 = 6;
    	a121 = 36 ;
    	a68 = 8;
    	a115 = 35 ;
    	a165 = 32 ;
    	a46 = 35 ;
    	a30 = 35 ;
    	a48 = 33 ;
    	a20 = 5;
    	a34 = 33 ;
    	a51 = 36 ;
    	a41 = 33 ;
    	a150 = 5;
    	a15 = 14;
    	a97 = 3;
    	a12 = 35 ;
    	a127 = 8;
    	a55 = 34 ;
    	a180 = 34 ;
    	a110 = 12;
    	a167 = 7;
    	a45 = 36 ;
    	a16 = 15;
    	a37 = 14;
    	a93 = 4;
    	a65 = 16;
    	a17 = 35 ;
    	a176 = 5;
    	a2 = 5;
    	a25 = 7;
    	a131 = 9;
    	a174 = 14;
    	a0 = 34 ;
    	a179 = 36 ;
    	a120 = 9;
    	a152 = 13;
    	a109 = 34 ;
    	a104 = 34 ;
    	a146 = 34 ;
    	a81 = 16;
    	a101 = 34 ;
    	a86 = 36 ;
    	a144 = 35 ;
    	a125 = 35 ;
    	a160 = 35 ;
    	a193 = 14;
    	a200 = 33 ;
    	a178 = 35 ;
    	a90 = 32 ;
    	a112 = 32 ;
    	a79 = 7;
    	a140 = 9;
    	a187 = 7;
    	a162 = 32 ; 
    	}else {
printf("POINT: 1162\n");
    	a141 = 34 ;
    	a2 = 3;
    	a160 = 34 ;
    	a115 = 35 ;
    	a84 = 35 ;
    	a174 = 9;
    	a32 = 34 ;
    	a105 = 13;
    	a146 = 36 ;
    	a17 = 32 ;
    	a55 = 35 ;
    	a112 = 34 ;
    	a153 = 9;
    	a125 = 32 ;
    	a85 = 34 ;
    	a110 = 12;
    	a95 = 14;
    	a150 = 7;
    	a81 = 16;
    	a22 = 10;
    	a41 = 36 ;
    	a176 = 4;
    	a20 = 5;
    	a200 = 35 ;
    	a180 = 34 ;
    	a79 = 12;
    	a12 = 35 ;
    	a126 = 9;
    	a45 = 36 ;
    	a127 = 11;
    	a152 = 9;
    	a69 = 34 ;
    	a0 = 35 ;
    	a154 = 36 ;
    	a144 = 35 ;
    	a193 = 10;
    	a101 = 32 ;
    	a56 = 9;
    	a167 = 5;
    	a46 = 36 ;
    	a34 = 35 ;
    	a16 = 12;
    	a28 = 13;
    	a15 = 11;
    	a121 = 35 ;
    	a179 = 34 ;
    	a53 = 36 ;
    	a118 = 36 ;
    	a26 = 6;
    	a187 = 10;
    	a39 = 10;
    	a120 = 8;
    	a109 = 35 ;
    	a65 = 9;
    	a30 = 34 ;
    	a25 = 7;
    	a119 = 34 ;
    	a196 = 12;
    	a128 = 6;
    	a90 = 33 ;
    	a51 = 36 ;
    	a3 = 32 ;
    	a48 = 32 ;
    	a104 = 35 ;
    	a134 = 13;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 1163\n");

    if((((a174 == 9 && (a126 == 5 && ( cf==1  && (input == 2)))) && a17 == 34) && ((a112 == 34 && a128 == 3) && a115 == 34))) {
printf("POINT: 1164\n");
    	cf = 0;
    	a2 = 9;
    	a119 = 35 ;
    	a15 = 14;
    	a196 = 9;
    	a200 = 35 ;
    	a125 = 34 ;
    	a28 = 12;
    	a146 = 33 ;
    	a93 = 6;
    	a53 = 35 ;
    	a152 = 8;
    	a30 = 32 ;
    	a51 = 36 ;
    	a121 = 34 ;
    	a94 = 35 ;
    	a25 = 5;
    	a169 = 32 ;
    	a115 = 36 ;
    	a141 = 36 ;
    	a160 = 36 ;
    	a56 = 15;
    	a12 = 35 ;
    	a95 = 10;
    	a105 = 16;
    	a90 = 33 ;
    	a193 = 9;
    	a22 = 7;
    	a16 = 14;
    	a55 = 35 ;
    	a184 = 8;
    	a69 = 33 ;
    	a79 = 8;
    	a0 = 33 ;
    	a176 = 8;
    	a26 = 4;
    	a126 = 7;
    	a154 = 35 ;
    	a17 = 32 ;
    	a45 = 32 ;
    	a81 = 14;
    	a20 = 3;
    	a118 = 33 ;
    	a174 = 8;
    	a128 = 7;
    	a41 = 32 ;
    	a179 = 35 ;
    	a144 = 34 ;
    	a167 = 8;
    	a153 = 9;
    	a109 = 33 ;
    	a134 = 12;
    	a46 = 34 ;
    	a120 = 12;
    	a65 = 10;
    	a34 = 36 ;
    	a180 = 33 ;
    	a187 = 10;
    	a39 = 11;
    	a48 = 33 ;
    	a84 = 32 ;
    	a178 = 34 ;
    	a112 = 36 ;
    	a104 = 36 ;
    	a32 = 35 ;
    	a191 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1165\n");

    if((((a34 == 34 && ( cf==1  && (input == 3))) && a79 == 7) && (a141 == 34 && ((a115 == 34 && a119 == 34) && a48 == 34)))) {
printf("POINT: 1166\n");
    	cf = 0;
printf("POINT: 1167\n");

    	if((!(a60 == 11) || a85 == 33)) {
printf("POINT: 1168\n");
    	a15 = 13;
    	a174 = 11;
    	a178 = 35 ;
    	a101 = 35 ;
    	a153 = 3;
    	a109 = 35 ;
    	a51 = 32 ;
    	a34 = 34 ;
    	a179 = 33 ;
    	a37 = 11;
    	a100 = 32 ;
    	a2 = 3;
    	a25 = 11;
    	a79 = 11;
    	a94 = 36 ;
    	a41 = 36 ;
    	a68 = 2;
    	a45 = 35 ;
    	a97 = 7;
    	a20 = 8;
    	a167 = 3;
    	a84 = 34 ;
    	a32 = 35 ;
    	a144 = 33 ;
    	a193 = 12;
    	a0 = 35 ;
    	a30 = 36 ;
    	a140 = 7;
    	a28 = 13;
    	a135 = 12; 
    	}else {
printf("POINT: 1170\n");
    	a15 = 13;
    	a152 = 12;
    	a69 = 35 ;
    	a128 = 8;
    	a32 = 32 ;
    	a79 = 8;
    	a127 = 13;
    	a55 = 35 ;
    	a115 = 36 ;
    	a0 = 33 ;
    	a48 = 36 ;
    	a180 = 35 ;
    	a140 = 11;
    	a2 = 7;
    	a184 = 11;
    	a144 = 36 ;
    	a17 = 35 ;
    	a158 = 11;
    	a196 = 8;
    	a104 = 35 ;
    	a37 = 14;
    	a153 = 10;
    	a16 = 12;
    	a118 = 36 ;
    	a36 = 33 ;
    	a126 = 10;
    	a165 = 33 ;
    	a90 = 36 ;
    	a84 = 36 ;
    	a39 = 12;
    	a26 = 4;
    	a200 = 36 ;
    	a160 = 35 ;
    	a25 = 8;
    	a45 = 33 ;
    	a56 = 11;
    	a121 = 35 ;
    	a97 = 8;
    	a22 = 13;
    	a53 = 36 ;
    	a101 = 36 ;
    	a34 = 33 ;
    	a20 = 9;
    	a154 = 33 ;
    	a109 = 33 ;
    	a174 = 10;
    	a193 = 9;
    	a167 = 5;
    	a146 = 32 ;
    	a119 = 34 ;
    	a30 = 36 ;
    	a81 = 17;
    	a46 = 36 ;
    	a105 = 11;
    	a112 = 35 ;
    	a187 = 4;
    	a141 = 34 ;
    	a169 = 32 ;
    	a120 = 8;
    	a185 = 13;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1171\n");

    if(((a180 == 34 && ( cf==1  && (input == 7))) && (a193 == 9 && ((a180 == 34 && (a46 == 34 && a115 == 34)) && a55 == 34)))) {
printf("POINT: 1172\n");
    	cf = 0;
    	a97 = 3;
    	a90 = 36 ;
    	a37 = 13;
    	a112 = 35 ;
    	a20 = 8;
    	a65 = 14;
    	a105 = 14;
    	a135 = 9;
    	a45 = 33 ;
    	a46 = 34 ;
    	a193 = 12;
    	a109 = 33 ;
    	a93 = 9;
    	a127 = 7;
    	a150 = 10;
    	a84 = 35 ;
    	a34 = 36 ;
    	a119 = 34 ;
    	a174 = 11;
    	a22 = 10;
    	a164 = 10;
    	a128 = 3;
    	a69 = 34 ;
    	a55 = 35 ;
    	a2 = 5;
    	a52 = 9; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1173\n");

    if(((a141 == 34 && (a79 == 7 && (a141 == 34 && (a84 == 34 && a153 == 5)))) && (a81 == 12 && ( cf==1  && (input == 9))))) {
printf("POINT: 1174\n");
    	cf = 0;
    	a112 = 35 ;
    	a2 = 7;
    	a140 = 11;
    	a28 = 12;
    	a0 = 35 ;
    	a20 = 7;
    	a127 = 9;
    	a167 = 7;
    	a110 = 12;
    	a125 = 36 ;
    	a154 = 35 ;
    	a90 = 36 ;
    	a55 = 33 ;
    	a184 = 9;
    	a141 = 35 ;
    	a193 = 13;
    	a22 = 13;
    	a32 = 35 ;
    	a146 = 34 ;
    	a120 = 6;
    	a15 = 10;
    	a144 = 35 ;
    	a104 = 33 ;
    	a51 = 34 ;
    	a19 = 35 ;
    	a34 = 34 ;
    	a126 = 9;
    	a69 = 36 ;
    	a53 = 34 ;
    	a196 = 8;
    	a115 = 33 ;
    	a30 = 36 ;
    	a180 = 36 ;
    	a118 = 35 ;
    	a95 = 14;
    	a121 = 36 ;
    	a105 = 13;
    	a153 = 6;
    	a119 = 32 ;
    	a128 = 8;
    	a81 = 10;
    	a79 = 9;
    	a39 = 10;
    	a84 = 36 ;
    	a25 = 7;
    	a45 = 35 ;
    	a152 = 13;
    	a17 = 34 ;
    	a160 = 35 ;
    	a200 = 33 ;
    	a86 = 35 ;
    	a187 = 6;
    	a178 = 34 ;
    	a59 = 5; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1175\n");

    if(((a105 == 12 && ((input == 4) &&  cf==1 )) && ((a180 == 34 && ((a174 == 9 && a32 == 34) && a167 == 3)) && a53 == 34))) {
printf("POINT: 1176\n");
    	cf = 0;
printf("POINT: 1177\n");

    	if((((a125 == 36 && !(a135 == 11)) && a78 == 35) || a28 == 12)) {
printf("POINT: 1178\n");
    	a153 = 6;
    	a141 = 34 ;
    	a128 = 7;
    	a0 = 36 ;
    	a144 = 34 ;
    	a30 = 36 ;
    	a26 = 2;
    	a174 = 7;
    	a118 = 35 ;
    	a126 = 6;
    	a146 = 34 ;
    	a15 = 16;
    	a152 = 10;
    	a20 = 9;
    	a55 = 35 ;
    	a81 = 12;
    	a104 = 36 ;
    	a158 = 7;
    	a193 = 14;
    	a200 = 36 ;
    	a112 = 35 ;
    	a137 = 32 ;
    	a17 = 34 ;
    	a115 = 36 ;
    	a34 = 36 ;
    	a64 = 10; 
    	}else {
printf("POINT: 1180\n");
    	a22 = 7;
    	a126 = 5;
    	a69 = 35 ;
    	a95 = 15;
    	a56 = 12;
    	a25 = 6;
    	a193 = 7;
    	a88 = 34 ;
    	a109 = 33 ;
    	a0 = 33 ;
    	a97 = 7;
    	a120 = 6;
    	a65 = 14;
    	a55 = 32 ;
    	a144 = 35 ;
    	a121 = 32 ;
    	a51 = 34 ;
    	a12 = 32 ;
    	a86 = 35 ;
    	a200 = 33 ;
    	a46 = 34 ;
    	a112 = 34 ;
    	a178 = 35 ;
    	a20 = 7;
    	a53 = 34 ;
    	a84 = 36 ;
    	a179 = 35 ;
    	a39 = 12;
    	a115 = 33 ;
    	a176 = 6;
    	a169 = 36 ;
    	a125 = 32 ;
    	a146 = 35 ;
    	a128 = 7;
    	a154 = 32 ;
    	a34 = 32 ;
    	a196 = 10;
    	a174 = 8;
    	a187 = 4;
    	a41 = 32 ;
    	a15 = 13;
    	a140 = 6;
    	a17 = 32 ;
    	a150 = 11;
    	a2 = 6;
    	a81 = 10;
    	a160 = 36 ;
    	a184 = 12;
    	a141 = 36 ;
    	a153 = 6;
    	a79 = 10;
    	a19 = 34 ;
    	a68 = 7;
    	a28 = 9;
    	a37 = 10;
    	a90 = 32 ;
    	a26 = 6;
    	a110 = 7;
    	a1 = 33 ;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 1181\n");

    if(((((a121 == 34 && a174 == 9) && a26 == 4) && a15 == 11) && (a160 == 34 && (((input == 8) &&  cf==1 ) && a128 == 3)))) {
printf("POINT: 1182\n");
    	cf = 0;
printf("POINT: 1183\n");

    	if((!(a74 == 32) && ((a6 == 5 && a184 == 9) && a187 == 9))) {
printf("POINT: 1184\n");
    	a2 = 3;
    	a196 = 10;
    	a48 = 35 ;
    	a17 = 34 ;
    	a0 = 33 ;
    	a51 = 36 ;
    	a121 = 35 ;
    	a119 = 36 ;
    	a118 = 36 ;
    	a68 = 8;
    	a141 = 36 ;
    	a45 = 33 ;
    	a115 = 33 ;
    	a20 = 3;
    	a46 = 35 ;
    	a22 = 12;
    	a200 = 36 ;
    	a178 = 36 ;
    	a105 = 17;
    	a174 = 7;
    	a32 = 33 ;
    	a93 = 4;
    	a126 = 5;
    	a158 = 6;
    	a193 = 7;
    	a125 = 33 ;
    	a47 = 33 ;
    	a34 = 35 ;
    	a30 = 34 ;
    	a60 = 6; 
    	}else {
printf("POINT: 1186\n");
    	a15 = 14;
    	a2 = 10;
    	a118 = 33 ;
    	a0 = 35 ;
    	a69 = 34 ;
    	a200 = 36 ;
    	a146 = 35 ;
    	a26 = 8;
    	a79 = 11;
    	a105 = 15;
    	a158 = 9;
    	a30 = 34 ;
    	a121 = 33 ;
    	a187 = 10;
    	a48 = 33 ;
    	a174 = 9;
    	a20 = 3;
    	a193 = 11;
    	a85 = 34 ;
    	a32 = 36 ;
    	a46 = 33 ;
    	a160 = 34 ;
    	a55 = 33 ;
    	a25 = 10;
    	a119 = 34 ;
    	a154 = 34 ;
    	a126 = 7;
    	a104 = 36 ;
    	a34 = 33 ;
    	a128 = 6;
    	a196 = 8;
    	a45 = 36 ;
    	a180 = 33 ;
    	a136 = 11;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 1187\n");

    if((((a121 == 34 && ((a22 == 9 && a104 == 34) && a69 == 34)) && a46 == 34) && (a39 == 9 && ( cf==1  && (input == 6))))) {
printf("POINT: 1188\n");
    	cf = 0;
printf("POINT: 1189\n");

    	if(((!(a98 == 8) && (a137 == 35 || (a55 == 36 && a31 == 36))) || a68 == 3)) {
printf("POINT: 1190\n");
    	a101 = 35 ;
    	a178 = 34 ;
    	a41 = 33 ;
    	a112 = 34 ;
    	a115 = 33 ;
    	a16 = 15;
    	a25 = 6;
    	a165 = 36 ;
    	a120 = 9;
    	a28 = 9;
    	a118 = 36 ;
    	a109 = 32 ;
    	a88 = 36 ;
    	a34 = 33 ;
    	a169 = 36 ;
    	a90 = 36 ;
    	a37 = 13;
    	a152 = 11;
    	a17 = 36 ;
    	a20 = 7;
    	a127 = 9;
    	a121 = 34 ;
    	a141 = 33 ;
    	a125 = 33 ;
    	a39 = 11;
    	a97 = 6;
    	a153 = 8;
    	a69 = 36 ;
    	a126 = 5;
    	a79 = 5;
    	a46 = 34 ;
    	a32 = 35 ;
    	a0 = 34 ;
    	a135 = 14;
    	a15 = 13;
    	a95 = 11;
    	a22 = 10;
    	a68 = 9;
    	a154 = 34 ;
    	a176 = 9;
    	a1 = 35 ;
    	a140 = 6;
    	a56 = 10;
    	a167 = 1;
    	a184 = 9;
    	a98 = 12; 
    	}else {
printf("POINT: 1192\n");
    	a32 = 35 ;
    	a153 = 10;
    	a144 = 36 ;
    	a3 = 32 ;
    	a2 = 7;
    	a152 = 8;
    	a17 = 34 ;
    	a200 = 35 ;
    	a167 = 7;
    	a128 = 3;
    	a48 = 34 ;
    	a39 = 7;
    	a146 = 34 ;
    	a81 = 10;
    	a46 = 35 ;
    	a90 = 33 ;
    	a84 = 33 ;
    	a180 = 34 ;
    	a105 = 10;
    	a112 = 33 ;
    	a26 = 9;
    	a30 = 34 ;
    	a0 = 35 ;
    	a141 = 33 ;
    	a22 = 11;
    	a55 = 33 ;
    	a118 = 36 ;
    	a53 = 35 ;
    	a34 = 35 ;
    	a20 = 3;
    	a25 = 9;
    	a160 = 34 ;
    	a119 = 34 ;
    	a126 = 8;
    	a115 = 35 ;
    	a15 = 14;
    	a187 = 5;
    	a69 = 34 ;
    	a174 = 14;
    	a193 = 13;
    	a169 = 34 ;
    	a45 = 33 ;
    	a184 = 10;
    	a154 = 34 ;
    	a79 = 9;
    	a134 = 16;
    	a121 = 33 ;
    	a104 = 35 ;
    	a8 = 15;
    	}printf("%d\n", 25);  
    } 
}
 void calculate_outputm14(int input) {
printf("POINT: 1193\n");

    if((a0 == 34 && (a115 == 34 && (a48 == 34 && ((a101 == 34 && ((a197 == 6 &&  cf==1 ) && a179 == 34)) && a20 == 5))))) {
printf("POINT: 1194\n");
printf("POINT: 1195\n");

    	if(((a25 == 6 && (a16 == 11 && ((a20 == 5 && a51 == 34) && a79 == 7))) && (a193 == 9 && (a75 == 6 &&  cf==1 )))) {
printf("POINT: 1196\n");
    		calculate_outputm111(input);
    	} 
printf("POINT: 1197\n");

    	if((((a150 == 6 && (a88 == 34 && ( cf==1  && a75 == 8))) && a193 == 9) && ((a55 == 34 && a160 == 34) && a88 == 34))) {
printf("POINT: 1198\n");
    		calculate_outputm112(input);
    	} 
    } 
printf("POINT: 1199\n");

    if(((a53 == 34 && (a37 == 10 && (a197 == 7 &&  cf==1 ))) && (((a30 == 34 && a112 == 34) && a160 == 34) && a153 == 5))) {
printf("POINT: 1200\n");
printf("POINT: 1201\n");

    	if(((( cf==1  && a42 == 33) && a81 == 12) && (a30 == 34 && (((a131 == 11 && a140 == 6) && a184 == 7) && a55 == 34)))) {
printf("POINT: 1202\n");
    		calculate_outputm113(input);
    	} 
printf("POINT: 1203\n");

    	if(((a101 == 34 && ((a42 == 34 &&  cf==1 ) && a131 == 11)) && (a15 == 11 && ((a167 == 3 && a101 == 34) && a28 == 11)))) {
printf("POINT: 1204\n");
    		calculate_outputm114(input);
    	} 
printf("POINT: 1205\n");

    	if(((a25 == 6 && (a140 == 6 && (a179 == 34 && (a42 == 36 &&  cf==1 )))) && ((a41 == 34 && a56 == 10) && a174 == 9))) {
printf("POINT: 1206\n");
    		calculate_outputm115(input);
    	} 
    } 
printf("POINT: 1207\n");

    if(((( cf==1  && a197 == 8) && a105 == 12) && (a146 == 34 && (a45 == 34 && (a119 == 34 && (a26 == 4 && a32 == 34)))))) {
printf("POINT: 1208\n");
printf("POINT: 1209\n");

    	if(((((a46 == 34 && (a79 == 7 && ( cf==1  && a190 == 11))) && a154 == 34) && a28 == 11) && (a180 == 34 && a16 == 11))) {
printf("POINT: 1210\n");
    		calculate_outputm116(input);
    	} 
printf("POINT: 1211\n");

    	if(((a79 == 7 && (a46 == 34 && a180 == 34)) && (a126 == 5 && (a154 == 34 && (a118 == 34 && ( cf==1  && a190 == 12)))))) {
printf("POINT: 1212\n");
    		calculate_outputm117(input);
    	} 
    } 
}
 void calculate_outputm118(int input) {
printf("POINT: 1213\n");

    if(((a26 == 4 && (((a56 == 10 && (a39 == 9 && a17 == 34)) && a110 == 7) && a120 == 7)) && ( cf==1  && (input == 10)))) {
printf("POINT: 1214\n");
    	cf = 0;
    	a144 = 32 ;
    	a95 = 9;
    	a158 = 7;
    	a105 = 11;
    	a200 = 36 ;
    	a141 = 32 ;
    	a128 = 2;
    	a146 = 32 ;
    	a12 = 32 ;
    	a28 = 10;
    	a140 = 5;
    	a176 = 3;
    	a81 = 11;
    	a137 = 34 ;
    	a2 = 4;
    	a17 = 32 ;
    	a120 = 6;
    	a84 = 32 ;
    	a196 = 6;
    	a65 = 10;
    	a179 = 32 ;
    	a101 = 32 ;
    	a39 = 8;
    	a112 = 32 ;
    	a56 = 9;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1215\n");

    if((((a140 == 6 && ((input == 6) &&  cf==1 )) && a176 == 4) && ((a97 == 5 && (a65 == 11 && a65 == 11)) && a179 == 34))) {
printf("POINT: 1216\n");
    	cf = 0;
    	a112 = 32 ;
    	a196 = 6;
    	a28 = 10;
    	a137 = 34 ;
    	a146 = 32 ;
    	a81 = 11;
    	a17 = 32 ;
    	a179 = 32 ;
    	a84 = 32 ;
    	a12 = 32 ;
    	a95 = 9;
    	a2 = 4;
    	a105 = 11;
    	a101 = 32 ;
    	a140 = 5;
    	a39 = 8;
    	a176 = 3;
    	a65 = 10;
    	a141 = 32 ;
    	a144 = 32 ;
    	a200 = 36 ;
    	a56 = 9;
    	a120 = 6;
    	a128 = 2;
    	a158 = 7;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1217\n");

    if(((((a153 == 5 && a28 == 11) && a144 == 34) && a127 == 8) && ((((input == 7) &&  cf==1 ) && a2 == 5) && a180 == 34))) {
printf("POINT: 1218\n");
    	cf = 0;
    	a179 = 32 ;
    	a137 = 34 ;
    	a81 = 11;
    	a140 = 5;
    	a56 = 9;
    	a158 = 7;
    	a28 = 10;
    	a39 = 8;
    	a141 = 32 ;
    	a176 = 3;
    	a146 = 32 ;
    	a200 = 36 ;
    	a95 = 9;
    	a112 = 32 ;
    	a101 = 32 ;
    	a120 = 6;
    	a84 = 32 ;
    	a144 = 32 ;
    	a196 = 6;
    	a12 = 32 ;
    	a2 = 4;
    	a65 = 10;
    	a17 = 32 ;
    	a128 = 2;
    	a105 = 11;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1219\n");

    if(((a95 == 10 && ( cf==1  && (input == 5))) && (a25 == 6 && ((a169 == 34 && (a53 == 34 && a81 == 12)) && a84 == 34)))) {
printf("POINT: 1220\n");
    	cf = 0;
    	a56 = 9;
    	a95 = 9;
    	a81 = 11;
    	a101 = 32 ;
    	a12 = 32 ;
    	a17 = 32 ;
    	a137 = 34 ;
    	a140 = 5;
    	a128 = 2;
    	a196 = 6;
    	a65 = 10;
    	a39 = 8;
    	a2 = 4;
    	a105 = 11;
    	a200 = 36 ;
    	a141 = 32 ;
    	a158 = 7;
    	a120 = 6;
    	a176 = 3;
    	a28 = 10;
    	a146 = 32 ;
    	a144 = 32 ;
    	a84 = 32 ;
    	a179 = 32 ;
    	a112 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm119(int input) {
printf("POINT: 1221\n");

    if(((a28 == 11 && (a165 == 34 && ((input == 7) &&  cf==1 ))) && (((a101 == 34 && a180 == 34) && a20 == 5) && a2 == 5))) {
printf("POINT: 1222\n");
    	cf = 0;
    	a153 = 5;
    	a126 = 4;
    	a144 = 34 ;
    	a46 = 32 ;
    	a55 = 34 ;
    	a90 = 32 ;
    	a65 = 10;
    	a128 = 3;
    	a184 = 6;
    	a160 = 34 ;
    	a22 = 9;
    	a17 = 32 ;
    	a2 = 5;
    	a179 = 34 ;
    	a119 = 32 ;
    	a196 = 7;
    	a101 = 32 ;
    	a28 = 11;
    	a198 = 33 ;
    	a131 = 10;
    	a68 = 3;
    	a93 = 4;
    	a104 = 32 ;
    	a39 = 9;
    	a200 = 32 ;
    	a34 = 32 ;
    	a154 = 34 ;
    	a12 = 32 ;
    	a37 = 9;
    	a193 = 8;
    	a118 = 32 ;
    	a88 = 32 ;
    	a140 = 6;
    	a141 = 32 ;
    	a167 = 3;
    	a56 = 9;
    	a45 = 32 ;
    	a51 = 32 ;
    	a20 = 4;
    	a180 = 32 ;
    	a105 = 12;
    	a97 = 5;
    	a165 = 32 ;
    	a81 = 11;
    	a53 = 34 ;
    	a30 = 32 ;
    	a174 = 8;
    	a187 = 5;
    	a86 = 34 ;
    	a152 = 10;
    	a125 = 34 ;
    	a48 = 32 ;
    	a32 = 32 ;
    	a146 = 34 ;
    	a110 = 6;
    	a178 = 32 ;
    	a66 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1223\n");

    if(((a101 == 34 && a196 == 7) && ((a37 == 10 && ((((input == 1) &&  cf==1 ) && a153 == 5) && a125 == 34)) && a17 == 34))) {
printf("POINT: 1224\n");
    	cf = 0;
    	a105 = 12;
    	a125 = 34 ;
    	a165 = 32 ;
    	a53 = 32 ;
    	a179 = 34 ;
    	a193 = 8;
    	a101 = 32 ;
    	a93 = 4;
    	a30 = 32 ;
    	a28 = 11;
    	a65 = 10;
    	a131 = 10;
    	a55 = 32 ;
    	a120 = 6;
    	a141 = 34 ;
    	a196 = 6;
    	a184 = 6;
    	a12 = 32 ;
    	a34 = 32 ;
    	a187 = 5;
    	a178 = 32 ;
    	a2 = 5;
    	a41 = 32 ;
    	a95 = 9;
    	a81 = 12;
    	a128 = 3;
    	a146 = 32 ;
    	a169 = 32 ;
    	a153 = 5;
    	a16 = 10;
    	a17 = 32 ;
    	a118 = 32 ;
    	a167 = 3;
    	a48 = 32 ;
    	a88 = 32 ;
    	a86 = 34 ;
    	a180 = 32 ;
    	a110 = 6;
    	a37 = 10;
    	a56 = 9;
    	a104 = 32 ;
    	a174 = 9;
    	a154 = 34 ;
    	a20 = 5;
    	a97 = 5;
    	a22 = 8;
    	a198 = 33 ;
    	a200 = 32 ;
    	a66 = 5; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1225\n");

    if(((((a167 == 3 && ((input == 3) &&  cf==1 )) && a81 == 12) && a180 == 34) && (a2 == 5 && (a110 == 7 && a125 == 34)))) {
printf("POINT: 1226\n");
    	cf = 0;
    	a160 = 34 ;
    	a68 = 3;
    	a179 = 34 ;
    	a152 = 10;
    	a104 = 34 ;
    	a125 = 32 ;
    	a37 = 10;
    	a20 = 4;
    	a141 = 32 ;
    	a84 = 32 ;
    	a176 = 3;
    	a22 = 8;
    	a55 = 32 ;
    	a32 = 34 ;
    	a187 = 4;
    	a169 = 34 ;
    	a45 = 32 ;
    	a184 = 6;
    	a153 = 5;
    	a196 = 6;
    	a15 = 11;
    	a110 = 7;
    	a154 = 34 ;
    	a178 = 32 ;
    	a174 = 9;
    	a26 = 3;
    	a105 = 12;
    	a41 = 34 ;
    	a167 = 2;
    	a144 = 34 ;
    	a43 = 34 ;
    	a165 = 32 ;
    	a112 = 32 ;
    	a46 = 34 ;
    	a101 = 32 ;
    	a39 = 9;
    	a90 = 32 ;
    	a158 = 9;
    	a81 = 12;
    	a25 = 5;
    	a28 = 11;
    	a200 = 36 ;
    	a51 = 34 ;
    	a128 = 2;
    	a146 = 34 ;
    	a53 = 32 ;
    	a95 = 9;
    	a97 = 4;
    	a180 = 32 ;
    	a140 = 6;
    	a120 = 6;
    	a126 = 4;
    	a93 = 4;
    	a2 = 5;
    	a69 = 32 ;
    	a17 = 32 ;
    	a136 = 9; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm120(int input) {
printf("POINT: 1227\n");

    if((a25 == 6 && (a104 == 34 && (((a88 == 34 && (a128 == 3 && ( cf==1  && (input == 10)))) && a150 == 6) && a2 == 5)))) {
printf("POINT: 1228\n");
    	cf = 0;
    	a167 = 1;
    	a118 = 33 ;
    	a179 = 32 ;
    	a0 = 33 ;
    	a32 = 33 ;
    	a160 = 32 ;
    	a22 = 7;
    	a184 = 6;
    	a86 = 35 ;
    	a25 = 5;
    	a146 = 32 ;
    	a95 = 8;
    	a93 = 3;
    	a178 = 33 ;
    	a41 = 32 ;
    	a105 = 11;
    	a127 = 6;
    	a51 = 33 ;
    	a128 = 1;
    	a196 = 5;
    	a144 = 33 ;
    	a53 = 33 ;
    	a88 = 32 ;
    	a104 = 32 ;
    	a165 = 32 ;
    	a2 = 4;
    	a19 = 35 ;
    	a150 = 5;
    	a97 = 4;
    	a200 = 33 ;
    	a45 = 33 ;
    	a180 = 33 ;
    	a187 = 3;
    	a126 = 3;
    	a141 = 32 ;
    	a110 = 5;
    	a79 = 6;
    	a39 = 7;
    	a90 = 33 ;
    	a101 = 32 ;
    	a28 = 9;
    	a16 = 10;
    	a131 = 10;
    	a115 = 32 ;
    	a154 = 32 ;
    	a140 = 4;
    	a120 = 5;
    	a152 = 9;
    	a17 = 32 ;
    	a34 = 32 ;
    	a59 = 5; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1229\n");

    if(((((input == 3) &&  cf==1 ) && a115 == 34) && ((((a22 == 9 && a34 == 34) && a93 == 4) && a152 == 10) && a167 == 3))) {
printf("POINT: 1230\n");
    	cf = 0;
    	a200 = 32 ;
    	a110 = 5;
    	a39 = 7;
    	a17 = 33 ;
    	a160 = 32 ;
    	a169 = 33 ;
    	a101 = 32 ;
    	a104 = 32 ;
    	a20 = 3;
    	a25 = 5;
    	a95 = 9;
    	a12 = 33 ;
    	a22 = 8;
    	a79 = 5;
    	a165 = 32 ;
    	a196 = 5;
    	a131 = 10;
    	a118 = 33 ;
    	a53 = 33 ;
    	a58 = 5;
    	a178 = 32 ;
    	a179 = 32 ;
    	a121 = 32 ;
    	a97 = 3;
    	a154 = 32 ;
    	a150 = 5;
    	a34 = 32 ;
    	a30 = 32 ;
    	a187 = 4;
    	a115 = 32 ;
    	a152 = 9;
    	a198 = 34 ;
    	a176 = 3;
    	a120 = 5;
    	a41 = 32 ;
    	a88 = 33 ;
    	a146 = 32 ;
    	a180 = 32 ;
    	a72 = 5; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1231\n");

    if((((a95 == 10 && (( cf==1  && (input == 6)) && a178 == 34)) && a2 == 5) && ((a169 == 34 && a146 == 34) && a154 == 34))) {
printf("POINT: 1232\n");
    	cf = 0;
    	a150 = 5;
    	a51 = 32 ;
    	a17 = 32 ;
    	a93 = 3;
    	a152 = 9;
    	a22 = 8;
    	a2 = 4;
    	a30 = 32 ;
    	a41 = 32 ;
    	a200 = 36 ;
    	a167 = 2;
    	a187 = 4;
    	a154 = 32 ;
    	a119 = 32 ;
    	a88 = 32 ;
    	a169 = 32 ;
    	a141 = 32 ;
    	a179 = 32 ;
    	a104 = 32 ;
    	a110 = 6;
    	a16 = 11;
    	a178 = 32 ;
    	a105 = 11;
    	a101 = 32 ;
    	a193 = 8;
    	a165 = 32 ;
    	a122 = 35 ;
    	a176 = 3;
    	a115 = 32 ;
    	a95 = 9;
    	a25 = 5;
    	a34 = 32 ;
    	a174 = 8;
    	a69 = 32 ;
    	a160 = 32 ;
    	a125 = 32 ;
    	a36 = 32 ;
    	a196 = 6;
    	a146 = 32 ;
    	a184 = 6;
    	a97 = 4;
    	a180 = 32 ;
    	a15 = 10;
    	a131 = 10;
    	a121 = 32 ;
    	a79 = 6;
    	a84 = 32 ;
    	a128 = 2;
    	a158 = 8; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1233\n");

    if(((a131 == 11 && (a97 == 5 && (a53 == 34 && ( cf==1  && (input == 1))))) && (a25 == 6 && (a51 == 34 && a79 == 7)))) {
printf("POINT: 1234\n");
    	cf = 0;
    	a93 = 3;
    	a167 = 2;
    	a101 = 32 ;
    	a46 = 32 ;
    	a88 = 33 ;
    	a95 = 8;
    	a104 = 32 ;
    	a200 = 33 ;
    	a22 = 7;
    	a174 = 8;
    	a17 = 32 ;
    	a141 = 32 ;
    	a34 = 33 ;
    	a109 = 32 ;
    	a150 = 4;
    	a55 = 32 ;
    	a97 = 4;
    	a152 = 9;
    	a127 = 7;
    	a120 = 6;
    	a39 = 8;
    	a144 = 32 ;
    	a79 = 5;
    	a110 = 5;
    	a41 = 32 ;
    	a186 = 34 ;
    	a51 = 33 ;
    	a86 = 33 ;
    	a53 = 33 ;
    	a187 = 4;
    	a37 = 9;
    	a169 = 32 ;
    	a154 = 33 ;
    	a128 = 1;
    	a140 = 5;
    	a2 = 3;
    	a180 = 32 ;
    	a131 = 9;
    	a65 = 10;
    	a196 = 5;
    	a178 = 32 ;
    	a45 = 32 ;
    	a28 = 10;
    	a25 = 5;
    	a126 = 4;
    	a146 = 33 ;
    	a90 = 32 ;
    	a179 = 33 ;
    	a115 = 32 ;
    	a177 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm121(int input) {
printf("POINT: 1235\n");

    if(((a12 == 34 && (((input == 6) &&  cf==1 ) && a65 == 11)) && (a112 == 34 && (a97 == 5 && (a140 == 6 && a69 == 34))))) {
printf("POINT: 1236\n");
    	cf = 0;
    	a196 = 6;
    	a158 = 7;
    	a146 = 32 ;
    	a69 = 32 ;
    	a174 = 8;
    	a12 = 32 ;
    	a176 = 3;
    	a150 = 5;
    	a105 = 11;
    	a112 = 32 ;
    	a65 = 10;
    	a101 = 32 ;
    	a137 = 34 ;
    	a95 = 9;
    	a141 = 32 ;
    	a179 = 32 ;
    	a140 = 5;
    	a154 = 32 ;
    	a178 = 32 ;
    	a22 = 8;
    	a200 = 36 ;
    	a56 = 9;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1237\n");

    if((((a140 == 6 && a48 == 34) && a93 == 4) && ((a56 == 10 && (a178 == 34 && ( cf==1  && (input == 7)))) && a125 == 34))) {
printf("POINT: 1238\n");
    	cf = 0;
    	a178 = 32 ;
    	a176 = 3;
    	a56 = 9;
    	a196 = 6;
    	a158 = 7;
    	a65 = 10;
    	a12 = 32 ;
    	a137 = 34 ;
    	a200 = 36 ;
    	a174 = 8;
    	a95 = 9;
    	a141 = 32 ;
    	a22 = 8;
    	a112 = 32 ;
    	a69 = 32 ;
    	a140 = 5;
    	a105 = 11;
    	a179 = 32 ;
    	a154 = 32 ;
    	a146 = 32 ;
    	a101 = 32 ;
    	a150 = 5;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm122(int input) {
printf("POINT: 1239\n");

    if(((a184 == 7 && (a46 == 34 && ( cf==1  && (input == 4)))) && (a55 == 34 && (a119 == 34 && (a115 == 34 && a69 == 34))))) {
printf("POINT: 1240\n");
    	cf = 0;
    	a184 = 7;
    	a88 = 32 ;
    	a25 = 5;
    	a97 = 4;
    	a68 = 4;
    	a32 = 32 ;
    	a146 = 34 ;
    	a51 = 32 ;
    	a37 = 10;
    	a180 = 32 ;
    	a103 = 32 ;
    	a104 = 32 ;
    	a26 = 3;
    	a81 = 12;
    	a2 = 4;
    	a187 = 5;
    	a121 = 32 ;
    	a30 = 32 ;
    	a128 = 2;
    	a112 = 34 ;
    	a105 = 11;
    	a93 = 3;
    	a200 = 35 ;
    	a140 = 6;
    	a39 = 9;
    	a196 = 6;
    	a119 = 34 ;
    	a109 = 34 ;
    	a178 = 32 ;
    	a152 = 10;
    	a41 = 34 ;
    	a17 = 34 ;
    	a69 = 32 ;
    	a65 = 10;
    	a53 = 34 ;
    	a45 = 32 ;
    	a20 = 4;
    	a34 = 32 ;
    	a28 = 10;
    	a46 = 34 ;
    	a55 = 32 ;
    	a179 = 34 ;
    	a193 = 8;
    	a101 = 34 ;
    	a134 = 11;
    	a115 = 32 ;
    	a120 = 6;
    	a77 = 12; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1241\n");

    if(((a68 == 4 && ((input == 10) &&  cf==1 )) && (((a152 == 10 && (a104 == 34 && a41 == 34)) && a37 == 10) && a121 == 34))) {
printf("POINT: 1242\n");
    	cf = 0;
    	a37 = 10;
    	a153 = 4;
    	a17 = 34 ;
    	a180 = 34 ;
    	a53 = 32 ;
    	a179 = 32 ;
    	a144 = 32 ;
    	a51 = 32 ;
    	a79 = 6;
    	a128 = 3;
    	a146 = 34 ;
    	a81 = 12;
    	a115 = 32 ;
    	a152 = 9;
    	a97 = 4;
    	a84 = 32 ;
    	a187 = 5;
    	a15 = 10;
    	a178 = 34 ;
    	a196 = 7;
    	a56 = 9;
    	a112 = 34 ;
    	a104 = 34 ;
    	a158 = 11;
    	a23 = 35 ;
    	a69 = 34 ;
    	a28 = 11;
    	a39 = 9;
    	a55 = 34 ;
    	a46 = 34 ;
    	a68 = 4;
    	a140 = 5;
    	a119 = 34 ;
    	a41 = 32 ;
    	a110 = 6;
    	a26 = 3;
    	a105 = 12;
    	a101 = 34 ;
    	a184 = 7;
    	a174 = 8;
    	a200 = 36 ;
    	a127 = 7;
    	a121 = 32 ;
    	a109 = 34 ;
    	a185 = 11; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm123(int input) {
printf("POINT: 1243\n");

    if((((((input == 5) &&  cf==1 ) && a26 == 4) && a160 == 34) && (((a68 == 4 && a146 == 34) && a141 == 34) && a26 == 4))) {
printf("POINT: 1244\n");
    	cf = 0;
    	a17 = 32 ;
    	a41 = 32 ;
    	a105 = 11;
    	a165 = 32 ;
    	a152 = 9;
    	a115 = 32 ;
    	a28 = 10;
    	a68 = 3;
    	a104 = 32 ;
    	a34 = 32 ;
    	a112 = 32 ;
    	a37 = 9;
    	a158 = 7;
    	a109 = 32 ;
    	a101 = 32 ;
    	a131 = 10;
    	a97 = 4;
    	a55 = 32 ;
    	a180 = 32 ;
    	a200 = 36 ;
    	a65 = 10;
    	a120 = 6;
    	a187 = 4;
    	a53 = 32 ;
    	a128 = 2;
    	a26 = 3;
    	a160 = 32 ;
    	a2 = 4;
    	a64 = 16;
    	a51 = 32 ;
    	a189 = 16; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1245\n");

    if(((a152 == 10 && (a180 == 34 && a34 == 34)) && ((a128 == 3 && (a105 == 12 && ( cf==1  && (input == 10)))) && a65 == 11))) {
printf("POINT: 1246\n");
    	cf = 0;
    	a131 = 10;
    	a115 = 32 ;
    	a2 = 4;
    	a112 = 32 ;
    	a26 = 3;
    	a37 = 9;
    	a109 = 32 ;
    	a105 = 11;
    	a97 = 4;
    	a104 = 32 ;
    	a34 = 32 ;
    	a65 = 10;
    	a53 = 32 ;
    	a17 = 32 ;
    	a128 = 2;
    	a180 = 32 ;
    	a158 = 7;
    	a101 = 32 ;
    	a160 = 32 ;
    	a51 = 32 ;
    	a165 = 32 ;
    	a64 = 16;
    	a68 = 3;
    	a55 = 32 ;
    	a120 = 6;
    	a187 = 4;
    	a41 = 32 ;
    	a200 = 36 ;
    	a28 = 10;
    	a152 = 9;
    	a189 = 16; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1247\n");

    if((((((a41 == 34 && a17 == 34) && a34 == 34) && a120 == 7) && a2 == 5) && (a51 == 34 && ( cf==1  && (input == 6))))) {
printf("POINT: 1248\n");
    	cf = 0;
printf("POINT: 1249\n");

    	if((!(a87 == 33) && (a12 == 33 || !(a169 == 32)))) {
printf("POINT: 1250\n");
    	a79 = 7;
    	a153 = 5;
    	a46 = 34 ;
    	a152 = 9;
    	a128 = 2;
    	a16 = 11;
    	a93 = 4;
    	a126 = 5;
    	a121 = 34 ;
    	a97 = 4;
    	a88 = 34 ;
    	a65 = 10;
    	a69 = 34 ;
    	a160 = 32 ;
    	a13 = 5;
    	a17 = 32 ;
    	a37 = 9;
    	a90 = 34 ;
    	a15 = 11;
    	a0 = 34 ;
    	a118 = 34 ;
    	a167 = 3;
    	a20 = 5;
    	a56 = 10;
    	a12 = 34 ;
    	a135 = 8;
    	a127 = 8;
    	a125 = 34 ;
    	a174 = 9;
    	a22 = 9;
    	a48 = 34 ;
    	a32 = 34 ;
    	a28 = 10;
    	a6 = 5; 
    	}else {
printf("POINT: 1252\n");

    	}printf("%d\n", 22);  
    } 
printf("POINT: 1253\n");

    if((((a109 == 34 && a165 == 34) && a55 == 34) && (a115 == 34 && (a37 == 10 && (((input == 4) &&  cf==1 ) && a101 == 34))))) {
printf("POINT: 1254\n");
    	cf = 0;
    	a193 = 8;
    	a121 = 34 ;
    	a95 = 10;
    	a32 = 34 ;
    	a20 = 5;
    	a34 = 32 ;
    	a135 = 15;
    	a131 = 10;
    	a169 = 34 ;
    	a48 = 34 ;
    	a93 = 4;
    	a154 = 34 ;
    	a46 = 34 ;
    	a157 = 11;
    	a69 = 34 ;
    	a81 = 12;
    	a120 = 6;
    	a88 = 34 ;
    	a178 = 34 ;
    	a79 = 7;
    	a98 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm15(int input) {
printf("POINT: 1255\n");

    if(((a104 == 34 && (((a26 == 4 && a112 == 34) && a141 == 34) && a127 == 8)) && (a176 == 4 && (a94 == 33 &&  cf==1 )))) {
printf("POINT: 1256\n");
printf("POINT: 1257\n");

    	if(((((a41 == 34 && a12 == 34) && a101 == 34) && a169 == 34) && (a128 == 3 && (( cf==1  && a151 == 34) && a120 == 7)))) {
printf("POINT: 1258\n");
    		calculate_outputm118(input);
    	} 
    } 
printf("POINT: 1259\n");

    if(((a141 == 34 && (a154 == 34 && (a184 == 7 && a22 == 9))) && (a180 == 34 && (a174 == 9 && (a94 == 32 &&  cf==1 ))))) {
printf("POINT: 1260\n");
printf("POINT: 1261\n");

    	if(((((a154 == 34 && a55 == 34) && a178 == 34) && a128 == 3) && (a93 == 4 && ((a156 == 6 &&  cf==1 ) && a20 == 5)))) {
printf("POINT: 1262\n");
    		calculate_outputm119(input);
    	} 
printf("POINT: 1263\n");

    	if(((a110 == 7 && (a174 == 9 && a41 == 34)) && (((( cf==1  && a156 == 7) && a17 == 34) && a180 == 34) && a146 == 34))) {
printf("POINT: 1264\n");
    		calculate_outputm120(input);
    	} 
printf("POINT: 1265\n");

    	if(((a176 == 4 && a127 == 8) && (a150 == 6 && ((a95 == 10 && (a105 == 12 && ( cf==1  && a156 == 11))) && a109 == 34)))) {
printf("POINT: 1266\n");
    		calculate_outputm121(input);
    	} 
    } 
printf("POINT: 1267\n");

    if(((a17 == 34 && (a115 == 34 && (a128 == 3 && a28 == 11))) && (a140 == 6 && (( cf==1  && a94 == 36) && a39 == 9)))) {
printf("POINT: 1268\n");
printf("POINT: 1269\n");

    	if(((((a81 == 12 && (a100 == 32 &&  cf==1 )) && a178 == 34) && a109 == 34) && (a51 == 34 && (a112 == 34 && a26 == 4)))) {
printf("POINT: 1270\n");
    		calculate_outputm122(input);
    	} 
printf("POINT: 1271\n");

    	if((((a131 == 11 && a165 == 34) && a140 == 6) && ((a193 == 9 && (a112 == 34 && ( cf==1  && a100 == 36))) && a119 == 34))) {
printf("POINT: 1272\n");
    		calculate_outputm123(input);
    	} 
    } 
}
 void calculate_outputm124(int input) {
printf("POINT: 1273\n");

    if(((a39 == 9 && a127 == 8) && ((a34 == 34 && (a22 == 9 && (a141 == 34 && ((input == 4) &&  cf==1 )))) && a45 == 34))) {
printf("POINT: 1274\n");
    	cf = 0;
    	a93 = 4;
    	a121 = 34 ;
    	a2 = 5;
    	a126 = 4;
    	a152 = 10;
    	a28 = 11;
    	a48 = 34 ;
    	a178 = 34 ;
    	a128 = 3;
    	a34 = 32 ;
    	a160 = 34 ;
    	a22 = 8;
    	a51 = 34 ;
    	a157 = 11;
    	a81 = 12;
    	a41 = 34 ;
    	a97 = 5;
    	a32 = 34 ;
    	a193 = 8;
    	a37 = 10;
    	a120 = 6;
    	a12 = 32 ;
    	a65 = 11;
    	a135 = 15;
    	a154 = 34 ;
    	a46 = 34 ;
    	a17 = 34 ;
    	a153 = 4;
    	a26 = 4;
    	a95 = 10;
    	a118 = 32 ;
    	a15 = 10;
    	a127 = 7;
    	a169 = 34 ;
    	a98 = 8; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1275\n");

    if(((a165 == 34 && ((input == 6) &&  cf==1 )) && (((a120 == 7 && (a115 == 34 && a68 == 4)) && a119 == 34) && a193 == 9))) {
printf("POINT: 1276\n");
    	cf = 0;
printf("POINT: 1277\n");

    	if(((!(a190 == 14) && (a141 == 34 || a68 == 4)) || a164 == 13)) {
printf("POINT: 1278\n");
    	a0 = 34 ;
    	a48 = 34 ;
    	a125 = 34 ;
    	a56 = 10;
    	a41 = 34 ;
    	a167 = 3;
    	a174 = 9;
    	a135 = 8;
    	a13 = 5;
    	a16 = 11;
    	a2 = 5;
    	a90 = 34 ;
    	a26 = 4;
    	a121 = 34 ;
    	a32 = 34 ;
    	a93 = 4;
    	a51 = 34 ;
    	a131 = 11;
    	a46 = 34 ;
    	a6 = 5; 
    	}else {
printf("POINT: 1280\n");
    	a22 = 8;
    	a2 = 5;
    	a88 = 32 ;
    	a26 = 4;
    	a28 = 11;
    	a127 = 7;
    	a153 = 4;
    	a20 = 4;
    	a152 = 10;
    	a17 = 34 ;
    	a79 = 6;
    	a37 = 10;
    	a100 = 36 ;
    	a118 = 32 ;
    	a126 = 4;
    	a51 = 34 ;
    	a131 = 11;
    	a94 = 36 ;
    	a12 = 32 ;
    	a128 = 3;
    	a41 = 34 ;
    	a160 = 34 ;
    	a69 = 32 ;
    	a15 = 10;
    	a65 = 11;
    	a97 = 5;
    	a135 = 12;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1281\n");

    if(((a112 == 34 && ( cf==1  && (input == 5))) && (a68 == 4 && (a118 == 34 && (a34 == 34 && (a34 == 34 && a15 == 11)))))) {
printf("POINT: 1282\n");
    	cf = 0;
    	a118 = 32 ;
    	a115 = 32 ;
    	a15 = 10;
    	a69 = 32 ;
    	a105 = 11;
    	a127 = 7;
    	a88 = 32 ;
    	a34 = 32 ;
    	a101 = 32 ;
    	a22 = 8;
    	a104 = 32 ;
    	a112 = 32 ;
    	a53 = 32 ;
    	a68 = 3;
    	a79 = 6;
    	a120 = 6;
    	a187 = 4;
    	a64 = 16;
    	a126 = 4;
    	a158 = 7;
    	a180 = 32 ;
    	a55 = 32 ;
    	a165 = 32 ;
    	a200 = 36 ;
    	a12 = 32 ;
    	a109 = 32 ;
    	a153 = 4;
    	a20 = 4;
    	a189 = 16; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1283\n");

    if(((a153 == 5 && (a55 == 34 && a22 == 9)) && (((a119 == 34 && ( cf==1  && (input == 10))) && a79 == 7) && a105 == 12))) {
printf("POINT: 1284\n");
    	cf = 0;
    	a165 = 32 ;
    	a34 = 32 ;
    	a158 = 7;
    	a22 = 8;
    	a109 = 32 ;
    	a101 = 32 ;
    	a153 = 4;
    	a53 = 32 ;
    	a15 = 10;
    	a88 = 32 ;
    	a200 = 36 ;
    	a64 = 16;
    	a55 = 32 ;
    	a126 = 4;
    	a12 = 32 ;
    	a187 = 4;
    	a112 = 32 ;
    	a105 = 11;
    	a104 = 32 ;
    	a115 = 32 ;
    	a118 = 32 ;
    	a79 = 6;
    	a68 = 3;
    	a180 = 32 ;
    	a127 = 7;
    	a69 = 32 ;
    	a120 = 6;
    	a20 = 4;
    	a189 = 16; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm125(int input) {
printf("POINT: 1285\n");

    if((((((input == 6) &&  cf==1 ) && a125 == 34) && a53 == 34) && (a154 == 34 && ((a37 == 10 && a196 == 7) && a41 == 34)))) {
printf("POINT: 1286\n");
    	cf = 0;
    	a126 = 4;
    	a158 = 6;
    	a41 = 32 ;
    	a125 = 32 ;
    	a51 = 32 ;
    	a200 = 36 ;
    	a105 = 11;
    	a196 = 6;
    	a174 = 8;
    	a68 = 3;
    	a20 = 4;
    	a47 = 36 ;
    	a118 = 32 ;
    	a193 = 8;
    	a59 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1287\n");

    if(((((input == 9) &&  cf==1 ) && a101 == 34) && (a118 == 34 && ((a41 == 34 && (a115 == 34 && a68 == 4)) && a26 == 4)))) {
printf("POINT: 1288\n");
    	cf = 0;
    	a193 = 9;
    	a154 = 34 ;
    	a131 = 10;
    	a51 = 34 ;
    	a169 = 34 ;
    	a12 = 32 ;
    	a68 = 4;
    	a165 = 32 ;
    	a46 = 34 ;
    	a0 = 34 ;
    	a93 = 3;
    	a88 = 32 ;
    	a126 = 5;
    	a109 = 34 ;
    	a20 = 5;
    	a2 = 4;
    	a65 = 11;
    	a25 = 6;
    	a179 = 34 ;
    	a34 = 34 ;
    	a115 = 34 ;
    	a15 = 11;
    	a95 = 10;
    	a176 = 3;
    	a127 = 8;
    	a55 = 34 ;
    	a141 = 32 ;
    	a30 = 32 ;
    	a120 = 7;
    	a119 = 32 ;
    	a144 = 34 ;
    	a41 = 34 ;
    	a125 = 34 ;
    	a79 = 7;
    	a26 = 4;
    	a13 = 7;
    	a45 = 32 ;
    	a135 = 8;
    	a32 = 34 ;
    	a84 = 33 ;
    	a152 = 10;
    	a101 = 34 ;
    	a178 = 34 ;
    	a24 = 7; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1289\n");

    if((((a51 == 34 && (a120 == 7 && a174 == 9)) && a56 == 10) && ((a65 == 11 && ((input == 7) &&  cf==1 )) && a79 == 7))) {
printf("POINT: 1290\n");
    	cf = 0;
    	a55 = 32 ;
    	a174 = 9;
    	a176 = 3;
    	a121 = 34 ;
    	a135 = 10;
    	a48 = 34 ;
    	a127 = 7;
    	a79 = 7;
    	a46 = 32 ;
    	a150 = 6;
    	a110 = 7;
    	a28 = 11;
    	a34 = 32 ;
    	a12 = 34 ;
    	a2 = 4;
    	a126 = 5;
    	a184 = 7;
    	a41 = 34 ;
    	a45 = 34 ;
    	a178 = 34 ;
    	a171 = 7;
    	a140 = 6;
    	a101 = 34 ;
    	a0 = 32 ;
    	a30 = 32 ;
    	a160 = 34 ;
    	a153 = 5;
    	a93 = 3;
    	a84 = 32 ;
    	a119 = 32 ;
    	a165 = 32 ;
    	a22 = 9;
    	a141 = 32 ;
    	a131 = 10;
    	a20 = 5;
    	a95 = 9;
    	a39 = 9;
    	a26 = 4;
    	a17 = 34 ;
    	a128 = 3;
    	a115 = 34 ;
    	a120 = 7;
    	a118 = 34 ;
    	a167 = 3;
    	a88 = 32 ;
    	a50 = 3; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm16(int input) {
printf("POINT: 1291\n");

    if(((((a86 == 33 &&  cf==1 ) && a126 == 5) && a109 == 34) && ((a22 == 9 && (a84 == 34 && a22 == 9)) && a120 == 7))) {
printf("POINT: 1292\n");
printf("POINT: 1293\n");

    	if(((( cf==1  && a9 == 34) && a140 == 6) && (a179 == 34 && (a88 == 34 && ((a55 == 34 && a12 == 34) && a84 == 34))))) {
printf("POINT: 1294\n");
    		calculate_outputm124(input);
    	} 
    } 
printf("POINT: 1295\n");

    if(((a15 == 11 && (a193 == 9 && (a86 == 32 &&  cf==1 ))) && (a97 == 5 && (a144 == 34 && (a105 == 12 && a193 == 9))))) {
printf("POINT: 1296\n");
printf("POINT: 1297\n");

    	if(((a56 == 10 && (( cf==1  && a151 == 35) && a101 == 34)) && (((a25 == 6 && a120 == 7) && a126 == 5) && a169 == 34))) {
printf("POINT: 1298\n");
    		calculate_outputm125(input);
    	} 
    } 
}
 void calculate_outputm126(int input) {
printf("POINT: 1299\n");

    if(((a140 == 6 && a41 == 34) && (a22 == 9 && (a112 == 34 && ((a105 == 12 && ((input == 4) &&  cf==1 )) && a0 == 34))))) {
printf("POINT: 1300\n");
    	cf = 0;
    	a126 = 4;
    	a179 = 32 ;
    	a32 = 34 ;
    	a120 = 6;
    	a93 = 3;
    	a178 = 32 ;
    	a154 = 34 ;
    	a88 = 32 ;
    	a95 = 10;
    	a174 = 8;
    	a131 = 10;
    	a141 = 32 ;
    	a165 = 32 ;
    	a152 = 9;
    	a69 = 32 ;
    	a169 = 32 ;
    	a51 = 32 ;
    	a2 = 4;
    	a125 = 32 ;
    	a90 = 32 ;
    	a144 = 34 ;
    	a25 = 5;
    	a150 = 5;
    	a15 = 10;
    	a135 = 11;
    	a20 = 4;
    	a41 = 32 ;
    	a34 = 34 ;
    	a0 = 32 ;
    	a118 = 34 ;
    	a101 = 34 ;
    	a39 = 9;
    	a197 = 8;
    	a110 = 7;
    	a160 = 34 ;
    	a56 = 10;
    	a68 = 3;
    	a37 = 9;
    	a65 = 11;
    	a193 = 7;
    	a184 = 6;
    	a167 = 2;
    	a176 = 3;
    	a79 = 7;
    	a12 = 32 ;
    	a84 = 33 ;
    	a190 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1301\n");

    if(((a165 == 34 && a17 == 34) && (((a179 == 34 && (a30 == 34 && ((input == 7) &&  cf==1 ))) && a12 == 34) && a25 == 6))) {
printf("POINT: 1302\n");
    	cf = 0;
    	a46 = 32 ;
    	a45 = 32 ;
    	a104 = 32 ;
    	a200 = 32 ;
    	a127 = 7;
    	a146 = 32 ;
    	a86 = 32 ;
    	a180 = 32 ;
    	a84 = 32 ;
    	a125 = 32 ;
    	a81 = 11;
    	a0 = 32 ;
    	a115 = 32 ;
    	a126 = 4;
    	a51 = 32 ;
    	a176 = 3;
    	a198 = 33 ;
    	a187 = 4;
    	a22 = 8;
    	a69 = 32 ;
    	a131 = 10;
    	a16 = 10;
    	a178 = 32 ;
    	a26 = 3;
    	a93 = 3;
    	a154 = 32 ;
    	a15 = 10;
    	a12 = 32 ;
    	a160 = 32 ;
    	a150 = 5;
    	a68 = 3;
    	a167 = 2;
    	a95 = 9;
    	a28 = 10;
    	a181 = 15; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1303\n");

    if(((( cf==1  && (input == 5)) && a88 == 34) && ((a167 == 3 && (a69 == 34 && (a176 == 4 && a131 == 11))) && a115 == 34))) {
printf("POINT: 1304\n");
    	cf = 0;
    	a180 = 33 ;
    	a69 = 33 ;
    	a152 = 8;
    	a30 = 33 ;
    	a17 = 33 ;
    	a53 = 33 ;
    	a0 = 33 ;
    	a174 = 7;
    	a22 = 7;
    	a26 = 2;
    	a86 = 32 ;
    	a12 = 33 ;
    	a45 = 33 ;
    	a187 = 3;
    	a112 = 33 ;
    	a41 = 33 ;
    	a200 = 33 ;
    	a84 = 33 ;
    	a104 = 33 ;
    	a131 = 9;
    	a115 = 33 ;
    	a77 = 9;
    	a147 = 5; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1305\n");

    if((((a28 == 11 && ((a141 == 34 && ( cf==1  && (input == 3))) && a25 == 6)) && a55 == 34) && (a25 == 6 && a152 == 10))) {
printf("POINT: 1306\n");
    	cf = 0;
    	a26 = 2;
    	a174 = 7;
    	a180 = 33 ;
    	a115 = 33 ;
    	a112 = 33 ;
    	a17 = 33 ;
    	a12 = 33 ;
    	a84 = 33 ;
    	a200 = 33 ;
    	a0 = 33 ;
    	a152 = 8;
    	a41 = 33 ;
    	a22 = 7;
    	a77 = 9;
    	a69 = 33 ;
    	a104 = 33 ;
    	a131 = 9;
    	a30 = 33 ;
    	a86 = 32 ;
    	a45 = 33 ;
    	a187 = 3;
    	a53 = 33 ;
    	a147 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm127(int input) {
printf("POINT: 1307\n");

    if(((a109 == 34 && (((a187 == 5 && a176 == 4) && a119 == 34) && a126 == 5)) && (a56 == 10 && ( cf==1  && (input == 9))))) {
printf("POINT: 1308\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm128(int input) {
printf("POINT: 1309\n");

    if(((a39 == 9 && ((((input == 4) &&  cf==1 ) && a41 == 34) && a110 == 7)) && ((a179 == 34 && a32 == 34) && a41 == 34))) {
printf("POINT: 1310\n");
    	cf = 0;
    	a115 = 32 ;
    	a39 = 8;
    	a79 = 6;
    	a187 = 4;
    	a16 = 10;
    	a129 = 36 ;
    	a53 = 32 ;
    	a140 = 5;
    	a169 = 32 ;
    	a120 = 6;
    	a12 = 32 ;
    	a121 = 32 ;
    	a153 = 4;
    	a125 = 32 ;
    	a154 = 32 ;
    	a105 = 11;
    	a109 = 32 ;
    	a26 = 3;
    	a179 = 32 ;
    	a97 = 4;
    	a128 = 2;
    	a81 = 11;
    	a141 = 32 ;
    	a68 = 3;
    	a152 = 9;
    	a46 = 34 ;
    	a174 = 8;
    	a150 = 5;
    	a126 = 4;
    	a122 = 36 ;
    	a45 = 32 ;
    	a2 = 4;
    	a84 = 32 ;
    	a65 = 10;
    	a110 = 6;
    	a160 = 32 ;
    	a144 = 32 ;
    	a22 = 8;
    	a37 = 9;
    	a167 = 2;
    	a200 = 36 ;
    	a32 = 32 ;
    	a48 = 32 ;
    	a180 = 32 ;
    	a15 = 10;
    	a20 = 4;
    	a158 = 8; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1311\n");

    if(((((a12 == 34 && a68 == 4) && a141 == 34) && a180 == 34) && ((a45 == 34 && ( cf==1  && (input == 10))) && a112 == 34))) {
printf("POINT: 1312\n");
    	cf = 0;
    	a30 = 32 ;
    	a45 = 32 ;
    	a151 = 35 ;
    	a86 = 32 ;
    	a2 = 4;
    	a12 = 32 ;
    	a135 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1313\n");

    if(((((a84 == 34 && ((input == 9) &&  cf==1 )) && a65 == 11) && a146 == 34) && (a104 == 34 && (a30 == 34 && a150 == 6)))) {
printf("POINT: 1314\n");
    	cf = 0;
    	a20 = 4;
    	a153 = 4;
    	a65 = 10;
    	a169 = 32 ;
    	a105 = 11;
    	a174 = 8;
    	a97 = 4;
    	a160 = 32 ;
    	a115 = 32 ;
    	a15 = 10;
    	a129 = 36 ;
    	a144 = 32 ;
    	a179 = 32 ;
    	a126 = 4;
    	a68 = 3;
    	a37 = 9;
    	a167 = 2;
    	a140 = 5;
    	a110 = 6;
    	a26 = 3;
    	a121 = 32 ;
    	a46 = 34 ;
    	a200 = 36 ;
    	a12 = 32 ;
    	a128 = 2;
    	a150 = 5;
    	a84 = 32 ;
    	a122 = 36 ;
    	a53 = 32 ;
    	a32 = 32 ;
    	a154 = 32 ;
    	a22 = 8;
    	a180 = 32 ;
    	a81 = 11;
    	a45 = 32 ;
    	a120 = 6;
    	a141 = 32 ;
    	a79 = 6;
    	a187 = 4;
    	a109 = 32 ;
    	a39 = 8;
    	a2 = 4;
    	a125 = 32 ;
    	a48 = 32 ;
    	a152 = 9;
    	a16 = 10;
    	a158 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1315\n");

    if(((a112 == 34 && ((a179 == 34 && ((a146 == 34 && a104 == 34) && a154 == 34)) && a39 == 9)) && ((input == 3) &&  cf==1 ))) {
printf("POINT: 1316\n");
    	cf = 0;
    	a25 = 5;
    	a37 = 9;
    	a141 = 32 ;
    	a84 = 33 ;
    	a15 = 10;
    	a127 = 8;
    	a2 = 4;
    	a95 = 10;
    	a126 = 4;
    	a109 = 32 ;
    	a55 = 34 ;
    	a193 = 7;
    	a184 = 6;
    	a81 = 10;
    	a135 = 11;
    	a46 = 34 ;
    	a121 = 32 ;
    	a51 = 32 ;
    	a20 = 4;
    	a169 = 32 ;
    	a167 = 2;
    	a150 = 5;
    	a69 = 32 ;
    	a174 = 8;
    	a119 = 34 ;
    	a120 = 6;
    	a197 = 8;
    	a153 = 4;
    	a179 = 32 ;
    	a125 = 32 ;
    	a68 = 3;
    	a90 = 32 ;
    	a41 = 32 ;
    	a12 = 32 ;
    	a48 = 32 ;
    	a34 = 34 ;
    	a152 = 9;
    	a190 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm129(int input) {
printf("POINT: 1317\n");

    if(((a193 == 9 && (( cf==1  && (input == 4)) && a109 == 34)) && (a81 == 12 && (a165 == 34 && (a2 == 5 && a45 == 34))))) {
printf("POINT: 1318\n");
    	cf = 0;
    	a41 = 32 ;
    	a176 = 3;
    	a180 = 32 ;
    	a69 = 32 ;
    	a144 = 32 ;
    	a20 = 4;
    	a97 = 4;
    	a105 = 11;
    	a31 = 33 ;
    	a165 = 32 ;
    	a25 = 5;
    	a88 = 32 ;
    	a39 = 8;
    	a127 = 7;
    	a200 = 35 ;
    	a101 = 32 ;
    	a193 = 8;
    	a26 = 3;
    	a81 = 11;
    	a125 = 32 ;
    	a120 = 6;
    	a94 = 32 ;
    	a169 = 32 ;
    	a126 = 4;
    	a22 = 8;
    	a187 = 4;
    	a119 = 32 ;
    	a109 = 32 ;
    	a55 = 32 ;
    	a28 = 10;
    	a32 = 32 ;
    	a48 = 32 ;
    	a30 = 32 ;
    	a46 = 32 ;
    	a128 = 2;
    	a2 = 4;
    	a160 = 32 ;
    	a196 = 6;
    	a45 = 32 ;
    	a104 = 32 ;
    	a178 = 32 ;
    	a68 = 3;
    	a174 = 8;
    	a146 = 32 ;
    	a53 = 32 ;
    	a134 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1319\n");

    if(((a120 == 7 && a104 == 34) && (a97 == 5 && (a55 == 34 && (a174 == 9 && (a105 == 12 && ( cf==1  && (input == 7)))))))) {
printf("POINT: 1320\n");
    	cf = 0;
    	a196 = 6;
    	a193 = 8;
    	a160 = 32 ;
    	a97 = 4;
    	a84 = 32 ;
    	a146 = 32 ;
    	a53 = 32 ;
    	a165 = 32 ;
    	a28 = 10;
    	a45 = 32 ;
    	a26 = 3;
    	a180 = 32 ;
    	a200 = 36 ;
    	a30 = 32 ;
    	a187 = 4;
    	a120 = 6;
    	a144 = 32 ;
    	a158 = 11;
    	a104 = 32 ;
    	a37 = 9;
    	a174 = 8;
    	a128 = 2;
    	a109 = 32 ;
    	a48 = 32 ;
    	a55 = 32 ;
    	a2 = 4;
    	a89 = 32 ;
    	a105 = 11;
    	a119 = 32 ;
    	a81 = 11;
    	a185 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm130(int input) {
printf("POINT: 1321\n");

    if((((a34 == 34 && (a120 == 7 && ((input == 4) &&  cf==1 ))) && a150 == 6) && (a39 == 9 && (a0 == 34 && a16 == 11)))) {
printf("POINT: 1322\n");
    	cf = 0;
    	a16 = 10;
    	a160 = 33 ;
    	a41 = 32 ;
    	a39 = 8;
    	a128 = 2;
    	a125 = 33 ;
    	a200 = 36 ;
    	a144 = 32 ;
    	a17 = 33 ;
    	a45 = 33 ;
    	a196 = 5;
    	a62 = 11;
    	a174 = 8;
    	a120 = 6;
    	a34 = 32 ;
    	a140 = 5;
    	a37 = 9;
    	a0 = 32 ;
    	a46 = 33 ;
    	a146 = 32 ;
    	a110 = 5;
    	a167 = 2;
    	a20 = 4;
    	a26 = 3;
    	a55 = 33 ;
    	a93 = 3;
    	a180 = 33 ;
    	a158 = 12;
    	a115 = 32 ;
    	a65 = 9;
    	a105 = 11;
    	a165 = 32 ;
    	a119 = 33 ;
    	a150 = 5;
    	a178 = 32 ;
    	a53 = 32 ;
    	a152 = 9;
    	a69 = 32 ;
    	a118 = 32 ;
    	a79 = 6;
    	a112 = 32 ;
    	a187 = 4;
    	a81 = 11;
    	a184 = 6;
    	a104 = 32 ;
    	a2 = 4;
    	a193 = 7;
    	a97 = 4;
    	a22 = 7;
    	a84 = 33 ;
    	a49 = 9; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1323\n");

    if(((a69 == 34 && a118 == 34) && ((a115 == 34 && (a69 == 34 && (a193 == 9 && ((input == 1) &&  cf==1 )))) && a45 == 34))) {
printf("POINT: 1324\n");
    	cf = 0;
    	a118 = 32 ;
    	a150 = 5;
    	a127 = 7;
    	a109 = 32 ;
    	a165 = 32 ;
    	a69 = 32 ;
    	a125 = 32 ;
    	a115 = 32 ;
    	a167 = 2;
    	a153 = 4;
    	a97 = 4;
    	a22 = 8;
    	a37 = 9;
    	a79 = 6;
    	a179 = 32 ;
    	a30 = 32 ;
    	a53 = 32 ;
    	a152 = 9;
    	a35 = 33 ;
    	a32 = 32 ;
    	a105 = 11;
    	a81 = 11;
    	a180 = 32 ;
    	a140 = 5;
    	a68 = 3;
    	a93 = 3;
    	a126 = 4;
    	a196 = 6;
    	a120 = 6;
    	a28 = 11;
    	a0 = 32 ;
    	a119 = 32 ;
    	a34 = 32 ;
    	a178 = 32 ;
    	a174 = 8;
    	a55 = 32 ;
    	a45 = 32 ;
    	a169 = 32 ;
    	a26 = 4;
    	a131 = 10;
    	a88 = 32 ;
    	a20 = 4;
    	a17 = 32 ;
    	a104 = 32 ;
    	a128 = 2;
    	a41 = 32 ;
    	a193 = 8;
    	a141 = 32 ;
    	a16 = 10;
    	a198 = 34 ;
    	a39 = 8;
    	a187 = 4;
    	a95 = 9;
    	a154 = 32 ;
    	a200 = 32 ;
    	a146 = 32 ;
    	a12 = 32 ;
    	a84 = 32 ;
    	a112 = 32 ;
    	a58 = 7; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm131(int input) {
printf("POINT: 1325\n");

    if((((a174 == 9 && (a34 == 34 && a28 == 11)) && a160 == 34) && ((a95 == 10 && ((input == 7) &&  cf==1 )) && a104 == 34))) {
printf("POINT: 1326\n");
    	cf = 0;
    	a165 = 32 ;
    	a196 = 6;
    	a193 = 8;
    	a79 = 6;
    	a34 = 32 ;
    	a146 = 32 ;
    	a0 = 32 ;
    	a128 = 2;
    	a137 = 34 ;
    	a17 = 32 ;
    	a121 = 32 ;
    	a174 = 8;
    	a179 = 32 ;
    	a22 = 8;
    	a95 = 9;
    	a154 = 32 ;
    	a178 = 32 ;
    	a158 = 7;
    	a84 = 32 ;
    	a28 = 10;
    	a200 = 36 ;
    	a20 = 4;
    	a64 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1327\n");

    if(((a121 == 34 && (a26 == 4 && a0 == 34)) && ((a84 == 34 && (a178 == 34 && ((input == 4) &&  cf==1 ))) && a193 == 9))) {
printf("POINT: 1328\n");
    	cf = 0;
    	a30 = 32 ;
    	a90 = 32 ;
    	a125 = 34 ;
    	a144 = 32 ;
    	a2 = 4;
    	a56 = 9;
    	a25 = 6;
    	a112 = 32 ;
    	a120 = 6;
    	a16 = 10;
    	a46 = 32 ;
    	a88 = 32 ;
    	a12 = 32 ;
    	a126 = 4;
    	a81 = 11;
    	a110 = 7;
    	a169 = 34 ;
    	a152 = 10;
    	a41 = 34 ;
    	a119 = 32 ;
    	a109 = 34 ;
    	a140 = 5;
    	a15 = 11;
    	a32 = 34 ;
    	a68 = 3;
    	a131 = 10;
    	a69 = 32 ;
    	a55 = 32 ;
    	a127 = 8;
    	a105 = 11;
    	a153 = 5;
    	a118 = 34 ;
    	a65 = 10;
    	a184 = 7;
    	a45 = 32 ;
    	a39 = 8;
    	a176 = 3;
    	a115 = 32 ;
    	a141 = 32 ;
    	a101 = 32 ;
    	a51 = 32 ;
    	a48 = 34 ;
    	a150 = 5; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1329\n");

    if(((a154 == 34 && (a22 == 9 && (a93 == 4 && a84 == 34))) && ((a179 == 34 && ( cf==1  && (input == 10))) && a37 == 10))) {
printf("POINT: 1330\n");
    	cf = 0;
    	a158 = 7;
    	a128 = 2;
    	a34 = 32 ;
    	a79 = 6;
    	a196 = 6;
    	a22 = 8;
    	a146 = 32 ;
    	a28 = 10;
    	a0 = 32 ;
    	a154 = 32 ;
    	a121 = 32 ;
    	a137 = 34 ;
    	a200 = 36 ;
    	a95 = 9;
    	a165 = 32 ;
    	a179 = 32 ;
    	a174 = 8;
    	a178 = 32 ;
    	a193 = 8;
    	a20 = 4;
    	a84 = 32 ;
    	a17 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm17(int input) {
printf("POINT: 1331\n");

    if((((a127 == 8 && (((a84 == 34 && a0 == 34) && a179 == 34) && a25 == 6)) && a90 == 34) && (a98 == 7 &&  cf==1 ))) {
printf("POINT: 1332\n");
printf("POINT: 1333\n");

    	if((((a68 == 4 && ((( cf==1  && a91 == 36) && a45 == 34) && a127 == 8)) && a69 == 34) && (a196 == 7 && a0 == 34))) {
printf("POINT: 1334\n");
    		calculate_outputm126(input);
    	} 
    } 
printf("POINT: 1335\n");

    if(((a115 == 34 && a2 == 5) && ((a126 == 5 && (a15 == 11 && (( cf==1  && a98 == 8) && a90 == 34))) && a65 == 11))) {
printf("POINT: 1336\n");
printf("POINT: 1337\n");

    	if(((a165 == 34 && (((a144 == 34 && (a128 == 3 && (a175 == 9 &&  cf==1 ))) && a16 == 11) && a154 == 34)) && a193 == 9)) {
printf("POINT: 1338\n");
    		calculate_outputm127(input);
    	} 
printf("POINT: 1339\n");

    	if(((a196 == 7 && ((( cf==1  && a175 == 15) && a84 == 34) && a51 == 34)) && (a141 == 34 && (a152 == 10 && a112 == 34)))) {
printf("POINT: 1340\n");
    		calculate_outputm128(input);
    	} 
    } 
printf("POINT: 1341\n");

    if(((a146 == 34 && (a160 == 34 && (a30 == 34 && a48 == 34))) && ((( cf==1  && a98 == 12) && a180 == 34) && a28 == 11))) {
printf("POINT: 1342\n");
printf("POINT: 1343\n");

    	if((((( cf==1  && a1 == 35) && a26 == 4) && a119 == 34) && ((a48 == 34 && (a84 == 34 && a144 == 34)) && a128 == 3))) {
printf("POINT: 1344\n");
    		calculate_outputm129(input);
    	} 
    } 
printf("POINT: 1345\n");

    if((((a20 == 5 && a165 == 34) && a167 == 3) && (a128 == 3 && (a17 == 34 && (( cf==1  && a98 == 13) && a37 == 10))))) {
printf("POINT: 1346\n");
printf("POINT: 1347\n");

    	if((((a64 == 9 &&  cf==1 ) && a118 == 34) && (a179 == 34 && (a120 == 7 && (a178 == 34 && (a112 == 34 && a45 == 34)))))) {
printf("POINT: 1348\n");
    		calculate_outputm130(input);
    	} 
printf("POINT: 1349\n");

    	if(((a22 == 9 && (a79 == 7 && ((a174 == 9 && a93 == 4) && a104 == 34))) && (a17 == 34 && (a64 == 11 &&  cf==1 )))) {
printf("POINT: 1350\n");
    		calculate_outputm131(input);
    	} 
    } 
}
 void calculate_outputm132(int input) {
printf("POINT: 1351\n");

    if(((a15 == 11 && (a141 == 34 && ((( cf==1  && (input == 7)) && a45 == 34) && a39 == 9))) && (a152 == 10 && a53 == 34))) {
printf("POINT: 1352\n");
    	cf = 0;
    	a20 = 3;
    	a125 = 33 ;
    	a69 = 33 ;
    	a84 = 33 ;
    	a56 = 8;
    	a105 = 10;
    	a178 = 32 ;
    	a127 = 6;
    	a46 = 33 ;
    	a119 = 32 ;
    	a104 = 33 ;
    	a45 = 33 ;
    	a193 = 9;
    	a48 = 34 ;
    	a30 = 32 ;
    	a90 = 33 ;
    	a68 = 2;
    	a2 = 3;
    	a55 = 32 ;
    	a16 = 11;
    	a41 = 33 ;
    	a121 = 33 ;
    	a118 = 33 ;
    	a15 = 9;
    	a126 = 5;
    	a95 = 8;
    	a29 = 33 ;
    	a65 = 11;
    	a25 = 4;
    	a131 = 10;
    	a51 = 33 ;
    	a120 = 5;
    	a169 = 33 ;
    	a110 = 5;
    	a165 = 33 ;
    	a176 = 3;
    	a160 = 34 ;
    	a200 = 33 ;
    	a140 = 6;
    	a53 = 33 ;
    	a174 = 7;
    	a141 = 33 ;
    	a86 = 36 ;
    	a93 = 3;
    	a179 = 33 ;
    	a88 = 32 ;
    	a28 = 9;
    	a123 = 6; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1353\n");

    if(((((((input == 9) &&  cf==1 ) && a45 == 34) && a17 == 34) && a131 == 11) && ((a22 == 9 && a17 == 34) && a115 == 34))) {
printf("POINT: 1354\n");
    	cf = 0;
    	a109 = 32 ;
    	a28 = 10;
    	a167 = 2;
    	a198 = 35 ;
    	a20 = 4;
    	a112 = 32 ;
    	a120 = 7;
    	a32 = 32 ;
    	a46 = 32 ;
    	a22 = 8;
    	a110 = 6;
    	a131 = 10;
    	a25 = 6;
    	a88 = 32 ;
    	a104 = 32 ;
    	a174 = 8;
    	a97 = 4;
    	a115 = 32 ;
    	a60 = 8;
    	a150 = 5;
    	a187 = 4;
    	a152 = 9;
    	a180 = 32 ;
    	a65 = 11;
    	a178 = 32 ;
    	a154 = 32 ;
    	a39 = 8;
    	a176 = 4;
    	a81 = 11;
    	a26 = 3;
    	a165 = 32 ;
    	a125 = 32 ;
    	a101 = 32 ;
    	a45 = 32 ;
    	a184 = 6;
    	a200 = 32 ;
    	a79 = 6;
    	a55 = 32 ;
    	a17 = 32 ;
    	a30 = 32 ;
    	a128 = 2;
    	a62 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1355\n");

    if((((a115 == 34 && (a110 == 7 && a152 == 10)) && a165 == 34) && ((((input == 4) &&  cf==1 ) && a125 == 34) && a79 == 7))) {
printf("POINT: 1356\n");
    	cf = 0;
    	a131 = 10;
    	a119 = 32 ;
    	a135 = 12;
    	a15 = 10;
    	a46 = 32 ;
    	a94 = 32 ;
    	a26 = 3;
    	a112 = 32 ;
    	a30 = 32 ;
    	a150 = 5;
    	a169 = 32 ;
    	a32 = 32 ;
    	a88 = 32 ;
    	a156 = 6; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1357\n");

    if((((((input == 3) &&  cf==1 ) && a109 == 34) && a97 == 5) && (((a150 == 6 && a53 == 34) && a150 == 6) && a128 == 3))) {
printf("POINT: 1358\n");
    	cf = 0;
    	a197 = 8;
    	a125 = 32 ;
    	a95 = 10;
    	a118 = 34 ;
    	a160 = 34 ;
    	a153 = 4;
    	a2 = 4;
    	a65 = 11;
    	a178 = 32 ;
    	a140 = 6;
    	a165 = 32 ;
    	a16 = 11;
    	a179 = 32 ;
    	a56 = 10;
    	a37 = 9;
    	a93 = 3;
    	a152 = 9;
    	a167 = 2;
    	a84 = 33 ;
    	a81 = 10;
    	a141 = 32 ;
    	a169 = 32 ;
    	a88 = 32 ;
    	a127 = 8;
    	a109 = 32 ;
    	a15 = 10;
    	a135 = 11;
    	a193 = 7;
    	a150 = 5;
    	a174 = 8;
    	a34 = 34 ;
    	a131 = 10;
    	a184 = 6;
    	a20 = 4;
    	a190 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm133(int input) {
printf("POINT: 1359\n");

    if(((a180 == 34 && ((input == 3) &&  cf==1 )) && (a154 == 34 && (a180 == 34 && ((a174 == 9 && a119 == 34) && a167 == 3))))) {
printf("POINT: 1360\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm134(int input) {
printf("POINT: 1361\n");

    if((((a95 == 10 && (((input == 3) &&  cf==1 ) && a109 == 34)) && a144 == 34) && (a37 == 10 && (a112 == 34 && a79 == 7)))) {
printf("POINT: 1362\n");
    	cf = 0;
    	a79 = 7;
    	a119 = 32 ;
    	a176 = 3;
    	a112 = 32 ;
    	a90 = 32 ;
    	a172 = 34 ;
    	a109 = 34 ;
    	a95 = 9;
    	a20 = 4;
    	a135 = 9;
    	a128 = 2;
    	a17 = 32 ;
    	a164 = 12; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm135(int input) {
printf("POINT: 1363\n");

    if(((a144 == 34 && (a167 == 3 && a120 == 7)) && (a196 == 7 && (a141 == 34 && (a53 == 34 && ((input == 10) &&  cf==1 )))))) {
printf("POINT: 1364\n");
    	cf = 0;
    	a65 = 9;
    	a53 = 33 ;
    	a22 = 7;
    	a26 = 2;
    	a179 = 33 ;
    	a17 = 33 ;
    	a101 = 33 ;
    	a45 = 33 ;
    	a0 = 33 ;
    	a88 = 33 ;
    	a15 = 9;
    	a196 = 5;
    	a105 = 10;
    	a125 = 33 ;
    	a121 = 33 ;
    	a167 = 1;
    	a152 = 8;
    	a2 = 3;
    	a48 = 33 ;
    	a95 = 8;
    	a120 = 5;
    	a69 = 33 ;
    	a110 = 5;
    	a41 = 33 ;
    	a56 = 8;
    	a126 = 3;
    	a160 = 33 ;
    	a84 = 33 ;
    	a144 = 33 ;
    	a112 = 33 ;
    	a32 = 33 ;
    	a16 = 9;
    	a104 = 33 ;
    	a174 = 7;
    	a153 = 3;
    	a200 = 33 ;
    	a51 = 33 ;
    	a25 = 4;
    	a20 = 3;
    	a46 = 33 ;
    	a81 = 10;
    	a131 = 9;
    	a37 = 8;
    	a34 = 33 ;
    	a150 = 4;
    	a154 = 33 ;
    	a86 = 32 ;
    	a12 = 33 ;
    	a77 = 9;
    	a79 = 5;
    	a118 = 33 ;
    	a90 = 33 ;
    	a147 = 1; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1365\n");

    if((((a17 == 34 && (a127 == 8 && ((a112 == 34 && a95 == 10) && a25 == 6))) && a118 == 34) && ((input == 9) &&  cf==1 ))) {
printf("POINT: 1366\n");
    	cf = 0;
    	a91 = 32 ;
    	a157 = 9; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1367\n");

    if(((a34 == 34 && (((a12 == 34 && (((input == 6) &&  cf==1 ) && a150 == 6)) && a180 == 34) && a112 == 34)) && a88 == 34)) {
printf("POINT: 1368\n");
    	cf = 0;
printf("POINT: 1369\n");

    	if((((a172 == 34 || !(a115 == 32)) || a181 == 10) || a142 == 34)) {
printf("POINT: 1370\n");
    	a134 = 16;
    	a193 = 8;
    	a154 = 32 ;
    	a200 = 35 ;
    	a93 = 3;
    	a34 = 32 ;
    	a69 = 32 ;
    	a119 = 32 ;
    	a84 = 32 ;
    	a88 = 32 ;
    	a120 = 6;
    	a46 = 32 ;
    	a160 = 32 ;
    	a165 = 32 ;
    	a104 = 32 ;
    	a131 = 10;
    	a150 = 5;
    	a20 = 4;
    	a121 = 32 ;
    	a118 = 32 ;
    	a0 = 32 ;
    	a28 = 10;
    	a169 = 32 ;
    	a48 = 32 ;
    	a187 = 4;
    	a30 = 32 ;
    	a180 = 32 ;
    	a12 = 32 ;
    	a53 = 32 ;
    	a65 = 10;
    	a79 = 6;
    	a144 = 32 ;
    	a152 = 9;
    	a101 = 32 ;
    	a25 = 5;
    	a167 = 2;
    	a97 = 4;
    	a196 = 6;
    	a141 = 32 ;
    	a95 = 9;
    	a68 = 3;
    	a109 = 32 ;
    	a128 = 2;
    	a41 = 32 ;
    	a22 = 8;
    	a17 = 32 ;
    	a3 = 34 ;
    	a75 = 4; 
    	}else {
printf("POINT: 1372\n");
    	a184 = 6;
    	a46 = 32 ;
    	a68 = 3;
    	a154 = 32 ;
    	a88 = 32 ;
    	a53 = 32 ;
    	a0 = 32 ;
    	a128 = 2;
    	a95 = 9;
    	a28 = 10;
    	a121 = 32 ;
    	a30 = 32 ;
    	a187 = 4;
    	a104 = 32 ;
    	a81 = 11;
    	a127 = 7;
    	a120 = 6;
    	a140 = 5;
    	a101 = 32 ;
    	a200 = 32 ;
    	a169 = 32 ;
    	a90 = 32 ;
    	a193 = 8;
    	a198 = 32 ;
    	a22 = 8;
    	a119 = 32 ;
    	a79 = 6;
    	a69 = 32 ;
    	a20 = 4;
    	a180 = 32 ;
    	a93 = 3;
    	a65 = 10;
    	a150 = 5;
    	a110 = 6;
    	a34 = 32 ;
    	a109 = 32 ;
    	a41 = 32 ;
    	a160 = 32 ;
    	a55 = 32 ;
    	a131 = 10;
    	a196 = 6;
    	a17 = 32 ;
    	a141 = 32 ;
    	a167 = 2;
    	a118 = 32 ;
    	a54 = 35 ;
    	a115 = 34 ;
    	a144 = 32 ;
    	a48 = 32 ;
    	a152 = 9;
    	a84 = 32 ;
    	a134 = 11;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1373\n");

    if(((((( cf==1  && (input == 4)) && a69 == 34) && a193 == 9) && a105 == 12) && ((a127 == 8 && a101 == 34) && a120 == 7))) {
printf("POINT: 1374\n");
    	cf = 0;
    	a53 = 33 ;
    	a88 = 32 ;
    	a174 = 7;
    	a193 = 8;
    	a184 = 7;
    	a45 = 33 ;
    	a20 = 3;
    	a126 = 3;
    	a160 = 32 ;
    	a131 = 10;
    	a32 = 33 ;
    	a84 = 33 ;
    	a141 = 33 ;
    	a178 = 34 ;
    	a93 = 2;
    	a46 = 32 ;
    	a169 = 32 ;
    	a119 = 32 ;
    	a118 = 33 ;
    	a176 = 4;
    	a86 = 32 ;
    	a121 = 33 ;
    	a68 = 2;
    	a28 = 9;
    	a25 = 4;
    	a15 = 9;
    	a26 = 2;
    	a152 = 8;
    	a140 = 4;
    	a34 = 32 ;
    	a196 = 5;
    	a77 = 7;
    	a55 = 32 ;
    	a17 = 33 ;
    	a200 = 33 ;
    	a109 = 33 ;
    	a154 = 33 ;
    	a125 = 33 ;
    	a81 = 11;
    	a30 = 32 ;
    	a153 = 3;
    	a41 = 32 ;
    	a0 = 33 ;
    	a69 = 33 ;
    	a110 = 5;
    	a90 = 33 ;
    	a95 = 8;
    	a62 = 4; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm136(int input) {
printf("POINT: 1375\n");

    if((((a34 == 34 && a128 == 3) && a152 == 10) && (((a101 == 34 && ( cf==1  && (input == 6))) && a110 == 7) && a165 == 34))) {
printf("POINT: 1376\n");
    	cf = 0;
    	a51 = 32 ;
    	a184 = 7;
    	a55 = 32 ;
    	a126 = 4;
    	a125 = 34 ;
    	a97 = 5;
    	a32 = 34 ;
    	a141 = 32 ;
    	a152 = 10;
    	a119 = 32 ;
    	a56 = 9;
    	a110 = 7;
    	a26 = 4;
    	a178 = 32 ;
    	a81 = 11;
    	a12 = 32 ;
    	a176 = 3;
    	a20 = 4;
    	a37 = 10;
    	a118 = 34 ;
    	a69 = 32 ;
    	a174 = 8;
    	a17 = 32 ;
    	a144 = 32 ;
    	a135 = 9;
    	a0 = 32 ;
    	a91 = 34 ;
    	a41 = 34 ;
    	a115 = 32 ;
    	a120 = 6;
    	a16 = 10;
    	a45 = 32 ;
    	a160 = 34 ;
    	a101 = 32 ;
    	a30 = 32 ;
    	a25 = 6;
    	a128 = 2;
    	a112 = 32 ;
    	a140 = 5;
    	a153 = 5;
    	a95 = 9;
    	a154 = 32 ;
    	a2 = 4;
    	a169 = 34 ;
    	a39 = 8;
    	a164 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm137(int input) {
printf("POINT: 1377\n");

    if(((a2 == 5 && (a150 == 6 && ( cf==1  && (input == 4)))) && (a101 == 34 && (a79 == 7 && (a174 == 9 && a169 == 34))))) {
printf("POINT: 1378\n");
    	cf = 0;
    	a51 = 34 ;
    	a93 = 5;
    	a144 = 36 ;
    	a79 = 7;
    	a179 = 32 ;
    	a56 = 12;
    	a69 = 32 ;
    	a153 = 9;
    	a65 = 10;
    	a101 = 36 ;
    	a25 = 8;
    	a187 = 5;
    	a20 = 10;
    	a37 = 14;
    	a19 = 34 ;
    	a86 = 35 ;
    	a12 = 32 ;
    	a160 = 36 ;
    	a112 = 33 ;
    	a68 = 9;
    	a121 = 32 ;
    	a53 = 36 ;
    	a200 = 33 ;
    	a128 = 2;
    	a131 = 13;
    	a39 = 10;
    	a174 = 13;
    	a120 = 11;
    	a88 = 36 ;
    	a28 = 12;
    	a154 = 32 ;
    	a118 = 35 ;
    	a193 = 12;
    	a105 = 11;
    	a34 = 36 ;
    	a95 = 9;
    	a178 = 34 ;
    	a126 = 9;
    	a17 = 34 ;
    	a84 = 35 ;
    	a97 = 6;
    	a165 = 34 ;
    	a184 = 11;
    	a90 = 35 ;
    	a169 = 32 ;
    	a2 = 8;
    	a125 = 35 ;
    	a55 = 34 ;
    	a15 = 13;
    	a26 = 9;
    	a46 = 36 ;
    	a140 = 9;
    	a141 = 33 ;
    	a196 = 6;
    	a146 = 35 ;
    	a150 = 10;
    	a110 = 11;
    	a1 = 33 ; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1379\n");

    if(((a25 == 6 && ( cf==1  && (input == 5))) && (a17 == 34 && ((a193 == 9 && (a167 == 3 && a179 == 34)) && a53 == 34)))) {
printf("POINT: 1380\n");
    	cf = 0;
    	a93 = 9;
    	a81 = 14;
    	a169 = 34 ;
    	a109 = 36 ;
    	a30 = 36 ;
    	a97 = 3;
    	a178 = 35 ;
    	a12 = 36 ;
    	a56 = 11;
    	a25 = 7;
    	a68 = 7;
    	a51 = 33 ;
    	a90 = 36 ;
    	a200 = 36 ;
    	a121 = 36 ;
    	a152 = 14;
    	a193 = 14;
    	a26 = 2;
    	a122 = 35 ;
    	a146 = 36 ;
    	a126 = 3;
    	a165 = 35 ;
    	a141 = 34 ;
    	a118 = 36 ;
    	a180 = 34 ;
    	a45 = 35 ;
    	a167 = 3;
    	a105 = 17;
    	a17 = 35 ;
    	a104 = 34 ;
    	a32 = 36 ;
    	a46 = 36 ;
    	a2 = 6;
    	a115 = 35 ;
    	a154 = 34 ;
    	a119 = 35 ;
    	a144 = 36 ;
    	a187 = 10;
    	a79 = 12;
    	a120 = 7;
    	a101 = 34 ;
    	a37 = 13;
    	a110 = 8;
    	a128 = 6;
    	a179 = 35 ;
    	a112 = 35 ;
    	a176 = 5;
    	a39 = 7;
    	a55 = 34 ;
    	a125 = 34 ;
    	a16 = 14;
    	a174 = 11;
    	a34 = 36 ;
    	a184 = 5;
    	a69 = 33 ;
    	a196 = 12;
    	a41 = 35 ;
    	a150 = 7;
    	a131 = 9;
    	a20 = 3;
    	a15 = 11;
    	a36 = 33 ;
    	a53 = 36 ;
    	a127 = 10;
    	a158 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1381\n");

    if((((a180 == 34 && (( cf==1  && (input == 6)) && a90 == 34)) && a141 == 34) && (a12 == 34 && (a39 == 9 && a141 == 34)))) {
printf("POINT: 1382\n");
    	cf = 0;
    	a196 = 12;
    	a179 = 35 ;
    	a101 = 36 ;
    	a141 = 34 ;
    	a45 = 34 ;
    	a104 = 36 ;
    	a12 = 36 ;
    	a93 = 8;
    	a165 = 36 ;
    	a154 = 33 ;
    	a51 = 33 ;
    	a131 = 9;
    	a125 = 34 ;
    	a180 = 34 ;
    	a128 = 7;
    	a200 = 35 ;
    	a25 = 10;
    	a88 = 35 ;
    	a94 = 32 ;
    	a187 = 8;
    	a69 = 36 ;
    	a34 = 36 ;
    	a46 = 33 ;
    	a55 = 33 ;
    	a30 = 35 ;
    	a121 = 35 ;
    	a79 = 10;
    	a176 = 9;
    	a109 = 34 ;
    	a150 = 7;
    	a184 = 10;
    	a32 = 33 ;
    	a127 = 12;
    	a41 = 36 ;
    	a174 = 13;
    	a169 = 36 ;
    	a20 = 7;
    	a28 = 15;
    	a39 = 11;
    	a160 = 36 ;
    	a105 = 13;
    	a146 = 36 ;
    	a178 = 36 ;
    	a119 = 34 ;
    	a31 = 33 ;
    	a68 = 9;
    	a22 = 10;
    	a126 = 5;
    	a2 = 7;
    	a144 = 36 ;
    	a193 = 12;
    	a53 = 35 ;
    	a134 = 12; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1383\n");

    if((((a16 == 11 && a165 == 34) && a34 == 34) && (((( cf==1  && (input == 8)) && a112 == 34) && a146 == 34) && a154 == 34))) {
printf("POINT: 1384\n");
    	cf = 0;
printf("POINT: 1385\n");

    	if(a150 == 5) {
printf("POINT: 1386\n");
    	a34 = 33 ;
    	a56 = 8;
    	a41 = 36 ;
    	a167 = 4;
    	a45 = 34 ;
    	a112 = 35 ;
    	a51 = 34 ;
    	a125 = 32 ;
    	a144 = 34 ;
    	a68 = 6;
    	a95 = 11;
    	a101 = 34 ;
    	a32 = 34 ;
    	a154 = 32 ;
    	a48 = 36 ;
    	a69 = 35 ;
    	a104 = 36 ;
    	a2 = 7;
    	a184 = 12;
    	a128 = 4;
    	a169 = 34 ;
    	a15 = 16;
    	a84 = 32 ;
    	a150 = 6;
    	a160 = 34 ;
    	a179 = 36 ;
    	a28 = 12;
    	a30 = 36 ;
    	a46 = 36 ;
    	a110 = 7;
    	a55 = 36 ;
    	a90 = 36 ;
    	a105 = 11;
    	a193 = 8;
    	a127 = 11;
    	a39 = 12;
    	a180 = 36 ;
    	a86 = 36 ;
    	a174 = 10;
    	a196 = 7;
    	a29 = 34 ;
    	a37 = 14;
    	a12 = 33 ;
    	a176 = 8;
    	a200 = 33 ;
    	a152 = 11;
    	a165 = 35 ;
    	a93 = 8;
    	a65 = 14;
    	a119 = 36 ;
    	a25 = 6;
    	a109 = 35 ;
    	a115 = 34 ;
    	a121 = 36 ;
    	a140 = 8;
    	a126 = 8;
    	a53 = 36 ;
    	a146 = 35 ;
    	a16 = 10;
    	a17 = 36 ;
    	a20 = 5;
    	a79 = 10;
    	a131 = 12;
    	a141 = 35 ;
    	a187 = 9;
    	a162 = 33 ; 
    	}else {
printf("POINT: 1388\n");
    	a109 = 33 ;
    	a90 = 36 ;
    	a28 = 12;
    	a12 = 36 ;
    	a141 = 35 ;
    	a120 = 10;
    	a121 = 36 ;
    	a128 = 8;
    	a169 = 34 ;
    	a51 = 32 ;
    	a39 = 14;
    	a144 = 33 ;
    	a20 = 7;
    	a34 = 33 ;
    	a152 = 12;
    	a25 = 8;
    	a158 = 8;
    	a176 = 6;
    	a45 = 33 ;
    	a112 = 36 ;
    	a110 = 8;
    	a150 = 11;
    	a105 = 12;
    	a146 = 36 ;
    	a104 = 36 ;
    	a16 = 9;
    	a174 = 7;
    	a46 = 35 ;
    	a2 = 7;
    	a79 = 5;
    	a15 = 16;
    	a93 = 6;
    	a154 = 36 ;
    	a56 = 11;
    	a200 = 36 ;
    	a55 = 34 ;
    	a119 = 33 ;
    	a193 = 9;
    	a53 = 34 ;
    	a126 = 6;
    	a187 = 9;
    	a30 = 33 ;
    	a131 = 11;
    	a184 = 11;
    	a69 = 34 ;
    	a122 = 32 ;
    	a101 = 34 ;
    	a32 = 35 ;
    	a41 = 33 ;
    	a179 = 34 ;
    	a196 = 11;
    	a17 = 33 ;
    	a180 = 36 ;
    	a167 = 8;
    	a165 = 36 ;
    	a183 = 14;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1389\n");

    if(((a79 == 7 && (a128 == 3 && (((input == 9) &&  cf==1 ) && a152 == 10))) && (a90 == 34 && (a25 == 6 && a150 == 6)))) {
printf("POINT: 1390\n");
    	cf = 0;
    	a93 = 9;
    	a125 = 36 ;
    	a88 = 33 ;
    	a126 = 10;
    	a12 = 36 ;
    	a193 = 13;
    	a79 = 7;
    	a46 = 34 ;
    	a56 = 13;
    	a25 = 7;
    	a69 = 33 ;
    	a110 = 9;
    	a144 = 35 ;
    	a140 = 11;
    	a105 = 11;
    	a81 = 13;
    	a112 = 33 ;
    	a90 = 36 ;
    	a169 = 35 ;
    	a135 = 10;
    	a78 = 33 ;
    	a95 = 11;
    	a0 = 34 ;
    	a37 = 12;
    	a120 = 5;
    	a153 = 6;
    	a160 = 33 ;
    	a115 = 35 ;
    	a32 = 34 ;
    	a2 = 9;
    	a22 = 14;
    	a165 = 33 ;
    	a28 = 10;
    	a20 = 3;
    	a174 = 14;
    	a15 = 12;
    	a97 = 10;
    	a127 = 13;
    	a101 = 35 ;
    	a65 = 15;
    	a26 = 7;
    	a141 = 33 ;
    	a39 = 14;
    	a68 = 7;
    	a118 = 36 ;
    	a84 = 33 ;
    	a16 = 12;
    	a178 = 36 ;
    	a121 = 36 ;
    	a48 = 35 ;
    	a167 = 4;
    	a150 = 7;
    	a34 = 34 ;
    	a131 = 13;
    	a184 = 9;
    	a171 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1391\n");

    if((((a131 == 11 && ( cf==1  && (input == 10))) && a154 == 34) && (((a20 == 5 && a131 == 11) && a46 == 34) && a30 == 34))) {
printf("POINT: 1392\n");
    	cf = 0;
    	a93 = 5;
    	a154 = 33 ;
    	a46 = 33 ;
    	a131 = 15;
    	a15 = 10;
    	a0 = 33 ;
    	a105 = 10;
    	a109 = 32 ;
    	a140 = 10;
    	a115 = 36 ;
    	a81 = 17;
    	a17 = 33 ;
    	a26 = 3;
    	a22 = 7;
    	a68 = 8;
    	a69 = 36 ;
    	a25 = 10;
    	a160 = 36 ;
    	a79 = 11;
    	a112 = 34 ;
    	a51 = 33 ;
    	a152 = 8;
    	a39 = 12;
    	a167 = 6;
    	a28 = 13;
    	a120 = 12;
    	a48 = 35 ;
    	a197 = 6;
    	a90 = 33 ;
    	a126 = 5;
    	a97 = 4;
    	a110 = 11;
    	a65 = 13;
    	a178 = 33 ;
    	a153 = 8;
    	a37 = 15;
    	a128 = 3;
    	a184 = 12;
    	a125 = 36 ;
    	a165 = 35 ;
    	a141 = 35 ;
    	a41 = 33 ;
    	a95 = 15;
    	a84 = 33 ;
    	a118 = 36 ;
    	a16 = 12;
    	a135 = 11;
    	a12 = 34 ;
    	a127 = 13;
    	a45 = 33 ;
    	a88 = 33 ;
    	a169 = 35 ;
    	a75 = 8; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1393\n");

    if((((a169 == 34 && a167 == 3) && a56 == 10) && (a144 == 34 && (a109 == 34 && (((input == 1) &&  cf==1 ) && a41 == 34))))) {
printf("POINT: 1394\n");
    	cf = 0;
    	a119 = 35 ;
    	a200 = 35 ;
    	a110 = 6;
    	a180 = 33 ;
    	a112 = 35 ;
    	a174 = 10;
    	a141 = 36 ;
    	a39 = 7;
    	a193 = 13;
    	a53 = 36 ;
    	a16 = 13;
    	a109 = 34 ;
    	a45 = 33 ;
    	a100 = 32 ;
    	a41 = 34 ;
    	a169 = 34 ;
    	a90 = 35 ;
    	a23 = 36 ;
    	a187 = 3;
    	a121 = 33 ;
    	a46 = 36 ;
    	a165 = 35 ;
    	a84 = 36 ;
    	a167 = 8;
    	a17 = 34 ;
    	a51 = 36 ;
    	a128 = 3;
    	a104 = 34 ;
    	a55 = 32 ;
    	a131 = 9;
    	a152 = 11;
    	a69 = 35 ;
    	a81 = 16;
    	a65 = 12;
    	a196 = 8;
    	a105 = 11;
    	a150 = 9;
    	a32 = 33 ;
    	a118 = 34 ;
    	a20 = 9;
    	a79 = 8;
    	a28 = 16;
    	a134 = 14; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1395\n");

    if(((a51 == 34 && ((( cf==1  && (input == 3)) && a144 == 34) && a179 == 34)) && ((a109 == 34 && a121 == 34) && a79 == 7))) {
printf("POINT: 1396\n");
    	cf = 0;
    	a22 = 14;
    	a68 = 6;
    	a154 = 32 ;
    	a86 = 32 ;
    	a193 = 7;
    	a69 = 34 ;
    	a174 = 14;
    	a141 = 32 ;
    	a55 = 35 ;
    	a65 = 16;
    	a28 = 12;
    	a121 = 32 ;
    	a34 = 35 ;
    	a48 = 36 ;
    	a30 = 33 ;
    	a15 = 10;
    	a118 = 34 ;
    	a120 = 8;
    	a93 = 4;
    	a84 = 36 ;
    	a119 = 35 ;
    	a20 = 9;
    	a46 = 35 ;
    	a200 = 33 ;
    	a169 = 36 ;
    	a77 = 7;
    	a97 = 6;
    	a90 = 36 ;
    	a110 = 9;
    	a95 = 10;
    	a152 = 12;
    	a140 = 9;
    	a131 = 9;
    	a126 = 7;
    	a16 = 16;
    	a45 = 36 ;
    	a0 = 36 ;
    	a196 = 12;
    	a26 = 3;
    	a25 = 10;
    	a178 = 36 ;
    	a125 = 35 ;
    	a109 = 32 ;
    	a41 = 34 ;
    	a17 = 32 ;
    	a105 = 10;
    	a32 = 34 ;
    	a153 = 7;
    	a53 = 36 ;
    	a127 = 12;
    	a62 = 4; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1397\n");

    if((((a20 == 5 && (a144 == 34 && a121 == 34)) && a53 == 34) && (a121 == 34 && (( cf==1  && (input == 7)) && a12 == 34)))) {
printf("POINT: 1398\n");
    	cf = 0;
    	a169 = 33 ;
    	a12 = 34 ;
    	a39 = 9;
    	a174 = 13;
    	a112 = 34 ;
    	a104 = 34 ;
    	a2 = 8;
    	a119 = 35 ;
    	a3 = 32 ;
    	a46 = 34 ;
    	a126 = 10;
    	a79 = 7;
    	a28 = 13;
    	a69 = 36 ;
    	a200 = 35 ;
    	a90 = 36 ;
    	a121 = 34 ;
    	a180 = 36 ;
    	a32 = 34 ;
    	a152 = 12;
    	a160 = 35 ;
    	a144 = 34 ;
    	a56 = 14;
    	a41 = 36 ;
    	a84 = 35 ;
    	a176 = 8;
    	a17 = 35 ;
    	a55 = 34 ;
    	a53 = 34 ;
    	a141 = 36 ;
    	a146 = 36 ;
    	a30 = 33 ;
    	a150 = 6;
    	a16 = 11;
    	a187 = 9;
    	a45 = 36 ;
    	a193 = 9;
    	a128 = 5;
    	a109 = 36 ;
    	a154 = 34 ;
    	a93 = 2;
    	a95 = 10;
    	a125 = 32 ;
    	a196 = 7;
    	a26 = 4;
    	a167 = 7;
    	a20 = 10;
    	a184 = 10;
    	a140 = 10;
    	a51 = 36 ;
    	a131 = 12;
    	a34 = 36 ;
    	a179 = 33 ;
    	a25 = 9;
    	a101 = 36 ;
    	a165 = 34 ;
    	a134 = 16;
    	a8 = 8; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1399\n");

    if((((a131 == 11 && a184 == 7) && a45 == 34) && (a2 == 5 && (a104 == 34 && (((input == 2) &&  cf==1 ) && a176 == 4))))) {
printf("POINT: 1400\n");
    	cf = 0;
    	a2 = 8;
    	a180 = 36 ;
    	a196 = 8;
    	a16 = 13;
    	a119 = 36 ;
    	a154 = 33 ;
    	a62 = 8;
    	a20 = 5;
    	a41 = 34 ;
    	a12 = 36 ;
    	a55 = 36 ;
    	a150 = 10;
    	a69 = 35 ;
    	a34 = 33 ;
    	a152 = 15;
    	a128 = 4;
    	a79 = 10;
    	a46 = 35 ;
    	a200 = 36 ;
    	a121 = 33 ;
    	a179 = 33 ;
    	a187 = 9;
    	a158 = 12;
    	a112 = 35 ;
    	a104 = 33 ;
    	a131 = 12;
    	a167 = 8;
    	a146 = 35 ;
    	a144 = 35 ;
    	a11 = 8; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm138(int input) {
printf("POINT: 1401\n");

    if((((a32 == 34 && a84 == 34) && a65 == 11) && (a46 == 34 && (a119 == 34 && (a79 == 7 && ( cf==1  && (input == 5))))))) {
printf("POINT: 1402\n");
    	cf = 0;
    	a100 = 32 ;
    	a65 = 10;
    	a45 = 32 ;
    	a20 = 4;
    	a94 = 36 ;
    	a32 = 32 ;
    	a88 = 32 ;
    	a93 = 3;
    	a2 = 4;
    	a79 = 6;
    	a84 = 32 ;
    	a165 = 32 ;
    	a135 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1403\n");

    if((((( cf==1  && (input == 3)) && a48 == 34) && a95 == 10) && ((a141 == 34 && (a48 == 34 && a160 == 34)) && a115 == 34))) {
printf("POINT: 1404\n");
    	cf = 0;
    	a97 = 4;
    	a160 = 32 ;
    	a20 = 4;
    	a93 = 3;
    	a121 = 32 ;
    	a41 = 32 ;
    	a81 = 11;
    	a178 = 32 ;
    	a65 = 10;
    	a95 = 9;
    	a46 = 32 ;
    	a2 = 4;
    	a154 = 32 ;
    	a69 = 32 ;
    	a165 = 32 ;
    	a152 = 9;
    	a187 = 4;
    	a68 = 3;
    	a55 = 32 ;
    	a79 = 6;
    	a64 = 16;
    	a112 = 32 ;
    	a109 = 32 ;
    	a51 = 32 ;
    	a115 = 32 ;
    	a104 = 32 ;
    	a28 = 10;
    	a180 = 32 ;
    	a101 = 32 ;
    	a26 = 3;
    	a169 = 32 ;
    	a88 = 32 ;
    	a37 = 9;
    	a53 = 32 ;
    	a158 = 7;
    	a32 = 32 ;
    	a105 = 11;
    	a193 = 9;
    	a48 = 32 ;
    	a17 = 32 ;
    	a128 = 2;
    	a200 = 36 ;
    	a189 = 16; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm139(int input) {
printf("POINT: 1405\n");

    if(((a15 == 11 && (( cf==1  && (input == 6)) && a141 == 34)) && ((a2 == 5 && (a15 == 11 && a95 == 10)) && a16 == 11))) {
printf("POINT: 1406\n");
    	cf = 0;
    	a131 = 10;
    	a0 = 32 ;
    	a12 = 32 ;
    	a95 = 9;
    	a56 = 9;
    	a48 = 32 ;
    	a46 = 32 ;
    	a81 = 11;
    	a184 = 5;
    	a84 = 32 ;
    	a20 = 4;
    	a150 = 5;
    	a167 = 2;
    	a2 = 4;
    	a16 = 10;
    	a115 = 32 ;
    	a127 = 7;
    	a144 = 32 ;
    	a110 = 6;
    	a93 = 3;
    	a34 = 32 ;
    	a32 = 32 ;
    	a101 = 32 ;
    	a125 = 33 ;
    	a25 = 5;
    	a174 = 7;
    	a153 = 4;
    	a39 = 8;
    	a193 = 8;
    	a169 = 32 ;
    	a79 = 6;
    	a135 = 10;
    	a69 = 32 ;
    	a121 = 32 ;
    	a112 = 32 ;
    	a90 = 32 ;
    	a165 = 32 ;
    	a78 = 33 ;
    	a141 = 32 ;
    	a22 = 7;
    	a126 = 4;
    	a171 = 11; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1407\n");

    if(((a165 == 34 && a32 == 34) && (a12 == 34 && (a45 == 34 && ((( cf==1  && (input == 4)) && a187 == 5) && a119 == 34))))) {
printf("POINT: 1408\n");
    	cf = 0;
    	a109 = 32 ;
    	a15 = 10;
    	a12 = 32 ;
    	a141 = 32 ;
    	a179 = 32 ;
    	a176 = 3;
    	a120 = 6;
    	a41 = 32 ;
    	a37 = 9;
    	a51 = 32 ;
    	a88 = 32 ;
    	a2 = 4;
    	a135 = 11;
    	a20 = 4;
    	a68 = 3;
    	a69 = 32 ;
    	a93 = 3;
    	a197 = 8;
    	a81 = 10;
    	a178 = 32 ;
    	a169 = 32 ;
    	a165 = 32 ;
    	a152 = 9;
    	a190 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm140(int input) {
printf("POINT: 1409\n");

    if((((a131 == 11 && (( cf==1  && (input == 2)) && a131 == 11)) && a34 == 34) && ((a2 == 5 && a39 == 9) && a84 == 34))) {
printf("POINT: 1410\n");
    	cf = 0;
    	a26 = 7;
    	a51 = 35 ;
    	a41 = 35 ;
    	a68 = 9;
    	a28 = 16;
    	a135 = 10;
    	a37 = 15;
    	a118 = 36 ;
    	a153 = 6;
    	a184 = 10;
    	a128 = 3;
    	a169 = 34 ;
    	a110 = 11;
    	a119 = 34 ;
    	a112 = 33 ;
    	a109 = 33 ;
    	a69 = 36 ;
    	a25 = 6;
    	a15 = 14;
    	a160 = 33 ;
    	a154 = 36 ;
    	a81 = 14;
    	a32 = 34 ;
    	a176 = 4;
    	a120 = 5;
    	a78 = 35 ;
    	a12 = 33 ;
    	a56 = 12;
    	a55 = 33 ;
    	a17 = 32 ;
    	a126 = 10;
    	a171 = 11; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1411\n");

    if(((a12 == 34 && (a46 == 34 && (( cf==1  && (input == 4)) && a28 == 11))) && (a160 == 34 && (a97 == 5 && a193 == 9)))) {
printf("POINT: 1412\n");
    	cf = 0;
    	a153 = 4;
    	a109 = 33 ;
    	a81 = 15;
    	a131 = 12;
    	a26 = 8;
    	a46 = 34 ;
    	a17 = 36 ;
    	a41 = 35 ;
    	a45 = 36 ;
    	a30 = 35 ;
    	a127 = 6;
    	a118 = 36 ;
    	a140 = 5;
    	a178 = 34 ;
    	a2 = 6;
    	a68 = 9;
    	a120 = 6;
    	a12 = 36 ;
    	a93 = 4;
    	a51 = 33 ;
    	a112 = 35 ;
    	a119 = 34 ;
    	a0 = 36 ;
    	a34 = 35 ;
    	a37 = 15;
    	a15 = 12;
    	a86 = 32 ;
    	a151 = 35 ;
    	a115 = 36 ;
    	a135 = 13; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1413\n");

    if((((a126 == 5 && a30 == 34) && a169 == 34) && (a127 == 8 && (a154 == 34 && (a121 == 34 && ((input == 7) &&  cf==1 )))))) {
printf("POINT: 1414\n");
    	cf = 0;
printf("POINT: 1415\n");

    	if((a77 == 5 && a62 == 7)) {
printf("POINT: 1416\n");
    	a90 = 34 ;
    	a30 = 35 ;
    	a88 = 33 ;
    	a119 = 36 ;
    	a79 = 8;
    	a141 = 36 ;
    	a134 = 12;
    	a94 = 35 ;
    	a193 = 9;
    	a153 = 10;
    	a93 = 8;
    	a48 = 36 ;
    	a125 = 34 ;
    	a32 = 36 ;
    	a39 = 13;
    	a17 = 36 ;
    	a65 = 11;
    	a25 = 9;
    	a120 = 5;
    	a53 = 36 ;
    	a179 = 33 ;
    	a104 = 33 ;
    	a196 = 5;
    	a121 = 35 ;
    	a2 = 10;
    	a16 = 12;
    	a55 = 35 ;
    	a101 = 35 ;
    	a150 = 7;
    	a180 = 33 ;
    	a174 = 14;
    	a22 = 10;
    	a176 = 4;
    	a28 = 15;
    	a41 = 35 ;
    	a160 = 33 ;
    	a184 = 10;
    	a56 = 15;
    	a187 = 3;
    	a154 = 33 ;
    	a46 = 35 ;
    	a144 = 35 ;
    	a131 = 16;
    	a12 = 35 ;
    	a69 = 34 ;
    	a95 = 15;
    	a109 = 35 ;
    	a84 = 32 ;
    	a128 = 8;
    	a26 = 6;
    	a34 = 35 ;
    	a146 = 33 ;
    	a0 = 36 ;
    	a105 = 10;
    	a200 = 35 ;
    	a165 = 36 ;
    	a152 = 10;
    	a167 = 6;
    	a97 = 6;
    	a127 = 11;
    	a178 = 33 ;
    	a20 = 8;
    	a45 = 34 ;
    	a169 = 35 ;
    	a110 = 8;
    	a126 = 9;
    	a191 = 9; 
    	}else {
printf("POINT: 1418\n");
    	a146 = 36 ;
    	a112 = 36 ;
    	a69 = 36 ;
    	a150 = 10;
    	a93 = 7;
    	a28 = 11;
    	a95 = 8;
    	a176 = 7;
    	a20 = 6;
    	a131 = 12;
    	a165 = 34 ;
    	a169 = 33 ;
    	a193 = 7;
    	a104 = 36 ;
    	a90 = 36 ;
    	a105 = 14;
    	a65 = 13;
    	a174 = 12;
    	a84 = 36 ;
    	a121 = 35 ;
    	a12 = 34 ;
    	a48 = 36 ;
    	a16 = 12;
    	a128 = 1;
    	a152 = 14;
    	a30 = 33 ;
    	a39 = 12;
    	a125 = 33 ;
    	a144 = 36 ;
    	a2 = 9;
    	a167 = 1;
    	a110 = 9;
    	a187 = 9;
    	a158 = 12;
    	a196 = 8;
    	a81 = 16;
    	a126 = 9;
    	a200 = 36 ;
    	a118 = 33 ;
    	a56 = 8;
    	a178 = 36 ;
    	a154 = 35 ;
    	a45 = 35 ;
    	a25 = 4;
    	a0 = 33 ;
    	a62 = 6;
    	a97 = 10;
    	a184 = 10;
    	a179 = 34 ;
    	a55 = 36 ;
    	a160 = 36 ;
    	a34 = 36 ;
    	a71 = 12;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1419\n");

    if(((a105 == 12 && (a128 == 3 && ((input == 5) &&  cf==1 ))) && ((a28 == 11 && (a48 == 34 && a45 == 34)) && a56 == 10))) {
printf("POINT: 1420\n");
    	cf = 0;
    	a20 = 10;
    	a95 = 14;
    	a55 = 36 ;
    	a179 = 35 ;
    	a135 = 8;
    	a17 = 35 ;
    	a15 = 14;
    	a90 = 32 ;
    	a128 = 7;
    	a109 = 33 ;
    	a138 = 32 ;
    	a152 = 13;
    	a88 = 36 ;
    	a150 = 4;
    	a22 = 10;
    	a105 = 15;
    	a131 = 16;
    	a51 = 33 ;
    	a184 = 8;
    	a37 = 13;
    	a16 = 13;
    	a118 = 33 ;
    	a68 = 9;
    	a125 = 34 ;
    	a41 = 32 ;
    	a169 = 35 ;
    	a141 = 33 ;
    	a45 = 35 ;
    	a120 = 11;
    	a79 = 5;
    	a115 = 35 ;
    	a153 = 6;
    	a84 = 33 ;
    	a26 = 7;
    	a165 = 34 ;
    	a176 = 8;
    	a81 = 13;
    	a140 = 9;
    	a97 = 3;
    	a93 = 2;
    	a32 = 33 ;
    	a119 = 35 ;
    	a65 = 9;
    	a69 = 33 ;
    	a112 = 32 ;
    	a13 = 6; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1421\n");

    if(((a95 == 10 && (a22 == 9 && a180 == 34)) && (a16 == 11 && ((( cf==1  && (input == 6)) && a174 == 9) && a125 == 34)))) {
printf("POINT: 1422\n");
    	cf = 0;
printf("POINT: 1423\n");

    	if(((a19 == 32 && (a66 == 3 && (a28 == 14 || a11 == 5))) || a156 == 6)) {
printf("POINT: 1424\n");
    	a12 = 36 ;
    	a69 = 33 ;
    	a32 = 34 ;
    	a178 = 34 ;
    	a121 = 35 ;
    	a79 = 9;
    	a20 = 6;
    	a131 = 9;
    	a2 = 6;
    	a119 = 35 ;
    	a84 = 34 ;
    	a90 = 36 ;
    	a160 = 35 ;
    	a154 = 33 ;
    	a176 = 4;
    	a187 = 5;
    	a39 = 9;
    	a46 = 36 ;
    	a0 = 33 ;
    	a110 = 12;
    	a30 = 34 ;
    	a125 = 33 ;
    	a16 = 16;
    	a152 = 12;
    	a200 = 35 ;
    	a126 = 10;
    	a127 = 6;
    	a97 = 10;
    	a144 = 36 ;
    	a128 = 7;
    	a169 = 34 ;
    	a196 = 10;
    	a105 = 16;
    	a184 = 12;
    	a101 = 33 ;
    	a22 = 7;
    	a134 = 17;
    	a146 = 35 ;
    	a95 = 15;
    	a167 = 3;
    	a28 = 14;
    	a65 = 16;
    	a150 = 11;
    	a54 = 35 ;
    	a109 = 35 ;
    	a56 = 15;
    	a165 = 34 ;
    	a45 = 34 ;
    	a53 = 35 ;
    	a25 = 10;
    	a15 = 14;
    	a93 = 5;
    	a153 = 4;
    	a108 = 9; 
    	}else {
printf("POINT: 1426\n");
    	a95 = 11;
    	a12 = 34 ;
    	a198 = 35 ;
    	a28 = 9;
    	a154 = 33 ;
    	a20 = 3;
    	a126 = 10;
    	a90 = 33 ;
    	a45 = 34 ;
    	a69 = 35 ;
    	a79 = 12;
    	a187 = 3;
    	a15 = 10;
    	a131 = 11;
    	a125 = 34 ;
    	a101 = 36 ;
    	a56 = 12;
    	a153 = 4;
    	a30 = 35 ;
    	a160 = 34 ;
    	a178 = 36 ;
    	a32 = 33 ;
    	a150 = 10;
    	a128 = 6;
    	a174 = 10;
    	a48 = 35 ;
    	a120 = 10;
    	a200 = 32 ;
    	a22 = 14;
    	a60 = 8;
    	a46 = 33 ;
    	a0 = 33 ;
    	a193 = 9;
    	a121 = 36 ;
    	a127 = 13;
    	a141 = 36 ;
    	a84 = 35 ;
    	a34 = 36 ;
    	a39 = 10;
    	a97 = 7;
    	a180 = 34 ;
    	a184 = 5;
    	a37 = 9;
    	a110 = 9;
    	a167 = 3;
    	a16 = 11;
    	a152 = 12;
    	a104 = 34 ;
    	a165 = 33 ;
    	a62 = 4;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 1427\n");

    if((( cf==1  && (input == 3)) && (((a65 == 11 && (a128 == 3 && (a56 == 10 && a69 == 34))) && a180 == 34) && a126 == 5))) {
printf("POINT: 1428\n");
    	cf = 0;
    	a22 = 11;
    	a152 = 10;
    	a167 = 3;
    	a112 = 33 ;
    	a110 = 7;
    	a15 = 12;
    	a184 = 12;
    	a118 = 33 ;
    	a39 = 9;
    	a13 = 5;
    	a81 = 11;
    	a193 = 11;
    	a41 = 32 ;
    	a179 = 34 ;
    	a178 = 34 ;
    	a115 = 32 ;
    	a68 = 9;
    	a120 = 12;
    	a126 = 10;
    	a26 = 5;
    	a84 = 35 ;
    	a88 = 36 ;
    	a37 = 14;
    	a135 = 8;
    	a140 = 11;
    	a6 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1429\n");

    if(((a95 == 10 && ( cf==1  && (input == 1))) && ((a179 == 34 && ((a90 == 34 && a154 == 34) && a69 == 34)) && a79 == 7))) {
printf("POINT: 1430\n");
    	cf = 0;
printf("POINT: 1431\n");

    	if(( cf==1  || a41 == 32)) {
printf("POINT: 1432\n");
    	a112 = 32 ;
    	a41 = 32 ;
    	a110 = 12;
    	a51 = 33 ;
    	a26 = 3;
    	a13 = 5;
    	a109 = 35 ;
    	a65 = 15;
    	a150 = 8;
    	a128 = 1;
    	a115 = 36 ;
    	a178 = 35 ;
    	a140 = 4;
    	a30 = 35 ;
    	a152 = 14;
    	a176 = 4;
    	a153 = 7;
    	a169 = 35 ;
    	a160 = 36 ;
    	a135 = 8;
    	a154 = 34 ;
    	a97 = 8;
    	a68 = 3;
    	a141 = 36 ;
    	a120 = 9;
    	a118 = 33 ;
    	a88 = 35 ;
    	a15 = 14;
    	a95 = 14;
    	a25 = 9;
    	a28 = 14;
    	a144 = 35 ;
    	a55 = 36 ;
    	a6 = 5; 
    	}else {
printf("POINT: 1434\n");
    	a97 = 5;
    	a150 = 7;
    	a0 = 35 ;
    	a112 = 32 ;
    	a152 = 14;
    	a51 = 36 ;
    	a30 = 33 ;
    	a86 = 33 ;
    	a140 = 10;
    	a95 = 14;
    	a26 = 8;
    	a2 = 3;
    	a131 = 14;
    	a154 = 34 ;
    	a121 = 33 ;
    	a176 = 8;
    	a15 = 14;
    	a90 = 33 ;
    	a115 = 32 ;
    	a37 = 14;
    	a128 = 7;
    	a56 = 10;
    	a46 = 35 ;
    	a88 = 32 ;
    	a118 = 36 ;
    	a17 = 34 ;
    	a178 = 33 ;
    	a68 = 8;
    	a110 = 10;
    	a16 = 12;
    	a141 = 36 ;
    	a167 = 5;
    	a93 = 8;
    	a41 = 36 ;
    	a48 = 33 ;
    	a55 = 36 ;
    	a9 = 34 ;
    	a153 = 7;
    	a28 = 16;
    	a144 = 35 ;
    	a32 = 35 ;
    	a160 = 36 ;
    	a25 = 10;
    	a120 = 8;
    	a65 = 13;
    	a125 = 36 ;
    	a109 = 36 ;
    	a169 = 36 ;
    	a174 = 9;
    	a81 = 15;
    	a135 = 13;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1435\n");

    if(((a48 == 34 && a176 == 4) && (a165 == 34 && ((a150 == 6 && (((input == 8) &&  cf==1 ) && a104 == 34)) && a152 == 10)))) {
printf("POINT: 1436\n");
    	cf = 0;
    	a109 = 32 ;
    	a65 = 11;
    	a93 = 6;
    	a15 = 16;
    	a154 = 34 ;
    	a90 = 34 ;
    	a17 = 36 ;
    	a79 = 7;
    	a81 = 13;
    	a169 = 36 ;
    	a138 = 33 ;
    	a0 = 36 ;
    	a110 = 5;
    	a153 = 3;
    	a30 = 33 ;
    	a135 = 10;
    	a128 = 1;
    	a131 = 13;
    	a68 = 5;
    	a22 = 13;
    	a48 = 35 ;
    	a20 = 10;
    	a126 = 6;
    	a127 = 12;
    	a165 = 34 ;
    	a112 = 36 ;
    	a12 = 33 ;
    	a46 = 33 ;
    	a26 = 2;
    	a51 = 32 ;
    	a115 = 33 ;
    	a34 = 34 ;
    	a105 = 13;
    	a120 = 11;
    	a150 = 7;
    	a101 = 34 ;
    	a171 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1437\n");

    if(((((input == 10) &&  cf==1 ) && a90 == 34) && (a12 == 34 && (a69 == 34 && (a150 == 6 && (a101 == 34 && a125 == 34)))))) {
printf("POINT: 1438\n");
    	cf = 0;
    	a48 = 36 ;
    	a26 = 8;
    	a109 = 35 ;
    	a34 = 35 ;
    	a120 = 11;
    	a153 = 6;
    	a138 = 33 ;
    	a105 = 14;
    	a65 = 13;
    	a115 = 33 ;
    	a93 = 2;
    	a68 = 5;
    	a20 = 3;
    	a131 = 11;
    	a22 = 7;
    	a154 = 36 ;
    	a90 = 35 ;
    	a169 = 33 ;
    	a0 = 35 ;
    	a165 = 34 ;
    	a110 = 5;
    	a12 = 33 ;
    	a79 = 9;
    	a30 = 36 ;
    	a112 = 35 ;
    	a17 = 36 ;
    	a127 = 9;
    	a101 = 34 ;
    	a46 = 35 ;
    	a15 = 14;
    	a150 = 8;
    	a126 = 5;
    	a81 = 17;
    	a135 = 10;
    	a51 = 33 ;
    	a128 = 8;
    	a171 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1439\n");

    if((((a167 == 3 && (a84 == 34 && (((input == 9) &&  cf==1 ) && a30 == 34))) && a144 == 34) && (a128 == 3 && a178 == 34))) {
printf("POINT: 1440\n");
    	cf = 0;
printf("POINT: 1441\n");

    	if((((a84 == 36 && a36 == 32) || a6 == 12) && a3 == 34)) {
printf("POINT: 1442\n");
    	a46 = 35 ;
    	a95 = 10;
    	a121 = 36 ;
    	a51 = 32 ;
    	a39 = 11;
    	a84 = 36 ;
    	a187 = 9;
    	a68 = 6;
    	a131 = 16;
    	a22 = 13;
    	a176 = 8;
    	a150 = 7;
    	a200 = 33 ;
    	a37 = 11;
    	a81 = 13;
    	a69 = 36 ;
    	a127 = 10;
    	a2 = 4;
    	a152 = 9;
    	a25 = 7;
    	a12 = 36 ;
    	a196 = 9;
    	a178 = 35 ;
    	a126 = 10;
    	a56 = 15;
    	a101 = 36 ;
    	a30 = 34 ;
    	a17 = 35 ;
    	a184 = 8;
    	a125 = 32 ;
    	a105 = 17;
    	a86 = 32 ;
    	a79 = 11;
    	a32 = 35 ;
    	a77 = 5;
    	a167 = 7;
    	a15 = 15;
    	a53 = 34 ;
    	a140 = 8;
    	a144 = 32 ;
    	a153 = 6;
    	a160 = 34 ;
    	a109 = 36 ;
    	a20 = 8;
    	a34 = 36 ;
    	a180 = 34 ;
    	a141 = 34 ;
    	a28 = 14;
    	a41 = 35 ;
    	a90 = 35 ;
    	a16 = 15;
    	a0 = 35 ;
    	a110 = 9;
    	a104 = 36 ;
    	a174 = 10;
    	a165 = 35 ;
    	a119 = 36 ;
    	a48 = 35 ;
    	a179 = 32 ;
    	a65 = 16;
    	a97 = 10;
    	a45 = 34 ;
    	a193 = 14;
    	a145 = 12; 
    	}else {
printf("POINT: 1444\n");
    	a146 = 36 ;
    	a95 = 10;
    	a101 = 34 ;
    	a28 = 15;
    	a174 = 7;
    	a131 = 15;
    	a200 = 36 ;
    	a115 = 34 ;
    	a140 = 9;
    	a126 = 3;
    	a2 = 9;
    	a112 = 32 ;
    	a165 = 35 ;
    	a179 = 33 ;
    	a34 = 36 ;
    	a39 = 13;
    	a178 = 33 ;
    	a176 = 2;
    	a25 = 11;
    	a65 = 13;
    	a152 = 8;
    	a90 = 36 ;
    	a144 = 34 ;
    	a69 = 34 ;
    	a187 = 10;
    	a53 = 35 ;
    	a104 = 34 ;
    	a16 = 9;
    	a37 = 13;
    	a30 = 34 ;
    	a154 = 34 ;
    	a167 = 6;
    	a64 = 16;
    	a180 = 33 ;
    	a93 = 8;
    	a48 = 34 ;
    	a105 = 15;
    	a46 = 36 ;
    	a184 = 10;
    	a12 = 36 ;
    	a169 = 36 ;
    	a121 = 33 ;
    	a196 = 5;
    	a41 = 35 ;
    	a150 = 6;
    	a127 = 10;
    	a110 = 5;
    	a56 = 11;
    	a97 = 5;
    	a128 = 1;
    	a45 = 32 ;
    	a84 = 36 ;
    	a193 = 12;
    	a158 = 7;
    	a20 = 9;
    	a32 = 35 ;
    	a119 = 35 ;
    	a160 = 36 ;
    	a0 = 33 ;
    	a125 = 36 ;
    	a68 = 8;
    	a79 = 10;
    	a189 = 12;
    	}printf("%d\n", 15);  
    } 
}
 void calculate_outputm18(int input) {
printf("POINT: 1445\n");

    if(((a79 == 7 && (a88 == 34 && a26 == 4)) && (a179 == 34 && (a101 == 34 && (a112 == 34 && ( cf==1  && a157 == 5)))))) {
printf("POINT: 1446\n");
printf("POINT: 1447\n");

    	if(((a46 == 34 && (a79 == 7 && (a174 == 9 && (a165 == 34 && ( cf==1  && a177 == 16))))) && (a30 == 34 && a2 == 5))) {
printf("POINT: 1448\n");
    		calculate_outputm132(input);
    	} 
    } 
printf("POINT: 1449\n");

    if(((a179 == 34 && ((a176 == 4 && a128 == 3) && a174 == 9)) && (a90 == 34 && ((a157 == 6 &&  cf==1 ) && a17 == 34)))) {
printf("POINT: 1450\n");
printf("POINT: 1451\n");

    	if(((a174 == 9 && ( cf==1  && a40 == 33)) && (a180 == 34 && ((a115 == 34 && (a180 == 34 && a187 == 5)) && a125 == 34)))) {
printf("POINT: 1452\n");
    		calculate_outputm133(input);
    	} 
printf("POINT: 1453\n");

    	if(((a2 == 5 && (a121 == 34 && a93 == 4)) && (a193 == 9 && ((( cf==1  && a40 == 35) && a141 == 34) && a196 == 7)))) {
printf("POINT: 1454\n");
    		calculate_outputm134(input);
    	} 
    } 
printf("POINT: 1455\n");

    if((((a150 == 6 && (a30 == 34 && (a12 == 34 && a112 == 34))) && a153 == 5) && (( cf==1  && a157 == 7) && a2 == 5))) {
printf("POINT: 1456\n");
printf("POINT: 1457\n");

    	if(((a25 == 6 && (a20 == 5 && (a24 == 11 &&  cf==1 ))) && (a22 == 9 && ((a131 == 11 && a146 == 34) && a39 == 9)))) {
printf("POINT: 1458\n");
    		calculate_outputm135(input);
    	} 
    } 
printf("POINT: 1459\n");

    if((((a20 == 5 && (a55 == 34 && a41 == 34)) && a105 == 12) && (a0 == 34 && ((a157 == 9 &&  cf==1 ) && a131 == 11)))) {
printf("POINT: 1460\n");
printf("POINT: 1461\n");

    	if(((a105 == 12 && ((a97 == 5 && (a41 == 34 && (a91 == 32 &&  cf==1 ))) && a128 == 3)) && (a79 == 7 && a160 == 34))) {
printf("POINT: 1462\n");
    		calculate_outputm136(input);
    	} 
    } 
printf("POINT: 1463\n");

    if((((( cf==1  && a157 == 10) && a55 == 34) && a126 == 5) && ((a131 == 11 && (a112 == 34 && a20 == 5)) && a69 == 34))) {
printf("POINT: 1464\n");
printf("POINT: 1465\n");

    	if(((a165 == 34 && (a184 == 7 && a93 == 4)) && ((a150 == 6 && (a104 == 34 && ( cf==1  && a197 == 7))) && a187 == 5))) {
printf("POINT: 1466\n");
    		calculate_outputm137(input);
    	} 
    } 
printf("POINT: 1467\n");

    if(((a69 == 34 && ((a32 == 34 && a17 == 34) && a88 == 34)) && (a45 == 34 && (a81 == 12 && (a157 == 11 &&  cf==1 ))))) {
printf("POINT: 1468\n");
printf("POINT: 1469\n");

    	if((((a128 == 3 && (a146 == 34 && (a98 == 8 &&  cf==1 ))) && a165 == 34) && ((a2 == 5 && a53 == 34) && a119 == 34))) {
printf("POINT: 1470\n");
    		calculate_outputm138(input);
    	} 
printf("POINT: 1471\n");

    	if((((a176 == 4 && a97 == 5) && a81 == 12) && (((( cf==1  && a98 == 12) && a39 == 9) && a69 == 34) && a104 == 34))) {
printf("POINT: 1472\n");
    		calculate_outputm139(input);
    	} 
    } 
printf("POINT: 1473\n");

    if((((a165 == 34 && a110 == 7) && a46 == 34) && (((( cf==1  && a157 == 12) && a12 == 34) && a128 == 3) && a16 == 11))) {
printf("POINT: 1474\n");
printf("POINT: 1475\n");

    	if((((((a0 == 34 && a193 == 9) && a48 == 34) && a56 == 10) && a53 == 34) && ((a9 == 35 &&  cf==1 ) && a2 == 5))) {
printf("POINT: 1476\n");
    		calculate_outputm140(input);
    	} 
    } 
}
 void calculate_outputm141(int input) {
printf("POINT: 1477\n");

    if(((a131 == 10 && (a126 == 4 && (a110 == 6 && (a101 == 32 && a121 == 32)))) && (a22 == 8 && ((input == 5) &&  cf==1 )))) {
printf("POINT: 1478\n");
    	cf = 0;
    	a95 = 9;
    	a101 = 34 ;
    	a68 = 4;
    	a179 = 33 ;
    	a169 = 34 ;
    	a140 = 5;
    	a174 = 9;
    	a141 = 32 ;
    	a121 = 34 ;
    	a126 = 3;
    	a97 = 4;
    	a56 = 9;
    	a22 = 9;
    	a105 = 12;
    	a153 = 4;
    	a150 = 6;
    	a90 = 33 ;
    	a109 = 34 ;
    	a65 = 11;
    	a131 = 10;
    	a176 = 3;
    	a53 = 33 ;
    	a41 = 34 ;
    	a20 = 5;
    	a17 = 33 ;
    	a37 = 10;
    	a51 = 34 ;
    	a160 = 32 ;
    	a128 = 3;
    	a34 = 33 ;
    	a48 = 34 ;
    	a12 = 32 ;
    	a30 = 32 ;
    	a26 = 3;
    	a16 = 10;
    	a21 = 33 ;
    	a86 = 34 ;
    	a104 = 34 ;
    	a46 = 32 ;
    	a55 = 32 ;
    	a110 = 5;
    	a115 = 32 ;
    	a27 = 33 ;
    	a25 = 4;
    	a0 = 33 ;
    	a79 = 5;
    	a193 = 9;
    	a200 = 33 ;
    	a120 = 5;
    	a165 = 33 ;
    	a196 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm142(int input) {
printf("POINT: 1479\n");

    if((((a69 == 32 && (a115 == 32 && ( cf==1  && (input == 7)))) && a16 == 10) && ((a187 == 4 && a25 == 5) && a160 == 32))) {
printf("POINT: 1480\n");
    	cf = 0;
    	 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm143(int input) {
printf("POINT: 1481\n");

    if(((a28 == 10 && (((a30 == 32 && ( cf==1  && (input == 10))) && a110 == 6) && a154 == 32)) && (a17 == 32 && a20 == 4))) {
printf("POINT: 1482\n");
    	cf = 0;
    	a37 = 8;
    	a136 = 14;
    	a104 = 33 ;
    	a140 = 4;
    	a22 = 8;
    	a79 = 5;
    	a48 = 34 ;
    	a32 = 33 ;
    	a17 = 32 ;
    	a16 = 10;
    	a81 = 11;
    	a141 = 32 ;
    	a110 = 5;
    	a160 = 33 ;
    	a120 = 6;
    	a28 = 10;
    	a95 = 9;
    	a84 = 33 ;
    	a15 = 10;
    	a200 = 36 ;
    	a184 = 5;
    	a53 = 33 ;
    	a152 = 9;
    	a158 = 9;
    	a56 = 9;
    	a26 = 3;
    	a112 = 33 ;
    	a167 = 2;
    	a179 = 34 ;
    	a97 = 4;
    	a90 = 32 ;
    	a109 = 33 ;
    	a153 = 4;
    	a49 = 12; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1483\n");

    if((((a184 == 6 && (a176 == 3 && a101 == 32)) && a141 == 32) && ((a81 == 11 && ((input == 9) &&  cf==1 )) && a41 == 32))) {
printf("POINT: 1484\n");
    	cf = 0;
    	a65 = 10;
    	a15 = 10;
    	a150 = 5;
    	a120 = 6;
    	a2 = 4;
    	a152 = 9;
    	a84 = 34 ;
    	a125 = 32 ;
    	a140 = 6;
    	a53 = 32 ;
    	a180 = 32 ;
    	a184 = 7;
    	a193 = 9;
    	a200 = 36 ;
    	a119 = 34 ;
    	a121 = 32 ;
    	a176 = 3;
    	a144 = 32 ;
    	a158 = 12;
    	a141 = 34 ;
    	a39 = 9;
    	a22 = 8;
    	a109 = 32 ;
    	a169 = 32 ;
    	a101 = 32 ;
    	a51 = 32 ;
    	a62 = 11;
    	a17 = 32 ;
    	a167 = 2;
    	a196 = 7;
    	a56 = 9;
    	a93 = 3;
    	a115 = 32 ;
    	a165 = 32 ;
    	a32 = 32 ;
    	a46 = 32 ;
    	a112 = 32 ;
    	a48 = 32 ;
    	a81 = 11;
    	a25 = 5;
    	a68 = 3;
    	a105 = 11;
    	a49 = 7; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1485\n");

    if(((a146 == 32 && (((a115 == 32 && ((input == 4) &&  cf==1 )) && a55 == 32) && a121 == 32)) && (a12 == 32 && a79 == 6))) {
printf("POINT: 1486\n");
    	cf = 0;
    	a32 = 33 ;
    	a105 = 11;
    	a153 = 3;
    	a39 = 9;
    	a48 = 33 ;
    	a179 = 33 ;
    	a120 = 6;
    	a65 = 10;
    	a126 = 5;
    	a56 = 8;
    	a41 = 33 ;
    	a95 = 8;
    	a110 = 5;
    	a127 = 8;
    	a146 = 34 ;
    	a176 = 3;
    	a25 = 4;
    	a46 = 34 ;
    	a17 = 33 ;
    	a81 = 11;
    	a84 = 33 ;
    	a28 = 9;
    	a174 = 7;
    	a3 = 32 ;
    	a69 = 33 ;
    	a193 = 9;
    	a2 = 5;
    	a16 = 10;
    	a196 = 7;
    	a167 = 3;
    	a109 = 32 ;
    	a51 = 33 ;
    	a150 = 5;
    	a144 = 33 ;
    	a45 = 33 ;
    	a112 = 32 ;
    	a152 = 8;
    	a187 = 3;
    	a121 = 33 ;
    	a125 = 33 ;
    	a26 = 2;
    	a12 = 33 ;
    	a101 = 34 ;
    	a85 = 34 ;
    	a53 = 33 ;
    	a134 = 13; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm144(int input) {
printf("POINT: 1487\n");

    if(((a193 == 8 && (a101 == 32 && ((input == 7) &&  cf==1 ))) && (a187 == 4 && ((a104 == 32 && a131 == 10) && a131 == 10)))) {
printf("POINT: 1488\n");
    	cf = 0;
    	a140 = 5;
    	a169 = 34 ;
    	a187 = 5;
    	a0 = 34 ;
    	a97 = 5;
    	a184 = 7;
    	a110 = 7;
    	a135 = 14;
    	a48 = 34 ;
    	a120 = 6;
    	a90 = 32 ;
    	a152 = 10;
    	a56 = 9;
    	a12 = 32 ;
    	a104 = 34 ;
    	a105 = 11;
    	a144 = 32 ;
    	a55 = 32 ;
    	a46 = 32 ;
    	a165 = 34 ;
    	a16 = 10;
    	a141 = 32 ;
    	a25 = 6;
    	a79 = 7;
    	a127 = 8;
    	a81 = 11;
    	a101 = 32 ;
    	a93 = 4;
    	a41 = 34 ;
    	a112 = 32 ;
    	a39 = 8;
    	a2 = 4;
    	a65 = 10;
    	a119 = 32 ;
    	a98 = 13;
    	a15 = 11;
    	a150 = 5;
    	a115 = 32 ;
    	a45 = 32 ;
    	a200 = 34 ;
    	a53 = 34 ;
    	a88 = 32 ;
    	a69 = 32 ;
    	a118 = 34 ;
    	a178 = 34 ;
    	a32 = 34 ;
    	a131 = 10;
    	a51 = 32 ;
    	a176 = 3;
    	a68 = 3;
    	a153 = 5;
    	a126 = 4;
    	a193 = 9;
    	a30 = 32 ;
    	a109 = 34 ;
    	a125 = 34 ;
    	a64 = 11; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1489\n");

    if((((a178 == 32 && a176 == 3) && a25 == 5) && (a101 == 32 && ((( cf==1  && (input == 1)) && a127 == 7) && a41 == 32)))) {
printf("POINT: 1490\n");
    	cf = 0;
    	a95 = 9;
    	a84 = 32 ;
    	a26 = 3;
    	a146 = 32 ;
    	a17 = 32 ;
    	a128 = 2;
    	a160 = 32 ;
    	a37 = 9;
    	a34 = 32 ;
    	a180 = 32 ;
    	a154 = 33 ;
    	a28 = 10;
    	a20 = 4;
    	a196 = 6;
    	a167 = 2;
    	a62 = 6;
    	a119 = 33 ;
    	a121 = 32 ;
    	a179 = 33 ;
    	a55 = 33 ;
    	a22 = 7;
    	a158 = 12;
    	a140 = 6;
    	a174 = 7;
    	a200 = 36 ;
    	a71 = 13; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm145(int input) {
printf("POINT: 1491\n");

    if((((( cf==1  && (input == 1)) && a90 == 32) && a15 == 10) && ((a120 == 6 && (a146 == 32 && a160 == 32)) && a79 == 6))) {
printf("POINT: 1492\n");
    	cf = 0;
    	a146 = 34 ;
    	a81 = 12;
    	a180 = 34 ;
    	a32 = 34 ;
    	a169 = 34 ;
    	a200 = 34 ;
    	a20 = 5;
    	a165 = 34 ;
    	a128 = 3;
    	a65 = 11;
    	a115 = 34 ;
    	a157 = 11;
    	a104 = 34 ;
    	a112 = 34 ;
    	a93 = 4;
    	a53 = 34 ;
    	a55 = 34 ;
    	a68 = 4;
    	a51 = 34 ;
    	a121 = 34 ;
    	a45 = 34 ;
    	a88 = 34 ;
    	a105 = 12;
    	a152 = 10;
    	a2 = 5;
    	a109 = 34 ;
    	a79 = 7;
    	a160 = 34 ;
    	a17 = 34 ;
    	a69 = 34 ;
    	a97 = 5;
    	a187 = 5;
    	a179 = 34 ;
    	a101 = 34 ;
    	a178 = 34 ;
    	a154 = 34 ;
    	a119 = 34 ;
    	a140 = 6;
    	a37 = 10;
    	a196 = 7;
    	a46 = 34 ;
    	a48 = 34 ;
    	a41 = 34 ;
    	a135 = 15;
    	a184 = 7;
    	a39 = 9;
    	a141 = 34 ;
    	a84 = 34 ;
    	a95 = 10;
    	a98 = 8; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1493\n");

    if(((a90 == 32 && (a45 == 32 && a48 == 32)) && (a112 == 32 && (a37 == 9 && (( cf==1  && (input == 4)) && a141 == 32))))) {
printf("POINT: 1494\n");
    	cf = 0;
    	a41 = 34 ;
    	a26 = 3;
    	a184 = 7;
    	a56 = 10;
    	a118 = 34 ;
    	a101 = 34 ;
    	a122 = 36 ;
    	a129 = 36 ;
    	a104 = 34 ;
    	a193 = 9;
    	a46 = 34 ;
    	a196 = 7;
    	a69 = 34 ;
    	a51 = 34 ;
    	a200 = 36 ;
    	a90 = 34 ;
    	a30 = 34 ;
    	a146 = 34 ;
    	a25 = 6;
    	a112 = 34 ;
    	a17 = 34 ;
    	a158 = 8; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1495\n");

    if((((a174 == 8 && (((input == 10) &&  cf==1 ) && a169 == 32)) && a141 == 32) && (a165 == 32 && (a84 == 32 && a167 == 2)))) {
printf("POINT: 1496\n");
    	cf = 0;
    	a28 = 10;
    	a26 = 3;
    	a54 = 33 ;
    	a125 = 32 ;
    	a169 = 32 ;
    	a119 = 32 ;
    	a111 = 35 ;
    	a134 = 17; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm19(int input) {
printf("POINT: 1497\n");

    if((((a25 == 5 && (a165 == 32 && (a164 == 6 &&  cf==1 ))) && a179 == 32) && ((a95 == 9 && a41 == 32) && a196 == 6))) {
printf("POINT: 1498\n");
printf("POINT: 1499\n");

    	if(((a97 == 4 && (a30 == 32 && a17 == 32)) && (a95 == 9 && ((( cf==1  && a10 == 7) && a90 == 32) && a34 == 32)))) {
printf("POINT: 1500\n");
    		calculate_outputm141(input);
    	} 
    } 
printf("POINT: 1501\n");

    if((((((a164 == 8 &&  cf==1 ) && a140 == 5) && a39 == 8) && a112 == 32) && ((a46 == 32 && a187 == 4) && a131 == 10))) {
printf("POINT: 1502\n");
printf("POINT: 1503\n");

    	if(((a26 == 3 && ((a53 == 32 && (a34 == 32 && a32 == 32)) && a81 == 11)) && ((a36 == 33 &&  cf==1 ) && a46 == 32))) {
printf("POINT: 1504\n");
    		calculate_outputm142(input);
    	} 
    } 
printf("POINT: 1505\n");

    if((((a118 == 32 && a93 == 3) && a165 == 32) && (((( cf==1  && a164 == 10) && a93 == 3) && a32 == 32) && a101 == 32))) {
printf("POINT: 1506\n");
printf("POINT: 1507\n");

    	if(((a109 == 32 && (a125 == 32 && (a0 == 32 && a120 == 6))) && ((( cf==1  && a35 == 35) && a104 == 32) && a119 == 32))) {
printf("POINT: 1508\n");
    		calculate_outputm143(input);
    	} 
    } 
printf("POINT: 1509\n");

    if((((a109 == 32 && a119 == 32) && a55 == 32) && (a176 == 3 && ((a141 == 32 && ( cf==1  && a164 == 11)) && a25 == 5)))) {
printf("POINT: 1510\n");
printf("POINT: 1511\n");

    	if((((a93 == 3 && (a178 == 32 && a169 == 32)) && a140 == 5) && ((a69 == 32 && ( cf==1  && a182 == 35)) && a115 == 32))) {
printf("POINT: 1512\n");
    		calculate_outputm144(input);
    	} 
    } 
printf("POINT: 1513\n");

    if(((((a105 == 11 && (a164 == 13 &&  cf==1 )) && a127 == 7) && a69 == 32) && (a141 == 32 && (a95 == 9 && a119 == 32)))) {
printf("POINT: 1514\n");
printf("POINT: 1515\n");

    	if((((a165 == 32 && (a157 == 10 &&  cf==1 )) && a95 == 9) && (a140 == 5 && (a65 == 10 && (a95 == 9 && a154 == 32))))) {
printf("POINT: 1516\n");
    		calculate_outputm145(input);
    	} 
    } 
}
 void calculate_outputm146(int input) {
printf("POINT: 1517\n");

    if((((a140 == 5 && (( cf==1  && (input == 10)) && a196 == 6)) && a88 == 32) && (a118 == 32 && (a68 == 3 && a0 == 32)))) {
printf("POINT: 1518\n");
    	cf = 0;
    	a88 = 32 ;
    	a131 = 10;
    	a193 = 8;
    	a154 = 34 ;
    	a179 = 34 ;
    	a12 = 32 ;
    	a81 = 12;
    	a169 = 32 ;
    	a56 = 9;
    	a153 = 5;
    	a84 = 32 ;
    	a69 = 32 ;
    	a28 = 11;
    	a30 = 32 ;
    	a128 = 3;
    	a105 = 12;
    	a20 = 5;
    	a120 = 6;
    	a146 = 32 ;
    	a32 = 32 ;
    	a86 = 34 ;
    	a198 = 33 ;
    	a167 = 3;
    	a174 = 9;
    	a180 = 32 ;
    	a200 = 32 ;
    	a95 = 9;
    	a125 = 34 ;
    	a41 = 32 ;
    	a48 = 32 ;
    	a118 = 32 ;
    	a16 = 10;
    	a34 = 32 ;
    	a2 = 5;
    	a187 = 5;
    	a126 = 4;
    	a53 = 32 ;
    	a97 = 5;
    	a65 = 10;
    	a110 = 6;
    	a93 = 4;
    	a141 = 34 ;
    	a37 = 10;
    	a66 = 5; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1519\n");

    if(((a30 == 32 && (((input == 1) &&  cf==1 ) && a150 == 5)) && (a167 == 2 && (a121 == 32 && (a196 == 6 && a56 == 9))))) {
printf("POINT: 1520\n");
    	cf = 0;
    	a165 = 33 ;
    	a118 = 32 ;
    	a174 = 7;
    	a160 = 34 ;
    	a28 = 10;
    	a125 = 33 ;
    	a79 = 6;
    	a154 = 33 ;
    	a86 = 32 ;
    	a81 = 10;
    	a179 = 33 ;
    	a184 = 6;
    	a178 = 32 ;
    	a48 = 32 ;
    	a200 = 33 ;
    	a88 = 33 ;
    	a187 = 5;
    	a95 = 8;
    	a15 = 9;
    	a77 = 11;
    	a153 = 3;
    	a144 = 33 ;
    	a104 = 33 ;
    	a51 = 33 ;
    	a30 = 33 ;
    	a176 = 3;
    	a121 = 33 ;
    	a17 = 33 ;
    	a45 = 33 ;
    	a119 = 32 ;
    	a98 = 13; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1521\n");

    if(((a56 == 9 && (a17 == 32 && a95 == 9)) && (((a127 == 7 && ((input == 3) &&  cf==1 )) && a26 == 3) && a25 == 5))) {
printf("POINT: 1522\n");
    	cf = 0;
    	a196 = 7;
    	a95 = 10;
    	a105 = 12;
    	a109 = 32 ;
    	a30 = 34 ;
    	a200 = 34 ;
    	a101 = 34 ;
    	a144 = 34 ;
    	a17 = 34 ;
    	a39 = 9;
    	a46 = 34 ;
    	a28 = 11;
    	a55 = 34 ;
    	a115 = 34 ;
    	a154 = 34 ;
    	a128 = 3;
    	a120 = 6;
    	a193 = 7;
    	a26 = 4;
    	a90 = 32 ;
    	a53 = 34 ;
    	a197 = 8;
    	a127 = 8;
    	a45 = 34 ;
    	a79 = 7;
    	a180 = 34 ;
    	a119 = 34 ;
    	a152 = 9;
    	a97 = 5;
    	a140 = 6;
    	a135 = 11;
    	a146 = 34 ;
    	a65 = 11;
    	a16 = 11;
    	a104 = 34 ;
    	a110 = 7;
    	a126 = 4;
    	a112 = 34 ;
    	a118 = 34 ;
    	a34 = 34 ;
    	a69 = 32 ;
    	a32 = 34 ;
    	a56 = 10;
    	a22 = 9;
    	a190 = 11; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1523\n");

    if(((((((( cf==1  && (input == 7)) && a22 == 8) && a2 == 4) && a179 == 32) && a105 == 11) && a22 == 8) && a150 == 5)) {
printf("POINT: 1524\n");
    	cf = 0;
    	a126 = 4;
    	a167 = 3;
    	a26 = 4;
    	a184 = 7;
    	a158 = 7;
    	a109 = 34 ;
    	a120 = 6;
    	a152 = 10;
    	a65 = 10;
    	a104 = 34 ;
    	a137 = 34 ;
    	a97 = 5;
    	a146 = 32 ;
    	a180 = 34 ;
    	a37 = 10;
    	a48 = 34 ;
    	a69 = 32 ;
    	a127 = 8;
    	a110 = 7;
    	a169 = 34 ;
    	a84 = 32 ;
    	a153 = 5;
    	a15 = 11;
    	a32 = 34 ;
    	a93 = 4;
    	a118 = 34 ;
    	a25 = 6;
    	a81 = 11;
    	a41 = 34 ;
    	a53 = 34 ;
    	a90 = 32 ;
    	a125 = 34 ;
    	a200 = 36 ;
    	a64 = 10; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm147(int input) {
printf("POINT: 1525\n");

    if((((a69 == 32 && (((input == 3) &&  cf==1 ) && a15 == 10)) && a79 == 6) && (a178 == 32 && (a180 == 32 && a105 == 11)))) {
printf("POINT: 1526\n");
    	cf = 0;
    	a39 = 9;
    	a17 = 34 ;
    	a193 = 8;
    	a119 = 34 ;
    	a184 = 7;
    	a88 = 32 ;
    	a93 = 3;
    	a146 = 34 ;
    	a53 = 34 ;
    	a179 = 34 ;
    	a37 = 10;
    	a187 = 5;
    	a46 = 34 ;
    	a2 = 4;
    	a81 = 12;
    	a120 = 6;
    	a20 = 4;
    	a152 = 10;
    	a30 = 32 ;
    	a101 = 34 ;
    	a45 = 32 ;
    	a65 = 10;
    	a112 = 34 ;
    	a140 = 6;
    	a41 = 34 ;
    	a68 = 4;
    	a34 = 32 ;
    	a109 = 34 ;
    	a32 = 32 ;
    	a25 = 5; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1527\n");

    if((((a84 == 32 && ( cf==1  && (input == 5))) && a69 == 32) && (a180 == 32 && (a79 == 6 && (a196 == 6 && a110 == 6))))) {
printf("POINT: 1528\n");
    	cf = 0;
    	a196 = 7;
    	a100 = 32 ;
    	a178 = 34 ;
    	a121 = 34 ;
    	a104 = 34 ;
    	a26 = 4;
    	a69 = 34 ;
    	a105 = 12;
    	a115 = 34 ;
    	a97 = 5;
    	a200 = 34 ;
    	a51 = 34 ;
    	a28 = 11;
    	a94 = 36 ;
    	a55 = 34 ;
    	a128 = 3;
    	a180 = 34 ;
    	a135 = 12; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm148(int input) {
printf("POINT: 1529\n");

    if(((((a88 == 32 && a26 == 3) && a178 == 32) && a56 == 9) && ((((input == 5) &&  cf==1 ) && a179 == 32) && a109 == 32))) {
printf("POINT: 1530\n");
    	cf = 0;
    	a179 = 32 ;
    	a125 = 32 ;
    	a30 = 32 ;
    	a2 = 4;
    	a176 = 3;
    	a146 = 32 ;
    	a56 = 9;
    	a51 = 32 ;
    	a144 = 32 ;
    	a32 = 32 ;
    	a69 = 32 ;
    	a193 = 8;
    	a160 = 32 ;
    	a26 = 3;
    	a105 = 11;
    	a154 = 32 ;
    	a46 = 32 ;
    	a25 = 6;
    	a65 = 10;
    	a174 = 8;
    	a45 = 32 ;
    	a55 = 32 ;
    	a15 = 11;
    	a128 = 2;
    	a126 = 4;
    	a41 = 32 ;
    	a198 = 35 ;
    	a165 = 32 ;
    	a48 = 32 ;
    	a60 = 8;
    	a53 = 32 ;
    	a200 = 32 ;
    	a88 = 32 ;
    	a37 = 9;
    	a93 = 3;
    	a12 = 32 ;
    	a141 = 32 ;
    	a20 = 4;
    	a118 = 34 ;
    	a153 = 4;
    	a16 = 10;
    	a131 = 10;
    	a184 = 6;
    	a62 = 5; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1531\n");

    if(((a110 == 6 && ( cf==1  && (input == 6))) && (a97 == 4 && (((a16 == 10 && a146 == 32) && a176 == 3) && a112 == 32)))) {
printf("POINT: 1532\n");
    	cf = 0;
    	a26 = 4;
    	a32 = 34 ;
    	a69 = 32 ;
    	a152 = 10;
    	a55 = 32 ;
    	a84 = 32 ;
    	a158 = 10;
    	a22 = 8;
    	a110 = 7;
    	a105 = 11;
    	a179 = 32 ;
    	a121 = 32 ;
    	a125 = 34 ;
    	a90 = 32 ;
    	a79 = 6;
    	a104 = 34 ;
    	a68 = 3;
    	a126 = 4;
    	a2 = 4;
    	a200 = 36 ;
    	a109 = 34 ;
    	a165 = 32 ;
    	a174 = 8;
    	a184 = 7;
    	a144 = 34 ;
    	a56 = 9;
    	a183 = 12;
    	a97 = 5;
    	a15 = 11;
    	a53 = 34 ;
    	a45 = 32 ;
    	a25 = 6;
    	a95 = 9;
    	a154 = 32 ;
    	a101 = 32 ;
    	a140 = 5;
    	a128 = 2;
    	a115 = 34 ;
    	a193 = 9;
    	a169 = 34 ;
    	a150 = 6;
    	a118 = 34 ;
    	a120 = 6;
    	a7 = 7; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1533\n");

    if(((((a176 == 3 && ((a115 == 32 && a127 == 7) && a30 == 32)) && a45 == 32) && a45 == 32) && ((input == 7) &&  cf==1 ))) {
printf("POINT: 1534\n");
    	cf = 0;
    	a110 = 6;
    	a2 = 4;
    	a104 = 32 ;
    	a115 = 32 ;
    	a158 = 9;
    	a150 = 5;
    	a41 = 32 ;
    	a136 = 14;
    	a79 = 6;
    	a167 = 2;
    	a17 = 32 ;
    	a90 = 32 ;
    	a15 = 11;
    	a105 = 11;
    	a125 = 32 ;
    	a68 = 3;
    	a46 = 32 ;
    	a200 = 36 ;
    	a51 = 32 ;
    	a22 = 8;
    	a101 = 32 ;
    	a39 = 8;
    	a45 = 32 ;
    	a165 = 32 ;
    	a179 = 32 ;
    	a53 = 32 ;
    	a28 = 10;
    	a146 = 32 ;
    	a56 = 9;
    	a144 = 34 ;
    	a160 = 32 ;
    	a97 = 4;
    	a141 = 32 ;
    	a196 = 6;
    	a174 = 8;
    	a25 = 6;
    	a95 = 9;
    	a26 = 3;
    	a178 = 32 ;
    	a109 = 32 ;
    	a152 = 9;
    	a118 = 34 ;
    	a154 = 32 ;
    	a49 = 13; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm20(int input) {
printf("POINT: 1535\n");

    if(((a121 == 32 && a174 == 8) && (((a153 == 4 && ((a103 == 32 &&  cf==1 ) && a127 == 7)) && a12 == 32) && a104 == 32))) {
printf("POINT: 1536\n");
printf("POINT: 1537\n");

    	if(((((a95 == 9 && a144 == 32) && a45 == 32) && a154 == 32) && (a15 == 10 && (( cf==1  && a77 == 7) && a48 == 32)))) {
printf("POINT: 1538\n");
    		calculate_outputm146(input);
    	} 
printf("POINT: 1539\n");

    	if(((a56 == 9 && (a55 == 32 && (a77 == 12 &&  cf==1 ))) && (a115 == 32 && ((a127 == 7 && a0 == 32) && a144 == 32)))) {
printf("POINT: 1540\n");
    		calculate_outputm147(input);
    	} 
    } 
printf("POINT: 1541\n");

    if((((a103 == 35 &&  cf==1 ) && a176 == 3) && (a109 == 32 && ((a12 == 32 && (a184 == 6 && a22 == 8)) && a46 == 32)))) {
printf("POINT: 1542\n");
printf("POINT: 1543\n");

    	if(((((( cf==1  && a138 == 32) && a169 == 32) && a169 == 32) && a109 == 32) && ((a90 == 32 && a53 == 32) && a120 == 6))) {
printf("POINT: 1544\n");
    		calculate_outputm148(input);
    	} 
    } 
}
 void calculate_outputm149(int input) {
printf("POINT: 1545\n");

    if((((a12 == 32 && ( cf==1  && (input == 1))) && a179 == 32) && (((a48 == 32 && a93 == 3) && a26 == 3) && a53 == 32))) {
printf("POINT: 1546\n");
    	cf = 0;
printf("POINT: 1547\n");

    	if((a84 == 32 && (!(a7 == 6) && ((!(a59 == 10) && a88 == 33) || a68 == 3)))) {
printf("POINT: 1548\n");
    	a90 = 33 ;
    	a95 = 8;
    	a68 = 3;
    	a128 = 2;
    	a127 = 7;
    	a81 = 11;
    	a17 = 32 ;
    	a69 = 33 ;
    	a174 = 8;
    	a126 = 4;
    	a144 = 33 ;
    	a30 = 32 ;
    	a167 = 2;
    	a84 = 32 ;
    	a37 = 8;
    	a121 = 32 ;
    	a140 = 5;
    	a118 = 32 ;
    	a110 = 5;
    	a119 = 32 ;
    	a141 = 32 ;
    	a93 = 3;
    	a39 = 8;
    	a153 = 4;
    	a184 = 5;
    	a120 = 6;
    	a150 = 5;
    	a47 = 34 ;
    	a169 = 32 ;
    	a152 = 9;
    	a25 = 4;
    	a2 = 4;
    	a178 = 32 ;
    	a193 = 8;
    	a12 = 32 ;
    	a15 = 9;
    	a112 = 33 ;
    	a16 = 9;
    	a56 = 9;
    	a196 = 6;
    	a134 = 15;
    	a55 = 32 ;
    	a88 = 32 ;
    	a104 = 33 ;
    	a176 = 3;
    	a114 = 15; 
    	}else {
printf("POINT: 1550\n");
    	a104 = 33 ;
    	a109 = 33 ;
    	a48 = 34 ;
    	a158 = 9;
    	a112 = 33 ;
    	a26 = 3;
    	a141 = 32 ;
    	a17 = 32 ;
    	a28 = 10;
    	a97 = 4;
    	a200 = 36 ;
    	a16 = 10;
    	a56 = 9;
    	a184 = 5;
    	a153 = 4;
    	a152 = 9;
    	a160 = 33 ;
    	a95 = 9;
    	a22 = 8;
    	a110 = 5;
    	a53 = 33 ;
    	a81 = 11;
    	a140 = 4;
    	a167 = 2;
    	a37 = 8;
    	a32 = 33 ;
    	a120 = 6;
    	a84 = 33 ;
    	a179 = 34 ;
    	a79 = 5;
    	a90 = 32 ;
    	a136 = 14;
    	a15 = 10;
    	a49 = 12;
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm150(int input) {
printf("POINT: 1551\n");

    if(((a15 == 10 && ((a105 == 11 && ( cf==1  && (input == 9))) && a193 == 8)) && ((a51 == 32 && a176 == 3) && a180 == 32))) {
printf("POINT: 1552\n");
    	cf = 0;
    	a200 = 34 ;
    	a39 = 9;
    	a81 = 10;
    	a127 = 8;
    	a180 = 34 ;
    	a105 = 12;
    	a135 = 11;
    	a16 = 11;
    	a118 = 34 ;
    	a56 = 10;
    	a97 = 5;
    	a193 = 7;
    	a26 = 4;
    	a196 = 7;
    	a146 = 34 ;
    	a79 = 7;
    	a115 = 34 ;
    	a30 = 34 ;
    	a65 = 11;
    	a101 = 34 ;
    	a95 = 10;
    	a34 = 34 ;
    	a110 = 7;
    	a154 = 34 ;
    	a128 = 3;
    	a104 = 34 ;
    	a28 = 11;
    	a22 = 9;
    	a45 = 34 ;
    	a140 = 6;
    	a160 = 34 ;
    	a197 = 8;
    	a112 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1553\n");

    if(((a179 == 32 && (a39 == 8 && a81 == 11)) && (((a127 == 7 && ( cf==1  && (input == 5))) && a165 == 32) && a150 == 5))) {
printf("POINT: 1554\n");
    	cf = 0;
    	a112 = 32 ;
    	a121 = 34 ;
    	a84 = 34 ;
    	a46 = 34 ;
    	a55 = 32 ;
    	a36 = 33 ;
    	a105 = 12;
    	a109 = 34 ;
    	a144 = 32 ;
    	a69 = 32 ;
    	a97 = 5;
    	a128 = 3;
    	a16 = 10;
    	a101 = 32 ;
    	a48 = 34 ;
    	a120 = 7;
    	a152 = 10;
    	a127 = 8;
    	a169 = 34 ;
    	a184 = 7;
    	a79 = 7;
    	a56 = 10;
    	a22 = 9;
    	a158 = 11;
    	a187 = 5;
    	a15 = 11;
    	a174 = 9;
    	a146 = 34 ;
    	a200 = 36 ;
    	a126 = 5;
    	a37 = 10;
    	a118 = 34 ;
    	a104 = 34 ;
    	a165 = 34 ;
    	a81 = 11;
    	a32 = 34 ;
    	a53 = 34 ;
    	a119 = 32 ;
    	a180 = 34 ;
    	a140 = 6;
    	a17 = 34 ;
    	a153 = 5;
    	a185 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1555\n");

    if(((a48 == 32 && a20 == 4) && ((a93 == 3 && ((a69 == 32 && ( cf==1  && (input == 7))) && a16 == 10)) && a2 == 4))) {
printf("POINT: 1556\n");
    	cf = 0;
    	a26 = 4;
    	a15 = 11;
    	a153 = 5;
    	a180 = 34 ;
    	a17 = 32 ;
    	a184 = 7;
    	a200 = 36 ;
    	a84 = 32 ;
    	a104 = 34 ;
    	a48 = 34 ;
    	a110 = 7;
    	a167 = 3;
    	a137 = 34 ;
    	a55 = 32 ;
    	a160 = 34 ;
    	a152 = 10;
    	a125 = 34 ;
    	a158 = 7;
    	a41 = 34 ;
    	a169 = 34 ;
    	a37 = 10;
    	a46 = 32 ;
    	a93 = 4;
    	a144 = 32 ;
    	a119 = 32 ;
    	a118 = 34 ;
    	a25 = 6;
    	a109 = 34 ;
    	a127 = 8;
    	a97 = 5;
    	a64 = 10; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm151(int input) {
printf("POINT: 1557\n");

    if(((a69 == 32 && (a90 == 32 && ((a140 == 5 && ( cf==1  && (input == 6))) && a153 == 4))) && (a193 == 8 && a127 == 7))) {
printf("POINT: 1558\n");
    	cf = 0;
    	a12 = 32 ;
    	a25 = 5;
    	a169 = 32 ;
    	a178 = 32 ;
    	a95 = 9;
    	a200 = 36 ;
    	a109 = 32 ;
    	a28 = 10;
    	a120 = 6;
    	a105 = 10;
    	a140 = 6;
    	a144 = 32 ;
    	a45 = 32 ;
    	a187 = 4;
    	a22 = 7;
    	a26 = 3;
    	a196 = 6;
    	a62 = 6;
    	a128 = 2;
    	a180 = 32 ;
    	a30 = 32 ;
    	a46 = 32 ;
    	a17 = 32 ;
    	a121 = 32 ;
    	a68 = 2;
    	a158 = 12;
    	a152 = 8;
    	a84 = 32 ;
    	a65 = 10;
    	a176 = 3;
    	a56 = 9;
    	a160 = 32 ;
    	a15 = 10;
    	a41 = 32 ;
    	a184 = 5;
    	a119 = 33 ;
    	a71 = 13; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1559\n");

    if(((a97 == 4 && (a37 == 9 && ((input == 3) &&  cf==1 ))) && (a146 == 32 && ((a110 == 6 && a34 == 32) && a150 == 5)))) {
printf("POINT: 1560\n");
    	cf = 0;
    	a62 = 6;
    	a68 = 2;
    	a45 = 32 ;
    	a128 = 2;
    	a95 = 9;
    	a196 = 6;
    	a22 = 7;
    	a160 = 32 ;
    	a119 = 33 ;
    	a178 = 32 ;
    	a28 = 10;
    	a109 = 32 ;
    	a26 = 3;
    	a187 = 4;
    	a158 = 12;
    	a15 = 10;
    	a105 = 10;
    	a56 = 9;
    	a176 = 3;
    	a180 = 32 ;
    	a152 = 8;
    	a12 = 32 ;
    	a144 = 32 ;
    	a46 = 32 ;
    	a41 = 32 ;
    	a84 = 32 ;
    	a120 = 6;
    	a169 = 32 ;
    	a121 = 32 ;
    	a17 = 32 ;
    	a65 = 10;
    	a25 = 5;
    	a140 = 6;
    	a184 = 5;
    	a30 = 32 ;
    	a200 = 36 ;
    	a71 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1561\n");

    if(((a105 == 11 && (a118 == 32 && ((a68 == 3 && a0 == 32) && a69 == 32))) && (( cf==1  && (input == 1)) && a131 == 10))) {
printf("POINT: 1562\n");
    	cf = 0;
    	a1 = 33 ;
    	a97 = 3;
    	a200 = 33 ;
    	a37 = 8;
    	a90 = 33 ;
    	a105 = 12;
    	a110 = 5;
    	a69 = 33 ;
    	a126 = 3;
    	a153 = 3;
    	a19 = 34 ;
    	a150 = 4;
    	a34 = 33 ;
    	a88 = 33 ;
    	a104 = 34 ;
    	a118 = 34 ;
    	a86 = 35 ;
    	a146 = 33 ;
    	a68 = 4;
    	a53 = 33 ;
    	a140 = 4; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm152(int input) {
printf("POINT: 1563\n");

    if((((a160 == 32 && ((a104 == 32 && (a104 == 32 && ( cf==1  && (input == 7)))) && a184 == 6)) && a165 == 32) && a46 == 32)) {
printf("POINT: 1564\n");
    	cf = 0;
    	a15 = 10;
    	a93 = 3;
    	a105 = 11;
    	a17 = 32 ;
    	a56 = 9;
    	a53 = 32 ;
    	a55 = 32 ;
    	a200 = 36 ;
    	a128 = 2;
    	a39 = 8;
    	a28 = 10;
    	a146 = 32 ;
    	a154 = 33 ;
    	a69 = 32 ;
    	a51 = 33 ;
    	a126 = 4;
    	a120 = 6;
    	a174 = 8;
    	a167 = 2;
    	a25 = 5;
    	a152 = 9;
    	a112 = 32 ;
    	a176 = 3;
    	a110 = 6;
    	a45 = 32 ;
    	a179 = 32 ;
    	a141 = 32 ;
    	a158 = 8;
    	a122 = 32 ;
    	a169 = 32 ;
    	a2 = 4;
    	a41 = 32 ;
    	a183 = 14; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1565\n");

    if(((a109 == 32 && (( cf==1  && (input == 6)) && a115 == 32)) && (a15 == 10 && ((a110 == 6 && a69 == 32) && a184 == 6)))) {
printf("POINT: 1566\n");
    	cf = 0;
    	a119 = 34 ;
    	a140 = 6;
    	a37 = 10;
    	a100 = 34 ;
    	a187 = 5;
    	a15 = 11;
    	a121 = 34 ;
    	a146 = 34 ;
    	a153 = 5;
    	a16 = 11;
    	a139 = 35 ;
    	a144 = 34 ;
    	a196 = 7;
    	a65 = 11;
    	a134 = 14; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm21(int input) {
printf("POINT: 1567\n");

    if(((a150 == 5 && ((a94 == 32 &&  cf==1 ) && a120 == 6)) && (((a65 == 10 && a51 == 32) && a141 == 32) && a110 == 6))) {
printf("POINT: 1568\n");
printf("POINT: 1569\n");

    	if((((a12 == 32 && ((a31 == 33 &&  cf==1 ) && a154 == 32)) && a81 == 11) && (a55 == 32 && (a121 == 32 && a184 == 6)))) {
printf("POINT: 1570\n");
    		calculate_outputm149(input);
    	} 
    } 
printf("POINT: 1571\n");

    if(((a126 == 4 && (a22 == 8 && a140 == 5)) && (((a101 == 32 && (a94 == 35 &&  cf==1 )) && a112 == 32) && a68 == 3))) {
printf("POINT: 1572\n");
printf("POINT: 1573\n");

    	if(((a56 == 9 && (a178 == 32 && (a128 == 2 && a37 == 9))) && ((( cf==1  && a191 == 9) && a97 == 4) && a95 == 9))) {
printf("POINT: 1574\n");
    		calculate_outputm150(input);
    	} 
printf("POINT: 1575\n");

    	if(((a88 == 32 && (a140 == 5 && (a191 == 12 &&  cf==1 ))) && (a39 == 8 && (a104 == 32 && (a101 == 32 && a53 == 32))))) {
printf("POINT: 1576\n");
    		calculate_outputm151(input);
    	} 
printf("POINT: 1577\n");

    	if((((a150 == 5 && ((a191 == 13 &&  cf==1 ) && a118 == 32)) && a187 == 4) && (a115 == 32 && (a167 == 2 && a97 == 4)))) {
printf("POINT: 1578\n");
    		calculate_outputm152(input);
    	} 
    } 
}
 void calculate_outputm153(int input) {
printf("POINT: 1579\n");

    if(((a41 == 32 && ((((input == 7) &&  cf==1 ) && a101 == 32) && a105 == 11)) && ((a187 == 4 && a109 == 32) && a90 == 32))) {
printf("POINT: 1580\n");
    	cf = 0;
    	a158 = 11;
    	a200 = 36 ;
    	a89 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm154(int input) {
printf("POINT: 1581\n");

    if(((a30 == 32 && a178 == 32) && (a93 == 3 && (a178 == 32 && ((a180 == 32 && ( cf==1  && (input == 1))) && a118 == 32))))) {
printf("POINT: 1582\n");
    	cf = 0;
    	a34 = 34 ;
    	a140 = 4;
    	a200 = 33 ;
    	a88 = 33 ;
    	a160 = 34 ;
    	a141 = 33 ;
    	a180 = 34 ;
    	a77 = 7;
    	a68 = 2;
    	a178 = 34 ;
    	a154 = 34 ;
    	a30 = 33 ;
    	a118 = 33 ;
    	a15 = 9;
    	a0 = 34 ;
    	a86 = 32 ;
    	a104 = 33 ;
    	a62 = 6; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm155(int input) {
printf("POINT: 1583\n");

    if(((a131 == 10 && (a178 == 32 && (a97 == 4 && a127 == 7))) && (a101 == 32 && (( cf==1  && (input == 7)) && a79 == 6)))) {
printf("POINT: 1584\n");
    	cf = 0;
    	a100 = 36 ;
    	a120 = 7;
    	a134 = 14;
    	a37 = 10;
    	a180 = 34 ;
    	a171 = 6; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1585\n");

    if((((a141 == 32 && (((input == 5) &&  cf==1 ) && a144 == 32)) && a81 == 11) && ((a88 == 32 && a120 == 6) && a2 == 4))) {
printf("POINT: 1586\n");
    	cf = 0;
    	a128 = 2;
    	a187 = 5;
    	a84 = 33 ;
    	a118 = 32 ;
    	a152 = 10;
    	a119 = 32 ;
    	a69 = 34 ;
    	a39 = 8;
    	a32 = 34 ;
    	a81 = 12;
    	a144 = 34 ;
    	a15 = 11;
    	a167 = 2;
    	a20 = 4;
    	a115 = 34 ;
    	a193 = 9;
    	a146 = 34 ;
    	a200 = 36 ;
    	a68 = 4;
    	a121 = 34 ;
    	a185 = 16;
    	a112 = 32 ;
    	a150 = 5;
    	a158 = 11;
    	a62 = 4; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm156(int input) {
printf("POINT: 1587\n");

    if(((a22 == 8 && (( cf==1  && (input == 7)) && a90 == 32)) && (((a34 == 32 && a69 == 32) && a127 == 7) && a112 == 32))) {
printf("POINT: 1588\n");
    	cf = 0;
    	a81 = 10;
    	a53 = 34 ;
    	a135 = 11;
    	a105 = 12;
    	a17 = 34 ;
    	a45 = 34 ;
    	a154 = 34 ;
    	a34 = 34 ;
    	a128 = 3;
    	a55 = 34 ;
    	a101 = 34 ;
    	a39 = 9;
    	a160 = 34 ;
    	a56 = 10;
    	a193 = 7;
    	a115 = 34 ;
    	a197 = 8;
    	a79 = 7;
    	a26 = 4;
    	a22 = 9;
    	a16 = 11;
    	a119 = 34 ;
    	a32 = 34 ;
    	a97 = 5;
    	a84 = 33 ;
    	a118 = 34 ;
    	a187 = 5;
    	a180 = 34 ;
    	a200 = 34 ;
    	a127 = 8;
    	a30 = 34 ;
    	a65 = 11;
    	a112 = 34 ;
    	a144 = 34 ;
    	a46 = 34 ;
    	a146 = 34 ;
    	a28 = 11;
    	a104 = 34 ;
    	a110 = 7;
    	a196 = 7;
    	a140 = 6;
    	a95 = 10;
    	a190 = 11; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1589\n");

    if(((a55 == 32 && a196 == 6) && (a26 == 3 && (a16 == 10 && (a84 == 32 && (a30 == 32 && ( cf==1  && (input == 6)))))))) {
printf("POINT: 1590\n");
    	cf = 0;
    	a158 = 7;
    	a200 = 36 ;
    	a42 = 35 ;
    	a64 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1591\n");

    if((((a121 == 32 && a118 == 32) && a56 == 9) && ((a112 == 32 && (( cf==1  && (input == 3)) && a79 == 6)) && a150 == 5))) {
printf("POINT: 1592\n");
    	cf = 0;
    	a20 = 4;
    	a41 = 32 ;
    	a65 = 10;
    	a167 = 2;
    	a184 = 6;
    	a51 = 32 ;
    	a120 = 6;
    	a141 = 32 ;
    	a176 = 3;
    	a119 = 32 ;
    	a160 = 32 ;
    	a105 = 11;
    	a153 = 4;
    	a15 = 10;
    	a93 = 3;
    	a32 = 32 ;
    	a28 = 10;
    	a45 = 32 ;
    	a48 = 32 ;
    	a144 = 32 ;
    	a95 = 9;
    	a178 = 32 ;
    	a2 = 4;
    	a125 = 32 ;
    	a193 = 8;
    	a101 = 32 ;
    	a53 = 32 ;
    	a179 = 32 ;
    	a152 = 9;
    	a12 = 32 ;
    	a110 = 6;
    	a25 = 5;
    	a39 = 8;
    	a126 = 4; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1593\n");

    if(((a146 == 32 && ((a165 == 32 && ( cf==1  && (input == 5))) && a174 == 8)) && ((a140 == 5 && a180 == 32) && a150 == 5))) {
printf("POINT: 1594\n");
    	cf = 0;
    	a200 = 36 ;
    	a89 = 36 ;
    	a158 = 11;
    	a185 = 12; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm157(int input) {
printf("POINT: 1595\n");

    if((((a90 == 32 && a97 == 4) && a15 == 10) && (a51 == 32 && ((((input == 6) &&  cf==1 ) && a93 == 3) && a193 == 8)))) {
printf("POINT: 1596\n");
    	cf = 0;
    	a200 = 36 ;
    	a163 = 32 ;
    	a158 = 13;
    	a123 = 6; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm158(int input) {
printf("POINT: 1597\n");

    if(((a68 == 3 && a179 == 32) && (a28 == 10 && (a32 == 32 && (a146 == 32 && (a167 == 2 && ( cf==1  && (input == 3)))))))) {
printf("POINT: 1598\n");
    	cf = 0;
printf("POINT: 1599\n");

    	if(((!(a61 == 6) && a135 == 10) || a21 == 32)) {
printf("POINT: 1600\n");
    	a105 = 14;
    	a109 = 34 ;
    	a53 = 36 ;
    	a56 = 12;
    	a25 = 9;
    	a41 = 36 ;
    	a167 = 1;
    	a126 = 10;
    	a3 = 32 ;
    	a150 = 7;
    	a144 = 36 ;
    	a174 = 12;
    	a152 = 15;
    	a193 = 11;
    	a112 = 33 ;
    	a12 = 36 ;
    	a48 = 34 ;
    	a65 = 16;
    	a69 = 36 ;
    	a84 = 35 ;
    	a176 = 7;
    	a81 = 14;
    	a125 = 35 ;
    	a146 = 32 ;
    	a46 = 36 ;
    	a121 = 34 ;
    	a17 = 35 ;
    	a187 = 9;
    	a51 = 35 ;
    	a16 = 9;
    	a45 = 34 ;
    	a127 = 11;
    	a196 = 5;
    	a39 = 13;
    	a153 = 8;
    	a110 = 12;
    	a120 = 8;
    	a179 = 34 ;
    	a26 = 7;
    	a28 = 14;
    	a2 = 10;
    	a95 = 9;
    	a32 = 34 ;
    	a101 = 33 ;
    	a85 = 34 ; 
    	}else {
printf("POINT: 1602\n");
    	a22 = 13;
    	a109 = 36 ;
    	a152 = 9;
    	a26 = 8;
    	a187 = 7;
    	a12 = 33 ;
    	a95 = 13;
    	a25 = 9;
    	a112 = 33 ;
    	a126 = 9;
    	a128 = 1;
    	a140 = 7;
    	a115 = 34 ;
    	a34 = 34 ;
    	a167 = 6;
    	a0 = 33 ;
    	a176 = 3;
    	a141 = 36 ;
    	a125 = 35 ;
    	a104 = 32 ;
    	a131 = 16;
    	a180 = 35 ;
    	a179 = 36 ;
    	a160 = 33 ;
    	a120 = 12;
    	a153 = 7;
    	a17 = 36 ;
    	a37 = 11;
    	a90 = 35 ;
    	a151 = 34 ;
    	a56 = 9;
    	a32 = 35 ;
    	a119 = 35 ;
    	a174 = 12;
    	a110 = 9;
    	a121 = 33 ;
    	a101 = 35 ;
    	a88 = 33 ;
    	a118 = 33 ;
    	a48 = 36 ;
    	a79 = 8;
    	a51 = 36 ;
    	a150 = 8;
    	a16 = 9;
    	a39 = 7;
    	a20 = 9;
    	a146 = 33 ;
    	a200 = 34 ;
    	a45 = 35 ;
    	a178 = 35 ;
    	a55 = 33 ;
    	a46 = 33 ;
    	a30 = 36 ;
    	a144 = 36 ;
    	a93 = 6;
    	a41 = 35 ;
    	a193 = 13;
    	a169 = 36 ;
    	a84 = 35 ;
    	a28 = 13;
    	a15 = 14;
    	a97 = 10;
    	a68 = 4;
    	a105 = 13;
    	a2 = 3;
    	a65 = 13;
    	a69 = 33 ;
    	a81 = 14;
    	a165 = 36 ;
    	a127 = 12;
    	a184 = 8;
    	a196 = 8;
    	a94 = 33 ;
    	a154 = 36 ;
    	a135 = 12;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 1603\n");

    if((((a56 == 9 && a69 == 32) && a128 == 2) && (a121 == 32 && ((((input == 5) &&  cf==1 ) && a0 == 32) && a15 == 10)))) {
printf("POINT: 1604\n");
    	cf = 0;
printf("POINT: 1605\n");

    	if(a137 == 36) {
printf("POINT: 1606\n");
    	a200 = 36 ;
    	a30 = 33 ;
    	a179 = 32 ;
    	a17 = 36 ;
    	a144 = 32 ;
    	a118 = 35 ;
    	a48 = 35 ;
    	a158 = 9;
    	a101 = 35 ;
    	a196 = 12;
    	a51 = 36 ;
    	a79 = 9;
    	a146 = 35 ;
    	a193 = 13;
    	a81 = 15;
    	a104 = 35 ;
    	a136 = 15;
    	a61 = 2; 
    	}else {
printf("POINT: 1608\n");
    	a114 = 12;
    	a134 = 15;
    	a147 = 1;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1609\n");

    if(((((a179 == 32 && a193 == 8) && a176 == 3) && a115 == 32) && (a55 == 32 && (a32 == 32 && ( cf==1  && (input == 1)))))) {
printf("POINT: 1610\n");
    	cf = 0;
    	a79 = 10;
    	a120 = 8;
    	a110 = 10;
    	a86 = 35 ;
    	a184 = 6;
    	a167 = 6;
    	a140 = 5;
    	a81 = 16;
    	a30 = 34 ;
    	a39 = 9;
    	a53 = 33 ;
    	a112 = 35 ;
    	a179 = 34 ;
    	a32 = 36 ;
    	a198 = 33 ;
    	a131 = 12;
    	a51 = 34 ;
    	a26 = 5;
    	a37 = 10;
    	a41 = 33 ;
    	a88 = 35 ;
    	a95 = 10;
    	a196 = 10;
    	a90 = 34 ;
    	a12 = 35 ;
    	a144 = 35 ;
    	a20 = 9;
    	a45 = 36 ;
    	a125 = 34 ;
    	a200 = 32 ;
    	a68 = 7;
    	a128 = 7;
    	a119 = 34 ;
    	a16 = 11;
    	a22 = 13;
    	a56 = 12;
    	a174 = 8;
    	a118 = 35 ;
    	a141 = 35 ;
    	a61 = 2; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1611\n");

    if(((a15 == 10 && (( cf==1  && (input == 2)) && a174 == 8)) && ((a41 == 32 && (a28 == 10 && a95 == 9)) && a51 == 32))) {
printf("POINT: 1612\n");
    	cf = 0;
printf("POINT: 1613\n");

    	if((a90 == 34 && !(a109 == 36))) {
printf("POINT: 1614\n");
    	a196 = 12;
    	a139 = 35 ;
    	a144 = 35 ;
    	a146 = 35 ;
    	a141 = 32 ;
    	a176 = 9;
    	a128 = 6;
    	a179 = 35 ;
    	a140 = 9;
    	a100 = 34 ;
    	a105 = 17;
    	a169 = 36 ;
    	a93 = 7;
    	a65 = 12;
    	a25 = 8;
    	a119 = 35 ;
    	a2 = 8;
    	a153 = 8;
    	a37 = 11;
    	a121 = 33 ;
    	a120 = 11;
    	a187 = 7;
    	a15 = 12;
    	a134 = 14; 
    	}else {
printf("POINT: 1616\n");
    	a16 = 14;
    	a53 = 34 ;
    	a200 = 32 ;
    	a198 = 36 ;
    	a139 = 35 ;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1617\n");

    if(((((input == 9) &&  cf==1 ) && a131 == 10) && ((a118 == 32 && ((a79 == 6 && a20 == 4) && a12 == 32)) && a125 == 32))) {
printf("POINT: 1618\n");
    	cf = 0;
    	a193 = 11;
    	a134 = 17;
    	a53 = 34 ;
    	a104 = 33 ;
    	a16 = 16;
    	a180 = 36 ;
    	a34 = 36 ;
    	a54 = 35 ;
    	a153 = 10;
    	a109 = 33 ;
    	a174 = 8;
    	a179 = 35 ;
    	a15 = 15;
    	a48 = 36 ;
    	a95 = 14;
    	a108 = 9; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1619\n");

    if(((a51 == 32 && a128 == 2) && ((a101 == 32 && ((a93 == 3 && ( cf==1  && (input == 10))) && a109 == 32)) && a104 == 32))) {
printf("POINT: 1620\n");
    	cf = 0;
printf("POINT: 1621\n");

    	if(a15 == 10) {
printf("POINT: 1622\n");
    	a193 = 11;
    	a104 = 32 ;
    	a95 = 12;
    	a184 = 10;
    	a97 = 10;
    	a55 = 34 ;
    	a101 = 34 ;
    	a200 = 36 ;
    	a179 = 35 ;
    	a69 = 33 ;
    	a79 = 9;
    	a118 = 33 ;
    	a15 = 10;
    	a32 = 33 ;
    	a84 = 36 ;
    	a125 = 35 ;
    	a110 = 8;
    	a128 = 6;
    	a121 = 34 ;
    	a165 = 34 ;
    	a174 = 12;
    	a183 = 12;
    	a152 = 11;
    	a53 = 32 ;
    	a105 = 14;
    	a115 = 35 ;
    	a16 = 12;
    	a150 = 9;
    	a22 = 13;
    	a144 = 32 ;
    	a120 = 5;
    	a140 = 9;
    	a90 = 36 ;
    	a109 = 36 ;
    	a154 = 33 ;
    	a68 = 8;
    	a25 = 8;
    	a126 = 7;
    	a158 = 10;
    	a169 = 32 ;
    	a2 = 10;
    	a45 = 34 ;
    	a56 = 12;
    	a26 = 6;
    	a7 = 7; 
    	}else {
printf("POINT: 1624\n");
    	a41 = 35 ;
    	a46 = 35 ;
    	a30 = 33 ;
    	a118 = 33 ;
    	a5 = 34 ;
    	a141 = 33 ;
    	a179 = 32 ;
    	a39 = 7;
    	a2 = 4;
    	a105 = 13;
    	a152 = 15;
    	a200 = 36 ;
    	a140 = 7;
    	a121 = 35 ;
    	a127 = 6;
    	a15 = 15;
    	a169 = 32 ;
    	a32 = 33 ;
    	a53 = 35 ;
    	a28 = 13;
    	a158 = 7;
    	a167 = 2;
    	a115 = 36 ;
    	a153 = 8;
    	a150 = 7;
    	a125 = 34 ;
    	a37 = 13;
    	a84 = 33 ;
    	a165 = 36 ;
    	a79 = 5;
    	a81 = 13;
    	a51 = 33 ;
    	a193 = 12;
    	a174 = 10;
    	a110 = 11;
    	a68 = 9;
    	a126 = 8;
    	a16 = 16;
    	a64 = 12;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 1625\n");

    if((((a187 == 4 && (a119 == 32 && a150 == 5)) && a46 == 32) && ((a2 == 4 && ((input == 4) &&  cf==1 )) && a187 == 4))) {
printf("POINT: 1626\n");
    	cf = 0;
printf("POINT: 1627\n");

    	if(a39 == 9) {
printf("POINT: 1628\n");
    	a16 = 14;
    	a158 = 11;
    	a53 = 35 ;
    	a200 = 36 ;
    	a89 = 36 ;
    	a185 = 12; 
    	}else {
printf("POINT: 1630\n");
    	a193 = 13;
    	a146 = 32 ;
    	a37 = 12;
    	a153 = 7;
    	a110 = 5;
    	a180 = 35 ;
    	a2 = 10;
    	a121 = 35 ;
    	a200 = 34 ;
    	a160 = 33 ;
    	a179 = 32 ;
    	a12 = 33 ;
    	a105 = 14;
    	a15 = 13;
    	a28 = 9;
    	a109 = 36 ;
    	a135 = 9;
    	a167 = 5;
    	a152 = 9;
    	a174 = 7;
    	a39 = 10;
    	a104 = 32 ;
    	a30 = 33 ;
    	a46 = 36 ;
    	a172 = 34 ;
    	a125 = 33 ;
    	a187 = 3;
    	a196 = 8;
    	a16 = 15;
    	a165 = 33 ;
    	a154 = 35 ;
    	a48 = 32 ;
    	a101 = 33 ;
    	a41 = 35 ;
    	a169 = 32 ;
    	a150 = 8;
    	a51 = 36 ;
    	a79 = 8;
    	a141 = 32 ;
    	a127 = 13;
    	a32 = 32 ;
    	a140 = 4;
    	a81 = 16;
    	a93 = 6;
    	a144 = 32 ;
    	a164 = 12;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 1631\n");

    if(((a93 == 3 && (a150 == 5 && (a15 == 10 && ((input == 8) &&  cf==1 )))) && (a12 == 32 && (a196 == 6 && a144 == 32)))) {
printf("POINT: 1632\n");
    	cf = 0;
    	a16 = 12;
    	a109 = 35 ;
    	a53 = 35 ;
    	a158 = 12;
    	a174 = 14;
    	a62 = 5;
    	a200 = 36 ;
    	a71 = 6; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1633\n");

    if((((((input == 6) &&  cf==1 ) && a193 == 8) && a165 == 32) && (((a178 == 32 && a55 == 32) && a167 == 2) && a152 == 9))) {
printf("POINT: 1634\n");
    	cf = 0;
    	a97 = 7;
    	a180 = 35 ;
    	a28 = 16;
    	a41 = 32 ;
    	a146 = 36 ;
    	a160 = 32 ;
    	a45 = 35 ;
    	a79 = 12;
    	a165 = 34 ;
    	a176 = 6;
    	a187 = 3;
    	a153 = 4;
    	a127 = 7;
    	a184 = 6;
    	a69 = 35 ;
    	a115 = 36 ;
    	a119 = 36 ;
    	a200 = 36 ;
    	a56 = 14;
    	a125 = 36 ;
    	a112 = 34 ;
    	a196 = 9;
    	a152 = 11;
    	a141 = 34 ;
    	a64 = 9;
    	a179 = 35 ;
    	a15 = 9;
    	a193 = 7;
    	a2 = 9;
    	a109 = 36 ;
    	a167 = 8;
    	a158 = 7;
    	a144 = 35 ;
    	a68 = 7;
    	a25 = 5;
    	a39 = 14;
    	a154 = 34 ;
    	a174 = 13;
    	a104 = 35 ;
    	a48 = 36 ;
    	a22 = 9;
    	a128 = 6;
    	a46 = 34 ;
    	a105 = 14;
    	a51 = 33 ;
    	a140 = 8;
    	a90 = 36 ;
    	a150 = 11;
    	a32 = 32 ;
    	a53 = 35 ;
    	a120 = 5;
    	a16 = 13;
    	a118 = 36 ;
    	a13 = 5; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1635\n");

    if(((a184 == 6 && a97 == 4) && (a79 == 6 && (a105 == 11 && ((a167 == 2 && ((input == 7) &&  cf==1 )) && a127 == 7))))) {
printf("POINT: 1636\n");
    	cf = 0;
printf("POINT: 1637\n");

    	if((a135 == 11 && a182 == 33)) {
printf("POINT: 1638\n");
    	a16 = 14;
    	a200 = 36 ;
    	a158 = 7;
    	a42 = 35 ;
    	a64 = 11; 
    	}else {
printf("POINT: 1640\n");
    	a53 = 36 ;
    	a186 = 33 ;
    	a16 = 11;
    	a200 = 36 ;
    	a163 = 36 ;
    	a158 = 13;
    	}printf("%d\n", 26);  
    } 
}
 void calculate_outputm159(int input) {
printf("POINT: 1641\n");

    if((((a144 == 32 && (( cf==1  && (input == 4)) && a196 == 6)) && a187 == 4) && (a90 == 32 && (a153 == 4 && a0 == 32)))) {
printf("POINT: 1642\n");
    	cf = 0;
    	a120 = 7;
    	a198 = 35 ;
    	a176 = 4;
    	a144 = 34 ;
    	a15 = 11;
    	a65 = 11;
    	a196 = 7;
    	a37 = 10;
    	a2 = 5;
    	a200 = 32 ;
    	a153 = 5;
    	a60 = 8;
    	a62 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1643\n");

    if(((a12 == 32 && (a90 == 32 && ( cf==1  && (input == 3)))) && (a88 == 32 && ((a120 == 6 && a112 == 32) && a110 == 6)))) {
printf("POINT: 1644\n");
    	cf = 0;
    	a200 = 34 ;
    	a30 = 34 ;
    	a144 = 34 ;
    	a153 = 5;
    	a81 = 12;
    	a39 = 9;
    	a41 = 34 ;
    	a160 = 34 ;
    	a193 = 9;
    	a12 = 34 ;
    	a172 = 34 ;
    	a174 = 9;
    	a135 = 9;
    	a180 = 34 ;
    	a46 = 34 ;
    	a15 = 11;
    	a154 = 34 ;
    	a110 = 7;
    	a152 = 10;
    	a25 = 5;
    	a167 = 3;
    	a28 = 11;
    	a196 = 7;
    	a187 = 5;
    	a165 = 34 ;
    	a127 = 8;
    	a119 = 32 ;
    	a109 = 34 ;
    	a48 = 34 ;
    	a79 = 7;
    	a140 = 6;
    	a150 = 6;
    	a37 = 10;
    	a2 = 5;
    	a101 = 34 ;
    	a104 = 34 ;
    	a121 = 34 ;
    	a32 = 34 ;
    	a125 = 34 ;
    	a164 = 12; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1645\n");

    if((((a28 == 10 && (a176 == 3 && ((input == 5) &&  cf==1 ))) && a56 == 9) && ((a48 == 32 && a167 == 2) && a2 == 4))) {
printf("POINT: 1646\n");
    	cf = 0;
    	a65 = 11;
    	a37 = 10;
    	a165 = 34 ;
    	a79 = 7;
    	a46 = 34 ;
    	a112 = 34 ;
    	a101 = 34 ;
    	a178 = 34 ;
    	a97 = 5;
    	a200 = 34 ;
    	a157 = 11;
    	a48 = 34 ;
    	a128 = 3;
    	a17 = 34 ;
    	a184 = 7;
    	a25 = 5;
    	a135 = 15;
    	a115 = 34 ;
    	a26 = 4;
    	a39 = 9;
    	a140 = 6;
    	a32 = 34 ;
    	a109 = 34 ;
    	a2 = 5;
    	a41 = 34 ;
    	a104 = 34 ;
    	a84 = 34 ;
    	a28 = 11;
    	a68 = 4;
    	a69 = 34 ;
    	a121 = 34 ;
    	a196 = 7;
    	a152 = 10;
    	a20 = 5;
    	a88 = 34 ;
    	a81 = 12;
    	a180 = 34 ;
    	a154 = 34 ;
    	a160 = 34 ;
    	a55 = 34 ;
    	a187 = 5;
    	a95 = 10;
    	a45 = 34 ;
    	a98 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1647\n");

    if(((a193 == 8 && (a15 == 10 && (((input == 7) &&  cf==1 ) && a46 == 32))) && ((a26 == 3 && a128 == 2) && a154 == 32))) {
printf("POINT: 1648\n");
    	cf = 0;
    	a131 = 11;
    	a193 = 7;
    	a88 = 34 ;
    	a176 = 2;
    	a154 = 34 ;
    	a184 = 7;
    	a41 = 34 ;
    	a30 = 33 ;
    	a160 = 33 ;
    	a115 = 34 ;
    	a84 = 33 ;
    	a69 = 33 ;
    	a97 = 5;
    	a200 = 34 ;
    	a16 = 9;
    	a34 = 34 ;
    	a121 = 33 ;
    	a196 = 7;
    	a187 = 5;
    	a95 = 10;
    	a174 = 9;
    	a94 = 32 ;
    	a165 = 33 ;
    	a152 = 10;
    	a79 = 7;
    	a15 = 9;
    	a104 = 34 ;
    	a2 = 5;
    	a150 = 6;
    	a22 = 9;
    	a135 = 12;
    	a110 = 7;
    	a180 = 34 ;
    	a178 = 34 ;
    	a101 = 34 ;
    	a17 = 34 ;
    	a167 = 3;
    	a119 = 33 ;
    	a125 = 33 ;
    	a128 = 3;
    	a156 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm22(int input) {
printf("POINT: 1649\n");

    if((((((a25 == 5 && a53 == 32) && a178 == 32) && a176 == 3) && a101 == 32) && (a141 == 32 && ( cf==1  && a3 == 33)))) {
printf("POINT: 1650\n");
printf("POINT: 1651\n");

    	if(((a131 == 10 && ((a101 == 32 && a141 == 32) && a126 == 4)) && ((( cf==1  && a175 == 14) && a169 == 32) && a176 == 3))) {
printf("POINT: 1652\n");
    		calculate_outputm153(input);
    	} 
    } 
printf("POINT: 1653\n");

    if((((a141 == 32 && (a104 == 32 && ( cf==1  && a3 == 32))) && a22 == 8) && (a131 == 10 && (a20 == 4 && a90 == 32)))) {
printf("POINT: 1654\n");
printf("POINT: 1655\n");

    	if(((a128 == 2 && (a140 == 5 && (a119 == 32 && ((a85 == 34 &&  cf==1 ) && a30 == 32)))) && (a160 == 32 && a15 == 10))) {
printf("POINT: 1656\n");
    		calculate_outputm154(input);
    	} 
    } 
printf("POINT: 1657\n");

    if((((a196 == 6 && (a16 == 10 && (a3 == 34 &&  cf==1 ))) && a2 == 4) && (a140 == 5 && (a154 == 32 && a169 == 32)))) {
printf("POINT: 1658\n");
printf("POINT: 1659\n");

    	if((((a144 == 32 && (a153 == 4 && (a101 == 32 && a180 == 32))) && a180 == 32) && ((a183 == 10 &&  cf==1 ) && a196 == 6))) {
printf("POINT: 1660\n");
    		calculate_outputm155(input);
    	} 
    } 
printf("POINT: 1661\n");

    if((((a187 == 4 && (a180 == 32 && a37 == 9)) && a169 == 32) && (a128 == 2 && (a37 == 9 && ( cf==1  && a3 == 35))))) {
printf("POINT: 1662\n");
printf("POINT: 1663\n");

    	if(((a109 == 32 && (a17 == 32 && ( cf==1  && a106 == 7))) && (((a81 == 11 && a88 == 32) && a46 == 32) && a104 == 32))) {
printf("POINT: 1664\n");
    		calculate_outputm156(input);
    	} 
printf("POINT: 1665\n");

    	if((((a110 == 6 && a150 == 5) && a45 == 32) && ((((a106 == 9 &&  cf==1 ) && a144 == 32) && a90 == 32) && a105 == 11))) {
printf("POINT: 1666\n");
    		calculate_outputm157(input);
    	} 
printf("POINT: 1667\n");

    	if((((a32 == 32 && (a69 == 32 && (a12 == 32 && a30 == 32))) && a140 == 5) && (( cf==1  && a106 == 11) && a141 == 32))) {
printf("POINT: 1668\n");
    		calculate_outputm158(input);
    	} 
    } 
printf("POINT: 1669\n");

    if((((a65 == 10 && (a144 == 32 && (a153 == 4 && ( cf==1  && a3 == 36)))) && a39 == 8) && (a120 == 6 && a180 == 32))) {
printf("POINT: 1670\n");
printf("POINT: 1671\n");

    	if(((a178 == 32 && ((a84 == 32 && (a63 == 36 &&  cf==1 )) && a128 == 2)) && (a81 == 11 && (a0 == 32 && a176 == 3)))) {
printf("POINT: 1672\n");
    		calculate_outputm159(input);
    	} 
    } 
}
 void calculate_outputm160(int input) {
printf("POINT: 1673\n");

    if(((a178 == 32 && ((a160 == 32 && a160 == 32) && a174 == 8)) && ((((input == 3) &&  cf==1 ) && a15 == 10) && a178 == 32))) {
printf("POINT: 1674\n");
    	cf = 0;
    	a54 = 36 ;
    	a69 = 33 ;
    	a32 = 33 ;
    	a97 = 3;
    	a53 = 33 ;
    	a141 = 33 ;
    	a200 = 32 ;
    	a15 = 9;
    	a125 = 33 ;
    	a198 = 32 ;
    	a115 = 33 ;
    	a174 = 7;
    	a135 = 13; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm161(int input) {
printf("POINT: 1675\n");

    if(((a30 == 32 && (a126 == 4 && a45 == 32)) && (a17 == 32 && (a150 == 5 && (( cf==1  && (input == 9)) && a30 == 32))))) {
printf("POINT: 1676\n");
    	cf = 0;
    	a115 = 34 ;
    	a26 = 4;
    	a104 = 34 ;
    	a200 = 34 ;
    	a180 = 34 ;
    	a193 = 9;
    	a56 = 10;
    	a90 = 34 ;
    	a135 = 14;
    	a174 = 9;
    	a154 = 34 ;
    	a165 = 34 ;
    	a126 = 5;
    	a109 = 34 ;
    	a97 = 5;
    	a98 = 8;
    	a175 = 9; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1677\n");

    if(((a55 == 32 && (a109 == 32 && (a160 == 32 && a154 == 32))) && (a56 == 9 && (a174 == 8 && ( cf==1  && (input == 10)))))) {
printf("POINT: 1678\n");
    	cf = 0;
    	a90 = 34 ;
    	a118 = 34 ;
    	a84 = 34 ;
    	a41 = 34 ;
    	a174 = 9;
    	a51 = 33 ;
    	a112 = 34 ;
    	a160 = 34 ;
    	a30 = 34 ;
    	a110 = 7;
    	a104 = 34 ;
    	a200 = 34 ;
    	a131 = 11;
    	a68 = 2;
    	a115 = 34 ;
    	a34 = 34 ;
    	a42 = 36 ;
    	a109 = 34 ;
    	a180 = 34 ;
    	a135 = 11;
    	a32 = 34 ;
    	a46 = 34 ;
    	a69 = 34 ;
    	a178 = 34 ;
    	a39 = 9;
    	a26 = 4;
    	a17 = 34 ;
    	a45 = 34 ;
    	a165 = 34 ;
    	a56 = 10;
    	a127 = 8;
    	a125 = 34 ;
    	a193 = 9;
    	a184 = 7;
    	a167 = 3;
    	a48 = 34 ;
    	a28 = 11;
    	a197 = 7; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1679\n");

    if((((a110 == 6 && (a131 == 10 && a118 == 32)) && a26 == 3) && ((((input == 7) &&  cf==1 ) && a95 == 9) && a34 == 32))) {
printf("POINT: 1680\n");
    	cf = 0;
    	a187 = 4;
    	a55 = 32 ;
    	a37 = 9;
    	a176 = 4;
    	a119 = 32 ;
    	a144 = 32 ;
    	a25 = 6;
    	a153 = 4;
    	a17 = 32 ;
    	a105 = 12;
    	a41 = 32 ;
    	a121 = 32 ;
    	a146 = 32 ;
    	a128 = 3;
    	a152 = 9;
    	a134 = 12;
    	a53 = 34 ;
    	a174 = 8;
    	a196 = 6;
    	a45 = 32 ;
    	a179 = 34 ;
    	a141 = 34 ;
    	a39 = 8;
    	a2 = 5;
    	a169 = 34 ;
    	a16 = 10;
    	a65 = 10;
    	a56 = 9;
    	a154 = 32 ;
    	a93 = 4;
    	a120 = 7;
    	a15 = 10;
    	a140 = 5;
    	a94 = 35 ;
    	a191 = 13; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm162(int input) {
printf("POINT: 1681\n");

    if(((((((input == 1) &&  cf==1 ) && a125 == 32) && a26 == 3) && a196 == 6) && ((a193 == 8 && a55 == 32) && a174 == 8))) {
printf("POINT: 1682\n");
    	cf = 0;
    	a120 = 6;
    	a20 = 4;
    	a112 = 32 ;
    	a118 = 32 ;
    	a128 = 2;
    	a158 = 7;
    	a137 = 32 ;
    	a200 = 36 ;
    	a104 = 32 ;
    	a17 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1683\n");

    if(((a81 == 11 && ( cf==1  && (input == 9))) && (a101 == 32 && ((a34 == 32 && (a127 == 7 && a97 == 4)) && a97 == 4)))) {
printf("POINT: 1684\n");
    	cf = 0;
    	a115 = 34 ;
    	a178 = 34 ;
    	a165 = 34 ;
    	a187 = 5;
    	a196 = 7;
    	a0 = 34 ;
    	a174 = 9;
    	a179 = 34 ;
    	a26 = 4;
    	a98 = 13;
    	a146 = 34 ;
    	a200 = 34 ;
    	a16 = 11;
    	a69 = 34 ;
    	a34 = 34 ;
    	a135 = 14;
    	a193 = 9;
    	a97 = 5;
    	a64 = 9; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1685\n");

    if((((((input == 10) &&  cf==1 ) && a56 == 9) && a65 == 10) && (a126 == 4 && ((a187 == 4 && a55 == 32) && a146 == 32)))) {
printf("POINT: 1686\n");
    	cf = 0;
    	a200 = 36 ;
    	a167 = 2;
    	a180 = 32 ;
    	a20 = 4;
    	a119 = 32 ;
    	a53 = 32 ;
    	a158 = 13;
    	a84 = 32 ;
    	a128 = 2;
    	a120 = 6;
    	a163 = 33 ;
    	a6 = 7; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1687\n");

    if((((a169 == 32 && (a121 == 32 && a140 == 5)) && a187 == 4) && ((((input == 6) &&  cf==1 ) && a176 == 3) && a187 == 4))) {
printf("POINT: 1688\n");
    	cf = 0;
    	a56 = 9;
    	a127 = 7;
    	a68 = 3;
    	a193 = 9;
    	a55 = 34 ;
    	a20 = 4;
    	a126 = 4;
    	a135 = 14;
    	a187 = 5;
    	a17 = 32 ;
    	a41 = 32 ;
    	a25 = 5;
    	a153 = 4;
    	a152 = 9;
    	a178 = 32 ;
    	a176 = 3;
    	a81 = 12;
    	a165 = 34 ;
    	a101 = 32 ;
    	a97 = 5;
    	a30 = 34 ;
    	a169 = 32 ;
    	a48 = 34 ;
    	a26 = 4;
    	a1 = 35 ;
    	a146 = 34 ;
    	a174 = 9;
    	a109 = 34 ;
    	a160 = 34 ;
    	a144 = 34 ;
    	a196 = 7;
    	a16 = 10;
    	a88 = 32 ;
    	a125 = 32 ;
    	a2 = 5;
    	a95 = 9;
    	a28 = 11;
    	a90 = 32 ;
    	a112 = 32 ;
    	a105 = 12;
    	a167 = 2;
    	a118 = 32 ;
    	a200 = 34 ;
    	a32 = 32 ;
    	a46 = 32 ;
    	a140 = 5;
    	a15 = 10;
    	a150 = 5;
    	a22 = 8;
    	a69 = 32 ;
    	a39 = 8;
    	a98 = 12; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm163(int input) {
printf("POINT: 1689\n");

    if(((a0 == 32 && (a84 == 32 && ((a32 == 32 && ( cf==1  && (input == 3))) && a84 == 32))) && (a169 == 32 && a88 == 32))) {
printf("POINT: 1690\n");
    	cf = 0;
    	a81 = 12;
    	a125 = 34 ;
    	a109 = 34 ;
    	a32 = 34 ;
    	a121 = 34 ;
    	a165 = 34 ;
    	a41 = 34 ;
    	a169 = 34 ;
    	a200 = 34 ;
    	a93 = 4;
    	a79 = 7;
    	a172 = 34 ;
    	a135 = 9;
    	a105 = 12;
    	a110 = 7;
    	a164 = 12; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm23(int input) {
printf("POINT: 1691\n");

    if(((((a141 == 32 && a53 == 32) && a120 == 6) && a16 == 10) && ((a169 == 32 && ( cf==1  && a100 == 32)) && a150 == 5))) {
printf("POINT: 1692\n");
printf("POINT: 1693\n");

    	if((((a90 == 32 && a167 == 2) && a125 == 32) && (a45 == 32 && (a125 == 32 && ((a23 == 36 &&  cf==1 ) && a115 == 32))))) {
printf("POINT: 1694\n");
    		calculate_outputm160(input);
    	} 
    } 
printf("POINT: 1695\n");

    if((((a104 == 32 && (( cf==1  && a100 == 34) && a68 == 3)) && a112 == 32) && (a17 == 32 && (a118 == 32 && a39 == 8)))) {
printf("POINT: 1696\n");
printf("POINT: 1697\n");

    	if((((a180 == 32 && (a46 == 32 && (a20 == 4 && (a48 == 32 && a193 == 8)))) && a184 == 6) && (a139 == 35 &&  cf==1 ))) {
printf("POINT: 1698\n");
    		calculate_outputm161(input);
    	} 
    } 
printf("POINT: 1699\n");

    if(((((a26 == 3 && (a81 == 11 && (a125 == 32 && (a100 == 36 &&  cf==1 )))) && a93 == 3) && a79 == 6) && a105 == 11)) {
printf("POINT: 1700\n");
printf("POINT: 1701\n");

    	if(((((a16 == 10 && (a184 == 6 && a179 == 32)) && a0 == 32) && a110 == 6) && (( cf==1  && a171 == 6) && a121 == 32))) {
printf("POINT: 1702\n");
    		calculate_outputm162(input);
    	} 
printf("POINT: 1703\n");

    	if((((a110 == 6 && ( cf==1  && a171 == 8)) && a121 == 32) && (a165 == 32 && ((a119 == 32 && a126 == 4) && a45 == 32)))) {
printf("POINT: 1704\n");
    		calculate_outputm163(input);
    	} 
    } 
}
 void calculate_outputm164(int input) {
printf("POINT: 1705\n");

    if(((a34 == 32 && ((((input == 4) &&  cf==1 ) && a25 == 5) && a46 == 32)) && (a51 == 32 && (a26 == 3 && a160 == 32)))) {
printf("POINT: 1706\n");
    	cf = 0;
    	a126 = 7;
    	a22 = 10;
    	a125 = 36 ;
    	a0 = 35 ;
    	a112 = 36 ;
    	a167 = 3;
    	a150 = 11;
    	a165 = 35 ;
    	a56 = 11;
    	a118 = 36 ;
    	a48 = 36 ;
    	a180 = 36 ;
    	a101 = 35 ;
    	a105 = 17;
    	a28 = 10;
    	a153 = 9;
    	a15 = 13;
    	a81 = 14;
    	a184 = 9;
    	a88 = 33 ;
    	a77 = 5;
    	a154 = 34 ;
    	a37 = 8;
    	a51 = 33 ;
    	a32 = 32 ;
    	a140 = 9;
    	a119 = 35 ;
    	a109 = 34 ;
    	a144 = 35 ;
    	a93 = 2;
    	a128 = 3;
    	a53 = 32 ;
    	a179 = 32 ;
    	a90 = 36 ;
    	a20 = 10;
    	a16 = 14;
    	a174 = 8;
    	a152 = 14;
    	a46 = 32 ;
    	a121 = 36 ;
    	a200 = 33 ;
    	a120 = 9;
    	a17 = 36 ;
    	a2 = 10;
    	a141 = 36 ;
    	a55 = 32 ;
    	a176 = 2;
    	a12 = 36 ;
    	a160 = 35 ;
    	a95 = 14;
    	a39 = 14;
    	a79 = 5;
    	a45 = 35 ;
    	a26 = 9;
    	a115 = 32 ;
    	a178 = 34 ;
    	a41 = 35 ;
    	a86 = 32 ;
    	a131 = 11;
    	a65 = 10;
    	a97 = 5;
    	a169 = 33 ;
    	a68 = 2;
    	a25 = 11;
    	a104 = 33 ;
    	a110 = 7;
    	a146 = 36 ;
    	a127 = 8;
    	a34 = 34 ;
    	a30 = 35 ;
    	a145 = 7; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1707\n");

    if(((a184 == 6 && a154 == 32) && (a176 == 3 && (a169 == 32 && (a160 == 32 && (( cf==1  && (input == 3)) && a2 == 4)))))) {
printf("POINT: 1708\n");
    	cf = 0;
printf("POINT: 1709\n");

    	if(a24 == 5) {
printf("POINT: 1710\n");
    	a184 = 6;
    	a120 = 11;
    	a69 = 35 ;
    	a105 = 11;
    	a56 = 14;
    	a185 = 10;
    	a95 = 13;
    	a53 = 36 ;
    	a118 = 35 ;
    	a178 = 36 ;
    	a121 = 36 ;
    	a187 = 10;
    	a158 = 11;
    	a15 = 14;
    	a45 = 32 ;
    	a174 = 12;
    	a193 = 10;
    	a153 = 7;
    	a28 = 13;
    	a81 = 11;
    	a126 = 5;
    	a84 = 32 ;
    	a176 = 7;
    	a55 = 35 ;
    	a109 = 33 ;
    	a51 = 32 ;
    	a25 = 6;
    	a48 = 36 ;
    	a17 = 36 ;
    	a200 = 36 ;
    	a165 = 35 ;
    	a146 = 32 ;
    	a97 = 8;
    	a160 = 36 ;
    	a68 = 3;
    	a79 = 8;
    	a41 = 35 ;
    	a196 = 9;
    	a119 = 32 ;
    	a11 = 1; 
    	}else {
printf("POINT: 1712\n");
    	a158 = 13;
    	a193 = 12;
    	a163 = 35 ;
    	a84 = 35 ;
    	a69 = 36 ;
    	a187 = 5;
    	a200 = 36 ;
    	a6 = 9;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 1713\n");

    if(((a119 == 32 && ((((input == 9) &&  cf==1 ) && a126 == 4) && a55 == 32)) && (a121 == 32 && (a68 == 3 && a141 == 32)))) {
printf("POINT: 1714\n");
    	cf = 0;
    	a179 = 35 ;
    	a30 = 36 ;
    	a184 = 5;
    	a68 = 5;
    	a37 = 10;
    	a112 = 36 ;
    	a165 = 33 ;
    	a193 = 11;
    	a115 = 36 ;
    	a84 = 35 ;
    	a48 = 36 ;
    	a97 = 10;
    	a187 = 7;
    	a28 = 9;
    	a119 = 36 ;
    	a200 = 36 ;
    	a56 = 8;
    	a39 = 12;
    	a41 = 36 ;
    	a64 = 16;
    	a45 = 36 ;
    	a150 = 8;
    	a93 = 9;
    	a121 = 35 ;
    	a79 = 10;
    	a105 = 17;
    	a180 = 34 ;
    	a169 = 36 ;
    	a90 = 33 ;
    	a154 = 33 ;
    	a2 = 5;
    	a144 = 34 ;
    	a158 = 7;
    	a25 = 7;
    	a69 = 33 ;
    	a160 = 33 ;
    	a140 = 10;
    	a176 = 4;
    	a53 = 35 ;
    	a167 = 6;
    	a46 = 34 ;
    	a32 = 36 ;
    	a196 = 5;
    	a189 = 12; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1715\n");

    if(((a126 == 4 && (a131 == 10 && a90 == 32)) && (a16 == 10 && ((a22 == 8 && ((input == 8) &&  cf==1 )) && a174 == 8)))) {
printf("POINT: 1716\n");
    	cf = 0;
    	a144 = 34 ;
    	a62 = 5;
    	a121 = 33 ;
    	a81 = 15;
    	a158 = 12;
    	a101 = 34 ;
    	a39 = 11;
    	a154 = 34 ;
    	a26 = 7;
    	a118 = 35 ;
    	a48 = 35 ;
    	a79 = 9;
    	a126 = 3;
    	a150 = 7;
    	a56 = 10;
    	a165 = 35 ;
    	a184 = 8;
    	a15 = 13;
    	a32 = 32 ;
    	a180 = 33 ;
    	a187 = 7;
    	a169 = 35 ;
    	a25 = 4;
    	a109 = 32 ;
    	a178 = 35 ;
    	a200 = 36 ;
    	a152 = 12;
    	a125 = 33 ;
    	a120 = 10;
    	a167 = 8;
    	a193 = 7;
    	a53 = 35 ;
    	a196 = 11;
    	a84 = 35 ;
    	a68 = 4;
    	a69 = 33 ;
    	a140 = 10;
    	a30 = 36 ;
    	a17 = 34 ;
    	a160 = 35 ;
    	a179 = 35 ;
    	a115 = 36 ;
    	a176 = 8;
    	a141 = 34 ;
    	a71 = 7; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1717\n");

    if(((a34 == 32 && (a150 == 5 && ( cf==1  && (input == 5)))) && (((a153 == 4 && a160 == 32) && a95 == 9) && a2 == 4))) {
printf("POINT: 1718\n");
    	cf = 0;
    	a46 = 33 ;
    	a112 = 33 ;
    	a200 = 36 ;
    	a158 = 9;
    	a97 = 5;
    	a160 = 33 ;
    	a37 = 9;
    	a193 = 11;
    	a120 = 8;
    	a68 = 5;
    	a15 = 14;
    	a81 = 10;
    	a51 = 33 ;
    	a104 = 36 ;
    	a32 = 33 ;
    	a39 = 10;
    	a146 = 35 ;
    	a43 = 34 ;
    	a41 = 36 ;
    	a152 = 15;
    	a140 = 5;
    	a144 = 33 ;
    	a184 = 10;
    	a93 = 9;
    	a95 = 11;
    	a25 = 4;
    	a45 = 36 ;
    	a17 = 35 ;
    	a105 = 10;
    	a176 = 8;
    	a126 = 9;
    	a90 = 35 ;
    	a26 = 9;
    	a187 = 7;
    	a110 = 11;
    	a2 = 9;
    	a174 = 13;
    	a69 = 33 ;
    	a153 = 9;
    	a196 = 7;
    	a178 = 35 ;
    	a28 = 10;
    	a84 = 36 ;
    	a154 = 36 ;
    	a179 = 33 ;
    	a22 = 13;
    	a169 = 32 ;
    	a136 = 9; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1719\n");

    if((((a141 == 32 && (a152 == 9 && ( cf==1  && (input == 6)))) && a115 == 32) && ((a34 == 32 && a93 == 3) && a28 == 10))) {
printf("POINT: 1720\n");
    	cf = 0;
printf("POINT: 1721\n");

    	if((((a10 == 3 || (a154 == 32 && a86 == 33)) && a71 == 12) || a79 == 11)) {
printf("POINT: 1722\n");
    	a15 = 11;
    	a20 = 5;
    	a53 = 35 ;
    	a110 = 9;
    	a88 = 32 ;
    	a200 = 32 ;
    	a120 = 8;
    	a198 = 34 ;
    	a169 = 34 ;
    	a187 = 9;
    	a12 = 32 ;
    	a97 = 10;
    	a118 = 35 ;
    	a58 = 5;
    	a125 = 34 ;
    	a17 = 35 ;
    	a79 = 10;
    	a39 = 13;
    	a72 = 5; 
    	}else {
printf("POINT: 1724\n");
    	a32 = 33 ;
    	a126 = 5;
    	a55 = 34 ;
    	a84 = 36 ;
    	a110 = 9;
    	a115 = 35 ;
    	a95 = 12;
    	a179 = 36 ;
    	a193 = 10;
    	a56 = 10;
    	a187 = 3;
    	a101 = 36 ;
    	a15 = 16;
    	a53 = 32 ;
    	a109 = 32 ;
    	a2 = 7;
    	a90 = 34 ;
    	a120 = 5;
    	a174 = 7;
    	a68 = 9;
    	a121 = 33 ;
    	a154 = 36 ;
    	a118 = 32 ;
    	a105 = 12;
    	a152 = 9;
    	a150 = 5;
    	a26 = 3;
    	a158 = 10;
    	a196 = 8;
    	a169 = 35 ;
    	a45 = 34 ;
    	a69 = 35 ;
    	a200 = 36 ;
    	a97 = 3;
    	a184 = 9;
    	a79 = 10;
    	a125 = 32 ;
    	a104 = 36 ;
    	a25 = 8;
    	a140 = 7;
    	a183 = 12;
    	a128 = 5;
    	a22 = 12;
    	a144 = 32 ;
    	a165 = 33 ;
    	a7 = 7;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1725\n");

    if(((a169 == 32 && (a48 == 32 && ((input == 7) &&  cf==1 ))) && (a128 == 2 && (a141 == 32 && (a15 == 10 && a178 == 32))))) {
printf("POINT: 1726\n");
    	cf = 0;
    	a85 = 34 ;
    	a200 = 36 ;
    	a196 = 8;
    	a193 = 13;
    	a187 = 8;
    	a69 = 34 ;
    	a158 = 9;
    	a136 = 11; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1727\n");

    if(((a141 == 32 && a109 == 32) && ((((( cf==1  && (input == 10)) && a184 == 6) && a2 == 4) && a176 == 3) && a65 == 10))) {
printf("POINT: 1728\n");
    	cf = 0;
    	a94 = 32 ;
    	a81 = 11;
    	a160 = 32 ;
    	a109 = 32 ;
    	a200 = 36 ;
    	a193 = 7;
    	a28 = 9;
    	a84 = 33 ;
    	a196 = 12;
    	a69 = 33 ;
    	a37 = 9;
    	a187 = 10;
    	a55 = 36 ;
    	a47 = 35 ;
    	a158 = 6; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1729\n");

    if(((a184 == 6 && a153 == 4) && (a32 == 32 && (((( cf==1  && (input == 2)) && a101 == 32) && a146 == 32) && a53 == 32)))) {
printf("POINT: 1730\n");
    	cf = 0;
printf("POINT: 1731\n");

    	if(((!(a191 == 10) && (a19 == 34 && a135 == 13)) || a35 == 33)) {
printf("POINT: 1732\n");
    	a51 = 32 ;
    	a110 = 10;
    	a119 = 32 ;
    	a109 = 36 ;
    	a45 = 34 ;
    	a153 = 8;
    	a125 = 35 ;
    	a184 = 9;
    	a131 = 10;
    	a22 = 13;
    	a165 = 32 ;
    	a37 = 10;
    	a180 = 32 ;
    	a16 = 14;
    	a167 = 4;
    	a12 = 36 ;
    	a53 = 34 ;
    	a105 = 11;
    	a174 = 10;
    	a17 = 32 ;
    	a95 = 10;
    	a77 = 5;
    	a2 = 9;
    	a97 = 6;
    	a169 = 32 ;
    	a128 = 2;
    	a68 = 3;
    	a93 = 9;
    	a39 = 9;
    	a41 = 35 ;
    	a200 = 33 ;
    	a150 = 11;
    	a34 = 34 ;
    	a152 = 11;
    	a127 = 7;
    	a141 = 34 ;
    	a0 = 36 ;
    	a28 = 12;
    	a79 = 11;
    	a48 = 32 ;
    	a154 = 32 ;
    	a15 = 10;
    	a101 = 36 ;
    	a81 = 14;
    	a179 = 35 ;
    	a178 = 35 ;
    	a90 = 36 ;
    	a140 = 9;
    	a32 = 34 ;
    	a144 = 32 ;
    	a146 = 36 ;
    	a126 = 5;
    	a86 = 32 ;
    	a145 = 12; 
    	}else {
printf("POINT: 1734\n");
    	a187 = 8;
    	a198 = 33 ;
    	a112 = 35 ;
    	a193 = 13;
    	a196 = 12;
    	a84 = 35 ;
    	a144 = 36 ;
    	a22 = 11;
    	a200 = 32 ;
    	a69 = 34 ;
    	a86 = 33 ;
    	a177 = 13;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1735\n");

    if(((a30 == 32 && (a65 == 10 && ((input == 1) &&  cf==1 ))) && (((a79 == 6 && a105 == 11) && a101 == 32) && a179 == 32))) {
printf("POINT: 1736\n");
    	cf = 0;
printf("POINT: 1737\n");

    	if((!(a32 == 36) && (!(a43 == 32) && ((!(a105 == 14) || a76 == 10) || a128 == 3)))) {
printf("POINT: 1738\n");
    	a69 = 33 ;
    	a187 = 8;
    	a198 = 34 ;
    	a196 = 12;
    	a58 = 3;
    	a84 = 34 ;
    	a200 = 32 ;
    	a193 = 10;
    	a184 = 12;
    	a76 = 7; 
    	}else {
printf("POINT: 1740\n");
    	a84 = 34 ;
    	a69 = 34 ;
    	a187 = 10;
    	a144 = 32 ;
    	a55 = 32 ;
    	a168 = 35 ;
    	a196 = 5;
    	a30 = 32 ;
    	a81 = 11;
    	a152 = 14;
    	a128 = 5;
    	a109 = 36 ;
    	a193 = 11;
    	a114 = 13;
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm165(int input) {
printf("POINT: 1741\n");

    if((((a119 == 32 && a184 == 6) && a128 == 2) && ((a115 == 32 && (((input == 3) &&  cf==1 ) && a141 == 32)) && a110 == 6))) {
printf("POINT: 1742\n");
    	cf = 0;
printf("POINT: 1743\n");

    	if(a113 == 3) {
printf("POINT: 1744\n");
    	a128 = 2;
    	a152 = 9;
    	a26 = 3;
    	a115 = 32 ;
    	a17 = 32 ;
    	a41 = 32 ;
    	a51 = 32 ;
    	a180 = 32 ;
    	a165 = 32 ;
    	a176 = 3;
    	a184 = 6;
    	a193 = 8;
    	a127 = 7;
    	a55 = 32 ;
    	a101 = 32 ;
    	a93 = 3;
    	a179 = 32 ;
    	a104 = 32 ;
    	a112 = 32 ;
    	a90 = 32 ;
    	a196 = 6;
    	a36 = 33 ;
    	a118 = 32 ;
    	a69 = 32 ;
    	a15 = 10;
    	a120 = 6;
    	a81 = 11;
    	a167 = 2;
    	a125 = 32 ;
    	a178 = 32 ;
    	a56 = 9;
    	a97 = 4;
    	a109 = 32 ;
    	a68 = 3;
    	a110 = 6;
    	a126 = 4;
    	a16 = 10;
    	a37 = 9;
    	a200 = 36 ;
    	a46 = 32 ;
    	a169 = 32 ;
    	a105 = 11;
    	a141 = 32 ;
    	a122 = 35 ;
    	a53 = 32 ;
    	a158 = 8; 
    	}else {
printf("POINT: 1746\n");
    	a56 = 9;
    	a69 = 32 ;
    	a112 = 32 ;
    	a184 = 6;
    	a152 = 9;
    	a172 = 32 ;
    	a16 = 10;
    	a174 = 8;
    	a84 = 32 ;
    	a2 = 4;
    	a200 = 36 ;
    	a140 = 5;
    	a167 = 2;
    	a26 = 3;
    	a47 = 32 ;
    	a53 = 32 ;
    	a39 = 8;
    	a28 = 10;
    	a158 = 6;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 1747\n");

    if(((a118 == 32 && ((a128 == 2 && (a65 == 10 && a65 == 10)) && a17 == 32)) && (a41 == 32 && ( cf==1  && (input == 7))))) {
printf("POINT: 1748\n");
    	cf = 0;
    	a109 = 32 ;
    	a3 = 32 ;
    	a28 = 10;
    	a119 = 33 ;
    	a84 = 32 ;
    	a53 = 32 ;
    	a174 = 7;
    	a112 = 32 ;
    	a2 = 4;
    	a95 = 9;
    	a167 = 2;
    	a39 = 8;
    	a134 = 16;
    	a16 = 10;
    	a160 = 32 ;
    	a140 = 6;
    	a125 = 33 ;
    	a69 = 32 ;
    	a56 = 9;
    	a184 = 5;
    	a26 = 3;
    	a25 = 5;
    	a152 = 8;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm166(int input) {
printf("POINT: 1749\n");

    if(((a34 == 32 && (a153 == 4 && a153 == 4)) && (((a68 == 3 && ((input == 4) &&  cf==1 )) && a184 == 6) && a93 == 3))) {
printf("POINT: 1750\n");
    	cf = 0;
    	a97 = 10;
    	a126 = 8;
    	a154 = 36 ;
    	a140 = 8;
    	a51 = 35 ;
    	a196 = 5;
    	a93 = 7;
    	a34 = 36 ;
    	a28 = 13;
    	a146 = 35 ;
    	a30 = 34 ;
    	a179 = 36 ;
    	a81 = 13;
    	a128 = 1;
    	a12 = 34 ;
    	a48 = 34 ;
    	a131 = 9;
    	a167 = 5;
    	a86 = 34 ;
    	a193 = 10;
    	a22 = 8;
    	a45 = 35 ;
    	a160 = 36 ;
    	a105 = 17;
    	a125 = 32 ;
    	a2 = 3;
    	a68 = 8;
    	a200 = 32 ;
    	a56 = 15;
    	a144 = 32 ;
    	a39 = 7;
    	a187 = 10;
    	a88 = 34 ;
    	a65 = 11;
    	a55 = 33 ;
    	a46 = 34 ;
    	a90 = 35 ;
    	a153 = 9;
    	a53 = 35 ;
    	a32 = 33 ;
    	a198 = 33 ;
    	a152 = 12;
    	a119 = 34 ;
    	a118 = 36 ;
    	a66 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1751\n");

    if(((a174 == 8 && (a84 == 32 && ((input == 5) &&  cf==1 ))) && ((a90 == 32 && (a45 == 32 && a65 == 10)) && a101 == 32))) {
printf("POINT: 1752\n");
    	cf = 0;
    	a150 = 8;
    	a119 = 34 ;
    	a68 = 3;
    	a41 = 35 ;
    	a125 = 33 ;
    	a97 = 10;
    	a200 = 34 ;
    	a30 = 36 ;
    	a53 = 36 ;
    	a110 = 6;
    	a101 = 35 ;
    	a141 = 33 ;
    	a171 = 7;
    	a22 = 12;
    	a180 = 35 ;
    	a32 = 32 ;
    	a51 = 35 ;
    	a20 = 10;
    	a167 = 8;
    	a65 = 14;
    	a69 = 35 ;
    	a193 = 14;
    	a121 = 32 ;
    	a165 = 35 ;
    	a174 = 14;
    	a126 = 8;
    	a179 = 36 ;
    	a17 = 32 ;
    	a104 = 35 ;
    	a160 = 33 ;
    	a184 = 10;
    	a16 = 15;
    	a169 = 36 ;
    	a120 = 11;
    	a56 = 14;
    	a146 = 33 ;
    	a105 = 13;
    	a93 = 6;
    	a15 = 15;
    	a95 = 11;
    	a88 = 36 ;
    	a2 = 3;
    	a39 = 11;
    	a127 = 13;
    	a48 = 35 ;
    	a153 = 4;
    	a135 = 10;
    	a12 = 33 ;
    	a115 = 35 ;
    	a84 = 36 ;
    	a178 = 32 ;
    	a176 = 2;
    	a0 = 33 ;
    	a28 = 12;
    	a45 = 32 ;
    	a26 = 6;
    	a131 = 11;
    	a34 = 35 ;
    	a140 = 8;
    	a154 = 36 ;
    	a37 = 15;
    	a112 = 33 ;
    	a118 = 36 ;
    	a90 = 36 ;
    	a55 = 36 ;
    	a79 = 6;
    	a46 = 33 ;
    	a25 = 8;
    	a128 = 2;
    	a50 = 3; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1753\n");

    if(((a101 == 32 && a22 == 8) && (a51 == 32 && (((a121 == 32 && ((input == 1) &&  cf==1 )) && a28 == 10) && a45 == 32)))) {
printf("POINT: 1754\n");
    	cf = 0;
    	a37 = 8;
    	a101 = 33 ;
    	a81 = 14;
    	a2 = 7;
    	a146 = 32 ;
    	a127 = 13;
    	a144 = 36 ;
    	a69 = 35 ;
    	a39 = 11;
    	a187 = 5;
    	a196 = 11;
    	a167 = 6;
    	a125 = 33 ;
    	a198 = 32 ;
    	a193 = 11;
    	a20 = 5;
    	a119 = 35 ;
    	a41 = 33 ;
    	a88 = 35 ;
    	a93 = 7;
    	a169 = 35 ;
    	a120 = 11;
    	a12 = 36 ;
    	a179 = 35 ;
    	a90 = 32 ;
    	a55 = 33 ;
    	a110 = 8;
    	a152 = 15;
    	a28 = 14;
    	a128 = 6;
    	a141 = 36 ;
    	a131 = 13;
    	a30 = 32 ;
    	a109 = 36 ;
    	a95 = 15;
    	a45 = 34 ;
    	a112 = 35 ;
    	a115 = 35 ;
    	a84 = 35 ;
    	a17 = 35 ;
    	a184 = 12;
    	a200 = 32 ;
    	a65 = 13;
    	a48 = 34 ;
    	a32 = 34 ;
    	a154 = 36 ;
    	a54 = 35 ; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1755\n");

    if(((((((a112 == 32 && a146 == 32) && a153 == 4) && a17 == 32) && a127 == 7) && a180 == 32) && ((input == 8) &&  cf==1 ))) {
printf("POINT: 1756\n");
    	cf = 0;
    	a109 = 33 ;
    	a119 = 36 ;
    	a79 = 10;
    	a32 = 35 ;
    	a118 = 35 ;
    	a193 = 9;
    	a16 = 10;
    	a180 = 36 ;
    	a110 = 9;
    	a127 = 9;
    	a17 = 33 ;
    	a112 = 32 ;
    	a115 = 33 ;
    	a97 = 10;
    	a39 = 7;
    	a56 = 14;
    	a84 = 32 ;
    	a65 = 10;
    	a146 = 36 ;
    	a81 = 11;
    	a154 = 33 ;
    	a197 = 8;
    	a45 = 32 ;
    	a46 = 32 ;
    	a53 = 36 ;
    	a28 = 10;
    	a160 = 36 ;
    	a101 = 32 ;
    	a200 = 34 ;
    	a135 = 11;
    	a140 = 10;
    	a34 = 33 ;
    	a95 = 13;
    	a26 = 8;
    	a22 = 13;
    	a104 = 35 ;
    	a152 = 15;
    	a105 = 14;
    	a190 = 11; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1757\n");

    if(((a165 == 32 && ( cf==1  && (input == 7))) && (a176 == 3 && (((a193 == 8 && a150 == 5) && a48 == 32) && a101 == 32)))) {
printf("POINT: 1758\n");
    	cf = 0;
    	a196 = 10;
    	a30 = 33 ;
    	a39 = 9;
    	a28 = 15;
    	a81 = 13;
    	a128 = 3;
    	a115 = 35 ;
    	a110 = 7;
    	a167 = 6;
    	a131 = 13;
    	a69 = 35 ;
    	a144 = 36 ;
    	a184 = 9;
    	a45 = 34 ;
    	a32 = 33 ;
    	a95 = 13;
    	a169 = 33 ;
    	a101 = 36 ;
    	a20 = 3;
    	a90 = 32 ;
    	a179 = 36 ;
    	a141 = 34 ;
    	a41 = 32 ;
    	a48 = 34 ;
    	a93 = 6;
    	a2 = 7;
    	a198 = 32 ;
    	a109 = 36 ;
    	a119 = 36 ;
    	a154 = 36 ;
    	a146 = 32 ;
    	a37 = 10;
    	a120 = 12;
    	a127 = 8;
    	a200 = 32 ;
    	a12 = 36 ;
    	a55 = 34 ;
    	a84 = 35 ;
    	a17 = 32 ;
    	a88 = 35 ;
    	a193 = 7;
    	a187 = 9;
    	a65 = 15;
    	a152 = 8;
    	a112 = 36 ;
    	a125 = 33 ;
    	a54 = 35 ; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1759\n");

    if(((a20 == 4 && a184 == 6) && (a32 == 32 && ((a25 == 5 && (a115 == 32 && ( cf==1  && (input == 2)))) && a193 == 8)))) {
printf("POINT: 1760\n");
    	cf = 0;
    	a41 = 35 ;
    	a146 = 33 ;
    	a196 = 5;
    	a131 = 13;
    	a34 = 33 ;
    	a48 = 36 ;
    	a144 = 33 ;
    	a15 = 14;
    	a56 = 14;
    	a198 = 33 ;
    	a200 = 32 ;
    	a93 = 7;
    	a128 = 8;
    	a30 = 33 ;
    	a160 = 33 ;
    	a169 = 35 ;
    	a86 = 36 ;
    	a187 = 5;
    	a89 = 35 ; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1761\n");

    if(((a37 == 9 && (( cf==1  && (input == 9)) && a179 == 32)) && (a184 == 6 && ((a110 == 6 && a2 == 4) && a125 == 32)))) {
printf("POINT: 1762\n");
    	cf = 0;
    	a2 = 9;
    	a193 = 11;
    	a121 = 33 ;
    	a128 = 1;
    	a109 = 35 ;
    	a150 = 5;
    	a32 = 36 ;
    	a68 = 6;
    	a79 = 10;
    	a118 = 36 ;
    	a144 = 32 ;
    	a26 = 8;
    	a140 = 10;
    	a158 = 10;
    	a105 = 14;
    	a196 = 11;
    	a95 = 11;
    	a174 = 12;
    	a187 = 9;
    	a200 = 36 ;
    	a115 = 33 ;
    	a69 = 34 ;
    	a179 = 36 ;
    	a30 = 35 ;
    	a25 = 10;
    	a125 = 32 ;
    	a22 = 12;
    	a184 = 12;
    	a84 = 36 ;
    	a104 = 33 ;
    	a101 = 35 ;
    	a154 = 36 ;
    	a81 = 14;
    	a15 = 12;
    	a90 = 33 ;
    	a110 = 11;
    	a152 = 14;
    	a53 = 36 ;
    	a169 = 32 ;
    	a45 = 36 ;
    	a97 = 8;
    	a56 = 15;
    	a55 = 34 ;
    	a165 = 34 ;
    	a126 = 5;
    	a120 = 12;
    	a183 = 12;
    	a7 = 7; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1763\n");

    if(((((a165 == 32 && ( cf==1  && (input == 10))) && a119 == 32) && a65 == 10) && ((a26 == 3 && a146 == 32) && a16 == 10))) {
printf("POINT: 1764\n");
    	cf = 0;
printf("POINT: 1765\n");

    	if(((!(a94 == 36) && (a179 == 32 && a186 == 34)) || a48 == 36)) {
printf("POINT: 1766\n");
    	a144 = 34 ;
    	a180 = 32 ;
    	a30 = 33 ;
    	a15 = 10;
    	a153 = 7;
    	a110 = 8;
    	a25 = 10;
    	a41 = 32 ;
    	a184 = 9;
    	a32 = 33 ;
    	a125 = 33 ;
    	a169 = 35 ;
    	a196 = 7;
    	a93 = 9;
    	a200 = 36 ;
    	a127 = 9;
    	a128 = 1;
    	a26 = 3;
    	a167 = 7;
    	a137 = 34 ;
    	a37 = 11;
    	a55 = 34 ;
    	a104 = 35 ;
    	a160 = 35 ;
    	a118 = 32 ;
    	a53 = 32 ;
    	a97 = 10;
    	a48 = 36 ;
    	a81 = 16;
    	a158 = 7;
    	a64 = 10; 
    	}else {
printf("POINT: 1768\n");
    	a196 = 12;
    	a158 = 12;
    	a81 = 15;
    	a30 = 35 ;
    	a62 = 5;
    	a200 = 36 ;
    	a128 = 1;
    	a174 = 10;
    	a55 = 35 ;
    	a144 = 36 ;
    	a152 = 8;
    	a187 = 9;
    	a71 = 6;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 1769\n");

    if(((a2 == 4 && (a34 == 32 && (a140 == 5 && (a0 == 32 && ( cf==1  && (input == 3)))))) && (a121 == 32 && a88 == 32))) {
printf("POINT: 1770\n");
    	cf = 0;
printf("POINT: 1771\n");

    	if((a86 == 34 && !(a6 == 9))) {
printf("POINT: 1772\n");
    	a53 = 36 ;
    	a184 = 6;
    	a152 = 12;
    	a167 = 6;
    	a174 = 10;
    	a77 = 9;
    	a51 = 35 ;
    	a69 = 32 ;
    	a150 = 9;
    	a196 = 6;
    	a15 = 11;
    	a160 = 35 ;
    	a95 = 11;
    	a0 = 36 ;
    	a17 = 32 ;
    	a101 = 32 ;
    	a144 = 35 ;
    	a20 = 7;
    	a86 = 32 ;
    	a41 = 35 ;
    	a46 = 34 ;
    	a121 = 32 ;
    	a120 = 8;
    	a79 = 10;
    	a118 = 34 ;
    	a16 = 15;
    	a32 = 35 ;
    	a56 = 13;
    	a104 = 35 ;
    	a65 = 15;
    	a88 = 36 ;
    	a22 = 10;
    	a179 = 32 ;
    	a125 = 34 ;
    	a34 = 32 ;
    	a26 = 8;
    	a153 = 8;
    	a131 = 10;
    	a2 = 7;
    	a110 = 8;
    	a37 = 9;
    	a105 = 16;
    	a81 = 14;
    	a90 = 35 ;
    	a45 = 36 ;
    	a25 = 9;
    	a48 = 34 ;
    	a12 = 36 ;
    	a126 = 7;
    	a84 = 35 ;
    	a200 = 33 ;
    	a154 = 35 ;
    	a112 = 36 ;
    	a147 = 1; 
    	}else {
printf("POINT: 1774\n");
    	a25 = 4;
    	a174 = 11;
    	a125 = 36 ;
    	a160 = 33 ;
    	a69 = 34 ;
    	a26 = 7;
    	a126 = 3;
    	a16 = 11;
    	a140 = 4;
    	a101 = 36 ;
    	a193 = 7;
    	a68 = 4;
    	a200 = 34 ;
    	a146 = 32 ;
    	a15 = 12;
    	a2 = 7;
    	a178 = 34 ;
    	a48 = 32 ;
    	a105 = 15;
    	a165 = 32 ;
    	a152 = 10;
    	a41 = 33 ;
    	a46 = 33 ;
    	a180 = 32 ;
    	a135 = 14;
    	a45 = 35 ;
    	a53 = 36 ;
    	a119 = 33 ;
    	a169 = 35 ;
    	a56 = 8;
    	a39 = 11;
    	a120 = 9;
    	a22 = 7;
    	a1 = 35 ;
    	a90 = 36 ;
    	a20 = 8;
    	a32 = 35 ;
    	a97 = 6;
    	a37 = 13;
    	a112 = 36 ;
    	a176 = 7;
    	a167 = 4;
    	a95 = 8;
    	a28 = 9;
    	a104 = 36 ;
    	a127 = 8;
    	a17 = 34 ;
    	a153 = 7;
    	a84 = 36 ;
    	a88 = 35 ;
    	a98 = 12;
    	}printf("%d\n", 25);  
    } 
printf("POINT: 1775\n");

    if(((a110 == 6 && a79 == 6) && ((((((input == 6) &&  cf==1 ) && a39 == 8) && a184 == 6) && a16 == 10) && a84 == 32))) {
printf("POINT: 1776\n");
    	cf = 0;
printf("POINT: 1777\n");

    	if((!(a58 == 9) && a150 == 11)) {
printf("POINT: 1778\n");
    	a200 = 32 ;
    	a30 = 35 ;
    	a140 = 8;
    	a2 = 10;
    	a125 = 36 ;
    	a12 = 35 ;
    	a198 = 33 ;
    	a179 = 33 ;
    	a146 = 35 ;
    	a167 = 2;
    	a68 = 5;
    	a48 = 36 ;
    	a131 = 15;
    	a46 = 33 ;
    	a128 = 7;
    	a193 = 12;
    	a160 = 36 ;
    	a51 = 36 ;
    	a28 = 9;
    	a152 = 9;
    	a86 = 34 ;
    	a90 = 36 ;
    	a55 = 33 ;
    	a22 = 14;
    	a118 = 35 ;
    	a53 = 36 ;
    	a93 = 5;
    	a32 = 34 ;
    	a56 = 15;
    	a119 = 35 ;
    	a187 = 7;
    	a126 = 6;
    	a105 = 11;
    	a144 = 36 ;
    	a153 = 8;
    	a45 = 36 ;
    	a81 = 12;
    	a65 = 13;
    	a88 = 34 ;
    	a39 = 8;
    	a196 = 10;
    	a34 = 33 ;
    	a97 = 10;
    	a154 = 35 ;
    	a66 = 10; 
    	}else {
printf("POINT: 1780\n");
    	a121 = 35 ;
    	a154 = 36 ;
    	a196 = 12;
    	a46 = 36 ;
    	a32 = 36 ;
    	a183 = 12;
    	a169 = 35 ;
    	a140 = 6;
    	a174 = 12;
    	a187 = 5;
    	a118 = 36 ;
    	a30 = 35 ;
    	a165 = 33 ;
    	a69 = 33 ;
    	a184 = 10;
    	a26 = 7;
    	a141 = 34 ;
    	a37 = 10;
    	a53 = 33 ;
    	a152 = 11;
    	a128 = 8;
    	a115 = 35 ;
    	a126 = 8;
    	a97 = 10;
    	a95 = 12;
    	a144 = 35 ;
    	a112 = 34 ;
    	a79 = 8;
    	a200 = 36 ;
    	a153 = 7;
    	a55 = 36 ;
    	a45 = 35 ;
    	a158 = 10;
    	a101 = 33 ;
    	a81 = 14;
    	a56 = 10;
    	a22 = 9;
    	a109 = 33 ;
    	a7 = 5;
    	}printf("%d\n", 21);  
    } 
}
 void calculate_outputm167(int input) {
printf("POINT: 1781\n");

    if((((a65 == 10 && (a165 == 32 && (a119 == 32 && (( cf==1  && (input == 10)) && a28 == 10)))) && a150 == 5) && a193 == 8)) {
printf("POINT: 1782\n");
    	cf = 0;
    	a48 = 32 ;
    	a32 = 32 ;
    	a58 = 5;
    	a109 = 33 ;
    	a144 = 32 ;
    	a112 = 32 ;
    	a187 = 4;
    	a15 = 10;
    	a179 = 34 ;
    	a2 = 4;
    	a55 = 33 ;
    	a45 = 33 ;
    	a198 = 34 ;
    	a125 = 33 ;
    	a200 = 32 ;
    	a105 = 11;
    	a46 = 32 ;
    	a140 = 4;
    	a160 = 32 ;
    	a28 = 9;
    	a104 = 32 ;
    	a174 = 9;
    	a37 = 9;
    	a95 = 9;
    	a16 = 10;
    	a184 = 6;
    	a72 = 4; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1783\n");

    if(((a119 == 32 && a152 == 9) && (a81 == 11 && (a196 == 6 && ((a12 == 32 && ((input == 9) &&  cf==1 )) && a125 == 32))))) {
printf("POINT: 1784\n");
    	cf = 0;
    	a2 = 4;
    	a53 = 34 ;
    	a144 = 32 ;
    	a55 = 34 ;
    	a112 = 32 ;
    	a105 = 11;
    	a51 = 34 ;
    	a142 = 35 ;
    	a37 = 10;
    	a68 = 4;
    	a128 = 3;
    	a97 = 5;
    	a179 = 34 ;
    	a184 = 6;
    	a193 = 9;
    	a200 = 34 ;
    	a135 = 10;
    	a12 = 34 ;
    	a16 = 11;
    	a141 = 34 ;
    	a15 = 11;
    	a196 = 7;
    	a104 = 34 ;
    	a126 = 5;
    	a180 = 34 ;
    	a146 = 34 ;
    	a109 = 34 ;
    	a25 = 5;
    	a45 = 34 ;
    	a125 = 34 ;
    	a171 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1785\n");

    if(((a30 == 32 && (a20 == 4 && a88 == 32)) && (a140 == 5 && (a41 == 32 && (((input == 1) &&  cf==1 ) && a109 == 32))))) {
printf("POINT: 1786\n");
    	cf = 0;
    	a127 = 8;
    	a115 = 33 ;
    	a101 = 33 ;
    	a84 = 33 ;
    	a48 = 32 ;
    	a152 = 8;
    	a179 = 33 ;
    	a17 = 34 ;
    	a41 = 32 ;
    	a167 = 2;
    	a39 = 9;
    	a193 = 7;
    	a125 = 33 ;
    	a150 = 5;
    	a68 = 2;
    	a169 = 32 ;
    	a28 = 9;
    	a176 = 2;
    	a86 = 36 ;
    	a45 = 33 ;
    	a93 = 3;
    	a109 = 33 ;
    	a29 = 34 ;
    	a200 = 33 ;
    	a154 = 34 ;
    	a162 = 33 ;
    	a140 = 4;
    	a30 = 33 ;
    	a79 = 5;
    	a65 = 9;
    	a187 = 5;
    	a174 = 7; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm168(int input) {
printf("POINT: 1787\n");

    if((((a46 == 32 && ( cf==1  && (input == 4))) && a105 == 11) && (((a187 == 4 && a109 == 32) && a26 == 3) && a32 == 32))) {
printf("POINT: 1788\n");
    	cf = 0;
printf("POINT: 1789\n");

    	if((a19 == 33 || a61 == 2)) {
printf("POINT: 1790\n");
    	a2 = 3;
    	a53 = 33 ;
    	a114 = 14;
    	a160 = 33 ;
    	a32 = 33 ;
    	a126 = 3;
    	a105 = 10;
    	a187 = 5;
    	a46 = 33 ;
    	a48 = 34 ;
    	a8 = 12; 
    	}else {
printf("POINT: 1792\n");
    	a193 = 9;
    	a95 = 9;
    	a160 = 33 ;
    	a53 = 33 ;
    	a84 = 33 ;
    	a48 = 34 ;
    	a125 = 33 ;
    	a79 = 5;
    	a158 = 7;
    	a25 = 5;
    	a15 = 10;
    	a179 = 34 ;
    	a30 = 33 ;
    	a42 = 32 ;
    	a109 = 33 ;
    	a200 = 36 ;
    	a174 = 7;
    	a32 = 33 ;
    	a105 = 10;
    	a140 = 4;
    	a115 = 33 ;
    	a90 = 32 ;
    	a16 = 10;
    	a45 = 33 ;
    	a64 = 11;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 1793\n");

    if(((a48 == 32 && ( cf==1  && (input == 7))) && ((((a53 == 32 && a180 == 32) && a53 == 32) && a154 == 32) && a125 == 32))) {
printf("POINT: 1794\n");
    	cf = 0;
    	a47 = 36 ;
    	a158 = 6;
    	a200 = 36 ;
    	a59 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm169(int input) {
printf("POINT: 1795\n");

    if((((a141 == 32 && ( cf==1  && (input == 5))) && a154 == 32) && (a176 == 3 && ((a184 == 6 && a144 == 32) && a41 == 32)))) {
printf("POINT: 1796\n");
    	cf = 0;
    	a45 = 34 ;
    	a3 = 34 ;
    	a119 = 34 ;
    	a39 = 9;
    	a134 = 13;
    	a150 = 6;
    	a183 = 10; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm24(int input) {
printf("POINT: 1797\n");

    if(((a141 == 32 && ((a17 == 32 && a48 == 32) && a45 == 32)) && (a88 == 32 && ((a114 == 10 &&  cf==1 ) && a153 == 4)))) {
printf("POINT: 1798\n");
printf("POINT: 1799\n");

    	if((a169 == 32 && (a65 == 10 && ((((a37 == 9 && (a82 == 36 &&  cf==1 )) && a126 == 4) && a68 == 3) && a15 == 10)))) {
printf("POINT: 1800\n");
    		calculate_outputm164(input);
    	} 
    } 
printf("POINT: 1801\n");

    if((((a118 == 32 && (a17 == 32 && a15 == 10)) && a167 == 2) && (a41 == 32 && (( cf==1  && a114 == 12) && a22 == 8)))) {
printf("POINT: 1802\n");
printf("POINT: 1803\n");

    	if((((a176 == 3 && (( cf==1  && a147 == 1) && a109 == 32)) && a196 == 6) && ((a196 == 6 && a125 == 32) && a118 == 32))) {
printf("POINT: 1804\n");
    		calculate_outputm165(input);
    	} 
    } 
printf("POINT: 1805\n");

    if((a174 == 8 && (a45 == 32 && (a150 == 5 && (a93 == 3 && ((a20 == 4 && (a114 == 13 &&  cf==1 )) && a141 == 32)))))) {
printf("POINT: 1806\n");
printf("POINT: 1807\n");

    	if(((a53 == 32 && (( cf==1  && a168 == 35) && a174 == 8)) && (((a112 == 32 && a127 == 7) && a101 == 32) && a39 == 8))) {
printf("POINT: 1808\n");
    		calculate_outputm166(input);
    	} 
    } 
printf("POINT: 1809\n");

    if((((a114 == 14 &&  cf==1 ) && a179 == 32) && ((a39 == 8 && (a56 == 9 && (a84 == 32 && a127 == 7))) && a68 == 3))) {
printf("POINT: 1810\n");
printf("POINT: 1811\n");

    	if(((a174 == 8 && ((a84 == 32 && (a0 == 32 && ( cf==1  && a8 == 12))) && a169 == 32)) && (a39 == 8 && a34 == 32))) {
printf("POINT: 1812\n");
    		calculate_outputm167(input);
    	} 
    } 
printf("POINT: 1813\n");

    if(((a41 == 32 && ((a187 == 4 && a53 == 32) && a146 == 32)) && (a51 == 32 && (( cf==1  && a114 == 15) && a34 == 32)))) {
printf("POINT: 1814\n");
printf("POINT: 1815\n");

    	if(((a160 == 32 && (a125 == 32 && ( cf==1  && a47 == 34))) && (((a32 == 32 && a22 == 8) && a180 == 32) && a20 == 4))) {
printf("POINT: 1816\n");
    		calculate_outputm168(input);
    	} 
    } 
printf("POINT: 1817\n");

    if((((a180 == 32 && (a34 == 32 && a178 == 32)) && a69 == 32) && ((a180 == 32 && ( cf==1  && a114 == 16)) && a39 == 8))) {
printf("POINT: 1818\n");
printf("POINT: 1819\n");

    	if((((a26 == 3 && (a119 == 32 && (a105 == 11 && ( cf==1  && a74 == 33)))) && a93 == 3) && (a150 == 5 && a30 == 32))) {
printf("POINT: 1820\n");
    		calculate_outputm169(input);
    	} 
    } 
}
 void calculate_outputm170(int input) {
printf("POINT: 1821\n");

    if((((a169 == 32 && (a153 == 4 && (((input == 7) &&  cf==1 ) && a101 == 32))) && a68 == 3) && (a55 == 32 && a196 == 6))) {
printf("POINT: 1822\n");
    	cf = 0;
    	a153 = 4;
    	a119 = 32 ;
    	a32 = 32 ;
    	a26 = 3;
    	a134 = 13;
    	a41 = 32 ;
    	a112 = 32 ;
    	a25 = 5;
    	a101 = 32 ;
    	a118 = 32 ;
    	a95 = 9;
    	a3 = 35 ;
    	a48 = 32 ;
    	a104 = 32 ;
    	a12 = 32 ;
    	a16 = 10;
    	a196 = 6;
    	a56 = 9;
    	a20 = 4;
    	a106 = 9; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1823\n");

    if((((a146 == 32 && a45 == 32) && a12 == 32) && ((a176 == 3 && (((input == 10) &&  cf==1 ) && a176 == 3)) && a120 == 6))) {
printf("POINT: 1824\n");
    	cf = 0;
    	a47 = 33 ;
    	a125 = 32 ;
    	a68 = 3;
    	a178 = 32 ;
    	a105 = 11;
    	a51 = 32 ;
    	a200 = 36 ;
    	a2 = 4;
    	a119 = 32 ;
    	a196 = 6;
    	a158 = 6;
    	a93 = 3;
    	a174 = 8;
    	a193 = 8;
    	a60 = 6; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1825\n");

    if(((((a126 == 4 && ( cf==1  && (input == 3))) && a150 == 5) && a154 == 32) && (a34 == 32 && (a17 == 32 && a46 == 32)))) {
printf("POINT: 1826\n");
    	cf = 0;
    	a55 = 33 ;
    	a22 = 7;
    	a68 = 2;
    	a200 = 36 ;
    	a62 = 6;
    	a158 = 12;
    	a154 = 33 ;
    	a105 = 10;
    	a179 = 33 ;
    	a51 = 33 ;
    	a71 = 13; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm171(int input) {
printf("POINT: 1827\n");

    if(((((a126 == 4 && a121 == 32) && a167 == 2) && a140 == 5) && ((((input == 9) &&  cf==1 ) && a112 == 32) && a105 == 11))) {
printf("POINT: 1828\n");
    	cf = 0;
    	a105 = 11;
    	a15 = 10;
    	a3 = 35 ;
    	a178 = 32 ;
    	a41 = 32 ;
    	a101 = 32 ;
    	a126 = 4;
    	a45 = 32 ;
    	a110 = 6;
    	a187 = 4;
    	a119 = 32 ;
    	a20 = 4;
    	a179 = 32 ;
    	a84 = 32 ;
    	a134 = 13;
    	a196 = 6;
    	a22 = 8;
    	a53 = 32 ;
    	a39 = 8;
    	a90 = 32 ;
    	a25 = 5;
    	a12 = 32 ;
    	a153 = 4;
    	a125 = 32 ;
    	a180 = 32 ;
    	a184 = 6;
    	a2 = 4;
    	a48 = 32 ;
    	a176 = 3;
    	a144 = 32 ;
    	a152 = 9;
    	a120 = 6;
    	a167 = 2;
    	a65 = 10;
    	a51 = 32 ;
    	a28 = 10;
    	a160 = 32 ;
    	a193 = 8;
    	a141 = 32 ;
    	a95 = 9;
    	a32 = 32 ;
    	a93 = 3;
    	a106 = 7; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1829\n");

    if(((a118 == 32 && (a97 == 4 && a20 == 4)) && (((( cf==1  && (input == 7)) && a146 == 32) && a79 == 6) && a120 == 6))) {
printf("POINT: 1830\n");
    	cf = 0;
    	a169 = 32 ;
    	a56 = 9;
    	a16 = 10;
    	a174 = 8;
    	a30 = 32 ;
    	a34 = 32 ;
    	a109 = 32 ;
    	a127 = 7;
    	a55 = 32 ;
    	a88 = 32 ;
    	a68 = 3;
    	a17 = 32 ;
    	a46 = 32 ;
    	a154 = 32 ;
    	a26 = 3; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1831\n");

    if((((a153 == 4 && (a0 == 32 && ((input == 5) &&  cf==1 ))) && a141 == 32) && (a25 == 5 && (a69 == 32 && a178 == 32)))) {
printf("POINT: 1832\n");
    	cf = 0;
    	a16 = 10;
    	a128 = 1;
    	a118 = 33 ;
    	a93 = 3;
    	a179 = 32 ;
    	a101 = 32 ;
    	a26 = 3;
    	a19 = 35 ;
    	a0 = 33 ;
    	a20 = 4;
    	a165 = 32 ;
    	a153 = 4;
    	a109 = 32 ;
    	a45 = 32 ;
    	a154 = 33 ;
    	a79 = 6;
    	a12 = 32 ;
    	a55 = 33 ;
    	a69 = 33 ;
    	a34 = 32 ;
    	a81 = 11;
    	a32 = 32 ;
    	a127 = 7;
    	a25 = 5;
    	a56 = 9;
    	a112 = 32 ;
    	a2 = 3;
    	a17 = 32 ;
    	a104 = 32 ;
    	a140 = 4;
    	a178 = 33 ;
    	a121 = 33 ;
    	a200 = 33 ;
    	a131 = 10;
    	a68 = 3;
    	a141 = 32 ;
    	a88 = 32 ;
    	a37 = 9;
    	a174 = 7;
    	a65 = 10;
    	a126 = 3;
    	a146 = 33 ;
    	a176 = 3;
    	a30 = 32 ;
    	a167 = 1;
    	a53 = 33 ;
    	a152 = 8;
    	a41 = 32 ;
    	a120 = 6;
    	a86 = 35 ;
    	a150 = 5;
    	a144 = 33 ;
    	a115 = 32 ;
    	a169 = 32 ;
    	a184 = 6;
    	a97 = 3;
    	a105 = 11;
    	a48 = 32 ;
    	a46 = 32 ;
    	a59 = 8; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm172(int input) {
printf("POINT: 1833\n");

    if((( cf==1  && (input == 10)) && (a131 == 10 && (a152 == 9 && (((a121 == 32 && a46 == 32) && a12 == 32) && a165 == 32))))) {
printf("POINT: 1834\n");
    	cf = 0;
printf("POINT: 1835\n");

    	if((!(a111 == 35) || a31 == 32)) {
printf("POINT: 1836\n");
    	a118 = 35 ;
    	a15 = 10;
    	a20 = 7;
    	a125 = 32 ;
    	a79 = 8;
    	a69 = 36 ;
    	a88 = 32 ;
    	a12 = 36 ;
    	a198 = 34 ;
    	a17 = 34 ;
    	a84 = 36 ;
    	a120 = 11;
    	a58 = 5;
    	a196 = 7;
    	a53 = 32 ;
    	a169 = 36 ;
    	a200 = 32 ;
    	a97 = 10;
    	a39 = 13;
    	a110 = 7;
    	a72 = 5; 
    	}else {
printf("POINT: 1838\n");
    	a140 = 11;
    	a65 = 9;
    	a97 = 9;
    	a34 = 36 ;
    	a131 = 13;
    	a12 = 33 ;
    	a22 = 9;
    	a84 = 32 ;
    	a119 = 36 ;
    	a93 = 9;
    	a105 = 17;
    	a17 = 34 ;
    	a101 = 36 ;
    	a16 = 12;
    	a179 = 32 ;
    	a193 = 13;
    	a2 = 7;
    	a174 = 10;
    	a45 = 33 ;
    	a165 = 33 ;
    	a184 = 11;
    	a88 = 33 ;
    	a51 = 33 ;
    	a15 = 11;
    	a144 = 35 ;
    	a118 = 36 ;
    	a32 = 35 ;
    	a128 = 7;
    	a153 = 7;
    	a109 = 35 ;
    	a126 = 6;
    	a125 = 36 ;
    	a25 = 11;
    	a200 = 32 ;
    	a90 = 36 ;
    	a48 = 36 ;
    	a141 = 36 ;
    	a198 = 36 ;
    	a146 = 35 ;
    	a196 = 9;
    	a112 = 34 ;
    	a41 = 36 ;
    	a3 = 34 ;
    	a120 = 8;
    	a176 = 8;
    	a127 = 10;
    	a160 = 36 ;
    	a69 = 36 ;
    	a20 = 5;
    	a81 = 12;
    	a39 = 14;
    	a147 = 3;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 1839\n");

    if((((a12 == 32 && a26 == 3) && a69 == 32) && (a104 == 32 && (a128 == 2 && (a97 == 4 && ( cf==1  && (input == 5))))))) {
printf("POINT: 1840\n");
    	cf = 0;
    	a95 = 15;
    	a17 = 33 ;
    	a30 = 35 ;
    	a20 = 7;
    	a128 = 4;
    	a179 = 35 ;
    	a160 = 36 ;
    	a152 = 13;
    	a121 = 35 ;
    	a53 = 36 ;
    	a79 = 9;
    	a32 = 36 ;
    	a135 = 10;
    	a0 = 36 ;
    	a97 = 10;
    	a56 = 13;
    	a146 = 32 ;
    	a178 = 35 ;
    	a45 = 33 ;
    	a187 = 9;
    	a48 = 33 ;
    	a22 = 8;
    	a46 = 35 ;
    	a200 = 34 ;
    	a84 = 36 ;
    	a180 = 35 ;
    	a15 = 13;
    	a138 = 35 ;
    	a34 = 33 ;
    	a140 = 11;
    	a37 = 14;
    	a150 = 8;
    	a28 = 10;
    	a26 = 3;
    	a126 = 7;
    	a165 = 33 ;
    	a109 = 32 ;
    	a39 = 12;
    	a120 = 12;
    	a154 = 32 ;
    	a51 = 35 ;
    	a193 = 10;
    	a93 = 9;
    	a167 = 4;
    	a174 = 7;
    	a105 = 13;
    	a104 = 35 ;
    	a171 = 5; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1841\n");

    if(((((a141 == 32 && ((input == 9) &&  cf==1 )) && a184 == 6) && a105 == 11) && (a115 == 32 && (a121 == 32 && a0 == 32)))) {
printf("POINT: 1842\n");
    	cf = 0;
    	a163 = 36 ;
    	a186 = 33 ;
    	a196 = 7;
    	a200 = 36 ;
    	a158 = 13; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1843\n");

    if((((a45 == 32 && (a115 == 32 && (a20 == 4 && a32 == 32))) && a174 == 8) && (( cf==1  && (input == 1)) && a41 == 32))) {
printf("POINT: 1844\n");
    	cf = 0;
    	a125 = 33 ;
    	a126 = 4;
    	a138 = 32 ;
    	a69 = 36 ;
    	a128 = 1;
    	a0 = 33 ;
    	a179 = 33 ;
    	a187 = 9;
    	a16 = 9;
    	a93 = 6;
    	a51 = 35 ;
    	a53 = 35 ;
    	a167 = 1;
    	a127 = 11;
    	a152 = 14;
    	a135 = 8;
    	a121 = 32 ;
    	a200 = 34 ;
    	a140 = 8;
    	a20 = 8;
    	a160 = 33 ;
    	a84 = 34 ;
    	a184 = 6;
    	a56 = 15;
    	a141 = 34 ;
    	a88 = 35 ;
    	a28 = 14;
    	a39 = 11;
    	a105 = 10;
    	a154 = 33 ;
    	a109 = 34 ;
    	a32 = 35 ;
    	a120 = 10;
    	a22 = 10;
    	a115 = 34 ;
    	a169 = 34 ;
    	a178 = 32 ;
    	a118 = 32 ;
    	a68 = 5;
    	a150 = 8;
    	a65 = 11;
    	a110 = 10;
    	a119 = 36 ;
    	a41 = 36 ;
    	a26 = 9;
    	a48 = 33 ;
    	a17 = 36 ;
    	a37 = 10;
    	a176 = 2;
    	a15 = 9;
    	a2 = 6;
    	a144 = 35 ;
    	a153 = 6;
    	a79 = 10;
    	a165 = 35 ;
    	a90 = 32 ;
    	a81 = 17;
    	a97 = 8;
    	a12 = 35 ;
    	a46 = 36 ;
    	a131 = 9;
    	a30 = 33 ;
    	a180 = 33 ;
    	a25 = 5;
    	a34 = 32 ;
    	a101 = 36 ;
    	a95 = 12;
    	a112 = 33 ;
    	a104 = 35 ;
    	a174 = 13;
    	a55 = 34 ;
    	a45 = 33 ;
    	a146 = 32 ;
    	a193 = 12;
    	a13 = 6; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1845\n");

    if(((((a15 == 10 && a90 == 32) && a0 == 32) && a17 == 32) && ((a53 == 32 && ((input == 7) &&  cf==1 )) && a169 == 32))) {
printf("POINT: 1846\n");
    	cf = 0;
printf("POINT: 1847\n");

    	if((!(a41 == 32) || (!(a120 == 7) && (a131 == 14 && (a113 == 7 || a27 == 36))))) {
printf("POINT: 1848\n");
    	a112 = 33 ;
    	a84 = 32 ;
    	a118 = 36 ;
    	a134 = 15;
    	a128 = 8;
    	a196 = 11;
    	a104 = 33 ;
    	a17 = 32 ;
    	a53 = 32 ;
    	a167 = 2;
    	a20 = 7;
    	a74 = 33 ;
    	a114 = 16; 
    	}else {
printf("POINT: 1850\n");
    	a187 = 6;
    	a119 = 32 ;
    	a196 = 8;
    	a17 = 33 ;
    	a160 = 35 ;
    	a25 = 9;
    	a79 = 6;
    	a97 = 6;
    	a28 = 15;
    	a81 = 10;
    	a121 = 35 ;
    	a48 = 32 ;
    	a146 = 35 ;
    	a105 = 14;
    	a51 = 36 ;
    	a153 = 9;
    	a120 = 10;
    	a185 = 10;
    	a41 = 36 ;
    	a55 = 33 ;
    	a109 = 33 ;
    	a184 = 11;
    	a174 = 10;
    	a158 = 11;
    	a45 = 35 ;
    	a95 = 15;
    	a69 = 36 ;
    	a53 = 32 ;
    	a200 = 36 ;
    	a126 = 9;
    	a56 = 15;
    	a165 = 36 ;
    	a178 = 36 ;
    	a118 = 34 ;
    	a176 = 6;
    	a193 = 7;
    	a84 = 36 ;
    	a68 = 9;
    	a15 = 14;
    	a11 = 1;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1851\n");

    if((((a0 == 32 && ((a105 == 11 && a15 == 10) && a84 == 32)) && a146 == 32) && (a180 == 32 && ( cf==1  && (input == 2))))) {
printf("POINT: 1852\n");
    	cf = 0;
printf("POINT: 1853\n");

    	if((!(a16 == 12) && a196 == 5)) {
printf("POINT: 1854\n");
    	a93 = 9;
    	a86 = 34 ;
    	a84 = 32 ;
    	a32 = 34 ;
    	a180 = 32 ;
    	a26 = 7;
    	a150 = 10;
    	a20 = 10;
    	a79 = 9;
    	a15 = 14;
    	a88 = 36 ;
    	a104 = 34 ;
    	a46 = 35 ;
    	a126 = 10;
    	a179 = 32 ;
    	a165 = 35 ;
    	a118 = 36 ;
    	a140 = 4;
    	a16 = 16;
    	a69 = 36 ;
    	a120 = 6;
    	a115 = 35 ;
    	a184 = 5;
    	a141 = 36 ;
    	a200 = 33 ;
    	a187 = 8;
    	a112 = 34 ;
    	a97 = 10;
    	a110 = 12;
    	a34 = 32 ;
    	a101 = 36 ;
    	a154 = 34 ;
    	a178 = 35 ;
    	a121 = 35 ;
    	a119 = 33 ;
    	a196 = 5;
    	a131 = 15;
    	a12 = 35 ;
    	a169 = 36 ;
    	a65 = 12;
    	a55 = 36 ;
    	a174 = 14;
    	a95 = 14;
    	a30 = 32 ;
    	a17 = 32 ;
    	a127 = 8;
    	a125 = 34 ;
    	a53 = 36 ;
    	a39 = 14;
    	a27 = 35 ;
    	a0 = 35 ;
    	a81 = 13;
    	a96 = 34 ; 
    	}else {
printf("POINT: 1856\n");
    	a196 = 10;
    	a3 = 35 ;
    	a200 = 32 ;
    	a198 = 36 ;
    	a139 = 35 ;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 1857\n");

    if(((a22 == 8 && (a150 == 5 && a81 == 11)) && (((a88 == 32 && ( cf==1  && (input == 6))) && a144 == 32) && a152 == 9))) {
printf("POINT: 1858\n");
    	cf = 0;
    	a196 = 8;
    	a134 = 17;
    	a153 = 4;
    	a109 = 32 ;
    	a174 = 11;
    	a104 = 35 ;
    	a193 = 14;
    	a95 = 10;
    	a179 = 32 ;
    	a54 = 35 ;
    	a34 = 36 ;
    	a15 = 9;
    	a48 = 35 ;
    	a180 = 35 ;
    	a108 = 9; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1859\n");

    if(((a25 == 5 && (a51 == 32 && (a68 == 3 && a90 == 32))) && (a51 == 32 && (( cf==1  && (input == 8)) && a15 == 10)))) {
printf("POINT: 1860\n");
    	cf = 0;
    	a97 = 6;
    	a109 = 33 ;
    	a37 = 12;
    	a174 = 11;
    	a200 = 32 ;
    	a53 = 36 ;
    	a27 = 35 ;
    	a146 = 33 ;
    	a165 = 32 ;
    	a115 = 33 ;
    	a128 = 5;
    	a198 = 34 ;
    	a15 = 15;
    	a16 = 16;
    	a154 = 32 ;
    	a65 = 12;
    	a176 = 2;
    	a196 = 9;
    	a56 = 14;
    	a26 = 5;
    	a90 = 35 ;
    	a193 = 8;
    	a119 = 32 ;
    	a58 = 2; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1861\n");

    if(((a110 == 6 && ((a51 == 32 && a187 == 4) && a81 == 11)) && ((a90 == 32 && ((input == 3) &&  cf==1 )) && a0 == 32))) {
printf("POINT: 1862\n");
    	cf = 0;
    	a179 = 35 ;
    	a53 = 36 ;
    	a119 = 34 ;
    	a25 = 8;
    	a141 = 35 ;
    	a120 = 8;
    	a134 = 13;
    	a48 = 36 ;
    	a105 = 16;
    	a28 = 9;
    	a126 = 6;
    	a95 = 15;
    	a20 = 5;
    	a3 = 35 ;
    	a51 = 35 ;
    	a65 = 16;
    	a39 = 12;
    	a178 = 33 ;
    	a45 = 33 ;
    	a160 = 36 ;
    	a12 = 34 ;
    	a193 = 7;
    	a152 = 8;
    	a32 = 33 ;
    	a41 = 36 ;
    	a125 = 34 ;
    	a176 = 5;
    	a167 = 8;
    	a184 = 10;
    	a144 = 36 ;
    	a196 = 12;
    	a93 = 6;
    	a15 = 15;
    	a110 = 9;
    	a2 = 3;
    	a101 = 33 ;
    	a153 = 8;
    	a106 = 7; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1863\n");

    if(((a22 == 8 && (a154 == 32 && ( cf==1  && (input == 4)))) && (a153 == 4 && ((a120 == 6 && a115 == 32) && a90 == 32)))) {
printf("POINT: 1864\n");
    	cf = 0;
printf("POINT: 1865\n");

    	if((a53 == 33 || ((!(a155 == 33) && (a89 == 32 || !(a25 == 7))) || a181 == 13))) {
printf("POINT: 1866\n");
    	a153 = 6;
    	a140 = 7;
    	a32 = 33 ;
    	a169 = 35 ;
    	a120 = 9;
    	a25 = 7;
    	a126 = 9;
    	a45 = 33 ;
    	a16 = 14;
    	a2 = 3;
    	a184 = 10;
    	a160 = 36 ;
    	a30 = 33 ;
    	a22 = 8;
    	a115 = 36 ;
    	a180 = 36 ;
    	a98 = 8;
    	a144 = 32 ;
    	a68 = 7;
    	a79 = 8;
    	a104 = 33 ;
    	a51 = 33 ;
    	a84 = 36 ;
    	a65 = 10;
    	a110 = 11;
    	a17 = 35 ;
    	a121 = 35 ;
    	a37 = 14;
    	a187 = 3;
    	a53 = 32 ;
    	a15 = 16;
    	a97 = 7;
    	a109 = 32 ;
    	a48 = 33 ;
    	a200 = 34 ;
    	a26 = 9;
    	a105 = 11;
    	a28 = 12;
    	a174 = 11;
    	a69 = 36 ;
    	a128 = 5;
    	a152 = 8;
    	a141 = 32 ;
    	a125 = 32 ;
    	a12 = 33 ;
    	a118 = 32 ;
    	a193 = 10;
    	a112 = 32 ;
    	a90 = 35 ;
    	a101 = 36 ;
    	a41 = 35 ;
    	a81 = 16;
    	a179 = 36 ;
    	a154 = 33 ;
    	a146 = 36 ;
    	a39 = 11;
    	a135 = 14;
    	a56 = 12;
    	a150 = 7;
    	a20 = 4;
    	a167 = 2;
    	a175 = 15; 
    	}else {
printf("POINT: 1868\n");
    	a125 = 36 ;
    	a32 = 35 ;
    	a45 = 32 ;
    	a51 = 36 ;
    	a48 = 32 ;
    	a16 = 11;
    	a167 = 5;
    	a146 = 36 ;
    	a25 = 11;
    	a144 = 35 ;
    	a101 = 35 ;
    	a126 = 7;
    	a26 = 5;
    	a127 = 12;
    	a84 = 32 ;
    	a179 = 34 ;
    	a193 = 10;
    	a39 = 14;
    	a53 = 35 ;
    	a2 = 8;
    	a65 = 11;
    	a153 = 10;
    	a12 = 34 ;
    	a105 = 10;
    	a121 = 36 ;
    	a46 = 33 ;
    	a150 = 6;
    	a196 = 8;
    	a95 = 13;
    	a174 = 11;
    	a28 = 10;
    	a17 = 34 ;
    	a81 = 14;
    	a109 = 34 ;
    	a152 = 14;
    	a56 = 10;
    	a41 = 36 ;
    	a69 = 36 ;
    	a176 = 5;
    	a112 = 33 ;
    	a85 = 34 ;
    	a110 = 10;
    	a120 = 9;
    	a187 = 10;
    	a134 = 13;
    	}printf("%d\n", 16);  
    } 
}
 void calculate_outputm173(int input) {
printf("POINT: 1869\n");

    if(((((((input == 5) &&  cf==1 ) && a178 == 32) && a30 == 32) && a0 == 32) && (a25 == 5 && (a51 == 32 && a193 == 8)))) {
printf("POINT: 1870\n");
    	cf = 0;
    	a110 = 7;
    	a41 = 34 ;
    	a39 = 8;
    	a84 = 32 ;
    	a97 = 5;
    	a198 = 36 ;
    	a37 = 10;
    	a174 = 8;
    	a125 = 34 ;
    	a115 = 32 ;
    	a200 = 32 ;
    	a55 = 32 ;
    	a93 = 4;
    	a12 = 32 ;
    	a119 = 32 ;
    	a88 = 32 ;
    	a2 = 4;
    	a90 = 32 ;
    	a184 = 7;
    	a165 = 32 ;
    	a112 = 32 ;
    	a28 = 10;
    	a16 = 10;
    	a51 = 32 ;
    	a25 = 6;
    	a109 = 34 ;
    	a56 = 9;
    	a179 = 32 ;
    	a176 = 3;
    	a105 = 11;
    	a140 = 5;
    	a167 = 3;
    	a81 = 11;
    	a32 = 34 ;
    	a131 = 10;
    	a127 = 8;
    	a153 = 5;
    	a120 = 6;
    	a3 = 32 ;
    	a46 = 32 ;
    	a68 = 3;
    	a15 = 11;
    	a146 = 32 ;
    	a50 = 5; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1871\n");

    if(((a144 == 32 && (a120 == 6 && a17 == 32)) && ((a115 == 32 && (((input == 1) &&  cf==1 ) && a119 == 32)) && a28 == 10))) {
printf("POINT: 1872\n");
    	cf = 0;
    	a131 = 10;
    	a104 = 34 ;
    	a17 = 34 ;
    	a187 = 5;
    	a121 = 32 ;
    	a90 = 32 ;
    	a94 = 33 ;
    	a167 = 3;
    	a51 = 32 ;
    	a20 = 4;
    	a12 = 34 ;
    	a176 = 4;
    	a55 = 32 ;
    	a128 = 3;
    	a101 = 34 ;
    	a69 = 32 ;
    	a196 = 7;
    	a178 = 32 ;
    	a165 = 32 ;
    	a46 = 32 ;
    	a65 = 11;
    	a193 = 8;
    	a37 = 10;
    	a88 = 32 ;
    	a120 = 7;
    	a150 = 5;
    	a84 = 34 ;
    	a169 = 34 ;
    	a125 = 34 ;
    	a151 = 34 ;
    	a0 = 32 ;
    	a41 = 34 ;
    	a48 = 34 ;
    	a144 = 34 ;
    	a16 = 10;
    	a152 = 10;
    	a22 = 8;
    	a160 = 34 ;
    	a200 = 34 ;
    	a34 = 32 ;
    	a45 = 32 ;
    	a97 = 5;
    	a184 = 7;
    	a26 = 4;
    	a30 = 32 ;
    	a79 = 6;
    	a25 = 6;
    	a180 = 34 ;
    	a68 = 3;
    	a93 = 4;
    	a109 = 34 ;
    	a115 = 32 ;
    	a154 = 32 ;
    	a95 = 10;
    	a32 = 34 ;
    	a119 = 32 ;
    	a15 = 11;
    	a53 = 34 ;
    	a141 = 34 ;
    	a174 = 8;
    	a126 = 4;
    	a28 = 11;
    	a118 = 34 ;
    	a135 = 12; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1873\n");

    if((((a115 == 32 && a12 == 32) && a95 == 9) && (a180 == 32 && (a20 == 4 && (((input == 10) &&  cf==1 ) && a34 == 32))))) {
printf("POINT: 1874\n");
    	cf = 0;
    	a141 = 32 ;
    	a165 = 32 ;
    	a51 = 32 ;
    	a154 = 32 ;
    	a178 = 34 ;
    	a20 = 5;
    	a81 = 11;
    	a128 = 2;
    	a65 = 10;
    	a95 = 9;
    	a39 = 8;
    	a187 = 5;
    	a34 = 34 ;
    	a84 = 34 ;
    	a184 = 7;
    	a150 = 6;
    	a15 = 11;
    	a169 = 34 ;
    	a105 = 11;
    	a118 = 34 ;
    	a193 = 9;
    	a196 = 7;
    	a167 = 3;
    	a140 = 5;
    	a126 = 4;
    	a112 = 32 ;
    	a12 = 32 ;
    	a101 = 34 ;
    	a30 = 34 ;
    	a17 = 32 ;
    	a93 = 4;
    	a79 = 6;
    	a0 = 34 ;
    	a48 = 34 ;
    	a144 = 34 ;
    	a69 = 32 ;
    	a16 = 10;
    	a41 = 34 ;
    	a120 = 7;
    	a26 = 4;
    	a121 = 34 ;
    	a22 = 8;
    	a88 = 34 ;
    	a200 = 34 ;
    	a53 = 34 ;
    	a153 = 5;
    	a135 = 11;
    	a160 = 34 ;
    	a131 = 10;
    	a46 = 32 ;
    	a125 = 34 ;
    	a109 = 34 ;
    	a119 = 34 ;
    	a115 = 34 ;
    	a176 = 4;
    	a28 = 10;
    	a90 = 32 ;
    	a45 = 32 ;
    	a25 = 6;
    	a180 = 34 ;
    	a37 = 10;
    	a174 = 9;
    	a104 = 34 ;
    	a97 = 5;
    	a197 = 6;
    	a152 = 10;
    	a68 = 3;
    	a75 = 8; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1875\n");

    if((((( cf==1  && (input == 3)) && a150 == 5) && a176 == 3) && (a84 == 32 && (a65 == 10 && (a154 == 32 && a119 == 32))))) {
printf("POINT: 1876\n");
    	cf = 0;
    	a39 = 8;
    	a2 = 4;
    	a118 = 34 ;
    	a45 = 32 ;
    	a37 = 10;
    	a180 = 34 ;
    	a22 = 8;
    	a69 = 32 ;
    	a109 = 34 ;
    	a25 = 6;
    	a119 = 32 ;
    	a179 = 32 ;
    	a184 = 7;
    	a120 = 6;
    	a141 = 32 ;
    	a110 = 6;
    	a121 = 32 ;
    	a79 = 6;
    	a56 = 9;
    	a97 = 5;
    	a84 = 32 ;
    	a160 = 34 ;
    	a48 = 34 ;
    	a15 = 11;
    	a196 = 6;
    	a187 = 5;
    	a51 = 32 ;
    	a158 = 11;
    	a153 = 5;
    	a93 = 4;
    	a126 = 4;
    	a200 = 36 ;
    	a178 = 32 ;
    	a127 = 8;
    	a165 = 32 ;
    	a169 = 34 ;
    	a70 = 33 ;
    	a81 = 11;
    	a174 = 8;
    	a90 = 32 ;
    	a140 = 5;
    	a112 = 32 ;
    	a128 = 2;
    	a55 = 32 ;
    	a104 = 34 ;
    	a154 = 32 ;
    	a146 = 32 ;
    	a105 = 11;
    	a32 = 34 ;
    	a185 = 14; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm174(int input) {
printf("POINT: 1877\n");

    if(((a34 == 32 && (a79 == 6 && (a105 == 11 && (a97 == 4 && ( cf==1  && (input == 6)))))) && (a144 == 32 && a68 == 3))) {
printf("POINT: 1878\n");
    	cf = 0;
    	a153 = 5;
    	a139 = 35 ;
    	a93 = 4;
    	a65 = 11;
    	a37 = 10;
    	a169 = 34 ;
    	a100 = 34 ;
    	a196 = 7;
    	a25 = 6;
    	a146 = 34 ;
    	a187 = 5;
    	a144 = 34 ;
    	a128 = 3;
    	a121 = 34 ;
    	a140 = 6;
    	a119 = 34 ;
    	a16 = 11;
    	a105 = 12;
    	a134 = 14; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1879\n");

    if((((((input == 7) &&  cf==1 ) && a115 == 32) && a81 == 11) && (a169 == 32 && (a25 == 5 && (a153 == 4 && a68 == 3))))) {
printf("POINT: 1880\n");
    	cf = 0;
    	a25 = 5;
    	a28 = 10;
    	a146 = 32 ;
    	a56 = 9;
    	a41 = 32 ;
    	a53 = 32 ;
    	a179 = 32 ;
    	a120 = 6;
    	a158 = 8;
    	a141 = 32 ;
    	a112 = 32 ;
    	a105 = 11;
    	a93 = 3;
    	a51 = 33 ;
    	a122 = 32 ;
    	a152 = 9;
    	a39 = 8;
    	a154 = 33 ;
    	a167 = 2;
    	a15 = 10;
    	a69 = 32 ;
    	a126 = 4;
    	a128 = 2;
    	a174 = 8;
    	a110 = 6;
    	a45 = 32 ;
    	a176 = 3;
    	a17 = 32 ;
    	a2 = 4;
    	a169 = 32 ;
    	a55 = 32 ;
    	a200 = 36 ;
    	a183 = 14; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm175(int input) {
printf("POINT: 1881\n");

    if(((a112 == 32 && ((((input == 1) &&  cf==1 ) && a15 == 10) && a180 == 32)) && (a15 == 10 && (a2 == 4 && a56 == 9)))) {
printf("POINT: 1882\n");
    	cf = 0;
    	a141 = 34 ;
    	a179 = 34 ;
    	a118 = 32 ;
    	a55 = 34 ;
    	a39 = 9;
    	a193 = 8;
    	a169 = 34 ;
    	a84 = 34 ;
    	a152 = 10;
    	a53 = 34 ;
    	a140 = 6;
    	a119 = 34 ;
    	a46 = 34 ;
    	a127 = 7;
    	a26 = 4;
    	a187 = 5;
    	a34 = 32 ;
    	a144 = 32 ;
    	a196 = 7;
    	a16 = 10;
    	a154 = 34 ;
    	a121 = 34 ;
    	a95 = 10;
    	a30 = 32 ;
    	a146 = 34 ;
    	a28 = 11;
    	a126 = 4;
    	a184 = 7;
    	a104 = 34 ;
    	a51 = 34 ;
    	a12 = 32 ;
    	a178 = 34 ;
    	a81 = 12;
    	a65 = 11;
    	a45 = 34 ;
    	a176 = 3;
    	a105 = 12; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1883\n");

    if(((a48 == 32 && (a48 == 32 && a167 == 2)) && (a90 == 32 && ((a32 == 32 && ( cf==1  && (input == 3))) && a41 == 32)))) {
printf("POINT: 1884\n");
    	cf = 0;
    	a69 = 34 ;
    	a20 = 5;
    	a79 = 7;
    	a68 = 4;
    	a135 = 15;
    	a112 = 34 ;
    	a165 = 34 ;
    	a48 = 34 ;
    	a41 = 34 ;
    	a101 = 34 ;
    	a115 = 34 ;
    	a37 = 10;
    	a200 = 34 ;
    	a109 = 34 ;
    	a128 = 3;
    	a157 = 11;
    	a97 = 5;
    	a17 = 34 ;
    	a2 = 5;
    	a32 = 34 ;
    	a93 = 4;
    	a180 = 34 ;
    	a160 = 34 ;
    	a88 = 34 ;
    	a98 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1885\n");

    if(((a68 == 3 && (a110 == 6 && (a120 == 6 && ( cf==1  && (input == 5))))) && (a22 == 8 && (a153 == 4 && a115 == 32)))) {
printf("POINT: 1886\n");
    	cf = 0;
    	a48 = 34 ;
    	a41 = 34 ;
    	a79 = 7;
    	a160 = 34 ;
    	a109 = 34 ;
    	a69 = 34 ;
    	a88 = 34 ;
    	a17 = 34 ;
    	a37 = 10;
    	a93 = 4;
    	a2 = 5;
    	a165 = 34 ;
    	a112 = 34 ;
    	a115 = 34 ;
    	a180 = 34 ;
    	a101 = 34 ;
    	a97 = 5;
    	a200 = 34 ;
    	a32 = 34 ;
    	a68 = 4;
    	a157 = 11;
    	a135 = 15;
    	a128 = 3;
    	a20 = 5;
    	a98 = 8; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1887\n");

    if((((a109 == 32 && (((input == 10) &&  cf==1 ) && a17 == 32)) && a25 == 5) && (a128 == 2 && (a112 == 32 && a69 == 32)))) {
printf("POINT: 1888\n");
    	cf = 0;
    	a169 = 34 ;
    	a144 = 32 ;
    	a146 = 34 ;
    	a34 = 32 ;
    	a28 = 11;
    	a30 = 32 ;
    	a121 = 34 ;
    	a126 = 4;
    	a84 = 34 ;
    	a187 = 5;
    	a39 = 9;
    	a140 = 6;
    	a176 = 3;
    	a12 = 32 ;
    	a196 = 7;
    	a184 = 7;
    	a127 = 7;
    	a51 = 34 ;
    	a45 = 34 ;
    	a119 = 34 ;
    	a152 = 10;
    	a55 = 34 ;
    	a178 = 34 ;
    	a26 = 4;
    	a118 = 32 ;
    	a95 = 10;
    	a179 = 34 ;
    	a16 = 10;
    	a105 = 12;
    	a104 = 34 ;
    	a53 = 34 ;
    	a141 = 34 ;
    	a65 = 11;
    	a46 = 34 ;
    	a193 = 8;
    	a154 = 34 ;
    	a81 = 12; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm176(int input) {
printf("POINT: 1889\n");

    if((((a17 == 32 && a26 == 3) && a160 == 32) && (((a154 == 32 && ( cf==1  && (input == 4))) && a68 == 3) && a119 == 32))) {
printf("POINT: 1890\n");
    	cf = 0;
    	a41 = 34 ;
    	a69 = 34 ;
    	a178 = 34 ;
    	a79 = 7;
    	a121 = 34 ;
    	a55 = 34 ;
    	a160 = 34 ;
    	a65 = 11;
    	a81 = 12;
    	a84 = 34 ;
    	a112 = 34 ;
    	a2 = 5;
    	a157 = 11;
    	a101 = 34 ;
    	a51 = 34 ;
    	a179 = 34 ;
    	a152 = 10;
    	a88 = 34 ;
    	a53 = 34 ;
    	a196 = 7;
    	a105 = 12;
    	a104 = 34 ;
    	a200 = 34 ;
    	a141 = 34 ;
    	a128 = 3;
    	a48 = 34 ;
    	a37 = 10;
    	a32 = 34 ;
    	a95 = 10;
    	a169 = 34 ;
    	a28 = 11;
    	a187 = 5;
    	a165 = 34 ;
    	a109 = 34 ;
    	a119 = 34 ;
    	a146 = 34 ;
    	a93 = 4;
    	a17 = 34 ;
    	a26 = 4;
    	a68 = 4;
    	a135 = 15;
    	a115 = 34 ;
    	a97 = 5;
    	a46 = 34 ;
    	a154 = 34 ;
    	a180 = 34 ;
    	a20 = 5;
    	a98 = 8; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1891\n");

    if(((((input == 7) &&  cf==1 ) && a179 == 32) && ((a56 == 9 && (a16 == 10 && (a93 == 3 && a84 == 32))) && a93 == 3))) {
printf("POINT: 1892\n");
    	cf = 0;
    	a196 = 7;
    	a179 = 34 ;
    	a200 = 36 ;
    	a119 = 34 ;
    	a141 = 34 ;
    	a64 = 16;
    	a158 = 7;
    	a193 = 9;
    	a146 = 34 ;
    	a84 = 34 ;
    	a189 = 16; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 1893\n");

    if(((a95 == 9 && (a179 == 32 && a125 == 32)) && (((a26 == 3 && ((input == 9) &&  cf==1 )) && a150 == 5) && a109 == 32))) {
printf("POINT: 1894\n");
    	cf = 0;
    	a179 = 34 ;
    	a196 = 7;
    	a158 = 7;
    	a119 = 34 ;
    	a200 = 36 ;
    	a141 = 34 ;
    	a84 = 34 ;
    	a193 = 9;
    	a146 = 34 ;
    	a64 = 16;
    	a189 = 16; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1895\n");

    if(((a118 == 32 && (a16 == 10 && ((((input == 6) &&  cf==1 ) && a180 == 32) && a141 == 32))) && (a2 == 4 && a125 == 32))) {
printf("POINT: 1896\n");
    	cf = 0;
    	a127 = 7;
    	a30 = 32 ;
    	a41 = 32 ;
    	a184 = 7;
    	a140 = 6;
    	a26 = 3;
    	a200 = 36 ;
    	a53 = 32 ;
    	a56 = 9;
    	a65 = 10;
    	a25 = 5;
    	a122 = 32 ;
    	a16 = 10;
    	a101 = 32 ;
    	a37 = 9;
    	a180 = 32 ;
    	a48 = 32 ;
    	a39 = 9;
    	a93 = 3;
    	a110 = 6;
    	a2 = 4;
    	a55 = 32 ;
    	a125 = 32 ;
    	a174 = 8;
    	a17 = 32 ;
    	a179 = 34 ;
    	a104 = 32 ;
    	a51 = 32 ;
    	a158 = 8;
    	a150 = 5;
    	a160 = 32 ;
    	a109 = 32 ;
    	a45 = 34 ;
    	a69 = 32 ;
    	a15 = 10;
    	a22 = 8;
    	a183 = 15; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm177(int input) {
printf("POINT: 1897\n");

    if(((((((input == 9) &&  cf==1 ) && a81 == 11) && a2 == 4) && a37 == 9) && (a0 == 32 && (a95 == 9 && a2 == 4)))) {
printf("POINT: 1898\n");
    	cf = 0;
    	a158 = 7;
    	a200 = 36 ;
    	a42 = 32 ;
    	a37 = 8;
    	a115 = 33 ;
    	a79 = 5;
    	a64 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm25(int input) {
printf("POINT: 1899\n");

    if(((a12 == 32 && (a178 == 32 && ((a3 == 32 &&  cf==1 ) && a81 == 11))) && ((a104 == 32 && a105 == 11) && a128 == 2))) {
printf("POINT: 1900\n");
printf("POINT: 1901\n");

    	if(((a169 == 32 && (((a8 == 8 &&  cf==1 ) && a68 == 3) && a179 == 32)) && ((a48 == 32 && a154 == 32) && a196 == 6))) {
printf("POINT: 1902\n");
    		calculate_outputm170(input);
    	} 
printf("POINT: 1903\n");

    	if(((((a152 == 9 && ( cf==1  && a8 == 12)) && a184 == 6) && a141 == 32) && ((a144 == 32 && a53 == 32) && a2 == 4))) {
printf("POINT: 1904\n");
    		calculate_outputm171(input);
    	} 
printf("POINT: 1905\n");

    	if(((((a8 == 15 &&  cf==1 ) && a120 == 6) && a90 == 32) && ((a120 == 6 && (a28 == 10 && a193 == 8)) && a95 == 9))) {
printf("POINT: 1906\n");
    		calculate_outputm172(input);
    	} 
    } 
printf("POINT: 1907\n");

    if(((((a3 == 34 &&  cf==1 ) && a88 == 32) && a160 == 32) && (a174 == 8 && ((a69 == 32 && a109 == 32) && a20 == 4)))) {
printf("POINT: 1908\n");
printf("POINT: 1909\n");

    	if(((a118 == 32 && (a180 == 32 && (((a75 == 4 &&  cf==1 ) && a126 == 4) && a193 == 8))) && (a65 == 10 && a88 == 32))) {
printf("POINT: 1910\n");
    		calculate_outputm173(input);
    	} 
printf("POINT: 1911\n");

    	if((( cf==1  && a75 == 5) && (((((a65 == 10 && a101 == 32) && a25 == 5) && a37 == 9) && a104 == 32) && a146 == 32))) {
printf("POINT: 1912\n");
    		calculate_outputm174(input);
    	} 
printf("POINT: 1913\n");

    	if(((a125 == 32 && (a17 == 32 && ((a174 == 8 && (a75 == 10 &&  cf==1 )) && a41 == 32))) && (a32 == 32 && a101 == 32))) {
printf("POINT: 1914\n");
    		calculate_outputm175(input);
    	} 
printf("POINT: 1915\n");

    	if(((a22 == 8 && (((a75 == 11 &&  cf==1 ) && a119 == 32) && a16 == 10)) && ((a15 == 10 && a180 == 32) && a53 == 32))) {
printf("POINT: 1916\n");
    		calculate_outputm176(input);
    	} 
    } 
printf("POINT: 1917\n");

    if(((a39 == 8 && (a17 == 32 && a15 == 10)) && ((a101 == 32 && ((a3 == 35 &&  cf==1 ) && a120 == 6)) && a97 == 4))) {
printf("POINT: 1918\n");
printf("POINT: 1919\n");

    	if(((((a131 == 10 && a176 == 3) && a180 == 32) && a97 == 4) && ((( cf==1  && a58 == 8) && a93 == 3) && a101 == 32))) {
printf("POINT: 1920\n");
    		calculate_outputm177(input);
    	} 
    } 
}
 void calculate_outputm178(int input) {
printf("POINT: 1921\n");

    if((((( cf==1  && (input == 9)) && a160 == 32) && a140 == 5) && (a184 == 6 && ((a39 == 8 && a152 == 9) && a115 == 32)))) {
printf("POINT: 1922\n");
    	cf = 0;
    	a158 = 9;
    	a22 = 7;
    	a200 = 36 ;
    	a154 = 33 ;
    	a51 = 33 ;
    	a136 = 13;
    	a133 = 5; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 1923\n");

    if(((a144 == 32 && (a184 == 6 && ((a104 == 32 && a53 == 32) && a88 == 32))) && (a93 == 3 && ( cf==1  && (input == 10))))) {
printf("POINT: 1924\n");
    	cf = 0;
    	a121 = 32 ;
    	a141 = 32 ;
    	a154 = 32 ;
    	a53 = 34 ;
    	a160 = 32 ;
    	a65 = 10;
    	a169 = 32 ;
    	a174 = 8;
    	a119 = 34 ;
    	a90 = 32 ;
    	a12 = 32 ;
    	a144 = 34 ;
    	a28 = 10;
    	a109 = 32 ;
    	a46 = 34 ;
    	a125 = 32 ;
    	a55 = 34 ;
    	a26 = 3;
    	a94 = 35 ;
    	a184 = 6;
    	a134 = 12;
    	a120 = 6;
    	a17 = 34 ;
    	a110 = 6;
    	a88 = 32 ;
    	a25 = 5;
    	a30 = 32 ;
    	a153 = 4;
    	a41 = 32 ;
    	a187 = 5;
    	a167 = 2;
    	a196 = 6;
    	a45 = 32 ;
    	a32 = 34 ;
    	a84 = 33 ;
    	a152 = 9;
    	a191 = 9; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1925\n");

    if((((a179 == 32 && (a120 == 6 && (a53 == 32 && a141 == 32))) && a112 == 32) && (( cf==1  && (input == 5)) && a2 == 4))) {
printf("POINT: 1926\n");
    	cf = 0;
    	a126 = 4;
    	a112 = 34 ;
    	a20 = 4;
    	a169 = 32 ;
    	a128 = 3;
    	a68 = 3;
    	a167 = 2;
    	a118 = 34 ;
    	a22 = 9;
    	a69 = 32 ;
    	a2 = 4;
    	a101 = 34 ;
    	a198 = 34 ;
    	a154 = 34 ;
    	a174 = 8;
    	a95 = 10;
    	a176 = 3;
    	a119 = 34 ;
    	a153 = 4;
    	a146 = 34 ;
    	a110 = 7;
    	a17 = 34 ;
    	a53 = 34 ;
    	a41 = 32 ;
    	a105 = 12;
    	a79 = 7;
    	a15 = 10;
    	a152 = 9;
    	a45 = 34 ;
    	a51 = 32 ;
    	a25 = 5;
    	a200 = 32 ;
    	a184 = 6;
    	a84 = 33 ;
    	a26 = 4;
    	a179 = 32 ;
    	a34 = 34 ;
    	a56 = 10;
    	a125 = 32 ;
    	a93 = 3;
    	a120 = 6;
    	a74 = 34 ;
    	a55 = 34 ;
    	a88 = 32 ;
    	a28 = 11;
    	a32 = 34 ;
    	a81 = 10;
    	a39 = 9;
    	a193 = 7;
    	a141 = 32 ;
    	a58 = 4; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 1927\n");

    if((((( cf==1  && (input == 7)) && a154 == 32) && a12 == 32) && ((a32 == 32 && (a131 == 10 && a109 == 32)) && a154 == 32))) {
printf("POINT: 1928\n");
    	cf = 0;
    	a184 = 6;
    	a180 = 32 ;
    	a48 = 32 ;
    	a200 = 36 ;
    	a179 = 32 ;
    	a104 = 32 ;
    	a158 = 7;
    	a167 = 2;
    	a125 = 32 ;
    	a141 = 32 ;
    	a28 = 11;
    	a32 = 32 ;
    	a115 = 32 ;
    	a110 = 6;
    	a25 = 5;
    	a154 = 32 ;
    	a2 = 4;
    	a112 = 32 ;
    	a120 = 6;
    	a15 = 10;
    	a144 = 32 ;
    	a127 = 7;
    	a129 = 35 ;
    	a81 = 11;
    	a196 = 6;
    	a26 = 4;
    	a53 = 32 ;
    	a176 = 3;
    	a160 = 32 ;
    	a30 = 32 ;
    	a140 = 5;
    	a169 = 34 ;
    	a128 = 2;
    	a165 = 32 ;
    	a118 = 32 ;
    	a119 = 34 ;
    	a97 = 4;
    	a79 = 6;
    	a105 = 11;
    	a37 = 9;
    	a41 = 32 ;
    	a64 = 15; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm179(int input) {
printf("POINT: 1929\n");

    if((((a55 == 32 && ((a79 == 6 && ((input == 9) &&  cf==1 )) && a2 == 4)) && a118 == 32) && (a69 == 32 && a32 == 32))) {
printf("POINT: 1930\n");
    	cf = 0;
    	a196 = 7;
    	a53 = 34 ;
    	a30 = 34 ;
    	a144 = 34 ;
    	a128 = 3;
    	a127 = 8;
    	a16 = 11;
    	a17 = 34 ;
    	a32 = 34 ;
    	a146 = 34 ;
    	a119 = 34 ;
    	a46 = 34 ;
    	a180 = 34 ;
    	a65 = 11;
    	a79 = 7;
    	a197 = 8;
    	a193 = 7;
    	a140 = 6;
    	a135 = 11;
    	a118 = 34 ;
    	a39 = 9;
    	a200 = 34 ;
    	a55 = 34 ;
    	a101 = 34 ;
    	a110 = 7;
    	a28 = 11;
    	a34 = 34 ;
    	a115 = 34 ;
    	a112 = 34 ;
    	a105 = 12;
    	a154 = 34 ;
    	a160 = 34 ;
    	a26 = 4;
    	a187 = 5;
    	a22 = 9;
    	a56 = 10;
    	a84 = 33 ;
    	a81 = 10;
    	a45 = 34 ;
    	a95 = 10;
    	a104 = 34 ;
    	a97 = 5;
    	a190 = 11; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 1931\n");

    if(((((a48 == 32 && a88 == 32) && a167 == 2) && a97 == 4) && (a2 == 4 && (((input == 4) &&  cf==1 ) && a187 == 4)))) {
printf("POINT: 1932\n");
    	cf = 0;
    	a110 = 7;
    	a125 = 34 ;
    	a200 = 36 ;
    	a153 = 5;
    	a187 = 5;
    	a26 = 4;
    	a109 = 34 ;
    	a53 = 34 ;
    	a32 = 34 ;
    	a127 = 8;
    	a118 = 34 ;
    	a152 = 10;
    	a37 = 10;
    	a48 = 34 ;
    	a169 = 34 ;
    	a160 = 34 ;
    	a167 = 3;
    	a184 = 7;
    	a93 = 4;
    	a180 = 34 ;
    	a104 = 34 ;
    	a97 = 5;
    	a158 = 7;
    	a25 = 6;
    	a137 = 34 ;
    	a15 = 11;
    	a41 = 34 ;
    	a64 = 10; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1933\n");

    if((((a93 == 3 && a125 == 32) && a141 == 32) && (a176 == 3 && (a104 == 32 && (( cf==1  && (input == 7)) && a39 == 8))))) {
printf("POINT: 1934\n");
    	cf = 0;
    	a118 = 34 ;
    	a84 = 34 ;
    	a128 = 3;
    	a104 = 34 ;
    	a74 = 33 ;
    	a20 = 5;
    	a167 = 3;
    	a53 = 34 ;
    	a134 = 15;
    	a112 = 34 ;
    	a17 = 34 ;
    	a114 = 16; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1935\n");

    if((((a121 == 32 && (a2 == 4 && ((input == 2) &&  cf==1 ))) && a90 == 32) && ((a165 == 32 && a15 == 10) && a184 == 6))) {
printf("POINT: 1936\n");
    	cf = 0;
    	a179 = 34 ;
    	a119 = 34 ;
    	a141 = 34 ;
    	a53 = 34 ;
    	a93 = 4;
    	a3 = 36 ;
    	a63 = 36 ;
    	a105 = 12;
    	a51 = 34 ;
    	a169 = 34 ;
    	a25 = 6;
    	a146 = 34 ;
    	a134 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm180(int input) {
printf("POINT: 1937\n");

    if(((a150 == 5 && (a160 == 32 && (a46 == 32 && ( cf==1  && (input == 8))))) && ((a16 == 10 && a39 == 8) && a79 == 6))) {
printf("POINT: 1938\n");
    	cf = 0;
    	a196 = 9;
    	a32 = 32 ;
    	a17 = 36 ;
    	a34 = 36 ;
    	a69 = 33 ;
    	a48 = 33 ;
    	a135 = 10;
    	a53 = 35 ;
    	a187 = 6;
    	a152 = 14;
    	a115 = 35 ;
    	a68 = 8;
    	a51 = 33 ;
    	a26 = 6;
    	a120 = 10;
    	a125 = 35 ;
    	a112 = 33 ;
    	a146 = 36 ;
    	a200 = 34 ;
    	a81 = 15;
    	a45 = 36 ;
    	a144 = 36 ;
    	a97 = 7;
    	a121 = 32 ;
    	a138 = 33 ;
    	a171 = 10; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 1939\n");

    if(((( cf==1  && (input == 10)) && a53 == 32) && (a176 == 3 && ((a88 == 32 && (a110 == 6 && a167 == 2)) && a84 == 32)))) {
printf("POINT: 1940\n");
    	cf = 0;
    	a144 = 33 ;
    	a0 = 35 ;
    	a197 = 6;
    	a25 = 4;
    	a101 = 32 ;
    	a79 = 10;
    	a53 = 33 ;
    	a41 = 33 ;
    	a196 = 11;
    	a81 = 14;
    	a16 = 16;
    	a115 = 32 ;
    	a69 = 32 ;
    	a135 = 11;
    	a51 = 35 ;
    	a187 = 9;
    	a118 = 36 ;
    	a30 = 35 ;
    	a17 = 35 ;
    	a146 = 36 ;
    	a200 = 34 ;
    	a20 = 3;
    	a55 = 33 ;
    	a75 = 6; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 1941\n");

    if(((a126 == 4 && (a125 == 32 && (a2 == 4 && (a17 == 32 && (((input == 7) &&  cf==1 ) && a16 == 10))))) && a141 == 32)) {
printf("POINT: 1942\n");
    	cf = 0;
printf("POINT: 1943\n");

    	if((a3 == 36 || ((a22 == 13 || a90 == 32) && a84 == 32))) {
printf("POINT: 1944\n");
    	a184 = 12;
    	a37 = 12;
    	a41 = 36 ;
    	a193 = 7;
    	a25 = 7;
    	a119 = 35 ;
    	a32 = 35 ;
    	a180 = 33 ;
    	a120 = 7;
    	a134 = 11;
    	a81 = 17;
    	a104 = 34 ;
    	a103 = 32 ;
    	a112 = 35 ;
    	a15 = 13;
    	a101 = 35 ;
    	a30 = 33 ;
    	a109 = 35 ;
    	a152 = 11;
    	a46 = 33 ;
    	a140 = 5;
    	a2 = 9;
    	a93 = 6;
    	a153 = 7;
    	a174 = 13;
    	a34 = 33 ;
    	a20 = 8;
    	a39 = 14;
    	a45 = 33 ;
    	a17 = 36 ;
    	a68 = 5;
    	a65 = 13;
    	a146 = 36 ;
    	a187 = 4;
    	a88 = 34 ;
    	a179 = 35 ;
    	a53 = 32 ;
    	a77 = 12; 
    	}else {
printf("POINT: 1946\n");
    	a165 = 32 ;
    	a160 = 33 ;
    	a120 = 9;
    	a104 = 36 ;
    	a48 = 35 ;
    	a90 = 35 ;
    	a144 = 32 ;
    	a153 = 4;
    	a28 = 11;
    	a84 = 35 ;
    	a118 = 35 ;
    	a88 = 34 ;
    	a110 = 11;
    	a53 = 32 ;
    	a176 = 2;
    	a119 = 35 ;
    	a200 = 33 ;
    	a154 = 36 ;
    	a109 = 34 ;
    	a69 = 32 ;
    	a180 = 34 ;
    	a51 = 32 ;
    	a34 = 33 ;
    	a30 = 34 ;
    	a77 = 11;
    	a79 = 7;
    	a65 = 11;
    	a193 = 9;
    	a174 = 8;
    	a32 = 34 ;
    	a146 = 34 ;
    	a125 = 36 ;
    	a152 = 10;
    	a15 = 16;
    	a187 = 6;
    	a184 = 11;
    	a86 = 32 ;
    	a121 = 32 ;
    	a179 = 34 ;
    	a178 = 35 ;
    	a126 = 7;
    	a45 = 32 ;
    	a17 = 34 ;
    	a81 = 17;
    	a98 = 13;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 1947\n");

    if(((a101 == 32 && (a32 == 32 && ((input == 9) &&  cf==1 ))) && (a127 == 7 && ((a12 == 32 && a79 == 6) && a45 == 32)))) {
printf("POINT: 1948\n");
    	cf = 0;
    	a154 = 35 ;
    	a105 = 15;
    	a22 = 14;
    	a120 = 9;
    	a93 = 5;
    	a53 = 32 ;
    	a128 = 1;
    	a84 = 33 ;
    	a160 = 33 ;
    	a45 = 32 ;
    	a30 = 36 ;
    	a165 = 36 ;
    	a178 = 32 ;
    	a167 = 5;
    	a126 = 6;
    	a37 = 11;
    	a28 = 9;
    	a20 = 8;
    	a51 = 33 ;
    	a56 = 11;
    	a39 = 7;
    	a17 = 32 ;
    	a146 = 36 ;
    	a138 = 35 ;
    	a200 = 34 ;
    	a0 = 33 ;
    	a95 = 9;
    	a150 = 4;
    	a26 = 9;
    	a196 = 5;
    	a140 = 10;
    	a121 = 35 ;
    	a152 = 8;
    	a32 = 33 ;
    	a187 = 8;
    	a135 = 10;
    	a46 = 35 ;
    	a97 = 8;
    	a79 = 5;
    	a171 = 5; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 1949\n");

    if(((a12 == 32 && ((a28 == 10 && a169 == 32) && a131 == 10)) && (a144 == 32 && (a55 == 32 && ( cf==1  && (input == 4)))))) {
printf("POINT: 1950\n");
    	cf = 0;
    	a153 = 9;
    	a48 = 35 ;
    	a104 = 36 ;
    	a176 = 5;
    	a109 = 33 ;
    	a97 = 6;
    	a179 = 35 ;
    	a120 = 7;
    	a81 = 17;
    	a25 = 11;
    	a2 = 3;
    	a119 = 34 ;
    	a110 = 12;
    	a127 = 13;
    	a39 = 14;
    	a198 = 36 ;
    	a16 = 9;
    	a34 = 35 ;
    	a193 = 13;
    	a174 = 12;
    	a95 = 13;
    	a184 = 12;
    	a28 = 12;
    	a200 = 32 ;
    	a167 = 8;
    	a15 = 14;
    	a165 = 34 ;
    	a93 = 7;
    	a84 = 33 ;
    	a146 = 36 ;
    	a41 = 36 ;
    	a115 = 36 ;
    	a12 = 33 ;
    	a140 = 11;
    	a88 = 36 ;
    	a56 = 12;
    	a125 = 32 ;
    	a51 = 33 ;
    	a131 = 15;
    	a180 = 35 ;
    	a105 = 16;
    	a112 = 35 ;
    	a37 = 12;
    	a3 = 32 ;
    	a32 = 35 ;
    	a46 = 35 ;
    	a55 = 36 ;
    	a90 = 33 ;
    	a68 = 2;
    	a50 = 5; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1951\n");

    if(((a144 == 32 && ((input == 1) &&  cf==1 )) && ((a2 == 4 && (a112 == 32 && (a101 == 32 && a187 == 4))) && a12 == 32))) {
printf("POINT: 1952\n");
    	cf = 0;
    	a144 = 33 ;
    	a30 = 33 ;
    	a81 = 15;
    	a120 = 9;
    	a12 = 35 ;
    	a150 = 11;
    	a153 = 6;
    	a16 = 15;
    	a193 = 11;
    	a79 = 6;
    	a165 = 36 ;
    	a115 = 33 ;
    	a46 = 35 ;
    	a65 = 9;
    	a121 = 32 ;
    	a69 = 33 ;
    	a118 = 33 ;
    	a32 = 33 ;
    	a140 = 10;
    	a41 = 33 ;
    	a2 = 6;
    	a169 = 36 ;
    	a95 = 14;
    	a127 = 6;
    	a200 = 34 ;
    	a56 = 8;
    	a13 = 5;
    	a90 = 36 ;
    	a176 = 2;
    	a68 = 9;
    	a119 = 32 ;
    	a125 = 36 ;
    	a187 = 6;
    	a45 = 35 ;
    	a26 = 2;
    	a88 = 35 ;
    	a154 = 36 ;
    	a97 = 3;
    	a0 = 35 ;
    	a101 = 35 ;
    	a131 = 15;
    	a179 = 36 ;
    	a112 = 35 ;
    	a25 = 5;
    	a28 = 14;
    	a105 = 17;
    	a93 = 6;
    	a53 = 33 ;
    	a20 = 4;
    	a135 = 8;
    	a160 = 35 ;
    	a37 = 13;
    	a146 = 33 ;
    	a128 = 4;
    	a109 = 36 ;
    	a196 = 9;
    	a6 = 11; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1953\n");

    if(((a2 == 4 && ((a121 == 32 && ((input == 5) &&  cf==1 )) && a55 == 32)) && ((a119 == 32 && a178 == 32) && a131 == 10))) {
printf("POINT: 1954\n");
    	cf = 0;
    	a153 = 10;
    	a46 = 36 ;
    	a125 = 36 ;
    	a109 = 33 ;
    	a45 = 35 ;
    	a118 = 35 ;
    	a154 = 34 ;
    	a167 = 7;
    	a39 = 13;
    	a127 = 10;
    	a165 = 33 ;
    	a28 = 15;
    	a112 = 35 ;
    	a79 = 8;
    	a51 = 33 ;
    	a160 = 35 ;
    	a187 = 6;
    	a197 = 6;
    	a110 = 9;
    	a65 = 14;
    	a15 = 15;
    	a184 = 6;
    	a196 = 12;
    	a200 = 34 ;
    	a150 = 7;
    	a68 = 4;
    	a131 = 12;
    	a41 = 32 ;
    	a176 = 7;
    	a69 = 34 ;
    	a90 = 36 ;
    	a22 = 9;
    	a144 = 32 ;
    	a105 = 13;
    	a56 = 13;
    	a20 = 6;
    	a2 = 3;
    	a140 = 11;
    	a55 = 33 ;
    	a119 = 32 ;
    	a135 = 11;
    	a152 = 13;
    	a30 = 33 ;
    	a95 = 11;
    	a88 = 35 ;
    	a169 = 32 ;
    	a146 = 33 ;
    	a37 = 14;
    	a128 = 4;
    	a25 = 10;
    	a12 = 33 ;
    	a120 = 10;
    	a97 = 9;
    	a141 = 33 ;
    	a126 = 5;
    	a121 = 36 ;
    	a32 = 33 ;
    	a17 = 36 ;
    	a101 = 32 ;
    	a0 = 32 ;
    	a84 = 33 ;
    	a53 = 35 ;
    	a81 = 15;
    	a26 = 8;
    	a178 = 32 ;
    	a115 = 35 ;
    	a93 = 6;
    	a16 = 16;
    	a75 = 8; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1955\n");

    if(((a56 == 9 && (( cf==1  && (input == 3)) && a160 == 32)) && (((a196 == 6 && a26 == 3) && a39 == 8) && a150 == 5))) {
printf("POINT: 1956\n");
    	cf = 0;
printf("POINT: 1957\n");

    	if((a76 == 7 && ((a125 == 32 && !(a103 == 36)) || !(a59 == 6)))) {
printf("POINT: 1958\n");
    	a196 = 11;
    	a184 = 5;
    	a46 = 35 ;
    	a119 = 36 ;
    	a79 = 10;
    	a37 = 8;
    	a187 = 3;
    	a39 = 12;
    	a56 = 11;
    	a200 = 36 ;
    	a110 = 9;
    	a127 = 9;
    	a23 = 35 ;
    	a128 = 5;
    	a193 = 7;
    	a34 = 36 ;
    	a81 = 11;
    	a158 = 11;
    	a109 = 35 ;
    	a15 = 15;
    	a55 = 32 ;
    	a153 = 3;
    	a68 = 3;
    	a104 = 33 ;
    	a84 = 34 ;
    	a179 = 36 ;
    	a101 = 33 ;
    	a69 = 33 ;
    	a180 = 36 ;
    	a105 = 16;
    	a178 = 35 ;
    	a146 = 33 ;
    	a28 = 13;
    	a17 = 35 ;
    	a174 = 13;
    	a144 = 35 ;
    	a112 = 33 ;
    	a185 = 11; 
    	}else {
printf("POINT: 1960\n");
    	a55 = 32 ;
    	a178 = 33 ;
    	a119 = 33 ;
    	a15 = 9;
    	a187 = 4;
    	a26 = 6;
    	a37 = 12;
    	a179 = 34 ;
    	a158 = 13;
    	a163 = 34 ;
    	a101 = 36 ;
    	a69 = 35 ;
    	a153 = 10;
    	a105 = 15;
    	a51 = 36 ;
    	a200 = 36 ;
    	a68 = 6;
    	a146 = 33 ;
    	a115 = 33 ;
    	a112 = 36 ;
    	a184 = 9;
    	a174 = 10;
    	a121 = 33 ;
    	a193 = 7;
    	a17 = 36 ;
    	a196 = 12;
    	a34 = 33 ;
    	a81 = 11;
    	a140 = 10;
    	a180 = 33 ;
    	a39 = 14;
    	a13 = 8;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 1961\n");

    if(((a69 == 32 && (a118 == 32 && (a56 == 9 && ((input == 2) &&  cf==1 )))) && (a141 == 32 && (a146 == 32 && a51 == 32)))) {
printf("POINT: 1962\n");
    	cf = 0;
printf("POINT: 1963\n");

    	if((a111 == 33 || (((!(a40 == 33) && a155 == 34) && !(a160 == 33)) || a186 == 35))) {
printf("POINT: 1964\n");
    	a131 = 14;
    	a32 = 35 ;
    	a51 = 32 ;
    	a15 = 9;
    	a90 = 36 ;
    	a140 = 8;
    	a86 = 35 ;
    	a119 = 32 ;
    	a141 = 35 ;
    	a16 = 15;
    	a128 = 5;
    	a34 = 36 ;
    	a109 = 35 ;
    	a174 = 9;
    	a45 = 34 ;
    	a26 = 9;
    	a56 = 15;
    	a125 = 34 ;
    	a79 = 8;
    	a20 = 6;
    	a48 = 34 ;
    	a153 = 10;
    	a200 = 32 ;
    	a88 = 35 ;
    	a12 = 34 ;
    	a41 = 33 ;
    	a37 = 15;
    	a104 = 34 ;
    	a110 = 5;
    	a196 = 7;
    	a193 = 14;
    	a81 = 14;
    	a30 = 33 ;
    	a118 = 33 ;
    	a95 = 14;
    	a179 = 32 ;
    	a39 = 13;
    	a198 = 33 ;
    	a112 = 33 ;
    	a120 = 11;
    	a144 = 34 ;
    	a184 = 11;
    	a22 = 10;
    	a167 = 5;
    	a68 = 8;
    	a180 = 35 ;
    	a61 = 2; 
    	}else {
printf("POINT: 1966\n");
    	a95 = 11;
    	a48 = 35 ;
    	a34 = 34 ;
    	a200 = 36 ;
    	a193 = 11;
    	a153 = 9;
    	a158 = 13;
    	a180 = 36 ;
    	a15 = 16;
    	a163 = 32 ;
    	a104 = 33 ;
    	a123 = 6;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 1967\n");

    if(((a144 == 32 && (a20 == 4 && a79 == 6)) && (a118 == 32 && (a165 == 32 && (( cf==1  && (input == 6)) && a105 == 11))))) {
printf("POINT: 1968\n");
    	cf = 0;
    	a101 = 36 ;
    	a34 = 36 ;
    	a41 = 35 ;
    	a179 = 35 ;
    	a3 = 35 ;
    	a141 = 33 ;
    	a110 = 7;
    	a134 = 13;
    	a193 = 10;
    	a65 = 16;
    	a95 = 15;
    	a152 = 15;
    	a178 = 34 ;
    	a53 = 36 ;
    	a109 = 34 ;
    	a12 = 36 ;
    	a174 = 9;
    	a15 = 9;
    	a25 = 9;
    	a20 = 8;
    	a45 = 34 ;
    	a184 = 11;
    	a28 = 13;
    	a119 = 33 ;
    	a120 = 9;
    	a176 = 4;
    	a51 = 35 ;
    	a160 = 33 ;
    	a153 = 8;
    	a125 = 33 ;
    	a48 = 35 ;
    	a167 = 1;
    	a144 = 34 ;
    	a32 = 34 ;
    	a39 = 14;
    	a2 = 6;
    	a126 = 7;
    	a104 = 34 ;
    	a93 = 6;
    	a180 = 34 ;
    	a105 = 10;
    	a106 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm181(int input) {
printf("POINT: 1969\n");

    if(((a101 == 32 && a37 == 9) && (a150 == 5 && (a12 == 32 && (a109 == 32 && (a17 == 32 && ((input == 9) &&  cf==1 ))))))) {
printf("POINT: 1970\n");
    	cf = 0;
    	a154 = 33 ;
    	a131 = 9;
    	a74 = 35 ;
    	a112 = 33 ;
    	a51 = 33 ;
    	a55 = 33 ;
    	a125 = 33 ;
    	a20 = 3;
    	a200 = 32 ;
    	a198 = 34 ;
    	a105 = 10;
    	a58 = 4; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 1971\n");

    if(((a131 == 10 && (a55 == 32 && a176 == 3)) && ((a41 == 32 && (a110 == 6 && ( cf==1  && (input == 4)))) && a51 == 32))) {
printf("POINT: 1972\n");
    	cf = 0;
    	a146 = 32 ;
    	a184 = 5;
    	a179 = 33 ;
    	a95 = 8;
    	a46 = 32 ;
    	a118 = 32 ;
    	a126 = 4;
    	a81 = 11;
    	a15 = 9;
    	a69 = 33 ;
    	a169 = 32 ;
    	a68 = 2;
    	a152 = 8;
    	a45 = 32 ;
    	a144 = 32 ;
    	a34 = 32 ;
    	a196 = 6;
    	a127 = 7;
    	a93 = 3;
    	a32 = 33 ;
    	a2 = 4;
    	a119 = 33 ;
    	a28 = 10;
    	a178 = 32 ;
    	a65 = 10;
    	a53 = 32 ;
    	a104 = 32 ;
    	a84 = 33 ;
    	a180 = 32 ;
    	a90 = 32 ;
    	a174 = 7;
    	a48 = 32 ;
    	a160 = 32 ;
    	a22 = 7; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 1973\n");

    if((((a112 == 32 && ((input == 3) &&  cf==1 )) && a193 == 8) && (((a109 == 32 && a55 == 32) && a187 == 4) && a39 == 8))) {
printf("POINT: 1974\n");
    	cf = 0;
    	a65 = 10;
    	a180 = 32 ;
    	a53 = 32 ;
    	a126 = 4;
    	a2 = 4;
    	a46 = 32 ;
    	a144 = 32 ;
    	a81 = 11;
    	a184 = 5;
    	a179 = 33 ;
    	a48 = 32 ;
    	a196 = 6;
    	a146 = 32 ;
    	a95 = 8;
    	a90 = 32 ;
    	a15 = 9;
    	a118 = 32 ;
    	a178 = 32 ;
    	a22 = 7;
    	a84 = 33 ;
    	a174 = 7;
    	a32 = 33 ;
    	a160 = 32 ;
    	a119 = 33 ;
    	a69 = 33 ;
    	a93 = 3;
    	a104 = 32 ;
    	a45 = 32 ;
    	a28 = 10;
    	a127 = 7;
    	a68 = 2;
    	a34 = 32 ;
    	a169 = 32 ;
    	a152 = 8; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 1975\n");

    if(((a20 == 4 && ((a30 == 32 && ( cf==1  && (input == 7))) && a39 == 8)) && ((a12 == 32 && a154 == 32) && a115 == 32))) {
printf("POINT: 1976\n");
    	cf = 0;
    	a104 = 32 ;
    	a93 = 3;
    	a65 = 10;
    	a48 = 32 ;
    	a127 = 7;
    	a119 = 33 ;
    	a152 = 8;
    	a84 = 33 ;
    	a144 = 32 ;
    	a34 = 32 ;
    	a69 = 33 ;
    	a32 = 33 ;
    	a146 = 32 ;
    	a160 = 32 ;
    	a118 = 32 ;
    	a81 = 11;
    	a196 = 6;
    	a46 = 32 ;
    	a179 = 33 ;
    	a169 = 32 ;
    	a178 = 32 ;
    	a95 = 8;
    	a53 = 32 ;
    	a22 = 7;
    	a180 = 32 ;
    	a68 = 2;
    	a45 = 32 ;
    	a90 = 32 ;
    	a2 = 4;
    	a28 = 10;
    	a174 = 7;
    	a126 = 4;
    	a15 = 9;
    	a184 = 5; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm26(int input) {
printf("POINT: 1977\n");

    if((((a153 == 4 && a84 == 32) && a131 == 10) && (a110 == 6 && ((a110 == 6 && (a54 == 33 &&  cf==1 )) && a65 == 10)))) {
printf("POINT: 1978\n");
printf("POINT: 1979\n");

    	if(((a30 == 32 && (((a111 == 35 &&  cf==1 ) && a84 == 32) && a180 == 32)) && (a144 == 32 && (a81 == 11 && a174 == 8)))) {
printf("POINT: 1980\n");
    		calculate_outputm178(input);
    	} 
    } 
printf("POINT: 1981\n");

    if(((a165 == 32 && (a25 == 5 && ( cf==1  && a54 == 32))) && (a28 == 10 && (a48 == 32 && (a68 == 3 && a165 == 32))))) {
printf("POINT: 1982\n");
printf("POINT: 1983\n");

    	if((((( cf==1  && a87 == 35) && a150 == 5) && a112 == 32) && (a140 == 5 && (a17 == 32 && (a131 == 10 && a179 == 32))))) {
printf("POINT: 1984\n");
    		calculate_outputm179(input);
    	} 
    } 
printf("POINT: 1985\n");

    if((((a178 == 32 && (a54 == 35 &&  cf==1 )) && a127 == 7) && (a146 == 32 && (a17 == 32 && (a146 == 32 && a125 == 32))))) {
printf("POINT: 1986\n");
printf("POINT: 1987\n");

    	if(((a81 == 11 && (a20 == 4 && a169 == 32)) && (a30 == 32 && ((a150 == 5 && (a108 == 9 &&  cf==1 )) && a110 == 6)))) {
printf("POINT: 1988\n");
    		calculate_outputm180(input);
    	} 
    } 
printf("POINT: 1989\n");

    if(((a56 == 9 && a39 == 8) && ((((( cf==1  && a54 == 36) && a37 == 9) && a153 == 4) && a20 == 4) && a121 == 32))) {
printf("POINT: 1990\n");
printf("POINT: 1991\n");

    	if(((a187 == 4 && ( cf==1  && a191 == 15)) && ((a16 == 10 && ((a153 == 4 && a120 == 6) && a79 == 6)) && a125 == 32))) {
printf("POINT: 1992\n");
    		calculate_outputm181(input);
    	} 
    } 
}
 void calculate_outputm182(int input) {
printf("POINT: 1993\n");

    if(((( cf==1  && (input == 7)) && a141 == 32) && (a179 == 32 && ((a22 == 8 && (a121 == 32 && a37 == 9)) && a17 == 32)))) {
printf("POINT: 1994\n");
    	cf = 0;
    	a47 = 36 ;
    	a59 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm183(int input) {
printf("POINT: 1995\n");

    if(((a93 == 3 && (a169 == 32 && (a37 == 9 && ((input == 4) &&  cf==1 )))) && (a30 == 32 && (a193 == 8 && a128 == 2)))) {
printf("POINT: 1996\n");
    	cf = 0;
    	a174 = 7;
    	a2 = 4;
    	a125 = 33 ;
    	a84 = 32 ;
    	a95 = 9;
    	a53 = 32 ;
    	a200 = 35 ;
    	a160 = 32 ;
    	a167 = 2;
    	a3 = 32 ;
    	a184 = 5;
    	a140 = 6;
    	a112 = 32 ;
    	a152 = 8;
    	a25 = 5;
    	a28 = 10;
    	a119 = 33 ;
    	a109 = 32 ;
    	a134 = 16;
    	a69 = 32 ;
    	a26 = 3;
    	a16 = 10;
    	a56 = 9;
    	a39 = 8;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 1997\n");

    if(((a126 == 4 && (a160 == 32 && (a0 == 32 && a110 == 6))) && ((a95 == 9 && ((input == 9) &&  cf==1 )) && a110 == 6))) {
printf("POINT: 1998\n");
    	cf = 0;
    	a51 = 33 ;
    	a158 = 9;
    	a154 = 33 ;
    	a136 = 13;
    	a22 = 7;
    	a133 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm184(int input) {
printf("POINT: 1999\n");

    if(((( cf==1  && (input == 10)) && a146 == 32) && ((((a115 == 32 && a110 == 6) && a193 == 8) && a140 == 5) && a84 == 32))) {
printf("POINT: 2000\n");
    	cf = 0;
    	a187 = 5;
    	a160 = 34 ;
    	a110 = 7;
    	a15 = 11;
    	a153 = 5;
    	a137 = 34 ;
    	a41 = 34 ;
    	a158 = 7;
    	a127 = 8;
    	a93 = 4;
    	a64 = 10; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2001\n");

    if((((a93 == 3 && (a176 == 3 && ((input == 3) &&  cf==1 ))) && a88 == 32) && ((a84 == 32 && a187 == 4) && a105 == 11))) {
printf("POINT: 2002\n");
    	cf = 0;
    	a101 = 32 ;
    	a128 = 2;
    	a152 = 10;
    	a79 = 6;
    	a68 = 3;
    	a167 = 3;
    	a90 = 32 ;
    	a121 = 32 ;
    	a97 = 5;
    	a2 = 4;
    	a125 = 34 ;
    	a109 = 34 ;
    	a48 = 34 ;
    	a144 = 32 ;
    	a178 = 32 ;
    	a39 = 8;
    	a118 = 34 ;
    	a17 = 32 ;
    	a65 = 10;
    	a56 = 9;
    	a165 = 32 ;
    	a180 = 34 ;
    	a51 = 32 ;
    	a150 = 5;
    	a154 = 32 ;
    	a169 = 34 ;
    	a53 = 34 ;
    	a16 = 10;
    	a22 = 8;
    	a95 = 9;
    	a69 = 32 ;
    	a174 = 8;
    	a37 = 10;
    	a120 = 6;
    	a25 = 6;
    	a104 = 34 ;
    	a32 = 34 ;
    	a184 = 7;
    	a112 = 32 ;
    	a26 = 4;
    	a28 = 10; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2003\n");

    if(((a141 == 32 && a160 == 32) && (a131 == 10 && (((a45 == 32 && ((input == 9) &&  cf==1 )) && a81 == 11) && a153 == 4)))) {
printf("POINT: 2004\n");
    	cf = 0;
    	a68 = 3;
    	a184 = 7;
    	a37 = 10;
    	a97 = 5;
    	a144 = 32 ;
    	a165 = 32 ;
    	a178 = 32 ;
    	a101 = 32 ;
    	a56 = 9;
    	a32 = 34 ;
    	a180 = 34 ;
    	a154 = 32 ;
    	a26 = 4;
    	a174 = 8;
    	a17 = 32 ;
    	a25 = 6;
    	a65 = 10;
    	a39 = 8;
    	a167 = 3;
    	a48 = 34 ;
    	a112 = 32 ;
    	a104 = 34 ;
    	a90 = 32 ;
    	a128 = 2;
    	a2 = 4;
    	a152 = 10;
    	a118 = 34 ;
    	a121 = 32 ;
    	a53 = 34 ;
    	a22 = 8;
    	a150 = 5;
    	a95 = 9;
    	a51 = 32 ;
    	a28 = 10;
    	a79 = 6;
    	a69 = 32 ;
    	a120 = 6;
    	a109 = 34 ;
    	a169 = 34 ;
    	a125 = 34 ;
    	a16 = 10; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm185(int input) {
printf("POINT: 2005\n");

    if((a15 == 10 && (a105 == 11 && (a184 == 6 && (a140 == 5 && (a165 == 32 && (a112 == 32 && ( cf==1  && (input == 3))))))))) {
printf("POINT: 2006\n");
    	cf = 0;
    	a95 = 15;
    	a68 = 2;
    	a140 = 8;
    	a169 = 36 ;
    	a125 = 36 ;
    	a53 = 32 ;
    	a26 = 5;
    	a69 = 35 ;
    	a165 = 35 ;
    	a167 = 5;
    	a45 = 33 ;
    	a119 = 36 ;
    	a30 = 32 ;
    	a178 = 33 ;
    	a126 = 6;
    	a41 = 33 ;
    	a153 = 6;
    	a135 = 14;
    	a104 = 33 ;
    	a101 = 35 ;
    	a16 = 9;
    	a112 = 36 ;
    	a48 = 32 ;
    	a1 = 35 ;
    	a15 = 13;
    	a25 = 4;
    	a128 = 8;
    	a2 = 6;
    	a88 = 35 ;
    	a56 = 15;
    	a17 = 35 ;
    	a144 = 35 ;
    	a174 = 11;
    	a46 = 36 ;
    	a176 = 5;
    	a120 = 11;
    	a20 = 8;
    	a105 = 11;
    	a180 = 36 ;
    	a152 = 15;
    	a22 = 10;
    	a127 = 6;
    	a90 = 34 ;
    	a146 = 36 ;
    	a193 = 13;
    	a32 = 35 ;
    	a196 = 9;
    	a200 = 34 ;
    	a97 = 8;
    	a39 = 11;
    	a98 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2007\n");

    if((((a127 == 7 && ((input == 5) &&  cf==1 )) && a79 == 6) && (a95 == 9 && (a126 == 4 && (a2 == 4 && a20 == 4))))) {
printf("POINT: 2008\n");
    	cf = 0;
    	a187 = 8;
    	a97 = 3;
    	a39 = 12;
    	a115 = 35 ;
    	a28 = 16;
    	a32 = 35 ;
    	a12 = 35 ;
    	a160 = 33 ;
    	a112 = 36 ;
    	a25 = 10;
    	a2 = 10;
    	a179 = 36 ;
    	a153 = 4;
    	a84 = 36 ;
    	a198 = 32 ;
    	a55 = 36 ;
    	a109 = 34 ;
    	a54 = 35 ;
    	a146 = 36 ;
    	a56 = 9;
    	a200 = 32 ;
    	a105 = 14;
    	a81 = 10;
    	a134 = 11; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2009\n");

    if((((a88 == 32 && a2 == 4) && a0 == 32) && (((((input == 4) &&  cf==1 ) && a26 == 3) && a152 == 9) && a167 == 2))) {
printf("POINT: 2010\n");
    	cf = 0;
    	a32 = 36 ;
    	a34 = 36 ;
    	a152 = 9;
    	a86 = 34 ;
    	a93 = 9;
    	a179 = 35 ;
    	a81 = 12;
    	a2 = 10;
    	a46 = 33 ;
    	a90 = 36 ;
    	a144 = 36 ;
    	a68 = 2;
    	a48 = 35 ;
    	a200 = 32 ;
    	a125 = 35 ;
    	a193 = 12;
    	a154 = 33 ;
    	a97 = 3;
    	a167 = 6;
    	a45 = 33 ;
    	a28 = 10;
    	a53 = 36 ;
    	a153 = 4;
    	a140 = 10;
    	a84 = 36 ;
    	a128 = 1;
    	a37 = 13;
    	a56 = 15;
    	a88 = 34 ;
    	a105 = 16;
    	a119 = 33 ;
    	a55 = 33 ;
    	a160 = 35 ;
    	a126 = 9;
    	a65 = 11;
    	a12 = 33 ;
    	a30 = 33 ;
    	a187 = 3;
    	a22 = 14;
    	a51 = 36 ;
    	a198 = 33 ;
    	a39 = 11;
    	a131 = 12;
    	a196 = 6;
    	a118 = 36 ;
    	a146 = 36 ;
    	a66 = 10; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2011\n");

    if(((a165 == 32 && ((a150 == 5 && a128 == 2) && a128 == 2)) && ((a146 == 32 && ( cf==1  && (input == 1))) && a119 == 32))) {
printf("POINT: 2012\n");
    	cf = 0;
    	a28 = 14;
    	a144 = 32 ;
    	a196 = 5;
    	a37 = 15;
    	a30 = 36 ;
    	a84 = 34 ;
    	a152 = 11;
    	a134 = 15;
    	a168 = 35 ;
    	a200 = 35 ;
    	a160 = 36 ;
    	a128 = 5;
    	a114 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2013\n");

    if(((a22 == 8 && ( cf==1  && (input == 6))) && (a144 == 32 && (a169 == 32 && (a22 == 8 && (a110 == 6 && a196 == 6)))))) {
printf("POINT: 2014\n");
    	cf = 0;
printf("POINT: 2015\n");

    	if((a55 == 32 || !(a23 == 34))) {
printf("POINT: 2016\n");
    	a90 = 35 ;
    	a55 = 36 ;
    	a176 = 5;
    	a12 = 32 ;
    	a146 = 36 ;
    	a104 = 32 ;
    	a41 = 33 ;
    	a39 = 14;
    	a16 = 11;
    	a152 = 11;
    	a126 = 6;
    	a20 = 9;
    	a88 = 36 ;
    	a115 = 34 ;
    	a30 = 34 ;
    	a51 = 36 ;
    	a22 = 10;
    	a93 = 7;
    	a26 = 2;
    	a79 = 12;
    	a45 = 33 ;
    	a46 = 34 ;
    	a127 = 12;
    	a2 = 9;
    	a165 = 34 ;
    	a112 = 33 ;
    	a34 = 36 ;
    	a101 = 32 ;
    	a97 = 7;
    	a150 = 8;
    	a119 = 35 ;
    	a15 = 12;
    	a17 = 33 ;
    	a120 = 5;
    	a153 = 7;
    	a109 = 36 ;
    	a32 = 33 ;
    	a179 = 36 ;
    	a95 = 12;
    	a154 = 33 ;
    	a0 = 33 ;
    	a144 = 35 ;
    	a94 = 33 ;
    	a68 = 8;
    	a110 = 9;
    	a25 = 8;
    	a196 = 11;
    	a174 = 14;
    	a56 = 8;
    	a141 = 36 ;
    	a121 = 35 ;
    	a37 = 12;
    	a140 = 4;
    	a184 = 5;
    	a118 = 32 ;
    	a160 = 35 ;
    	a105 = 15;
    	a53 = 33 ;
    	a178 = 35 ;
    	a151 = 34 ;
    	a200 = 34 ;
    	a69 = 34 ;
    	a167 = 5;
    	a180 = 35 ;
    	a193 = 10;
    	a125 = 36 ;
    	a131 = 16;
    	a128 = 1;
    	a65 = 9;
    	a48 = 35 ;
    	a169 = 33 ;
    	a135 = 12; 
    	}else {
printf("POINT: 2018\n");
    	a154 = 32 ;
    	a144 = 34 ;
    	a69 = 36 ;
    	a112 = 34 ;
    	a28 = 15;
    	a178 = 32 ;
    	a88 = 32 ;
    	a81 = 12;
    	a93 = 6;
    	a164 = 6;
    	a39 = 8;
    	a146 = 36 ;
    	a184 = 9;
    	a2 = 6;
    	a45 = 36 ;
    	a134 = 10;
    	a187 = 6;
    	a125 = 32 ;
    	a167 = 6;
    	a84 = 36 ;
    	a200 = 35 ;
    	a127 = 8;
    	a118 = 34 ;
    	a15 = 11;
    	a119 = 35 ;
    	a32 = 35 ;
    	a180 = 36 ;
    	a152 = 14;
    	a10 = 7;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 2019\n");

    if(((a184 == 6 && (a17 == 32 && ((a179 == 32 && a153 == 4) && a90 == 32))) && (a45 == 32 && ( cf==1  && (input == 8))))) {
printf("POINT: 2020\n");
    	cf = 0;
    	a55 = 36 ;
    	a125 = 34 ;
    	a109 = 33 ;
    	a20 = 7;
    	a81 = 17;
    	a3 = 35 ;
    	a28 = 15;
    	a39 = 7;
    	a95 = 10;
    	a53 = 35 ;
    	a65 = 15;
    	a12 = 34 ;
    	a167 = 4;
    	a176 = 8;
    	a25 = 10;
    	a45 = 36 ;
    	a134 = 13;
    	a84 = 35 ;
    	a101 = 35 ;
    	a152 = 10;
    	a184 = 8;
    	a178 = 36 ;
    	a37 = 8;
    	a126 = 9;
    	a2 = 3;
    	a179 = 33 ;
    	a120 = 11;
    	a141 = 33 ;
    	a200 = 35 ;
    	a144 = 36 ;
    	a51 = 36 ;
    	a193 = 7;
    	a15 = 14;
    	a93 = 8;
    	a160 = 35 ;
    	a119 = 35 ;
    	a48 = 36 ;
    	a32 = 34 ;
    	a153 = 9;
    	a110 = 8;
    	a187 = 8;
    	a41 = 33 ;
    	a105 = 12;
    	a106 = 7; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2021\n");

    if((((a165 == 32 && (a15 == 10 && ((input == 10) &&  cf==1 ))) && a34 == 32) && (a93 == 3 && (a88 == 32 && a167 == 2)))) {
printf("POINT: 2022\n");
    	cf = 0;
    	a114 = 12;
    	a200 = 35 ;
    	a160 = 33 ;
    	a55 = 33 ;
    	a37 = 8;
    	a187 = 9;
    	a109 = 35 ;
    	a134 = 15;
    	a28 = 9;
    	a81 = 16;
    	a84 = 36 ;
    	a147 = 1; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2023\n");

    if(((a15 == 10 && (a17 == 32 && (a46 == 32 && a48 == 32))) && ((( cf==1  && (input == 7)) && a174 == 8) && a46 == 32))) {
printf("POINT: 2024\n");
    	cf = 0;
    	a55 = 35 ;
    	a152 = 15;
    	a110 = 9;
    	a45 = 36 ;
    	a37 = 15;
    	a105 = 10;
    	a26 = 5;
    	a84 = 33 ;
    	a109 = 35 ;
    	a22 = 9;
    	a187 = 10;
    	a15 = 9;
    	a169 = 33 ;
    	a104 = 32 ;
    	a184 = 11;
    	a154 = 34 ;
    	a115 = 36 ;
    	a101 = 35 ;
    	a56 = 12;
    	a140 = 4;
    	a97 = 10;
    	a32 = 32 ;
    	a68 = 4;
    	a144 = 32 ;
    	a28 = 15;
    	a121 = 35 ;
    	a150 = 9;
    	a179 = 33 ;
    	a174 = 11;
    	a120 = 7;
    	a69 = 35 ;
    	a158 = 10;
    	a126 = 8;
    	a95 = 15;
    	a165 = 33 ;
    	a128 = 5;
    	a183 = 12;
    	a160 = 36 ;
    	a53 = 32 ;
    	a90 = 33 ;
    	a125 = 32 ;
    	a2 = 10;
    	a118 = 36 ;
    	a79 = 9;
    	a193 = 8;
    	a81 = 10;
    	a25 = 10;
    	a7 = 7; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2025\n");

    if(((a131 == 10 && ((input == 9) &&  cf==1 )) && ((((a179 == 32 && a104 == 32) && a176 == 3) && a169 == 32) && a165 == 32))) {
printf("POINT: 2026\n");
    	cf = 0;
    	a200 = 32 ;
    	a28 = 16;
    	a45 = 36 ;
    	a53 = 36 ;
    	a198 = 34 ;
    	a37 = 15;
    	a55 = 34 ;
    	a179 = 32 ;
    	a187 = 9;
    	a110 = 9;
    	a160 = 33 ;
    	a126 = 10;
    	a69 = 36 ;
    	a84 = 35 ;
    	a81 = 17;
    	a109 = 34 ;
    	a90 = 34 ;
    	a58 = 5;
    	a174 = 14;
    	a125 = 32 ;
    	a140 = 5;
    	a72 = 4; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2027\n");

    if((((a174 == 8 && a152 == 9) && a144 == 32) && ((a180 == 32 && (( cf==1  && (input == 2)) && a184 == 6)) && a193 == 8))) {
printf("POINT: 2028\n");
    	cf = 0;
printf("POINT: 2029\n");

    	if((!(a172 == 32) && (!(a119 == 35) || a62 == 9))) {
printf("POINT: 2030\n");
    	a144 = 32 ;
    	a25 = 11;
    	a17 = 35 ;
    	a81 = 11;
    	a167 = 6;
    	a22 = 12;
    	a120 = 12;
    	a53 = 34 ;
    	a200 = 33 ;
    	a160 = 36 ;
    	a69 = 34 ;
    	a184 = 6;
    	a65 = 10;
    	a16 = 10;
    	a150 = 10;
    	a125 = 34 ;
    	a0 = 34 ;
    	a153 = 8;
    	a121 = 36 ;
    	a84 = 32 ;
    	a104 = 32 ;
    	a105 = 13;
    	a196 = 7;
    	a26 = 6;
    	a101 = 36 ;
    	a95 = 10;
    	a110 = 10;
    	a179 = 34 ;
    	a46 = 36 ;
    	a118 = 35 ;
    	a51 = 34 ;
    	a15 = 14;
    	a12 = 36 ;
    	a126 = 6;
    	a154 = 32 ;
    	a86 = 32 ;
    	a90 = 35 ;
    	a77 = 9;
    	a152 = 13;
    	a32 = 35 ;
    	a48 = 34 ;
    	a56 = 9;
    	a2 = 10;
    	a112 = 36 ;
    	a45 = 36 ;
    	a88 = 35 ;
    	a37 = 13;
    	a20 = 6;
    	a174 = 14;
    	a131 = 10;
    	a79 = 6;
    	a34 = 32 ;
    	a41 = 36 ;
    	a147 = 1; 
    	}else {
printf("POINT: 2032\n");
    	a110 = 7;
    	a180 = 35 ;
    	a84 = 36 ;
    	a141 = 36 ;
    	a39 = 14;
    	a26 = 2;
    	a160 = 35 ;
    	a174 = 12;
    	a90 = 34 ;
    	a179 = 33 ;
    	a193 = 7;
    	a97 = 3;
    	a127 = 11;
    	a187 = 10;
    	a55 = 32 ;
    	a28 = 15;
    	a109 = 36 ;
    	a122 = 33 ;
    	a184 = 10;
    	a125 = 36 ;
    	a37 = 10;
    	a128 = 1;
    	a22 = 7;
    	a81 = 15;
    	a146 = 35 ;
    	a51 = 35 ;
    	a176 = 5;
    	a167 = 3;
    	a158 = 8;
    	a153 = 6;
    	a196 = 8;
    	a25 = 10;
    	a53 = 35 ;
    	a45 = 32 ;
    	a56 = 13;
    	a69 = 36 ;
    	a65 = 15;
    	a30 = 36 ;
    	a144 = 33 ;
    	a140 = 11;
    	a118 = 36 ;
    	a126 = 5;
    	a101 = 33 ;
    	a154 = 36 ;
    	a120 = 11;
    	a178 = 34 ;
    	a113 = 3;
    	}printf("%d\n", 19);  
    } 
}
 void calculate_outputm186(int input) {
printf("POINT: 2033\n");

    if((a101 == 32 && (a37 == 9 && ((a28 == 10 && (a109 == 32 && (( cf==1  && (input == 8)) && a120 == 6))) && a16 == 10)))) {
printf("POINT: 2034\n");
    	cf = 0;
    	a12 = 34 ;
    	a118 = 35 ;
    	a3 = 35 ;
    	a196 = 9;
    	a200 = 35 ;
    	a112 = 33 ;
    	a16 = 16;
    	a56 = 15;
    	a119 = 35 ;
    	a104 = 33 ;
    	a134 = 13;
    	a101 = 36 ;
    	a153 = 6;
    	a32 = 35 ;
    	a20 = 8;
    	a25 = 8;
    	a95 = 14;
    	a26 = 7;
    	a41 = 34 ;
    	a48 = 36 ;
    	a106 = 9; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2035\n");

    if(((((a179 == 32 && a101 == 32) && a95 == 9) && a110 == 6) && (a121 == 32 && (a150 == 5 && ( cf==1  && (input == 4)))))) {
printf("POINT: 2036\n");
    	cf = 0;
    	a112 = 33 ;
    	a169 = 35 ;
    	a32 = 36 ;
    	a165 = 36 ;
    	a196 = 12;
    	a104 = 35 ;
    	a48 = 35 ;
    	a184 = 10;
    	a110 = 12;
    	a26 = 6;
    	a128 = 8;
    	a53 = 33 ;
    	a158 = 10;
    	a118 = 33 ;
    	a79 = 12;
    	a30 = 33 ;
    	a176 = 6;
    	a105 = 15;
    	a179 = 34 ;
    	a81 = 15;
    	a141 = 34 ;
    	a97 = 5;
    	a144 = 34 ;
    	a37 = 14;
    	a183 = 12;
    	a7 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2037\n");

    if((((a41 == 32 && (a196 == 6 && a178 == 32)) && a119 == 32) && ((a32 == 32 && ((input == 2) &&  cf==1 )) && a37 == 9))) {
printf("POINT: 2038\n");
    	cf = 0;
    	a184 = 12;
    	a12 = 35 ;
    	a144 = 36 ;
    	a174 = 10;
    	a169 = 32 ;
    	a118 = 33 ;
    	a125 = 35 ;
    	a172 = 34 ;
    	a26 = 7;
    	a152 = 9;
    	a51 = 33 ;
    	a105 = 16;
    	a127 = 6;
    	a154 = 33 ;
    	a167 = 2;
    	a135 = 9;
    	a140 = 5;
    	a193 = 10;
    	a81 = 14;
    	a187 = 4;
    	a101 = 32 ;
    	a104 = 33 ;
    	a165 = 32 ;
    	a121 = 35 ;
    	a141 = 35 ;
    	a30 = 33 ;
    	a196 = 5;
    	a146 = 33 ;
    	a28 = 10;
    	a179 = 36 ;
    	a150 = 11;
    	a160 = 32 ;
    	a46 = 32 ;
    	a180 = 35 ;
    	a37 = 8;
    	a15 = 9;
    	a2 = 8;
    	a48 = 36 ;
    	a109 = 36 ;
    	a39 = 14;
    	a79 = 6;
    	a93 = 6;
    	a41 = 33 ;
    	a53 = 35 ;
    	a200 = 34 ;
    	a110 = 5;
    	a153 = 7;
    	a32 = 35 ;
    	a164 = 12; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2039\n");

    if(((a16 == 10 && (((a16 == 10 && (a2 == 4 && a115 == 32)) && a140 == 5) && a152 == 9)) && ((input == 1) &&  cf==1 ))) {
printf("POINT: 2040\n");
    	cf = 0;
    	a144 = 35 ;
    	a193 = 11;
    	a118 = 36 ;
    	a86 = 33 ;
    	a200 = 32 ;
    	a196 = 11;
    	a184 = 9;
    	a112 = 36 ;
    	a26 = 8;
    	a22 = 14;
    	a198 = 33 ;
    	a177 = 13; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2041\n");

    if((((a53 == 32 && ( cf==1  && (input == 3))) && a128 == 2) && ((a0 == 32 && (a125 == 32 && a131 == 10)) && a97 == 4))) {
printf("POINT: 2042\n");
    	cf = 0;
printf("POINT: 2043\n");

    	if((a81 == 10 || !(a176 == 6))) {
printf("POINT: 2044\n");
    	a39 = 11;
    	a184 = 11;
    	a165 = 35 ;
    	a167 = 7;
    	a119 = 33 ;
    	a68 = 9;
    	a41 = 36 ;
    	a97 = 3;
    	a101 = 35 ;
    	a179 = 36 ;
    	a0 = 35 ;
    	a53 = 32 ;
    	a20 = 9;
    	a140 = 7;
    	a178 = 32 ;
    	a104 = 36 ;
    	a81 = 14;
    	a37 = 9;
    	a187 = 8;
    	a28 = 16;
    	a55 = 33 ;
    	a110 = 12;
    	a196 = 11;
    	a160 = 36 ;
    	a105 = 11;
    	a153 = 6;
    	a79 = 9;
    	a146 = 33 ;
    	a200 = 34 ;
    	a17 = 35 ;
    	a112 = 36 ;
    	a180 = 35 ;
    	a46 = 35 ;
    	a22 = 8;
    	a193 = 14;
    	a154 = 33 ;
    	a48 = 33 ;
    	a118 = 34 ;
    	a135 = 9;
    	a34 = 33 ;
    	a26 = 8;
    	a65 = 9;
    	a164 = 10;
    	a16 = 10;
    	a84 = 36 ;
    	a56 = 8;
    	a169 = 33 ;
    	a109 = 35 ;
    	a131 = 16;
    	a121 = 36 ;
    	a150 = 11;
    	a90 = 35 ;
    	a127 = 6;
    	a144 = 32 ;
    	a152 = 13;
    	a88 = 36 ;
    	a15 = 10;
    	a2 = 4;
    	a128 = 2;
    	a32 = 33 ;
    	a93 = 7;
    	a52 = 12; 
    	}else {
printf("POINT: 2046\n");
    	a193 = 12;
    	a15 = 10;
    	a95 = 14;
    	a45 = 36 ;
    	a126 = 5;
    	a158 = 11;
    	a184 = 7;
    	a146 = 33 ;
    	a180 = 35 ;
    	a118 = 35 ;
    	a154 = 36 ;
    	a32 = 33 ;
    	a17 = 34 ;
    	a105 = 13;
    	a160 = 35 ;
    	a46 = 33 ;
    	a39 = 10;
    	a37 = 9;
    	a140 = 5;
    	a104 = 32 ;
    	a101 = 33 ;
    	a55 = 36 ;
    	a196 = 6;
    	a153 = 5;
    	a26 = 8;
    	a41 = 33 ;
    	a51 = 34 ;
    	a90 = 35 ;
    	a79 = 12;
    	a69 = 34 ;
    	a128 = 2;
    	a127 = 6;
    	a36 = 34 ;
    	a112 = 32 ;
    	a16 = 13;
    	a68 = 8;
    	a120 = 11;
    	a185 = 13;
    	}printf("%d\n", 21);  
    } 
printf("POINT: 2047\n");

    if(((a154 == 32 && ( cf==1  && (input == 6))) && ((((a2 == 4 && a81 == 11) && a55 == 32) && a109 == 32) && a15 == 10))) {
printf("POINT: 2048\n");
    	cf = 0;
    	a56 = 10;
    	a79 = 12;
    	a131 = 12;
    	a16 = 15;
    	a112 = 33 ;
    	a125 = 32 ;
    	a200 = 32 ;
    	a110 = 10;
    	a198 = 33 ;
    	a26 = 2;
    	a88 = 34 ;
    	a90 = 33 ;
    	a45 = 36 ;
    	a30 = 35 ;
    	a22 = 8;
    	a86 = 35 ;
    	a119 = 32 ;
    	a95 = 12;
    	a32 = 33 ;
    	a81 = 13;
    	a120 = 10;
    	a41 = 36 ;
    	a184 = 8;
    	a144 = 35 ;
    	a167 = 7;
    	a141 = 35 ;
    	a140 = 4;
    	a174 = 13;
    	a37 = 10;
    	a39 = 9;
    	a196 = 8;
    	a51 = 32 ;
    	a118 = 36 ;
    	a179 = 34 ;
    	a12 = 33 ;
    	a20 = 9;
    	a68 = 4;
    	a128 = 5;
    	a61 = 2; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2049\n");

    if(((a34 == 32 && a28 == 10) && ((a69 == 32 && ((( cf==1  && (input == 9)) && a174 == 8) && a154 == 32)) && a196 == 6))) {
printf("POINT: 2050\n");
    	cf = 0;
    	a53 = 35 ;
    	a151 = 35 ;
    	a200 = 34 ;
    	a79 = 6;
    	a101 = 33 ;
    	a16 = 13;
    	a86 = 32 ;
    	a28 = 9;
    	a120 = 11;
    	a167 = 5;
    	a51 = 32 ;
    	a22 = 10;
    	a15 = 12;
    	a154 = 33 ;
    	a39 = 13;
    	a187 = 7;
    	a144 = 32 ;
    	a37 = 12;
    	a105 = 14;
    	a25 = 5;
    	a180 = 32 ;
    	a109 = 36 ;
    	a160 = 36 ;
    	a97 = 6;
    	a153 = 4;
    	a20 = 9;
    	a150 = 5;
    	a104 = 32 ;
    	a128 = 7;
    	a115 = 35 ;
    	a81 = 11;
    	a110 = 6;
    	a152 = 12;
    	a126 = 7;
    	a48 = 33 ;
    	a169 = 32 ;
    	a17 = 33 ;
    	a140 = 9;
    	a196 = 6;
    	a69 = 33 ;
    	a32 = 33 ;
    	a146 = 32 ;
    	a179 = 32 ;
    	a174 = 13;
    	a193 = 8;
    	a125 = 32 ;
    	a65 = 16;
    	a41 = 36 ;
    	a68 = 7;
    	a90 = 35 ;
    	a121 = 36 ;
    	a112 = 36 ;
    	a56 = 11;
    	a135 = 13; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2051\n");

    if((((a65 == 10 && ((input == 5) &&  cf==1 )) && a119 == 32) && (a104 == 32 && ((a128 == 2 && a180 == 32) && a97 == 4)))) {
printf("POINT: 2052\n");
    	cf = 0;
    	a126 = 5;
    	a101 = 35 ;
    	a140 = 11;
    	a2 = 6;
    	a25 = 11;
    	a45 = 36 ;
    	a169 = 36 ;
    	a118 = 32 ;
    	a90 = 33 ;
    	a165 = 35 ;
    	a174 = 7;
    	a56 = 12;
    	a68 = 7;
    	a115 = 36 ;
    	a120 = 12;
    	a69 = 34 ;
    	a84 = 33 ;
    	a158 = 10;
    	a154 = 33 ;
    	a128 = 6;
    	a22 = 7;
    	a97 = 7;
    	a184 = 6;
    	a110 = 11;
    	a55 = 34 ;
    	a26 = 7;
    	a150 = 9;
    	a95 = 8;
    	a109 = 36 ;
    	a121 = 33 ;
    	a125 = 35 ;
    	a152 = 11;
    	a144 = 32 ;
    	a15 = 10;
    	a105 = 14;
    	a53 = 36 ;
    	a179 = 36 ;
    	a104 = 32 ;
    	a32 = 32 ;
    	a193 = 12;
    	a79 = 5;
    	a183 = 12;
    	a7 = 7; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2053\n");

    if(((a105 == 11 && (a46 == 32 && (( cf==1  && (input == 10)) && a126 == 4))) && ((a196 == 6 && a48 == 32) && a12 == 32))) {
printf("POINT: 2054\n");
    	cf = 0;
    	a169 = 35 ;
    	a174 = 11;
    	a134 = 17;
    	a160 = 34 ;
    	a90 = 33 ;
    	a68 = 8;
    	a152 = 10;
    	a65 = 12;
    	a45 = 35 ;
    	a180 = 33 ;
    	a93 = 4;
    	a84 = 34 ;
    	a22 = 13;
    	a15 = 11;
    	a46 = 35 ;
    	a32 = 36 ;
    	a119 = 34 ;
    	a28 = 12;
    	a69 = 32 ;
    	a54 = 36 ;
    	a118 = 35 ;
    	a48 = 36 ;
    	a81 = 12;
    	a53 = 36 ;
    	a200 = 35 ;
    	a2 = 10;
    	a178 = 34 ;
    	a196 = 12;
    	a34 = 34 ;
    	a104 = 33 ;
    	a179 = 35 ;
    	a184 = 10;
    	a144 = 34 ;
    	a146 = 34 ;
    	a127 = 9;
    	a126 = 6;
    	a95 = 10;
    	a191 = 15; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2055\n");

    if(((a120 == 6 && ((a193 == 8 && a112 == 32) && a17 == 32)) && (a65 == 10 && (a179 == 32 && ((input == 7) &&  cf==1 ))))) {
printf("POINT: 2056\n");
    	cf = 0;
printf("POINT: 2057\n");

    	if((!(a46 == 32) && ((a180 == 35 && !(a34 == 35)) && a160 == 34))) {
printf("POINT: 2058\n");
    	a104 = 33 ;
    	a125 = 35 ;
    	a90 = 35 ;
    	a40 = 33 ;
    	a135 = 15;
    	a187 = 4;
    	a115 = 36 ;
    	a20 = 8;
    	a93 = 9;
    	a53 = 36 ;
    	a167 = 8;
    	a154 = 35 ;
    	a196 = 10;
    	a17 = 33 ;
    	a146 = 35 ;
    	a128 = 4;
    	a180 = 35 ;
    	a179 = 32 ;
    	a200 = 34 ;
    	a119 = 32 ;
    	a169 = 33 ;
    	a174 = 8;
    	a32 = 36 ;
    	a176 = 3;
    	a157 = 6; 
    	}else {
printf("POINT: 2060\n");
    	a154 = 32 ;
    	a112 = 32 ;
    	a121 = 35 ;
    	a51 = 33 ;
    	a200 = 34 ;
    	a146 = 36 ;
    	a20 = 8;
    	a45 = 33 ;
    	a104 = 35 ;
    	a93 = 9;
    	a165 = 32 ;
    	a167 = 7;
    	a56 = 13;
    	a39 = 11;
    	a41 = 35 ;
    	a176 = 9;
    	a128 = 5;
    	a118 = 34 ;
    	a141 = 33 ;
    	a12 = 33 ;
    	a131 = 9;
    	a152 = 14;
    	a53 = 36 ;
    	a174 = 14;
    	a69 = 35 ;
    	a196 = 5;
    	a135 = 15;
    	a187 = 4;
    	a101 = 35 ;
    	a157 = 10;
    	a25 = 4;
    	a126 = 6;
    	a55 = 36 ;
    	a109 = 33 ;
    	a34 = 36 ;
    	a32 = 36 ;
    	a79 = 12;
    	a169 = 32 ;
    	a144 = 35 ;
    	a26 = 2;
    	a2 = 7;
    	a30 = 35 ;
    	a193 = 10;
    	a17 = 35 ;
    	a16 = 14;
    	a150 = 7;
    	a180 = 32 ;
    	a90 = 33 ;
    	a46 = 32 ;
    	a179 = 36 ;
    	a119 = 33 ;
    	a197 = 7;
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm187(int input) {
printf("POINT: 2061\n");

    if(((((a46 == 32 && ((input == 9) &&  cf==1 )) && a118 == 32) && a178 == 32) && (a119 == 32 && (a93 == 3 && a174 == 8)))) {
printf("POINT: 2062\n");
    	cf = 0;
    	 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm27(int input) {
printf("POINT: 2063\n");

    if((((((a47 == 33 &&  cf==1 ) && a32 == 32) && a126 == 4) && a37 == 9) && (a17 == 32 && (a127 == 7 && a101 == 32)))) {
printf("POINT: 2064\n");
printf("POINT: 2065\n");

    	if(((a22 == 8 && ((a120 == 6 && (( cf==1  && a60 == 6) && a118 == 32)) && a48 == 32)) && (a65 == 10 && a115 == 32))) {
printf("POINT: 2066\n");
    		calculate_outputm182(input);
    	} 
    } 
printf("POINT: 2067\n");

    if(((a141 == 32 && (a119 == 32 && ((a47 == 32 &&  cf==1 ) && a126 == 4))) && (a196 == 6 && (a109 == 32 && a32 == 32)))) {
printf("POINT: 2068\n");
printf("POINT: 2069\n");

    	if(((((a125 == 32 && (a165 == 32 && (a172 == 32 &&  cf==1 ))) && a127 == 7) && a0 == 32) && (a12 == 32 && a25 == 5))) {
printf("POINT: 2070\n");
    		calculate_outputm183(input);
    	} 
    } 
printf("POINT: 2071\n");

    if(((((a119 == 32 && (a47 == 34 &&  cf==1 )) && a84 == 32) && a196 == 6) && (a115 == 32 && (a126 == 4 && a131 == 10)))) {
printf("POINT: 2072\n");
printf("POINT: 2073\n");

    	if((((a105 == 11 && (a15 == 10 && ( cf==1  && a183 == 16))) && a115 == 32) && (a110 == 6 && (a179 == 32 && a55 == 32)))) {
printf("POINT: 2074\n");
    		calculate_outputm184(input);
    	} 
    } 
printf("POINT: 2075\n");

    if(((a115 == 32 && (a196 == 6 && ( cf==1  && a47 == 35))) && (a105 == 11 && (a115 == 32 && (a41 == 32 && a95 == 9))))) {
printf("POINT: 2076\n");
printf("POINT: 2077\n");

    	if(((a101 == 32 && ((a56 == 9 && a180 == 32) && a93 == 3)) && (a88 == 32 && (( cf==1  && a94 == 32) && a95 == 9)))) {
printf("POINT: 2078\n");
    		calculate_outputm185(input);
    	} 
printf("POINT: 2079\n");

    	if((((a176 == 3 && a109 == 32) && a17 == 32) && (a32 == 32 && (((a94 == 36 &&  cf==1 ) && a165 == 32) && a55 == 32)))) {
printf("POINT: 2080\n");
    		calculate_outputm186(input);
    	} 
    } 
printf("POINT: 2081\n");

    if((((a45 == 32 && a68 == 3) && a193 == 8) && (a30 == 32 && (((a47 == 36 &&  cf==1 ) && a126 == 4) && a45 == 32)))) {
printf("POINT: 2082\n");
printf("POINT: 2083\n");

    	if(((a118 == 32 && ((a196 == 6 && a2 == 4) && a51 == 32)) && (a105 == 11 && (( cf==1  && a59 == 12) && a125 == 32)))) {
printf("POINT: 2084\n");
    		calculate_outputm187(input);
    	} 
    } 
}
 void calculate_outputm188(int input) {
printf("POINT: 2085\n");

    if(((a110 == 6 && (a37 == 9 && (a30 == 32 && ((input == 6) &&  cf==1 )))) && ((a81 == 11 && a121 == 32) && a53 == 32))) {
printf("POINT: 2086\n");
    	cf = 0;
    	a93 = 4;
    	a137 = 34 ;
    	a37 = 10;
    	a110 = 7;
    	a26 = 4;
    	a169 = 34 ;
    	a53 = 34 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm189(int input) {
printf("POINT: 2087\n");

    if(((((a81 == 11 && a118 == 32) && a193 == 8) && a30 == 32) && ((a128 == 2 && ( cf==1  && (input == 5))) && a101 == 32))) {
printf("POINT: 2088\n");
    	cf = 0;
    	a53 = 34 ;
    	a90 = 32 ;
    	a144 = 32 ;
    	a69 = 32 ;
    	a112 = 34 ;
    	a115 = 32 ;
    	a84 = 34 ;
    	a25 = 5;
    	a150 = 5;
    	a140 = 5;
    	a187 = 4;
    	a68 = 3;
    	a45 = 34 ;
    	a37 = 9;
    	a176 = 3;
    	a160 = 32 ;
    	a179 = 32 ;
    	a97 = 4;
    	a2 = 4;
    	a184 = 6;
    	a39 = 9;
    	a121 = 32 ;
    	a169 = 32 ;
    	a196 = 6;
    	a32 = 32 ;
    	a119 = 34 ;
    	a167 = 3;
    	a105 = 11;
    	a28 = 10;
    	a93 = 3;
    	a193 = 8;
    	a48 = 32 ;
    	a41 = 32 ;
    	a56 = 9;
    	a46 = 32 ;
    	a30 = 32 ;
    	a79 = 6;
    	a165 = 32 ;
    	a64 = 16;
    	a180 = 32 ;
    	a154 = 32 ;
    	a189 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm190(int input) {
printf("POINT: 2089\n");

    if((((a196 == 6 && ((a140 == 5 && (a146 == 32 && a144 == 32)) && a141 == 32)) && a90 == 32) && ((input == 4) &&  cf==1 ))) {
printf("POINT: 2090\n");
    	cf = 0;
    	a37 = 9;
    	a105 = 10;
    	a167 = 2;
    	a15 = 10;
    	a26 = 3;
    	a169 = 32 ;
    	a127 = 7;
    	a55 = 33 ;
    	a68 = 2;
    	a118 = 32 ;
    	a154 = 33 ;
    	a25 = 5;
    	a158 = 12;
    	a41 = 32 ;
    	a109 = 32 ;
    	a93 = 3;
    	a180 = 32 ;
    	a48 = 32 ;
    	a140 = 6;
    	a32 = 32 ;
    	a119 = 33 ;
    	a179 = 33 ;
    	a53 = 32 ;
    	a22 = 7;
    	a62 = 6;
    	a51 = 33 ;
    	a110 = 6;
    	a104 = 32 ;
    	a174 = 7;
    	a97 = 4;
    	a125 = 33 ;
    	a153 = 4;
    	a184 = 5;
    	a160 = 32 ;
    	a152 = 8;
    	a187 = 4;
    	a71 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2091\n");

    if((((((( cf==1  && (input == 9)) && a150 == 5) && a112 == 32) && a55 == 32) && a39 == 8) && (a12 == 32 && a140 == 5))) {
printf("POINT: 2092\n");
    	cf = 0;
    	a112 = 34 ;
    	a200 = 34 ;
    	a196 = 7;
    	a12 = 34 ;
    	a193 = 9;
    	a135 = 9;
    	a115 = 34 ;
    	a16 = 11;
    	a164 = 6;
    	a150 = 6;
    	a81 = 12;
    	a144 = 34 ;
    	a146 = 34 ;
    	a0 = 34 ;
    	a65 = 11;
    	a34 = 34 ;
    	a141 = 34 ;
    	a49 = 14; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2093\n");

    if((((a119 == 32 && (((input == 3) &&  cf==1 ) && a144 == 32)) && a193 == 8) && (a34 == 32 && (a69 == 32 && a81 == 11)))) {
printf("POINT: 2094\n");
    	cf = 0;
printf("POINT: 2095\n");

    	if((!(a95 == 12) && ((a39 == 11 && a32 == 35) && !(a0 == 34)))) {
printf("POINT: 2096\n");
    	a90 = 34 ;
    	a55 = 34 ;
    	a154 = 34 ;
    	a158 = 11;
    	a36 = 34 ;
    	a153 = 3;
    	a45 = 33 ;
    	a79 = 7;
    	a112 = 33 ;
    	a17 = 33 ;
    	a126 = 3;
    	a25 = 5;
    	a53 = 32 ;
    	a105 = 12;
    	a68 = 4;
    	a69 = 33 ;
    	a140 = 4;
    	a97 = 4;
    	a120 = 5;
    	a196 = 7;
    	a16 = 9;
    	a110 = 6;
    	a109 = 32 ;
    	a93 = 3;
    	a101 = 34 ;
    	a125 = 32 ;
    	a193 = 9;
    	a51 = 33 ;
    	a37 = 8;
    	a95 = 8;
    	a46 = 34 ;
    	a118 = 33 ;
    	a184 = 5;
    	a169 = 32 ;
    	a146 = 34 ;
    	a39 = 9;
    	a128 = 3;
    	a152 = 9;
    	a26 = 3;
    	a167 = 2;
    	a48 = 32 ;
    	a187 = 4;
    	a185 = 13; 
    	}else {
printf("POINT: 2098\n");
    	a88 = 34 ;
    	a154 = 34 ;
    	a2 = 5;
    	a125 = 32 ;
    	a196 = 7;
    	a39 = 9;
    	a28 = 11;
    	a144 = 34 ;
    	a20 = 5;
    	a112 = 34 ;
    	a165 = 34 ;
    	a184 = 5;
    	a164 = 10;
    	a16 = 11;
    	a131 = 11;
    	a140 = 6;
    	a146 = 34 ;
    	a84 = 34 ;
    	a68 = 4;
    	a150 = 6;
    	a128 = 3;
    	a119 = 34 ;
    	a79 = 7;
    	a200 = 34 ;
    	a193 = 9;
    	a179 = 34 ;
    	a34 = 34 ;
    	a118 = 32 ;
    	a81 = 12;
    	a90 = 34 ;
    	a25 = 5;
    	a0 = 34 ;
    	a46 = 34 ;
    	a55 = 34 ;
    	a56 = 10;
    	a17 = 34 ;
    	a65 = 11;
    	a135 = 9;
    	a121 = 34 ;
    	a178 = 34 ;
    	a101 = 34 ;
    	a26 = 3;
    	a105 = 12;
    	a22 = 9;
    	a52 = 12;
    	}printf("%d\n", 20);  
    } 
}
 void calculate_outputm191(int input) {
printf("POINT: 2099\n");

    if(((a187 == 4 && ((a118 == 32 && ( cf==1  && (input == 10))) && a119 == 32)) && ((a153 == 4 && a88 == 32) && a95 == 9))) {
printf("POINT: 2100\n");
    	cf = 0;
    	a79 = 6;
    	a198 = 34 ;
    	a174 = 9;
    	a115 = 32 ;
    	a200 = 32 ;
    	a184 = 6;
    	a58 = 5;
    	a105 = 11;
    	a48 = 32 ;
    	a90 = 33 ;
    	a160 = 32 ;
    	a84 = 32 ;
    	a144 = 32 ;
    	a193 = 8;
    	a104 = 32 ;
    	a32 = 32 ;
    	a37 = 9;
    	a112 = 32 ;
    	a28 = 9;
    	a126 = 3;
    	a55 = 33 ;
    	a72 = 4; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2101\n");

    if((((a28 == 10 && a12 == 32) && a25 == 5) && (a187 == 4 && ((( cf==1  && (input == 9)) && a34 == 32) && a16 == 10)))) {
printf("POINT: 2102\n");
    	cf = 0;
    	a141 = 34 ;
    	a68 = 4;
    	a142 = 35 ;
    	a45 = 34 ;
    	a126 = 5;
    	a37 = 10;
    	a104 = 34 ;
    	a97 = 5;
    	a115 = 32 ;
    	a187 = 5;
    	a12 = 34 ;
    	a105 = 11;
    	a125 = 34 ;
    	a135 = 10;
    	a144 = 32 ;
    	a112 = 32 ;
    	a16 = 11;
    	a53 = 34 ;
    	a109 = 34 ;
    	a128 = 3;
    	a51 = 34 ;
    	a200 = 34 ;
    	a15 = 11;
    	a146 = 34 ;
    	a184 = 6;
    	a180 = 34 ;
    	a196 = 7;
    	a55 = 34 ;
    	a30 = 32 ;
    	a171 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2103\n");

    if((((((input == 1) &&  cf==1 ) && a17 == 32) && a90 == 32) && (((a2 == 4 && a150 == 5) && a128 == 2) && a15 == 10))) {
printf("POINT: 2104\n");
    	cf = 0;
    	a200 = 33 ;
    	a101 = 33 ;
    	a15 = 9;
    	a152 = 8;
    	a16 = 9;
    	a93 = 3;
    	a90 = 33 ;
    	a41 = 32 ;
    	a187 = 5;
    	a179 = 33 ;
    	a65 = 9;
    	a17 = 34 ;
    	a25 = 4;
    	a29 = 34 ;
    	a150 = 5;
    	a162 = 33 ;
    	a2 = 3;
    	a48 = 32 ;
    	a95 = 8;
    	a39 = 9;
    	a86 = 36 ;
    	a169 = 32 ;
    	a176 = 2;
    	a46 = 33 ;
    	a127 = 8;
    	a154 = 34 ;
    	a167 = 2;
    	a193 = 7;
    	a68 = 2;
    	a126 = 3;
    	a28 = 9; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm192(int input) {
printf("POINT: 2105\n");

    if(((a152 == 9 && a150 == 5) && (a121 == 32 && ((a110 == 6 && (a154 == 32 && ((input == 4) &&  cf==1 ))) && a140 == 5)))) {
printf("POINT: 2106\n");
    	cf = 0;
    	a12 = 33 ;
    	a146 = 34 ;
    	a34 = 33 ;
    	a200 = 33 ;
    	a178 = 33 ;
    	a110 = 5;
    	a126 = 3;
    	a55 = 34 ;
    	a81 = 10;
    	a101 = 33 ;
    	a93 = 2;
    	a79 = 5;
    	a97 = 5;
    	a77 = 9;
    	a131 = 9;
    	a118 = 33 ;
    	a154 = 33 ;
    	a65 = 9;
    	a187 = 3;
    	a22 = 7;
    	a150 = 4;
    	a86 = 32 ;
    	a0 = 33 ;
    	a88 = 34 ;
    	a95 = 8;
    	a179 = 34 ;
    	a165 = 34 ;
    	a152 = 8;
    	a41 = 33 ;
    	a140 = 6;
    	a20 = 3;
    	a120 = 5;
    	a147 = 5; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2107\n");

    if(((((a150 == 5 && (((input == 9) &&  cf==1 ) && a120 == 6)) && a165 == 32) && a81 == 11) && (a79 == 6 && a22 == 8))) {
printf("POINT: 2108\n");
    	cf = 0;
printf("POINT: 2109\n");

    	if(a179 == 34) {
printf("POINT: 2110\n");
    	a134 = 15;
    	a90 = 33 ;
    	a176 = 3;
    	a16 = 9;
    	a187 = 5;
    	a174 = 8;
    	a26 = 3;
    	a37 = 8;
    	a196 = 6;
    	a105 = 10;
    	a28 = 10;
    	a45 = 32 ;
    	a141 = 32 ;
    	a200 = 35 ;
    	a30 = 32 ;
    	a56 = 9;
    	a68 = 3;
    	a95 = 8;
    	a167 = 2;
    	a169 = 32 ;
    	a25 = 4;
    	a127 = 7;
    	a84 = 32 ;
    	a180 = 32 ;
    	a126 = 3;
    	a125 = 32 ;
    	a114 = 14;
    	a110 = 5;
    	a17 = 32 ;
    	a51 = 32 ;
    	a115 = 32 ;
    	a39 = 8;
    	a8 = 12; 
    	}else {
printf("POINT: 2112\n");
    	a179 = 34 ;
    	a176 = 3;
    	a28 = 10;
    	a169 = 32 ;
    	a37 = 8;
    	a17 = 32 ;
    	a79 = 5;
    	a15 = 10;
    	a193 = 9;
    	a180 = 32 ;
    	a56 = 9;
    	a110 = 5;
    	a196 = 6;
    	a26 = 3;
    	a141 = 32 ;
    	a167 = 2;
    	a140 = 4;
    	a42 = 32 ;
    	a127 = 7;
    	a109 = 33 ;
    	a39 = 8;
    	a68 = 3;
    	a46 = 32 ;
    	a2 = 4;
    	a105 = 10;
    	a51 = 32 ;
    	a90 = 32 ;
    	a25 = 5;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 2113\n");

    if(((a93 == 3 && ((a118 == 32 && (a119 == 32 && a165 == 32)) && a178 == 32)) && (((input == 3) &&  cf==1 ) && a179 == 32))) {
printf("POINT: 2114\n");
    	cf = 0;
printf("POINT: 2115\n");

    	if((((a45 == 34 || (!(a103 == 35) || a89 == 32)) && a3 == 32) || !(a185 == 9))) {
printf("POINT: 2116\n");
    	a110 = 5;
    	a81 = 10;
    	a41 = 33 ;
    	a131 = 9;
    	a77 = 9;
    	a95 = 8;
    	a20 = 3;
    	a187 = 3;
    	a79 = 5;
    	a93 = 2;
    	a65 = 9;
    	a86 = 32 ;
    	a88 = 34 ;
    	a126 = 3;
    	a165 = 34 ;
    	a178 = 33 ;
    	a200 = 33 ;
    	a179 = 34 ;
    	a101 = 33 ;
    	a12 = 33 ;
    	a120 = 5;
    	a146 = 34 ;
    	a140 = 6;
    	a152 = 8;
    	a22 = 7;
    	a150 = 4;
    	a118 = 33 ;
    	a0 = 33 ;
    	a55 = 34 ;
    	a154 = 33 ;
    	a97 = 5;
    	a34 = 33 ;
    	a147 = 5; 
    	}else {
printf("POINT: 2118\n");
    	a88 = 34 ;
    	a167 = 2;
    	a200 = 32 ;
    	a104 = 32 ;
    	a45 = 32 ;
    	a84 = 32 ;
    	a34 = 33 ;
    	a179 = 34 ;
    	a17 = 34 ;
    	a65 = 9;
    	a140 = 6;
    	a15 = 10;
    	a28 = 10;
    	a26 = 3;
    	a53 = 34 ;
    	a69 = 32 ;
    	a55 = 34 ;
    	a30 = 34 ;
    	a127 = 7;
    	a176 = 3;
    	a46 = 32 ;
    	a20 = 3;
    	a110 = 5;
    	a112 = 34 ;
    	a41 = 34 ;
    	a198 = 33 ;
    	a160 = 32 ;
    	a165 = 34 ;
    	a174 = 9;
    	a152 = 10;
    	a180 = 32 ;
    	a118 = 33 ;
    	a51 = 32 ;
    	a125 = 32 ;
    	a120 = 5;
    	a86 = 32 ;
    	a79 = 5;
    	a115 = 32 ;
    	a101 = 33 ;
    	a68 = 3;
    	a97 = 5;
    	a181 = 15;
    	}printf("%d\n", 15);  
    } 
}
 void calculate_outputm193(int input) {
printf("POINT: 2119\n");

    if(((a101 == 32 && ((((input == 3) &&  cf==1 ) && a68 == 3) && a93 == 3)) && ((a46 == 32 && a127 == 7) && a154 == 32))) {
printf("POINT: 2120\n");
    	cf = 0;
    	a141 = 32 ;
    	a178 = 32 ;
    	a101 = 32 ;
    	a32 = 32 ;
    	a39 = 8;
    	a125 = 32 ;
    	a200 = 35 ;
    	a45 = 32 ;
    	a2 = 4;
    	a160 = 32 ;
    	a48 = 32 ;
    	a41 = 32 ;
    	a179 = 32 ;
    	a134 = 13;
    	a167 = 2;
    	a93 = 3;
    	a3 = 35 ;
    	a12 = 32 ;
    	a144 = 32 ;
    	a119 = 32 ;
    	a20 = 4;
    	a126 = 4;
    	a53 = 32 ;
    	a15 = 10;
    	a110 = 6;
    	a120 = 6;
    	a51 = 32 ;
    	a153 = 4;
    	a65 = 10;
    	a152 = 9;
    	a193 = 8;
    	a184 = 6;
    	a176 = 3;
    	a28 = 10;
    	a25 = 5;
    	a95 = 9;
    	a105 = 11;
    	a106 = 7; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm194(int input) {
printf("POINT: 2121\n");

    if((((a48 == 32 && (a120 == 6 && (a26 == 3 && a160 == 32))) && a53 == 32) && (( cf==1  && (input == 9)) && a69 == 32))) {
printf("POINT: 2122\n");
    	cf = 0;
    	a160 = 34 ;
    	a104 = 34 ;
    	a121 = 32 ;
    	a144 = 34 ;
    	a154 = 34 ;
    	a146 = 34 ;
    	a187 = 5;
    	a169 = 32 ;
    	a180 = 34 ;
    	a134 = 14;
    	a200 = 35 ;
    	a196 = 7;
    	a100 = 36 ;
    	a81 = 11;
    	a12 = 34 ;
    	a48 = 34 ;
    	a101 = 34 ;
    	a53 = 34 ;
    	a171 = 8; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2123\n");

    if(((a48 == 32 && a45 == 32) && (a128 == 2 && (a88 == 32 && (a112 == 32 && (( cf==1  && (input == 10)) && a176 == 3)))))) {
printf("POINT: 2124\n");
    	cf = 0;
    	a127 = 7;
    	a79 = 6;
    	a81 = 11;
    	a155 = 35 ;
    	a169 = 32 ;
    	a115 = 32 ;
    	a125 = 32 ;
    	a174 = 8;
    	a187 = 4;
    	a26 = 3;
    	a30 = 32 ;
    	a118 = 32 ;
    	a93 = 3;
    	a104 = 32 ;
    	a141 = 32 ;
    	a180 = 32 ;
    	a165 = 32 ;
    	a46 = 32 ;
    	a126 = 4;
    	a84 = 32 ;
    	a150 = 5;
    	a140 = 5;
    	a121 = 32 ;
    	a64 = 14; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2125\n");

    if(((a104 == 32 && ( cf==1  && (input == 3))) && ((((a56 == 9 && a196 == 6) && a25 == 5) && a187 == 4) && a180 == 32))) {
printf("POINT: 2126\n");
    	cf = 0;
    	a22 = 9;
    	a153 = 5;
    	a165 = 34 ;
    	a32 = 34 ;
    	a34 = 34 ;
    	a150 = 6;
    	a16 = 10;
    	a65 = 10;
    	a48 = 34 ;
    	a126 = 4;
    	a120 = 6;
    	a55 = 32 ;
    	a69 = 32 ;
    	a90 = 32 ;
    	a128 = 3;
    	a101 = 34 ;
    	a95 = 9;
    	a17 = 32 ;
    	a39 = 9;
    	a0 = 34 ;
    	a152 = 10;
    	a110 = 7;
    	a112 = 32 ;
    	a45 = 34 ;
    	a131 = 10;
    	a26 = 3;
    	a187 = 5;
    	a200 = 34 ;
    	a184 = 6;
    	a105 = 12;
    	a28 = 11;
    	a20 = 4;
    	a146 = 34 ;
    	a56 = 10;
    	a104 = 34 ;
    	a193 = 9;
    	a53 = 34 ;
    	a119 = 32 ;
    	a137 = 33 ;
    	a154 = 34 ;
    	a2 = 5;
    	a178 = 34 ;
    	a88 = 32 ;
    	a93 = 4;
    	a97 = 4;
    	a12 = 34 ;
    	a176 = 3;
    	a125 = 34 ;
    	a144 = 34 ;
    	a196 = 7;
    	a84 = 32 ;
    	a118 = 32 ;
    	a135 = 8;
    	a180 = 34 ;
    	a41 = 34 ;
    	a25 = 5;
    	a179 = 34 ;
    	a51 = 34 ;
    	a160 = 34 ;
    	a68 = 3;
    	a13 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm195(int input) {
printf("POINT: 2127\n");

    if(((((a53 == 32 && a141 == 32) && a196 == 6) && a55 == 32) && (a69 == 32 && (( cf==1  && (input == 9)) && a97 == 4)))) {
printf("POINT: 2128\n");
    	cf = 0;
printf("POINT: 2129\n");

    	if(a16 == 15) {
printf("POINT: 2130\n");
    	a26 = 3;
    	a118 = 32 ;
    	a79 = 6;
    	a81 = 11;
    	a187 = 4;
    	a140 = 5;
    	a165 = 32 ;
    	a126 = 4;
    	a169 = 32 ;
    	a84 = 32 ;
    	a174 = 8;
    	a104 = 32 ;
    	a180 = 32 ;
    	a93 = 3;
    	a125 = 32 ;
    	a30 = 32 ;
    	a115 = 32 ;
    	a150 = 5; 
    	}else {
printf("POINT: 2132\n");
    	a3 = 35 ;
    	a198 = 36 ;
    	a200 = 32 ;
    	a139 = 35 ;
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm196(int input) {
printf("POINT: 2133\n");

    if((((a69 == 32 && ((input == 4) &&  cf==1 )) && a55 == 32) && (a51 == 32 && (a187 == 4 && (a84 == 32 && a93 == 3))))) {
printf("POINT: 2134\n");
    	cf = 0;
printf("POINT: 2135\n");

    	if((((!(a136 == 16) && (a11 == 4 && !(a72 == 9))) && a134 == 13) || !(a84 == 36))) {
printf("POINT: 2136\n");
    	a184 = 7;
    	a51 = 34 ;
    	a122 = 36 ;
    	a129 = 36 ;
    	a17 = 34 ;
    	a90 = 34 ;
    	a30 = 34 ;
    	a112 = 34 ;
    	a69 = 34 ;
    	a146 = 34 ;
    	a26 = 3;
    	a101 = 34 ;
    	a193 = 9;
    	a56 = 10;
    	a119 = 32 ;
    	a118 = 34 ;
    	a41 = 34 ;
    	a169 = 32 ;
    	a25 = 6;
    	a196 = 7;
    	a46 = 34 ;
    	a104 = 34 ;
    	a158 = 8; 
    	}else {
printf("POINT: 2138\n");
    	a104 = 33 ;
    	a81 = 12;
    	a150 = 6;
    	a37 = 10;
    	a45 = 33 ;
    	a153 = 5;
    	a127 = 6;
    	a180 = 34 ;
    	a146 = 34 ;
    	a120 = 5;
    	a39 = 9;
    	a125 = 33 ;
    	a20 = 3;
    	a86 = 36 ;
    	a200 = 33 ;
    	a90 = 33 ;
    	a154 = 34 ;
    	a169 = 33 ;
    	a32 = 34 ;
    	a48 = 34 ;
    	a16 = 11;
    	a56 = 8;
    	a144 = 34 ;
    	a41 = 33 ;
    	a84 = 33 ;
    	a179 = 33 ;
    	a79 = 7;
    	a29 = 33 ;
    	a118 = 33 ;
    	a110 = 5;
    	a152 = 10;
    	a121 = 33 ;
    	a55 = 32 ;
    	a187 = 5;
    	a51 = 33 ;
    	a176 = 3;
    	a128 = 3;
    	a165 = 33 ;
    	a65 = 11;
    	a105 = 10;
    	a193 = 9;
    	a140 = 6;
    	a28 = 9;
    	a22 = 9;
    	a167 = 3;
    	a115 = 34 ;
    	a126 = 5;
    	a184 = 7;
    	a97 = 5;
    	a68 = 2;
    	a25 = 4;
    	a69 = 33 ;
    	a174 = 7;
    	a112 = 34 ;
    	a95 = 8;
    	a109 = 34 ;
    	a160 = 34 ;
    	a119 = 32 ;
    	a46 = 33 ;
    	a2 = 3;
    	a15 = 9;
    	a141 = 33 ;
    	a17 = 34 ;
    	a53 = 33 ;
    	a196 = 7;
    	a101 = 34 ;
    	a123 = 6;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2139\n");

    if(((a187 == 4 && a146 == 32) && ((a56 == 9 && ((((input == 10) &&  cf==1 ) && a126 == 4) && a68 == 3)) && a22 == 8))) {
printf("POINT: 2140\n");
    	cf = 0;
    	a125 = 32 ;
    	a111 = 35 ;
    	a26 = 3;
    	a28 = 10;
    	a119 = 32 ;
    	a169 = 32 ;
    	a200 = 35 ;
    	a54 = 33 ;
    	a134 = 17; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2141\n");

    if(((a174 == 8 && ((a121 == 32 && a55 == 32) && a152 == 9)) && (a90 == 32 && (( cf==1  && (input == 1)) && a109 == 32)))) {
printf("POINT: 2142\n");
    	cf = 0;
    	a84 = 34 ;
    	a32 = 34 ;
    	a121 = 34 ;
    	a184 = 7;
    	a55 = 34 ;
    	a157 = 11;
    	a154 = 34 ;
    	a46 = 34 ;
    	a179 = 34 ;
    	a104 = 34 ;
    	a79 = 7;
    	a165 = 34 ;
    	a146 = 34 ;
    	a41 = 34 ;
    	a180 = 34 ;
    	a200 = 34 ;
    	a105 = 12;
    	a45 = 34 ;
    	a48 = 34 ;
    	a115 = 34 ;
    	a187 = 5;
    	a17 = 34 ;
    	a178 = 34 ;
    	a109 = 34 ;
    	a152 = 10;
    	a95 = 10;
    	a135 = 15;
    	a51 = 34 ;
    	a81 = 12;
    	a141 = 34 ;
    	a140 = 6;
    	a101 = 34 ;
    	a65 = 11;
    	a128 = 3;
    	a88 = 34 ;
    	a53 = 34 ;
    	a2 = 5;
    	a69 = 34 ;
    	a68 = 4;
    	a112 = 34 ;
    	a196 = 7;
    	a37 = 10;
    	a93 = 4;
    	a160 = 34 ;
    	a39 = 9;
    	a97 = 5;
    	a20 = 5;
    	a98 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm197(int input) {
printf("POINT: 2143\n");

    if((((a128 == 2 && ((a141 == 32 && a109 == 32) && a126 == 4)) && a120 == 6) && (((input == 3) &&  cf==1 ) && a95 == 9))) {
printf("POINT: 2144\n");
    	cf = 0;
    	a193 = 7;
    	a128 = 3;
    	a56 = 10;
    	a69 = 32 ;
    	a20 = 4;
    	a39 = 9;
    	a176 = 3;
    	a68 = 3;
    	a74 = 34 ;
    	a32 = 34 ;
    	a169 = 32 ;
    	a112 = 34 ;
    	a55 = 34 ;
    	a53 = 34 ;
    	a28 = 11;
    	a101 = 34 ;
    	a154 = 34 ;
    	a26 = 4;
    	a200 = 32 ;
    	a81 = 10;
    	a110 = 7;
    	a198 = 34 ;
    	a88 = 32 ;
    	a146 = 34 ;
    	a118 = 34 ;
    	a153 = 4;
    	a141 = 32 ;
    	a51 = 32 ;
    	a15 = 10;
    	a125 = 32 ;
    	a167 = 2;
    	a152 = 9;
    	a105 = 12;
    	a84 = 33 ;
    	a95 = 10;
    	a79 = 7;
    	a184 = 6;
    	a25 = 5;
    	a179 = 32 ;
    	a120 = 6;
    	a119 = 34 ;
    	a41 = 32 ;
    	a17 = 34 ;
    	a22 = 9;
    	a126 = 4;
    	a174 = 8;
    	a45 = 34 ;
    	a34 = 34 ;
    	a93 = 3;
    	a2 = 4;
    	a58 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2145\n");

    if(((a15 == 10 && (a118 == 32 && (((input == 1) &&  cf==1 ) && a26 == 3))) && ((a109 == 32 && a146 == 32) && a104 == 32))) {
printf("POINT: 2146\n");
    	cf = 0;
    	a134 = 14;
    	a100 = 36 ;
    	a150 = 6;
    	a17 = 34 ;
    	a180 = 34 ;
    	a118 = 34 ;
    	a120 = 7;
    	a200 = 35 ;
    	a20 = 5;
    	a104 = 34 ;
    	a128 = 3;
    	a37 = 10;
    	a171 = 6; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm198(int input) {
printf("POINT: 2147\n");

    if(((a97 == 4 && (a81 == 11 && ((a169 == 32 && a169 == 32) && a0 == 32))) && (( cf==1  && (input == 9)) && a121 == 32))) {
printf("POINT: 2148\n");
    	cf = 0;
printf("POINT: 2149\n");

    	if(((!(a158 == 7) && (!(a41 == 35) || (a37 == 14 || a66 == 9))) && !(a63 == 33))) {
printf("POINT: 2150\n");
    	a146 = 32 ;
    	a39 = 13;
    	a28 = 15;
    	a176 = 9;
    	a112 = 35 ;
    	a178 = 34 ;
    	a84 = 33 ;
    	a179 = 32 ;
    	a17 = 36 ;
    	a41 = 36 ;
    	a160 = 33 ;
    	a51 = 33 ;
    	a153 = 7;
    	a69 = 36 ;
    	a22 = 13;
    	a104 = 32 ;
    	a95 = 14;
    	a45 = 36 ;
    	a174 = 7;
    	a2 = 9;
    	a25 = 4;
    	a184 = 9;
    	a158 = 9;
    	a15 = 12;
    	a154 = 33 ;
    	a90 = 35 ;
    	a140 = 10;
    	a126 = 3;
    	a46 = 35 ;
    	a110 = 12;
    	a26 = 6;
    	a169 = 36 ;
    	a37 = 11;
    	a144 = 32 ;
    	a152 = 11;
    	a97 = 3;
    	a120 = 11;
    	a68 = 8;
    	a43 = 34 ;
    	a32 = 32 ;
    	a81 = 17;
    	a105 = 13;
    	a93 = 7;
    	a136 = 9; 
    	}else {
printf("POINT: 2152\n");
    	a20 = 3;
    	a200 = 32 ;
    	a165 = 36 ;
    	a198 = 33 ;
    	a37 = 8;
    	a174 = 10;
    	a26 = 7;
    	a86 = 35 ;
    	a34 = 33 ;
    	a61 = 7;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 2153\n");

    if(((a105 == 11 && (((input == 7) &&  cf==1 ) && a140 == 5)) && (a154 == 32 && ((a146 == 32 && a20 == 4) && a84 == 32)))) {
printf("POINT: 2154\n");
    	cf = 0;
    	a110 = 12;
    	a109 = 32 ;
    	a58 = 5;
    	a125 = 36 ;
    	a45 = 36 ;
    	a126 = 9;
    	a53 = 32 ;
    	a69 = 36 ;
    	a55 = 34 ;
    	a28 = 15;
    	a200 = 32 ;
    	a198 = 34 ;
    	a90 = 34 ;
    	a140 = 10;
    	a179 = 33 ;
    	a72 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2155\n");

    if(((a37 == 9 && (((input == 6) &&  cf==1 ) && a121 == 32)) && ((a144 == 32 && (a25 == 5 && a68 == 3)) && a34 == 32))) {
printf("POINT: 2156\n");
    	cf = 0;
    	a48 = 34 ;
    	a125 = 34 ;
    	a2 = 6;
    	a34 = 33 ;
    	a17 = 36 ;
    	a121 = 33 ;
    	a16 = 9;
    	a90 = 34 ;
    	a30 = 36 ;
    	a20 = 9;
    	a118 = 33 ;
    	a81 = 12;
    	a79 = 7;
    	a29 = 34 ;
    	a193 = 11;
    	a131 = 11;
    	a128 = 8;
    	a86 = 36 ;
    	a97 = 9;
    	a37 = 12;
    	a65 = 14;
    	a110 = 8;
    	a167 = 7;
    	a160 = 33 ;
    	a51 = 33 ;
    	a15 = 15;
    	a146 = 32 ;
    	a105 = 16;
    	a112 = 36 ;
    	a184 = 6;
    	a150 = 6;
    	a93 = 6;
    	a25 = 6;
    	a169 = 35 ;
    	a140 = 6;
    	a178 = 35 ;
    	a32 = 35 ;
    	a154 = 35 ;
    	a0 = 35 ;
    	a45 = 34 ;
    	a165 = 34 ;
    	a56 = 14;
    	a53 = 36 ;
    	a109 = 34 ;
    	a84 = 34 ;
    	a95 = 14;
    	a153 = 8;
    	a41 = 35 ;
    	a127 = 10;
    	a26 = 6;
    	a187 = 5;
    	a196 = 8;
    	a120 = 7;
    	a69 = 36 ;
    	a104 = 32 ;
    	a22 = 7;
    	a180 = 35 ;
    	a68 = 8;
    	a179 = 35 ;
    	a200 = 33 ;
    	a174 = 14;
    	a119 = 36 ;
    	a115 = 34 ;
    	a141 = 35 ;
    	a144 = 35 ;
    	a46 = 32 ;
    	a39 = 11;
    	a55 = 32 ;
    	a28 = 15;
    	a126 = 4;
    	a12 = 35 ;
    	a101 = 34 ;
    	a152 = 14;
    	a176 = 2;
    	a88 = 32 ;
    	a162 = 32 ; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2157\n");

    if((((a193 == 8 && ( cf==1  && (input == 1))) && a153 == 4) && (((a79 == 6 && a150 == 5) && a119 == 32) && a41 == 32))) {
printf("POINT: 2158\n");
    	cf = 0;
printf("POINT: 2159\n");

    	if(((!(a168 == 32) && a189 == 9) && !(a58 == 2))) {
printf("POINT: 2160\n");
    	a90 = 34 ;
    	a88 = 36 ;
    	a28 = 11;
    	a46 = 35 ;
    	a12 = 34 ;
    	a154 = 36 ;
    	a167 = 8;
    	a121 = 34 ;
    	a94 = 35 ;
    	a200 = 35 ;
    	a187 = 6;
    	a152 = 15;
    	a45 = 35 ;
    	a109 = 35 ;
    	a30 = 33 ;
    	a125 = 34 ;
    	a134 = 12;
    	a120 = 11;
    	a141 = 36 ;
    	a169 = 34 ;
    	a25 = 11;
    	a65 = 15;
    	a55 = 33 ;
    	a41 = 33 ;
    	a17 = 33 ;
    	a32 = 33 ;
    	a196 = 8;
    	a144 = 32 ;
    	a110 = 9;
    	a26 = 7;
    	a84 = 35 ;
    	a53 = 35 ;
    	a153 = 10;
    	a184 = 9;
    	a160 = 36 ;
    	a174 = 7;
    	a119 = 36 ;
    	a191 = 9; 
    	}else {
printf("POINT: 2162\n");
    	a158 = 12;
    	a112 = 35 ;
    	a46 = 32 ;
    	a22 = 12;
    	a174 = 10;
    	a101 = 32 ;
    	a55 = 36 ;
    	a79 = 10;
    	a84 = 35 ;
    	a118 = 33 ;
    	a32 = 32 ;
    	a53 = 33 ;
    	a62 = 6;
    	a180 = 36 ;
    	a119 = 32 ;
    	a81 = 13;
    	a127 = 9;
    	a71 = 12;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2163\n");

    if((((a88 == 32 && ( cf==1  && (input == 3))) && a30 == 32) && ((a84 == 32 && (a2 == 4 && a55 == 32)) && a81 == 11))) {
printf("POINT: 2164\n");
    	cf = 0;
    	a155 = 35 ;
    	a165 = 33 ;
    	a84 = 34 ;
    	a93 = 2;
    	a26 = 8;
    	a187 = 8;
    	a150 = 10;
    	a104 = 33 ;
    	a30 = 35 ;
    	a126 = 5;
    	a81 = 17;
    	a140 = 10;
    	a115 = 34 ;
    	a180 = 36 ;
    	a174 = 12;
    	a118 = 34 ;
    	a125 = 36 ;
    	a79 = 7;
    	a169 = 35 ;
    	a64 = 14; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2165\n");

    if((((a109 == 32 && (a51 == 32 && a0 == 32)) && a45 == 32) && (a125 == 32 && (((input == 4) &&  cf==1 ) && a144 == 32)))) {
printf("POINT: 2166\n");
    	cf = 0;
    	a84 = 35 ;
    	a184 = 6;
    	a109 = 34 ;
    	a104 = 32 ;
    	a115 = 36 ;
    	a37 = 11;
    	a144 = 36 ;
    	a79 = 11;
    	a174 = 9;
    	a160 = 34 ;
    	a125 = 32 ;
    	a48 = 36 ;
    	a193 = 10;
    	a140 = 6;
    	a179 = 32 ;
    	a69 = 36 ;
    	a45 = 35 ;
    	a112 = 34 ;
    	a32 = 32 ;
    	a30 = 32 ;
    	a105 = 14;
    	a53 = 32 ;
    	a42 = 32 ;
    	a110 = 12;
    	a64 = 11; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2167\n");

    if(((a152 == 9 && ((a126 == 4 && (a178 == 32 && ( cf==1  && (input == 5)))) && a180 == 32)) && (a128 == 2 && a127 == 7))) {
printf("POINT: 2168\n");
    	cf = 0;
    	a174 = 13;
    	a30 = 33 ;
    	a65 = 12;
    	a17 = 33 ;
    	a184 = 8;
    	a22 = 12;
    	a101 = 36 ;
    	a109 = 36 ;
    	a48 = 33 ;
    	a104 = 36 ;
    	a15 = 15;
    	a160 = 33 ;
    	a25 = 8;
    	a56 = 8;
    	a122 = 32 ;
    	a69 = 35 ;
    	a180 = 33 ;
    	a51 = 34 ;
    	a55 = 36 ;
    	a39 = 13;
    	a26 = 2;
    	a37 = 10;
    	a110 = 8;
    	a127 = 12;
    	a158 = 8;
    	a125 = 35 ;
    	a16 = 13;
    	a41 = 33 ;
    	a2 = 5;
    	a93 = 2;
    	a150 = 4;
    	a140 = 10;
    	a53 = 36 ;
    	a179 = 33 ;
    	a45 = 32 ;
    	a183 = 15; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2169\n");

    if((((a144 == 32 && (a121 == 32 && a81 == 11)) && a26 == 3) && ((((input == 2) &&  cf==1 ) && a160 == 32) && a25 == 5))) {
printf("POINT: 2170\n");
    	cf = 0;
    	a146 = 35 ;
    	a26 = 7;
    	a193 = 12;
    	a35 = 33 ;
    	a153 = 7;
    	a17 = 36 ;
    	a93 = 4;
    	a141 = 34 ;
    	a126 = 8;
    	a118 = 34 ;
    	a81 = 13;
    	a131 = 13;
    	a79 = 10;
    	a39 = 10;
    	a128 = 4;
    	a12 = 33 ;
    	a196 = 8;
    	a22 = 11;
    	a198 = 34 ;
    	a30 = 35 ;
    	a115 = 35 ;
    	a45 = 35 ;
    	a125 = 33 ;
    	a112 = 36 ;
    	a154 = 33 ;
    	a152 = 8;
    	a55 = 36 ;
    	a169 = 34 ;
    	a109 = 33 ;
    	a88 = 36 ;
    	a179 = 36 ;
    	a127 = 6;
    	a28 = 12;
    	a16 = 16;
    	a140 = 11;
    	a97 = 3;
    	a119 = 34 ;
    	a32 = 36 ;
    	a41 = 33 ;
    	a167 = 1;
    	a34 = 34 ;
    	a200 = 32 ;
    	a53 = 34 ;
    	a120 = 11;
    	a68 = 2;
    	a174 = 13;
    	a95 = 15;
    	a84 = 35 ;
    	a105 = 15;
    	a20 = 3;
    	a58 = 7; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2171\n");

    if(((a46 == 32 && a84 == 32) && (((a119 == 32 && (( cf==1  && (input == 10)) && a55 == 32)) && a144 == 32) && a141 == 32))) {
printf("POINT: 2172\n");
    	cf = 0;
    	a28 = 12;
    	a48 = 33 ;
    	a154 = 32 ;
    	a193 = 8;
    	a46 = 35 ;
    	a45 = 35 ;
    	a126 = 6;
    	a39 = 10;
    	a81 = 12;
    	a37 = 15;
    	a93 = 5;
    	a2 = 10;
    	a53 = 33 ;
    	a144 = 33 ;
    	a167 = 8;
    	a150 = 8;
    	a187 = 4;
    	a127 = 6;
    	a184 = 12;
    	a105 = 15;
    	a109 = 36 ;
    	a101 = 32 ;
    	a176 = 6;
    	a152 = 13;
    	a118 = 33 ;
    	a178 = 36 ;
    	a112 = 35 ;
    	a174 = 7;
    	a41 = 33 ;
    	a179 = 35 ;
    	a110 = 5;
    	a17 = 32 ;
    	a121 = 36 ;
    	a180 = 33 ;
    	a158 = 12;
    	a79 = 9;
    	a65 = 15;
    	a68 = 5;
    	a56 = 15;
    	a160 = 33 ;
    	a32 = 36 ;
    	a97 = 9;
    	a90 = 36 ;
    	a169 = 35 ;
    	a51 = 34 ;
    	a125 = 34 ;
    	a62 = 9;
    	a141 = 35 ;
    	a133 = 7; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2173\n");

    if(((a101 == 32 && ((((input == 8) &&  cf==1 ) && a141 == 32) && a51 == 32)) && ((a126 == 4 && a150 == 5) && a169 == 32))) {
printf("POINT: 2174\n");
    	cf = 0;
printf("POINT: 2175\n");

    	if((((a25 == 5 && (a184 == 5 || !(a136 == 11))) && a9 == 36) || !(a77 == 12))) {
printf("POINT: 2176\n");
    	a146 = 36 ;
    	a135 = 15;
    	a40 = 33 ;
    	a128 = 5;
    	a180 = 33 ;
    	a167 = 5;
    	a179 = 35 ;
    	a115 = 36 ;
    	a17 = 36 ;
    	a20 = 4;
    	a176 = 2;
    	a125 = 33 ;
    	a32 = 35 ;
    	a104 = 36 ;
    	a154 = 33 ;
    	a196 = 6;
    	a90 = 35 ;
    	a200 = 34 ;
    	a119 = 36 ;
    	a187 = 3;
    	a169 = 32 ;
    	a53 = 32 ;
    	a93 = 3;
    	a157 = 6; 
    	}else {
printf("POINT: 2178\n");
    	a152 = 9;
    	a125 = 36 ;
    	a28 = 9;
    	a56 = 9;
    	a196 = 11;
    	a51 = 35 ;
    	a178 = 34 ;
    	a146 = 34 ;
    	a115 = 35 ;
    	a79 = 5;
    	a37 = 12;
    	a176 = 5;
    	a179 = 34 ;
    	a90 = 34 ;
    	a158 = 9;
    	a165 = 34 ;
    	a144 = 35 ;
    	a25 = 10;
    	a17 = 32 ;
    	a153 = 4;
    	a26 = 7;
    	a46 = 36 ;
    	a15 = 11;
    	a120 = 11;
    	a112 = 34 ;
    	a30 = 32 ;
    	a84 = 35 ;
    	a118 = 33 ;
    	a39 = 10;
    	a136 = 13;
    	a154 = 36 ;
    	a97 = 7;
    	a101 = 33 ;
    	a81 = 17;
    	a65 = 15;
    	a104 = 32 ;
    	a105 = 11;
    	a174 = 10;
    	a22 = 10;
    	a140 = 5;
    	a184 = 7;
    	a126 = 6;
    	a69 = 36 ;
    	a141 = 33 ;
    	a133 = 2;
    	}printf("%d\n", 22);  
    } 
}
 void calculate_outputm199(int input) {
printf("POINT: 2179\n");

    if(((a37 == 9 && (a101 == 32 && (a97 == 4 && a131 == 10))) && (a105 == 11 && (((input == 3) &&  cf==1 ) && a180 == 32)))) {
printf("POINT: 2180\n");
    	cf = 0;
    	a126 = 4;
    	a17 = 32 ;
    	a176 = 3;
    	a200 = 32 ;
    	a48 = 32 ;
    	a128 = 2;
    	a34 = 32 ;
    	a146 = 34 ;
    	a88 = 32 ;
    	a109 = 32 ;
    	a25 = 5;
    	a119 = 34 ;
    	a32 = 32 ;
    	a69 = 32 ;
    	a20 = 4;
    	a101 = 32 ;
    	a184 = 7;
    	a144 = 32 ;
    	a93 = 3;
    	a196 = 7;
    	a97 = 4;
    	a141 = 34 ;
    	a120 = 6;
    	a153 = 4;
    	a131 = 10;
    	a112 = 32 ;
    	a165 = 32 ;
    	a41 = 32 ;
    	a51 = 32 ;
    	a15 = 10;
    	a193 = 9;
    	a2 = 4;
    	a90 = 32 ;
    	a39 = 9;
    	a140 = 6;
    	a127 = 7;
    	a179 = 34 ;
    	a105 = 11;
    	a16 = 10;
    	a65 = 10;
    	a174 = 8;
    	a198 = 36 ;
    	a125 = 32 ;
    	a22 = 8;
    	a160 = 32 ;
    	a118 = 32 ;
    	a3 = 34 ;
    	a81 = 11;
    	a12 = 32 ;
    	a45 = 34 ;
    	a84 = 34 ;
    	a147 = 3; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2181\n");

    if((((( cf==1  && (input == 9)) && a127 == 7) && a48 == 32) && (((a126 == 4 && a128 == 2) && a167 == 2) && a26 == 3))) {
printf("POINT: 2182\n");
    	cf = 0;
    	a34 = 34 ;
    	a15 = 11;
    	a26 = 3;
    	a12 = 34 ;
    	a150 = 5;
    	a68 = 4;
    	a32 = 32 ;
    	a65 = 10;
    	a2 = 4;
    	a17 = 32 ;
    	a30 = 32 ;
    	a153 = 5;
    	a48 = 32 ;
    	a56 = 9;
    	a53 = 34 ;
    	a101 = 34 ;
    	a160 = 32 ;
    	a174 = 8;
    	a167 = 2;
    	a46 = 32 ;
    	a112 = 34 ;
    	a25 = 5;
    	a16 = 10;
    	a154 = 32 ;
    	a169 = 32 ;
    	a180 = 34 ;
    	a22 = 9;
    	a165 = 34 ;
    	a95 = 9;
    	a69 = 34 ;
    	a93 = 3;
    	a28 = 10;
    	a110 = 6;
    	a118 = 34 ;
    	a128 = 2;
    	a97 = 4;
    	a178 = 32 ;
    	a86 = 33 ;
    	a125 = 32 ;
    	a79 = 7;
    	a20 = 5;
    	a115 = 34 ;
    	a187 = 5;
    	a144 = 32 ;
    	a55 = 34 ;
    	a127 = 8;
    	a41 = 32 ;
    	a9 = 34 ;
    	a152 = 9;
    	a121 = 32 ;
    	a88 = 34 ;
    	a81 = 11;
    	a90 = 32 ;
    	a200 = 34 ;
    	a37 = 9;
    	a51 = 32 ;
    	a0 = 32 ;
    	a131 = 10;
    	a176 = 3;
    	a126 = 5;
    	a120 = 7;
    	a104 = 34 ;
    	a109 = 34 ;
    	a105 = 12;
    	a135 = 13; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2183\n");

    if(((a69 == 32 && (a118 == 32 && (a28 == 10 && a115 == 32))) && ((a88 == 32 && ( cf==1  && (input == 4))) && a97 == 4))) {
printf("POINT: 2184\n");
    	cf = 0;
    	a152 = 10;
    	a65 = 11;
    	a196 = 7;
    	a118 = 32 ;
    	a144 = 32 ;
    	a134 = 16;
    	a154 = 34 ;
    	a28 = 11;
    	a16 = 10;
    	a46 = 34 ;
    	a55 = 34 ;
    	a169 = 34 ;
    	a178 = 34 ;
    	a51 = 34 ;
    	a184 = 7;
    	a45 = 34 ;
    	a12 = 32 ;
    	a187 = 5;
    	a39 = 9;
    	a84 = 34 ;
    	a121 = 34 ;
    	a179 = 34 ;
    	a26 = 4;
    	a200 = 35 ;
    	a53 = 34 ;
    	a95 = 10;
    	a176 = 3;
    	a126 = 4;
    	a119 = 34 ;
    	a104 = 34 ;
    	a105 = 12;
    	a30 = 32 ;
    	a140 = 6;
    	a193 = 8;
    	a3 = 34 ;
    	a81 = 12;
    	a34 = 32 ;
    	a127 = 7;
    	a141 = 34 ;
    	a146 = 34 ;
    	a75 = 10; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2185\n");

    if(((a95 == 9 && (((input == 6) &&  cf==1 ) && a81 == 11)) && (((a120 == 6 && a167 == 2) && a46 == 32) && a34 == 32))) {
printf("POINT: 2186\n");
    	cf = 0;
    	a93 = 3;
    	a160 = 32 ;
    	a39 = 9;
    	a65 = 10;
    	a104 = 32 ;
    	a17 = 32 ;
    	a53 = 32 ;
    	a146 = 32 ;
    	a2 = 4;
    	a140 = 6;
    	a69 = 32 ;
    	a37 = 9;
    	a150 = 5;
    	a184 = 7;
    	a26 = 3;
    	a22 = 8;
    	a193 = 8;
    	a174 = 8;
    	a196 = 6;
    	a125 = 32 ;
    	a55 = 32 ;
    	a48 = 32 ;
    	a25 = 5;
    	a41 = 32 ;
    	a179 = 34 ;
    	a101 = 32 ;
    	a122 = 32 ;
    	a141 = 32 ;
    	a127 = 7;
    	a51 = 32 ;
    	a16 = 10;
    	a158 = 8;
    	a109 = 32 ;
    	a30 = 32 ;
    	a15 = 10;
    	a45 = 34 ;
    	a110 = 6;
    	a84 = 32 ;
    	a119 = 32 ;
    	a180 = 32 ;
    	a56 = 9;
    	a183 = 15; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm28(int input) {
printf("POINT: 2187\n");

    if((((((a178 == 32 && a169 == 32) && a26 == 3) && a126 == 4) && a101 == 32) && (( cf==1  && a64 == 9) && a93 == 3))) {
printf("POINT: 2188\n");
printf("POINT: 2189\n");

    	if(((a126 == 4 && a84 == 32) && (a12 == 32 && (((( cf==1  && a13 == 5) && a26 == 3) && a17 == 32) && a84 == 32)))) {
printf("POINT: 2190\n");
    		calculate_outputm188(input);
    	} 
    } 
printf("POINT: 2191\n");

    if((((a144 == 32 && (a68 == 3 && a51 == 32)) && a30 == 32) && (((a64 == 10 &&  cf==1 ) && a115 == 32) && a65 == 10))) {
printf("POINT: 2192\n");
printf("POINT: 2193\n");

    	if((((a51 == 32 && (a137 == 32 &&  cf==1 )) && a141 == 32) && (a28 == 10 && ((a128 == 2 && a68 == 3) && a112 == 32)))) {
printf("POINT: 2194\n");
    		calculate_outputm189(input);
    	} 
printf("POINT: 2195\n");

    	if(((a141 == 32 && (((a137 == 34 &&  cf==1 ) && a115 == 32) && a0 == 32)) && (a95 == 9 && (a0 == 32 && a39 == 8)))) {
printf("POINT: 2196\n");
    		calculate_outputm190(input);
    	} 
    } 
printf("POINT: 2197\n");

    if(((a187 == 4 && (((a64 == 11 &&  cf==1 ) && a97 == 4) && a81 == 11)) && ((a126 == 4 && a34 == 32) && a152 == 9))) {
printf("POINT: 2198\n");
printf("POINT: 2199\n");

    	if((((( cf==1  && a42 == 32) && a46 == 32) && a39 == 8) && (a55 == 32 && ((a88 == 32 && a68 == 3) && a28 == 10)))) {
printf("POINT: 2200\n");
    		calculate_outputm191(input);
    	} 
printf("POINT: 2201\n");

    	if(((a65 == 10 && (a121 == 32 && (((a42 == 34 &&  cf==1 ) && a95 == 9) && a121 == 32))) && (a41 == 32 && a146 == 32))) {
printf("POINT: 2202\n");
    		calculate_outputm192(input);
    	} 
printf("POINT: 2203\n");

    	if(((a112 == 32 && ((a42 == 35 &&  cf==1 ) && a112 == 32)) && ((a88 == 32 && (a48 == 32 && a25 == 5)) && a30 == 32))) {
printf("POINT: 2204\n");
    		calculate_outputm193(input);
    	} 
    } 
printf("POINT: 2205\n");

    if(((((( cf==1  && a64 == 12) && a93 == 3) && a17 == 32) && a154 == 32) && ((a48 == 32 && a34 == 32) && a104 == 32))) {
printf("POINT: 2206\n");
printf("POINT: 2207\n");

    	if(((( cf==1  && a5 == 34) && a65 == 10) && (a146 == 32 && (((a144 == 32 && a69 == 32) && a90 == 32) && a22 == 8)))) {
printf("POINT: 2208\n");
    		calculate_outputm194(input);
    	} 
    } 
printf("POINT: 2209\n");

    if((((a121 == 32 && (a53 == 32 && ( cf==1  && a64 == 14))) && a127 == 7) && ((a154 == 32 && a17 == 32) && a55 == 32))) {
printf("POINT: 2210\n");
printf("POINT: 2211\n");

    	if((a112 == 32 && (a16 == 10 && (((a17 == 32 && (a184 == 6 && (a155 == 35 &&  cf==1 ))) && a119 == 32) && a46 == 32)))) {
printf("POINT: 2212\n");
    		calculate_outputm195(input);
    	} 
    } 
printf("POINT: 2213\n");

    if((((a39 == 8 && a88 == 32) && a46 == 32) && (((a193 == 8 && ( cf==1  && a64 == 15)) && a17 == 32) && a121 == 32))) {
printf("POINT: 2214\n");
printf("POINT: 2215\n");

    	if(((((a150 == 5 && a56 == 9) && a153 == 4) && a101 == 32) && (a131 == 10 && (( cf==1  && a129 == 35) && a45 == 32)))) {
printf("POINT: 2216\n");
    		calculate_outputm196(input);
    	} 
    } 
printf("POINT: 2217\n");

    if(((((a17 == 32 && (a127 == 7 && ( cf==1  && a64 == 16))) && a51 == 32) && a51 == 32) && (a109 == 32 && a153 == 4))) {
printf("POINT: 2218\n");
printf("POINT: 2219\n");

    	if((((a174 == 8 && (a125 == 32 && a110 == 6)) && a34 == 32) && (((a189 == 12 &&  cf==1 ) && a152 == 9) && a81 == 11))) {
printf("POINT: 2220\n");
    		calculate_outputm197(input);
    	} 
printf("POINT: 2221\n");

    	if(((a26 == 3 && (a125 == 32 && (a178 == 32 && a167 == 2))) && ((a45 == 32 && (a189 == 13 &&  cf==1 )) && a178 == 32))) {
printf("POINT: 2222\n");
    		calculate_outputm198(input);
    	} 
printf("POINT: 2223\n");

    	if(((a32 == 32 && a2 == 4) && ((a41 == 32 && (a154 == 32 && (a118 == 32 && (a189 == 16 &&  cf==1 )))) && a2 == 4))) {
printf("POINT: 2224\n");
    		calculate_outputm199(input);
    	} 
    } 
}
 void calculate_outputm200(int input) {
printf("POINT: 2225\n");

    if(((( cf==1  && (input == 6)) && a2 == 4) && ((a115 == 32 && ((a93 == 3 && a105 == 11) && a112 == 32)) && a165 == 32))) {
printf("POINT: 2226\n");
    	cf = 0;
    	a65 = 10;
    	a112 = 33 ;
    	a160 = 33 ;
    	a22 = 8;
    	a30 = 33 ;
    	a104 = 33 ;
    	a105 = 10;
    	a42 = 32 ;
    	a84 = 33 ;
    	a184 = 5;
    	a115 = 33 ;
    	a118 = 32 ;
    	a126 = 4;
    	a144 = 33 ;
    	a28 = 10;
    	a193 = 9;
    	a79 = 5;
    	a55 = 32 ;
    	a48 = 34 ;
    	a32 = 33 ;
    	a56 = 9;
    	a37 = 8;
    	a158 = 7;
    	a90 = 32 ;
    	a174 = 7;
    	a64 = 11; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2227\n");

    if(((((( cf==1  && (input == 10)) && a17 == 32) && a121 == 32) && a16 == 10) && ((a165 == 32 && a93 == 3) && a15 == 10))) {
printf("POINT: 2228\n");
    	cf = 0;
    	a200 = 32 ;
    	a58 = 5;
    	a198 = 34 ;
    	a72 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2229\n");

    if((((a160 == 32 && (((input == 3) &&  cf==1 ) && a104 == 32)) && a169 == 32) && ((a105 == 11 && a165 == 32) && a15 == 10))) {
printf("POINT: 2230\n");
    	cf = 0;
    	a174 = 8;
    	a105 = 12;
    	a53 = 34 ;
    	a110 = 7;
    	a17 = 34 ;
    	a84 = 33 ;
    	a115 = 34 ;
    	a90 = 32 ;
    	a135 = 11;
    	a28 = 11;
    	a69 = 32 ;
    	a126 = 4;
    	a46 = 34 ;
    	a196 = 7;
    	a26 = 4;
    	a197 = 8;
    	a55 = 34 ;
    	a127 = 8;
    	a200 = 34 ;
    	a95 = 10;
    	a128 = 3;
    	a109 = 32 ;
    	a193 = 7;
    	a140 = 6;
    	a119 = 34 ;
    	a104 = 34 ;
    	a112 = 34 ;
    	a146 = 34 ;
    	a179 = 32 ;
    	a32 = 34 ;
    	a144 = 34 ;
    	a101 = 34 ;
    	a180 = 34 ;
    	a125 = 32 ;
    	a154 = 34 ;
    	a45 = 34 ;
    	a81 = 10;
    	a34 = 34 ;
    	a160 = 34 ;
    	a97 = 5;
    	a39 = 9;
    	a79 = 7;
    	a187 = 5;
    	a16 = 11;
    	a190 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm201(int input) {
printf("POINT: 2231\n");

    if(((a184 == 6 && (a104 == 32 && ((input == 7) &&  cf==1 ))) && ((a12 == 32 && (a32 == 32 && a22 == 8)) && a46 == 32))) {
printf("POINT: 2232\n");
    	cf = 0;
    	a136 = 13;
    	a22 = 7;
    	a158 = 9;
    	a133 = 5; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2233\n");

    if((((a68 == 3 && a196 == 6) && a153 == 4) && (a79 == 6 && ((( cf==1  && (input == 1)) && a127 == 7) && a101 == 32)))) {
printf("POINT: 2234\n");
    	cf = 0;
    	a51 = 32 ;
    	a81 = 10;
    	a28 = 11;
    	a153 = 4;
    	a105 = 12;
    	a53 = 34 ;
    	a25 = 5;
    	a146 = 34 ;
    	a41 = 32 ;
    	a154 = 34 ;
    	a22 = 9;
    	a101 = 34 ;
    	a79 = 7;
    	a118 = 34 ;
    	a20 = 4;
    	a119 = 34 ;
    	a15 = 10;
    	a95 = 10;
    	a2 = 4;
    	a167 = 2;
    	a26 = 4;
    	a193 = 7;
    	a174 = 8;
    	a125 = 32 ;
    	a55 = 34 ;
    	a110 = 7;
    	a120 = 6;
    	a128 = 3;
    	a198 = 34 ;
    	a69 = 32 ;
    	a169 = 32 ;
    	a39 = 9;
    	a179 = 32 ;
    	a141 = 32 ;
    	a56 = 10;
    	a74 = 34 ;
    	a112 = 34 ;
    	a88 = 32 ;
    	a68 = 3;
    	a200 = 32 ;
    	a184 = 6;
    	a93 = 3;
    	a84 = 33 ;
    	a34 = 34 ;
    	a32 = 34 ;
    	a45 = 34 ;
    	a17 = 34 ;
    	a126 = 4;
    	a176 = 3;
    	a152 = 9;
    	a58 = 4; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm202(int input) {
printf("POINT: 2235\n");

    if((((( cf==1  && (input == 4)) && a178 == 32) && a169 == 32) && (((a153 == 4 && a12 == 32) && a152 == 9) && a118 == 32))) {
printf("POINT: 2236\n");
    	cf = 0;
    	a104 = 34 ;
    	a115 = 34 ;
    	a28 = 11;
    	a135 = 15;
    	a97 = 5;
    	a165 = 34 ;
    	a121 = 34 ;
    	a51 = 34 ;
    	a37 = 10;
    	a128 = 3;
    	a109 = 34 ;
    	a180 = 34 ;
    	a48 = 34 ;
    	a152 = 10;
    	a79 = 7;
    	a95 = 10;
    	a53 = 34 ;
    	a32 = 34 ;
    	a169 = 34 ;
    	a146 = 34 ;
    	a2 = 5;
    	a157 = 11;
    	a65 = 11;
    	a69 = 34 ;
    	a119 = 34 ;
    	a141 = 34 ;
    	a84 = 34 ;
    	a112 = 34 ;
    	a88 = 34 ;
    	a17 = 34 ;
    	a101 = 34 ;
    	a81 = 12;
    	a41 = 34 ;
    	a68 = 4;
    	a105 = 12;
    	a200 = 34 ;
    	a55 = 34 ;
    	a20 = 5;
    	a160 = 34 ;
    	a26 = 4;
    	a196 = 7;
    	a178 = 34 ;
    	a93 = 4;
    	a154 = 34 ;
    	a46 = 34 ;
    	a187 = 5;
    	a98 = 8; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2237\n");

    if(((a90 == 32 && ((a112 == 32 && a46 == 32) && a120 == 6)) && (a97 == 4 && (a141 == 32 && ((input == 9) &&  cf==1 ))))) {
printf("POINT: 2238\n");
    	cf = 0;
    	a119 = 34 ;
    	a146 = 34 ;
    	a84 = 34 ;
    	a196 = 7;
    	a64 = 16;
    	a141 = 34 ;
    	a193 = 9;
    	a158 = 7;
    	a189 = 16; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2239\n");

    if(((( cf==1  && (input == 7)) && a154 == 32) && (a68 == 3 && (a97 == 4 && (a28 == 10 && (a115 == 32 && a169 == 32)))))) {
printf("POINT: 2240\n");
    	cf = 0;
    	a146 = 34 ;
    	a158 = 7;
    	a141 = 34 ;
    	a64 = 16;
    	a119 = 34 ;
    	a193 = 9;
    	a196 = 7;
    	a84 = 34 ;
    	a189 = 16; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2241\n");

    if((((a84 == 32 && (a126 == 4 && a176 == 3)) && a167 == 2) && ((a165 == 32 && ( cf==1  && (input == 6))) && a144 == 32))) {
printf("POINT: 2242\n");
    	cf = 0;
    	a17 = 32 ;
    	a56 = 9;
    	a180 = 32 ;
    	a16 = 10;
    	a25 = 5;
    	a15 = 10;
    	a22 = 8;
    	a93 = 3;
    	a109 = 32 ;
    	a104 = 32 ;
    	a65 = 10;
    	a55 = 32 ;
    	a179 = 34 ;
    	a2 = 4;
    	a53 = 32 ;
    	a41 = 32 ;
    	a127 = 7;
    	a51 = 32 ;
    	a174 = 8;
    	a48 = 32 ;
    	a39 = 9;
    	a160 = 32 ;
    	a150 = 5;
    	a125 = 32 ;
    	a30 = 32 ;
    	a37 = 9;
    	a45 = 34 ;
    	a101 = 32 ;
    	a26 = 3;
    	a140 = 6;
    	a69 = 32 ;
    	a110 = 6;
    	a184 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm203(int input) {
printf("POINT: 2243\n");

    if(((( cf==1  && (input == 4)) && a146 == 32) && ((a187 == 4 && (a0 == 32 && (a140 == 5 && a30 == 32))) && a153 == 4))) {
printf("POINT: 2244\n");
    	cf = 0;
    	a39 = 8;
    	a56 = 9;
    	a3 = 32 ;
    	a200 = 35 ;
    	a95 = 9;
    	a84 = 32 ;
    	a140 = 6;
    	a109 = 32 ;
    	a26 = 3;
    	a53 = 32 ;
    	a134 = 16;
    	a125 = 33 ;
    	a152 = 8;
    	a174 = 7;
    	a184 = 5;
    	a25 = 5;
    	a112 = 32 ;
    	a69 = 32 ;
    	a160 = 32 ;
    	a119 = 33 ;
    	a28 = 10;
    	a2 = 4;
    	a167 = 2;
    	a16 = 10;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2245\n");

    if(((a39 == 8 && (a84 == 32 && a2 == 4)) && (a30 == 32 && ((((input == 9) &&  cf==1 ) && a32 == 32) && a48 == 32)))) {
printf("POINT: 2246\n");
    	cf = 0;
    	a51 = 33 ;
    	a154 = 33 ;
    	a22 = 7;
    	a158 = 9;
    	a136 = 13;
    	a133 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm204(int input) {
printf("POINT: 2247\n");

    if(((a88 == 32 && (a97 == 4 && a15 == 10)) && (a81 == 11 && ((a45 == 32 && ((input == 9) &&  cf==1 )) && a118 == 32)))) {
printf("POINT: 2248\n");
    	cf = 0;
    	a200 = 35 ;
    	a134 = 15;
    	a114 = 12;
    	a147 = 1; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2249\n");

    if(((a153 == 4 && (a126 == 4 && a174 == 8)) && (((( cf==1  && (input == 4)) && a180 == 32) && a120 == 6) && a84 == 32))) {
printf("POINT: 2250\n");
    	cf = 0;
    	a79 = 7;
    	a51 = 34 ;
    	a101 = 34 ;
    	a158 = 9;
    	a196 = 7;
    	a193 = 9;
    	a17 = 34 ;
    	a136 = 15;
    	a146 = 34 ;
    	a118 = 34 ;
    	a104 = 34 ;
    	a144 = 34 ;
    	a48 = 34 ;
    	a81 = 12;
    	a30 = 34 ;
    	a179 = 34 ;
    	a61 = 2; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm205(int input) {
printf("POINT: 2251\n");

    if((((a128 == 2 && a141 == 32) && a28 == 10) && (a32 == 32 && (a180 == 32 && (a97 == 4 && ((input == 9) &&  cf==1 )))))) {
printf("POINT: 2252\n");
    	cf = 0;
    	a95 = 8;
    	a28 = 9;
    	a125 = 33 ;
    	a86 = 36 ;
    	a68 = 2;
    	a162 = 33 ;
    	a179 = 33 ;
    	a169 = 32 ;
    	a65 = 9;
    	a154 = 34 ;
    	a29 = 34 ;
    	a110 = 5;
    	a39 = 9;
    	a93 = 3;
    	a17 = 34 ;
    	a200 = 33 ;
    	a150 = 5;
    	a167 = 2;
    	a79 = 5;
    	a84 = 33 ;
    	a127 = 8;
    	a32 = 33 ;
    	a176 = 2;
    	a41 = 32 ;
    	a187 = 5;
    	a48 = 32 ;
    	a46 = 33 ;
    	a193 = 7;
    	a126 = 3; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2253\n");

    if(((a32 == 32 && a110 == 6) && (a34 == 32 && (a81 == 11 && ((a125 == 32 && ((input == 4) &&  cf==1 )) && a180 == 32))))) {
printf("POINT: 2254\n");
    	cf = 0;
    	a135 = 11;
    	a197 = 8;
    	a55 = 34 ;
    	a37 = 9;
    	a84 = 33 ;
    	a119 = 34 ;
    	a180 = 34 ;
    	a174 = 8;
    	a69 = 32 ;
    	a53 = 34 ;
    	a200 = 34 ;
    	a128 = 3;
    	a32 = 34 ;
    	a2 = 4;
    	a105 = 12;
    	a30 = 34 ;
    	a34 = 34 ;
    	a146 = 34 ;
    	a95 = 10;
    	a112 = 34 ;
    	a97 = 5;
    	a56 = 10;
    	a15 = 10;
    	a81 = 10;
    	a109 = 32 ;
    	a118 = 34 ;
    	a101 = 34 ;
    	a22 = 9;
    	a110 = 7;
    	a90 = 32 ;
    	a46 = 34 ;
    	a140 = 6;
    	a184 = 6;
    	a16 = 11;
    	a160 = 34 ;
    	a144 = 34 ;
    	a25 = 5;
    	a104 = 34 ;
    	a79 = 7;
    	a28 = 11;
    	a115 = 34 ;
    	a45 = 34 ;
    	a26 = 4;
    	a152 = 9;
    	a196 = 7;
    	a190 = 11; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2255\n");

    if(((a97 == 4 && (a46 == 32 && (a153 == 4 && (((input == 1) &&  cf==1 ) && a56 == 9)))) && (a178 == 32 && a119 == 32))) {
printf("POINT: 2256\n");
    	cf = 0;
    	a2 = 4;
    	a42 = 32 ;
    	a65 = 10;
    	a152 = 9;
    	a32 = 33 ;
    	a101 = 32 ;
    	a110 = 5;
    	a15 = 10;
    	a17 = 32 ;
    	a127 = 7;
    	a158 = 7;
    	a90 = 32 ;
    	a179 = 34 ;
    	a187 = 4;
    	a79 = 5;
    	a16 = 10;
    	a25 = 5;
    	a48 = 34 ;
    	a125 = 33 ;
    	a84 = 33 ;
    	a193 = 9;
    	a39 = 8;
    	a154 = 32 ;
    	a64 = 11; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm206(int input) {
printf("POINT: 2257\n");

    if(((((( cf==1  && (input == 7)) && a12 == 32) && a37 == 9) && a39 == 8) && ((a141 == 32 && a39 == 8) && a26 == 3))) {
printf("POINT: 2258\n");
    	cf = 0;
    	a187 = 5;
    	a53 = 34 ;
    	a120 = 6;
    	a169 = 32 ;
    	a180 = 34 ;
    	a185 = 15;
    	a110 = 7;
    	a39 = 9;
    	a17 = 32 ;
    	a126 = 5;
    	a41 = 32 ;
    	a158 = 11;
    	a58 = 4; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2259\n");

    if((((a0 == 32 && ((input == 1) &&  cf==1 )) && a141 == 32) && (a0 == 32 && (a120 == 6 && (a126 == 4 && a169 == 32))))) {
printf("POINT: 2260\n");
    	cf = 0;
    	a125 = 34 ;
    	a109 = 34 ;
    	a16 = 11;
    	a15 = 11;
    	a174 = 9;
    	a20 = 5;
    	a115 = 34 ;
    	a128 = 3;
    	a32 = 34 ;
    	a68 = 4;
    	a150 = 6;
    	a30 = 32 ;
    	a180 = 34 ;
    	a46 = 32 ;
    	a39 = 9;
    	a144 = 34 ;
    	a48 = 34 ;
    	a151 = 35 ;
    	a65 = 11;
    	a152 = 10;
    	a110 = 7;
    	a200 = 34 ;
    	a187 = 5;
    	a97 = 5;
    	a153 = 5;
    	a81 = 12;
    	a167 = 3;
    	a86 = 32 ;
    	a37 = 10;
    	a121 = 34 ;
    	a154 = 34 ;
    	a120 = 7;
    	a160 = 34 ;
    	a179 = 34 ;
    	a53 = 34 ;
    	a140 = 6;
    	a169 = 34 ;
    	a105 = 12;
    	a126 = 5;
    	a22 = 9;
    	a26 = 4;
    	a79 = 7;
    	a135 = 13; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm29(int input) {
printf("POINT: 2261\n");

    if(((a48 == 32 && (a119 == 32 && (a41 == 32 && ((a152 == 9 && a150 == 5) && a15 == 10)))) && ( cf==1  && a122 == 33))) {
printf("POINT: 2262\n");
printf("POINT: 2263\n");

    	if(((a160 == 32 && ((( cf==1  && a113 == 3) && a88 == 32) && a46 == 32)) && ((a2 == 4 && a68 == 3) && a68 == 3))) {
printf("POINT: 2264\n");
    		calculate_outputm200(input);
    	} 
    } 
printf("POINT: 2265\n");

    if(((a193 == 8 && (((a196 == 6 && ((a122 == 32 &&  cf==1 ) && a95 == 9)) && a121 == 32) && a187 == 4)) && a81 == 11)) {
printf("POINT: 2266\n");
printf("POINT: 2267\n");

    	if(((a0 == 32 && (((a26 == 3 && ( cf==1  && a183 == 14)) && a48 == 32) && a125 == 32)) && (a109 == 32 && a118 == 32))) {
printf("POINT: 2268\n");
    		calculate_outputm201(input);
    	} 
printf("POINT: 2269\n");

    	if(((a20 == 4 && (a128 == 2 && (a183 == 15 &&  cf==1 ))) && (a105 == 11 && (a79 == 6 && (a97 == 4 && a146 == 32))))) {
printf("POINT: 2270\n");
    		calculate_outputm202(input);
    	} 
    } 
printf("POINT: 2271\n");

    if((((((a187 == 4 && (a154 == 32 && a160 == 32)) && a28 == 10) && a174 == 8) && a150 == 5) && (a122 == 35 &&  cf==1 ))) {
printf("POINT: 2272\n");
printf("POINT: 2273\n");

    	if(((((a65 == 10 && (a36 == 33 &&  cf==1 )) && a144 == 32) && a45 == 32) && (a34 == 32 && (a25 == 5 && a22 == 8)))) {
printf("POINT: 2274\n");
    		calculate_outputm203(input);
    	} 
printf("POINT: 2275\n");

    	if(((( cf==1  && a36 == 32) && a34 == 32) && ((((a30 == 32 && a176 == 3) && a37 == 9) && a93 == 3) && a125 == 32))) {
printf("POINT: 2276\n");
    		calculate_outputm204(input);
    	} 
    } 
printf("POINT: 2277\n");

    if(((a68 == 3 && ((a128 == 2 && ( cf==1  && a122 == 36)) && a79 == 6)) && ((a12 == 32 && a110 == 6) && a34 == 32))) {
printf("POINT: 2278\n");
printf("POINT: 2279\n");

    	if(((a51 == 32 && ((a129 == 32 &&  cf==1 ) && a97 == 4)) && (a118 == 32 && (a146 == 32 && (a141 == 32 && a126 == 4))))) {
printf("POINT: 2280\n");
    		calculate_outputm205(input);
    	} 
printf("POINT: 2281\n");

    	if(((a109 == 32 && (((a180 == 32 && a32 == 32) && a53 == 32) && a187 == 4)) && ((a129 == 36 &&  cf==1 ) && a120 == 6))) {
printf("POINT: 2282\n");
    		calculate_outputm206(input);
    	} 
    } 
}
 void calculate_outputm207(int input) {
printf("POINT: 2283\n");

    if((((a48 == 32 && (( cf==1  && (input == 3)) && a56 == 9)) && a150 == 5) && ((a165 == 32 && a127 == 7) && a167 == 2))) {
printf("POINT: 2284\n");
    	cf = 0;
    	a101 = 34 ;
    	a141 = 34 ;
    	a167 = 3;
    	a127 = 8;
    	a165 = 34 ;
    	a121 = 34 ;
    	a79 = 7;
    	a193 = 9;
    	a125 = 34 ;
    	a48 = 34 ;
    	a180 = 34 ;
    	a53 = 34 ;
    	a196 = 7;
    	a30 = 34 ;
    	a187 = 5;
    	a172 = 34 ;
    	a109 = 34 ;
    	a200 = 34 ;
    	a135 = 9;
    	a150 = 6;
    	a12 = 34 ;
    	a164 = 12; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm208(int input) {
printf("POINT: 2285\n");

    if(((a0 == 32 && ((input == 9) &&  cf==1 )) && ((a39 == 8 && (a84 == 32 && (a46 == 32 && a184 == 6))) && a101 == 32))) {
printf("POINT: 2286\n");
    	cf = 0;
    	a158 = 12;
    	a105 = 10;
    	a184 = 5;
    	a55 = 33 ;
    	a62 = 6;
    	a119 = 33 ;
    	a71 = 13; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm209(int input) {
printf("POINT: 2287\n");

    if(((a69 == 32 && ((( cf==1  && (input == 7)) && a160 == 32) && a28 == 10)) && ((a26 == 3 && a25 == 5) && a32 == 32))) {
printf("POINT: 2288\n");
    	cf = 0;
    	a47 = 36 ;
    	a158 = 6;
    	a59 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm210(int input) {
printf("POINT: 2289\n");

    if(((((( cf==1  && (input == 7)) && a22 == 8) && a48 == 32) && a48 == 32) && (a105 == 11 && (a69 == 32 && a69 == 32)))) {
printf("POINT: 2290\n");
    	cf = 0;
    	a158 = 12;
    	a62 = 8;
    	a11 = 8; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2291\n");

    if((((a167 == 2 && (a105 == 11 && (a160 == 32 && a119 == 32))) && a179 == 32) && (a88 == 32 && ( cf==1  && (input == 4))))) {
printf("POINT: 2292\n");
    	cf = 0;
    	a62 = 8;
    	a158 = 12;
    	a11 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm211(int input) {
printf("POINT: 2293\n");

    if((((a169 == 32 && ((a2 == 4 && a88 == 32) && a109 == 32)) && a95 == 9) && (((input == 1) &&  cf==1 ) && a150 == 5))) {
printf("POINT: 2294\n");
    	cf = 0;
    	a110 = 5;
    	a180 = 34 ;
    	a53 = 33 ;
    	a160 = 33 ;
    	a1 = 33 ;
    	a109 = 34 ;
    	a169 = 33 ;
    	a55 = 33 ;
    	a88 = 33 ;
    	a174 = 7;
    	a121 = 33 ;
    	a19 = 34 ;
    	a119 = 34 ;
    	a45 = 34 ;
    	a95 = 8;
    	a128 = 1;
    	a34 = 33 ;
    	a86 = 35 ;
    	a150 = 4;
    	a41 = 34 ;
    	a12 = 33 ;
    	a187 = 3;
    	a200 = 33 ;
    	a68 = 4; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm212(int input) {
printf("POINT: 2295\n");

    if((((a146 == 32 && a20 == 4) && a15 == 10) && ((a152 == 9 && (a79 == 6 && ((input == 7) &&  cf==1 ))) && a146 == 32))) {
printf("POINT: 2296\n");
    	cf = 0;
    	a125 = 33 ;
    	a152 = 8;
    	a174 = 7;
    	a184 = 5;
    	a119 = 33 ;
    	a158 = 12;
    	a68 = 2;
    	a179 = 33 ;
    	a55 = 33 ;
    	a62 = 6;
    	a140 = 6;
    	a105 = 10;
    	a71 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2297\n");

    if(((a179 == 32 && (a39 == 8 && (a25 == 5 && a41 == 32))) && (a53 == 32 && (( cf==1  && (input == 10)) && a146 == 32)))) {
printf("POINT: 2298\n");
    	cf = 0;
    	a158 = 11;
    	a36 = 32 ;
    	a185 = 13; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm213(int input) {
printf("POINT: 2299\n");

    if(((a65 == 10 && a68 == 3) && ((((a25 == 5 && ( cf==1  && (input == 7))) && a174 == 8) && a146 == 32) && a115 == 32))) {
printf("POINT: 2300\n");
    	cf = 0;
    	a158 = 6;
    	a47 = 36 ;
    	a59 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2301\n");

    if(((a119 == 32 && (a88 == 32 && (a2 == 4 && ( cf==1  && (input == 4))))) && (a165 == 32 && (a39 == 8 && a20 == 4)))) {
printf("POINT: 2302\n");
    	cf = 0;
    	a115 = 33 ;
    	a174 = 7;
    	a45 = 33 ;
    	a158 = 7;
    	a105 = 10;
    	a125 = 33 ;
    	a69 = 33 ;
    	a144 = 33 ;
    	a30 = 33 ;
    	a42 = 32 ;
    	a193 = 9;
    	a64 = 11; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm214(int input) {
printf("POINT: 2303\n");

    if((((a120 == 6 && (a93 == 3 && a32 == 32)) && a32 == 32) && ((a127 == 7 && ( cf==1  && (input == 3))) && a140 == 5))) {
printf("POINT: 2304\n");
    	cf = 0;
    	a41 = 34 ;
    	a53 = 34 ;
    	a187 = 5;
    	a48 = 34 ;
    	a141 = 34 ;
    	a93 = 4;
    	a152 = 10;
    	a37 = 10;
    	a110 = 7;
    	a153 = 5;
    	a169 = 34 ;
    	a167 = 3;
    	a34 = 34 ;
    	a0 = 34 ;
    	a16 = 11;
    	a125 = 34 ;
    	a104 = 34 ;
    	a200 = 34 ;
    	a32 = 34 ;
    	a127 = 8;
    	a12 = 34 ;
    	a115 = 34 ;
    	a112 = 34 ;
    	a146 = 34 ;
    	a109 = 34 ;
    	a196 = 7;
    	a26 = 4;
    	a65 = 11;
    	a160 = 34 ;
    	a81 = 12;
    	a97 = 5;
    	a135 = 9;
    	a150 = 6;
    	a164 = 6;
    	a184 = 7;
    	a180 = 34 ;
    	a193 = 9;
    	a49 = 14; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2305\n");

    if(((a184 == 6 && ((a119 == 32 && a81 == 11) && a84 == 32)) && ((((input == 1) &&  cf==1 ) && a37 == 9) && a48 == 32))) {
printf("POINT: 2306\n");
    	cf = 0;
    	a138 = 32 ;
    	a103 = 35 ;
    	a200 = 35 ;
    	a134 = 11; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2307\n");

    if(((a65 == 10 && ((a16 == 10 && a88 == 32) && a12 == 32)) && ((a184 == 6 && ((input == 5) &&  cf==1 )) && a120 == 6))) {
printf("POINT: 2308\n");
    	cf = 0;
    	a138 = 32 ;
    	a200 = 35 ;
    	a103 = 35 ;
    	a134 = 11; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm215(int input) {
printf("POINT: 2309\n");

    if(((a15 == 10 && (a2 == 4 && ((( cf==1  && (input == 4)) && a153 == 4) && a39 == 8))) && (a127 == 7 && a25 == 5))) {
printf("POINT: 2310\n");
    	cf = 0;
    	a55 = 34 ;
    	a180 = 34 ;
    	a153 = 5;
    	a197 = 6;
    	a187 = 5;
    	a69 = 34 ;
    	a20 = 5;
    	a200 = 34 ;
    	a25 = 6;
    	a34 = 34 ;
    	a115 = 34 ;
    	a15 = 11;
    	a41 = 34 ;
    	a135 = 11;
    	a0 = 34 ;
    	a75 = 6; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm216(int input) {
printf("POINT: 2311\n");

    if((((a167 == 2 && a81 == 11) && a41 == 32) && ((a125 == 32 && (( cf==1  && (input == 10)) && a15 == 10)) && a178 == 32))) {
printf("POINT: 2312\n");
    	cf = 0;
printf("POINT: 2313\n");

    	if((a2 == 3 || (a20 == 5 || !(a168 == 33)))) {
printf("POINT: 2314\n");
    	a2 = 4;
    	a104 = 33 ;
    	a112 = 32 ;
    	a174 = 7;
    	a165 = 33 ;
    	a65 = 9;
    	a119 = 32 ;
    	a178 = 32 ;
    	a22 = 8;
    	a140 = 5;
    	a120 = 5;
    	a154 = 33 ;
    	a184 = 6;
    	a39 = 8;
    	a110 = 5;
    	a15 = 9;
    	a141 = 32 ;
    	a109 = 33 ;
    	a187 = 5;
    	a167 = 2;
    	a125 = 33 ;
    	a95 = 8;
    	a51 = 33 ;
    	a79 = 7;
    	a48 = 32 ;
    	a84 = 33 ;
    	a160 = 34 ;
    	a30 = 33 ;
    	a16 = 10;
    	a28 = 11;
    	a46 = 32 ;
    	a93 = 3;
    	a158 = 13;
    	a118 = 34 ;
    	a128 = 2;
    	a163 = 35 ;
    	a45 = 33 ;
    	a81 = 10;
    	a176 = 3;
    	a6 = 6; 
    	}else {
printf("POINT: 2316\n");
    	a90 = 33 ;
    	a69 = 33 ;
    	a180 = 33 ;
    	a187 = 5;
    	a134 = 11;
    	a53 = 33 ;
    	a81 = 10;
    	a103 = 32 ;
    	a126 = 3;
    	a120 = 5;
    	a152 = 8;
    	a146 = 33 ;
    	a200 = 35 ;
    	a32 = 33 ;
    	a77 = 7;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2317\n");

    if((a153 == 4 && (a178 == 32 && (a68 == 3 && (((a120 == 6 && ( cf==1  && (input == 4))) && a169 == 32) && a146 == 32))))) {
printf("POINT: 2318\n");
    	cf = 0;
    	a121 = 34 ;
    	a32 = 34 ;
    	a174 = 9;
    	a46 = 34 ;
    	a105 = 10;
    	a119 = 34 ;
    	a128 = 3;
    	a37 = 10;
    	a28 = 11;
    	a178 = 34 ;
    	a140 = 6;
    	a196 = 7;
    	a69 = 34 ;
    	a0 = 34 ;
    	a135 = 8;
    	a90 = 34 ;
    	a84 = 34 ;
    	a68 = 2;
    	a169 = 34 ;
    	a104 = 34 ;
    	a95 = 10;
    	a127 = 8;
    	a26 = 4;
    	a184 = 7;
    	a97 = 5;
    	a20 = 5;
    	a53 = 34 ;
    	a79 = 7;
    	a55 = 33 ;
    	a51 = 33 ;
    	a48 = 34 ;
    	a56 = 10;
    	a152 = 8;
    	a154 = 34 ;
    	a146 = 34 ;
    	a34 = 34 ;
    	a131 = 11;
    	a193 = 9;
    	a180 = 34 ;
    	a110 = 6;
    	a109 = 32 ;
    	a167 = 3;
    	a13 = 4;
    	a93 = 4;
    	a125 = 33 ;
    	a22 = 9;
    	a165 = 34 ;
    	a65 = 10;
    	a39 = 9;
    	a187 = 5;
    	a17 = 34 ;
    	a41 = 34 ;
    	a200 = 34 ;
    	a179 = 34 ;
    	a185 = 14; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm30(int input) {
printf("POINT: 2319\n");

    if((((a16 == 10 && (a53 == 32 && (a136 == 9 &&  cf==1 ))) && a193 == 8) && ((a196 == 6 && a141 == 32) && a65 == 10))) {
printf("POINT: 2320\n");
printf("POINT: 2321\n");

    	if(((a128 == 2 && (a125 == 32 && (a43 == 34 &&  cf==1 ))) && (a101 == 32 && (a125 == 32 && (a30 == 32 && a118 == 32))))) {
printf("POINT: 2322\n");
    		calculate_outputm207(input);
    	} 
    } 
printf("POINT: 2323\n");

    if(((a45 == 32 && (a141 == 32 && (a101 == 32 && a17 == 32))) && (a150 == 5 && (( cf==1  && a136 == 10) && a105 == 11)))) {
printf("POINT: 2324\n");
printf("POINT: 2325\n");

    	if((((a84 == 32 && ((( cf==1  && a47 == 36) && a37 == 9) && a81 == 11)) && a121 == 32) && (a120 == 6 && a112 == 32))) {
printf("POINT: 2326\n");
    		calculate_outputm208(input);
    	} 
    } 
printf("POINT: 2327\n");

    if((((((a104 == 32 && a125 == 32) && a79 == 6) && a79 == 6) && a178 == 32) && (a15 == 10 && (a136 == 11 &&  cf==1 )))) {
printf("POINT: 2328\n");
printf("POINT: 2329\n");

    	if(((a109 == 32 && (a146 == 32 && ((a85 == 34 &&  cf==1 ) && a154 == 32))) && ((a48 == 32 && a119 == 32) && a101 == 32))) {
printf("POINT: 2330\n");
    		calculate_outputm209(input);
    	} 
    } 
printf("POINT: 2331\n");

    if((((a69 == 32 && (a136 == 12 &&  cf==1 )) && a12 == 32) && (a180 == 32 && ((a196 == 6 && a55 == 32) && a152 == 9)))) {
printf("POINT: 2332\n");
printf("POINT: 2333\n");

    	if(((((((a144 == 32 && a2 == 4) && a112 == 32) && a112 == 32) && a160 == 32) && a41 == 32) && ( cf==1  && a114 == 10))) {
printf("POINT: 2334\n");
    		calculate_outputm210(input);
    	} 
    } 
printf("POINT: 2335\n");

    if(((a160 == 32 && (a41 == 32 && a174 == 8)) && ((a110 == 6 && (a93 == 3 && (a136 == 13 &&  cf==1 ))) && a193 == 8))) {
printf("POINT: 2336\n");
printf("POINT: 2337\n");

    	if(((a127 == 7 && ((a53 == 32 && a41 == 32) && a119 == 32)) && (a68 == 3 && (a45 == 32 && ( cf==1  && a133 == 2))))) {
printf("POINT: 2338\n");
    		calculate_outputm211(input);
    	} 
printf("POINT: 2339\n");

    	if(((a174 == 8 && ((a104 == 32 && a109 == 32) && a140 == 5)) && (a121 == 32 && (a121 == 32 && (a133 == 5 &&  cf==1 ))))) {
printf("POINT: 2340\n");
    		calculate_outputm212(input);
    	} 
    } 
printf("POINT: 2341\n");

    if((((a30 == 32 && a93 == 3) && a69 == 32) && ((a193 == 8 && (a169 == 32 && ( cf==1  && a136 == 14))) && a176 == 3))) {
printf("POINT: 2342\n");
printf("POINT: 2343\n");

    	if((((a101 == 32 && a68 == 3) && a180 == 32) && ((a154 == 32 && (a150 == 5 && ( cf==1  && a49 == 12))) && a144 == 32))) {
printf("POINT: 2344\n");
    		calculate_outputm213(input);
    	} 
printf("POINT: 2345\n");

    	if(((a112 == 32 && ((a49 == 13 &&  cf==1 ) && a128 == 2)) && (((a119 == 32 && a153 == 4) && a34 == 32) && a187 == 4))) {
printf("POINT: 2346\n");
    		calculate_outputm214(input);
    	} 
    } 
printf("POINT: 2347\n");

    if(((a69 == 32 && (a121 == 32 && a20 == 4)) && (a26 == 3 && (a41 == 32 && (( cf==1  && a136 == 15) && a115 == 32))))) {
printf("POINT: 2348\n");
printf("POINT: 2349\n");

    	if(((a184 == 6 && (((a180 == 32 && a126 == 4) && a20 == 4) && a127 == 7)) && (a180 == 32 && (a61 == 2 &&  cf==1 )))) {
printf("POINT: 2350\n");
    		calculate_outputm215(input);
    	} 
printf("POINT: 2351\n");

    	if(((a69 == 32 && (( cf==1  && a61 == 7) && a193 == 8)) && ((a79 == 6 && (a179 == 32 && a153 == 4)) && a46 == 32))) {
printf("POINT: 2352\n");
    		calculate_outputm216(input);
    	} 
    } 
}
 void calculate_outputm217(int input) {
printf("POINT: 2353\n");

    if(((a41 == 32 && (a93 == 3 && (a25 == 5 && (a26 == 3 && a56 == 9)))) && (a128 == 2 && ( cf==1  && (input == 4))))) {
printf("POINT: 2354\n");
    	cf = 0;
    	a23 = 36 ;
    	a100 = 32 ;
    	a200 = 35 ;
    	a20 = 3;
    	a134 = 14; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm218(int input) {
printf("POINT: 2355\n");

    if((((a150 == 5 && (a2 == 4 && (a125 == 32 && ((input == 10) &&  cf==1 )))) && a146 == 32) && (a152 == 9 && a41 == 32))) {
printf("POINT: 2356\n");
    	cf = 0;
printf("POINT: 2357\n");

    	if((a168 == 32 || a13 == 10)) {
printf("POINT: 2358\n");
    	a169 = 34 ;
    	a2 = 4;
    	a129 = 35 ;
    	a127 = 7;
    	a105 = 11;
    	a196 = 6;
    	a176 = 3;
    	a28 = 11;
    	a26 = 4;
    	a119 = 34 ;
    	a179 = 32 ;
    	a158 = 7;
    	a118 = 32 ;
    	a97 = 4;
    	a53 = 32 ;
    	a160 = 32 ;
    	a25 = 5;
    	a140 = 5;
    	a125 = 32 ;
    	a48 = 32 ;
    	a120 = 6;
    	a144 = 32 ;
    	a30 = 32 ;
    	a184 = 6;
    	a41 = 32 ;
    	a112 = 32 ;
    	a167 = 2;
    	a37 = 9;
    	a180 = 32 ;
    	a128 = 2;
    	a32 = 32 ;
    	a110 = 6;
    	a79 = 6;
    	a165 = 32 ;
    	a141 = 32 ;
    	a115 = 32 ;
    	a154 = 32 ;
    	a15 = 10;
    	a81 = 11;
    	a104 = 32 ;
    	a64 = 15; 
    	}else {
printf("POINT: 2360\n");
    	a134 = 10;
    	a110 = 6;
    	a200 = 35 ;
    	a196 = 6;
    	a28 = 11;
    	a26 = 4;
    	a164 = 13;
    	a157 = 10;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2361\n");

    if((((((input == 1) &&  cf==1 ) && a180 == 32) && a178 == 32) && (((a34 == 32 && a120 == 6) && a154 == 32) && a140 == 5))) {
printf("POINT: 2362\n");
    	cf = 0;
    	a28 = 9;
    	a55 = 32 ;
    	a30 = 32 ;
    	a16 = 10;
    	a84 = 33 ;
    	a51 = 33 ;
    	a3 = 32 ;
    	a46 = 32 ;
    	a200 = 35 ;
    	a26 = 3;
    	a17 = 32 ;
    	a109 = 32 ;
    	a127 = 7;
    	a193 = 7;
    	a154 = 32 ;
    	a187 = 3;
    	a90 = 33 ;
    	a174 = 8;
    	a119 = 33 ;
    	a95 = 8;
    	a88 = 32 ;
    	a22 = 7;
    	a39 = 7;
    	a169 = 32 ;
    	a125 = 33 ;
    	a180 = 33 ;
    	a160 = 33 ;
    	a34 = 32 ;
    	a15 = 9;
    	a134 = 16;
    	a68 = 3;
    	a56 = 9;
    	a8 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2363\n");

    if(((a41 == 32 && (((a120 == 6 && a126 == 4) && a115 == 32) && a153 == 4)) && (a131 == 10 && ((input == 4) &&  cf==1 )))) {
printf("POINT: 2364\n");
    	cf = 0;
printf("POINT: 2365\n");

    	if((a108 == 7 || (a183 == 10 || (a66 == 7 || !(a97 == 6))))) {
printf("POINT: 2366\n");
    	a158 = 13;
    	a163 = 33 ;
    	a110 = 6;
    	a196 = 6;
    	a6 = 11; 
    	}else {
printf("POINT: 2368\n");
    	a158 = 11;
    	a89 = 32 ;
    	a110 = 6;
    	a196 = 6;
    	a185 = 12;
    	}printf("%d\n", 17);  
    } 
}
 void calculate_outputm219(int input) {
printf("POINT: 2369\n");

    if(((a90 == 32 && ((a120 == 6 && (a110 == 6 && ( cf==1  && (input == 1)))) && a65 == 10)) && (a25 == 5 && a51 == 32))) {
printf("POINT: 2370\n");
    	cf = 0;
    	a104 = 34 ;
    	a32 = 34 ;
    	a48 = 34 ;
    	a169 = 34 ;
    	a187 = 5;
    	a41 = 34 ;
    	a97 = 5;
    	a160 = 34 ;
    	a184 = 7;
    	a158 = 7;
    	a118 = 34 ;
    	a110 = 7;
    	a127 = 8;
    	a137 = 34 ;
    	a167 = 3;
    	a180 = 34 ;
    	a125 = 34 ;
    	a93 = 4;
    	a153 = 5;
    	a37 = 10;
    	a53 = 34 ;
    	a26 = 4;
    	a152 = 10;
    	a15 = 11;
    	a109 = 34 ;
    	a25 = 6;
    	a64 = 10; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2371\n");

    if(((a120 == 6 && (a16 == 10 && ((( cf==1  && (input == 10)) && a39 == 8) && a17 == 32))) && (a15 == 10 && a2 == 4))) {
printf("POINT: 2372\n");
    	cf = 0;
    	a26 = 3;
    	a69 = 32 ;
    	a16 = 10;
    	a112 = 32 ;
    	a3 = 32 ;
    	a174 = 7;
    	a84 = 32 ;
    	a39 = 8;
    	a125 = 33 ;
    	a167 = 2;
    	a184 = 5;
    	a119 = 33 ;
    	a53 = 32 ;
    	a25 = 5;
    	a160 = 32 ;
    	a95 = 9;
    	a140 = 6;
    	a134 = 16;
    	a152 = 8;
    	a200 = 35 ;
    	a109 = 32 ;
    	a2 = 4;
    	a56 = 9;
    	a28 = 10;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2373\n");

    if(((a179 == 32 && (( cf==1  && (input == 3)) && a68 == 3)) && ((a176 == 3 && (a90 == 32 && a193 == 8)) && a150 == 5))) {
printf("POINT: 2374\n");
    	cf = 0;
    	a158 = 11;
    	a89 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2375\n");

    if(((((a41 == 32 && (a25 == 5 && a178 == 32)) && a179 == 32) && a84 == 32) && (( cf==1  && (input == 4)) && a48 == 32))) {
printf("POINT: 2376\n");
    	cf = 0;
    	a81 = 12;
    	a46 = 34 ;
    	a184 = 7;
    	a200 = 35 ;
    	a193 = 8;
    	a45 = 32 ;
    	a30 = 32 ;
    	a101 = 34 ;
    	a88 = 32 ;
    	a39 = 9;
    	a109 = 34 ;
    	a41 = 34 ;
    	a146 = 34 ;
    	a152 = 10;
    	a25 = 5;
    	a2 = 4;
    	a140 = 6;
    	a187 = 5;
    	a65 = 10;
    	a179 = 34 ;
    	a120 = 6;
    	a53 = 34 ;
    	a103 = 32 ;
    	a34 = 32 ;
    	a17 = 34 ;
    	a20 = 4;
    	a32 = 32 ;
    	a37 = 10;
    	a119 = 34 ;
    	a93 = 3;
    	a68 = 4;
    	a112 = 34 ;
    	a134 = 11;
    	a77 = 12; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm220(int input) {
printf("POINT: 2377\n");

    if(((((a131 == 10 && ( cf==1  && (input == 10))) && a128 == 2) && a16 == 10) && (a25 == 5 && (a110 == 6 && a174 == 8)))) {
printf("POINT: 2378\n");
    	cf = 0;
    	a112 = 32 ;
    	a17 = 32 ;
    	a26 = 3;
    	a15 = 10;
    	a39 = 8;
    	a32 = 32 ;
    	a28 = 10;
    	a200 = 35 ;
    	a179 = 32 ;
    	a174 = 8;
    	a65 = 10;
    	a45 = 32 ;
    	a196 = 6;
    	a134 = 13;
    	a30 = 32 ;
    	a121 = 32 ;
    	a150 = 5;
    	a125 = 32 ;
    	a167 = 2;
    	a95 = 9;
    	a193 = 8;
    	a153 = 4;
    	a104 = 32 ;
    	a144 = 32 ;
    	a184 = 6;
    	a81 = 11;
    	a46 = 32 ;
    	a140 = 5;
    	a84 = 32 ;
    	a51 = 32 ;
    	a128 = 2;
    	a146 = 32 ;
    	a3 = 33 ;
    	a16 = 10;
    	a152 = 9;
    	a180 = 32 ;
    	a118 = 32 ;
    	a56 = 9;
    	a120 = 6;
    	a22 = 8;
    	a127 = 7;
    	a12 = 32 ;
    	a2 = 4;
    	a119 = 32 ;
    	a160 = 32 ;
    	a93 = 3;
    	a48 = 32 ;
    	a20 = 4;
    	a69 = 32 ;
    	a110 = 6;
    	a175 = 14; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm221(int input) {
printf("POINT: 2379\n");

    if(((a81 == 11 && (((input == 4) &&  cf==1 ) && a46 == 32)) && (a28 == 10 && ((a65 == 10 && a30 == 32) && a112 == 32)))) {
printf("POINT: 2380\n");
    	cf = 0;
    	a180 = 34 ;
    	a41 = 34 ;
    	a144 = 32 ;
    	a115 = 32 ;
    	a93 = 4;
    	a150 = 5;
    	a127 = 8;
    	a137 = 34 ;
    	a153 = 5;
    	a158 = 7;
    	a193 = 8;
    	a48 = 34 ;
    	a167 = 3;
    	a160 = 34 ;
    	a37 = 10;
    	a187 = 5;
    	a64 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2381\n");

    if((((a141 == 32 && ((((input == 6) &&  cf==1 ) && a65 == 10) && a34 == 32)) && a176 == 3) && (a196 == 6 && a196 == 6))) {
printf("POINT: 2382\n");
    	cf = 0;
    	a34 = 34 ;
    	a48 = 34 ;
    	a160 = 34 ;
    	a180 = 34 ;
    	a153 = 5;
    	a0 = 34 ;
    	a164 = 6;
    	a141 = 34 ;
    	a196 = 7;
    	a37 = 10;
    	a41 = 34 ;
    	a16 = 11;
    	a112 = 34 ;
    	a187 = 5;
    	a167 = 3;
    	a93 = 4;
    	a81 = 12;
    	a12 = 34 ;
    	a200 = 34 ;
    	a135 = 9;
    	a146 = 34 ;
    	a127 = 8;
    	a65 = 11;
    	a49 = 14; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2383\n");

    if((((a51 == 32 && a187 == 4) && a153 == 4) && (((a51 == 32 && ((input == 10) &&  cf==1 )) && a17 == 32) && a48 == 32))) {
printf("POINT: 2384\n");
    	cf = 0;
    	a144 = 32 ;
    	a137 = 34 ;
    	a41 = 34 ;
    	a150 = 5;
    	a160 = 34 ;
    	a48 = 34 ;
    	a158 = 7;
    	a115 = 32 ;
    	a187 = 5;
    	a93 = 4;
    	a180 = 34 ;
    	a193 = 8;
    	a153 = 5;
    	a167 = 3;
    	a127 = 8;
    	a37 = 10;
    	a64 = 10; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm222(int input) {
printf("POINT: 2385\n");

    if(((a88 == 32 && (a90 == 32 && (a146 == 32 && ((input == 4) &&  cf==1 )))) && (a121 == 32 && (a88 == 32 && a104 == 32)))) {
printf("POINT: 2386\n");
    	cf = 0;
    	a48 = 32 ;
    	a41 = 32 ;
    	a15 = 10;
    	a144 = 32 ;
    	a89 = 35 ;
    	a169 = 32 ;
    	a160 = 32 ;
    	a34 = 32 ;
    	a196 = 6;
    	a198 = 33 ;
    	a86 = 36 ;
    	a131 = 10;
    	a200 = 32 ;
    	a93 = 3;
    	a146 = 32 ;
    	a56 = 9; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm223(int input) {
printf("POINT: 2387\n");

    if((((a121 == 32 && a34 == 32) && a144 == 32) && (a20 == 4 && (a176 == 3 && (a118 == 32 && ((input == 5) &&  cf==1 )))))) {
printf("POINT: 2388\n");
    	cf = 0;
    	a55 = 34 ;
    	a28 = 11;
    	a48 = 34 ;
    	a46 = 34 ;
    	a146 = 34 ;
    	a152 = 10;
    	a120 = 6;
    	a51 = 34 ;
    	a68 = 4;
    	a101 = 34 ;
    	a17 = 34 ;
    	a184 = 7;
    	a79 = 7;
    	a135 = 15;
    	a115 = 34 ;
    	a104 = 34 ;
    	a20 = 5;
    	a32 = 34 ;
    	a84 = 34 ;
    	a109 = 34 ;
    	a69 = 34 ;
    	a153 = 4;
    	a200 = 34 ;
    	a39 = 9;
    	a179 = 34 ;
    	a165 = 34 ;
    	a140 = 6;
    	a26 = 4;
    	a25 = 5;
    	a121 = 34 ;
    	a45 = 34 ;
    	a93 = 4;
    	a154 = 34 ;
    	a178 = 34 ;
    	a141 = 34 ;
    	a41 = 34 ;
    	a81 = 12;
    	a169 = 34 ;
    	a95 = 10;
    	a128 = 3;
    	a187 = 5;
    	a160 = 34 ;
    	a119 = 34 ;
    	a180 = 34 ;
    	a88 = 34 ;
    	a112 = 34 ;
    	a97 = 5;
    	a157 = 11;
    	a98 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2389\n");

    if(((a51 == 32 && a22 == 8) && (((a81 == 11 && (( cf==1  && (input == 4)) && a12 == 32)) && a174 == 8) && a131 == 10))) {
printf("POINT: 2390\n");
    	cf = 0;
    	a144 = 34 ;
    	a93 = 4;
    	a60 = 8;
    	a200 = 32 ;
    	a169 = 34 ;
    	a198 = 35 ;
    	a141 = 34 ;
    	a179 = 34 ;
    	a146 = 34 ;
    	a176 = 4;
    	a119 = 34 ;
    	a15 = 11;
    	a62 = 4; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2391\n");

    if(((a178 == 32 && (a146 == 32 && ( cf==1  && (input == 7)))) && (((a128 == 2 && a26 == 3) && a34 == 32) && a160 == 32))) {
printf("POINT: 2392\n");
    	cf = 0;
    	a150 = 6;
    	a88 = 34 ;
    	a93 = 4;
    	a169 = 34 ;
    	a94 = 32 ;
    	a16 = 9;
    	a180 = 34 ;
    	a104 = 34 ;
    	a119 = 33 ;
    	a131 = 11;
    	a51 = 34 ;
    	a84 = 33 ;
    	a41 = 34 ;
    	a200 = 34 ;
    	a69 = 33 ;
    	a15 = 9;
    	a121 = 33 ;
    	a30 = 33 ;
    	a95 = 10;
    	a115 = 34 ;
    	a79 = 7;
    	a34 = 34 ;
    	a101 = 34 ;
    	a160 = 33 ;
    	a187 = 5;
    	a110 = 7;
    	a167 = 3;
    	a193 = 7;
    	a135 = 12;
    	a176 = 2;
    	a165 = 33 ;
    	a179 = 34 ;
    	a22 = 9;
    	a174 = 9;
    	a37 = 9;
    	a120 = 6;
    	a146 = 34 ;
    	a125 = 33 ;
    	a154 = 34 ;
    	a97 = 5;
    	a128 = 3;
    	a65 = 10;
    	a141 = 34 ;
    	a178 = 34 ;
    	a153 = 4;
    	a17 = 34 ;
    	a184 = 7;
    	a152 = 10;
    	a156 = 7; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2393\n");

    if(((a141 == 32 && ((((input == 3) &&  cf==1 ) && a127 == 7) && a150 == 5)) && (a17 == 32 && (a112 == 32 && a146 == 32)))) {
printf("POINT: 2394\n");
    	cf = 0;
    	a169 = 34 ;
    	a30 = 34 ;
    	a193 = 9;
    	a152 = 10;
    	a154 = 34 ;
    	a79 = 7;
    	a125 = 34 ;
    	a101 = 34 ;
    	a141 = 34 ;
    	a127 = 8;
    	a180 = 34 ;
    	a109 = 34 ;
    	a135 = 9;
    	a46 = 34 ;
    	a48 = 34 ;
    	a12 = 34 ;
    	a104 = 34 ;
    	a51 = 34 ;
    	a25 = 5;
    	a110 = 7;
    	a174 = 9;
    	a41 = 34 ;
    	a172 = 34 ;
    	a121 = 34 ;
    	a28 = 11;
    	a167 = 3;
    	a187 = 5;
    	a160 = 34 ;
    	a120 = 6;
    	a15 = 11;
    	a146 = 34 ;
    	a140 = 6;
    	a144 = 34 ;
    	a65 = 10;
    	a93 = 4;
    	a32 = 34 ;
    	a39 = 9;
    	a81 = 12;
    	a150 = 6;
    	a200 = 34 ;
    	a179 = 34 ;
    	a165 = 34 ;
    	a164 = 12; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm224(int input) {
printf("POINT: 2395\n");

    if(((a174 == 8 && ((a128 == 2 && a180 == 32) && a90 == 32)) && (a178 == 32 && (( cf==1  && (input == 5)) && a65 == 10)))) {
printf("POINT: 2396\n");
    	cf = 0;
printf("POINT: 2397\n");

    	if(((!(a10 == 9) || ((a146 == 36 && !(a60 == 9)) && !(a169 == 35))) || !(a185 == 16))) {
printf("POINT: 2398\n");
    	a180 = 36 ;
    	a153 = 10;
    	a37 = 12;
    	a140 = 11;
    	a93 = 8;
    	a118 = 32 ;
    	a119 = 35 ;
    	a90 = 35 ;
    	a174 = 11;
    	a109 = 33 ;
    	a105 = 15;
    	a69 = 34 ;
    	a128 = 8;
    	a84 = 33 ;
    	a179 = 33 ;
    	a121 = 36 ;
    	a70 = 33 ;
    	a158 = 11;
    	a184 = 10;
    	a25 = 7;
    	a127 = 6;
    	a196 = 8;
    	a56 = 13;
    	a39 = 12;
    	a178 = 34 ;
    	a169 = 36 ;
    	a22 = 10;
    	a104 = 35 ;
    	a48 = 35 ;
    	a51 = 35 ;
    	a141 = 36 ;
    	a55 = 35 ;
    	a15 = 15;
    	a112 = 34 ;
    	a45 = 34 ;
    	a79 = 7;
    	a160 = 33 ;
    	a126 = 10;
    	a32 = 35 ;
    	a165 = 33 ;
    	a120 = 11;
    	a154 = 36 ;
    	a81 = 12;
    	a187 = 7;
    	a97 = 4;
    	a185 = 14; 
    	}else {
printf("POINT: 2400\n");
    	a179 = 33 ;
    	a69 = 35 ;
    	a56 = 8;
    	a165 = 34 ;
    	a198 = 35 ;
    	a169 = 33 ;
    	a200 = 32 ;
    	a60 = 8;
    	a140 = 10;
    	a62 = 10;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2401\n");

    if(((a88 == 32 && (a32 == 32 && a39 == 8)) && (((( cf==1  && (input == 3)) && a93 == 3) && a16 == 10) && a178 == 32))) {
printf("POINT: 2402\n");
    	cf = 0;
    	a135 = 11;
    	a180 = 32 ;
    	a84 = 33 ;
    	a196 = 5;
    	a26 = 9;
    	a119 = 36 ;
    	a131 = 14;
    	a112 = 33 ;
    	a160 = 32 ;
    	a153 = 6;
    	a93 = 6;
    	a15 = 9;
    	a118 = 35 ;
    	a187 = 8;
    	a178 = 36 ;
    	a115 = 32 ;
    	a90 = 35 ;
    	a32 = 35 ;
    	a200 = 34 ;
    	a104 = 33 ;
    	a45 = 35 ;
    	a146 = 33 ;
    	a120 = 8;
    	a28 = 9;
    	a121 = 32 ;
    	a110 = 6;
    	a42 = 36 ;
    	a141 = 32 ;
    	a48 = 35 ;
    	a39 = 13;
    	a16 = 15;
    	a34 = 33 ;
    	a128 = 8;
    	a174 = 12;
    	a53 = 33 ;
    	a184 = 8;
    	a46 = 33 ;
    	a167 = 4;
    	a176 = 6;
    	a127 = 12;
    	a144 = 32 ;
    	a193 = 7;
    	a65 = 9;
    	a2 = 9;
    	a30 = 33 ;
    	a109 = 35 ;
    	a25 = 7;
    	a68 = 3;
    	a41 = 32 ;
    	a37 = 9;
    	a17 = 35 ;
    	a125 = 32 ;
    	a51 = 36 ;
    	a197 = 7; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2403\n");

    if((((a81 == 11 && (a104 == 32 && ( cf==1  && (input == 7)))) && a26 == 3) && (a46 == 32 && (a41 == 32 && a154 == 32)))) {
printf("POINT: 2404\n");
    	cf = 0;
    	a115 = 35 ;
    	a105 = 14;
    	a176 = 6;
    	a93 = 3;
    	a86 = 34 ;
    	a84 = 35 ;
    	a140 = 9;
    	a187 = 8;
    	a127 = 8;
    	a109 = 36 ;
    	a126 = 5;
    	a79 = 8;
    	a125 = 32 ;
    	a15 = 13;
    	a34 = 35 ;
    	a32 = 35 ;
    	a120 = 8;
    	a69 = 32 ;
    	a150 = 5;
    	a27 = 36 ;
    	a56 = 10;
    	a45 = 36 ;
    	a26 = 3;
    	a196 = 9;
    	a178 = 36 ;
    	a39 = 13;
    	a90 = 36 ;
    	a184 = 8;
    	a200 = 33 ;
    	a0 = 35 ;
    	a88 = 36 ;
    	a174 = 10;
    	a95 = 11;
    	a144 = 32 ;
    	a112 = 35 ;
    	a169 = 36 ;
    	a141 = 35 ;
    	a165 = 35 ;
    	a41 = 36 ;
    	a53 = 36 ;
    	a118 = 35 ;
    	a179 = 35 ;
    	a2 = 4;
    	a154 = 36 ;
    	a160 = 36 ;
    	a97 = 4;
    	a51 = 36 ;
    	a153 = 7;
    	a128 = 4;
    	a81 = 13;
    	a25 = 6;
    	a121 = 35 ;
    	a110 = 11;
    	a46 = 34 ;
    	a101 = 36 ;
    	a193 = 9;
    	a55 = 35 ;
    	a48 = 35 ;
    	a119 = 34 ;
    	a23 = 35 ; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2405\n");

    if((((( cf==1  && (input == 9)) && a176 == 3) && a37 == 9) && (a121 == 32 && ((a39 == 8 && a180 == 32) && a146 == 32)))) {
printf("POINT: 2406\n");
    	cf = 0;
    	a79 = 9;
    	a174 = 11;
    	a179 = 36 ;
    	a160 = 34 ;
    	a158 = 12;
    	a180 = 34 ;
    	a56 = 12;
    	a140 = 4;
    	a45 = 35 ;
    	a176 = 8;
    	a65 = 9;
    	a178 = 34 ;
    	a46 = 34 ;
    	a127 = 10;
    	a120 = 8;
    	a51 = 33 ;
    	a128 = 4;
    	a69 = 36 ;
    	a115 = 35 ;
    	a39 = 10;
    	a62 = 5;
    	a109 = 34 ;
    	a37 = 13;
    	a167 = 5;
    	a48 = 34 ;
    	a152 = 10;
    	a22 = 9;
    	a169 = 34 ;
    	a112 = 33 ;
    	a144 = 35 ;
    	a154 = 35 ;
    	a165 = 33 ;
    	a90 = 36 ;
    	a84 = 36 ;
    	a105 = 13;
    	a17 = 34 ;
    	a28 = 9;
    	a81 = 12;
    	a32 = 35 ;
    	a193 = 11;
    	a71 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2407\n");

    if((((a12 == 32 && a51 == 32) && a97 == 4) && (a144 == 32 && (a187 == 4 && (((input == 1) &&  cf==1 ) && a144 == 32))))) {
printf("POINT: 2408\n");
    	cf = 0;
printf("POINT: 2409\n");

    	if((a50 == 7 && a162 == 33)) {
printf("POINT: 2410\n");
    	a69 = 33 ;
    	a58 = 3;
    	a200 = 32 ;
    	a179 = 36 ;
    	a140 = 8;
    	a165 = 34 ;
    	a198 = 34 ;
    	a56 = 12;
    	a105 = 12;
    	a184 = 11;
    	a169 = 36 ;
    	a76 = 7; 
    	}else {
printf("POINT: 2412\n");
    	a41 = 32 ;
    	a198 = 36 ;
    	a69 = 36 ;
    	a3 = 32 ;
    	a88 = 35 ;
    	a165 = 36 ;
    	a97 = 8;
    	a55 = 36 ;
    	a105 = 15;
    	a84 = 35 ;
    	a16 = 14;
    	a28 = 12;
    	a15 = 12;
    	a119 = 33 ;
    	a68 = 7;
    	a56 = 11;
    	a25 = 7;
    	a179 = 33 ;
    	a37 = 12;
    	a140 = 4;
    	a90 = 35 ;
    	a32 = 35 ;
    	a81 = 12;
    	a115 = 36 ;
    	a109 = 35 ;
    	a169 = 35 ;
    	a2 = 9;
    	a174 = 13;
    	a46 = 35 ;
    	a127 = 12;
    	a167 = 7;
    	a12 = 36 ;
    	a51 = 33 ;
    	a153 = 3;
    	a39 = 14;
    	a146 = 33 ;
    	a93 = 2;
    	a200 = 32 ;
    	a110 = 12;
    	a112 = 35 ;
    	a120 = 8;
    	a176 = 4;
    	a184 = 12;
    	a131 = 9;
    	a125 = 33 ;
    	a50 = 5;
    	}printf("%d\n", 15);  
    } 
printf("POINT: 2413\n");

    if(((a153 == 4 && (a141 == 32 && (a196 == 6 && (((input == 10) &&  cf==1 ) && a26 == 3)))) && (a180 == 32 && a121 == 32))) {
printf("POINT: 2414\n");
    	cf = 0;
    	a120 = 7;
    	a158 = 9;
    	a45 = 35 ;
    	a81 = 16;
    	a39 = 8;
    	a140 = 10;
    	a95 = 13;
    	a32 = 32 ;
    	a153 = 3;
    	a104 = 36 ;
    	a2 = 9;
    	a43 = 34 ;
    	a84 = 36 ;
    	a144 = 35 ;
    	a90 = 36 ;
    	a184 = 5;
    	a146 = 33 ;
    	a176 = 8;
    	a37 = 14;
    	a26 = 9;
    	a152 = 9;
    	a160 = 32 ;
    	a22 = 12;
    	a97 = 5;
    	a56 = 10;
    	a174 = 8;
    	a154 = 32 ;
    	a126 = 5;
    	a69 = 34 ;
    	a46 = 36 ;
    	a25 = 6;
    	a165 = 34 ;
    	a178 = 36 ;
    	a41 = 35 ;
    	a112 = 34 ;
    	a28 = 10;
    	a179 = 36 ;
    	a68 = 5;
    	a105 = 14;
    	a110 = 8;
    	a93 = 2;
    	a15 = 10;
    	a169 = 36 ;
    	a17 = 33 ;
    	a51 = 32 ;
    	a136 = 9; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2415\n");

    if(((a26 == 3 && (a154 == 32 && (a28 == 10 && a97 == 4))) && (a55 == 32 && (a131 == 10 && ((input == 4) &&  cf==1 ))))) {
printf("POINT: 2416\n");
    	cf = 0;
    	a121 = 32 ;
    	a0 = 35 ;
    	a128 = 4;
    	a15 = 9;
    	a200 = 34 ;
    	a119 = 33 ;
    	a30 = 35 ;
    	a115 = 32 ;
    	a146 = 35 ;
    	a48 = 33 ;
    	a45 = 35 ;
    	a180 = 32 ;
    	a160 = 35 ;
    	a167 = 1;
    	a118 = 32 ;
    	a184 = 12;
    	a56 = 14;
    	a17 = 33 ;
    	a39 = 8;
    	a104 = 32 ;
    	a26 = 6;
    	a84 = 33 ;
    	a154 = 32 ;
    	a196 = 11;
    	a140 = 4;
    	a25 = 10;
    	a2 = 6;
    	a144 = 36 ;
    	a187 = 7;
    	a90 = 35 ;
    	a152 = 8;
    	a141 = 35 ;
    	a53 = 33 ;
    	a153 = 8;
    	a135 = 11;
    	a22 = 10;
    	a193 = 11;
    	a20 = 7;
    	a165 = 36 ;
    	a55 = 35 ;
    	a46 = 36 ;
    	a34 = 32 ;
    	a32 = 33 ;
    	a179 = 33 ;
    	a81 = 13;
    	a112 = 36 ;
    	a197 = 8;
    	a126 = 4;
    	a79 = 12;
    	a174 = 13;
    	a190 = 12; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2417\n");

    if(((a119 == 32 && (a180 == 32 && a160 == 32)) && (a141 == 32 && (a45 == 32 && (a180 == 32 && ((input == 8) &&  cf==1 )))))) {
printf("POINT: 2418\n");
    	cf = 0;
    	a158 = 7;
    	a69 = 34 ;
    	a140 = 9;
    	a165 = 33 ;
    	a105 = 12;
    	a179 = 34 ;
    	a56 = 12;
    	a169 = 35 ;
    	a174 = 13;
    	a64 = 16;
    	a189 = 13; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2419\n");

    if(((a45 == 32 && a119 == 32) && (a25 == 5 && ((a53 == 32 && (a90 == 32 && ( cf==1  && (input == 6)))) && a68 == 3)))) {
printf("POINT: 2420\n");
    	cf = 0;
    	a196 = 10;
    	a193 = 14;
    	a105 = 10;
    	a144 = 32 ;
    	a79 = 8;
    	a30 = 35 ;
    	a140 = 4;
    	a48 = 32 ;
    	a146 = 36 ;
    	a69 = 34 ;
    	a165 = 33 ;
    	a136 = 15;
    	a169 = 34 ;
    	a51 = 33 ;
    	a53 = 36 ;
    	a17 = 33 ;
    	a16 = 12;
    	a104 = 32 ;
    	a101 = 32 ;
    	a118 = 35 ;
    	a158 = 9;
    	a81 = 11;
    	a61 = 2; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2421\n");

    if((((( cf==1  && (input == 2)) && a167 == 2) && a90 == 32) && (((a17 == 32 && a79 == 6) && a90 == 32) && a2 == 4))) {
printf("POINT: 2422\n");
    	cf = 0;
    	a158 = 7;
    	a137 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm225(int input) {
printf("POINT: 2423\n");

    if((((a79 == 6 && (( cf==1  && (input == 1)) && a81 == 11)) && a46 == 32) && ((a2 == 4 && a30 == 32) && a120 == 6))) {
printf("POINT: 2424\n");
    	cf = 0;
    	a30 = 34 ;
    	a160 = 34 ;
    	a34 = 34 ;
    	a97 = 5;
    	a135 = 11;
    	a200 = 34 ;
    	a119 = 34 ;
    	a17 = 34 ;
    	a146 = 34 ;
    	a28 = 11;
    	a65 = 11;
    	a53 = 34 ;
    	a197 = 8;
    	a81 = 10;
    	a127 = 8;
    	a26 = 4;
    	a180 = 34 ;
    	a79 = 7;
    	a46 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2425\n");

    if(((( cf==1  && (input == 10)) && a152 == 9) && (a97 == 4 && (((a17 == 32 && a26 == 3) && a65 == 10) && a153 == 4)))) {
printf("POINT: 2426\n");
    	cf = 0;
    	a119 = 34 ;
    	a200 = 34 ;
    	a197 = 8;
    	a30 = 34 ;
    	a65 = 11;
    	a28 = 11;
    	a79 = 7;
    	a127 = 8;
    	a26 = 4;
    	a34 = 34 ;
    	a160 = 34 ;
    	a17 = 34 ;
    	a135 = 11;
    	a97 = 5;
    	a180 = 34 ;
    	a46 = 34 ;
    	a146 = 34 ;
    	a81 = 10;
    	a53 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm31(int input) {
printf("POINT: 2427\n");

    if(((((a16 == 10 && (a51 == 32 && a90 == 32)) && a152 == 9) && a184 == 6) && (( cf==1  && a183 == 10) && a165 == 32))) {
printf("POINT: 2428\n");
printf("POINT: 2429\n");

    	if(((((a20 == 4 && (a1 == 35 &&  cf==1 )) && a53 == 32) && a39 == 8) && ((a109 == 32 && a22 == 8) && a141 == 32))) {
printf("POINT: 2430\n");
    		calculate_outputm217(input);
    	} 
    } 
printf("POINT: 2431\n");

    if(((a119 == 32 && ((a39 == 8 && (a167 == 2 && ( cf==1  && a183 == 12))) && a28 == 10)) && (a146 == 32 && a178 == 32))) {
printf("POINT: 2432\n");
printf("POINT: 2433\n");

    	if((((a126 == 4 && (( cf==1  && a7 == 4) && a25 == 5)) && a15 == 10) && (a115 == 32 && (a93 == 3 && a187 == 4)))) {
printf("POINT: 2434\n");
    		calculate_outputm218(input);
    	} 
printf("POINT: 2435\n");

    	if(((a125 == 32 && ((( cf==1  && a7 == 5) && a65 == 10) && a131 == 10)) && ((a104 == 32 && a90 == 32) && a105 == 11))) {
printf("POINT: 2436\n");
    		calculate_outputm219(input);
    	} 
printf("POINT: 2437\n");

    	if(((a97 == 4 && (a93 == 3 && (a146 == 32 && (a7 == 6 &&  cf==1 )))) && (a167 == 2 && (a110 == 6 && a55 == 32)))) {
printf("POINT: 2438\n");
    		calculate_outputm220(input);
    	} 
printf("POINT: 2439\n");

    	if((((a7 == 7 &&  cf==1 ) && a39 == 8) && (((a167 == 2 && (a37 == 9 && a119 == 32)) && a30 == 32) && a16 == 10))) {
printf("POINT: 2440\n");
    		calculate_outputm221(input);
    	} 
    } 
printf("POINT: 2441\n");

    if((((a0 == 32 && (a169 == 32 && (a15 == 10 && ( cf==1  && a183 == 13)))) && a0 == 32) && (a144 == 32 && a165 == 32))) {
printf("POINT: 2442\n");
printf("POINT: 2443\n");

    	if(((a56 == 9 && a196 == 6) && (a48 == 32 && (a144 == 32 && (a45 == 32 && (a146 == 32 && ( cf==1  && a3 == 32))))))) {
printf("POINT: 2444\n");
    		calculate_outputm222(input);
    	} 
    } 
printf("POINT: 2445\n");

    if(((((( cf==1  && a183 == 14) && a17 == 32) && a115 == 32) && a81 == 11) && (a167 == 2 && (a119 == 32 && a32 == 32)))) {
printf("POINT: 2446\n");
printf("POINT: 2447\n");

    	if(((a169 == 32 && (a112 == 32 && a90 == 32)) && (((a179 == 32 && ( cf==1  && a156 == 6)) && a121 == 32) && a15 == 10))) {
printf("POINT: 2448\n");
    		calculate_outputm223(input);
    	} 
    } 
printf("POINT: 2449\n");

    if(((a53 == 32 && (a119 == 32 && ( cf==1  && a183 == 16))) && (((a2 == 4 && a125 == 32) && a25 == 5) && a48 == 32))) {
printf("POINT: 2450\n");
printf("POINT: 2451\n");

    	if((((a79 == 6 && a81 == 11) && a115 == 32) && ((a167 == 2 && (a160 == 32 && ( cf==1  && a77 == 5))) && a53 == 32))) {
printf("POINT: 2452\n");
    		calculate_outputm224(input);
    	} 
printf("POINT: 2453\n");

    	if(((a146 == 32 && ((a150 == 5 && a160 == 32) && a28 == 10)) && (a46 == 32 && (( cf==1  && a77 == 7) && a109 == 32)))) {
printf("POINT: 2454\n");
    		calculate_outputm225(input);
    	} 
    } 
}
 void calculate_outputm226(int input) {
printf("POINT: 2455\n");

    if(((a88 == 32 && (a90 == 32 && ( cf==1  && (input == 4)))) && (((a101 == 32 && a110 == 6) && a26 == 3) && a131 == 10))) {
printf("POINT: 2456\n");
    	cf = 0;
    	a68 = 3;
    	a26 = 4;
    	a169 = 34 ;
    	a15 = 11;
    	a180 = 34 ;
    	a25 = 6;
    	a55 = 32 ;
    	a81 = 11;
    	a79 = 6;
    	a110 = 7;
    	a176 = 3;
    	a152 = 10;
    	a137 = 34 ;
    	a119 = 32 ;
    	a95 = 9;
    	a28 = 10;
    	a84 = 32 ;
    	a69 = 32 ;
    	a37 = 10;
    	a158 = 7;
    	a165 = 32 ;
    	a105 = 11;
    	a174 = 8;
    	a167 = 3;
    	a127 = 8;
    	a178 = 32 ;
    	a17 = 32 ;
    	a32 = 34 ;
    	a196 = 6;
    	a118 = 34 ;
    	a125 = 34 ;
    	a93 = 4;
    	a121 = 32 ;
    	a51 = 32 ;
    	a153 = 5;
    	a104 = 34 ;
    	a146 = 32 ;
    	a45 = 32 ;
    	a64 = 10; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2457\n");

    if(((a128 == 2 && (a30 == 32 && ((a169 == 32 && a16 == 10) && a115 == 32))) && (a127 == 7 && ((input == 9) &&  cf==1 )))) {
printf("POINT: 2458\n");
    	cf = 0;
    	a178 = 32 ;
    	a105 = 10;
    	a140 = 6;
    	a158 = 12;
    	a109 = 32 ;
    	a95 = 9;
    	a55 = 33 ;
    	a45 = 32 ;
    	a184 = 5;
    	a97 = 4;
    	a79 = 6;
    	a51 = 33 ;
    	a152 = 8;
    	a125 = 33 ;
    	a84 = 32 ;
    	a196 = 6;
    	a53 = 32 ;
    	a81 = 11;
    	a154 = 33 ;
    	a121 = 32 ;
    	a17 = 32 ;
    	a176 = 3;
    	a165 = 32 ;
    	a62 = 6;
    	a174 = 7;
    	a28 = 10;
    	a22 = 7;
    	a41 = 32 ;
    	a160 = 32 ;
    	a69 = 32 ;
    	a146 = 32 ;
    	a119 = 33 ;
    	a48 = 32 ;
    	a187 = 4;
    	a68 = 2;
    	a179 = 33 ;
    	a71 = 13; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2459\n");

    if((((a37 == 9 && (a32 == 32 && a150 == 5)) && a34 == 32) && (a128 == 2 && (a152 == 9 && ((input == 5) &&  cf==1 ))))) {
printf("POINT: 2460\n");
    	cf = 0;
    	a140 = 6;
    	a157 = 11;
    	a141 = 34 ;
    	a169 = 34 ;
    	a20 = 5;
    	a88 = 34 ;
    	a128 = 3;
    	a176 = 3;
    	a152 = 10;
    	a200 = 34 ;
    	a46 = 34 ;
    	a93 = 4;
    	a135 = 15;
    	a104 = 34 ;
    	a65 = 11;
    	a180 = 34 ;
    	a154 = 34 ;
    	a112 = 34 ;
    	a179 = 34 ;
    	a37 = 10;
    	a101 = 34 ;
    	a32 = 34 ;
    	a115 = 34 ;
    	a39 = 9;
    	a174 = 8;
    	a26 = 4;
    	a2 = 5;
    	a98 = 8; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2461\n");

    if((((a112 == 32 && (a30 == 32 && a22 == 8)) && a144 == 32) && ((a37 == 9 && ( cf==1  && (input == 10))) && a180 == 32))) {
printf("POINT: 2462\n");
    	cf = 0;
    	a135 = 15;
    	a93 = 4;
    	a115 = 34 ;
    	a154 = 34 ;
    	a104 = 34 ;
    	a169 = 34 ;
    	a32 = 34 ;
    	a20 = 5;
    	a180 = 34 ;
    	a90 = 34 ;
    	a200 = 34 ;
    	a128 = 3;
    	a179 = 34 ;
    	a40 = 33 ;
    	a167 = 3;
    	a125 = 34 ;
    	a157 = 6; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm227(int input) {
printf("POINT: 2463\n");

    if(((a193 == 8 && (a25 == 5 && (a167 == 2 && (a140 == 5 && a115 == 32)))) && (( cf==1  && (input == 5)) && a97 == 4))) {
printf("POINT: 2464\n");
    	cf = 0;
    	a115 = 34 ;
    	a53 = 34 ;
    	a121 = 34 ;
    	a152 = 10;
    	a179 = 34 ;
    	a100 = 32 ;
    	a94 = 36 ;
    	a51 = 34 ;
    	a41 = 34 ;
    	a140 = 6;
    	a97 = 5;
    	a200 = 34 ;
    	a26 = 4;
    	a135 = 12; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2465\n");

    if((((a152 == 9 && (a115 == 32 && (( cf==1  && (input == 9)) && a165 == 32))) && a131 == 10) && (a32 == 32 && a20 == 4))) {
printf("POINT: 2466\n");
    	cf = 0;
    	a41 = 34 ;
    	a140 = 6;
    	a51 = 34 ;
    	a94 = 36 ;
    	a152 = 10;
    	a121 = 34 ;
    	a26 = 4;
    	a179 = 34 ;
    	a115 = 34 ;
    	a97 = 5;
    	a200 = 34 ;
    	a100 = 32 ;
    	a53 = 34 ;
    	a135 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm228(int input) {
printf("POINT: 2467\n");

    if((((input == 4) &&  cf==1 ) && (a81 == 11 && (((a39 == 8 && (a104 == 32 && a125 == 32)) && a95 == 9) && a45 == 32)))) {
printf("POINT: 2468\n");
    	cf = 0;
    	a2 = 4;
    	a65 = 10;
    	a146 = 34 ;
    	a53 = 34 ;
    	a187 = 5;
    	a184 = 7;
    	a101 = 34 ;
    	a45 = 32 ;
    	a81 = 12;
    	a93 = 3;
    	a41 = 34 ;
    	a109 = 34 ;
    	a193 = 8;
    	a32 = 32 ;
    	a30 = 32 ;
    	a120 = 6;
    	a37 = 10;
    	a134 = 11;
    	a46 = 34 ;
    	a112 = 34 ;
    	a140 = 6;
    	a179 = 34 ;
    	a25 = 5;
    	a152 = 10;
    	a119 = 34 ;
    	a88 = 32 ;
    	a20 = 4;
    	a103 = 32 ;
    	a39 = 9;
    	a200 = 35 ;
    	a17 = 34 ;
    	a68 = 4;
    	a34 = 32 ;
    	a77 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2469\n");

    if((((a121 == 32 && (a79 == 6 && ( cf==1  && (input == 10)))) && a167 == 2) && ((a51 == 32 && a152 == 9) && a153 == 4))) {
printf("POINT: 2470\n");
    	cf = 0;
    	a134 = 16;
    	a140 = 6;
    	a174 = 7;
    	a28 = 10;
    	a25 = 5;
    	a112 = 32 ;
    	a119 = 33 ;
    	a95 = 9;
    	a167 = 2;
    	a200 = 35 ;
    	a160 = 32 ;
    	a184 = 5;
    	a56 = 9;
    	a109 = 32 ;
    	a16 = 10;
    	a69 = 32 ;
    	a2 = 4;
    	a84 = 32 ;
    	a39 = 8;
    	a26 = 3;
    	a152 = 8;
    	a3 = 32 ;
    	a125 = 33 ;
    	a53 = 32 ;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2471\n");

    if((( cf==1  && (input == 3)) && (a160 == 32 && ((a101 == 32 && ((a154 == 32 && a118 == 32) && a196 == 6)) && a51 == 32)))) {
printf("POINT: 2472\n");
    	cf = 0;
    	a89 = 36 ; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2473\n");

    if(((a25 == 5 && (a193 == 8 && (a16 == 10 && (a56 == 9 && a53 == 32)))) && (( cf==1  && (input == 1)) && a110 == 6))) {
printf("POINT: 2474\n");
    	cf = 0;
    	a125 = 34 ;
    	a97 = 5;
    	a104 = 34 ;
    	a187 = 5;
    	a26 = 4;
    	a137 = 34 ;
    	a110 = 7;
    	a153 = 5;
    	a93 = 4;
    	a41 = 34 ;
    	a152 = 10;
    	a158 = 7;
    	a160 = 34 ;
    	a180 = 34 ;
    	a167 = 3;
    	a37 = 10;
    	a109 = 34 ;
    	a184 = 7;
    	a25 = 6;
    	a32 = 34 ;
    	a118 = 34 ;
    	a53 = 34 ;
    	a48 = 34 ;
    	a169 = 34 ;
    	a127 = 8;
    	a15 = 11;
    	a64 = 10; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm229(int input) {
printf("POINT: 2475\n");

    if((a53 == 32 && (((((((input == 4) &&  cf==1 ) && a184 == 6) && a167 == 2) && a101 == 32) && a179 == 32) && a55 == 32))) {
printf("POINT: 2476\n");
    	cf = 0;
    	a158 = 7;
    	a42 = 35 ;
    	a64 = 11; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2477\n");

    if((((a121 == 32 && a28 == 10) && a65 == 10) && (a115 == 32 && ((((input == 10) &&  cf==1 ) && a34 == 32) && a93 == 3)))) {
printf("POINT: 2478\n");
    	cf = 0;
    	a187 = 3;
    	a90 = 34 ;
    	a110 = 5;
    	a112 = 33 ;
    	a68 = 4;
    	a120 = 5;
    	a127 = 8;
    	a174 = 7;
    	a81 = 10;
    	a141 = 34 ;
    	a150 = 4;
    	a12 = 33 ;
    	a39 = 7;
    	a15 = 9;
    	a176 = 4;
    	a51 = 33 ;
    	a26 = 2;
    	a88 = 34 ;
    	a131 = 9;
    	a115 = 33 ;
    	a34 = 33 ;
    	a37 = 10;
    	a97 = 5;
    	a0 = 33 ;
    	a55 = 34 ;
    	a167 = 3;
    	a165 = 34 ;
    	a53 = 33 ;
    	a144 = 33 ;
    	a146 = 34 ;
    	a160 = 33 ;
    	a20 = 3;
    	a125 = 33 ;
    	a180 = 33 ;
    	a169 = 33 ;
    	a84 = 33 ;
    	a118 = 33 ;
    	a22 = 7;
    	a17 = 33 ;
    	a32 = 33 ;
    	a105 = 12;
    	a79 = 5;
    	a56 = 8;
    	a101 = 33 ;
    	a104 = 33 ;
    	a86 = 32 ;
    	a154 = 33 ;
    	a152 = 8;
    	a178 = 33 ;
    	a41 = 33 ;
    	a95 = 8;
    	a65 = 9;
    	a179 = 34 ;
    	a184 = 5;
    	a28 = 11;
    	a45 = 33 ;
    	a140 = 6;
    	a25 = 6;
    	a69 = 33 ;
    	a77 = 9;
    	a196 = 7;
    	a30 = 33 ;
    	a200 = 33 ;
    	a93 = 2;
    	a2 = 3;
    	a126 = 3;
    	a147 = 5; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2479\n");

    if((((a112 == 32 && (( cf==1  && (input == 9)) && a69 == 32)) && a144 == 32) && (a25 == 5 && (a112 == 32 && a193 == 8)))) {
printf("POINT: 2480\n");
    	cf = 0;
    	a60 = 8;
    	a198 = 35 ;
    	a200 = 32 ;
    	a62 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2481\n");

    if(((a88 == 32 && a88 == 32) && (a48 == 32 && (((a184 == 6 && ((input == 1) &&  cf==1 )) && a26 == 3) && a32 == 32)))) {
printf("POINT: 2482\n");
    	cf = 0;
    	a158 = 10;
    	a183 = 12;
    	a7 = 6; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm230(int input) {
printf("POINT: 2483\n");

    if(((a178 == 32 && (( cf==1  && (input == 7)) && a90 == 32)) && (((a45 == 32 && a160 == 32) && a179 == 32) && a88 == 32))) {
printf("POINT: 2484\n");
    	cf = 0;
    	a39 = 9;
    	a178 = 34 ;
    	a154 = 34 ;
    	a30 = 34 ;
    	a200 = 34 ;
    	a160 = 34 ;
    	a193 = 9;
    	a95 = 10;
    	a179 = 34 ;
    	a196 = 7;
    	a20 = 5;
    	a28 = 11;
    	a0 = 34 ;
    	a26 = 4;
    	a34 = 34 ;
    	a138 = 35 ;
    	a135 = 10;
    	a45 = 34 ;
    	a93 = 4;
    	a150 = 6;
    	a167 = 3;
    	a51 = 34 ;
    	a171 = 5; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2485\n");

    if(((a196 == 6 && (a110 == 6 && (a51 == 32 && (a2 == 4 && a39 == 8)))) && (((input == 3) &&  cf==1 ) && a41 == 32))) {
printf("POINT: 2486\n");
    	cf = 0;
    	a56 = 9;
    	a146 = 32 ;
    	a93 = 4;
    	a84 = 32 ;
    	a26 = 4;
    	a46 = 32 ;
    	a41 = 34 ;
    	a105 = 11;
    	a167 = 3;
    	a128 = 2;
    	a137 = 34 ;
    	a165 = 32 ;
    	a121 = 32 ;
    	a126 = 4;
    	a120 = 6;
    	a174 = 8;
    	a22 = 8;
    	a17 = 32 ;
    	a160 = 34 ;
    	a140 = 5;
    	a158 = 7;
    	a125 = 34 ;
    	a25 = 6;
    	a79 = 6;
    	a110 = 7;
    	a64 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2487\n");

    if((((a193 == 8 && (a45 == 32 && a28 == 10)) && a88 == 32) && ((( cf==1  && (input == 5)) && a160 == 32) && a95 == 9))) {
printf("POINT: 2488\n");
    	cf = 0;
    	a84 = 34 ;
    	a69 = 32 ;
    	a79 = 7;
    	a128 = 3;
    	a101 = 32 ;
    	a146 = 34 ;
    	a15 = 11;
    	a22 = 9;
    	a109 = 34 ;
    	a153 = 5;
    	a126 = 5;
    	a37 = 10;
    	a120 = 7;
    	a140 = 6;
    	a144 = 32 ;
    	a165 = 34 ;
    	a127 = 8;
    	a97 = 5;
    	a48 = 34 ;
    	a184 = 7;
    	a174 = 9;
    	a17 = 34 ;
    	a119 = 32 ;
    	a105 = 12;
    	a112 = 32 ;
    	a118 = 34 ;
    	a121 = 34 ;
    	a32 = 34 ;
    	a169 = 34 ;
    	a56 = 10;
    	a81 = 11;
    	a46 = 34 ;
    	a104 = 34 ;
    	a180 = 34 ;
    	a53 = 34 ;
    	a16 = 10;
    	a152 = 10;
    	a55 = 32 ;
    	a187 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm231(int input) {
printf("POINT: 2489\n");

    if(((a184 == 6 && (a2 == 4 && (a146 == 32 && a68 == 3))) && (a0 == 32 && (( cf==1  && (input == 1)) && a126 == 4)))) {
printf("POINT: 2490\n");
    	cf = 0;
    	 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2491\n");

    if(((( cf==1  && (input == 7)) && a119 == 32) && (((a56 == 9 && (a30 == 32 && a112 == 32)) && a141 == 32) && a105 == 11))) {
printf("POINT: 2492\n");
    	cf = 0;
    	 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm232(int input) {
printf("POINT: 2493\n");

    if(((a81 == 11 && (a144 == 32 && ((a110 == 6 && a119 == 32) && a48 == 32))) && (((input == 4) &&  cf==1 ) && a176 == 3))) {
printf("POINT: 2494\n");
    	cf = 0;
    	a86 = 32 ;
    	a200 = 33 ;
    	a53 = 33 ;
    	a196 = 5;
    	a110 = 5;
    	a193 = 8;
    	a90 = 33 ;
    	a12 = 34 ;
    	a16 = 10;
    	a176 = 4;
    	a112 = 34 ;
    	a77 = 7;
    	a37 = 9;
    	a154 = 33 ;
    	a25 = 4;
    	a179 = 34 ;
    	a121 = 33 ;
    	a174 = 7;
    	a15 = 9;
    	a160 = 32 ;
    	a84 = 33 ;
    	a20 = 3;
    	a22 = 9;
    	a65 = 11;
    	a152 = 8;
    	a28 = 9;
    	a46 = 32 ;
    	a109 = 33 ;
    	a125 = 33 ;
    	a184 = 7;
    	a97 = 5;
    	a187 = 5;
    	a93 = 2;
    	a178 = 34 ;
    	a0 = 33 ;
    	a68 = 2;
    	a32 = 33 ;
    	a56 = 10;
    	a41 = 32 ;
    	a55 = 32 ;
    	a150 = 6;
    	a26 = 2;
    	a141 = 33 ;
    	a167 = 3;
    	a120 = 7;
    	a48 = 34 ;
    	a62 = 4; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2495\n");

    if(((((a97 == 4 && a109 == 32) && a53 == 32) && a179 == 32) && (a179 == 32 && (a187 == 4 && ( cf==1  && (input == 6)))))) {
printf("POINT: 2496\n");
    	cf = 0;
    	a120 = 6;
    	a179 = 34 ;
    	a140 = 5;
    	a41 = 32 ;
    	a153 = 5;
    	a51 = 32 ;
    	a79 = 6;
    	a95 = 9;
    	a193 = 8;
    	a45 = 32 ;
    	a101 = 32 ;
    	a69 = 32 ;
    	a17 = 32 ;
    	a46 = 32 ;
    	a154 = 32 ;
    	a184 = 6;
    	a97 = 5;
    	a2 = 5;
    	a126 = 4;
    	a56 = 10;
    	a115 = 34 ;
    	a55 = 32 ;
    	a54 = 35 ;
    	a180 = 32 ;
    	a198 = 32 ;
    	a127 = 7;
    	a200 = 32 ;
    	a12 = 34 ;
    	a68 = 3;
    	a118 = 32 ;
    	a160 = 32 ;
    	a196 = 6;
    	a16 = 10;
    	a112 = 34 ;
    	a128 = 2;
    	a90 = 32 ;
    	a104 = 32 ;
    	a25 = 6;
    	a134 = 11; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2497\n");

    if((((((a121 == 32 && a165 == 32) && a2 == 4) && a178 == 32) && a84 == 32) && (((input == 10) &&  cf==1 ) && a169 == 32))) {
printf("POINT: 2498\n");
    	cf = 0;
    	a160 = 33 ;
    	a174 = 7;
    	a150 = 4;
    	a105 = 10;
    	a48 = 33 ;
    	a131 = 9;
    	a144 = 33 ;
    	a26 = 2;
    	a15 = 9;
    	a77 = 9;
    	a121 = 33 ;
    	a0 = 33 ;
    	a200 = 33 ;
    	a41 = 33 ;
    	a88 = 33 ;
    	a56 = 8;
    	a79 = 5;
    	a110 = 5;
    	a90 = 33 ;
    	a12 = 33 ;
    	a2 = 3;
    	a196 = 5;
    	a104 = 33 ;
    	a152 = 8;
    	a46 = 33 ;
    	a154 = 33 ;
    	a179 = 33 ;
    	a167 = 1;
    	a125 = 33 ;
    	a65 = 9;
    	a81 = 10;
    	a53 = 33 ;
    	a84 = 33 ;
    	a20 = 3;
    	a34 = 33 ;
    	a32 = 33 ;
    	a22 = 7;
    	a101 = 33 ;
    	a25 = 4;
    	a86 = 32 ;
    	a147 = 1; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2499\n");

    if((((a152 == 9 && a167 == 2) && a93 == 3) && ((a28 == 10 && (a88 == 32 && ((input == 9) &&  cf==1 ))) && a150 == 5))) {
printf("POINT: 2500\n");
    	cf = 0;
    	a53 = 34 ;
    	a91 = 32 ;
    	a97 = 5;
    	a22 = 9;
    	a0 = 34 ;
    	a187 = 5;
    	a28 = 11;
    	a121 = 34 ;
    	a167 = 3;
    	a20 = 5;
    	a48 = 34 ;
    	a34 = 34 ;
    	a109 = 34 ;
    	a150 = 6;
    	a179 = 34 ;
    	a88 = 34 ;
    	a200 = 34 ;
    	a84 = 34 ;
    	a131 = 11;
    	a110 = 7;
    	a152 = 10;
    	a169 = 34 ;
    	a135 = 15;
    	a93 = 4;
    	a165 = 34 ;
    	a119 = 34 ;
    	a65 = 11;
    	a157 = 9; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm233(int input) {
printf("POINT: 2501\n");

    if((((((a115 == 32 && (((input == 3) &&  cf==1 ) && a150 == 5)) && a46 == 32) && a101 == 32) && a68 == 3) && a56 == 9)) {
printf("POINT: 2502\n");
    	cf = 0;
    	a158 = 7;
    	a125 = 34 ;
    	a41 = 34 ;
    	a110 = 7;
    	a152 = 10;
    	a137 = 34 ;
    	a53 = 34 ;
    	a167 = 3;
    	a26 = 4;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2503\n");

    if(((a152 == 9 && ( cf==1  && (input == 9))) && ((((a193 == 8 && a28 == 10) && a41 == 32) && a68 == 3) && a95 == 9))) {
printf("POINT: 2504\n");
    	cf = 0;
    	a137 = 34 ;
    	a158 = 7;
    	a53 = 34 ;
    	a26 = 4;
    	a167 = 3;
    	a41 = 34 ;
    	a110 = 7;
    	a125 = 34 ;
    	a152 = 10;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm234(int input) {
printf("POINT: 2505\n");

    if(((a187 == 4 && a125 == 32) && (a174 == 8 && ((a152 == 9 && (a2 == 4 && ((input == 4) &&  cf==1 ))) && a118 == 32)))) {
printf("POINT: 2506\n");
    	cf = 0;
printf("POINT: 2507\n");

    	if((((!(a109 == 34) || a176 == 4) || a144 == 34) && a179 == 34)) {
printf("POINT: 2508\n");
    	a68 = 4;
    	a17 = 36 ;
    	a112 = 33 ;
    	a97 = 8;
    	a184 = 5;
    	a169 = 32 ;
    	a39 = 13;
    	a174 = 10;
    	a110 = 12;
    	a28 = 16;
    	a84 = 36 ;
    	a46 = 36 ;
    	a176 = 7;
    	a144 = 36 ;
    	a45 = 34 ;
    	a41 = 35 ;
    	a178 = 33 ;
    	a32 = 33 ;
    	a81 = 17;
    	a120 = 5;
    	a154 = 36 ;
    	a43 = 34 ;
    	a104 = 33 ;
    	a152 = 9;
    	a22 = 13;
    	a95 = 11;
    	a25 = 11;
    	a179 = 36 ;
    	a26 = 5;
    	a93 = 8;
    	a160 = 32 ;
    	a153 = 6;
    	a126 = 7;
    	a146 = 35 ;
    	a90 = 34 ;
    	a2 = 9;
    	a105 = 16;
    	a140 = 11;
    	a37 = 12;
    	a158 = 9;
    	a15 = 16;
    	a69 = 36 ;
    	a51 = 32 ;
    	a136 = 9; 
    	}else {
printf("POINT: 2510\n");
    	a163 = 32 ;
    	a32 = 33 ;
    	a41 = 34 ;
    	a112 = 34 ;
    	a104 = 34 ;
    	a95 = 10;
    	a158 = 13;
    	a123 = 6;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 2511\n");

    if(((a140 == 5 && ((a20 == 4 && a68 == 3) && a30 == 32)) && (a109 == 32 && (((input == 8) &&  cf==1 ) && a193 == 8)))) {
printf("POINT: 2512\n");
    	cf = 0;
printf("POINT: 2513\n");

    	if((!(a119 == 32) && ((a138 == 32 || a190 == 16) || a19 == 36))) {
printf("POINT: 2514\n");
    	a48 = 35 ;
    	a160 = 32 ;
    	a15 = 9;
    	a179 = 32 ;
    	a187 = 8;
    	a88 = 36 ;
    	a150 = 5;
    	a169 = 35 ;
    	a20 = 7;
    	a97 = 9;
    	a46 = 36 ;
    	a165 = 33 ;
    	a110 = 10;
    	a167 = 7;
    	a34 = 35 ;
    	a135 = 15;
    	a121 = 32 ;
    	a91 = 32 ;
    	a109 = 36 ;
    	a105 = 10;
    	a55 = 33 ;
    	a196 = 10;
    	a90 = 36 ;
    	a68 = 7;
    	a93 = 7;
    	a101 = 32 ;
    	a0 = 36 ;
    	a200 = 34 ;
    	a28 = 9;
    	a154 = 35 ;
    	a180 = 32 ;
    	a152 = 8;
    	a127 = 6;
    	a65 = 10;
    	a193 = 7;
    	a128 = 4;
    	a79 = 9;
    	a53 = 35 ;
    	a131 = 16;
    	a146 = 32 ;
    	a119 = 35 ;
    	a157 = 9; 
    	}else {
printf("POINT: 2516\n");
    	a193 = 7;
    	a95 = 15;
    	a32 = 32 ;
    	a179 = 35 ;
    	a125 = 36 ;
    	a110 = 8;
    	a104 = 36 ;
    	a115 = 36 ;
    	a42 = 32 ;
    	a41 = 36 ;
    	a22 = 7;
    	a160 = 36 ;
    	a37 = 12;
    	a105 = 16;
    	a84 = 34 ;
    	a109 = 32 ;
    	a174 = 12;
    	a144 = 35 ;
    	a184 = 9;
    	a112 = 32 ;
    	a79 = 7;
    	a48 = 32 ;
    	a158 = 7;
    	a45 = 32 ;
    	a30 = 34 ;
    	a69 = 32 ;
    	a140 = 7;
    	a53 = 34 ;
    	a64 = 11;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 2517\n");

    if(((((a178 == 32 && a120 == 6) && a174 == 8) && a140 == 5) && (a17 == 32 && (a125 == 32 && ((input == 7) &&  cf==1 ))))) {
printf("POINT: 2518\n");
    	cf = 0;
    	a32 = 33 ;
    	a47 = 35 ;
    	a109 = 36 ;
    	a160 = 35 ;
    	a22 = 14;
    	a55 = 33 ;
    	a187 = 3;
    	a81 = 10;
    	a112 = 34 ;
    	a28 = 9;
    	a37 = 14;
    	a94 = 32 ;
    	a41 = 35 ;
    	a95 = 14;
    	a104 = 34 ;
    	a158 = 6; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2519\n");

    if(((a118 == 32 && (((input == 1) &&  cf==1 ) && a131 == 10)) && (((a101 == 32 && a0 == 32) && a53 == 32) && a121 == 32))) {
printf("POINT: 2520\n");
    	cf = 0;
    	a89 = 35 ;
    	a97 = 10;
    	a187 = 3;
    	a34 = 33 ;
    	a180 = 35 ;
    	a200 = 34 ;
    	a109 = 35 ;
    	a53 = 36 ;
    	a39 = 11;
    	a141 = 32 ;
    	a15 = 10;
    	a179 = 33 ;
    	a68 = 2;
    	a146 = 36 ;
    	a51 = 33 ;
    	a135 = 10;
    	a126 = 7;
    	a196 = 8;
    	a45 = 35 ;
    	a165 = 36 ;
    	a79 = 12;
    	a2 = 7;
    	a171 = 8; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2521\n");

    if(((a152 == 9 && ((a140 == 5 && ((input == 2) &&  cf==1 )) && a97 == 4)) && ((a46 == 32 && a146 == 32) && a131 == 10))) {
printf("POINT: 2522\n");
    	cf = 0;
printf("POINT: 2523\n");

    	if(a9 == 33) {
printf("POINT: 2524\n");
    	a180 = 33 ;
    	a184 = 6;
    	a169 = 33 ;
    	a187 = 8;
    	a153 = 6;
    	a84 = 34 ;
    	a97 = 8;
    	a37 = 8;
    	a109 = 35 ;
    	a95 = 8;
    	a137 = 34 ;
    	a160 = 33 ;
    	a118 = 35 ;
    	a125 = 35 ;
    	a112 = 34 ;
    	a93 = 8;
    	a15 = 13;
    	a25 = 11;
    	a110 = 6;
    	a167 = 2;
    	a152 = 9;
    	a127 = 12;
    	a48 = 33 ;
    	a22 = 13;
    	a26 = 3;
    	a158 = 7;
    	a53 = 33 ;
    	a64 = 10; 
    	}else {
printf("POINT: 2526\n");
    	a95 = 15;
    	a112 = 33 ;
    	a109 = 35 ;
    	a65 = 13;
    	a79 = 9;
    	a179 = 34 ;
    	a167 = 3;
    	a25 = 8;
    	a152 = 15;
    	a69 = 34 ;
    	a90 = 36 ;
    	a176 = 5;
    	a146 = 34 ;
    	a47 = 36 ;
    	a84 = 36 ;
    	a110 = 12;
    	a41 = 33 ;
    	a174 = 10;
    	a126 = 6;
    	a158 = 9;
    	a160 = 36 ;
    	a48 = 36 ;
    	a178 = 34 ;
    	a28 = 13;
    	a26 = 4;
    	a51 = 34 ;
    	a153 = 8;
    	a127 = 8;
    	a154 = 34 ;
    	a32 = 35 ;
    	a68 = 9;
    	a56 = 11;
    	a15 = 12;
    	a104 = 34 ;
    	a22 = 10;
    	a165 = 34 ;
    	a169 = 36 ;
    	a140 = 10;
    	a118 = 34 ;
    	a196 = 7;
    	a53 = 36 ;
    	a193 = 13;
    	a30 = 35 ;
    	a144 = 36 ;
    	a97 = 8;
    	a2 = 7;
    	a125 = 35 ;
    	a115 = 33 ;
    	a93 = 6;
    	a16 = 13;
    	a136 = 10;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2527\n");

    if((((a16 == 10 && a118 == 32) && a30 == 32) && (a20 == 4 && (a88 == 32 && (((input == 3) &&  cf==1 ) && a196 == 6))))) {
printf("POINT: 2528\n");
    	cf = 0;
    	a32 = 35 ;
    	a119 = 35 ;
    	a26 = 9;
    	a104 = 33 ;
    	a134 = 13;
    	a3 = 35 ;
    	a95 = 12;
    	a153 = 7;
    	a200 = 35 ;
    	a20 = 3;
    	a118 = 33 ;
    	a196 = 10;
    	a16 = 11;
    	a12 = 36 ;
    	a25 = 11;
    	a101 = 33 ;
    	a41 = 33 ;
    	a48 = 34 ;
    	a112 = 33 ;
    	a56 = 11;
    	a106 = 9; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2529\n");

    if((((a37 == 9 && a115 == 32) && a68 == 3) && (((a160 == 32 && ((input == 10) &&  cf==1 )) && a39 == 8) && a68 == 3))) {
printf("POINT: 2530\n");
    	cf = 0;
printf("POINT: 2531\n");

    	if(a68 == 5) {
printf("POINT: 2532\n");
    	a179 = 33 ;
    	a169 = 35 ;
    	a196 = 12;
    	a105 = 13;
    	a144 = 36 ;
    	a53 = 35 ;
    	a112 = 36 ;
    	a34 = 35 ;
    	a193 = 13;
    	a187 = 4;
    	a97 = 3;
    	a131 = 12;
    	a127 = 12;
    	a65 = 9;
    	a12 = 36 ;
    	a16 = 13;
    	a0 = 32 ;
    	a184 = 12;
    	a178 = 32 ;
    	a90 = 35 ;
    	a2 = 7;
    	a200 = 34 ;
    	a121 = 36 ;
    	a167 = 6;
    	a150 = 9;
    	a135 = 15;
    	a110 = 12;
    	a176 = 3;
    	a93 = 5;
    	a146 = 32 ;
    	a9 = 35 ;
    	a56 = 12;
    	a101 = 36 ;
    	a174 = 7;
    	a126 = 10;
    	a20 = 4;
    	a46 = 35 ;
    	a152 = 13;
    	a45 = 33 ;
    	a154 = 32 ;
    	a160 = 32 ;
    	a30 = 35 ;
    	a48 = 32 ;
    	a69 = 32 ;
    	a25 = 9;
    	a41 = 36 ;
    	a28 = 10;
    	a119 = 33 ;
    	a125 = 35 ;
    	a128 = 8;
    	a180 = 33 ;
    	a165 = 36 ;
    	a79 = 9;
    	a39 = 10;
    	a157 = 12; 
    	}else {
printf("POINT: 2534\n");
    	a196 = 9;
    	a118 = 33 ;
    	a34 = 32 ;
    	a165 = 32 ;
    	a179 = 33 ;
    	a95 = 13;
    	a180 = 36 ;
    	a120 = 8;
    	a115 = 33 ;
    	a150 = 7;
    	a69 = 33 ;
    	a16 = 14;
    	a17 = 33 ;
    	a39 = 11;
    	a97 = 8;
    	a146 = 33 ;
    	a167 = 5;
    	a0 = 35 ;
    	a174 = 12;
    	a32 = 35 ;
    	a26 = 5;
    	a193 = 14;
    	a187 = 7;
    	a37 = 11;
    	a98 = 13;
    	a45 = 36 ;
    	a178 = 32 ;
    	a128 = 6;
    	a135 = 14;
    	a53 = 35 ;
    	a200 = 34 ;
    	a20 = 3;
    	a64 = 9;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2535\n");

    if((((a150 == 5 && (a153 == 4 && a169 == 32)) && a126 == 4) && (a88 == 32 && (( cf==1  && (input == 6)) && a160 == 32)))) {
printf("POINT: 2536\n");
    	cf = 0;
    	a112 = 36 ;
    	a36 = 32 ;
    	a185 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2537\n");

    if((((((input == 5) &&  cf==1 ) && a28 == 10) && a176 == 3) && (a154 == 32 && (a115 == 32 && (a131 == 10 && a193 == 8))))) {
printf("POINT: 2538\n");
    	cf = 0;
    	a187 = 8;
    	a91 = 34 ;
    	a146 = 32 ;
    	a101 = 35 ;
    	a165 = 32 ;
    	a184 = 12;
    	a105 = 11;
    	a125 = 35 ;
    	a110 = 8;
    	a12 = 36 ;
    	a17 = 35 ;
    	a119 = 36 ;
    	a135 = 9;
    	a154 = 33 ;
    	a46 = 35 ;
    	a150 = 5;
    	a200 = 34 ;
    	a126 = 9;
    	a174 = 10;
    	a30 = 34 ;
    	a34 = 32 ;
    	a112 = 35 ;
    	a81 = 14;
    	a180 = 36 ;
    	a127 = 10;
    	a28 = 13;
    	a39 = 9;
    	a169 = 33 ;
    	a178 = 34 ;
    	a65 = 13;
    	a97 = 10;
    	a90 = 32 ;
    	a160 = 36 ;
    	a53 = 32 ;
    	a115 = 36 ;
    	a37 = 15;
    	a167 = 6;
    	a128 = 4;
    	a20 = 9;
    	a95 = 10;
    	a32 = 36 ;
    	a88 = 35 ;
    	a153 = 3;
    	a121 = 36 ;
    	a15 = 13;
    	a179 = 36 ;
    	a176 = 2;
    	a144 = 35 ;
    	a193 = 14;
    	a152 = 8;
    	a131 = 14;
    	a2 = 9;
    	a79 = 8;
    	a140 = 6;
    	a26 = 7;
    	a48 = 33 ;
    	a56 = 11;
    	a68 = 2;
    	a109 = 35 ;
    	a69 = 36 ;
    	a120 = 5;
    	a16 = 11;
    	a25 = 4;
    	a45 = 33 ;
    	a41 = 36 ;
    	a55 = 33 ;
    	a51 = 36 ;
    	a141 = 34 ;
    	a118 = 33 ;
    	a93 = 3;
    	a196 = 6;
    	a0 = 34 ;
    	a164 = 8; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2539\n");

    if((((a169 == 32 && ((a88 == 32 && a141 == 32) && a110 == 6)) && a12 == 32) && (((input == 9) &&  cf==1 ) && a30 == 32))) {
printf("POINT: 2540\n");
    	cf = 0;
    	a69 = 36 ;
    	a115 = 33 ;
    	a97 = 9;
    	a2 = 7;
    	a140 = 6;
    	a95 = 11;
    	a56 = 14;
    	a169 = 36 ;
    	a112 = 35 ;
    	a150 = 10;
    	a22 = 10;
    	a193 = 10;
    	a84 = 33 ;
    	a79 = 9;
    	a15 = 13;
    	a121 = 34 ;
    	a45 = 33 ;
    	a183 = 12;
    	a118 = 32 ;
    	a179 = 35 ;
    	a26 = 2;
    	a126 = 6;
    	a125 = 33 ;
    	a101 = 36 ;
    	a154 = 36 ;
    	a68 = 4;
    	a105 = 16;
    	a109 = 35 ;
    	a152 = 14;
    	a53 = 32 ;
    	a25 = 11;
    	a104 = 32 ;
    	a55 = 34 ;
    	a32 = 36 ;
    	a158 = 10;
    	a41 = 34 ;
    	a120 = 7;
    	a174 = 10;
    	a90 = 34 ;
    	a184 = 12;
    	a144 = 33 ;
    	a110 = 9;
    	a165 = 35 ;
    	a128 = 6;
    	a7 = 7; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm235(int input) {
printf("POINT: 2541\n");

    if((( cf==1  && (input == 6)) && (((a125 == 32 && ((a152 == 9 && a115 == 32) && a95 == 9)) && a152 == 9) && a141 == 32))) {
printf("POINT: 2542\n");
    	cf = 0;
    	a112 = 34 ;
    	a109 = 32 ;
    	a140 = 5;
    	a115 = 32 ;
    	a84 = 32 ;
    	a20 = 4;
    	a165 = 32 ;
    	a95 = 9;
    	a90 = 34 ;
    	a179 = 32 ;
    	a169 = 32 ;
    	a0 = 34 ;
    	a154 = 34 ;
    	a37 = 9;
    	a144 = 34 ;
    	a138 = 32 ;
    	a55 = 32 ;
    	a135 = 8;
    	a153 = 4;
    	a65 = 10;
    	a125 = 32 ;
    	a34 = 34 ;
    	a88 = 32 ;
    	a176 = 3;
    	a141 = 32 ;
    	a121 = 34 ;
    	a184 = 7;
    	a22 = 8;
    	a119 = 32 ;
    	a17 = 34 ;
    	a152 = 9;
    	a105 = 11;
    	a160 = 34 ;
    	a12 = 34 ;
    	a69 = 34 ;
    	a15 = 10;
    	a174 = 9;
    	a26 = 3;
    	a68 = 3;
    	a200 = 34 ;
    	a127 = 8;
    	a150 = 5;
    	a131 = 10;
    	a41 = 34 ;
    	a97 = 4;
    	a45 = 32 ;
    	a81 = 11;
    	a79 = 6;
    	a167 = 3;
    	a48 = 34 ;
    	a32 = 32 ;
    	a93 = 3;
    	a178 = 34 ;
    	a2 = 5;
    	a120 = 6;
    	a16 = 10;
    	a128 = 2;
    	a13 = 6; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2543\n");

    if(((a65 == 10 && (a152 == 9 && ((a127 == 7 && a178 == 32) && a84 == 32))) && (( cf==1  && (input == 10)) && a15 == 10))) {
printf("POINT: 2544\n");
    	cf = 0;
    	a90 = 33 ;
    	a37 = 10;
    	a39 = 8;
    	a45 = 33 ;
    	a184 = 7;
    	a69 = 33 ;
    	a119 = 32 ;
    	a25 = 5;
    	a128 = 3;
    	a118 = 32 ;
    	a158 = 13;
    	a180 = 32 ;
    	a53 = 32 ;
    	a56 = 9;
    	a163 = 33 ;
    	a112 = 34 ;
    	a193 = 8;
    	a28 = 10;
    	a32 = 34 ;
    	a6 = 8; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2545\n");

    if(((((a34 == 32 && ( cf==1  && (input == 9))) && a154 == 32) && a81 == 11) && ((a144 == 32 && a174 == 8) && a160 == 32))) {
printf("POINT: 2546\n");
    	cf = 0;
    	a93 = 3;
    	a46 = 32 ;
    	a45 = 32 ;
    	a179 = 32 ;
    	a125 = 32 ;
    	a104 = 32 ;
    	a56 = 9;
    	a187 = 4;
    	a48 = 32 ;
    	a53 = 32 ;
    	a101 = 34 ;
    	a32 = 32 ;
    	a146 = 34 ;
    	a54 = 35 ;
    	a28 = 11;
    	a20 = 4;
    	a65 = 10;
    	a154 = 32 ;
    	a69 = 34 ;
    	a118 = 32 ;
    	a84 = 32 ;
    	a25 = 5;
    	a90 = 34 ;
    	a37 = 9;
    	a141 = 32 ;
    	a88 = 32 ;
    	a152 = 9;
    	a180 = 32 ;
    	a30 = 34 ;
    	a131 = 10;
    	a95 = 9;
    	a196 = 6;
    	a119 = 32 ;
    	a169 = 32 ;
    	a17 = 34 ;
    	a200 = 32 ;
    	a193 = 9;
    	a127 = 7;
    	a198 = 32 ;
    	a112 = 34 ;
    	a115 = 32 ;
    	a167 = 2;
    	a120 = 6;
    	a51 = 32 ;
    	a39 = 8;
    	a126 = 4;
    	a128 = 2;
    	a2 = 4;
    	a110 = 6;
    	a12 = 32 ;
    	a184 = 7;
    	a41 = 34 ;
    	a134 = 15; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm236(int input) {
printf("POINT: 2547\n");

    if((((a125 == 32 && (a2 == 4 && ((input == 3) &&  cf==1 ))) && a32 == 32) && ((a141 == 32 && a16 == 10) && a120 == 6))) {
printf("POINT: 2548\n");
    	cf = 0;
    	a89 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2549\n");

    if((((a131 == 10 && (a15 == 10 && a109 == 32)) && a90 == 32) && ((a127 == 7 && ( cf==1  && (input == 7))) && a127 == 7))) {
printf("POINT: 2550\n");
    	cf = 0;
    	a200 = 32 ;
    	a60 = 8;
    	a198 = 35 ;
    	a62 = 10; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm237(int input) {
printf("POINT: 2551\n");

    if((((a20 == 4 && (a97 == 4 && a169 == 32)) && a109 == 32) && ((((input == 4) &&  cf==1 ) && a37 == 9) && a127 == 7))) {
printf("POINT: 2552\n");
    	cf = 0;
    	a109 = 33 ;
    	a110 = 5;
    	a32 = 33 ;
    	a193 = 8;
    	a121 = 33 ;
    	a30 = 33 ;
    	a126 = 3;
    	a200 = 33 ;
    	a176 = 3;
    	a81 = 10;
    	a104 = 33 ;
    	a174 = 7;
    	a86 = 32 ;
    	a79 = 6;
    	a88 = 33 ;
    	a187 = 5;
    	a53 = 33 ;
    	a120 = 5;
    	a77 = 11;
    	a118 = 32 ;
    	a152 = 8;
    	a144 = 33 ;
    	a153 = 3;
    	a90 = 33 ;
    	a180 = 33 ;
    	a51 = 33 ;
    	a28 = 10;
    	a179 = 33 ;
    	a17 = 33 ;
    	a165 = 33 ;
    	a15 = 9;
    	a154 = 33 ;
    	a95 = 8;
    	a45 = 33 ;
    	a65 = 9;
    	a178 = 32 ;
    	a119 = 32 ;
    	a115 = 32 ;
    	a160 = 34 ;
    	a48 = 32 ;
    	a125 = 33 ;
    	a69 = 33 ;
    	a68 = 3;
    	a146 = 33 ;
    	a184 = 6;
    	a98 = 13; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2553\n");

    if((((a90 == 32 && ( cf==1  && (input == 1))) && a125 == 32) && (a34 == 32 && (a120 == 6 && (a110 == 6 && a160 == 32))))) {
printf("POINT: 2554\n");
    	cf = 0;
    	a65 = 10;
    	a134 = 10;
    	a39 = 8;
    	a104 = 32 ;
    	a115 = 32 ;
    	a2 = 4;
    	a150 = 5;
    	a169 = 32 ;
    	a69 = 32 ;
    	a45 = 32 ;
    	a17 = 32 ;
    	a53 = 32 ;
    	a105 = 11;
    	a146 = 32 ;
    	a46 = 32 ;
    	a187 = 4;
    	a193 = 8;
    	a144 = 32 ;
    	a51 = 32 ;
    	a121 = 32 ;
    	a196 = 6;
    	a81 = 11;
    	a68 = 3;
    	a35 = 35 ;
    	a32 = 32 ;
    	a15 = 10;
    	a200 = 35 ;
    	a164 = 10; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2555\n");

    if(((a41 == 32 && ((a174 == 8 && a110 == 6) && a150 == 5)) && (a28 == 10 && (a55 == 32 && ( cf==1  && (input == 5)))))) {
printf("POINT: 2556\n");
    	cf = 0;
    	a193 = 8;
    	a45 = 32 ;
    	a68 = 3;
    	a54 = 33 ;
    	a69 = 32 ;
    	a17 = 32 ;
    	a15 = 10;
    	a200 = 35 ;
    	a115 = 32 ;
    	a84 = 32 ;
    	a119 = 32 ;
    	a144 = 32 ;
    	a104 = 32 ;
    	a28 = 10;
    	a152 = 9;
    	a81 = 11;
    	a125 = 32 ;
    	a26 = 3;
    	a187 = 4;
    	a53 = 32 ;
    	a146 = 32 ;
    	a169 = 32 ;
    	a32 = 32 ;
    	a111 = 35 ;
    	a121 = 32 ;
    	a134 = 17; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2557\n");

    if(((a88 == 32 && (a22 == 8 && (a39 == 8 && a37 == 9))) && ((((input == 9) &&  cf==1 ) && a30 == 32) && a39 == 8))) {
printf("POINT: 2558\n");
    	cf = 0;
    	a179 = 34 ;
    	a26 = 4;
    	a51 = 34 ;
    	a97 = 5;
    	a153 = 5;
    	a180 = 34 ;
    	a125 = 34 ;
    	a112 = 34 ;
    	a135 = 10;
    	a120 = 7;
    	a109 = 34 ;
    	a196 = 7;
    	a138 = 33 ;
    	a174 = 9;
    	a200 = 34 ;
    	a171 = 10; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm238(int input) {
printf("POINT: 2559\n");

    if(((((a178 == 32 && (a120 == 6 && ((input == 3) &&  cf==1 ))) && a154 == 32) && a22 == 8) && (a167 == 2 && a39 == 8))) {
printf("POINT: 2560\n");
    	cf = 0;
    	a101 = 34 ;
    	a196 = 7;
    	a169 = 32 ;
    	a17 = 32 ;
    	a41 = 32 ;
    	a120 = 6;
    	a39 = 9;
    	a187 = 5;
    	a51 = 34 ;
    	a185 = 15;
    	a58 = 4; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2561\n");

    if(((a128 == 2 && ((((input == 1) &&  cf==1 ) && a187 == 4) && a90 == 32)) && ((a84 == 32 && a105 == 11) && a93 == 3))) {
printf("POINT: 2562\n");
    	cf = 0;
printf("POINT: 2563\n");

    	if((a176 == 5 && ((!(a164 == 8) || a90 == 33) && a118 == 33))) {
printf("POINT: 2564\n");
    	a90 = 34 ;
    	a53 = 32 ;
    	a196 = 7;
    	a180 = 32 ;
    	a101 = 34 ;
    	a126 = 4;
    	a51 = 34 ;
    	a112 = 34 ;
    	a110 = 6;
    	a122 = 36 ;
    	a129 = 36 ;
    	a17 = 34 ;
    	a158 = 8; 
    	}else {
printf("POINT: 2566\n");
    	a30 = 32 ;
    	a196 = 7;
    	a22 = 9;
    	a48 = 34 ;
    	a144 = 34 ;
    	a97 = 5;
    	a29 = 33 ;
    	a37 = 10;
    	a84 = 33 ;
    	a86 = 36 ;
    	a25 = 4;
    	a118 = 33 ;
    	a125 = 33 ;
    	a153 = 5;
    	a32 = 34 ;
    	a53 = 33 ;
    	a15 = 9;
    	a81 = 12;
    	a167 = 3;
    	a187 = 5;
    	a90 = 33 ;
    	a41 = 33 ;
    	a174 = 7;
    	a179 = 33 ;
    	a101 = 34 ;
    	a39 = 9;
    	a115 = 34 ;
    	a55 = 32 ;
    	a200 = 33 ;
    	a121 = 33 ;
    	a20 = 3;
    	a65 = 11;
    	a26 = 4;
    	a128 = 3;
    	a110 = 5;
    	a56 = 8;
    	a51 = 33 ;
    	a152 = 10;
    	a79 = 7;
    	a160 = 34 ;
    	a112 = 34 ;
    	a69 = 33 ;
    	a105 = 10;
    	a127 = 6;
    	a120 = 5;
    	a16 = 11;
    	a28 = 9;
    	a165 = 33 ;
    	a154 = 34 ;
    	a109 = 34 ;
    	a150 = 6;
    	a176 = 3;
    	a17 = 34 ;
    	a141 = 33 ;
    	a68 = 2;
    	a169 = 33 ;
    	a46 = 33 ;
    	a140 = 6;
    	a95 = 8;
    	a2 = 3;
    	a104 = 33 ;
    	a45 = 33 ;
    	a123 = 6;
    	}printf("%d\n", 23);  
    } 
printf("POINT: 2567\n");

    if(((a93 == 3 && ((a17 == 32 && a101 == 32) && a81 == 11)) && ((( cf==1  && (input == 10)) && a51 == 32) && a128 == 2))) {
printf("POINT: 2568\n");
    	cf = 0;
    	a185 = 15;
    	a101 = 34 ;
    	a17 = 32 ;
    	a187 = 5;
    	a39 = 9;
    	a120 = 6;
    	a51 = 34 ;
    	a196 = 7;
    	a41 = 32 ;
    	a169 = 32 ;
    	a58 = 4; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm32(int input) {
printf("POINT: 2569\n");

    if(((a141 == 32 && ((a88 == 32 && a140 == 5) && a46 == 32)) && (a104 == 32 && ((a185 == 10 &&  cf==1 ) && a39 == 8)))) {
printf("POINT: 2570\n");
printf("POINT: 2571\n");

    	if(((a154 == 32 && (a179 == 32 && (a11 == 1 &&  cf==1 ))) && (a16 == 10 && (a115 == 32 && (a39 == 8 && a93 == 3))))) {
printf("POINT: 2572\n");
    		calculate_outputm226(input);
    	} 
    } 
printf("POINT: 2573\n");

    if((((a2 == 4 && (a121 == 32 && a120 == 6)) && a41 == 32) && (a30 == 32 && (a53 == 32 && ( cf==1  && a185 == 11))))) {
printf("POINT: 2574\n");
printf("POINT: 2575\n");

    	if((((a23 == 35 &&  cf==1 ) && a125 == 32) && ((a93 == 3 && ((a45 == 32 && a120 == 6) && a53 == 32)) && a51 == 32))) {
printf("POINT: 2576\n");
    		calculate_outputm227(input);
    	} 
    } 
printf("POINT: 2577\n");

    if(((a125 == 32 && ((a37 == 9 && (a20 == 4 && a153 == 4)) && a93 == 3)) && ((a185 == 12 &&  cf==1 ) && a41 == 32))) {
printf("POINT: 2578\n");
printf("POINT: 2579\n");

    	if((((( cf==1  && a89 == 32) && a30 == 32) && a178 == 32) && (a115 == 32 && ((a51 == 32 && a128 == 2) && a125 == 32)))) {
printf("POINT: 2580\n");
    		calculate_outputm228(input);
    	} 
printf("POINT: 2581\n");

    	if(((a26 == 3 && (a118 == 32 && ((a169 == 32 && a154 == 32) && a37 == 9))) && (( cf==1  && a89 == 36) && a15 == 10))) {
printf("POINT: 2582\n");
    		calculate_outputm229(input);
    	} 
    } 
printf("POINT: 2583\n");

    if(((a176 == 3 && (a141 == 32 && (a25 == 5 && a93 == 3))) && (a0 == 32 && ((a185 == 13 &&  cf==1 ) && a115 == 32)))) {
printf("POINT: 2584\n");
printf("POINT: 2585\n");

    	if(((((a131 == 10 && a150 == 5) && a68 == 3) && a154 == 32) && (a193 == 8 && (a30 == 32 && (a36 == 33 &&  cf==1 ))))) {
printf("POINT: 2586\n");
    		calculate_outputm230(input);
    	} 
printf("POINT: 2587\n");

    	if(((a48 == 32 && a28 == 10) && ((a65 == 10 && (a144 == 32 && (a26 == 3 && ( cf==1  && a36 == 32)))) && a115 == 32))) {
printf("POINT: 2588\n");
    		calculate_outputm231(input);
    	} 
printf("POINT: 2589\n");

    	if((((a36 == 34 &&  cf==1 ) && a22 == 8) && ((a174 == 8 && ((a56 == 9 && a165 == 32) && a119 == 32)) && a30 == 32))) {
printf("POINT: 2590\n");
    		calculate_outputm232(input);
    	} 
    } 
printf("POINT: 2591\n");

    if(((a144 == 32 && (a176 == 3 && a16 == 10)) && ((a2 == 4 && ((a185 == 14 &&  cf==1 ) && a17 == 32)) && a30 == 32))) {
printf("POINT: 2592\n");
printf("POINT: 2593\n");

    	if(((a110 == 6 && ((a70 == 33 &&  cf==1 ) && a17 == 32)) && (((a53 == 32 && a26 == 3) && a146 == 32) && a193 == 8))) {
printf("POINT: 2594\n");
    		calculate_outputm233(input);
    	} 
    } 
printf("POINT: 2595\n");

    if(((a121 == 32 && ((a48 == 32 && a140 == 5) && a141 == 32)) && (((a185 == 15 &&  cf==1 ) && a97 == 4) && a97 == 4))) {
printf("POINT: 2596\n");
printf("POINT: 2597\n");

    	if(((a169 == 32 && a2 == 4) && (a101 == 32 && ((((a58 == 2 &&  cf==1 ) && a101 == 32) && a65 == 10) && a88 == 32)))) {
printf("POINT: 2598\n");
    		calculate_outputm234(input);
    	} 
printf("POINT: 2599\n");

    	if(((( cf==1  && a58 == 4) && a88 == 32) && ((((a150 == 5 && a93 == 3) && a15 == 10) && a55 == 32) && a127 == 7))) {
printf("POINT: 2600\n");
    		calculate_outputm235(input);
    	} 
printf("POINT: 2601\n");

    	if((((a55 == 32 && a25 == 5) && a115 == 32) && (a37 == 9 && (a53 == 32 && (a69 == 32 && ( cf==1  && a58 == 8)))))) {
printf("POINT: 2602\n");
    		calculate_outputm236(input);
    	} 
    } 
printf("POINT: 2603\n");

    if(((a90 == 32 && a22 == 8) && (a196 == 6 && (((a51 == 32 && (a185 == 16 &&  cf==1 )) && a112 == 32) && a65 == 10)))) {
printf("POINT: 2604\n");
printf("POINT: 2605\n");

    	if(((((( cf==1  && a62 == 4) && a39 == 8) && a180 == 32) && a30 == 32) && (a101 == 32 && (a95 == 9 && a153 == 4)))) {
printf("POINT: 2606\n");
    		calculate_outputm237(input);
    	} 
printf("POINT: 2607\n");

    	if(((((a140 == 5 && (a20 == 4 && a131 == 10)) && a128 == 2) && a95 == 9) && (( cf==1  && a62 == 10) && a174 == 8))) {
printf("POINT: 2608\n");
    		calculate_outputm238(input);
    	} 
    } 
}
 void calculate_outputm239(int input) {
printf("POINT: 2609\n");

    if(((a160 == 32 && (a16 == 10 && (((input == 9) &&  cf==1 ) && a150 == 5))) && (a34 == 32 && (a187 == 4 && a20 == 4)))) {
printf("POINT: 2610\n");
    	cf = 0;
printf("POINT: 2611\n");

    	if((!(a129 == 32) && (a112 == 34 || (a129 == 35 || (a86 == 35 && a146 == 36))))) {
printf("POINT: 2612\n");
    	a174 = 10;
    	a150 = 4;
    	a112 = 36 ;
    	a51 = 35 ;
    	a84 = 35 ;
    	a126 = 10;
    	a95 = 12;
    	a16 = 13;
    	a22 = 11;
    	a28 = 16;
    	a90 = 33 ;
    	a37 = 14;
    	a56 = 11;
    	a176 = 6;
    	a53 = 35 ;
    	a141 = 33 ;
    	a25 = 10;
    	a32 = 35 ;
    	a154 = 35 ;
    	a184 = 11;
    	a48 = 35 ;
    	a2 = 10;
    	a196 = 7;
    	a109 = 34 ;
    	a93 = 6;
    	a160 = 35 ;
    	a118 = 35 ;
    	a110 = 12;
    	a104 = 33 ;
    	a136 = 15;
    	a158 = 9;
    	a165 = 34 ;
    	a140 = 9;
    	a45 = 33 ;
    	a101 = 35 ;
    	a39 = 10;
    	a17 = 34 ;
    	a97 = 10;
    	a65 = 12;
    	a144 = 34 ;
    	a127 = 9;
    	a152 = 8;
    	a105 = 14;
    	a30 = 36 ;
    	a61 = 7; 
    	}else {
printf("POINT: 2614\n");
    	a126 = 10;
    	a90 = 32 ;
    	a140 = 6;
    	a179 = 35 ;
    	a110 = 11;
    	a109 = 36 ;
    	a69 = 32 ;
    	a55 = 34 ;
    	a28 = 10;
    	a53 = 34 ;
    	a58 = 5;
    	a45 = 35 ;
    	a125 = 34 ;
    	a198 = 34 ;
    	a200 = 32 ;
    	a72 = 4;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2615\n");

    if((((a81 == 11 && a105 == 11) && a90 == 32) && ((a84 == 32 && (( cf==1  && (input == 3)) && a68 == 3)) && a101 == 32))) {
printf("POINT: 2616\n");
    	cf = 0;
printf("POINT: 2617\n");

    	if((a154 == 33 && (a141 == 32 || a190 == 14))) {
printf("POINT: 2618\n");
    	a30 = 36 ;
    	a109 = 36 ;
    	a39 = 7;
    	a41 = 33 ;
    	a28 = 15;
    	a68 = 4;
    	a97 = 5;
    	a146 = 35 ;
    	a88 = 34 ;
    	a119 = 34 ;
    	a167 = 3;
    	a53 = 36 ;
    	a105 = 10;
    	a35 = 33 ;
    	a17 = 36 ;
    	a193 = 11;
    	a81 = 13;
    	a174 = 12;
    	a79 = 5;
    	a115 = 35 ;
    	a128 = 7;
    	a200 = 32 ;
    	a112 = 34 ;
    	a20 = 8;
    	a22 = 7;
    	a95 = 11;
    	a45 = 35 ;
    	a16 = 16;
    	a84 = 36 ;
    	a34 = 36 ;
    	a118 = 35 ;
    	a196 = 10;
    	a127 = 8;
    	a131 = 11;
    	a198 = 34 ;
    	a179 = 36 ;
    	a125 = 33 ;
    	a169 = 33 ;
    	a55 = 35 ;
    	a126 = 3;
    	a152 = 12;
    	a26 = 8;
    	a153 = 9;
    	a140 = 8;
    	a93 = 2;
    	a12 = 33 ;
    	a141 = 34 ;
    	a32 = 34 ;
    	a120 = 11;
    	a154 = 33 ;
    	a58 = 7; 
    	}else {
printf("POINT: 2620\n");
    	a200 = 33 ;
    	a121 = 36 ;
    	a125 = 36 ;
    	a12 = 35 ;
    	a53 = 34 ;
    	a118 = 34 ;
    	a146 = 34 ;
    	a120 = 11;
    	a15 = 10;
    	a97 = 10;
    	a86 = 33 ;
    	a17 = 35 ;
    	a186 = 36 ;
    	a179 = 32 ;
    	a69 = 34 ;
    	a160 = 32 ;
    	a39 = 14;
    	a126 = 5;
    	a84 = 34 ;
    	a88 = 34 ;
    	a20 = 8;
    	a196 = 9;
    	a79 = 7;
    	a169 = 34 ;
    	a180 = 34 ;
    	a110 = 11;
    	a100 = 33 ;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2621\n");

    if((((a25 == 5 && (a146 == 32 && (a41 == 32 && a112 == 32))) && a193 == 8) && (a34 == 32 && ((input == 7) &&  cf==1 )))) {
printf("POINT: 2622\n");
    	cf = 0;
printf("POINT: 2623\n");

    	if(a118 == 33) {
printf("POINT: 2624\n");
    	a154 = 35 ;
    	a32 = 36 ;
    	a167 = 1;
    	a141 = 35 ;
    	a110 = 5;
    	a179 = 34 ;
    	a193 = 9;
    	a119 = 35 ;
    	a169 = 36 ;
    	a146 = 35 ;
    	a144 = 34 ;
    	a25 = 5;
    	a69 = 36 ;
    	a45 = 35 ;
    	a184 = 6;
    	a121 = 33 ;
    	a81 = 15;
    	a26 = 5;
    	a164 = 9;
    	a53 = 32 ;
    	a30 = 32 ;
    	a55 = 36 ;
    	a125 = 36 ;
    	a79 = 11;
    	a115 = 35 ;
    	a97 = 10;
    	a109 = 35 ;
    	a65 = 14;
    	a112 = 33 ;
    	a22 = 7;
    	a178 = 32 ;
    	a34 = 36 ;
    	a128 = 5;
    	a17 = 33 ;
    	a39 = 12;
    	a165 = 33 ;
    	a160 = 33 ;
    	a176 = 9;
    	a48 = 36 ;
    	a152 = 9;
    	a104 = 32 ;
    	a140 = 9;
    	a46 = 33 ;
    	a187 = 6;
    	a120 = 11;
    	a118 = 33 ;
    	a90 = 36 ;
    	a200 = 34 ;
    	a135 = 9;
    	a127 = 9;
    	a20 = 8;
    	a93 = 8;
    	a41 = 32 ;
    	a16 = 13;
    	a68 = 2;
    	a180 = 35 ;
    	a95 = 10;
    	a12 = 35 ;
    	a131 = 14;
    	a2 = 8;
    	a105 = 12;
    	a56 = 11;
    	a153 = 4;
    	a150 = 11;
    	a101 = 36 ;
    	a196 = 8;
    	a126 = 9;
    	a51 = 34 ;
    	a0 = 35 ;
    	a88 = 36 ;
    	a15 = 9;
    	a28 = 15;
    	a37 = 15;
    	a84 = 35 ;
    	a157 = 6; 
    	}else {
printf("POINT: 2626\n");
    	a167 = 4;
    	a152 = 13;
    	a15 = 12;
    	a135 = 14;
    	a68 = 9;
    	a178 = 36 ;
    	a25 = 7;
    	a17 = 33 ;
    	a125 = 36 ;
    	a53 = 33 ;
    	a1 = 35 ;
    	a193 = 12;
    	a45 = 33 ;
    	a22 = 7;
    	a97 = 6;
    	a187 = 9;
    	a48 = 36 ;
    	a120 = 9;
    	a41 = 36 ;
    	a32 = 33 ;
    	a169 = 35 ;
    	a144 = 32 ;
    	a160 = 36 ;
    	a90 = 35 ;
    	a69 = 36 ;
    	a140 = 7;
    	a180 = 32 ;
    	a28 = 10;
    	a55 = 36 ;
    	a88 = 35 ;
    	a128 = 6;
    	a37 = 11;
    	a20 = 8;
    	a84 = 36 ;
    	a2 = 3;
    	a119 = 35 ;
    	a153 = 8;
    	a101 = 35 ;
    	a196 = 10;
    	a30 = 33 ;
    	a81 = 11;
    	a56 = 15;
    	a176 = 2;
    	a39 = 7;
    	a126 = 9;
    	a165 = 32 ;
    	a16 = 16;
    	a146 = 36 ;
    	a200 = 34 ;
    	a95 = 13;
    	a104 = 36 ;
    	a46 = 34 ;
    	a105 = 10;
    	a26 = 8;
    	a112 = 34 ;
    	a127 = 13;
    	a98 = 12;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2627\n");

    if((((a88 == 32 && ( cf==1  && (input == 1))) && a32 == 32) && ((a167 == 2 && (a119 == 32 && a169 == 32)) && a20 == 4))) {
printf("POINT: 2628\n");
    	cf = 0;
printf("POINT: 2629\n");

    	if((a39 == 10 && ((a126 == 9 || !(a185 == 14)) && !(a72 == 2)))) {
printf("POINT: 2630\n");
    	a26 = 8;
    	a169 = 32 ;
    	a22 = 9;
    	a178 = 36 ;
    	a176 = 6;
    	a81 = 15;
    	a126 = 10;
    	a46 = 33 ;
    	a105 = 17;
    	a154 = 33 ;
    	a90 = 35 ;
    	a158 = 9;
    	a69 = 36 ;
    	a45 = 36 ;
    	a95 = 13;
    	a146 = 33 ;
    	a93 = 5;
    	a97 = 3;
    	a104 = 35 ;
    	a174 = 14;
    	a32 = 35 ;
    	a112 = 35 ;
    	a184 = 12;
    	a39 = 10;
    	a2 = 10;
    	a43 = 34 ;
    	a51 = 35 ;
    	a152 = 11;
    	a144 = 33 ;
    	a25 = 10;
    	a120 = 11;
    	a110 = 5;
    	a17 = 35 ;
    	a84 = 36 ;
    	a15 = 15;
    	a140 = 10;
    	a68 = 7;
    	a179 = 35 ;
    	a37 = 13;
    	a160 = 35 ;
    	a41 = 33 ;
    	a153 = 6;
    	a28 = 15;
    	a136 = 9; 
    	}else {
printf("POINT: 2632\n");
    	a68 = 5;
    	a152 = 14;
    	a110 = 7;
    	a25 = 9;
    	a104 = 32 ;
    	a187 = 7;
    	a97 = 8;
    	a101 = 36 ;
    	a174 = 12;
    	a20 = 9;
    	a179 = 36 ;
    	a121 = 32 ;
    	a180 = 36 ;
    	a77 = 7;
    	a120 = 5;
    	a105 = 17;
    	a56 = 13;
    	a140 = 6;
    	a178 = 36 ;
    	a112 = 36 ;
    	a86 = 32 ;
    	a176 = 7;
    	a154 = 35 ;
    	a125 = 36 ;
    	a196 = 9;
    	a32 = 34 ;
    	a22 = 7;
    	a28 = 13;
    	a84 = 32 ;
    	a167 = 4;
    	a109 = 35 ;
    	a153 = 5;
    	a12 = 33 ;
    	a53 = 34 ;
    	a141 = 35 ;
    	a15 = 16;
    	a200 = 33 ;
    	a26 = 7;
    	a127 = 11;
    	a65 = 16;
    	a93 = 6;
    	a90 = 34 ;
    	a45 = 36 ;
    	a0 = 32 ;
    	a95 = 13;
    	a126 = 8;
    	a150 = 8;
    	a146 = 33 ;
    	a17 = 32 ;
    	a69 = 36 ;
    	a184 = 10;
    	a118 = 32 ;
    	a48 = 35 ;
    	a62 = 4;
    	}printf("%d\n", 19);  
    } 
printf("POINT: 2633\n");

    if(((a88 == 32 && (a118 == 32 && a131 == 10)) && (a45 == 32 && ((((input == 8) &&  cf==1 ) && a169 == 32) && a30 == 32)))) {
printf("POINT: 2634\n");
    	cf = 0;
printf("POINT: 2635\n");

    	if((a114 == 14 && (a78 == 34 && a103 == 34))) {
printf("POINT: 2636\n");
    	a183 = 12;
    	a109 = 33 ;
    	a174 = 11;
    	a158 = 10;
    	a7 = 6; 
    	}else {
printf("POINT: 2638\n");
    	a140 = 8;
    	a184 = 12;
    	a101 = 35 ;
    	a109 = 34 ;
    	a141 = 34 ;
    	a115 = 36 ;
    	a37 = 12;
    	a95 = 13;
    	a79 = 10;
    	a55 = 36 ;
    	a22 = 12;
    	a158 = 10;
    	a97 = 7;
    	a121 = 33 ;
    	a26 = 9;
    	a46 = 33 ;
    	a152 = 10;
    	a53 = 35 ;
    	a45 = 36 ;
    	a196 = 10;
    	a118 = 35 ;
    	a30 = 36 ;
    	a81 = 13;
    	a69 = 35 ;
    	a112 = 35 ;
    	a126 = 6;
    	a144 = 36 ;
    	a174 = 14;
    	a165 = 34 ;
    	a169 = 34 ;
    	a32 = 35 ;
    	a187 = 3;
    	a153 = 5;
    	a183 = 12;
    	a154 = 35 ;
    	a56 = 8;
    	a128 = 1;
    	a7 = 5;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2639\n");

    if((a179 == 32 && (a45 == 32 && (a101 == 32 && (a196 == 6 && ((( cf==1  && (input == 4)) && a41 == 32) && a118 == 32)))))) {
printf("POINT: 2640\n");
    	cf = 0;
    	a119 = 35 ;
    	a118 = 33 ;
    	a184 = 5;
    	a127 = 9;
    	a154 = 35 ;
    	a128 = 1;
    	a25 = 7;
    	a28 = 12;
    	a187 = 4;
    	a109 = 35 ;
    	a41 = 35 ;
    	a22 = 12;
    	a160 = 32 ;
    	a104 = 33 ;
    	a153 = 9;
    	a158 = 7;
    	a51 = 35 ;
    	a48 = 33 ;
    	a2 = 5;
    	a167 = 8;
    	a180 = 36 ;
    	a46 = 33 ;
    	a174 = 10;
    	a150 = 7;
    	a105 = 12;
    	a176 = 6;
    	a15 = 9;
    	a152 = 14;
    	a56 = 8;
    	a45 = 33 ;
    	a125 = 32 ;
    	a69 = 33 ;
    	a32 = 32 ;
    	a196 = 9;
    	a144 = 34 ;
    	a64 = 9;
    	a112 = 33 ;
    	a146 = 35 ;
    	a68 = 5;
    	a179 = 33 ;
    	a140 = 7;
    	a90 = 34 ;
    	a165 = 33 ;
    	a120 = 5;
    	a115 = 33 ;
    	a193 = 12;
    	a141 = 34 ;
    	a79 = 10;
    	a97 = 3;
    	a39 = 11;
    	a13 = 5; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2641\n");

    if(((((a101 == 32 && (a45 == 32 && a144 == 32)) && a141 == 32) && a22 == 8) && (a20 == 4 && ((input == 2) &&  cf==1 )))) {
printf("POINT: 2642\n");
    	cf = 0;
printf("POINT: 2643\n");

    	if(a94 == 33) {
printf("POINT: 2644\n");
    	a84 = 36 ;
    	a152 = 10;
    	a200 = 35 ;
    	a103 = 32 ;
    	a126 = 8;
    	a134 = 11;
    	a180 = 36 ;
    	a120 = 9;
    	a110 = 11;
    	a109 = 32 ;
    	a69 = 35 ;
    	a81 = 11;
    	a187 = 10;
    	a32 = 36 ;
    	a160 = 33 ;
    	a146 = 32 ;
    	a53 = 32 ;
    	a174 = 9;
    	a65 = 10;
    	a90 = 32 ;
    	a77 = 7; 
    	}else {
printf("POINT: 2646\n");
    	a39 = 14;
    	a140 = 7;
    	a93 = 8;
    	a160 = 36 ;
    	a104 = 36 ;
    	a187 = 3;
    	a84 = 32 ;
    	a48 = 33 ;
    	a22 = 13;
    	a174 = 8;
    	a141 = 35 ;
    	a119 = 36 ;
    	a184 = 10;
    	a51 = 36 ;
    	a65 = 11;
    	a158 = 13;
    	a120 = 8;
    	a112 = 33 ;
    	a154 = 32 ;
    	a167 = 4;
    	a109 = 35 ;
    	a95 = 15;
    	a118 = 35 ;
    	a16 = 16;
    	a30 = 36 ;
    	a15 = 10;
    	a165 = 34 ;
    	a163 = 35 ;
    	a79 = 6;
    	a176 = 5;
    	a110 = 8;
    	a46 = 36 ;
    	a45 = 34 ;
    	a28 = 16;
    	a125 = 35 ;
    	a128 = 3;
    	a81 = 15;
    	a178 = 35 ;
    	a2 = 5;
    	a6 = 6;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2647\n");

    if((((a90 == 32 && ((a12 == 32 && a187 == 4) && a126 == 4)) && a140 == 5) && (((input == 6) &&  cf==1 ) && a30 == 32))) {
printf("POINT: 2648\n");
    	cf = 0;
printf("POINT: 2649\n");

    	if(((((a59 == 10 || a145 == 12) && a91 == 36) && !(a125 == 34)) || a180 == 36)) {
printf("POINT: 2650\n");
    	a81 = 12;
    	a200 = 32 ;
    	a56 = 13;
    	a25 = 5;
    	a119 = 34 ;
    	a84 = 36 ;
    	a37 = 15;
    	a115 = 36 ;
    	a146 = 36 ;
    	a127 = 6;
    	a2 = 7;
    	a97 = 8;
    	a16 = 14;
    	a15 = 16;
    	a32 = 35 ;
    	a109 = 33 ;
    	a153 = 4;
    	a55 = 33 ;
    	a140 = 8;
    	a28 = 16;
    	a120 = 5;
    	a90 = 34 ;
    	a184 = 5;
    	a112 = 34 ;
    	a3 = 32 ;
    	a93 = 7;
    	a51 = 33 ;
    	a165 = 33 ;
    	a46 = 36 ;
    	a105 = 13;
    	a167 = 7;
    	a68 = 4;
    	a39 = 13;
    	a198 = 36 ;
    	a176 = 4;
    	a131 = 9;
    	a12 = 35 ;
    	a41 = 36 ;
    	a125 = 35 ;
    	a88 = 36 ;
    	a110 = 5;
    	a174 = 14;
    	a179 = 34 ;
    	a50 = 5; 
    	}else {
printf("POINT: 2652\n");
    	a22 = 7;
    	a93 = 2;
    	a193 = 12;
    	a121 = 33 ;
    	a15 = 9;
    	a146 = 32 ;
    	a48 = 32 ;
    	a154 = 36 ;
    	a180 = 35 ;
    	a104 = 32 ;
    	a200 = 34 ;
    	a30 = 36 ;
    	a167 = 4;
    	a46 = 36 ;
    	a0 = 35 ;
    	a128 = 8;
    	a152 = 15;
    	a135 = 10;
    	a32 = 35 ;
    	a105 = 11;
    	a45 = 35 ;
    	a150 = 4;
    	a196 = 10;
    	a79 = 9;
    	a97 = 6;
    	a95 = 9;
    	a179 = 33 ;
    	a28 = 10;
    	a37 = 12;
    	a26 = 9;
    	a120 = 10;
    	a56 = 8;
    	a140 = 8;
    	a138 = 35 ;
    	a160 = 36 ;
    	a34 = 36 ;
    	a84 = 32 ;
    	a17 = 32 ;
    	a126 = 4;
    	a51 = 32 ;
    	a187 = 8;
    	a165 = 32 ;
    	a178 = 33 ;
    	a20 = 10;
    	a39 = 7;
    	a53 = 32 ;
    	a171 = 5;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2653\n");

    if(((a118 == 32 && (a37 == 9 && (a15 == 10 && ((input == 5) &&  cf==1 )))) && (a56 == 9 && (a131 == 10 && a25 == 5)))) {
printf("POINT: 2654\n");
    	cf = 0;
    	a86 = 35 ;
    	a20 = 4;
    	a198 = 33 ;
    	a37 = 13;
    	a34 = 32 ;
    	a200 = 32 ;
    	a165 = 35 ;
    	a26 = 2;
    	a109 = 35 ;
    	a174 = 10;
    	a61 = 7; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2655\n");

    if((((a37 == 9 && (a0 == 32 && (((input == 10) &&  cf==1 ) && a127 == 7))) && a88 == 32) && (a69 == 32 && a81 == 11))) {
printf("POINT: 2656\n");
    	cf = 0;
    	a27 = 36 ;
    	a55 = 34 ;
    	a144 = 34 ;
    	a105 = 15;
    	a140 = 6;
    	a34 = 36 ;
    	a187 = 7;
    	a118 = 32 ;
    	a25 = 6;
    	a121 = 34 ;
    	a127 = 8;
    	a48 = 32 ;
    	a165 = 34 ;
    	a41 = 35 ;
    	a2 = 7;
    	a150 = 7;
    	a120 = 10;
    	a179 = 34 ;
    	a153 = 7;
    	a112 = 35 ;
    	a84 = 32 ;
    	a125 = 36 ;
    	a110 = 9;
    	a26 = 5;
    	a109 = 35 ;
    	a154 = 35 ;
    	a0 = 36 ;
    	a90 = 35 ;
    	a45 = 34 ;
    	a97 = 9;
    	a86 = 34 ;
    	a141 = 36 ;
    	a101 = 34 ;
    	a56 = 14;
    	a79 = 6;
    	a69 = 34 ;
    	a93 = 6;
    	a88 = 34 ;
    	a178 = 36 ;
    	a184 = 12;
    	a119 = 34 ;
    	a115 = 35 ;
    	a160 = 32 ;
    	a95 = 11;
    	a126 = 7;
    	a200 = 33 ;
    	a51 = 34 ;
    	a46 = 34 ;
    	a176 = 5;
    	a39 = 12;
    	a169 = 32 ;
    	a193 = 9;
    	a15 = 14;
    	a128 = 6;
    	a81 = 12;
    	a196 = 11;
    	a32 = 35 ;
    	a53 = 34 ;
    	a23 = 35 ; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm240(int input) {
printf("POINT: 2657\n");

    if(((((a95 == 9 && a110 == 6) && a46 == 32) && a97 == 4) && ((a37 == 9 && ((input == 5) &&  cf==1 )) && a187 == 4))) {
printf("POINT: 2658\n");
    	cf = 0;
    	a26 = 4;
    	a152 = 10;
    	a118 = 34 ;
    	a180 = 34 ;
    	a79 = 6;
    	a169 = 34 ;
    	a25 = 6;
    	a140 = 5;
    	a178 = 32 ;
    	a165 = 32 ;
    	a30 = 32 ;
    	a120 = 6;
    	a179 = 32 ;
    	a144 = 32 ;
    	a141 = 32 ;
    	a154 = 32 ;
    	a68 = 3;
    	a121 = 32 ;
    	a81 = 11;
    	a101 = 32 ;
    	a53 = 34 ;
    	a32 = 34 ;
    	a176 = 3;
    	a48 = 34 ;
    	a184 = 7;
    	a115 = 32 ;
    	a150 = 5;
    	a15 = 11;
    	a109 = 34 ;
    	a160 = 34 ;
    	a56 = 9;
    	a167 = 3;
    	a17 = 32 ;
    	a125 = 34 ;
    	a39 = 8;
    	a126 = 4; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2659\n");

    if((((a46 == 32 && ( cf==1  && (input == 9))) && a174 == 8) && ((a93 == 3 && (a16 == 10 && a128 == 2)) && a65 == 10))) {
printf("POINT: 2660\n");
    	cf = 0;
    	a152 = 10;
    	a141 = 32 ;
    	a32 = 34 ;
    	a120 = 6;
    	a53 = 34 ;
    	a154 = 32 ;
    	a179 = 32 ;
    	a39 = 8;
    	a26 = 4;
    	a81 = 11;
    	a180 = 34 ;
    	a121 = 32 ;
    	a144 = 32 ;
    	a178 = 32 ;
    	a160 = 34 ;
    	a56 = 9;
    	a48 = 34 ;
    	a115 = 32 ;
    	a79 = 6;
    	a17 = 32 ;
    	a68 = 3;
    	a176 = 3;
    	a30 = 32 ;
    	a109 = 34 ;
    	a25 = 6;
    	a140 = 5;
    	a165 = 32 ;
    	a15 = 11;
    	a167 = 3;
    	a101 = 32 ;
    	a169 = 34 ;
    	a125 = 34 ;
    	a118 = 34 ;
    	a184 = 7;
    	a126 = 4;
    	a150 = 5; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2661\n");

    if((((a105 == 11 && ((a196 == 6 && ((input == 3) &&  cf==1 )) && a55 == 32)) && a46 == 32) && (a51 == 32 && a45 == 32))) {
printf("POINT: 2662\n");
    	cf = 0;
    	a158 = 7;
    	a37 = 10;
    	a127 = 8;
    	a41 = 34 ;
    	a110 = 7;
    	a97 = 5;
    	a153 = 5;
    	a104 = 34 ;
    	a93 = 4;
    	a137 = 34 ;
    	a187 = 5;
    	a64 = 10; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2663\n");

    if(((((input == 6) &&  cf==1 ) && a110 == 6) && (a146 == 32 && (((a28 == 10 && a104 == 32) && a146 == 32) && a22 == 8)))) {
printf("POINT: 2664\n");
    	cf = 0;
    	a165 = 32 ;
    	a30 = 32 ;
    	a120 = 6;
    	a125 = 34 ;
    	a25 = 6;
    	a144 = 32 ;
    	a141 = 32 ;
    	a15 = 11;
    	a179 = 32 ;
    	a160 = 34 ;
    	a48 = 34 ;
    	a118 = 34 ;
    	a79 = 6;
    	a68 = 3;
    	a169 = 34 ;
    	a150 = 5;
    	a184 = 7;
    	a17 = 32 ;
    	a154 = 32 ;
    	a109 = 34 ;
    	a180 = 34 ;
    	a101 = 32 ;
    	a176 = 3;
    	a115 = 32 ;
    	a121 = 32 ;
    	a32 = 34 ;
    	a178 = 32 ;
    	a140 = 5;
    	a26 = 4;
    	a167 = 3;
    	a152 = 10;
    	a53 = 34 ;
    	a56 = 9;
    	a81 = 11;
    	a126 = 4;
    	a39 = 8; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm241(int input) {
printf("POINT: 2665\n");

    if(((a121 == 32 && ((input == 4) &&  cf==1 )) && (a169 == 32 && ((a187 == 4 && (a26 == 3 && a110 == 6)) && a119 == 32)))) {
printf("POINT: 2666\n");
    	cf = 0;
    	a158 = 11;
    	a89 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2667\n");

    if(((a150 == 5 && a141 == 32) && ((a184 == 6 && (a101 == 32 && (a16 == 10 && ( cf==1  && (input == 10))))) && a55 == 32))) {
printf("POINT: 2668\n");
    	cf = 0;
    	a56 = 10;
    	a112 = 34 ;
    	a28 = 11;
    	a119 = 34 ;
    	a144 = 34 ;
    	a115 = 34 ;
    	a127 = 8;
    	a95 = 10;
    	a22 = 9;
    	a97 = 5;
    	a196 = 7;
    	a84 = 33 ;
    	a81 = 10;
    	a34 = 34 ;
    	a135 = 11;
    	a39 = 9;
    	a55 = 34 ;
    	a105 = 12;
    	a197 = 8;
    	a128 = 3;
    	a45 = 34 ;
    	a26 = 4;
    	a160 = 34 ;
    	a17 = 34 ;
    	a154 = 34 ;
    	a200 = 34 ;
    	a118 = 34 ;
    	a79 = 7;
    	a46 = 34 ;
    	a104 = 34 ;
    	a30 = 34 ;
    	a180 = 34 ;
    	a101 = 34 ;
    	a32 = 34 ;
    	a53 = 34 ;
    	a193 = 7;
    	a110 = 7;
    	a16 = 11;
    	a146 = 34 ;
    	a187 = 5;
    	a65 = 11;
    	a140 = 6;
    	a190 = 11; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2669\n");

    if(((a179 == 32 && (a56 == 9 && a93 == 3)) && (((a126 == 4 && ( cf==1  && (input == 7))) && a125 == 32) && a30 == 32))) {
printf("POINT: 2670\n");
    	cf = 0;
    	a158 = 11;
    	a89 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2671\n");

    if((((((input == 9) &&  cf==1 ) && a15 == 10) && a97 == 4) && (a104 == 32 && ((a68 == 3 && a118 == 32) && a97 == 4)))) {
printf("POINT: 2672\n");
    	cf = 0;
    	a105 = 11;
    	a120 = 6;
    	a193 = 8;
    	a165 = 32 ;
    	a17 = 32 ;
    	a160 = 32 ;
    	a144 = 32 ;
    	a112 = 32 ;
    	a22 = 8;
    	a79 = 6;
    	a140 = 5;
    	a90 = 32 ;
    	a84 = 32 ;
    	a176 = 3;
    	a128 = 2;
    	a48 = 32 ;
    	a81 = 11;
    	a65 = 10;
    	a46 = 32 ;
    	a174 = 8;
    	a167 = 2;
    	a109 = 32 ;
    	a28 = 10;
    	a115 = 32 ;
    	a32 = 32 ;
    	a127 = 7;
    	a178 = 32 ;
    	a45 = 32 ;
    	a39 = 8;
    	a51 = 32 ;
    	a154 = 32 ;
    	a152 = 9;
    	a180 = 32 ;
    	a37 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm242(int input) {
printf("POINT: 2673\n");

    if(((((a141 == 32 && a115 == 32) && a109 == 32) && a140 == 5) && ((a97 == 4 && ( cf==1  && (input == 5))) && a120 == 6))) {
printf("POINT: 2674\n");
    	cf = 0;
    	a101 = 32 ;
    	a152 = 10;
    	a127 = 8;
    	a169 = 34 ;
    	a104 = 34 ;
    	a15 = 11;
    	a126 = 5;
    	a46 = 34 ;
    	a16 = 10;
    	a32 = 34 ;
    	a146 = 34 ;
    	a119 = 32 ;
    	a84 = 34 ;
    	a165 = 34 ;
    	a37 = 10;
    	a158 = 11;
    	a140 = 6;
    	a174 = 9;
    	a120 = 7;
    	a187 = 5;
    	a121 = 34 ;
    	a112 = 32 ;
    	a97 = 5;
    	a128 = 3;
    	a53 = 34 ;
    	a153 = 5;
    	a69 = 32 ;
    	a17 = 34 ;
    	a184 = 7;
    	a118 = 34 ;
    	a55 = 32 ;
    	a36 = 33 ;
    	a180 = 34 ;
    	a48 = 34 ;
    	a22 = 9;
    	a109 = 34 ;
    	a79 = 7;
    	a81 = 11;
    	a144 = 32 ;
    	a105 = 12;
    	a56 = 10;
    	a185 = 13; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2675\n");

    if(((a144 == 32 && (((a88 == 32 && a17 == 32) && a88 == 32) && a154 == 32)) && (a15 == 10 && ((input == 7) &&  cf==1 )))) {
printf("POINT: 2676\n");
    	cf = 0;
    	a93 = 4;
    	a46 = 32 ;
    	a110 = 7;
    	a55 = 32 ;
    	a15 = 11;
    	a169 = 34 ;
    	a125 = 34 ;
    	a41 = 34 ;
    	a84 = 32 ;
    	a104 = 34 ;
    	a25 = 6;
    	a37 = 10;
    	a184 = 7;
    	a167 = 3;
    	a187 = 5;
    	a109 = 34 ;
    	a22 = 8;
    	a137 = 34 ;
    	a26 = 4;
    	a81 = 11;
    	a119 = 32 ;
    	a48 = 34 ;
    	a97 = 5;
    	a79 = 6;
    	a101 = 32 ;
    	a160 = 34 ;
    	a158 = 7;
    	a153 = 5;
    	a112 = 32 ;
    	a152 = 10;
    	a64 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2677\n");

    if(((a93 == 3 && (((input == 9) &&  cf==1 ) && a30 == 32)) && (((a56 == 9 && a115 == 32) && a140 == 5) && a93 == 3))) {
printf("POINT: 2678\n");
    	cf = 0;
    	a45 = 34 ;
    	a39 = 9;
    	a97 = 5;
    	a140 = 6;
    	a104 = 34 ;
    	a56 = 10;
    	a115 = 34 ;
    	a34 = 34 ;
    	a160 = 34 ;
    	a110 = 7;
    	a187 = 5;
    	a128 = 3;
    	a95 = 10;
    	a17 = 34 ;
    	a26 = 4;
    	a197 = 8;
    	a65 = 11;
    	a105 = 12;
    	a146 = 34 ;
    	a135 = 11;
    	a154 = 34 ;
    	a193 = 7;
    	a30 = 34 ;
    	a200 = 34 ;
    	a16 = 11;
    	a196 = 7;
    	a144 = 34 ;
    	a28 = 11;
    	a190 = 11; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm243(int input) {
printf("POINT: 2679\n");

    if(((a146 == 32 && ((a20 == 4 && a93 == 3) && a79 == 6)) && (a32 == 32 && (( cf==1  && (input == 10)) && a48 == 32)))) {
printf("POINT: 2680\n");
    	cf = 0;
    	a0 = 34 ;
    	a56 = 10;
    	a17 = 34 ;
    	a120 = 7;
    	a28 = 11;
    	a22 = 9;
    	a84 = 34 ;
    	a150 = 6;
    	a135 = 10;
    	a154 = 34 ;
    	a165 = 34 ;
    	a179 = 34 ;
    	a68 = 3;
    	a45 = 34 ;
    	a174 = 9;
    	a48 = 34 ;
    	a93 = 4;
    	a121 = 34 ;
    	a178 = 34 ;
    	a95 = 10;
    	a187 = 5;
    	a51 = 34 ;
    	a167 = 3;
    	a79 = 7;
    	a26 = 4;
    	a160 = 34 ;
    	a104 = 34 ;
    	a146 = 34 ;
    	a138 = 35 ;
    	a53 = 34 ;
    	a30 = 34 ;
    	a32 = 34 ;
    	a152 = 10;
    	a180 = 34 ;
    	a39 = 9;
    	a196 = 7;
    	a109 = 34 ;
    	a125 = 32 ;
    	a126 = 5;
    	a15 = 11;
    	a20 = 5;
    	a200 = 34 ;
    	a37 = 10;
    	a105 = 12;
    	a128 = 3;
    	a34 = 34 ;
    	a193 = 9;
    	a46 = 34 ;
    	a97 = 5;
    	a171 = 5; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2681\n");

    if((((a112 == 32 && a88 == 32) && a104 == 32) && ((a167 == 2 && (a110 == 6 && ((input == 3) &&  cf==1 ))) && a153 == 4))) {
printf("POINT: 2682\n");
    	cf = 0;
    	a95 = 8;
    	a84 = 33 ;
    	a131 = 9;
    	a69 = 33 ;
    	a32 = 33 ;
    	a200 = 32 ;
    	a198 = 34 ;
    	a20 = 3;
    	a74 = 35 ;
    	a15 = 9;
    	a112 = 33 ;
    	a58 = 4; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2683\n");

    if(((a95 == 9 && (a144 == 32 && (a84 == 32 && a128 == 2))) && (a178 == 32 && (a109 == 32 && ( cf==1  && (input == 5)))))) {
printf("POINT: 2684\n");
    	cf = 0;
    	a3 = 32 ;
    	a125 = 32 ;
    	a158 = 10;
    	a183 = 13; 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2685\n");

    if(((a32 == 32 && (((input == 7) &&  cf==1 ) && a84 == 32)) && (a28 == 10 && (a2 == 4 && (a17 == 32 && a20 == 4))))) {
printf("POINT: 2686\n");
    	cf = 0;
    	a153 = 3;
    	a126 = 3;
    	a95 = 8;
    	a37 = 8;
    	a69 = 33 ;
    	a180 = 34 ;
    	a45 = 34 ;
    	a84 = 33 ;
    	a41 = 34 ;
    	a56 = 8;
    	a25 = 4;
    	a109 = 34 ;
    	a119 = 34 ;
    	a150 = 4;
    	a15 = 9;
    	a121 = 33 ;
    	a28 = 11;
    	a88 = 33 ;
    	a169 = 33 ;
    	a152 = 10;
    	a86 = 35 ;
    	a19 = 34 ;
    	a118 = 34 ;
    	a17 = 33 ;
    	a26 = 2;
    	a53 = 33 ;
    	a68 = 4;
    	a160 = 33 ;
    	a110 = 5;
    	a178 = 33 ;
    	a46 = 33 ;
    	a65 = 11;
    	a12 = 33 ;
    	a34 = 33 ;
    	a200 = 33 ;
    	a146 = 33 ;
    	a90 = 33 ;
    	a22 = 8;
    	a104 = 34 ;
    	a105 = 12;
    	a30 = 34 ;
    	a97 = 3;
    	a1 = 33 ;
    	a140 = 4;
    	a144 = 33 ;
    	a187 = 3;
    	a120 = 5;
    	a184 = 6;
    	a128 = 1;
    	a176 = 4;
    	a196 = 5; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm244(int input) {
printf("POINT: 2687\n");

    if((((a104 == 32 && a167 == 2) && a104 == 32) && (a39 == 8 && (a93 == 3 && (a119 == 32 && ((input == 4) &&  cf==1 )))))) {
printf("POINT: 2688\n");
    	cf = 0;
    	a93 = 3;
    	a196 = 6;
    	a160 = 32 ;
    	a41 = 32 ;
    	a15 = 10;
    	a131 = 10;
    	a198 = 33 ;
    	a169 = 32 ;
    	a86 = 36 ;
    	a48 = 32 ;
    	a34 = 32 ;
    	a89 = 35 ;
    	a146 = 32 ;
    	a144 = 32 ;
    	a200 = 32 ;
    	a56 = 9; 
    	 printf("%d\n", 15);  
    } 
}
 void calculate_outputm245(int input) {
printf("POINT: 2689\n");

    if(((((((input == 1) &&  cf==1 ) && a127 == 7) && a79 == 6) && a131 == 10) && ((a68 == 3 && a105 == 11) && a84 == 32))) {
printf("POINT: 2690\n");
    	cf = 0;
    	a84 = 32 ;
    	a28 = 10;
    	a127 = 7;
    	a158 = 9;
    	a150 = 5;
    	a46 = 32 ;
    	a153 = 4;
    	a104 = 32 ;
    	a16 = 10;
    	a154 = 32 ;
    	a146 = 32 ;
    	a97 = 4;
    	a136 = 12;
    	a79 = 6;
    	a68 = 3;
    	a114 = 10; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm246(int input) {
printf("POINT: 2691\n");

    if(((a180 == 32 && ((a176 == 3 && a179 == 32) && a184 == 6)) && (a30 == 32 && (( cf==1  && (input == 3)) && a110 == 6)))) {
printf("POINT: 2692\n");
    	cf = 0;
    	a56 = 15;
    	a90 = 34 ;
    	a17 = 33 ;
    	a53 = 34 ;
    	a26 = 9;
    	a65 = 13;
    	a150 = 10;
    	a169 = 35 ;
    	a144 = 32 ;
    	a32 = 33 ;
    	a97 = 4;
    	a46 = 35 ;
    	a68 = 5;
    	a105 = 17;
    	a19 = 35 ;
    	a30 = 36 ;
    	a112 = 33 ;
    	a115 = 34 ;
    	a20 = 7;
    	a193 = 13;
    	a119 = 36 ;
    	a152 = 15;
    	a48 = 34 ;
    	a128 = 7;
    	a101 = 35 ;
    	a95 = 13;
    	a165 = 36 ;
    	a180 = 35 ;
    	a176 = 4;
    	a41 = 36 ;
    	a141 = 36 ;
    	a109 = 36 ;
    	a81 = 16;
    	a37 = 8;
    	a0 = 36 ;
    	a86 = 35 ;
    	a121 = 36 ;
    	a120 = 12;
    	a12 = 35 ;
    	a51 = 35 ;
    	a160 = 36 ;
    	a110 = 8;
    	a153 = 3;
    	a140 = 7;
    	a179 = 36 ;
    	a154 = 34 ;
    	a131 = 9;
    	a178 = 36 ;
    	a25 = 7;
    	a55 = 32 ;
    	a28 = 13;
    	a16 = 15;
    	a88 = 36 ;
    	a196 = 8;
    	a79 = 5;
    	a45 = 34 ;
    	a146 = 35 ;
    	a93 = 2;
    	a104 = 34 ;
    	a126 = 10;
    	a127 = 8;
    	a184 = 11;
    	a125 = 36 ;
    	a200 = 33 ;
    	a69 = 34 ;
    	a34 = 35 ;
    	a174 = 10;
    	a59 = 8; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2693\n");

    if((((input == 4) &&  cf==1 ) && (a65 == 10 && ((a146 == 32 && (a17 == 32 && (a150 == 5 && a68 == 3))) && a140 == 5)))) {
printf("POINT: 2694\n");
    	cf = 0;
printf("POINT: 2695\n");

    	if((!(a142 == 35) && (a42 == 36 && (a50 == 9 && !(a176 == 7))))) {
printf("POINT: 2696\n");
    	a119 = 36 ;
    	a115 = 35 ;
    	a40 = 33 ;
    	a200 = 34 ;
    	a53 = 32 ;
    	a180 = 36 ;
    	a20 = 10;
    	a135 = 15;
    	a154 = 36 ;
    	a187 = 9;
    	a179 = 36 ;
    	a17 = 32 ;
    	a146 = 36 ;
    	a176 = 5;
    	a167 = 1;
    	a125 = 33 ;
    	a128 = 2;
    	a104 = 35 ;
    	a90 = 36 ;
    	a169 = 32 ;
    	a174 = 8;
    	a93 = 6;
    	a32 = 36 ;
    	a196 = 9;
    	a157 = 6; 
    	}else {
printf("POINT: 2698\n");
    	a126 = 4;
    	a93 = 7;
    	a101 = 33 ;
    	a104 = 35 ;
    	a0 = 32 ;
    	a167 = 3;
    	a88 = 35 ;
    	a196 = 12;
    	a109 = 33 ;
    	a127 = 12;
    	a169 = 36 ;
    	a187 = 3;
    	a84 = 32 ;
    	a131 = 14;
    	a51 = 36 ;
    	a193 = 14;
    	a25 = 5;
    	a144 = 35 ;
    	a128 = 6;
    	a15 = 14;
    	a200 = 34 ;
    	a176 = 8;
    	a115 = 35 ;
    	a46 = 36 ;
    	a81 = 10;
    	a135 = 8;
    	a53 = 36 ;
    	a141 = 33 ;
    	a97 = 8;
    	a152 = 13;
    	a12 = 35 ;
    	a112 = 32 ;
    	a146 = 36 ;
    	a105 = 11;
    	a22 = 9;
    	a150 = 8;
    	a153 = 3;
    	a34 = 32 ;
    	a160 = 35 ;
    	a17 = 32 ;
    	a137 = 36 ;
    	a140 = 10;
    	a118 = 33 ;
    	a20 = 4;
    	a125 = 36 ;
    	a180 = 33 ;
    	a2 = 6;
    	a119 = 32 ;
    	a37 = 13;
    	a121 = 35 ;
    	a174 = 12;
    	a90 = 32 ;
    	a39 = 10;
    	a56 = 11;
    	a28 = 15;
    	a110 = 10;
    	a13 = 8;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2699\n");

    if((((a53 == 32 && (a153 == 4 && a17 == 32)) && a69 == 32) && (a131 == 10 && (a153 == 4 && ((input == 2) &&  cf==1 ))))) {
printf("POINT: 2700\n");
    	cf = 0;
    	a17 = 34 ;
    	a2 = 10;
    	a56 = 10;
    	a174 = 8;
    	a16 = 13;
    	a125 = 32 ;
    	a128 = 8;
    	a141 = 33 ;
    	a81 = 11;
    	a0 = 32 ;
    	a154 = 35 ;
    	a55 = 36 ;
    	a140 = 11;
    	a184 = 11;
    	a193 = 14;
    	a48 = 33 ;
    	a97 = 9;
    	a34 = 32 ;
    	a109 = 35 ;
    	a121 = 35 ;
    	a28 = 12;
    	a187 = 6;
    	a86 = 34 ;
    	a200 = 33 ;
    	a104 = 36 ;
    	a45 = 34 ;
    	a110 = 6;
    	a101 = 36 ;
    	a126 = 8;
    	a152 = 9;
    	a196 = 10;
    	a53 = 36 ;
    	a150 = 11;
    	a65 = 11;
    	a180 = 32 ;
    	a46 = 33 ;
    	a32 = 36 ;
    	a176 = 3;
    	a146 = 36 ;
    	a115 = 32 ;
    	a79 = 6;
    	a12 = 32 ;
    	a165 = 33 ;
    	a30 = 34 ;
    	a120 = 7;
    	a93 = 3;
    	a90 = 36 ;
    	a37 = 11;
    	a27 = 33 ;
    	a131 = 10;
    	a160 = 32 ;
    	a20 = 10;
    	a119 = 34 ;
    	a88 = 32 ;
    	a25 = 6;
    	a127 = 9;
    	a41 = 36 ;
    	a105 = 11;
    	a144 = 32 ;
    	a95 = 12;
    	a179 = 33 ;
    	a153 = 8;
    	a178 = 34 ;
    	a26 = 5;
    	a51 = 34 ;
    	a169 = 32 ;
    	a69 = 32 ;
    	a68 = 2;
    	a21 = 32 ; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2701\n");

    if((((a68 == 3 && a81 == 11) && a179 == 32) && (a51 == 32 && ((( cf==1  && (input == 10)) && a56 == 9) && a97 == 4)))) {
printf("POINT: 2702\n");
    	cf = 0;
    	a196 = 10;
    	a179 = 35 ;
    	a32 = 33 ;
    	a184 = 12;
    	a110 = 8;
    	a167 = 7;
    	a22 = 10;
    	a165 = 34 ;
    	a104 = 33 ;
    	a84 = 35 ;
    	a105 = 10;
    	a144 = 33 ;
    	a187 = 10;
    	a37 = 8;
    	a81 = 10;
    	a15 = 9;
    	a53 = 35 ;
    	a39 = 11;
    	a79 = 9;
    	a30 = 35 ;
    	a176 = 5;
    	a112 = 33 ;
    	a183 = 12;
    	a26 = 8;
    	a141 = 33 ;
    	a97 = 3;
    	a48 = 34 ;
    	a2 = 3;
    	a118 = 35 ;
    	a158 = 10;
    	a128 = 4;
    	a169 = 36 ;
    	a7 = 4; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2703\n");

    if((((a140 == 5 && a34 == 32) && a179 == 32) && (a125 == 32 && (a140 == 5 && (( cf==1  && (input == 1)) && a88 == 32))))) {
printf("POINT: 2704\n");
    	cf = 0;
    	a20 = 8;
    	a39 = 9;
    	a17 = 36 ;
    	a48 = 35 ;
    	a15 = 12;
    	a104 = 35 ;
    	a118 = 32 ;
    	a74 = 33 ;
    	a2 = 5;
    	a200 = 35 ;
    	a84 = 32 ;
    	a112 = 33 ;
    	a167 = 5;
    	a53 = 36 ;
    	a187 = 10;
    	a128 = 6;
    	a22 = 12;
    	a134 = 15;
    	a114 = 16; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2705\n");

    if((a153 == 4 && ((((a34 == 32 && (a178 == 32 && ((input == 7) &&  cf==1 ))) && a176 == 3) && a128 == 2) && a150 == 5))) {
printf("POINT: 2706\n");
    	cf = 0;
    	a48 = 35 ;
    	a69 = 34 ;
    	a118 = 34 ;
    	a2 = 9;
    	a167 = 5;
    	a15 = 12;
    	a200 = 35 ;
    	a82 = 36 ;
    	a193 = 9;
    	a39 = 13;
    	a22 = 9;
    	a112 = 34 ;
    	a134 = 15;
    	a196 = 6;
    	a114 = 10; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2707\n");

    if(((a53 == 32 && ((((input == 5) &&  cf==1 ) && a93 == 3) && a165 == 32)) && ((a150 == 5 && a28 == 10) && a41 == 32))) {
printf("POINT: 2708\n");
    	cf = 0;
printf("POINT: 2709\n");

    	if((!(a197 == 7) && a0 == 33)) {
printf("POINT: 2710\n");
    	a115 = 35 ;
    	a25 = 8;
    	a32 = 32 ;
    	a153 = 6;
    	a93 = 9;
    	a97 = 7;
    	a45 = 32 ;
    	a90 = 34 ;
    	a146 = 36 ;
    	a12 = 33 ;
    	a86 = 34 ;
    	a95 = 8;
    	a22 = 14;
    	a180 = 35 ;
    	a160 = 33 ;
    	a81 = 11;
    	a131 = 15;
    	a69 = 36 ;
    	a141 = 36 ;
    	a126 = 10;
    	a30 = 36 ;
    	a27 = 33 ;
    	a169 = 36 ;
    	a128 = 5;
    	a48 = 32 ;
    	a165 = 32 ;
    	a120 = 8;
    	a178 = 34 ;
    	a193 = 10;
    	a119 = 32 ;
    	a109 = 36 ;
    	a28 = 16;
    	a55 = 35 ;
    	a110 = 10;
    	a41 = 32 ;
    	a34 = 36 ;
    	a17 = 32 ;
    	a127 = 8;
    	a176 = 7;
    	a53 = 35 ;
    	a88 = 35 ;
    	a152 = 15;
    	a26 = 4;
    	a20 = 9;
    	a179 = 32 ;
    	a79 = 12;
    	a174 = 11;
    	a101 = 33 ;
    	a68 = 9;
    	a56 = 8;
    	a154 = 32 ;
    	a105 = 15;
    	a51 = 32 ;
    	a125 = 32 ;
    	a104 = 35 ;
    	a150 = 4;
    	a184 = 12;
    	a0 = 32 ;
    	a144 = 32 ;
    	a140 = 10;
    	a65 = 14;
    	a16 = 15;
    	a196 = 8;
    	a200 = 33 ;
    	a121 = 35 ;
    	a37 = 14;
    	a46 = 35 ;
    	a21 = 33 ; 
    	}else {
printf("POINT: 2712\n");
    	a179 = 36 ;
    	a158 = 7;
    	a141 = 32 ;
    	a193 = 14;
    	a45 = 32 ;
    	a140 = 11;
    	a2 = 6;
    	a184 = 6;
    	a118 = 34 ;
    	a39 = 10;
    	a112 = 35 ;
    	a196 = 8;
    	a187 = 8;
    	a22 = 9;
    	a15 = 14;
    	a167 = 3;
    	a64 = 16;
    	a48 = 35 ;
    	a146 = 36 ;
    	a119 = 33 ;
    	a84 = 33 ;
    	a189 = 16;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2713\n");

    if((((a120 == 6 && (( cf==1  && (input == 9)) && a45 == 32)) && a160 == 32) && ((a109 == 32 && a184 == 6) && a126 == 4))) {
printf("POINT: 2714\n");
    	cf = 0;
printf("POINT: 2715\n");

    	if(a86 == 33) {
printf("POINT: 2716\n");
    	a15 = 14;
    	a45 = 35 ;
    	a180 = 35 ;
    	a125 = 36 ;
    	a32 = 36 ;
    	a112 = 36 ;
    	a28 = 12;
    	a69 = 35 ;
    	a164 = 6;
    	a118 = 35 ;
    	a127 = 9;
    	a200 = 35 ;
    	a187 = 5;
    	a146 = 35 ;
    	a184 = 9;
    	a178 = 36 ;
    	a134 = 10;
    	a88 = 32 ;
    	a81 = 11;
    	a152 = 14;
    	a22 = 12;
    	a93 = 4;
    	a144 = 34 ;
    	a167 = 8;
    	a84 = 34 ;
    	a154 = 36 ;
    	a39 = 12;
    	a2 = 6;
    	a119 = 34 ;
    	a10 = 7; 
    	}else {
printf("POINT: 2718\n");
    	a140 = 9;
    	a163 = 35 ;
    	a81 = 12;
    	a79 = 12;
    	a119 = 35 ;
    	a48 = 36 ;
    	a165 = 35 ;
    	a125 = 34 ;
    	a95 = 9;
    	a154 = 34 ;
    	a104 = 35 ;
    	a15 = 15;
    	a112 = 34 ;
    	a178 = 35 ;
    	a22 = 7;
    	a2 = 6;
    	a93 = 2;
    	a176 = 9;
    	a16 = 12;
    	a187 = 10;
    	a158 = 13;
    	a28 = 15;
    	a109 = 32 ;
    	a65 = 13;
    	a39 = 9;
    	a46 = 34 ;
    	a45 = 32 ;
    	a51 = 35 ;
    	a174 = 10;
    	a167 = 7;
    	a128 = 5;
    	a160 = 36 ;
    	a110 = 9;
    	a30 = 34 ;
    	a118 = 33 ;
    	a120 = 9;
    	a141 = 36 ;
    	a184 = 5;
    	a84 = 34 ;
    	a6 = 6;
    	}printf("%d\n", 17);  
    } 
printf("POINT: 2719\n");

    if((((a196 == 6 && (a184 == 6 && a32 == 32)) && a81 == 11) && ((a56 == 9 && ( cf==1  && (input == 6))) && a152 == 9))) {
printf("POINT: 2720\n");
    	cf = 0;
    	a41 = 33 ;
    	a131 = 16;
    	a141 = 35 ;
    	a88 = 34 ;
    	a120 = 8;
    	a187 = 6;
    	a198 = 32 ;
    	a65 = 14;
    	a179 = 33 ;
    	a48 = 36 ;
    	a167 = 6;
    	a15 = 16;
    	a115 = 36 ;
    	a152 = 13;
    	a54 = 35 ;
    	a12 = 36 ;
    	a20 = 8;
    	a184 = 11;
    	a95 = 8;
    	a127 = 6;
    	a110 = 12;
    	a118 = 33 ;
    	a28 = 14;
    	a84 = 35 ;
    	a101 = 32 ;
    	a45 = 36 ;
    	a22 = 14;
    	a169 = 36 ;
    	a90 = 36 ;
    	a146 = 36 ;
    	a2 = 9;
    	a32 = 34 ;
    	a39 = 13;
    	a119 = 36 ;
    	a30 = 36 ;
    	a112 = 35 ;
    	a125 = 35 ;
    	a200 = 32 ;
    	a69 = 35 ;
    	a128 = 1;
    	a93 = 5;
    	a154 = 35 ;
    	a17 = 36 ;
    	a37 = 11;
    	a193 = 10;
    	a134 = 15; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2721\n");

    if(((a81 == 11 && (a56 == 9 && (a53 == 32 && a16 == 10))) && ((a127 == 7 && ( cf==1  && (input == 8))) && a119 == 32))) {
printf("POINT: 2722\n");
    	cf = 0;
    	a187 = 8;
    	a22 = 7;
    	a200 = 34 ;
    	a90 = 36 ;
    	a167 = 8;
    	a126 = 7;
    	a68 = 5;
    	a104 = 33 ;
    	a196 = 11;
    	a20 = 3;
    	a128 = 5;
    	a37 = 9;
    	a97 = 10;
    	a16 = 14;
    	a146 = 33 ;
    	a112 = 36 ;
    	a125 = 34 ;
    	a41 = 33 ;
    	a28 = 14;
    	a55 = 35 ;
    	a81 = 11;
    	a1 = 35 ;
    	a88 = 35 ;
    	a53 = 33 ;
    	a32 = 34 ;
    	a46 = 34 ;
    	a2 = 8;
    	a69 = 35 ;
    	a174 = 12;
    	a193 = 13;
    	a180 = 35 ;
    	a160 = 35 ;
    	a144 = 32 ;
    	a120 = 12;
    	a178 = 34 ;
    	a153 = 5;
    	a84 = 35 ;
    	a95 = 11;
    	a118 = 36 ;
    	a169 = 35 ;
    	a105 = 10;
    	a26 = 2;
    	a119 = 32 ;
    	a140 = 4;
    	a56 = 12;
    	a127 = 8;
    	a30 = 36 ;
    	a15 = 11;
    	a101 = 33 ;
    	a135 = 14;
    	a25 = 10;
    	a109 = 32 ;
    	a176 = 2;
    	a45 = 33 ;
    	a165 = 35 ;
    	a152 = 14;
    	a39 = 7;
    	a17 = 36 ;
    	a98 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm247(int input) {
printf("POINT: 2723\n");

    if((((a165 == 32 && (a55 == 32 && (a15 == 10 && a104 == 32))) && a26 == 3) && (( cf==1  && (input == 7)) && a84 == 32))) {
printf("POINT: 2724\n");
    	cf = 0;
    	a146 = 34 ;
    	a22 = 9;
    	a16 = 11;
    	a140 = 6;
    	a84 = 33 ;
    	a135 = 11;
    	a196 = 7;
    	a197 = 8;
    	a200 = 34 ;
    	a115 = 34 ;
    	a119 = 34 ;
    	a26 = 4;
    	a95 = 10;
    	a55 = 34 ;
    	a104 = 34 ;
    	a34 = 34 ;
    	a128 = 3;
    	a30 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2725\n");

    if((((a128 == 2 && (a22 == 8 && a140 == 5)) && a104 == 32) && ((((input == 6) &&  cf==1 ) && a30 == 32) && a25 == 5))) {
printf("POINT: 2726\n");
    	cf = 0;
    	a97 = 4;
    	a105 = 10;
    	a180 = 32 ;
    	a184 = 5;
    	a158 = 7;
    	a84 = 33 ;
    	a104 = 33 ;
    	a115 = 33 ;
    	a144 = 33 ;
    	a69 = 33 ;
    	a154 = 32 ;
    	a125 = 33 ;
    	a140 = 4;
    	a30 = 33 ;
    	a46 = 32 ;
    	a45 = 33 ;
    	a65 = 10;
    	a160 = 33 ;
    	a179 = 34 ;
    	a17 = 32 ;
    	a32 = 33 ;
    	a37 = 8;
    	a101 = 32 ;
    	a53 = 33 ;
    	a109 = 33 ;
    	a110 = 5;
    	a127 = 7;
    	a42 = 32 ;
    	a81 = 11;
    	a118 = 32 ;
    	a174 = 7;
    	a28 = 10;
    	a39 = 8;
    	a56 = 9;
    	a79 = 5;
    	a48 = 34 ;
    	a187 = 4;
    	a112 = 33 ;
    	a193 = 9;
    	a64 = 11; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm248(int input) {
printf("POINT: 2727\n");

    if((((((input == 3) &&  cf==1 ) && a154 == 32) && a30 == 32) && (a196 == 6 && (a140 == 5 && (a105 == 11 && a95 == 9))))) {
printf("POINT: 2728\n");
    	cf = 0;
    	a160 = 32 ;
    	a193 = 9;
    	a150 = 6;
    	a109 = 34 ;
    	a88 = 33 ;
    	a104 = 34 ;
    	a68 = 4;
    	a84 = 33 ;
    	a176 = 3;
    	a26 = 3;
    	a196 = 5;
    	a20 = 5;
    	a51 = 34 ;
    	a200 = 33 ;
    	a169 = 34 ;
    	a56 = 9;
    	a25 = 4;
    	a174 = 9;
    	a115 = 32 ;
    	a165 = 33 ;
    	a86 = 34 ;
    	a118 = 33 ;
    	a22 = 9;
    	a112 = 33 ;
    	a126 = 3;
    	a37 = 10;
    	a167 = 1;
    	a146 = 33 ;
    	a95 = 9;
    	a141 = 32 ;
    	a121 = 34 ;
    	a2 = 3;
    	a93 = 2;
    	a65 = 11;
    	a34 = 33 ;
    	a27 = 33 ;
    	a17 = 33 ;
    	a154 = 33 ;
    	a53 = 33 ;
    	a81 = 10;
    	a41 = 34 ;
    	a105 = 12;
    	a0 = 33 ;
    	a12 = 32 ;
    	a46 = 32 ;
    	a144 = 33 ;
    	a21 = 33 ;
    	a69 = 33 ;
    	a131 = 10;
    	a178 = 33 ;
    	a55 = 32 ;
    	a153 = 4;
    	a16 = 10;
    	a30 = 32 ;
    	a140 = 5;
    	a48 = 34 ;
    	a152 = 8;
    	a120 = 5;
    	a101 = 34 ;
    	a179 = 33 ;
    	a128 = 3;
    	a97 = 4;
    	a79 = 5;
    	a184 = 5; 
    	 printf("%d\n", 21);  
    } 
printf("POINT: 2729\n");

    if(((a16 == 10 && (a17 == 32 && (a20 == 4 && a34 == 32))) && (a84 == 32 && (a131 == 10 && ( cf==1  && (input == 6)))))) {
printf("POINT: 2730\n");
    	cf = 0;
    	a46 = 32 ;
    	a95 = 8;
    	a200 = 35 ;
    	a84 = 33 ;
    	a160 = 33 ;
    	a154 = 32 ;
    	a34 = 32 ;
    	a196 = 5;
    	a26 = 3;
    	a109 = 32 ;
    	a56 = 9;
    	a55 = 32 ;
    	a174 = 8;
    	a3 = 32 ;
    	a88 = 32 ;
    	a30 = 32 ;
    	a16 = 10;
    	a68 = 3;
    	a169 = 32 ;
    	a17 = 32 ;
    	a127 = 7;
    	a134 = 16;
    	a8 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm249(int input) {
printf("POINT: 2731\n");

    if(((a41 == 32 && (a110 == 6 && a178 == 32)) && (((a187 == 4 && ( cf==1  && (input == 3))) && a45 == 32) && a28 == 10))) {
printf("POINT: 2732\n");
    	cf = 0;
    	a198 = 35 ;
    	a140 = 5;
    	a84 = 32 ;
    	a200 = 32 ;
    	a141 = 32 ;
    	a184 = 6;
    	a119 = 32 ;
    	a39 = 8;
    	a196 = 6;
    	a60 = 8;
    	a62 = 10; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2733\n");

    if((((a90 == 32 && ((input == 10) &&  cf==1 )) && a118 == 32) && ((a79 == 6 && (a0 == 32 && a131 == 10)) && a88 == 32))) {
printf("POINT: 2734\n");
    	cf = 0;
    	a45 = 34 ;
    	a127 = 8;
    	a146 = 34 ;
    	a115 = 34 ;
    	a32 = 34 ;
    	a97 = 5;
    	a180 = 34 ;
    	a84 = 33 ;
    	a81 = 10;
    	a30 = 34 ;
    	a200 = 34 ;
    	a56 = 10;
    	a28 = 11;
    	a65 = 11;
    	a144 = 34 ;
    	a135 = 11;
    	a55 = 34 ;
    	a26 = 4;
    	a46 = 34 ;
    	a193 = 7;
    	a110 = 7;
    	a118 = 34 ;
    	a187 = 5;
    	a104 = 34 ;
    	a34 = 34 ;
    	a197 = 8;
    	a101 = 34 ;
    	a141 = 32 ;
    	a160 = 34 ;
    	a105 = 12;
    	a79 = 7;
    	a95 = 10;
    	a17 = 34 ;
    	a112 = 34 ;
    	a22 = 9;
    	a16 = 11;
    	a184 = 6;
    	a128 = 3;
    	a53 = 34 ;
    	a154 = 34 ;
    	a190 = 11; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2735\n");

    if(((((((input == 4) &&  cf==1 ) && a97 == 4) && a174 == 8) && a30 == 32) && ((a187 == 4 && a179 == 32) && a104 == 32))) {
printf("POINT: 2736\n");
    	cf = 0;
    	a200 = 34 ;
    	a48 = 34 ;
    	a32 = 34 ;
    	a187 = 5;
    	a109 = 34 ;
    	a15 = 11;
    	a167 = 3;
    	a144 = 34 ;
    	a127 = 8;
    	a115 = 34 ;
    	a97 = 5;
    	a152 = 10;
    	a140 = 5;
    	a164 = 6;
    	a112 = 34 ;
    	a12 = 34 ;
    	a180 = 34 ;
    	a153 = 5;
    	a125 = 34 ;
    	a25 = 6;
    	a26 = 4;
    	a39 = 8;
    	a118 = 34 ;
    	a81 = 12;
    	a0 = 34 ;
    	a84 = 32 ;
    	a93 = 4;
    	a169 = 34 ;
    	a160 = 34 ;
    	a65 = 11;
    	a34 = 34 ;
    	a41 = 34 ;
    	a37 = 10;
    	a119 = 32 ;
    	a110 = 7;
    	a135 = 9;
    	a104 = 34 ;
    	a16 = 11;
    	a53 = 34 ;
    	a150 = 6;
    	a146 = 34 ;
    	a49 = 14; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2737\n");

    if((((a146 == 32 && (a128 == 2 && a187 == 4)) && a37 == 9) && (a90 == 32 && (a126 == 4 && ( cf==1  && (input == 1)))))) {
printf("POINT: 2738\n");
    	cf = 0;
    	a45 = 34 ;
    	a146 = 34 ;
    	a158 = 7;
    	a179 = 34 ;
    	a64 = 16;
    	a189 = 16; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm250(int input) {
printf("POINT: 2739\n");

    if((((a141 == 32 && a187 == 4) && a165 == 32) && (a176 == 3 && ((((input == 9) &&  cf==1 ) && a26 == 3) && a39 == 8)))) {
printf("POINT: 2740\n");
    	cf = 0;
    	a88 = 32 ;
    	a56 = 9;
    	a16 = 10;
    	a187 = 3;
    	a127 = 7;
    	a169 = 32 ;
    	a39 = 7;
    	a17 = 32 ;
    	a51 = 33 ;
    	a200 = 35 ;
    	a28 = 9;
    	a26 = 3;
    	a68 = 3;
    	a134 = 16;
    	a15 = 9;
    	a3 = 32 ;
    	a34 = 32 ;
    	a109 = 32 ;
    	a55 = 32 ;
    	a30 = 32 ;
    	a174 = 8;
    	a154 = 32 ;
    	a95 = 8;
    	a46 = 32 ;
    	a90 = 33 ;
    	a8 = 12; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2741\n");

    if(((a34 == 32 && (a32 == 32 && ((a28 == 10 && ( cf==1  && (input == 7))) && a15 == 10))) && (a51 == 32 && a25 == 5))) {
printf("POINT: 2742\n");
    	cf = 0;
    	a200 = 33 ;
    	a104 = 32 ;
    	a180 = 32 ;
    	a37 = 9;
    	a97 = 3;
    	a128 = 2;
    	a32 = 33 ;
    	a88 = 32 ;
    	a169 = 32 ;
    	a95 = 8;
    	a144 = 32 ;
    	a81 = 10;
    	a120 = 6;
    	a153 = 3;
    	a165 = 32 ;
    	a109 = 32 ;
    	a184 = 7;
    	a146 = 34 ;
    	a126 = 4;
    	a51 = 32 ;
    	a154 = 32 ;
    	a69 = 33 ;
    	a150 = 5;
    	a48 = 32 ;
    	a101 = 32 ;
    	a34 = 32 ;
    	a140 = 4;
    	a105 = 10;
    	a41 = 32 ;
    	a77 = 5;
    	a26 = 3;
    	a115 = 33 ;
    	a178 = 33 ;
    	a93 = 3;
    	a121 = 33 ;
    	a176 = 3;
    	a79 = 6;
    	a15 = 9;
    	a174 = 7;
    	a56 = 9;
    	a131 = 10;
    	a20 = 3;
    	a28 = 9;
    	a112 = 33 ;
    	a16 = 9;
    	a127 = 7;
    	a160 = 32 ;
    	a141 = 33 ;
    	a30 = 32 ;
    	a86 = 32 ;
    	a118 = 33 ;
    	a39 = 7;
    	a68 = 3;
    	a152 = 8;
    	a25 = 5;
    	a90 = 32 ;
    	a167 = 2;
    	a0 = 32 ;
    	a179 = 34 ;
    	a187 = 3;
    	a2 = 4;
    	a12 = 32 ;
    	a53 = 33 ;
    	a145 = 7; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm33(int input) {
printf("POINT: 2743\n");

    if((((((a12 == 32 && (a62 == 5 &&  cf==1 )) && a55 == 32) && a20 == 4) && a2 == 4) && (a41 == 32 && a196 == 6))) {
printf("POINT: 2744\n");
printf("POINT: 2745\n");

    	if(((a180 == 32 && ( cf==1  && a71 == 6)) && ((a187 == 4 && ((a180 == 32 && a121 == 32) && a39 == 8)) && a152 == 9))) {
printf("POINT: 2746\n");
    		calculate_outputm239(input);
    	} 
printf("POINT: 2747\n");

    	if((((a90 == 32 && ((( cf==1  && a71 == 7) && a127 == 7) && a112 == 32)) && a84 == 32) && (a193 == 8 && a119 == 32))) {
printf("POINT: 2748\n");
    		calculate_outputm240(input);
    	} 
printf("POINT: 2749\n");

    	if(((((a71 == 10 &&  cf==1 ) && a95 == 9) && a26 == 3) && (a93 == 3 && (a16 == 10 && (a25 == 5 && a53 == 32))))) {
printf("POINT: 2750\n");
    		calculate_outputm241(input);
    	} 
    } 
printf("POINT: 2751\n");

    if(((((a169 == 32 && a65 == 10) && a153 == 4) && a48 == 32) && (a187 == 4 && (( cf==1  && a62 == 6) && a128 == 2)))) {
printf("POINT: 2752\n");
printf("POINT: 2753\n");

    	if((((a71 == 12 &&  cf==1 ) && a30 == 32) && (a193 == 8 && (a41 == 32 && (a68 == 3 && (a105 == 11 && a184 == 6)))))) {
printf("POINT: 2754\n");
    		calculate_outputm242(input);
    	} 
printf("POINT: 2755\n");

    	if(((a110 == 6 && a69 == 32) && (a196 == 6 && (a34 == 32 && ((a15 == 10 && ( cf==1  && a71 == 13)) && a41 == 32))))) {
printf("POINT: 2756\n");
    		calculate_outputm243(input);
    	} 
    } 
printf("POINT: 2757\n");

    if(((a125 == 32 && (a146 == 32 && (a25 == 5 && a154 == 32))) && (a115 == 32 && ((a62 == 7 &&  cf==1 ) && a112 == 32)))) {
printf("POINT: 2758\n");
printf("POINT: 2759\n");

    	if(((((a153 == 4 && a25 == 5) && a196 == 6) && a79 == 6) && ((a81 == 11 && (a133 == 5 &&  cf==1 )) && a128 == 2))) {
printf("POINT: 2760\n");
    		calculate_outputm244(input);
    	} 
    } 
printf("POINT: 2761\n");

    if(((a2 == 4 && (a68 == 3 && ((a62 == 8 &&  cf==1 ) && a41 == 32))) && (a88 == 32 && (a150 == 5 && a84 == 32)))) {
printf("POINT: 2762\n");
printf("POINT: 2763\n");

    	if(((a46 == 32 && ((a11 == 8 &&  cf==1 ) && a127 == 7)) && ((a97 == 4 && (a154 == 32 && a41 == 32)) && a28 == 10))) {
printf("POINT: 2764\n");
    		calculate_outputm245(input);
    	} 
    } 
printf("POINT: 2765\n");

    if((((a119 == 32 && (a16 == 10 && a115 == 32)) && a115 == 32) && ((a95 == 9 && (a62 == 9 &&  cf==1 )) && a196 == 6))) {
printf("POINT: 2766\n");
printf("POINT: 2767\n");

    	if(((a46 == 32 && (a126 == 4 && ( cf==1  && a133 == 3))) && (a95 == 9 && (a20 == 4 && (a28 == 10 && a55 == 32))))) {
printf("POINT: 2768\n");
    		calculate_outputm246(input);
    	} 
printf("POINT: 2769\n");

    	if(((a146 == 32 && (((a131 == 10 && (a133 == 7 &&  cf==1 )) && a140 == 5) && a120 == 6)) && (a153 == 4 && a16 == 10))) {
printf("POINT: 2770\n");
    		calculate_outputm247(input);
    	} 
    } 
printf("POINT: 2771\n");

    if(((a95 == 9 && a152 == 9) && (a101 == 32 && ((a115 == 32 && (( cf==1  && a62 == 10) && a34 == 32)) && a109 == 32)))) {
printf("POINT: 2772\n");
printf("POINT: 2773\n");

    	if(((a0 == 32 && (a162 == 32 &&  cf==1 )) && ((a179 == 32 && (a160 == 32 && (a141 == 32 && a55 == 32))) && a184 == 6))) {
printf("POINT: 2774\n");
    		calculate_outputm248(input);
    	} 
    } 
printf("POINT: 2775\n");

    if(((a126 == 4 && a178 == 32) && (a95 == 9 && (a154 == 32 && (a104 == 32 && (( cf==1  && a62 == 11) && a174 == 8)))))) {
printf("POINT: 2776\n");
printf("POINT: 2777\n");

    	if(((a110 == 6 && ((( cf==1  && a49 == 7) && a160 == 32) && a55 == 32)) && (a26 == 3 && (a118 == 32 && a127 == 7)))) {
printf("POINT: 2778\n");
    		calculate_outputm249(input);
    	} 
printf("POINT: 2779\n");

    	if((((a121 == 32 && a90 == 32) && a115 == 32) && (a20 == 4 && (a127 == 7 && ((a49 == 9 &&  cf==1 ) && a69 == 32))))) {
printf("POINT: 2780\n");
    		calculate_outputm250(input);
    	} 
    } 
}
 void calculate_outputm251(int input) {
printf("POINT: 2781\n");

    if(((a121 == 32 && (a12 == 32 && (((input == 7) &&  cf==1 ) && a2 == 4))) && ((a2 == 4 && a109 == 32) && a127 == 7))) {
printf("POINT: 2782\n");
    	cf = 0;
    	a97 = 4;
    	a30 = 32 ;
    	a53 = 32 ;
    	a160 = 34 ;
    	a196 = 6;
    	a84 = 33 ;
    	a101 = 32 ;
    	a28 = 10;
    	a126 = 4;
    	a56 = 9;
    	a141 = 32 ;
    	a16 = 10;
    	a45 = 32 ;
    	a152 = 9;
    	a174 = 8;
    	a110 = 5;
    	a25 = 5;
    	a104 = 32 ;
    	a22 = 8;
    	a158 = 9;
    	a105 = 11;
    	a165 = 32 ;
    	a93 = 3;
    	a2 = 4;
    	a17 = 32 ;
    	a51 = 32 ;
    	a140 = 5;
    	a150 = 5;
    	a37 = 9;
    	a48 = 32 ;
    	a118 = 32 ;
    	a144 = 32 ;
    	a176 = 3;
    	a184 = 6;
    	a32 = 32 ;
    	a112 = 32 ;
    	a95 = 9;
    	a136 = 15;
    	a65 = 9;
    	a90 = 32 ;
    	a109 = 33 ;
    	a127 = 7;
    	a154 = 32 ;
    	a39 = 8;
    	a61 = 7; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm252(int input) {
printf("POINT: 2783\n");

    if((((a169 == 32 && (a79 == 6 && a178 == 32)) && a120 == 6) && ((( cf==1  && (input == 10)) && a118 == 32) && a16 == 10))) {
printf("POINT: 2784\n");
    	cf = 0;
    	a41 = 33 ;
    	a51 = 33 ;
    	a28 = 9;
    	a0 = 34 ;
    	a90 = 32 ;
    	a32 = 33 ;
    	a125 = 33 ;
    	a160 = 34 ;
    	a84 = 33 ;
    	a179 = 33 ;
    	a48 = 33 ;
    	a86 = 32 ;
    	a200 = 33 ;
    	a2 = 5;
    	a12 = 33 ;
    	a104 = 33 ;
    	a152 = 8;
    	a34 = 34 ;
    	a30 = 33 ;
    	a112 = 32 ;
    	a174 = 7;
    	a26 = 2;
    	a95 = 8;
    	a167 = 3;
    	a15 = 9;
    	a25 = 4;
    	a144 = 33 ;
    	a193 = 9;
    	a68 = 2;
    	a110 = 5;
    	a17 = 33 ;
    	a77 = 7;
    	a128 = 2;
    	a187 = 3;
    	a178 = 34 ;
    	a53 = 33 ;
    	a141 = 33 ;
    	a39 = 9;
    	a118 = 33 ;
    	a127 = 8;
    	a153 = 3;
    	a88 = 33 ;
    	a154 = 34 ;
    	a56 = 8;
    	a140 = 4;
    	a180 = 34 ;
    	a121 = 33 ;
    	a62 = 6; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2785\n");

    if(((a153 == 4 && (a39 == 8 && ( cf==1  && (input == 1)))) && (a141 == 32 && ((a153 == 4 && a150 == 5) && a140 == 5)))) {
printf("POINT: 2786\n");
    	cf = 0;
    	a53 = 33 ;
    	a109 = 34 ;
    	a15 = 9;
    	a46 = 33 ;
    	a105 = 10;
    	a150 = 6;
    	a154 = 34 ;
    	a41 = 33 ;
    	a167 = 3;
    	a140 = 6;
    	a51 = 33 ;
    	a118 = 33 ;
    	a79 = 7;
    	a174 = 7;
    	a120 = 5;
    	a39 = 9;
    	a95 = 8;
    	a125 = 33 ;
    	a20 = 3;
    	a97 = 5;
    	a22 = 9;
    	a141 = 33 ;
    	a127 = 6;
    	a29 = 33 ;
    	a48 = 34 ;
    	a16 = 11;
    	a68 = 2;
    	a200 = 33 ;
    	a84 = 33 ;
    	a86 = 36 ;
    	a28 = 9;
    	a144 = 34 ;
    	a26 = 4;
    	a152 = 10;
    	a25 = 4;
    	a17 = 34 ;
    	a55 = 32 ;
    	a30 = 32 ;
    	a121 = 33 ;
    	a165 = 33 ;
    	a81 = 12;
    	a110 = 5;
    	a176 = 3;
    	a160 = 34 ;
    	a2 = 3;
    	a104 = 33 ;
    	a65 = 11;
    	a193 = 9;
    	a180 = 34 ;
    	a115 = 34 ;
    	a153 = 5;
    	a169 = 33 ;
    	a56 = 8;
    	a179 = 33 ;
    	a123 = 6; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2787\n");

    if(((a28 == 10 && (((a150 == 5 && a56 == 9) && a20 == 4) && a165 == 32)) && (( cf==1  && (input == 3)) && a65 == 10))) {
printf("POINT: 2788\n");
    	cf = 0;
printf("POINT: 2789\n");

    	if((((a160 == 35 && !(a182 == 32)) && !(a184 == 10)) && a153 == 5)) {
printf("POINT: 2790\n");
    	a39 = 9;
    	a118 = 34 ;
    	a28 = 11;
    	a17 = 32 ;
    	a41 = 32 ;
    	a185 = 15;
    	a25 = 6;
    	a193 = 9;
    	a120 = 6;
    	a53 = 34 ;
    	a158 = 11;
    	a180 = 34 ;
    	a56 = 10;
    	a169 = 32 ;
    	a58 = 4; 
    	}else {
printf("POINT: 2792\n");
    	a160 = 34 ;
    	a26 = 2;
    	a128 = 2;
    	a30 = 33 ;
    	a154 = 34 ;
    	a32 = 33 ;
    	a39 = 9;
    	a121 = 33 ;
    	a86 = 32 ;
    	a34 = 34 ;
    	a68 = 2;
    	a28 = 9;
    	a141 = 33 ;
    	a187 = 3;
    	a174 = 7;
    	a84 = 33 ;
    	a51 = 33 ;
    	a112 = 32 ;
    	a12 = 33 ;
    	a25 = 4;
    	a127 = 8;
    	a77 = 7;
    	a53 = 33 ;
    	a17 = 33 ;
    	a118 = 33 ;
    	a104 = 33 ;
    	a167 = 3;
    	a56 = 8;
    	a125 = 33 ;
    	a153 = 3;
    	a200 = 33 ;
    	a90 = 32 ;
    	a110 = 5;
    	a2 = 5;
    	a48 = 33 ;
    	a144 = 33 ;
    	a15 = 9;
    	a152 = 8;
    	a41 = 33 ;
    	a88 = 33 ;
    	a140 = 4;
    	a180 = 34 ;
    	a0 = 34 ;
    	a193 = 9;
    	a179 = 33 ;
    	a178 = 34 ;
    	a95 = 8;
    	a62 = 6;
    	}printf("%d\n", 21);  
    } 
}
 void calculate_outputm253(int input) {
printf("POINT: 2793\n");

    if(((a112 == 32 && ((a176 == 3 && (a15 == 10 && a46 == 32)) && a16 == 10)) && (((input == 3) &&  cf==1 ) && a187 == 4))) {
printf("POINT: 2794\n");
    	cf = 0;
    	a86 = 36 ;
    	a17 = 32 ;
    	a32 = 36 ;
    	a167 = 4;
    	a45 = 36 ;
    	a187 = 7;
    	a68 = 8;
    	a15 = 16;
    	a79 = 6;
    	a69 = 34 ;
    	a46 = 34 ;
    	a109 = 36 ;
    	a37 = 14;
    	a184 = 11;
    	a112 = 35 ;
    	a125 = 35 ;
    	a101 = 32 ;
    	a127 = 12;
    	a41 = 35 ;
    	a169 = 34 ;
    	a90 = 34 ;
    	a200 = 33 ;
    	a53 = 35 ;
    	a120 = 12;
    	a110 = 11;
    	a39 = 14;
    	a95 = 11;
    	a84 = 36 ;
    	a126 = 4;
    	a65 = 14;
    	a104 = 36 ;
    	a176 = 7;
    	a25 = 11;
    	a193 = 8;
    	a2 = 10;
    	a115 = 35 ;
    	a196 = 9;
    	a16 = 14;
    	a93 = 8;
    	a154 = 32 ;
    	a28 = 10;
    	a105 = 14;
    	a29 = 34 ;
    	a30 = 34 ;
    	a174 = 11;
    	a179 = 34 ;
    	a144 = 36 ;
    	a48 = 35 ;
    	a118 = 33 ;
    	a150 = 10;
    	a160 = 35 ;
    	a162 = 33 ; 
    	 printf("%d\n", 19);  
    } 
printf("POINT: 2795\n");

    if((((a41 == 32 && (a56 == 9 && a110 == 6)) && a41 == 32) && ((a28 == 10 && ((input == 10) &&  cf==1 )) && a84 == 32))) {
printf("POINT: 2796\n");
    	cf = 0;
printf("POINT: 2797\n");

    	if((a198 == 32 && (a133 == 5 || !(a43 == 36)))) {
printf("POINT: 2798\n");
    	a169 = 33 ;
    	a179 = 32 ;
    	a127 = 8;
    	a200 = 33 ;
    	a120 = 11;
    	a115 = 34 ;
    	a126 = 10;
    	a184 = 8;
    	a79 = 8;
    	a34 = 36 ;
    	a110 = 11;
    	a30 = 36 ;
    	a97 = 5;
    	a160 = 36 ;
    	a84 = 32 ;
    	a28 = 12;
    	a0 = 33 ;
    	a45 = 34 ;
    	a65 = 10;
    	a68 = 9;
    	a95 = 15;
    	a109 = 36 ;
    	a101 = 34 ;
    	a154 = 33 ;
    	a88 = 34 ;
    	a165 = 34 ;
    	a12 = 36 ;
    	a105 = 13;
    	a90 = 36 ;
    	a93 = 2;
    	a16 = 16;
    	a25 = 7;
    	a51 = 33 ;
    	a86 = 32 ;
    	a77 = 5;
    	a128 = 1;
    	a53 = 36 ;
    	a146 = 35 ;
    	a32 = 34 ;
    	a187 = 10;
    	a46 = 34 ;
    	a2 = 3;
    	a22 = 14;
    	a20 = 8;
    	a81 = 15;
    	a153 = 8;
    	a150 = 4;
    	a104 = 36 ;
    	a131 = 11;
    	a167 = 7;
    	a119 = 36 ;
    	a180 = 34 ;
    	a144 = 33 ;
    	a141 = 34 ;
    	a112 = 34 ;
    	a15 = 10;
    	a56 = 12;
    	a37 = 12;
    	a55 = 34 ;
    	a178 = 34 ;
    	a39 = 14;
    	a121 = 32 ;
    	a125 = 36 ;
    	a41 = 35 ;
    	a176 = 8;
    	a48 = 35 ;
    	a69 = 36 ;
    	a26 = 5;
    	a193 = 12;
    	a174 = 8;
    	a145 = 7; 
    	}else {
printf("POINT: 2800\n");
    	a200 = 34 ;
    	a169 = 36 ;
    	a119 = 36 ;
    	a39 = 7;
    	a150 = 7;
    	a22 = 9;
    	a110 = 7;
    	a16 = 11;
    	a56 = 13;
    	a84 = 35 ;
    	a167 = 6;
    	a2 = 5;
    	a81 = 15;
    	a88 = 35 ;
    	a118 = 32 ;
    	a79 = 9;
    	a32 = 36 ;
    	a78 = 33 ;
    	a127 = 6;
    	a121 = 35 ;
    	a30 = 36 ;
    	a37 = 13;
    	a25 = 6;
    	a187 = 10;
    	a55 = 32 ;
    	a90 = 33 ;
    	a115 = 35 ;
    	a126 = 8;
    	a17 = 33 ;
    	a178 = 35 ;
    	a69 = 33 ;
    	a128 = 7;
    	a135 = 10;
    	a152 = 13;
    	a196 = 10;
    	a174 = 9;
    	a41 = 36 ;
    	a20 = 8;
    	a184 = 11;
    	a180 = 32 ;
    	a0 = 33 ;
    	a105 = 13;
    	a51 = 35 ;
    	a153 = 8;
    	a193 = 10;
    	a93 = 7;
    	a68 = 3;
    	a154 = 33 ;
    	a144 = 35 ;
    	a104 = 35 ;
    	a15 = 9;
    	a46 = 33 ;
    	a140 = 7;
    	a26 = 8;
    	a101 = 33 ;
    	a176 = 5;
    	a48 = 34 ;
    	a45 = 36 ;
    	a65 = 9;
    	a141 = 34 ;
    	a165 = 34 ;
    	a125 = 35 ;
    	a34 = 33 ;
    	a112 = 35 ;
    	a97 = 3;
    	a53 = 36 ;
    	a95 = 12;
    	a131 = 16;
    	a12 = 35 ;
    	a146 = 35 ;
    	a28 = 16;
    	a171 = 11;
    	}printf("%d\n", 16);  
    } 
printf("POINT: 2801\n");

    if(((((a93 == 3 && a119 == 32) && a41 == 32) && a180 == 32) && (a53 == 32 && (a187 == 4 && ((input == 2) &&  cf==1 ))))) {
printf("POINT: 2802\n");
    	cf = 0;
    	a134 = 13;
    	a26 = 7;
    	a20 = 6;
    	a200 = 35 ;
    	a56 = 13;
    	a3 = 35 ;
    	a25 = 6;
    	a118 = 36 ;
    	a196 = 10;
    	a12 = 36 ;
    	a153 = 8;
    	a95 = 13;
    	a101 = 36 ;
    	a41 = 34 ;
    	a16 = 11;
    	a119 = 34 ;
    	a112 = 36 ;
    	a104 = 36 ;
    	a32 = 33 ;
    	a48 = 35 ;
    	a106 = 9; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2803\n");

    if(((a104 == 32 && (((( cf==1  && (input == 7)) && a169 == 32) && a193 == 8) && a51 == 32)) && (a141 == 32 && a51 == 32))) {
printf("POINT: 2804\n");
    	cf = 0;
    	a126 = 8;
    	a150 = 5;
    	a28 = 10;
    	a0 = 35 ;
    	a84 = 32 ;
    	a110 = 12;
    	a135 = 8;
    	a184 = 5;
    	a81 = 15;
    	a88 = 36 ;
    	a90 = 32 ;
    	a12 = 36 ;
    	a141 = 36 ;
    	a56 = 13;
    	a118 = 33 ;
    	a25 = 11;
    	a121 = 35 ;
    	a200 = 34 ;
    	a39 = 14;
    	a97 = 3;
    	a187 = 9;
    	a51 = 33 ;
    	a176 = 3;
    	a104 = 36 ;
    	a174 = 13;
    	a153 = 8;
    	a179 = 36 ;
    	a112 = 36 ;
    	a15 = 10;
    	a46 = 35 ;
    	a125 = 35 ;
    	a180 = 33 ;
    	a193 = 7;
    	a167 = 1;
    	a120 = 9;
    	a17 = 35 ;
    	a93 = 6;
    	a105 = 14;
    	a144 = 35 ;
    	a140 = 5;
    	a119 = 32 ;
    	a146 = 33 ;
    	a115 = 32 ;
    	a53 = 33 ;
    	a127 = 11;
    	a196 = 11;
    	a152 = 13;
    	a37 = 9;
    	a131 = 13;
    	a20 = 6;
    	a137 = 36 ;
    	a169 = 33 ;
    	a34 = 35 ;
    	a128 = 8;
    	a13 = 8; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2805\n");

    if((((((input == 5) &&  cf==1 ) && a187 == 4) && a2 == 4) && ((a28 == 10 && (a46 == 32 && a104 == 32)) && a79 == 6))) {
printf("POINT: 2806\n");
    	cf = 0;
    	a65 = 15;
    	a152 = 11;
    	a140 = 7;
    	a109 = 33 ;
    	a84 = 36 ;
    	a28 = 13;
    	a23 = 36 ;
    	a100 = 32 ;
    	a160 = 36 ;
    	a105 = 13;
    	a55 = 36 ;
    	a20 = 7;
    	a193 = 9;
    	a119 = 35 ;
    	a48 = 33 ;
    	a196 = 8;
    	a167 = 3;
    	a110 = 8;
    	a112 = 32 ;
    	a81 = 17;
    	a120 = 11;
    	a200 = 35 ;
    	a134 = 14; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2807\n");

    if(((a41 == 32 && (a128 == 2 && a53 == 32)) && (((((input == 6) &&  cf==1 ) && a97 == 4) && a20 == 4) && a25 == 5))) {
printf("POINT: 2808\n");
    	cf = 0;
printf("POINT: 2809\n");

    	if(((((a150 == 5 || a50 == 6) && !(a43 == 36)) && !(a90 == 35)) || !(a13 == 9))) {
printf("POINT: 2810\n");
    	a53 = 32 ;
    	a121 = 35 ;
    	a135 = 10;
    	a34 = 32 ;
    	a90 = 35 ;
    	a125 = 35 ;
    	a178 = 35 ;
    	a55 = 35 ;
    	a79 = 6;
    	a22 = 14;
    	a140 = 4;
    	a15 = 12;
    	a56 = 8;
    	a174 = 11;
    	a144 = 36 ;
    	a184 = 12;
    	a126 = 3;
    	a200 = 34 ;
    	a68 = 8;
    	a105 = 17;
    	a101 = 35 ;
    	a30 = 35 ;
    	a118 = 33 ;
    	a176 = 9;
    	a187 = 7;
    	a152 = 11;
    	a196 = 8;
    	a97 = 8;
    	a146 = 33 ;
    	a45 = 36 ;
    	a180 = 36 ;
    	a169 = 32 ;
    	a25 = 8;
    	a37 = 12;
    	a115 = 35 ;
    	a154 = 32 ;
    	a112 = 35 ;
    	a69 = 35 ;
    	a65 = 12;
    	a127 = 10;
    	a51 = 35 ;
    	a39 = 14;
    	a74 = 32 ;
    	a104 = 33 ;
    	a128 = 1;
    	a26 = 9;
    	a153 = 4;
    	a17 = 36 ;
    	a12 = 33 ;
    	a171 = 6; 
    	}else {
printf("POINT: 2812\n");
    	a45 = 35 ;
    	a55 = 34 ;
    	a119 = 34 ;
    	a150 = 11;
    	a160 = 35 ;
    	a193 = 8;
    	a97 = 7;
    	a125 = 36 ;
    	a144 = 33 ;
    	a112 = 36 ;
    	a158 = 12;
    	a37 = 15;
    	a22 = 12;
    	a196 = 12;
    	a93 = 5;
    	a184 = 12;
    	a65 = 10;
    	a167 = 6;
    	a120 = 7;
    	a84 = 34 ;
    	a118 = 34 ;
    	a79 = 9;
    	a53 = 35 ;
    	a2 = 10;
    	a62 = 11;
    	a17 = 34 ;
    	a140 = 6;
    	a105 = 16;
    	a81 = 14;
    	a180 = 32 ;
    	a110 = 9;
    	a128 = 3;
    	a41 = 36 ;
    	a46 = 32 ;
    	a152 = 8;
    	a49 = 9;
    	}printf("%d\n", 22);  
    } 
printf("POINT: 2813\n");

    if(((a97 == 4 && ((a119 == 32 && a39 == 8) && a84 == 32)) && ((((input == 8) &&  cf==1 ) && a30 == 32) && a16 == 10))) {
printf("POINT: 2814\n");
    	cf = 0;
printf("POINT: 2815\n");

    	if(a49 == 12) {
printf("POINT: 2816\n");
    	a17 = 36 ;
    	a51 = 35 ;
    	a100 = 32 ;
    	a28 = 10;
    	a121 = 36 ;
    	a55 = 36 ;
    	a128 = 8;
    	a196 = 8;
    	a115 = 35 ;
    	a46 = 35 ;
    	a81 = 15;
    	a120 = 9;
    	a180 = 35 ;
    	a140 = 7;
    	a200 = 34 ;
    	a94 = 36 ;
    	a53 = 33 ;
    	a39 = 7;
    	a68 = 3;
    	a178 = 36 ;
    	a146 = 35 ;
    	a104 = 35 ;
    	a41 = 32 ;
    	a119 = 35 ;
    	a167 = 7;
    	a26 = 5;
    	a97 = 6;
    	a69 = 35 ;
    	a187 = 3;
    	a37 = 9;
    	a112 = 33 ;
    	a152 = 11;
    	a105 = 13;
    	a135 = 12; 
    	}else {
printf("POINT: 2818\n");
    	a125 = 32 ;
    	a120 = 5;
    	a165 = 35 ;
    	a81 = 10;
    	a174 = 13;
    	a37 = 11;
    	a104 = 33 ;
    	a91 = 34 ;
    	a101 = 36 ;
    	a12 = 35 ;
    	a56 = 8;
    	a141 = 34 ;
    	a127 = 13;
    	a135 = 9;
    	a178 = 34 ;
    	a79 = 10;
    	a97 = 9;
    	a28 = 14;
    	a34 = 36 ;
    	a32 = 36 ;
    	a128 = 8;
    	a160 = 36 ;
    	a193 = 11;
    	a153 = 9;
    	a25 = 4;
    	a30 = 36 ;
    	a2 = 3;
    	a84 = 33 ;
    	a90 = 33 ;
    	a17 = 33 ;
    	a68 = 5;
    	a93 = 3;
    	a22 = 14;
    	a152 = 13;
    	a0 = 34 ;
    	a176 = 8;
    	a39 = 9;
    	a112 = 33 ;
    	a55 = 34 ;
    	a131 = 14;
    	a115 = 34 ;
    	a16 = 14;
    	a65 = 12;
    	a26 = 7;
    	a46 = 32 ;
    	a95 = 15;
    	a126 = 8;
    	a184 = 11;
    	a110 = 6;
    	a15 = 13;
    	a144 = 35 ;
    	a196 = 12;
    	a200 = 34 ;
    	a20 = 9;
    	a169 = 35 ;
    	a150 = 9;
    	a41 = 35 ;
    	a53 = 36 ;
    	a45 = 35 ;
    	a69 = 33 ;
    	a187 = 8;
    	a88 = 32 ;
    	a146 = 32 ;
    	a121 = 36 ;
    	a180 = 36 ;
    	a154 = 35 ;
    	a118 = 36 ;
    	a119 = 34 ;
    	a105 = 13;
    	a51 = 34 ;
    	a140 = 10;
    	a164 = 8;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2819\n");

    if(((((( cf==1  && (input == 4)) && a112 == 32) && a53 == 32) && a22 == 8) && ((a105 == 11 && a81 == 11) && a150 == 5))) {
printf("POINT: 2820\n");
    	cf = 0;
printf("POINT: 2821\n");

    	if((a169 == 36 && (a181 == 15 || (!(a177 == 11) || (a103 == 33 && a8 == 11))))) {
printf("POINT: 2822\n");
    	a110 = 12;
    	a41 = 34 ;
    	a193 = 14;
    	a158 = 11;
    	a28 = 13;
    	a25 = 8;
    	a126 = 4;
    	a109 = 33 ;
    	a46 = 33 ;
    	a56 = 14;
    	a39 = 10;
    	a53 = 35 ;
    	a179 = 34 ;
    	a51 = 36 ;
    	a196 = 8;
    	a185 = 15;
    	a187 = 8;
    	a169 = 33 ;
    	a140 = 7;
    	a30 = 32 ;
    	a180 = 35 ;
    	a152 = 12;
    	a118 = 35 ;
    	a160 = 35 ;
    	a120 = 7;
    	a104 = 33 ;
    	a17 = 36 ;
    	a167 = 6;
    	a48 = 36 ;
    	a146 = 33 ;
    	a58 = 4; 
    	}else {
printf("POINT: 2824\n");
    	a196 = 9;
    	a153 = 9;
    	a146 = 32 ;
    	a120 = 10;
    	a193 = 11;
    	a51 = 34 ;
    	a180 = 32 ;
    	a104 = 36 ;
    	a2 = 10;
    	a187 = 8;
    	a69 = 34 ;
    	a127 = 11;
    	a88 = 34 ;
    	a200 = 33 ;
    	a141 = 35 ;
    	a84 = 35 ;
    	a95 = 13;
    	a179 = 32 ;
    	a125 = 36 ;
    	a48 = 32 ;
    	a178 = 35 ;
    	a126 = 10;
    	a121 = 32 ;
    	a12 = 34 ;
    	a109 = 34 ;
    	a110 = 9;
    	a15 = 14;
    	a25 = 6;
    	a26 = 4;
    	a174 = 11;
    	a30 = 36 ;
    	a34 = 36 ;
    	a41 = 32 ;
    	a32 = 34 ;
    	a154 = 33 ;
    	a28 = 16;
    	a144 = 36 ;
    	a46 = 36 ;
    	a39 = 10;
    	a45 = 36 ;
    	a56 = 12;
    	a86 = 32 ;
    	a53 = 34 ;
    	a77 = 7;
    	a0 = 33 ;
    	a68 = 3;
    	a62 = 6;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 2825\n");

    if(((a2 == 4 && (((a65 == 10 && a180 == 32) && a20 == 4) && a104 == 32)) && (((input == 1) &&  cf==1 ) && a150 == 5))) {
printf("POINT: 2826\n");
    	cf = 0;
    	a180 = 32 ;
    	a144 = 35 ;
    	a17 = 36 ;
    	a41 = 32 ;
    	a152 = 12;
    	a97 = 6;
    	a110 = 6;
    	a20 = 6;
    	a126 = 6;
    	a16 = 12;
    	a104 = 35 ;
    	a68 = 5;
    	a95 = 14;
    	a154 = 32 ;
    	a184 = 10;
    	a138 = 32 ;
    	a93 = 6;
    	a88 = 33 ;
    	a0 = 36 ;
    	a150 = 10;
    	a46 = 32 ;
    	a141 = 33 ;
    	a65 = 13;
    	a2 = 3;
    	a84 = 35 ;
    	a81 = 10;
    	a200 = 34 ;
    	a25 = 9;
    	a119 = 35 ;
    	a128 = 8;
    	a174 = 11;
    	a39 = 13;
    	a176 = 4;
    	a196 = 8;
    	a32 = 34 ;
    	a55 = 35 ;
    	a51 = 33 ;
    	a193 = 11;
    	a187 = 9;
    	a125 = 34 ;
    	a112 = 33 ;
    	a178 = 32 ;
    	a118 = 32 ;
    	a53 = 36 ;
    	a56 = 13;
    	a127 = 9;
    	a90 = 33 ;
    	a79 = 9;
    	a37 = 15;
    	a26 = 4;
    	a105 = 17;
    	a34 = 35 ;
    	a120 = 10;
    	a45 = 35 ;
    	a179 = 36 ;
    	a121 = 33 ;
    	a153 = 10;
    	a69 = 32 ;
    	a169 = 33 ;
    	a109 = 36 ;
    	a135 = 8;
    	a12 = 35 ;
    	a15 = 15;
    	a131 = 12;
    	a22 = 12;
    	a28 = 14;
    	a115 = 36 ;
    	a30 = 32 ;
    	a165 = 35 ;
    	a140 = 6;
    	a146 = 32 ;
    	a13 = 6; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2827\n");

    if((a141 == 32 && (((a144 == 32 && (a169 == 32 && (a45 == 32 && ( cf==1  && (input == 9))))) && a22 == 8) && a68 == 3))) {
printf("POINT: 2828\n");
    	cf = 0;
    	a125 = 35 ;
    	a193 = 7;
    	a178 = 32 ;
    	a153 = 7;
    	a101 = 33 ;
    	a105 = 13;
    	a179 = 33 ;
    	a17 = 35 ;
    	a104 = 33 ;
    	a68 = 2;
    	a84 = 34 ;
    	a55 = 33 ;
    	a127 = 13;
    	a41 = 36 ;
    	a22 = 8;
    	a45 = 32 ;
    	a28 = 12;
    	a121 = 33 ;
    	a200 = 34 ;
    	a32 = 33 ;
    	a88 = 34 ;
    	a140 = 9;
    	a53 = 32 ;
    	a131 = 9;
    	a150 = 4;
    	a65 = 14;
    	a20 = 9;
    	a16 = 11;
    	a90 = 36 ;
    	a95 = 10;
    	a128 = 6;
    	a196 = 10;
    	a146 = 36 ;
    	a69 = 36 ;
    	a160 = 35 ;
    	a39 = 11;
    	a0 = 36 ;
    	a37 = 8;
    	a187 = 8;
    	a97 = 10;
    	a154 = 33 ;
    	a152 = 8;
    	a120 = 5;
    	a56 = 13;
    	a169 = 35 ;
    	a144 = 32 ;
    	a12 = 35 ;
    	a15 = 14;
    	a110 = 8;
    	a137 = 33 ;
    	a126 = 8;
    	a81 = 11;
    	a46 = 35 ;
    	a2 = 6;
    	a112 = 33 ;
    	a118 = 33 ;
    	a135 = 8;
    	a141 = 33 ;
    	a176 = 4;
    	a119 = 35 ;
    	a25 = 4;
    	a165 = 35 ;
    	a30 = 35 ;
    	a93 = 5;
    	a26 = 2;
    	a180 = 36 ;
    	a51 = 33 ;
    	a174 = 7;
    	a184 = 12;
    	a34 = 36 ;
    	a13 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm254(int input) {
printf("POINT: 2829\n");

    if(((a41 == 32 && (a51 == 32 && (a141 == 32 && ( cf==1  && (input == 3))))) && (a178 == 32 && (a45 == 32 && a84 == 32)))) {
printf("POINT: 2830\n");
    	cf = 0;
    	a158 = 11;
    	a89 = 36 ;
    	a185 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2831\n");

    if((((input == 4) &&  cf==1 ) && ((a22 == 8 && (a90 == 32 && (a88 == 32 && (a17 == 32 && a105 == 11)))) && a34 == 32))) {
printf("POINT: 2832\n");
    	cf = 0;
    	a134 = 11;
    	a25 = 5;
    	a37 = 10;
    	a109 = 34 ;
    	a200 = 35 ;
    	a152 = 10;
    	a32 = 32 ;
    	a120 = 6;
    	a112 = 34 ;
    	a41 = 34 ;
    	a93 = 3;
    	a119 = 34 ;
    	a46 = 34 ;
    	a53 = 34 ;
    	a103 = 32 ;
    	a146 = 34 ;
    	a68 = 4;
    	a30 = 32 ;
    	a34 = 32 ;
    	a140 = 6;
    	a17 = 34 ;
    	a187 = 5;
    	a184 = 7;
    	a2 = 4;
    	a101 = 34 ;
    	a45 = 32 ;
    	a20 = 4;
    	a39 = 9;
    	a193 = 8;
    	a65 = 10;
    	a88 = 32 ;
    	a81 = 12;
    	a179 = 34 ;
    	a77 = 12; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2833\n");

    if(((a105 == 11 && (((( cf==1  && (input == 1)) && a112 == 32) && a41 == 32) && a95 == 9)) && (a30 == 32 && a141 == 32))) {
printf("POINT: 2834\n");
    	cf = 0;
    	a37 = 10;
    	a180 = 34 ;
    	a26 = 4;
    	a152 = 10;
    	a153 = 5;
    	a109 = 34 ;
    	a160 = 34 ;
    	a158 = 7;
    	a48 = 34 ;
    	a41 = 34 ;
    	a53 = 34 ;
    	a104 = 34 ;
    	a97 = 5;
    	a137 = 34 ;
    	a110 = 7;
    	a125 = 34 ;
    	a127 = 8;
    	a15 = 11;
    	a118 = 34 ;
    	a25 = 6;
    	a32 = 34 ;
    	a93 = 4;
    	a169 = 34 ;
    	a184 = 7;
    	a167 = 3;
    	a187 = 5;
    	a64 = 10; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2835\n");

    if(((a120 == 6 && ((a193 == 8 && ((a39 == 8 && ((input == 10) &&  cf==1 )) && a126 == 4)) && a46 == 32)) && a79 == 6)) {
printf("POINT: 2836\n");
    	cf = 0;
    	a152 = 8;
    	a3 = 32 ;
    	a26 = 3;
    	a53 = 32 ;
    	a28 = 10;
    	a119 = 33 ;
    	a167 = 2;
    	a125 = 33 ;
    	a160 = 32 ;
    	a140 = 6;
    	a25 = 5;
    	a56 = 9;
    	a95 = 9;
    	a112 = 32 ;
    	a69 = 32 ;
    	a109 = 32 ;
    	a200 = 35 ;
    	a39 = 8;
    	a134 = 16;
    	a2 = 4;
    	a84 = 32 ;
    	a184 = 5;
    	a16 = 10;
    	a174 = 7;
    	a8 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm255(int input) {
printf("POINT: 2837\n");

    if((((a15 == 10 && a48 == 32) && a79 == 6) && ((a196 == 6 && (( cf==1  && (input == 7)) && a153 == 4)) && a26 == 3))) {
printf("POINT: 2838\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
    } 
printf("POINT: 2839\n");

    if(((a0 == 32 && ((a32 == 32 && a16 == 10) && a88 == 32)) && ((((input == 6) &&  cf==1 ) && a112 == 32) && a180 == 32))) {
printf("POINT: 2840\n");
    	cf = 0;
    	 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm256(int input) {
printf("POINT: 2841\n");

    if((((a69 == 32 && a84 == 32) && a141 == 32) && (a167 == 2 && ((( cf==1  && (input == 3)) && a68 == 3) && a34 == 32)))) {
printf("POINT: 2842\n");
    	cf = 0;
    	a118 = 32 ;
    	a128 = 2;
    	a169 = 32 ;
    	a144 = 32 ;
    	a53 = 32 ;
    	a184 = 6;
    	a104 = 32 ;
    	a32 = 32 ;
    	a196 = 5;
    	a30 = 32 ;
    	a81 = 11;
    	a26 = 3;
    	a105 = 11;
    	a183 = 12;
    	a97 = 4;
    	a79 = 6;
    	a165 = 32 ;
    	a141 = 32 ;
    	a179 = 32 ;
    	a112 = 32 ;
    	a37 = 9;
    	a110 = 5;
    	a158 = 10;
    	a48 = 32 ;
    	a176 = 3;
    	a7 = 4; 
    	 printf("%d\n", 25);  
    } 
printf("POINT: 2843\n");

    if(((a0 == 32 && ((((input == 10) &&  cf==1 ) && a131 == 10) && a118 == 32)) && (a104 == 32 && (a128 == 2 && a45 == 32)))) {
printf("POINT: 2844\n");
    	cf = 0;
    	a15 = 10;
    	a176 = 3;
    	a32 = 32 ;
    	a125 = 32 ;
    	a119 = 32 ;
    	a115 = 32 ;
    	a81 = 11;
    	a53 = 32 ;
    	a79 = 6;
    	a105 = 11;
    	a184 = 6;
    	a28 = 11;
    	a26 = 4;
    	a118 = 32 ;
    	a27 = 36 ;
    	a128 = 2;
    	a2 = 4;
    	a179 = 32 ;
    	a97 = 4;
    	a169 = 32 ;
    	a127 = 7;
    	a165 = 32 ;
    	a25 = 5;
    	a120 = 6;
    	a200 = 32 ;
    	a30 = 32 ;
    	a196 = 6;
    	a140 = 5;
    	a141 = 32 ;
    	a198 = 34 ;
    	a58 = 2; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm257(int input) {
printf("POINT: 2845\n");

    if(((((a174 == 8 && a16 == 10) && a84 == 32) && a46 == 32) && (a93 == 3 && (a127 == 7 && ((input == 9) &&  cf==1 ))))) {
printf("POINT: 2846\n");
    	cf = 0;
    	a97 = 5;
    	a41 = 34 ;
    	a128 = 3;
    	a46 = 34 ;
    	a180 = 34 ;
    	a94 = 36 ;
    	a53 = 34 ;
    	a179 = 34 ;
    	a100 = 32 ;
    	a200 = 34 ;
    	a28 = 11;
    	a152 = 10;
    	a135 = 12; 
    	 printf("%d\n", 20);  
    } 
printf("POINT: 2847\n");

    if(((a34 == 32 && a53 == 32) && (a97 == 4 && (a126 == 4 && (a167 == 2 && (((input == 5) &&  cf==1 ) && a79 == 6)))))) {
printf("POINT: 2848\n");
    	cf = 0;
    	a180 = 34 ;
    	a41 = 34 ;
    	a152 = 10;
    	a128 = 3;
    	a53 = 34 ;
    	a46 = 34 ;
    	a94 = 36 ;
    	a179 = 34 ;
    	a200 = 34 ;
    	a97 = 5;
    	a100 = 32 ;
    	a28 = 11;
    	a135 = 12; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm258(int input) {
printf("POINT: 2849\n");

    if(((a169 == 32 && (a144 == 32 && a25 == 5)) && (((a37 == 9 && ((input == 10) &&  cf==1 )) && a69 == 32) && a152 == 9))) {
printf("POINT: 2850\n");
    	cf = 0;
    	a93 = 4;
    	a65 = 10;
    	a84 = 32 ;
    	a169 = 32 ;
    	a86 = 34 ;
    	a20 = 5;
    	a2 = 5;
    	a193 = 8;
    	a110 = 6;
    	a200 = 32 ;
    	a81 = 12;
    	a48 = 32 ;
    	a141 = 34 ;
    	a56 = 9;
    	a118 = 32 ;
    	a105 = 12;
    	a16 = 10;
    	a97 = 5;
    	a95 = 9;
    	a28 = 11;
    	a120 = 6;
    	a30 = 32 ;
    	a179 = 34 ;
    	a153 = 5;
    	a12 = 32 ;
    	a88 = 32 ;
    	a167 = 3;
    	a165 = 32 ;
    	a104 = 32 ;
    	a174 = 9;
    	a51 = 32 ;
    	a131 = 10;
    	a15 = 10;
    	a125 = 34 ;
    	a154 = 34 ;
    	a187 = 5;
    	a37 = 10;
    	a34 = 32 ;
    	a128 = 3;
    	a41 = 32 ;
    	a198 = 33 ;
    	a66 = 5; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2851\n");

    if(((a17 == 32 && (a115 == 32 && (((input == 7) &&  cf==1 ) && a41 == 32))) && (a121 == 32 && (a97 == 4 && a32 == 32)))) {
printf("POINT: 2852\n");
    	cf = 0;
    	a97 = 5;
    	a154 = 32 ;
    	a37 = 10;
    	a109 = 34 ;
    	a26 = 4;
    	a153 = 5;
    	a45 = 32 ;
    	a51 = 32 ;
    	a93 = 4;
    	a104 = 34 ;
    	a84 = 32 ;
    	a25 = 6;
    	a30 = 32 ;
    	a152 = 10;
    	a53 = 34 ;
    	a41 = 34 ;
    	a79 = 6;
    	a95 = 9;
    	a158 = 7;
    	a15 = 11;
    	a137 = 34 ;
    	a120 = 6;
    	a28 = 10;
    	a81 = 11;
    	a125 = 34 ;
    	a169 = 34 ;
    	a32 = 34 ;
    	a165 = 32 ;
    	a174 = 8;
    	a127 = 8;
    	a180 = 34 ;
    	a48 = 34 ;
    	a65 = 10;
    	a110 = 7;
    	a167 = 3;
    	a184 = 7;
    	a64 = 10; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2853\n");

    if(((a196 == 6 && (a0 == 32 && a68 == 3)) && (((((input == 1) &&  cf==1 ) && a101 == 32) && a34 == 32) && a53 == 32))) {
printf("POINT: 2854\n");
    	cf = 0;
    	a88 = 33 ;
    	a180 = 33 ;
    	a146 = 33 ;
    	a187 = 5;
    	a32 = 33 ;
    	a153 = 3;
    	a79 = 6;
    	a28 = 10;
    	a126 = 3;
    	a176 = 3;
    	a53 = 33 ;
    	a118 = 32 ;
    	a77 = 11;
    	a160 = 34 ;
    	a69 = 33 ;
    	a179 = 33 ;
    	a90 = 33 ;
    	a200 = 33 ;
    	a184 = 6;
    	a152 = 8;
    	a121 = 33 ;
    	a86 = 32 ;
    	a119 = 32 ;
    	a144 = 33 ;
    	a81 = 10;
    	a48 = 32 ;
    	a178 = 32 ;
    	a17 = 33 ;
    	a98 = 13; 
    	 printf("%d\n", 15);  
    } 
printf("POINT: 2855\n");

    if(((a37 == 9 && (a179 == 32 && (a127 == 7 && (a146 == 32 && ((input == 3) &&  cf==1 ))))) && (a115 == 32 && a12 == 32))) {
printf("POINT: 2856\n");
    	cf = 0;
    	a146 = 34 ;
    	a135 = 11;
    	a140 = 6;
    	a119 = 34 ;
    	a165 = 32 ;
    	a196 = 7;
    	a16 = 11;
    	a97 = 5;
    	a115 = 34 ;
    	a180 = 34 ;
    	a45 = 34 ;
    	a110 = 7;
    	a32 = 34 ;
    	a105 = 12;
    	a112 = 34 ;
    	a127 = 8;
    	a128 = 3;
    	a30 = 34 ;
    	a53 = 34 ;
    	a193 = 7;
    	a15 = 10;
    	a101 = 34 ;
    	a104 = 34 ;
    	a46 = 34 ;
    	a197 = 8;
    	a22 = 9;
    	a109 = 32 ;
    	a65 = 11;
    	a56 = 10;
    	a95 = 10;
    	a34 = 34 ;
    	a144 = 34 ;
    	a125 = 32 ;
    	a200 = 34 ;
    	a17 = 34 ;
    	a174 = 8;
    	a154 = 34 ;
    	a39 = 9;
    	a120 = 6;
    	a55 = 34 ;
    	a51 = 32 ;
    	a26 = 4;
    	a190 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm259(int input) {
printf("POINT: 2857\n");

    if(((((a84 == 32 && a32 == 32) && a118 == 32) && a81 == 11) && (a45 == 32 && (((input == 10) &&  cf==1 ) && a101 == 32)))) {
printf("POINT: 2858\n");
    	cf = 0;
    	a28 = 11;
    	a53 = 32 ;
    	a81 = 11;
    	a200 = 32 ;
    	a30 = 32 ;
    	a26 = 4;
    	a140 = 5;
    	a25 = 5;
    	a179 = 32 ;
    	a128 = 2;
    	a105 = 11;
    	a120 = 6;
    	a198 = 34 ;
    	a169 = 32 ;
    	a79 = 6;
    	a196 = 6;
    	a2 = 4;
    	a165 = 32 ;
    	a118 = 32 ;
    	a141 = 32 ;
    	a32 = 32 ;
    	a115 = 32 ;
    	a176 = 3;
    	a184 = 6;
    	a127 = 7;
    	a119 = 32 ;
    	a27 = 36 ;
    	a15 = 10;
    	a97 = 4;
    	a125 = 32 ;
    	a58 = 2; 
    	 printf("%d\n", 26);  
    } 
printf("POINT: 2859\n");

    if((((a141 == 32 && a34 == 32) && a167 == 2) && (a88 == 32 && ((a90 == 32 && ( cf==1  && (input == 3))) && a56 == 9)))) {
printf("POINT: 2860\n");
    	cf = 0;
    	a176 = 3;
    	a118 = 32 ;
    	a79 = 6;
    	a128 = 2;
    	a196 = 5;
    	a144 = 32 ;
    	a183 = 12;
    	a105 = 11;
    	a37 = 9;
    	a165 = 32 ;
    	a104 = 32 ;
    	a184 = 6;
    	a110 = 5;
    	a53 = 32 ;
    	a81 = 11;
    	a179 = 32 ;
    	a32 = 32 ;
    	a141 = 32 ;
    	a158 = 10;
    	a97 = 4;
    	a48 = 32 ;
    	a30 = 32 ;
    	a169 = 32 ;
    	a112 = 32 ;
    	a26 = 3;
    	a7 = 4; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm260(int input) {
printf("POINT: 2861\n");

    if((((a26 == 3 && a93 == 3) && a150 == 5) && (a55 == 32 && (a105 == 11 && (((input == 1) &&  cf==1 ) && a90 == 32))))) {
printf("POINT: 2862\n");
    	cf = 0;
    	a153 = 6;
    	a121 = 32 ;
    	a84 = 35 ;
    	a176 = 5;
    	a193 = 13;
    	a184 = 8;
    	a69 = 35 ;
    	a79 = 10;
    	a45 = 33 ;
    	a51 = 32 ;
    	a68 = 6;
    	a196 = 9;
    	a178 = 33 ;
    	a158 = 11;
    	a160 = 36 ;
    	a48 = 35 ;
    	a174 = 11;
    	a15 = 16;
    	a17 = 35 ;
    	a28 = 9;
    	a25 = 10;
    	a97 = 6;
    	a56 = 11;
    	a146 = 36 ;
    	a55 = 36 ;
    	a41 = 32 ;
    	a187 = 10;
    	a126 = 5;
    	a95 = 13;
    	a105 = 13;
    	a109 = 32 ;
    	a53 = 32 ;
    	a119 = 33 ;
    	a185 = 10;
    	a118 = 35 ;
    	a81 = 11;
    	a165 = 32 ;
    	a120 = 10;
    	a11 = 1; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2863\n");

    if(((a93 == 3 && (a93 == 3 && (a34 == 32 && a12 == 32))) && ((((input == 10) &&  cf==1 ) && a30 == 32) && a53 == 32))) {
printf("POINT: 2864\n");
    	cf = 0;
    	a26 = 6;
    	a167 = 1;
    	a126 = 6;
    	a112 = 34 ;
    	a165 = 36 ;
    	a176 = 9;
    	a68 = 8;
    	a169 = 33 ;
    	a69 = 35 ;
    	a127 = 11;
    	a104 = 36 ;
    	a110 = 11;
    	a152 = 8;
    	a180 = 35 ;
    	a109 = 33 ;
    	a105 = 15;
    	a93 = 8;
    	a120 = 7;
    	a81 = 15;
    	a118 = 36 ;
    	a16 = 12;
    	a179 = 34 ;
    	a90 = 33 ;
    	a56 = 15;
    	a115 = 33 ;
    	a15 = 11;
    	a122 = 35 ;
    	a184 = 8;
    	a41 = 33 ;
    	a196 = 9;
    	a101 = 36 ;
    	a97 = 5;
    	a178 = 35 ;
    	a55 = 34 ;
    	a51 = 36 ;
    	a36 = 33 ;
    	a141 = 33 ;
    	a46 = 35 ;
    	a17 = 33 ;
    	a53 = 33 ;
    	a128 = 5;
    	a37 = 8;
    	a193 = 14;
    	a125 = 33 ;
    	a158 = 8; 
    	 printf("%d\n", 16);  
    } 
printf("POINT: 2865\n");

    if((((a55 == 32 && (a97 == 4 && (a79 == 6 && ((input == 9) &&  cf==1 )))) && a34 == 32) && (a101 == 32 && a68 == 3))) {
printf("POINT: 2866\n");
    	cf = 0;
    	a48 = 33 ;
    	a53 = 36 ;
    	a160 = 35 ;
    	a118 = 33 ;
    	a180 = 32 ;
    	a187 = 9;
    	a109 = 33 ;
    	a158 = 7;
    	a137 = 34 ;
    	a15 = 13;
    	a125 = 32 ;
    	a104 = 33 ;
    	a167 = 1;
    	a169 = 32 ;
    	a153 = 4;
    	a41 = 36 ;
    	a93 = 5;
    	a152 = 14;
    	a37 = 15;
    	a184 = 11;
    	a97 = 8;
    	a110 = 11;
    	a25 = 10;
    	a127 = 7;
    	a32 = 35 ;
    	a26 = 8;
    	a64 = 10; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2867\n");

    if((((a179 == 32 && ( cf==1  && (input == 6))) && a180 == 32) && (a109 == 32 && (a153 == 4 && (a187 == 4 && a187 == 4))))) {
printf("POINT: 2868\n");
    	cf = 0;
printf("POINT: 2869\n");

    	if((a142 == 35 || (a13 == 10 && a54 == 32))) {
printf("POINT: 2870\n");
    	a15 = 10;
    	a90 = 32 ;
    	a187 = 5;
    	a39 = 11;
    	a22 = 11;
    	a125 = 32 ;
    	a51 = 36 ;
    	a127 = 9;
    	a28 = 11;
    	a119 = 34 ;
    	a32 = 35 ;
    	a193 = 11;
    	a162 = 32 ;
    	a45 = 35 ;
    	a180 = 32 ;
    	a110 = 7;
    	a158 = 12;
    	a62 = 10; 
    	}else {
printf("POINT: 2872\n");
    	a37 = 14;
    	a22 = 11;
    	a84 = 35 ;
    	a169 = 33 ;
    	a95 = 12;
    	a17 = 36 ;
    	a127 = 9;
    	a179 = 36 ;
    	a34 = 36 ;
    	a32 = 35 ;
    	a119 = 35 ;
    	a88 = 35 ;
    	a97 = 9;
    	a193 = 9;
    	a15 = 15;
    	a135 = 10;
    	a196 = 9;
    	a115 = 35 ;
    	a112 = 35 ;
    	a180 = 36 ;
    	a90 = 34 ;
    	a187 = 8;
    	a39 = 8;
    	a45 = 33 ;
    	a154 = 34 ;
    	a200 = 34 ;
    	a110 = 11;
    	a174 = 12;
    	a176 = 9;
    	a28 = 12;
    	a51 = 32 ;
    	a65 = 12;
    	a68 = 7;
    	a131 = 13;
    	a165 = 32 ;
    	a160 = 32 ;
    	a104 = 32 ;
    	a53 = 32 ;
    	a186 = 34 ;
    	a125 = 35 ;
    	a109 = 35 ;
    	a128 = 6;
    	a25 = 7;
    	a81 = 16;
    	a146 = 36 ;
    	a171 = 9;
    	}printf("%d\n", 20);  
    } 
printf("POINT: 2873\n");

    if((((a128 == 2 && (a0 == 32 && a176 == 3)) && a146 == 32) && ((( cf==1  && (input == 4)) && a79 == 6) && a169 == 32))) {
printf("POINT: 2874\n");
    	cf = 0;
printf("POINT: 2875\n");

    	if((a9 == 36 && !(a54 == 34))) {
printf("POINT: 2876\n");
    	a62 = 5;
    	a158 = 12;
    	a109 = 35 ;
    	a174 = 13;
    	a71 = 6; 
    	}else {
printf("POINT: 2878\n");
    	a36 = 33 ;
    	a134 = 10;
    	a200 = 35 ;
    	a164 = 8;
    	}printf("%d\n", 26);  
    } 
printf("POINT: 2879\n");

    if(((a20 == 4 && a150 == 5) && ((((((input == 2) &&  cf==1 ) && a32 == 32) && a193 == 8) && a196 == 6) && a154 == 32))) {
printf("POINT: 2880\n");
    	cf = 0;
    	a131 = 13;
    	a167 = 4;
    	a179 = 35 ;
    	a22 = 9;
    	a45 = 33 ;
    	a39 = 13;
    	a110 = 9;
    	a119 = 34 ;
    	a125 = 36 ;
    	a16 = 13;
    	a20 = 6;
    	a95 = 14;
    	a120 = 10;
    	a51 = 32 ;
    	a41 = 36 ;
    	a79 = 11;
    	a174 = 13;
    	a88 = 35 ;
    	a198 = 33 ;
    	a12 = 36 ;
    	a128 = 5;
    	a196 = 5;
    	a112 = 34 ;
    	a32 = 35 ;
    	a26 = 8;
    	a144 = 33 ;
    	a184 = 7;
    	a200 = 32 ;
    	a56 = 13;
    	a37 = 14;
    	a118 = 35 ;
    	a140 = 10;
    	a86 = 35 ;
    	a141 = 33 ;
    	a81 = 13;
    	a68 = 5;
    	a90 = 36 ;
    	a30 = 34 ;
    	a61 = 2; 
    	 printf("%d\n", 23);  
    } 
printf("POINT: 2881\n");

    if((((((a41 == 32 && ((input == 8) &&  cf==1 )) && a167 == 2) && a180 == 32) && a12 == 32) && (a125 == 32 && a30 == 32))) {
printf("POINT: 2882\n");
    	cf = 0;
    	a112 = 32 ;
    	a150 = 11;
    	a101 = 36 ;
    	a118 = 35 ;
    	a184 = 11;
    	a196 = 12;
    	a45 = 36 ;
    	a69 = 34 ;
    	a25 = 11;
    	a26 = 9;
    	a84 = 32 ;
    	a34 = 35 ;
    	a174 = 11;
    	a121 = 36 ;
    	a154 = 32 ;
    	a51 = 34 ;
    	a179 = 32 ;
    	a90 = 35 ;
    	a46 = 32 ;
    	a167 = 2;
    	a125 = 32 ;
    	a0 = 32 ;
    	a15 = 13;
    	a110 = 6;
    	a86 = 32 ;
    	a20 = 7;
    	a65 = 12;
    	a12 = 36 ;
    	a153 = 9;
    	a22 = 12;
    	a41 = 35 ;
    	a88 = 35 ;
    	a2 = 4;
    	a200 = 33 ;
    	a53 = 35 ;
    	a120 = 6;
    	a81 = 16;
    	a95 = 11;
    	a37 = 14;
    	a77 = 9;
    	a104 = 34 ;
    	a105 = 11;
    	a56 = 12;
    	a32 = 35 ;
    	a79 = 8;
    	a160 = 32 ;
    	a48 = 36 ;
    	a17 = 36 ;
    	a16 = 13;
    	a152 = 13;
    	a144 = 36 ;
    	a126 = 4;
    	a131 = 10;
    	a147 = 1; 
    	 printf("%d\n", 17);  
    } 
printf("POINT: 2883\n");

    if(((a120 == 6 && a105 == 11) && (((a28 == 10 && (( cf==1  && (input == 3)) && a65 == 10)) && a55 == 32) && a41 == 32))) {
printf("POINT: 2884\n");
    	cf = 0;
    	a69 = 32 ;
    	a65 = 11;
    	a27 = 35 ;
    	a167 = 7;
    	a119 = 32 ;
    	a56 = 14;
    	a131 = 14;
    	a84 = 32 ;
    	a174 = 11;
    	a144 = 36 ;
    	a81 = 16;
    	a0 = 34 ;
    	a97 = 7;
    	a34 = 36 ;
    	a101 = 34 ;
    	a200 = 33 ;
    	a140 = 10;
    	a125 = 36 ;
    	a152 = 13;
    	a179 = 32 ;
    	a110 = 7;
    	a127 = 12;
    	a86 = 34 ;
    	a120 = 7;
    	a104 = 32 ;
    	a68 = 8;
    	a196 = 8;
    	a20 = 6;
    	a180 = 34 ;
    	a169 = 32 ;
    	a193 = 11;
    	a17 = 35 ;
    	a12 = 36 ;
    	a184 = 7;
    	a55 = 36 ;
    	a48 = 32 ;
    	a53 = 32 ;
    	a118 = 35 ;
    	a128 = 6;
    	a112 = 36 ;
    	a141 = 34 ;
    	a16 = 10;
    	a90 = 34 ;
    	a105 = 11;
    	a15 = 10;
    	a115 = 34 ;
    	a146 = 36 ;
    	a2 = 6;
    	a96 = 32 ; 
    	 printf("%d\n", 18);  
    } 
printf("POINT: 2885\n");

    if(((a69 == 32 && (((input == 5) &&  cf==1 ) && a187 == 4)) && (((a55 == 32 && a16 == 10) && a104 == 32) && a51 == 32))) {
printf("POINT: 2886\n");
    	cf = 0;
printf("POINT: 2887\n");

    	if((a59 == 6 || ((a78 == 33 || (a0 == 35 && a67 == 36)) || a81 == 14))) {
printf("POINT: 2888\n");
    	a163 = 33 ;
    	a6 = 11; 
    	}else {
printf("POINT: 2890\n");
    	a118 = 34 ;
    	a121 = 36 ;
    	a144 = 35 ;
    	a196 = 9;
    	a56 = 8;
    	a46 = 33 ;
    	a140 = 11;
    	a154 = 36 ;
    	a152 = 10;
    	a37 = 15;
    	a109 = 33 ;
    	a32 = 33 ;
    	a81 = 17;
    	a55 = 33 ;
    	a141 = 35 ;
    	a174 = 11;
    	a22 = 13;
    	a30 = 35 ;
    	a165 = 36 ;
    	a101 = 34 ;
    	a79 = 5;
    	a169 = 35 ;
    	a183 = 12;
    	a115 = 35 ;
    	a26 = 4;
    	a53 = 36 ;
    	a112 = 35 ;
    	a153 = 7;
    	a95 = 11;
    	a45 = 33 ;
    	a69 = 33 ;
    	a128 = 8;
    	a184 = 7;
    	a97 = 10;
    	a187 = 3;
    	a158 = 10;
    	a126 = 9;
    	a7 = 5;
    	}printf("%d\n", 18);  
    } 
printf("POINT: 2891\n");

    if((((a121 == 32 && (a46 == 32 && a53 == 32)) && a39 == 8) && ((a146 == 32 && ((input == 7) &&  cf==1 )) && a178 == 32))) {
printf("POINT: 2892\n");
    	cf = 0;
    	a84 = 32 ;
    	a119 = 35 ;
    	a187 = 4;
    	a2 = 9;
    	a200 = 35 ;
    	a167 = 4;
    	a152 = 9;
    	a32 = 36 ;
    	a125 = 32 ;
    	a127 = 13;
    	a164 = 6;
    	a45 = 34 ;
    	a39 = 13;
    	a88 = 36 ;
    	a178 = 34 ;
    	a28 = 13;
    	a15 = 10;
    	a144 = 36 ;
    	a184 = 10;
    	a154 = 32 ;
    	a69 = 32 ;
    	a81 = 13;
    	a180 = 34 ;
    	a118 = 35 ;
    	a93 = 8;
    	a146 = 34 ;
    	a134 = 10;
    	a112 = 32 ;
    	a10 = 7; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm34(int input) {
printf("POINT: 2893\n");

    if((((a180 == 32 && (a125 == 32 && (a93 == 3 && a84 == 32))) && a41 == 32) && (( cf==1  && a163 == 33) && a53 == 32))) {
printf("POINT: 2894\n");
printf("POINT: 2895\n");

    	if((((a65 == 10 && (a6 == 7 &&  cf==1 )) && a68 == 3) && (((a126 == 4 && a115 == 32) && a128 == 2) && a121 == 32))) {
printf("POINT: 2896\n");
    		calculate_outputm251(input);
    	} 
printf("POINT: 2897\n");

    	if(((a193 == 8 && ((a16 == 10 && a160 == 32) && a17 == 32)) && ((a97 == 4 && ( cf==1  && a6 == 8)) && a84 == 32))) {
printf("POINT: 2898\n");
    		calculate_outputm252(input);
    	} 
printf("POINT: 2899\n");

    	if(((a187 == 4 && ( cf==1  && a6 == 9)) && (a84 == 32 && (((a46 == 32 && a69 == 32) && a51 == 32) && a32 == 32)))) {
printf("POINT: 2900\n");
    		calculate_outputm253(input);
    	} 
printf("POINT: 2901\n");

    	if(((a174 == 8 && ((a180 == 32 && (a16 == 10 && ( cf==1  && a6 == 11))) && a51 == 32)) && (a150 == 5 && a88 == 32))) {
printf("POINT: 2902\n");
    		calculate_outputm254(input);
    	} 
    } 
printf("POINT: 2903\n");

    if((((a56 == 9 && a104 == 32) && a101 == 32) && ((a95 == 9 && (a118 == 32 && ( cf==1  && a163 == 32))) && a110 == 6))) {
printf("POINT: 2904\n");
printf("POINT: 2905\n");

    	if((((a25 == 5 && (a131 == 10 && (a187 == 4 && (a68 == 3 && a119 == 32)))) && a101 == 32) && (a123 == 6 &&  cf==1 ))) {
printf("POINT: 2906\n");
    		calculate_outputm255(input);
    	} 
printf("POINT: 2907\n");

    	if(((((a123 == 10 &&  cf==1 ) && a28 == 10) && a97 == 4) && (a126 == 4 && (a109 == 32 && (a90 == 32 && a2 == 4))))) {
printf("POINT: 2908\n");
    		calculate_outputm256(input);
    	} 
    } 
printf("POINT: 2909\n");

    if(((((( cf==1  && a163 == 34) && a20 == 4) && a165 == 32) && a56 == 9) && ((a128 == 2 && a180 == 32) && a28 == 10))) {
printf("POINT: 2910\n");
printf("POINT: 2911\n");

    	if(((a46 == 32 && (a179 == 32 && a16 == 10)) && (a152 == 9 && ((a169 == 32 && (a13 == 8 &&  cf==1 )) && a20 == 4)))) {
printf("POINT: 2912\n");
    		calculate_outputm257(input);
    	} 
    } 
printf("POINT: 2913\n");

    if(((a25 == 5 && (a101 == 32 && a26 == 3)) && (a97 == 4 && ((a105 == 11 && (a163 == 35 &&  cf==1 )) && a180 == 32)))) {
printf("POINT: 2914\n");
printf("POINT: 2915\n");

    	if(((( cf==1  && a6 == 6) && a180 == 32) && (((a56 == 9 && (a90 == 32 && a55 == 32)) && a126 == 4) && a150 == 5))) {
printf("POINT: 2916\n");
    		calculate_outputm258(input);
    	} 
printf("POINT: 2917\n");

    	if(((((a16 == 10 && a179 == 32) && a0 == 32) && a90 == 32) && (a152 == 9 && (a41 == 32 && (a6 == 9 &&  cf==1 ))))) {
printf("POINT: 2918\n");
    		calculate_outputm259(input);
    	} 
    } 
printf("POINT: 2919\n");

    if((((a17 == 32 && (a95 == 9 && a110 == 6)) && a144 == 32) && ((a196 == 6 && (a163 == 36 &&  cf==1 )) && a119 == 32))) {
printf("POINT: 2920\n");
printf("POINT: 2921\n");

    	if(((((a186 == 33 &&  cf==1 ) && a115 == 32) && a119 == 32) && (a79 == 6 && (a12 == 32 && (a120 == 6 && a105 == 11))))) {
printf("POINT: 2922\n");
    		calculate_outputm260(input);
    	} 
    } 
}

 void calculate_output(int input) {
        cf = 1;

printf("POINT: 2923\n");

    if(((a110 == 5 && ((a200 == 33 &&  cf==1 ) && a84 == 33)) && (a15 == 9 && (a125 == 33 && (a53 == 33 && a69 == 33))))) {
printf("POINT: 2924\n");
printf("POINT: 2925\n");

    	if(((a79 == 5 && (a121 == 33 && a196 == 5)) && (((a88 == 33 && (a86 == 33 &&  cf==1 )) && a179 == 33) && a160 == 33))) {
printf("POINT: 2926\n");
    		calculate_outputm1(input);
    	} 
printf("POINT: 2927\n");

    	if(((a174 == 7 && ((a32 == 33 && a95 == 8) && a17 == 33)) && (((a86 == 32 &&  cf==1 ) && a45 == 33) && a152 == 8))) {
printf("POINT: 2928\n");
    		calculate_outputm2(input);
    	} 
printf("POINT: 2929\n");

    	if(((a120 == 5 && (a118 == 33 && (a110 == 5 && a34 == 33))) && ((a112 == 33 && ( cf==1  && a86 == 34)) && a53 == 33))) {
printf("POINT: 2930\n");
    		calculate_outputm3(input);
    	} 
printf("POINT: 2931\n");

    	if(((((a128 == 1 && (a86 == 35 &&  cf==1 )) && a95 == 8) && a144 == 33) && (a121 == 33 && (a140 == 4 && a128 == 1)))) {
printf("POINT: 2932\n");
    		calculate_outputm4(input);
    	} 
printf("POINT: 2933\n");

    	if(((a95 == 8 && (a95 == 8 && a90 == 33)) && ((a110 == 5 && (( cf==1  && a86 == 36) && a28 == 9)) && a68 == 2))) {
printf("POINT: 2934\n");
    		calculate_outputm5(input);
    	} 
    } 
printf("POINT: 2935\n");

    if(((a150 == 5 && (a0 == 32 && (a104 == 32 && a121 == 32))) && ((a178 == 32 && ( cf==1  && a200 == 32)) && a180 == 32))) {
printf("POINT: 2936\n");
printf("POINT: 2937\n");

    	if(((a127 == 7 && (a84 == 32 && ((a198 == 33 &&  cf==1 ) && a84 == 32))) && (a69 == 32 && (a69 == 32 && a176 == 3)))) {
printf("POINT: 2938\n");
    		calculate_outputm6(input);
    	} 
printf("POINT: 2939\n");

    	if(((( cf==1  && a198 == 32) && a196 == 6) && (((a140 == 5 && (a150 == 5 && a51 == 32)) && a46 == 32) && a16 == 10))) {
printf("POINT: 2940\n");
    		calculate_outputm7(input);
    	} 
printf("POINT: 2941\n");

    	if(((a160 == 32 && ((a198 == 34 &&  cf==1 ) && a187 == 4)) && ((a46 == 32 && (a48 == 32 && a144 == 32)) && a48 == 32))) {
printf("POINT: 2942\n");
    		calculate_outputm8(input);
    	} 
printf("POINT: 2943\n");

    	if(((a90 == 32 && (a198 == 35 &&  cf==1 )) && ((((a28 == 10 && a17 == 32) && a81 == 11) && a90 == 32) && a22 == 8))) {
printf("POINT: 2944\n");
    		calculate_outputm9(input);
    	} 
printf("POINT: 2945\n");

    	if(((a79 == 6 && ((a26 == 3 && a169 == 32) && a121 == 32)) && (a187 == 4 && ((a198 == 36 &&  cf==1 ) && a30 == 32)))) {
printf("POINT: 2946\n");
    		calculate_outputm10(input);
    	} 
    } 
printf("POINT: 2947\n");

    if(((a180 == 34 && (a104 == 34 && (a146 == 34 && (a200 == 34 &&  cf==1 )))) && ((a53 == 34 && a187 == 5) && a196 == 7))) {
printf("POINT: 2948\n");
printf("POINT: 2949\n");

    	if((((((a48 == 34 && a46 == 34) && a0 == 34) && a127 == 8) && a56 == 10) && ((a135 == 8 &&  cf==1 ) && a121 == 34))) {
printf("POINT: 2950\n");
    		calculate_outputm11(input);
    	} 
printf("POINT: 2951\n");

    	if(((a167 == 3 && (a150 == 6 && a93 == 4)) && ((a48 == 34 && (( cf==1  && a135 == 9) && a15 == 11)) && a146 == 34))) {
printf("POINT: 2952\n");
    		calculate_outputm12(input);
    	} 
printf("POINT: 2953\n");

    	if(((a51 == 34 && a179 == 34) && ((a15 == 11 && ((( cf==1  && a135 == 10) && a97 == 5) && a45 == 34)) && a109 == 34))) {
printf("POINT: 2954\n");
    		calculate_outputm13(input);
    	} 
printf("POINT: 2955\n");

    	if(((((a180 == 34 && a115 == 34) && a144 == 34) && a118 == 34) && ((( cf==1  && a135 == 11) && a30 == 34) && a34 == 34))) {
printf("POINT: 2956\n");
    		calculate_outputm14(input);
    	} 
printf("POINT: 2957\n");

    	if(((a105 == 12 && a179 == 34) && (((a97 == 5 && ((a135 == 12 &&  cf==1 ) && a105 == 12)) && a53 == 34) && a101 == 34))) {
printf("POINT: 2958\n");
    		calculate_outputm15(input);
    	} 
printf("POINT: 2959\n");

    	if((((( cf==1  && a135 == 13) && a115 == 34) && a184 == 7) && (((a101 == 34 && a69 == 34) && a20 == 5) && a193 == 9))) {
printf("POINT: 2960\n");
    		calculate_outputm16(input);
    	} 
printf("POINT: 2961\n");

    	if((((a104 == 34 && a37 == 10) && a97 == 5) && (((a174 == 9 && (a135 == 14 &&  cf==1 )) && a26 == 4) && a104 == 34))) {
printf("POINT: 2962\n");
    		calculate_outputm17(input);
    	} 
printf("POINT: 2963\n");

    	if((((a20 == 5 && (a169 == 34 && a154 == 34)) && a93 == 4) && (a32 == 34 && ((a135 == 15 &&  cf==1 ) && a119 == 34)))) {
printf("POINT: 2964\n");
    		calculate_outputm18(input);
    	} 
    } 
printf("POINT: 2965\n");

    if(((a115 == 32 && (a131 == 10 && a97 == 4)) && (a79 == 6 && ((( cf==1  && a200 == 35) && a165 == 32) && a0 == 32)))) {
printf("POINT: 2966\n");
printf("POINT: 2967\n");

    	if((((a0 == 32 && a56 == 9) && a53 == 32) && ((a153 == 4 && (a25 == 5 && (a134 == 10 &&  cf==1 ))) && a120 == 6))) {
printf("POINT: 2968\n");
    		calculate_outputm19(input);
    	} 
printf("POINT: 2969\n");

    	if((( cf==1  && a134 == 11) && (a51 == 32 && (a28 == 10 && (a26 == 3 && ((a167 == 2 && a125 == 32) && a128 == 2)))))) {
printf("POINT: 2970\n");
    		calculate_outputm20(input);
    	} 
printf("POINT: 2971\n");

    	if((((a104 == 32 && a34 == 32) && a146 == 32) && (a118 == 32 && ((( cf==1  && a134 == 12) && a165 == 32) && a97 == 4)))) {
printf("POINT: 2972\n");
    		calculate_outputm21(input);
    	} 
printf("POINT: 2973\n");

    	if((((( cf==1  && a134 == 13) && a37 == 9) && a154 == 32) && ((a68 == 3 && (a34 == 32 && a55 == 32)) && a88 == 32))) {
printf("POINT: 2974\n");
    		calculate_outputm22(input);
    	} 
printf("POINT: 2975\n");

    	if(((((a88 == 32 && a32 == 32) && a41 == 32) && a69 == 32) && ((a125 == 32 && (a134 == 14 &&  cf==1 )) && a178 == 32))) {
printf("POINT: 2976\n");
    		calculate_outputm23(input);
    	} 
printf("POINT: 2977\n");

    	if((((a28 == 10 && ( cf==1  && a134 == 15)) && a65 == 10) && ((a45 == 32 && (a0 == 32 && a101 == 32)) && a179 == 32))) {
printf("POINT: 2978\n");
    		calculate_outputm24(input);
    	} 
printf("POINT: 2979\n");

    	if((((a93 == 3 && ((a150 == 5 && a165 == 32) && a128 == 2)) && a41 == 32) && (a37 == 9 && ( cf==1  && a134 == 16)))) {
printf("POINT: 2980\n");
    		calculate_outputm25(input);
    	} 
printf("POINT: 2981\n");

    	if((((a41 == 32 && (a105 == 11 && ( cf==1  && a134 == 17))) && a55 == 32) && (a25 == 5 && (a141 == 32 && a167 == 2)))) {
printf("POINT: 2982\n");
    		calculate_outputm26(input);
    	} 
    } 
printf("POINT: 2983\n");

    if(((((a131 == 10 && ((a200 == 36 &&  cf==1 ) && a12 == 32)) && a20 == 4) && a0 == 32) && (a88 == 32 && a34 == 32))) {
printf("POINT: 2984\n");
printf("POINT: 2985\n");

    	if((((a158 == 6 &&  cf==1 ) && a45 == 32) && (a41 == 32 && (a127 == 7 && ((a127 == 7 && a30 == 32) && a46 == 32))))) {
printf("POINT: 2986\n");
    		calculate_outputm27(input);
    	} 
printf("POINT: 2987\n");

    	if((((( cf==1  && a158 == 7) && a65 == 10) && a55 == 32) && (((a16 == 10 && a95 == 9) && a178 == 32) && a101 == 32))) {
printf("POINT: 2988\n");
    		calculate_outputm28(input);
    	} 
printf("POINT: 2989\n");

    	if((((a32 == 32 && (a121 == 32 && ( cf==1  && a158 == 8))) && a84 == 32) && ((a119 == 32 && a95 == 9) && a79 == 6))) {
printf("POINT: 2990\n");
    		calculate_outputm29(input);
    	} 
printf("POINT: 2991\n");

    	if(((((a158 == 9 &&  cf==1 ) && a121 == 32) && a180 == 32) && (a187 == 4 && (a55 == 32 && (a119 == 32 && a128 == 2))))) {
printf("POINT: 2992\n");
    		calculate_outputm30(input);
    	} 
printf("POINT: 2993\n");

    	if((((a0 == 32 && a41 == 32) && a160 == 32) && (a127 == 7 && (a93 == 3 && (a180 == 32 && (a158 == 10 &&  cf==1 )))))) {
printf("POINT: 2994\n");
    		calculate_outputm31(input);
    	} 
printf("POINT: 2995\n");

    	if(((a2 == 4 && a179 == 32) && (a167 == 2 && (a65 == 10 && (a26 == 3 && (a125 == 32 && ( cf==1  && a158 == 11))))))) {
printf("POINT: 2996\n");
    		calculate_outputm32(input);
    	} 
printf("POINT: 2997\n");

    	if(((a20 == 4 && ( cf==1  && a158 == 12)) && (((a146 == 32 && (a16 == 10 && a69 == 32)) && a153 == 4) && a104 == 32))) {
printf("POINT: 2998\n");
    		calculate_outputm33(input);
    	} 
printf("POINT: 2999\n");

    	if(((a169 == 32 && (( cf==1  && a158 == 13) && a41 == 32)) && (a25 == 5 && ((a153 == 4 && a41 == 32) && a193 == 8)))) {
printf("POINT: 3000\n");
    		calculate_outputm34(input);
    	} 
    } 
    errorCheck();

printf("POINT: 3001\n");

    if( cf==1 ) 
printf("POINT: 3002\n");
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}

int main()
{
    // main i/o-loop
printf("POINT: 3003\n");

    for (int FLAG=0;FLAG<BOUND;FLAG++){
printf("POINT: 3004\n");
    
        // read input
        int input; __CPROVER_input("input",input); 

__CPROVER_input("a81",a81); 
__CPROVER_input("a158",a158); 
__CPROVER_input("a45",a45); 
__CPROVER_input("a168",a168); 
__CPROVER_input("a100",a100); 
__CPROVER_input("a120",a120); 
__CPROVER_input("a63",a63);      
__CPROVER_input("a119",a119); 
__CPROVER_input("a112",a112); 
__CPROVER_input("a27",a27);
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a81,a158,a45,a168,a100,a120,a63,a119,a112,a27);
        // operate eca engine
printf("POINT: 3005\n");

        if((input != 3) && (input != 5) && (input != 9) && (input != 8) && (input != 6) && (input != 1) && (input != 4) && (input != 7) && (input != 10) && (input != 2))
printf("POINT: 3006\n");
          printf("this is return -2");
        calculate_output(input);
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a81,a158,a45,a168,a100,a120,a63,a119,a112,a27);
    return 0;
}
