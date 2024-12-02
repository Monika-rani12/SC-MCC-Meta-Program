#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>

    #define BOUND 1

	// inputs
	int inputs[] = {11,7,5,8,1,14,15,2,9,3,4,10,13,12,6};

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
	void calculate_outputm261(int);
	void calculate_outputm262(int);
	void calculate_outputm263(int);
	void calculate_outputm264(int);
	void calculate_outputm265(int);
	void calculate_outputm266(int);
	void calculate_outputm267(int);
	void calculate_outputm268(int);
	void calculate_outputm269(int);
	void calculate_outputm270(int);
	void calculate_outputm271(int);
	void calculate_outputm272(int);
	void calculate_outputm273(int);
	void calculate_outputm274(int);
	void calculate_outputm275(int);
	void calculate_outputm276(int);
	void calculate_outputm277(int);
	void calculate_outputm278(int);
	void calculate_outputm279(int);
	void calculate_outputm280(int);
	void calculate_outputm281(int);
	void calculate_outputm282(int);
	void calculate_outputm283(int);
	void calculate_outputm284(int);
	void calculate_outputm285(int);
	void calculate_outputm286(int);
	void calculate_outputm287(int);
	void calculate_outputm288(int);
	void calculate_outputm289(int);
	void calculate_outputm290(int);
	void calculate_outputm291(int);
	void calculate_outputm292(int);
	void calculate_outputm293(int);
	void calculate_outputm294(int);
	void calculate_outputm295(int);
	void calculate_outputm296(int);
	void calculate_outputm297(int);
	void calculate_outputm298(int);
	void calculate_outputm299(int);
	void calculate_outputm300(int);
	void calculate_outputm301(int);
	void calculate_outputm302(int);
	void calculate_outputm303(int);
	void calculate_outputm304(int);
	void calculate_outputm305(int);
	void calculate_outputm306(int);
	void calculate_outputm307(int);
	void calculate_outputm308(int);
	void calculate_outputm309(int);
	void calculate_outputm310(int);
	void calculate_outputm311(int);
	void calculate_outputm312(int);
	void calculate_outputm313(int);
	void calculate_outputm314(int);
	void calculate_outputm315(int);
	void calculate_outputm316(int);
	void calculate_outputm317(int);
	void calculate_outputm318(int);

	 int a647992626,a2068151937,a1163913646,a175435081,a573660885,a400180708,a1708500674,a1520738029,a322699279,a650139459;
	 
	 int a878535168 = 11;
	 int a1588068131  = 32;
	 int cf = 1;
	 int a372963703 = 14;
	 int a681527819  = 32;
	 int a460729584  = 32;
	 int a554726731  = 33;
	 int a1213256257 = 14;
	 int a768322760 = 14;
	 int a1410369705 = 1;
	 int a942522795 = 11;
	 int a1280269169 = 7;
	 int a777244229  = 34;
	 int a200251173  = 35;
	 int a677112242 = 6;
	 int a1276394160  = 36;
	 int a213146198  = 36;
	 int a998691543  = 35;
	 int a1916167078 = 16;
	 int a710810301 = 7;
	 int a1204585576  = 32;
	 int a966113011 = 8;
	 int a1466212053  = 35;
	 int a2047437785  = 35;
	 int a1926168604  = 35;
	 int a1279395252 = 8;
	 int a599073259 = 12;
	 int a18652935 = 3;
	 int a1288456936 = 10;
	 int a1500959558 = 10;
	 int a1368342524 = 16;
	 int a619470312 = 1;
	 int a775360537 = 13;
	 int a1012822964  = 35;
	 int a191699712 = 9;
	 int a2083228155 = 4;
	 int a1410514914 = 12;
	 int a1712019689  = 34;
	 int a608032282 = 5;
	 int a129815901 = 9;
	 int a470663134 = 10;
	 int a948320041  = 32;
	 int a1404083158  = 35;
	 int a524497834 = 8;
	 int a1516401282  = 35;
	 int a150836410  = 33;
	 int a947182640 = 11;


	void errorCheck() {
printf("POINT: 1\n");

	    if(((a470663134 == 8 && a1368342524 == 16) && a710810301 == 8)){
printf("POINT: 2\n");
	    cf = 0;
	    
	    }
printf("POINT: 3\n");

	    if(((a554726731 == 35 && a1012822964 == 34) && a710810301 == 10)){
printf("POINT: 4\n");
	    cf = 0;
	    
	    }
printf("POINT: 5\n");

	    if(((a1288456936 == 15 && a647992626 == 7) && a710810301 == 3)){
printf("POINT: 6\n");
	    cf = 0;
	    
	    }
printf("POINT: 7\n");

	    if(((a966113011 == 5 && a1213256257 == 9) && a710810301 == 6)){
printf("POINT: 8\n");
	    cf = 0;
	    
	    }
printf("POINT: 9\n");

	    if(((a18652935 == 4 && a1368342524 == 10) && a710810301 == 8)){
printf("POINT: 10\n");
	    cf = 0;
	    
	    }
printf("POINT: 11\n");

	    if(((a150836410 == 32 && a2068151937 == 15) && a710810301 == 9)){
printf("POINT: 12\n");
	    cf = 0;
	    
	    }
printf("POINT: 13\n");

	    if(((a372963703 == 12 && a460729584 == 34) && a710810301 == 4)){
printf("POINT: 14\n");
	    cf = 0;
	    
	    }
printf("POINT: 15\n");

	    if(((a524497834 == 4 && a1926168604 == 33) && a710810301 == 5)){
printf("POINT: 16\n");
	    cf = 0;
	    
	    }
printf("POINT: 17\n");

	    if(((a1280269169 == 13 && a1012822964 == 36) && a710810301 == 10)){
printf("POINT: 18\n");
	    cf = 0;
	    
	    }
printf("POINT: 19\n");

	    if(((a677112242 == 10 && a1368342524 == 14) && a710810301 == 8)){
printf("POINT: 20\n");
	    cf = 0;
	    
	    }
printf("POINT: 21\n");

	    if(((a942522795 == 11 && a1926168604 == 36) && a710810301 == 5)){
printf("POINT: 22\n");
	    cf = 0;
	    
	    }
printf("POINT: 23\n");

	    if(((a1410514914 == 10 && a608032282 == 4) && a710810301 == 7)){
printf("POINT: 24\n");
	    cf = 0;
	    
	    }
printf("POINT: 25\n");

	    if(((a573660885 == 4 && a608032282 == 6) && a710810301 == 7)){
printf("POINT: 26\n");
	    cf = 0;
	    
	    }
printf("POINT: 27\n");

	    if(((a1279395252 == 6 && a2068151937 == 14) && a710810301 == 9)){
printf("POINT: 28\n");
	    cf = 0;
	    
	    }
printf("POINT: 29\n");

	    if(((a947182640 == 11 && a1012822964 == 32) && a710810301 == 10)){
printf("POINT: 30\n");
	    cf = 0;
	    
	    }
printf("POINT: 31\n");

	    if(((a1163913646 == 32 && a1368342524 == 13) && a710810301 == 8)){
printf("POINT: 32\n");
	    cf = 0;
	    
	    }
printf("POINT: 33\n");

	    if(((a1708500674 == 32 && a1213256257 == 11) && a710810301 == 6)){
printf("POINT: 34\n");
	    cf = 0;
	    
	    }
printf("POINT: 35\n");

	    if(((a554726731 == 34 && a1012822964 == 34) && a710810301 == 10)){
printf("POINT: 36\n");
	    cf = 0;
	    
	    }
printf("POINT: 37\n");

	    if(((a1916167078 == 15 && a1213256257 == 12) && a710810301 == 6)){
printf("POINT: 38\n");
	    cf = 0;
	    
	    }
printf("POINT: 39\n");

	    if(((a1410369705 == 7 && a2068151937 == 13) && a710810301 == 9)){
printf("POINT: 40\n");
	    cf = 0;
	    
	    }
printf("POINT: 41\n");

	    if(((a599073259 == 8 && a1368342524 == 15) && a710810301 == 8)){
printf("POINT: 42\n");
	    cf = 0;
	    
	    }
printf("POINT: 43\n");

	    if(((a573660885 == 7 && a608032282 == 6) && a710810301 == 7)){
printf("POINT: 44\n");
	    cf = 0;
	    
	    }
printf("POINT: 45\n");

	    if(((a947182640 == 12 && a1012822964 == 32) && a710810301 == 10)){
printf("POINT: 46\n");
	    cf = 0;
	    
	    }
printf("POINT: 47\n");

	    if(((a175435081 == 14 && a1926168604 == 35) && a710810301 == 5)){
printf("POINT: 48\n");
	    cf = 0;
	    
	    }
printf("POINT: 49\n");

	    if(((a200251173 == 33 && a1213256257 == 13) && a710810301 == 6)){
printf("POINT: 50\n");
	    cf = 0;
	    
	    }
printf("POINT: 51\n");

	    if(((a18652935 == 8 && a1368342524 == 10) && a710810301 == 8)){
printf("POINT: 52\n");
	    cf = 0;
	    
	    }
printf("POINT: 53\n");

	    if(((a1500959558 == 11 && a647992626 == 6) && a710810301 == 3)){
printf("POINT: 54\n");
	    cf = 0;
	    
	    }
printf("POINT: 55\n");

	    if(((a768322760 == 14 && a1213256257 == 10) && a710810301 == 6)){
printf("POINT: 56\n");
	    cf = 0;
	    
	    }
printf("POINT: 57\n");

	    if(((a129815901 == 12 && a1012822964 == 35) && a710810301 == 10)){
printf("POINT: 58\n");
	    cf = 0;
	    
	    }
printf("POINT: 59\n");

	    if(((a878535168 == 13 && a460729584 == 36) && a710810301 == 4)){
printf("POINT: 60\n");
	    cf = 0;
	    
	    }
printf("POINT: 61\n");

	    if(((a2083228155 == 7 && a1012822964 == 33) && a710810301 == 10)){
printf("POINT: 62\n");
	    cf = 0;
	    
	    }
printf("POINT: 63\n");

	    if(((a599073259 == 9 && a460729584 == 32) && a710810301 == 4)){
printf("POINT: 64\n");
	    cf = 0;
	    
	    }
printf("POINT: 65\n");

	    if(((a524497834 == 6 && a1926168604 == 33) && a710810301 == 5)){
printf("POINT: 66\n");
	    cf = 0;
	    
	    }
printf("POINT: 67\n");

	    if(((a599073259 == 10 && a460729584 == 32) && a710810301 == 4)){
printf("POINT: 68\n");
	    cf = 0;
	    
	    }
printf("POINT: 69\n");

	    if(((a948320041 == 36 && a2068151937 == 11) && a710810301 == 9)){
printf("POINT: 70\n");
	    cf = 0;
	    
	    }
printf("POINT: 71\n");

	    if(((a175435081 == 10 && a1926168604 == 35) && a710810301 == 5)){
printf("POINT: 72\n");
	    cf = 0;
	    
	    }
printf("POINT: 73\n");

	    if(((a175435081 == 13 && a1926168604 == 35) && a710810301 == 5)){
printf("POINT: 74\n");
	    cf = 0;
	    
	    }
printf("POINT: 75\n");

	    if(((a1916167078 == 9 && a1213256257 == 12) && a710810301 == 6)){
printf("POINT: 76\n");
	    cf = 0;
	    
	    }
printf("POINT: 77\n");

	    if(((a1520738029 == 12 && a608032282 == 2) && a710810301 == 7)){
printf("POINT: 78\n");
	    cf = 0;
	    
	    }
printf("POINT: 79\n");

	    if(((a681527819 == 36 && a2068151937 == 12) && a710810301 == 9)){
printf("POINT: 80\n");
	    cf = 0;
	    
	    }
printf("POINT: 81\n");

	    if(((a599073259 == 9 && a1368342524 == 15) && a710810301 == 8)){
printf("POINT: 82\n");
	    cf = 0;
	    
	    }
printf("POINT: 83\n");

	    if(((a878535168 == 10 && a460729584 == 36) && a710810301 == 4)){
printf("POINT: 84\n");
	    cf = 0;
	    
	    }
printf("POINT: 85\n");

	    if(((a1410514914 == 9 && a608032282 == 4) && a710810301 == 7)){
printf("POINT: 86\n");
	    cf = 0;
	    
	    }
printf("POINT: 87\n");

	    if(((a1708500674 == 36 && a1213256257 == 16) && a710810301 == 6)){
printf("POINT: 88\n");
	    cf = 0;
	    
	    }
printf("POINT: 89\n");

	    if(((a200251173 == 35 && a1213256257 == 13) && a710810301 == 6)){
printf("POINT: 90\n");
	    cf = 0;
	    
	    }
printf("POINT: 91\n");

	    if(((a677112242 == 7 && a1368342524 == 14) && a710810301 == 8)){
printf("POINT: 92\n");
	    cf = 0;
	    
	    }
printf("POINT: 93\n");

	    if(((a1466212053 == 34 && a1368342524 == 11) && a710810301 == 8)){
printf("POINT: 94\n");
	    cf = 0;
	    
	    }
printf("POINT: 95\n");

	    if(((a677112242 == 5 && a1368342524 == 14) && a710810301 == 8)){
printf("POINT: 96\n");
	    cf = 0;
	    
	    }
printf("POINT: 97\n");

	    if(((a1708500674 == 33 && a1213256257 == 11) && a710810301 == 6)){
printf("POINT: 98\n");
	    cf = 0;
	    
	    }
printf("POINT: 99\n");

	    if(((a470663134 == 11 && a1368342524 == 16) && a710810301 == 8)){
printf("POINT: 100\n");
	    cf = 0;
	    
	    }
printf("POINT: 101\n");

	    if(((a677112242 == 6 && a1368342524 == 14) && a710810301 == 8)){
printf("POINT: 102\n");
	    cf = 0;
	    
	    }
printf("POINT: 103\n");

	    if(((a2083228155 == 1 && a1012822964 == 33) && a710810301 == 10)){
printf("POINT: 104\n");
	    cf = 0;
	    
	    }
printf("POINT: 105\n");

	    if(((a1280269169 == 7 && a1012822964 == 36) && a710810301 == 10)){
printf("POINT: 106\n");
	    cf = 0;
	    
	    }
printf("POINT: 107\n");

	    if(((a1404083158 == 34 && a2068151937 == 9) && a710810301 == 9)){
printf("POINT: 108\n");
	    cf = 0;
	    
	    }
printf("POINT: 109\n");

	    if(((a775360537 == 13 && a1926168604 == 32) && a710810301 == 5)){
printf("POINT: 110\n");
	    cf = 0;
	    
	    }
printf("POINT: 111\n");

	    if(((a372963703 == 14 && a460729584 == 34) && a710810301 == 4)){
printf("POINT: 112\n");
	    cf = 0;
	    
	    }
printf("POINT: 113\n");

	    if(((a2047437785 == 34 && a647992626 == 3) && a710810301 == 3)){
printf("POINT: 114\n");
	    cf = 0;
	    
	    }
printf("POINT: 115\n");

	    if(((a372963703 == 13 && a460729584 == 34) && a710810301 == 4)){
printf("POINT: 116\n");
	    cf = 0;
	    
	    }
printf("POINT: 117\n");

	    if(((a150836410 == 33 && a2068151937 == 15) && a710810301 == 9)){
printf("POINT: 118\n");
	    cf = 0;
	    
	    }
printf("POINT: 119\n");

	    if(((a619470312 == 5 && a1213256257 == 15) && a710810301 == 6)){
printf("POINT: 120\n");
	    cf = 0;
	    
	    }
printf("POINT: 121\n");

	    if(((a1280269169 == 12 && a1012822964 == 36) && a710810301 == 10)){
printf("POINT: 122\n");
	    cf = 0;
	    
	    }
printf("POINT: 123\n");

	    if(((a1280269169 == 9 && a647992626 == 5) && a710810301 == 3)){
printf("POINT: 124\n");
	    cf = 0;
	    
	    }
printf("POINT: 125\n");

	    if(((a775360537 == 8 && a1926168604 == 32) && a710810301 == 5)){
printf("POINT: 126\n");
	    cf = 0;
	    
	    }
printf("POINT: 127\n");

	    if(((a1280269169 == 8 && a647992626 == 5) && a710810301 == 3)){
printf("POINT: 128\n");
	    cf = 0;
	    
	    }
printf("POINT: 129\n");

	    if(((a768322760 == 9 && a1213256257 == 10) && a710810301 == 6)){
printf("POINT: 130\n");
	    cf = 0;
	    
	    }
printf("POINT: 131\n");

	    if(((a1279395252 == 7 && a2068151937 == 14) && a710810301 == 9)){
printf("POINT: 132\n");
	    cf = 0;
	    
	    }
printf("POINT: 133\n");

	    if(((a129815901 == 7 && a1012822964 == 35) && a710810301 == 10)){
printf("POINT: 134\n");
	    cf = 0;
	    
	    }
printf("POINT: 135\n");

	    if(((a942522795 == 14 && a1926168604 == 36) && a710810301 == 5)){
printf("POINT: 136\n");
	    cf = 0;
	    
	    }
printf("POINT: 137\n");

	    if(((a1280269169 == 12 && a647992626 == 5) && a710810301 == 3)){
printf("POINT: 138\n");
	    cf = 0;
	    
	    }
printf("POINT: 139\n");

	    if(((a470663134 == 6 && a1368342524 == 16) && a710810301 == 8)){
printf("POINT: 140\n");
	    cf = 0;
	    
	    }
printf("POINT: 141\n");

	    if(((a213146198 == 36 && a1213256257 == 14) && a710810301 == 6)){
printf("POINT: 142\n");
	    cf = 0;
	    
	    }
printf("POINT: 143\n");

	    if(((a1012822964 == 33 && a2068151937 == 10) && a710810301 == 9)){
printf("POINT: 144\n");
	    cf = 0;
	    
	    }
printf("POINT: 145\n");

	    if(((a777244229 == 33 && a460729584 == 35) && a710810301 == 4)){
printf("POINT: 146\n");
	    cf = 0;
	    
	    }
printf("POINT: 147\n");

	    if(((a599073259 == 15 && a460729584 == 32) && a710810301 == 4)){
printf("POINT: 148\n");
	    cf = 0;
	    
	    }
printf("POINT: 149\n");

	    if(((a681527819 == 36 && a460729584 == 33) && a710810301 == 4)){
printf("POINT: 150\n");
	    cf = 0;
	    
	    }
printf("POINT: 151\n");

	    if(((a677112242 == 4 && a1368342524 == 14) && a710810301 == 8)){
printf("POINT: 152\n");
	    cf = 0;
	    
	    }
printf("POINT: 153\n");

	    if(((a129815901 == 8 && a1012822964 == 35) && a710810301 == 10)){
printf("POINT: 154\n");
	    cf = 0;
	    
	    }
printf("POINT: 155\n");

	    if(((a2083228155 == 3 && a1012822964 == 33) && a710810301 == 10)){
printf("POINT: 156\n");
	    cf = 0;
	    
	    }
printf("POINT: 157\n");

	    if(((a573660885 == 6 && a608032282 == 6) && a710810301 == 7)){
printf("POINT: 158\n");
	    cf = 0;
	    
	    }
printf("POINT: 159\n");

	    if(((a1516401282 == 33 && a647992626 == 8) && a710810301 == 3)){
printf("POINT: 160\n");
	    cf = 0;
	    
	    }
printf("POINT: 161\n");

	    if(((a2047437785 == 36 && a647992626 == 3) && a710810301 == 3)){
printf("POINT: 162\n");
	    cf = 0;
	    
	    }
printf("POINT: 163\n");

	    if(((a681527819 == 33 && a2068151937 == 12) && a710810301 == 9)){
printf("POINT: 164\n");
	    cf = 0;
	    
	    }
printf("POINT: 165\n");

	    if(((a2047437785 == 32 && a647992626 == 3) && a710810301 == 3)){
printf("POINT: 166\n");
	    cf = 0;
	    
	    }
printf("POINT: 167\n");

	    if(((a650139459 == 12 && a608032282 == 8) && a710810301 == 7)){
printf("POINT: 168\n");
	    cf = 0;
	    
	    }
printf("POINT: 169\n");

	    if(((a947182640 == 17 && a1012822964 == 32) && a710810301 == 10)){
printf("POINT: 170\n");
	    cf = 0;
	    
	    }
printf("POINT: 171\n");

	    if(((a2083228155 == 5 && a1012822964 == 33) && a710810301 == 10)){
printf("POINT: 172\n");
	    cf = 0;
	    
	    }
printf("POINT: 173\n");

	    if(((a599073259 == 13 && a460729584 == 32) && a710810301 == 4)){
printf("POINT: 174\n");
	    cf = 0;
	    
	    }
printf("POINT: 175\n");

	    if(((a322699279 == 14 && a608032282 == 7) && a710810301 == 7)){
printf("POINT: 176\n");
	    cf = 0;
	    
	    }
printf("POINT: 177\n");

	    if(((a1288456936 == 11 && a647992626 == 7) && a710810301 == 3)){
printf("POINT: 178\n");
	    cf = 0;
	    
	    }
printf("POINT: 179\n");

	    if(((a191699712 == 14 && a1368342524 == 17) && a710810301 == 8)){
printf("POINT: 180\n");
	    cf = 0;
	    
	    }
printf("POINT: 181\n");

	    if(((a650139459 == 8 && a608032282 == 8) && a710810301 == 7)){
printf("POINT: 182\n");
	    cf = 0;
	    
	    }
printf("POINT: 183\n");

	    if(((a191699712 == 12 && a1368342524 == 17) && a710810301 == 8)){
printf("POINT: 184\n");
	    cf = 0;
	    
	    }
printf("POINT: 185\n");

	    if(((a942522795 == 8 && a1926168604 == 36) && a710810301 == 5)){
printf("POINT: 186\n");
	    cf = 0;
	    
	    }
printf("POINT: 187\n");

	    if(((a554726731 == 36 && a1012822964 == 34) && a710810301 == 10)){
printf("POINT: 188\n");
	    cf = 0;
	    
	    }
printf("POINT: 189\n");

	    if(((a470663134 == 9 && a1368342524 == 16) && a710810301 == 8)){
printf("POINT: 190\n");
	    cf = 0;
	    
	    }
printf("POINT: 191\n");

	    if(((a878535168 == 12 && a460729584 == 36) && a710810301 == 4)){
printf("POINT: 192\n");
	    cf = 0;
	    
	    }
printf("POINT: 193\n");

	    if(((a1404083158 == 35 && a2068151937 == 9) && a710810301 == 9)){
printf("POINT: 194\n");
	    cf = 0;
	    
	    }
printf("POINT: 195\n");

	    if(((a599073259 == 11 && a1368342524 == 15) && a710810301 == 8)){
printf("POINT: 196\n");
	    cf = 0;
	    
	    }
printf("POINT: 197\n");

	    if(((a524497834 == 7 && a1926168604 == 33) && a710810301 == 5)){
printf("POINT: 198\n");
	    cf = 0;
	    
	    }
printf("POINT: 199\n");

	    if(((a942522795 == 9 && a1926168604 == 36) && a710810301 == 5)){
printf("POINT: 200\n");
	    cf = 0;
	    
	    }
	}
 void calculate_outputm56(int input) {
printf("POINT: 201\n");

    if(((a710810301 == 3 && ((a1276394160 == 35 &&  cf==1 ) && (input == 4))) && a647992626 == 2)) {
printf("POINT: 202\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 203\n");

    } 
 if(((((a1276394160 == 35 &&  cf==1 ) && a647992626 == 2) && (input == 13)) && a710810301 == 3)) {
printf("POINT: 204\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm57(int input) {
printf("POINT: 205\n");

    if(((((input == 1) && (a1276394160 == 36 &&  cf==1 )) && a710810301 == 3) && a647992626 == 2)) {
printf("POINT: 206\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 207\n");

    } 
 if(((input == 10) && ((( cf==1  && a647992626 == 2) && a1276394160 == 36) && a710810301 == 3))) {
printf("POINT: 208\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm1(int input) {
printf("POINT: 209\n");

    if(( cf==1  && a1276394160 == 35)) {
printf("POINT: 210\n");
    	calculate_outputm56(input);
    } 
printf("POINT: 211\n");

    if(( cf==1  && a1276394160 == 36)) {
printf("POINT: 212\n");
    	calculate_outputm57(input);
    } 
}
 void calculate_outputm61(int input) {
printf("POINT: 213\n");

    if(((a1588068131 == 33 && (( cf==1  && (input == 6)) && a647992626 == 4)) && a710810301 == 3)) {
printf("POINT: 214\n");
    	cf = 0;
    	a1213256257 = 9;
    	a710810301 = 6;
    	a966113011 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm3(int input) {
printf("POINT: 215\n");

    if((a1588068131 == 33 &&  cf==1 )) {
printf("POINT: 216\n");
    	calculate_outputm61(input);
    } 
}
 void calculate_outputm62(int input) {
printf("POINT: 217\n");

    if((a710810301 == 3 && ((input == 4) && (a1280269169 == 6 && ( cf==1  && a647992626 == 5))))) {
printf("POINT: 218\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 33 ;
    	a524497834 = 9; 
    	 printf("%d\n", 20);  
printf("POINT: 219\n");

    } 
 if((a710810301 == 3 && ((a1280269169 == 6 && ((input == 6) &&  cf==1 )) && a647992626 == 5))) {
printf("POINT: 220\n");
    	cf = 0;
    	a1712019689 = 33 ;
    	a647992626 = 9; 
    	 printf("%d\n", 17);  
printf("POINT: 221\n");

    } 
 if(((input == 7) && (a710810301 == 3 && (a647992626 == 5 && (a1280269169 == 6 &&  cf==1 ))))) {
printf("POINT: 222\n");
    	cf = 0;
    	a608032282 = 7;
    	a710810301 = 7;
    	a322699279 = 13; 
    	 printf("%d\n", 20);  
printf("POINT: 223\n");

    } 
 if(((a1280269169 == 6 && (((input == 12) &&  cf==1 ) && a647992626 == 5)) && a710810301 == 3)) {
printf("POINT: 224\n");
    	cf = 0;
    	a647992626 = 6;
    	a1500959558 = 7; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm63(int input) {
printf("POINT: 225\n");

    if((a710810301 == 3 && ((( cf==1  && a1280269169 == 7) && (input == 7)) && a647992626 == 5))) {
printf("POINT: 226\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 227\n");

    } 
 if(((input == 11) && (((a647992626 == 5 &&  cf==1 ) && a710810301 == 3) && a1280269169 == 7))) {
printf("POINT: 228\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 229\n");

    } 
 if(((((a710810301 == 3 &&  cf==1 ) && (input == 13)) && a647992626 == 5) && a1280269169 == 7)) {
printf("POINT: 230\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm4(int input) {
printf("POINT: 231\n");

    if(( cf==1  && a1280269169 == 6)) {
printf("POINT: 232\n");
    	calculate_outputm62(input);
    } 
printf("POINT: 233\n");

    if((a1280269169 == 7 &&  cf==1 )) {
printf("POINT: 234\n");
    	calculate_outputm63(input);
    } 
}
 void calculate_outputm67(int input) {
printf("POINT: 235\n");

    if(((input == 2) && (a647992626 == 6 && ((a710810301 == 3 &&  cf==1 ) && a1500959558 == 5)))) {
printf("POINT: 236\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 8;
    	a650139459 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm68(int input) {
printf("POINT: 237\n");

    if((a710810301 == 3 && ((input == 1) && (a1500959558 == 6 && ( cf==1  && a647992626 == 6))))) {
printf("POINT: 238\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 239\n");

    } 
 if((a710810301 == 3 && ((( cf==1  && a647992626 == 6) && a1500959558 == 6) && (input == 15)))) {
printf("POINT: 240\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm69(int input) {
printf("POINT: 241\n");

    if((a1500959558 == 7 && (((a647992626 == 6 &&  cf==1 ) && (input == 2)) && a710810301 == 3))) {
printf("POINT: 242\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 22);  
printf("POINT: 243\n");

    } 
 if((a1500959558 == 7 && (a710810301 == 3 && ((input == 7) && ( cf==1  && a647992626 == 6))))) {
printf("POINT: 244\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
printf("POINT: 245\n");

    } 
 if(((a710810301 == 3 && (a1500959558 == 7 && ((input == 12) &&  cf==1 ))) && a647992626 == 6)) {
printf("POINT: 246\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 247\n");

    } 
 if((a710810301 == 3 && (a647992626 == 6 && (( cf==1  && (input == 13)) && a1500959558 == 7)))) {
printf("POINT: 248\n");
    	cf = 0;
    	a710810301 = 9;
    	a2068151937 = 13;
    	a1410369705 = 5; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm70(int input) {
printf("POINT: 249\n");

    if((((a647992626 == 6 && ( cf==1  && a710810301 == 3)) && a1500959558 == 9) && (input == 8))) {
printf("POINT: 250\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 251\n");

    } 
 if((a1500959558 == 9 && (a647992626 == 6 && (((input == 12) &&  cf==1 ) && a710810301 == 3)))) {
printf("POINT: 252\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm5(int input) {
printf("POINT: 253\n");

    if((a1500959558 == 5 &&  cf==1 )) {
printf("POINT: 254\n");
    	calculate_outputm67(input);
    } 
printf("POINT: 255\n");

    if(( cf==1  && a1500959558 == 6)) {
printf("POINT: 256\n");
    	calculate_outputm68(input);
    } 
printf("POINT: 257\n");

    if(( cf==1  && a1500959558 == 7)) {
printf("POINT: 258\n");
    	calculate_outputm69(input);
    } 
printf("POINT: 259\n");

    if(( cf==1  && a1500959558 == 9)) {
printf("POINT: 260\n");
    	calculate_outputm70(input);
    } 
}
 void calculate_outputm73(int input) {
printf("POINT: 261\n");

    if(((input == 3) && ((a710810301 == 3 && ( cf==1  && a647992626 == 7)) && a1288456936 == 12))) {
printf("POINT: 262\n");
    	cf = 0;
    	a460729584 = 33 ;
    	a681527819 = 33 ;
    	a710810301 = 4; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm74(int input) {
printf("POINT: 263\n");

    if((((a710810301 == 3 && ( cf==1  && a1288456936 == 13)) && (input == 3)) && a647992626 == 7)) {
printf("POINT: 264\n");
    	cf = 0;
    	a460729584 = 34 ;
    	a710810301 = 4;
    	a372963703 = 17; 
    	 printf("%d\n", 16);  
printf("POINT: 265\n");

    } 
 if((((( cf==1  && a710810301 == 3) && (input == 6)) && a1288456936 == 13) && a647992626 == 7)) {
printf("POINT: 266\n");
    	cf = 0;
    	a710810301 = 4;
    	a460729584 = 36 ;
    	a878535168 = 10; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm6(int input) {
printf("POINT: 267\n");

    if((a1288456936 == 12 &&  cf==1 )) {
printf("POINT: 268\n");
    	calculate_outputm73(input);
    } 
printf("POINT: 269\n");

    if(( cf==1  && a1288456936 == 13)) {
printf("POINT: 270\n");
    	calculate_outputm74(input);
    } 
}
 void calculate_outputm76(int input) {
printf("POINT: 271\n");

    if((a647992626 == 8 && (a710810301 == 3 && (a1516401282 == 32 && ((input == 5) &&  cf==1 ))))) {
printf("POINT: 272\n");
    	cf = 0;
    	a948320041 = 35 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 273\n");

    } 
 if(((input == 8) && (a710810301 == 3 && (a1516401282 == 32 && (a647992626 == 8 &&  cf==1 ))))) {
printf("POINT: 274\n");
    	cf = 0;
    	a998691543 = 34 ;
    	a710810301 = 7;
    	a608032282 = 3; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm7(int input) {
printf("POINT: 275\n");

    if(( cf==1  && a1516401282 == 32)) {
printf("POINT: 276\n");
    	calculate_outputm76(input);
    } 
}
 void calculate_outputm78(int input) {
printf("POINT: 277\n");

    if(((a1712019689 == 33 && (((input == 7) &&  cf==1 ) && a710810301 == 3)) && a647992626 == 9)) {
printf("POINT: 278\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 279\n");

    } 
 if((a1712019689 == 33 && ((input == 9) && (a710810301 == 3 && (a647992626 == 9 &&  cf==1 ))))) {
printf("POINT: 280\n");
    	cf = 0;
    	a2068151937 = 13;
    	a710810301 = 9;
    	a1410369705 = 5; 
    	 printf("%d\n", 26);  
printf("POINT: 281\n");

    } 
 if(((input == 10) && (a1712019689 == 33 && ((a710810301 == 3 &&  cf==1 ) && a647992626 == 9)))) {
printf("POINT: 282\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 283\n");

    } 
 if((((( cf==1  && a710810301 == 3) && a1712019689 == 33) && (input == 11)) && a647992626 == 9)) {
printf("POINT: 284\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm79(int input) {
printf("POINT: 285\n");

    if((a710810301 == 3 && ((a1712019689 == 34 && ( cf==1  && a647992626 == 9)) && (input == 3)))) {
printf("POINT: 286\n");
    	cf = 0;
    	a460729584 = 34 ;
    	a710810301 = 4;
    	a372963703 = 17; 
    	 printf("%d\n", 26);  
printf("POINT: 287\n");

    } 
 if((((a1712019689 == 34 && ( cf==1  && a647992626 == 9)) && (input == 11)) && a710810301 == 3)) {
printf("POINT: 288\n");
    	cf = 0;
    	a647992626 = 7;
    	a1288456936 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm80(int input) {
printf("POINT: 289\n");

    if((a647992626 == 9 && ((a1712019689 == 35 && ( cf==1  && (input == 5))) && a710810301 == 3))) {
printf("POINT: 290\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 291\n");

    } 
 if((((a1712019689 == 35 && (a647992626 == 9 &&  cf==1 )) && (input == 11)) && a710810301 == 3)) {
printf("POINT: 292\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm81(int input) {
printf("POINT: 293\n");

    if((a710810301 == 3 && (((a1712019689 == 36 &&  cf==1 ) && a647992626 == 9) && (input == 3)))) {
printf("POINT: 294\n");
    	cf = 0;
    	a213146198 = 35 ;
    	a710810301 = 6;
    	a1213256257 = 14; 
    	 printf("%d\n", 17);  
printf("POINT: 295\n");

    } 
 if((a710810301 == 3 && ((( cf==1  && (input == 14)) && a1712019689 == 36) && a647992626 == 9))) {
printf("POINT: 296\n");
    	cf = 0;
    	a647992626 = 5;
    	a1280269169 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 297\n");

    } 
 if((((a1712019689 == 36 && (a710810301 == 3 &&  cf==1 )) && a647992626 == 9) && (input == 15))) {
printf("POINT: 298\n");
    	cf = 0;
    	a608032282 = 7;
    	a710810301 = 7;
    	a322699279 = 9; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm8(int input) {
printf("POINT: 299\n");

    if((a1712019689 == 33 &&  cf==1 )) {
printf("POINT: 300\n");
    	calculate_outputm78(input);
    } 
printf("POINT: 301\n");

    if(( cf==1  && a1712019689 == 34)) {
printf("POINT: 302\n");
    	calculate_outputm79(input);
    } 
printf("POINT: 303\n");

    if(( cf==1  && a1712019689 == 35)) {
printf("POINT: 304\n");
    	calculate_outputm80(input);
    } 
printf("POINT: 305\n");

    if((a1712019689 == 36 &&  cf==1 )) {
printf("POINT: 306\n");
    	calculate_outputm81(input);
    } 
}
 void calculate_outputm85(int input) {
printf("POINT: 307\n");

    if((((( cf==1  && a460729584 == 32) && (input == 4)) && a710810301 == 4) && a599073259 == 14)) {
printf("POINT: 308\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 309\n");

    } 
 if(((input == 8) && (a460729584 == 32 && (a710810301 == 4 && (a599073259 == 14 &&  cf==1 ))))) {
printf("POINT: 310\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 311\n");

    } 
 if((((((input == 12) &&  cf==1 ) && a710810301 == 4) && a599073259 == 14) && a460729584 == 32)) {
printf("POINT: 312\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 313\n");

    } 
 if((a460729584 == 32 && ((input == 15) && (a710810301 == 4 && (a599073259 == 14 &&  cf==1 ))))) {
printf("POINT: 314\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm9(int input) {
printf("POINT: 315\n");

    if(( cf==1  && a599073259 == 14)) {
printf("POINT: 316\n");
    	calculate_outputm85(input);
    } 
}
 void calculate_outputm87(int input) {
printf("POINT: 317\n");

    if(((input == 6) && (((a710810301 == 4 &&  cf==1 ) && a460729584 == 33) && a681527819 == 32))) {
printf("POINT: 318\n");
    	cf = 0;
    	a710810301 = 8;
    	a400180708 = 36 ;
    	a1368342524 = 12; 
    	 printf("%d\n", 25);  
printf("POINT: 319\n");

    } 
 if(((a460729584 == 33 && (a681527819 == 32 && (a710810301 == 4 &&  cf==1 ))) && (input == 10))) {
printf("POINT: 320\n");
    	cf = 0;
    	a608032282 = 5;
    	a710810301 = 7;
    	a1410369705 = 5; 
    	 printf("%d\n", 21);  
printf("POINT: 321\n");

    } 
 if(((input == 14) && (a710810301 == 4 && (a460729584 == 33 && ( cf==1  && a681527819 == 32))))) {
printf("POINT: 322\n");
    	cf = 0;
    	a710810301 = 3;
    	a1276394160 = 35 ;
    	a647992626 = 2; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm88(int input) {
printf("POINT: 323\n");

    if((((a681527819 == 33 && ((input == 11) &&  cf==1 )) && a710810301 == 4) && a460729584 == 33)) {
printf("POINT: 324\n");
    	cf = 0;
    	a1926168604 = 32 ;
    	a710810301 = 5;
    	a775360537 = 7; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm89(int input) {
printf("POINT: 325\n");

    if(((((input == 8) && (a681527819 == 34 &&  cf==1 )) && a710810301 == 4) && a460729584 == 33)) {
printf("POINT: 326\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 327\n");

    } 
 if(((a460729584 == 33 && ((input == 13) && ( cf==1  && a710810301 == 4))) && a681527819 == 34)) {
printf("POINT: 328\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm10(int input) {
printf("POINT: 329\n");

    if((a681527819 == 32 &&  cf==1 )) {
printf("POINT: 330\n");
    	calculate_outputm87(input);
    } 
printf("POINT: 331\n");

    if((a681527819 == 33 &&  cf==1 )) {
printf("POINT: 332\n");
    	calculate_outputm88(input);
    } 
printf("POINT: 333\n");

    if((a681527819 == 34 &&  cf==1 )) {
printf("POINT: 334\n");
    	calculate_outputm89(input);
    } 
}
 void calculate_outputm94(int input) {
printf("POINT: 335\n");

    if((((a460729584 == 34 && (a710810301 == 4 &&  cf==1 )) && (input == 5)) && a372963703 == 16)) {
printf("POINT: 336\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 9;
    	a966113011 = 8; 
    	 printf("%d\n", 22);  
printf("POINT: 337\n");

    } 
 if(((input == 11) && (a710810301 == 4 && ((a372963703 == 16 &&  cf==1 ) && a460729584 == 34)))) {
printf("POINT: 338\n");
    	cf = 0;
    	a608032282 = 4;
    	a710810301 = 7;
    	a1410514914 = 14; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm95(int input) {
printf("POINT: 339\n");

    if(((input == 10) && ((( cf==1  && a710810301 == 4) && a372963703 == 17) && a460729584 == 34))) {
printf("POINT: 340\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 341\n");

    } 
 if(((a460729584 == 34 && (((input == 6) &&  cf==1 ) && a710810301 == 4)) && a372963703 == 17)) {
printf("POINT: 342\n");
    	cf = 0;
    	a1012822964 = 33 ;
    	a710810301 = 10;
    	a2083228155 = 3; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm11(int input) {
printf("POINT: 343\n");

    if(( cf==1  && a372963703 == 16)) {
printf("POINT: 344\n");
    	calculate_outputm94(input);
    } 
printf("POINT: 345\n");

    if((a372963703 == 17 &&  cf==1 )) {
printf("POINT: 346\n");
    	calculate_outputm95(input);
    } 
}
 void calculate_outputm96(int input) {
printf("POINT: 347\n");

    if((a460729584 == 35 && (a777244229 == 32 && (( cf==1  && a710810301 == 4) && (input == 4))))) {
printf("POINT: 348\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 32 ;
    	a775360537 = 7; 
    	 printf("%d\n", 26);  
printf("POINT: 349\n");

    } 
 if((a460729584 == 35 && (((input == 6) && ( cf==1  && a710810301 == 4)) && a777244229 == 32))) {
printf("POINT: 350\n");
    	cf = 0;
    	a200251173 = 34 ;
    	a710810301 = 6;
    	a1213256257 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm98(int input) {
printf("POINT: 351\n");

    if(((input == 9) && (a460729584 == 35 && ((a777244229 == 34 &&  cf==1 ) && a710810301 == 4)))) {
printf("POINT: 352\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 353\n");

    } 
 if(((((a710810301 == 4 &&  cf==1 ) && a777244229 == 34) && a460729584 == 35) && (input == 10))) {
printf("POINT: 354\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 355\n");

    } 
 if((((input == 13) && (a460729584 == 35 && (a710810301 == 4 &&  cf==1 ))) && a777244229 == 34)) {
printf("POINT: 356\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 357\n");

    } 
 if(((input == 14) && (((a710810301 == 4 &&  cf==1 ) && a460729584 == 35) && a777244229 == 34))) {
printf("POINT: 358\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm99(int input) {
printf("POINT: 359\n");

    if((((input == 6) && ((a460729584 == 35 &&  cf==1 ) && a777244229 == 35)) && a710810301 == 4)) {
printf("POINT: 360\n");
    	cf = 0;
    	a1276394160 = 36 ;
    	a710810301 = 3;
    	a647992626 = 2; 
    	 printf("%d\n", 21);  
printf("POINT: 361\n");

    } 
 if((a460729584 == 35 && (((input == 9) && (a710810301 == 4 &&  cf==1 )) && a777244229 == 35))) {
printf("POINT: 362\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 4;
    	a1410514914 = 7; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm100(int input) {
printf("POINT: 363\n");

    if((((a710810301 == 4 && (a460729584 == 35 &&  cf==1 )) && (input == 8)) && a777244229 == 36)) {
printf("POINT: 364\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 365\n");

    } 
 if((a777244229 == 36 && ((input == 14) && (a460729584 == 35 && ( cf==1  && a710810301 == 4))))) {
printf("POINT: 366\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm12(int input) {
printf("POINT: 367\n");

    if((a777244229 == 32 &&  cf==1 )) {
printf("POINT: 368\n");
    	calculate_outputm96(input);
    } 
printf("POINT: 369\n");

    if(( cf==1  && a777244229 == 34)) {
printf("POINT: 370\n");
    	calculate_outputm98(input);
    } 
printf("POINT: 371\n");

    if(( cf==1  && a777244229 == 35)) {
printf("POINT: 372\n");
    	calculate_outputm99(input);
    } 
printf("POINT: 373\n");

    if((a777244229 == 36 &&  cf==1 )) {
printf("POINT: 374\n");
    	calculate_outputm100(input);
    } 
}
 void calculate_outputm101(int input) {
printf("POINT: 375\n");

    if((((a710810301 == 4 && ((input == 11) &&  cf==1 )) && a878535168 == 9) && a460729584 == 36)) {
printf("POINT: 376\n");
    	cf = 0;
    	a608032282 = 4;
    	a710810301 = 7;
    	a1410514914 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm105(int input) {
printf("POINT: 377\n");

    if((((( cf==1  && a710810301 == 4) && (input == 8)) && a460729584 == 36) && a878535168 == 14)) {
printf("POINT: 378\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 379\n");

    } 
 if((a460729584 == 36 && ((a710810301 == 4 && ( cf==1  && a878535168 == 14)) && (input == 9)))) {
printf("POINT: 380\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 381\n");

    } 
 if((((input == 15) && (a878535168 == 14 && (a710810301 == 4 &&  cf==1 ))) && a460729584 == 36)) {
printf("POINT: 382\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm13(int input) {
printf("POINT: 383\n");

    if(( cf==1  && a878535168 == 9)) {
printf("POINT: 384\n");
    	calculate_outputm101(input);
    } 
printf("POINT: 385\n");

    if((a878535168 == 14 &&  cf==1 )) {
printf("POINT: 386\n");
    	calculate_outputm105(input);
    } 
}
 void calculate_outputm106(int input) {
printf("POINT: 387\n");

    if(((((input == 5) && ( cf==1  && a1926168604 == 32)) && a710810301 == 5) && a775360537 == 7)) {
printf("POINT: 388\n");
    	cf = 0;
    	a710810301 = 8;
    	a1163913646 = 34 ;
    	a1368342524 = 13; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm108(int input) {
printf("POINT: 389\n");

    if((((input == 10) && (a1926168604 == 32 && (a710810301 == 5 &&  cf==1 ))) && a775360537 == 11)) {
printf("POINT: 390\n");
    	cf = 0;
    	a710810301 = 8;
    	a1466212053 = 32 ;
    	a1368342524 = 11; 
    	 printf("%d\n", 26);  
printf("POINT: 391\n");

    } 
 if((((a775360537 == 11 && ( cf==1  && a710810301 == 5)) && (input == 14)) && a1926168604 == 32)) {
printf("POINT: 392\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 33 ;
    	a2083228155 = 4; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm14(int input) {
printf("POINT: 393\n");

    if(( cf==1  && a775360537 == 7)) {
printf("POINT: 394\n");
    	calculate_outputm106(input);
    } 
printf("POINT: 395\n");

    if((a775360537 == 11 &&  cf==1 )) {
printf("POINT: 396\n");
    	calculate_outputm108(input);
    } 
}
 void calculate_outputm111(int input) {
printf("POINT: 397\n");

    if(((a1926168604 == 33 && ((a524497834 == 5 &&  cf==1 ) && a710810301 == 5)) && (input == 3))) {
printf("POINT: 398\n");
    	cf = 0;
    	a998691543 = 35 ;
    	a710810301 = 7;
    	a608032282 = 3; 
    	 printf("%d\n", 25);  
printf("POINT: 399\n");

    } 
 if((a1926168604 == 33 && (a524497834 == 5 && (((input == 9) &&  cf==1 ) && a710810301 == 5)))) {
printf("POINT: 400\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 15;
    	a619470312 = 6; 
    	 printf("%d\n", 16);  
printf("POINT: 401\n");

    } 
 if((a1926168604 == 33 && ((( cf==1  && a524497834 == 5) && (input == 10)) && a710810301 == 5))) {
printf("POINT: 402\n");
    	cf = 0;
    	a2068151937 = 13;
    	a710810301 = 9;
    	a1410369705 = 1; 
    	 printf("%d\n", 22);  
printf("POINT: 403\n");

    } 
 if((a1926168604 == 33 && ((input == 13) && (a524497834 == 5 && ( cf==1  && a710810301 == 5))))) {
printf("POINT: 404\n");
    	cf = 0;
    	a1368342524 = 17;
    	a710810301 = 8;
    	a191699712 = 13; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm114(int input) {
printf("POINT: 405\n");

    if((((input == 8) && (( cf==1  && a1926168604 == 33) && a524497834 == 9)) && a710810301 == 5)) {
printf("POINT: 406\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
printf("POINT: 407\n");

    } 
 if((a710810301 == 5 && (a1926168604 == 33 && ((a524497834 == 9 &&  cf==1 ) && (input == 12))))) {
printf("POINT: 408\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm115(int input) {
printf("POINT: 409\n");

    if(((a1926168604 == 33 && ((input == 1) && ( cf==1  && a524497834 == 11))) && a710810301 == 5)) {
printf("POINT: 410\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 411\n");

    } 
 if(((input == 4) && ((a710810301 == 5 && ( cf==1  && a1926168604 == 33)) && a524497834 == 11))) {
printf("POINT: 412\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 413\n");

    } 
 if(((a710810301 == 5 && (a1926168604 == 33 && ((input == 13) &&  cf==1 ))) && a524497834 == 11)) {
printf("POINT: 414\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm15(int input) {
printf("POINT: 415\n");

    if((a524497834 == 5 &&  cf==1 )) {
printf("POINT: 416\n");
    	calculate_outputm111(input);
    } 
printf("POINT: 417\n");

    if(( cf==1  && a524497834 == 9)) {
printf("POINT: 418\n");
    	calculate_outputm114(input);
    } 
printf("POINT: 419\n");

    if(( cf==1  && a524497834 == 11)) {
printf("POINT: 420\n");
    	calculate_outputm115(input);
    } 
}
 void calculate_outputm116(int input) {
printf("POINT: 421\n");

    if((((a681527819 == 32 && ( cf==1  && (input == 4))) && a1926168604 == 34) && a710810301 == 5)) {
printf("POINT: 422\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 423\n");

    } 
 if((a1926168604 == 34 && ((((input == 7) &&  cf==1 ) && a681527819 == 32) && a710810301 == 5))) {
printf("POINT: 424\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm117(int input) {
printf("POINT: 425\n");

    if((a710810301 == 5 && (((a1926168604 == 34 &&  cf==1 ) && (input == 11)) && a681527819 == 33))) {
printf("POINT: 426\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 427\n");

    } 
 if((a681527819 == 33 && (a710810301 == 5 && (a1926168604 == 34 && ((input == 12) &&  cf==1 ))))) {
printf("POINT: 428\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm118(int input) {
printf("POINT: 429\n");

    if((((a681527819 == 34 && (a1926168604 == 34 &&  cf==1 )) && (input == 1)) && a710810301 == 5)) {
printf("POINT: 430\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 431\n");

    } 
 if((a681527819 == 34 && ((input == 14) && (a710810301 == 5 && ( cf==1  && a1926168604 == 34))))) {
printf("POINT: 432\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm119(int input) {
printf("POINT: 433\n");

    if(((a681527819 == 35 && (a710810301 == 5 && ( cf==1  && (input == 1)))) && a1926168604 == 34)) {
printf("POINT: 434\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm120(int input) {
printf("POINT: 435\n");

    if((((input == 1) && (a681527819 == 36 && (a710810301 == 5 &&  cf==1 ))) && a1926168604 == 34)) {
printf("POINT: 436\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 437\n");

    } 
 if((a710810301 == 5 && (a681527819 == 36 && ((input == 4) && (a1926168604 == 34 &&  cf==1 ))))) {
printf("POINT: 438\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 439\n");

    } 
 if((a1926168604 == 34 && (a681527819 == 36 && ((input == 14) && (a710810301 == 5 &&  cf==1 ))))) {
printf("POINT: 440\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm16(int input) {
printf("POINT: 441\n");

    if(( cf==1  && a681527819 == 32)) {
printf("POINT: 442\n");
    	calculate_outputm116(input);
    } 
printf("POINT: 443\n");

    if(( cf==1  && a681527819 == 33)) {
printf("POINT: 444\n");
    	calculate_outputm117(input);
    } 
printf("POINT: 445\n");

    if((a681527819 == 34 &&  cf==1 )) {
printf("POINT: 446\n");
    	calculate_outputm118(input);
    } 
printf("POINT: 447\n");

    if(( cf==1  && a681527819 == 35)) {
printf("POINT: 448\n");
    	calculate_outputm119(input);
    } 
printf("POINT: 449\n");

    if(( cf==1  && a681527819 == 36)) {
printf("POINT: 450\n");
    	calculate_outputm120(input);
    } 
}
 void calculate_outputm121(int input) {
printf("POINT: 451\n");

    if((a175435081 == 8 && (((input == 1) && (a1926168604 == 35 &&  cf==1 )) && a710810301 == 5))) {
printf("POINT: 452\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 453\n");

    } 
 if(((input == 12) && (a710810301 == 5 && (( cf==1  && a175435081 == 8) && a1926168604 == 35)))) {
printf("POINT: 454\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 455\n");

    } 
 if((a175435081 == 8 && (a710810301 == 5 && ((a1926168604 == 35 &&  cf==1 ) && (input == 13))))) {
printf("POINT: 456\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 457\n");

    } 
 if((((a710810301 == 5 && ( cf==1  && a1926168604 == 35)) && (input == 15)) && a175435081 == 8)) {
printf("POINT: 458\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm122(int input) {
printf("POINT: 459\n");

    if((a1926168604 == 35 && ((( cf==1  && (input == 2)) && a710810301 == 5) && a175435081 == 9))) {
printf("POINT: 460\n");
    	cf = 0;
    	a460729584 = 34 ;
    	a710810301 = 4;
    	a372963703 = 16; 
    	 printf("%d\n", 22);  
printf("POINT: 461\n");

    } 
 if(((input == 7) && ((a175435081 == 9 && (a1926168604 == 35 &&  cf==1 )) && a710810301 == 5))) {
printf("POINT: 462\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 8;
    	a650139459 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 463\n");

    } 
 if((a175435081 == 9 && (a1926168604 == 35 && (a710810301 == 5 && ( cf==1  && (input == 9)))))) {
printf("POINT: 464\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 9;
    	a966113011 = 7; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm124(int input) {
printf("POINT: 465\n");

    if((((a710810301 == 5 && ( cf==1  && (input == 5))) && a175435081 == 12) && a1926168604 == 35)) {
printf("POINT: 466\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm17(int input) {
printf("POINT: 467\n");

    if((a175435081 == 8 &&  cf==1 )) {
printf("POINT: 468\n");
    	calculate_outputm121(input);
    } 
printf("POINT: 469\n");

    if((a175435081 == 9 &&  cf==1 )) {
printf("POINT: 470\n");
    	calculate_outputm122(input);
    } 
printf("POINT: 471\n");

    if(( cf==1  && a175435081 == 12)) {
printf("POINT: 472\n");
    	calculate_outputm124(input);
    } 
}
 void calculate_outputm130(int input) {
printf("POINT: 473\n");

    if((((( cf==1  && a942522795 == 12) && (input == 8)) && a1926168604 == 36) && a710810301 == 5)) {
printf("POINT: 474\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 7;
    	a322699279 = 7; 
    	 printf("%d\n", 18);  
printf("POINT: 475\n");

    } 
 if(((((input == 11) && ( cf==1  && a942522795 == 12)) && a710810301 == 5) && a1926168604 == 36)) {
printf("POINT: 476\n");
    	cf = 0;
    	a1926168604 = 33 ;
    	a524497834 = 5; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm131(int input) {
printf("POINT: 477\n");

    if((a942522795 == 13 && ((a710810301 == 5 && ( cf==1  && (input == 5))) && a1926168604 == 36))) {
printf("POINT: 478\n");
    	cf = 0;
    	a710810301 = 3;
    	a1516401282 = 32 ;
    	a647992626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 479\n");

    } 
 if(((a1926168604 == 36 && (a710810301 == 5 && ((input == 9) &&  cf==1 ))) && a942522795 == 13)) {
printf("POINT: 480\n");
    	cf = 0;
    	a647992626 = 7;
    	a710810301 = 3;
    	a1288456936 = 12; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm18(int input) {
printf("POINT: 481\n");

    if(( cf==1  && a942522795 == 12)) {
printf("POINT: 482\n");
    	calculate_outputm130(input);
    } 
printf("POINT: 483\n");

    if(( cf==1  && a942522795 == 13)) {
printf("POINT: 484\n");
    	calculate_outputm131(input);
    } 
}
 void calculate_outputm134(int input) {
printf("POINT: 485\n");

    if((((input == 12) && ((a710810301 == 6 &&  cf==1 ) && a966113011 == 6)) && a1213256257 == 9)) {
printf("POINT: 486\n");
    	cf = 0;
    	a213146198 = 34 ;
    	a1213256257 = 14; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm135(int input) {
printf("POINT: 487\n");

    if((a966113011 == 7 && ((((input == 5) &&  cf==1 ) && a710810301 == 6) && a1213256257 == 9))) {
printf("POINT: 488\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 489\n");

    } 
 if((((input == 7) && (( cf==1  && a1213256257 == 9) && a966113011 == 7)) && a710810301 == 6)) {
printf("POINT: 490\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 491\n");

    } 
 if((a710810301 == 6 && ((input == 10) && (a966113011 == 7 && ( cf==1  && a1213256257 == 9))))) {
printf("POINT: 492\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 493\n");

    } 
 if((a710810301 == 6 && ((input == 14) && (( cf==1  && a966113011 == 7) && a1213256257 == 9)))) {
printf("POINT: 494\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm136(int input) {
printf("POINT: 495\n");

    if((a966113011 == 8 && ((a1213256257 == 9 && (a710810301 == 6 &&  cf==1 )) && (input == 11)))) {
printf("POINT: 496\n");
    	cf = 0;
    	a554726731 = 36 ;
    	a710810301 = 7;
    	a608032282 = 1; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm137(int input) {
printf("POINT: 497\n");

    if(((a966113011 == 10 && ((input == 9) && (a710810301 == 6 &&  cf==1 ))) && a1213256257 == 9)) {
printf("POINT: 498\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm138(int input) {
printf("POINT: 499\n");

    if(((a1213256257 == 9 && (a966113011 == 11 && ( cf==1  && (input == 4)))) && a710810301 == 6)) {
printf("POINT: 500\n");
    	cf = 0;
    	a710810301 = 9;
    	a150836410 = 36 ;
    	a2068151937 = 15; 
    	 printf("%d\n", 26);  
printf("POINT: 501\n");

    } 
 if((a1213256257 == 9 && (((input == 8) && ( cf==1  && a966113011 == 11)) && a710810301 == 6))) {
printf("POINT: 502\n");
    	cf = 0;
    	a1213256257 = 10;
    	a768322760 = 13; 
    	 printf("%d\n", 25);  
printf("POINT: 503\n");

    } 
 if(((((a710810301 == 6 &&  cf==1 ) && (input == 12)) && a1213256257 == 9) && a966113011 == 11)) {
printf("POINT: 504\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 7; 
    	 printf("%d\n", 22);  
printf("POINT: 505\n");

    } 
 if((((a966113011 == 11 && ( cf==1  && (input == 15))) && a710810301 == 6) && a1213256257 == 9)) {
printf("POINT: 506\n");
    	cf = 0;
    	a1926168604 = 35 ;
    	a710810301 = 5;
    	a175435081 = 13; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm139(int input) {
printf("POINT: 507\n");

    if(((input == 1) && (((a1213256257 == 9 &&  cf==1 ) && a966113011 == 12) && a710810301 == 6))) {
printf("POINT: 508\n");
    	cf = 0;
    	a647992626 = 5;
    	a710810301 = 3;
    	a1280269169 = 7; 
    	 printf("%d\n", 18);  
printf("POINT: 509\n");

    } 
 if((((( cf==1  && a966113011 == 12) && (input == 2)) && a1213256257 == 9) && a710810301 == 6)) {
printf("POINT: 510\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 13; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm19(int input) {
printf("POINT: 511\n");

    if((a966113011 == 6 &&  cf==1 )) {
printf("POINT: 512\n");
    	calculate_outputm134(input);
    } 
printf("POINT: 513\n");

    if((a966113011 == 7 &&  cf==1 )) {
printf("POINT: 514\n");
    	calculate_outputm135(input);
    } 
printf("POINT: 515\n");

    if((a966113011 == 8 &&  cf==1 )) {
printf("POINT: 516\n");
    	calculate_outputm136(input);
    } 
printf("POINT: 517\n");

    if(( cf==1  && a966113011 == 10)) {
printf("POINT: 518\n");
    	calculate_outputm137(input);
    } 
printf("POINT: 519\n");

    if((a966113011 == 11 &&  cf==1 )) {
printf("POINT: 520\n");
    	calculate_outputm138(input);
    } 
printf("POINT: 521\n");

    if((a966113011 == 12 &&  cf==1 )) {
printf("POINT: 522\n");
    	calculate_outputm139(input);
    } 
}
 void calculate_outputm140(int input) {
printf("POINT: 523\n");

    if(((a1213256257 == 10 && ((input == 4) && ( cf==1  && a768322760 == 7))) && a710810301 == 6)) {
printf("POINT: 524\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 525\n");

    } 
 if((((( cf==1  && a768322760 == 7) && a1213256257 == 10) && a710810301 == 6) && (input == 10))) {
printf("POINT: 526\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 527\n");

    } 
 if(((a1213256257 == 10 && ((a768322760 == 7 &&  cf==1 ) && a710810301 == 6)) && (input == 11))) {
printf("POINT: 528\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm142(int input) {
printf("POINT: 529\n");

    if(((((a1213256257 == 10 &&  cf==1 ) && a768322760 == 11) && a710810301 == 6) && (input == 3))) {
printf("POINT: 530\n");
    	cf = 0;
    	a1012822964 = 35 ;
    	a710810301 = 10;
    	a129815901 = 10; 
    	 printf("%d\n", 23);  
printf("POINT: 531\n");

    } 
 if(((input == 7) && ((a768322760 == 11 && ( cf==1  && a1213256257 == 10)) && a710810301 == 6))) {
printf("POINT: 532\n");
    	cf = 0;
    	a1163913646 = 33 ;
    	a710810301 = 8;
    	a1368342524 = 13; 
    	 printf("%d\n", 17);  
printf("POINT: 533\n");

    } 
 if(((((a710810301 == 6 &&  cf==1 ) && (input == 10)) && a1213256257 == 10) && a768322760 == 11)) {
printf("POINT: 534\n");
    	cf = 0;
    	a710810301 = 3;
    	a1588068131 = 33 ;
    	a647992626 = 4; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm143(int input) {
printf("POINT: 535\n");

    if(((a710810301 == 6 && ((input == 4) && (a768322760 == 12 &&  cf==1 ))) && a1213256257 == 10)) {
printf("POINT: 536\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm144(int input) {
printf("POINT: 537\n");

    if((a1213256257 == 10 && ((input == 5) && (a768322760 == 13 && ( cf==1  && a710810301 == 6))))) {
printf("POINT: 538\n");
    	cf = 0;
    	a777244229 = 35 ;
    	a460729584 = 35 ;
    	a710810301 = 4; 
    	 printf("%d\n", 25);  
printf("POINT: 539\n");

    } 
 if((a1213256257 == 10 && ((( cf==1  && a768322760 == 13) && (input == 7)) && a710810301 == 6))) {
printf("POINT: 540\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 35 ;
    	a129815901 = 11; 
    	 printf("%d\n", 19);  
printf("POINT: 541\n");

    } 
 if(((((input == 10) && (a1213256257 == 10 &&  cf==1 )) && a710810301 == 6) && a768322760 == 13)) {
printf("POINT: 542\n");
    	cf = 0;
    	a710810301 = 8;
    	a400180708 = 34 ;
    	a1368342524 = 12; 
    	 printf("%d\n", 23);  
printf("POINT: 543\n");

    } 
 if(((((a710810301 == 6 &&  cf==1 ) && (input == 8)) && a1213256257 == 10) && a768322760 == 13)) {
printf("POINT: 544\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 15;
    	a599073259 = 11; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm20(int input) {
printf("POINT: 545\n");

    if((a768322760 == 7 &&  cf==1 )) {
printf("POINT: 546\n");
    	calculate_outputm140(input);
    } 
printf("POINT: 547\n");

    if((a768322760 == 11 &&  cf==1 )) {
printf("POINT: 548\n");
    	calculate_outputm142(input);
    } 
printf("POINT: 549\n");

    if(( cf==1  && a768322760 == 12)) {
printf("POINT: 550\n");
    	calculate_outputm143(input);
    } 
printf("POINT: 551\n");

    if((a768322760 == 13 &&  cf==1 )) {
printf("POINT: 552\n");
    	calculate_outputm144(input);
    } 
}
 void calculate_outputm148(int input) {
printf("POINT: 553\n");

    if(((input == 2) && (a710810301 == 6 && (( cf==1  && a1213256257 == 11) && a1708500674 == 35)))) {
printf("POINT: 554\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 555\n");

    } 
 if((a710810301 == 6 && ((( cf==1  && (input == 3)) && a1213256257 == 11) && a1708500674 == 35))) {
printf("POINT: 556\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 23);  
printf("POINT: 557\n");

    } 
 if(((a710810301 == 6 && (( cf==1  && a1708500674 == 35) && a1213256257 == 11)) && (input == 11))) {
printf("POINT: 558\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 559\n");

    } 
 if((a1708500674 == 35 && ((a710810301 == 6 && ((input == 13) &&  cf==1 )) && a1213256257 == 11))) {
printf("POINT: 560\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm21(int input) {
printf("POINT: 561\n");

    if(( cf==1  && a1708500674 == 35)) {
printf("POINT: 562\n");
    	calculate_outputm148(input);
    } 
}
 void calculate_outputm150(int input) {
printf("POINT: 563\n");

    if((a710810301 == 6 && ((((input == 1) &&  cf==1 ) && a1213256257 == 12) && a1916167078 == 10))) {
printf("POINT: 564\n");
    	cf = 0;
    	a200251173 = 32 ;
    	a1213256257 = 13; 
    	 printf("%d\n", 22);  
printf("POINT: 565\n");

    } 
 if((((( cf==1  && a1213256257 == 12) && a1916167078 == 10) && a710810301 == 6) && (input == 2))) {
printf("POINT: 566\n");
    	cf = 0;
    	a1404083158 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 567\n");

    } 
 if((a1213256257 == 12 && (a710810301 == 6 && ((input == 12) && (a1916167078 == 10 &&  cf==1 ))))) {
printf("POINT: 568\n");
    	cf = 0;
    	a1368342524 = 10;
    	a710810301 = 8;
    	a18652935 = 9; 
    	 printf("%d\n", 23);  
printf("POINT: 569\n");

    } 
 if((((input == 4) && (( cf==1  && a1916167078 == 10) && a1213256257 == 12)) && a710810301 == 6)) {
printf("POINT: 570\n");
    	cf = 0;
    	a1012822964 = 35 ;
    	a710810301 = 10;
    	a129815901 = 8; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm151(int input) {
printf("POINT: 571\n");

    if(((a1916167078 == 11 && (a710810301 == 6 && ((input == 5) &&  cf==1 ))) && a1213256257 == 12)) {
printf("POINT: 572\n");
    	cf = 0;
    	a460729584 = 36 ;
    	a710810301 = 4;
    	a878535168 = 9; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm152(int input) {
printf("POINT: 573\n");

    if(((input == 5) && ((a1916167078 == 12 && ( cf==1  && a710810301 == 6)) && a1213256257 == 12))) {
printf("POINT: 574\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 575\n");

    } 
 if((a1213256257 == 12 && ((a710810301 == 6 && (a1916167078 == 12 &&  cf==1 )) && (input == 10)))) {
printf("POINT: 576\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 577\n");

    } 
 if((((((input == 15) &&  cf==1 ) && a710810301 == 6) && a1916167078 == 12) && a1213256257 == 12)) {
printf("POINT: 578\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm153(int input) {
printf("POINT: 579\n");

    if(((input == 3) && ((a1213256257 == 12 && ( cf==1  && a710810301 == 6)) && a1916167078 == 13))) {
printf("POINT: 580\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 10;
    	a18652935 = 6; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm154(int input) {
printf("POINT: 581\n");

    if(((input == 2) && (((a1916167078 == 14 &&  cf==1 ) && a710810301 == 6) && a1213256257 == 12))) {
printf("POINT: 582\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 583\n");

    } 
 if((a1916167078 == 14 && (a1213256257 == 12 && (((input == 6) &&  cf==1 ) && a710810301 == 6)))) {
printf("POINT: 584\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 585\n");

    } 
 if((a1916167078 == 14 && ((input == 7) && ((a1213256257 == 12 &&  cf==1 ) && a710810301 == 6)))) {
printf("POINT: 586\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm22(int input) {
printf("POINT: 587\n");

    if((a1916167078 == 10 &&  cf==1 )) {
printf("POINT: 588\n");
    	calculate_outputm150(input);
    } 
printf("POINT: 589\n");

    if((a1916167078 == 11 &&  cf==1 )) {
printf("POINT: 590\n");
    	calculate_outputm151(input);
    } 
printf("POINT: 591\n");

    if((a1916167078 == 12 &&  cf==1 )) {
printf("POINT: 592\n");
    	calculate_outputm152(input);
    } 
printf("POINT: 593\n");

    if(( cf==1  && a1916167078 == 13)) {
printf("POINT: 594\n");
    	calculate_outputm153(input);
    } 
printf("POINT: 595\n");

    if(( cf==1  && a1916167078 == 14)) {
printf("POINT: 596\n");
    	calculate_outputm154(input);
    } 
}
 void calculate_outputm156(int input) {
printf("POINT: 597\n");

    if(((a1213256257 == 13 && ((input == 9) && ( cf==1  && a710810301 == 6))) && a200251173 == 32)) {
printf("POINT: 598\n");
    	cf = 0;
    	a1213256257 = 15;
    	a619470312 = 3; 
    	 printf("%d\n", 19);  
printf("POINT: 599\n");

    } 
 if((a710810301 == 6 && (a1213256257 == 13 && (( cf==1  && a200251173 == 32) && (input == 11))))) {
printf("POINT: 600\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 17;
    	a191699712 = 7; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm158(int input) {
printf("POINT: 601\n");

    if((a1213256257 == 13 && (a200251173 == 34 && ((input == 1) && (a710810301 == 6 &&  cf==1 ))))) {
printf("POINT: 602\n");
    	cf = 0;
    	a1368342524 = 15;
    	a710810301 = 8;
    	a599073259 = 14; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm160(int input) {
printf("POINT: 603\n");

    if(((a200251173 == 36 && (a1213256257 == 13 && (a710810301 == 6 &&  cf==1 ))) && (input == 6))) {
printf("POINT: 604\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 7;
    	a322699279 = 11; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm23(int input) {
printf("POINT: 605\n");

    if((a200251173 == 32 &&  cf==1 )) {
printf("POINT: 606\n");
    	calculate_outputm156(input);
    } 
printf("POINT: 607\n");

    if(( cf==1  && a200251173 == 34)) {
printf("POINT: 608\n");
    	calculate_outputm158(input);
    } 
printf("POINT: 609\n");

    if((a200251173 == 36 &&  cf==1 )) {
printf("POINT: 610\n");
    	calculate_outputm160(input);
    } 
}
 void calculate_outputm161(int input) {
printf("POINT: 611\n");

    if((a1213256257 == 14 && ((( cf==1  && a213146198 == 34) && a710810301 == 6) && (input == 11)))) {
printf("POINT: 612\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 613\n");

    } 
 if((a710810301 == 6 && ((( cf==1  && (input == 14)) && a213146198 == 34) && a1213256257 == 14))) {
printf("POINT: 614\n");
    	cf = 0;
    	a1204585576 = 34 ;
    	a710810301 = 9;
    	a2068151937 = 8; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm162(int input) {
printf("POINT: 615\n");

    if(((a710810301 == 6 && (((input == 1) &&  cf==1 ) && a1213256257 == 14)) && a213146198 == 35)) {
printf("POINT: 616\n");
    	cf = 0;
    	a1708500674 = 35 ;
    	a1213256257 = 11; 
    	 printf("%d\n", 23);  
printf("POINT: 617\n");

    } 
 if(((input == 6) && (a710810301 == 6 && (a1213256257 == 14 && ( cf==1  && a213146198 == 35))))) {
printf("POINT: 618\n");
    	cf = 0;
    	a608032282 = 6;
    	a710810301 = 7;
    	a573660885 = 8; 
    	 printf("%d\n", 17);  
printf("POINT: 619\n");

    } 
 if((a213146198 == 35 && ((a710810301 == 6 && ( cf==1  && a1213256257 == 14)) && (input == 10)))) {
printf("POINT: 620\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 9; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm24(int input) {
printf("POINT: 621\n");

    if((a213146198 == 34 &&  cf==1 )) {
printf("POINT: 622\n");
    	calculate_outputm161(input);
    } 
printf("POINT: 623\n");

    if(( cf==1  && a213146198 == 35)) {
printf("POINT: 624\n");
    	calculate_outputm162(input);
    } 
}
 void calculate_outputm164(int input) {
printf("POINT: 625\n");

    if(((a1213256257 == 15 && (a710810301 == 6 && ( cf==1  && (input == 1)))) && a619470312 == 1)) {
printf("POINT: 626\n");
    	cf = 0;
    	a1926168604 = 35 ;
    	a710810301 = 5;
    	a175435081 = 12; 
    	 printf("%d\n", 19);  
printf("POINT: 627\n");

    } 
 if((a710810301 == 6 && (a619470312 == 1 && (a1213256257 == 15 && ( cf==1  && (input == 3)))))) {
printf("POINT: 628\n");
    	cf = 0;
    	a681527819 = 32 ;
    	a1926168604 = 34 ;
    	a710810301 = 5; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm165(int input) {
printf("POINT: 629\n");

    if((a619470312 == 3 && (((input == 6) && ( cf==1  && a710810301 == 6)) && a1213256257 == 15))) {
printf("POINT: 630\n");
    	cf = 0;
    	a1368342524 = 17;
    	a710810301 = 8;
    	a191699712 = 10; 
    	 printf("%d\n", 25);  
printf("POINT: 631\n");

    } 
 if((((( cf==1  && a710810301 == 6) && (input == 10)) && a1213256257 == 15) && a619470312 == 3)) {
printf("POINT: 632\n");
    	cf = 0;
    	a554726731 = 33 ;
    	a710810301 = 7;
    	a608032282 = 1; 
    	 printf("%d\n", 22);  
printf("POINT: 633\n");

    } 
 if((a710810301 == 6 && ((( cf==1  && a619470312 == 3) && a1213256257 == 15) && (input == 11)))) {
printf("POINT: 634\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 36 ;
    	a1280269169 = 9; 
    	 printf("%d\n", 21);  
printf("POINT: 635\n");

    } 
 if((((input == 15) && (( cf==1  && a710810301 == 6) && a1213256257 == 15)) && a619470312 == 3)) {
printf("POINT: 636\n");
    	cf = 0;
    	a681527819 = 34 ;
    	a460729584 = 33 ;
    	a710810301 = 4; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm166(int input) {
printf("POINT: 637\n");

    if(((a1213256257 == 15 && ((input == 8) && ( cf==1  && a619470312 == 4))) && a710810301 == 6)) {
printf("POINT: 638\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 639\n");

    } 
 if(((a710810301 == 6 && ((input == 15) && ( cf==1  && a619470312 == 4))) && a1213256257 == 15)) {
printf("POINT: 640\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm168(int input) {
printf("POINT: 641\n");

    if(((input == 9) && ((a619470312 == 6 && (a710810301 == 6 &&  cf==1 )) && a1213256257 == 15))) {
printf("POINT: 642\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 643\n");

    } 
 if((((a1213256257 == 15 && (a619470312 == 6 &&  cf==1 )) && a710810301 == 6) && (input == 15))) {
printf("POINT: 644\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm169(int input) {
printf("POINT: 645\n");

    if((((( cf==1  && a710810301 == 6) && (input == 6)) && a1213256257 == 15) && a619470312 == 8)) {
printf("POINT: 646\n");
    	cf = 0;
    	a200251173 = 36 ;
    	a1213256257 = 13; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm25(int input) {
printf("POINT: 647\n");

    if(( cf==1  && a619470312 == 1)) {
printf("POINT: 648\n");
    	calculate_outputm164(input);
    } 
printf("POINT: 649\n");

    if((a619470312 == 3 &&  cf==1 )) {
printf("POINT: 650\n");
    	calculate_outputm165(input);
    } 
printf("POINT: 651\n");

    if((a619470312 == 4 &&  cf==1 )) {
printf("POINT: 652\n");
    	calculate_outputm166(input);
    } 
printf("POINT: 653\n");

    if((a619470312 == 6 &&  cf==1 )) {
printf("POINT: 654\n");
    	calculate_outputm168(input);
    } 
printf("POINT: 655\n");

    if(( cf==1  && a619470312 == 8)) {
printf("POINT: 656\n");
    	calculate_outputm169(input);
    } 
}
 void calculate_outputm170(int input) {
printf("POINT: 657\n");

    if((a1213256257 == 16 && (a710810301 == 6 && ((input == 2) && (a1708500674 == 32 &&  cf==1 ))))) {
printf("POINT: 658\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 7;
    	a322699279 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm171(int input) {
printf("POINT: 659\n");

    if((a710810301 == 6 && ((a1213256257 == 16 && ( cf==1  && (input == 12))) && a1708500674 == 33))) {
printf("POINT: 660\n");
    	cf = 0;
    	a1708500674 = 35 ; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm172(int input) {
printf("POINT: 661\n");

    if((((a1213256257 == 16 && (a1708500674 == 34 &&  cf==1 )) && a710810301 == 6) && (input == 12))) {
printf("POINT: 662\n");
    	cf = 0;
    	a608032282 = 4;
    	a710810301 = 7;
    	a1410514914 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm173(int input) {
printf("POINT: 663\n");

    if(((((a710810301 == 6 &&  cf==1 ) && (input == 1)) && a1708500674 == 35) && a1213256257 == 16)) {
printf("POINT: 664\n");
    	cf = 0;
    	a1926168604 = 35 ;
    	a710810301 = 5;
    	a175435081 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm26(int input) {
printf("POINT: 665\n");

    if((a1708500674 == 32 &&  cf==1 )) {
printf("POINT: 666\n");
    	calculate_outputm170(input);
    } 
printf("POINT: 667\n");

    if(( cf==1  && a1708500674 == 33)) {
printf("POINT: 668\n");
    	calculate_outputm171(input);
    } 
printf("POINT: 669\n");

    if((a1708500674 == 34 &&  cf==1 )) {
printf("POINT: 670\n");
    	calculate_outputm172(input);
    } 
printf("POINT: 671\n");

    if(( cf==1  && a1708500674 == 35)) {
printf("POINT: 672\n");
    	calculate_outputm173(input);
    } 
}
 void calculate_outputm175(int input) {
printf("POINT: 673\n");

    if(((((input == 1) && (a608032282 == 1 &&  cf==1 )) && a710810301 == 7) && a554726731 == 33)) {
printf("POINT: 674\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 675\n");

    } 
 if(((((a554726731 == 33 &&  cf==1 ) && (input == 3)) && a608032282 == 1) && a710810301 == 7)) {
printf("POINT: 676\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 677\n");

    } 
 if(((((a710810301 == 7 &&  cf==1 ) && a608032282 == 1) && a554726731 == 33) && (input == 6))) {
printf("POINT: 678\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 679\n");

    } 
 if((a710810301 == 7 && ((input == 12) && (a554726731 == 33 && ( cf==1  && a608032282 == 1))))) {
printf("POINT: 680\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm176(int input) {
printf("POINT: 681\n");

    if(((input == 6) && (a554726731 == 36 && (a710810301 == 7 && ( cf==1  && a608032282 == 1))))) {
printf("POINT: 682\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 12;
    	a1916167078 = 13; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm27(int input) {
printf("POINT: 683\n");

    if(( cf==1  && a554726731 == 33)) {
printf("POINT: 684\n");
    	calculate_outputm175(input);
    } 
printf("POINT: 685\n");

    if((a554726731 == 36 &&  cf==1 )) {
printf("POINT: 686\n");
    	calculate_outputm176(input);
    } 
}
 void calculate_outputm177(int input) {
printf("POINT: 687\n");

    if((((( cf==1  && a710810301 == 7) && a1520738029 == 6) && (input == 4)) && a608032282 == 2)) {
printf("POINT: 688\n");
    	cf = 0;
    	a1926168604 = 36 ;
    	a710810301 = 5;
    	a942522795 = 12; 
    	 printf("%d\n", 17);  
printf("POINT: 689\n");

    } 
 if(((((a608032282 == 2 &&  cf==1 ) && a1520738029 == 6) && a710810301 == 7) && (input == 5))) {
printf("POINT: 690\n");
    	cf = 0;
    	a608032282 = 8;
    	a650139459 = 8; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm178(int input) {
printf("POINT: 691\n");

    if((((input == 3) && (a710810301 == 7 && ( cf==1  && a608032282 == 2))) && a1520738029 == 7)) {
printf("POINT: 692\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 32 ;
    	a947182640 = 14; 
    	 printf("%d\n", 22);  
printf("POINT: 693\n");

    } 
 if(((a608032282 == 2 && ((a1520738029 == 7 &&  cf==1 ) && a710810301 == 7)) && (input == 4))) {
printf("POINT: 694\n");
    	cf = 0;
    	a1213256257 = 10;
    	a710810301 = 6;
    	a768322760 = 11; 
    	 printf("%d\n", 25);  
printf("POINT: 695\n");

    } 
 if(((input == 7) && (a608032282 == 2 && ((a710810301 == 7 &&  cf==1 ) && a1520738029 == 7)))) {
printf("POINT: 696\n");
    	cf = 0;
    	a1213256257 = 9;
    	a710810301 = 6;
    	a966113011 = 12; 
    	 printf("%d\n", 20);  
printf("POINT: 697\n");

    } 
 if(((input == 11) && (a608032282 == 2 && (a710810301 == 7 && ( cf==1  && a1520738029 == 7))))) {
printf("POINT: 698\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 35 ;
    	a175435081 = 9; 
    	 printf("%d\n", 23);  
printf("POINT: 699\n");

    } 
 if((a710810301 == 7 && ((a1520738029 == 7 && (a608032282 == 2 &&  cf==1 )) && (input == 6)))) {
printf("POINT: 700\n");
    	cf = 0;
    	a1368342524 = 10;
    	a710810301 = 8;
    	a18652935 = 4; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm179(int input) {
printf("POINT: 701\n");

    if((a710810301 == 7 && (a608032282 == 2 && ((input == 1) && (a1520738029 == 9 &&  cf==1 ))))) {
printf("POINT: 702\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 703\n");

    } 
 if((a608032282 == 2 && ((input == 6) && ((a1520738029 == 9 &&  cf==1 ) && a710810301 == 7)))) {
printf("POINT: 704\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 705\n");

    } 
 if((a608032282 == 2 && (a710810301 == 7 && (a1520738029 == 9 && ((input == 12) &&  cf==1 ))))) {
printf("POINT: 706\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm180(int input) {
printf("POINT: 707\n");

    if((a710810301 == 7 && (a1520738029 == 10 && (a608032282 == 2 && ( cf==1  && (input == 7)))))) {
printf("POINT: 708\n");
    	cf = 0;
    	a1708500674 = 33 ;
    	a710810301 = 6;
    	a1213256257 = 16; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm182(int input) {
printf("POINT: 709\n");

    if((a608032282 == 2 && ((a710810301 == 7 && ( cf==1  && a1520738029 == 13)) && (input == 3)))) {
printf("POINT: 710\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 711\n");

    } 
 if(((a608032282 == 2 && (( cf==1  && a1520738029 == 13) && a710810301 == 7)) && (input == 5))) {
printf("POINT: 712\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 713\n");

    } 
 if((a1520738029 == 13 && ((input == 7) && (( cf==1  && a608032282 == 2) && a710810301 == 7)))) {
printf("POINT: 714\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm28(int input) {
printf("POINT: 715\n");

    if((a1520738029 == 6 &&  cf==1 )) {
printf("POINT: 716\n");
    	calculate_outputm177(input);
    } 
printf("POINT: 717\n");

    if((a1520738029 == 7 &&  cf==1 )) {
printf("POINT: 718\n");
    	calculate_outputm178(input);
    } 
printf("POINT: 719\n");

    if((a1520738029 == 9 &&  cf==1 )) {
printf("POINT: 720\n");
    	calculate_outputm179(input);
    } 
printf("POINT: 721\n");

    if(( cf==1  && a1520738029 == 10)) {
printf("POINT: 722\n");
    	calculate_outputm180(input);
    } 
printf("POINT: 723\n");

    if((a1520738029 == 13 &&  cf==1 )) {
printf("POINT: 724\n");
    	calculate_outputm182(input);
    } 
}
 void calculate_outputm183(int input) {
printf("POINT: 725\n");

    if((((a710810301 == 7 && ( cf==1  && a608032282 == 3)) && (input == 6)) && a998691543 == 34)) {
printf("POINT: 726\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 32 ;
    	a775360537 = 7; 
    	 printf("%d\n", 26);  
printf("POINT: 727\n");

    } 
 if((((( cf==1  && a998691543 == 34) && a710810301 == 7) && a608032282 == 3) && (input == 15))) {
printf("POINT: 728\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 32 ;
    	a775360537 = 7; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm184(int input) {
printf("POINT: 729\n");

    if(((a710810301 == 7 && (((input == 9) &&  cf==1 ) && a998691543 == 35)) && a608032282 == 3)) {
printf("POINT: 730\n");
    	cf = 0;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm185(int input) {
printf("POINT: 731\n");

    if((a608032282 == 3 && ((input == 2) && (a710810301 == 7 && ( cf==1  && a998691543 == 36))))) {
printf("POINT: 732\n");
    	cf = 0;
    	a681527819 = 34 ;
    	a710810301 = 9;
    	a2068151937 = 12; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm29(int input) {
printf("POINT: 733\n");

    if(( cf==1  && a998691543 == 34)) {
printf("POINT: 734\n");
    	calculate_outputm183(input);
    } 
printf("POINT: 735\n");

    if(( cf==1  && a998691543 == 35)) {
printf("POINT: 736\n");
    	calculate_outputm184(input);
    } 
printf("POINT: 737\n");

    if((a998691543 == 36 &&  cf==1 )) {
printf("POINT: 738\n");
    	calculate_outputm185(input);
    } 
}
 void calculate_outputm186(int input) {
printf("POINT: 739\n");

    if(((input == 12) && ((a608032282 == 4 && ( cf==1  && a710810301 == 7)) && a1410514914 == 7))) {
printf("POINT: 740\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm189(int input) {
printf("POINT: 741\n");

    if(((a608032282 == 4 && (a710810301 == 7 && (a1410514914 == 11 &&  cf==1 ))) && (input == 1))) {
printf("POINT: 742\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 743\n");

    } 
 if((a710810301 == 7 && (a608032282 == 4 && ((a1410514914 == 11 &&  cf==1 ) && (input == 10))))) {
printf("POINT: 744\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 745\n");

    } 
 if(((input == 14) && (a1410514914 == 11 && (a710810301 == 7 && (a608032282 == 4 &&  cf==1 ))))) {
printf("POINT: 746\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm190(int input) {
printf("POINT: 747\n");

    if((a1410514914 == 12 && ((input == 13) && (a710810301 == 7 && (a608032282 == 4 &&  cf==1 ))))) {
printf("POINT: 748\n");
    	cf = 0;
    	a608032282 = 6;
    	a573660885 = 9; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm191(int input) {
printf("POINT: 749\n");

    if(((a1410514914 == 14 && (a710810301 == 7 && (a608032282 == 4 &&  cf==1 ))) && (input == 10))) {
printf("POINT: 750\n");
    	cf = 0;
    	a1213256257 = 9;
    	a710810301 = 6;
    	a966113011 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm30(int input) {
printf("POINT: 751\n");

    if((a1410514914 == 7 &&  cf==1 )) {
printf("POINT: 752\n");
    	calculate_outputm186(input);
    } 
printf("POINT: 753\n");

    if(( cf==1  && a1410514914 == 11)) {
printf("POINT: 754\n");
    	calculate_outputm189(input);
    } 
printf("POINT: 755\n");

    if(( cf==1  && a1410514914 == 12)) {
printf("POINT: 756\n");
    	calculate_outputm190(input);
    } 
printf("POINT: 757\n");

    if((a1410514914 == 14 &&  cf==1 )) {
printf("POINT: 758\n");
    	calculate_outputm191(input);
    } 
}
 void calculate_outputm192(int input) {
printf("POINT: 759\n");

    if(((a1410369705 == 1 && ((a608032282 == 5 &&  cf==1 ) && a710810301 == 7)) && (input == 14))) {
printf("POINT: 760\n");
    	cf = 0;
    	a710810301 = 3;
    	a647992626 = 7;
    	a1288456936 = 13; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm193(int input) {
printf("POINT: 761\n");

    if(((input == 9) && (a608032282 == 5 && ((a710810301 == 7 &&  cf==1 ) && a1410369705 == 2)))) {
printf("POINT: 762\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 763\n");

    } 
 if((((input == 10) && ((a608032282 == 5 &&  cf==1 ) && a1410369705 == 2)) && a710810301 == 7)) {
printf("POINT: 764\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 765\n");

    } 
 if((a1410369705 == 2 && (a608032282 == 5 && (((input == 12) &&  cf==1 ) && a710810301 == 7)))) {
printf("POINT: 766\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm194(int input) {
printf("POINT: 767\n");

    if(((((a710810301 == 7 &&  cf==1 ) && (input == 9)) && a608032282 == 5) && a1410369705 == 3)) {
printf("POINT: 768\n");
    	cf = 0;
    	a1012822964 = 33 ;
    	a710810301 = 10;
    	a2083228155 = 8; 
    	 printf("%d\n", 18);  
printf("POINT: 769\n");

    } 
 if(((input == 11) && ((( cf==1  && a1410369705 == 3) && a608032282 == 5) && a710810301 == 7))) {
printf("POINT: 770\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 771\n");

    } 
 if(((a1410369705 == 3 && ((a608032282 == 5 &&  cf==1 ) && (input == 12))) && a710810301 == 7)) {
printf("POINT: 772\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 23);  
printf("POINT: 773\n");

    } 
 if((a608032282 == 5 && ((a1410369705 == 3 && ( cf==1  && a710810301 == 7)) && (input == 15)))) {
printf("POINT: 774\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm195(int input) {
printf("POINT: 775\n");

    if(((a710810301 == 7 && ((input == 10) && ( cf==1  && a608032282 == 5))) && a1410369705 == 4)) {
printf("POINT: 776\n");
    	cf = 0;
    	a1926168604 = 35 ;
    	a710810301 = 5;
    	a175435081 = 8; 
    	 printf("%d\n", 17);  
printf("POINT: 777\n");

    } 
 if((a1410369705 == 4 && (a608032282 == 5 && ((a710810301 == 7 &&  cf==1 ) && (input == 14))))) {
printf("POINT: 778\n");
    	cf = 0;
    	a608032282 = 2;
    	a1520738029 = 10; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm196(int input) {
printf("POINT: 779\n");

    if((a608032282 == 5 && ((a1410369705 == 5 && ( cf==1  && a710810301 == 7)) && (input == 1)))) {
printf("POINT: 780\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm197(int input) {
printf("POINT: 781\n");

    if(((input == 5) && (a1410369705 == 6 && (( cf==1  && a710810301 == 7) && a608032282 == 5)))) {
printf("POINT: 782\n");
    	cf = 0;
    	a1926168604 = 36 ;
    	a710810301 = 5;
    	a942522795 = 13; 
    	 printf("%d\n", 19);  
printf("POINT: 783\n");

    } 
 if(((a1410369705 == 6 && (( cf==1  && (input == 14)) && a710810301 == 7)) && a608032282 == 5)) {
printf("POINT: 784\n");
    	cf = 0;
    	a710810301 = 8;
    	a1163913646 = 34 ;
    	a1368342524 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm31(int input) {
printf("POINT: 785\n");

    if(( cf==1  && a1410369705 == 1)) {
printf("POINT: 786\n");
    	calculate_outputm192(input);
    } 
printf("POINT: 787\n");

    if(( cf==1  && a1410369705 == 2)) {
printf("POINT: 788\n");
    	calculate_outputm193(input);
    } 
printf("POINT: 789\n");

    if(( cf==1  && a1410369705 == 3)) {
printf("POINT: 790\n");
    	calculate_outputm194(input);
    } 
printf("POINT: 791\n");

    if(( cf==1  && a1410369705 == 4)) {
printf("POINT: 792\n");
    	calculate_outputm195(input);
    } 
printf("POINT: 793\n");

    if(( cf==1  && a1410369705 == 5)) {
printf("POINT: 794\n");
    	calculate_outputm196(input);
    } 
printf("POINT: 795\n");

    if(( cf==1  && a1410369705 == 6)) {
printf("POINT: 796\n");
    	calculate_outputm197(input);
    } 
}
 void calculate_outputm198(int input) {
printf("POINT: 797\n");

    if(((input == 7) && (a573660885 == 3 && ((a710810301 == 7 &&  cf==1 ) && a608032282 == 6)))) {
printf("POINT: 798\n");
    	cf = 0;
    	a1712019689 = 35 ;
    	a710810301 = 3;
    	a647992626 = 9; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm202(int input) {
printf("POINT: 799\n");

    if((a608032282 == 6 && ((a710810301 == 7 && ( cf==1  && a573660885 == 8)) && (input == 1)))) {
printf("POINT: 800\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 22);  
printf("POINT: 801\n");

    } 
 if((((a608032282 == 6 && ((input == 4) &&  cf==1 )) && a573660885 == 8) && a710810301 == 7)) {
printf("POINT: 802\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
printf("POINT: 803\n");

    } 
 if((a608032282 == 6 && ((((input == 14) &&  cf==1 ) && a573660885 == 8) && a710810301 == 7))) {
printf("POINT: 804\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm203(int input) {
printf("POINT: 805\n");

    if((((((input == 13) &&  cf==1 ) && a608032282 == 6) && a573660885 == 9) && a710810301 == 7)) {
printf("POINT: 806\n");
    	cf = 0;
    	a710810301 = 6;
    	a1708500674 = 32 ;
    	a1213256257 = 16; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm204(int input) {
printf("POINT: 807\n");

    if(((a608032282 == 6 && ((input == 3) && (a710810301 == 7 &&  cf==1 ))) && a573660885 == 10)) {
printf("POINT: 808\n");
    	cf = 0;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 809\n");

    } 
 if(((a710810301 == 7 && (( cf==1  && (input == 5)) && a573660885 == 10)) && a608032282 == 6)) {
printf("POINT: 810\n");
    	cf = 0;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 811\n");

    } 
 if(((input == 14) && ((a573660885 == 10 && (a608032282 == 6 &&  cf==1 )) && a710810301 == 7))) {
printf("POINT: 812\n");
    	cf = 0;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm32(int input) {
printf("POINT: 813\n");

    if(( cf==1  && a573660885 == 3)) {
printf("POINT: 814\n");
    	calculate_outputm198(input);
    } 
printf("POINT: 815\n");

    if((a573660885 == 8 &&  cf==1 )) {
printf("POINT: 816\n");
    	calculate_outputm202(input);
    } 
printf("POINT: 817\n");

    if(( cf==1  && a573660885 == 9)) {
printf("POINT: 818\n");
    	calculate_outputm203(input);
    } 
printf("POINT: 819\n");

    if(( cf==1  && a573660885 == 10)) {
printf("POINT: 820\n");
    	calculate_outputm204(input);
    } 
}
 void calculate_outputm205(int input) {
printf("POINT: 821\n");

    if((((a608032282 == 7 && ( cf==1  && (input == 1))) && a710810301 == 7) && a322699279 == 7)) {
printf("POINT: 822\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 33 ;
    	a524497834 = 11; 
    	 printf("%d\n", 22);  
printf("POINT: 823\n");

    } 
 if(((input == 9) && ((( cf==1  && a710810301 == 7) && a322699279 == 7) && a608032282 == 7))) {
printf("POINT: 824\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 12;
    	a1916167078 = 12; 
    	 printf("%d\n", 16);  
printf("POINT: 825\n");

    } 
 if((a710810301 == 7 && (a608032282 == 7 && (((input == 11) &&  cf==1 ) && a322699279 == 7)))) {
printf("POINT: 826\n");
    	cf = 0;
    	a710810301 = 4;
    	a460729584 = 36 ;
    	a878535168 = 14; 
    	 printf("%d\n", 18);  
printf("POINT: 827\n");

    } 
 if((a608032282 == 7 && ((( cf==1  && a322699279 == 7) && a710810301 == 7) && (input == 12)))) {
printf("POINT: 828\n");
    	cf = 0;
    	a608032282 = 6;
    	a573660885 = 10; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm206(int input) {
printf("POINT: 829\n");

    if((a710810301 == 7 && ((input == 1) && ((a608032282 == 7 &&  cf==1 ) && a322699279 == 8)))) {
printf("POINT: 830\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
printf("POINT: 831\n");

    } 
 if(((a710810301 == 7 && (a322699279 == 8 && (a608032282 == 7 &&  cf==1 ))) && (input == 5))) {
printf("POINT: 832\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 833\n");

    } 
 if((a710810301 == 7 && (a608032282 == 7 && (( cf==1  && a322699279 == 8) && (input == 8))))) {
printf("POINT: 834\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 835\n");

    } 
 if((((( cf==1  && a710810301 == 7) && a322699279 == 8) && a608032282 == 7) && (input == 11))) {
printf("POINT: 836\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm207(int input) {
printf("POINT: 837\n");

    if((a608032282 == 7 && ((( cf==1  && (input == 8)) && a322699279 == 9) && a710810301 == 7))) {
printf("POINT: 838\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 12;
    	a1916167078 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm208(int input) {
printf("POINT: 839\n");

    if(((((input == 7) && ( cf==1  && a710810301 == 7)) && a608032282 == 7) && a322699279 == 11)) {
printf("POINT: 840\n");
    	cf = 0;
    	a2068151937 = 14;
    	a710810301 = 9;
    	a1279395252 = 10; 
    	 printf("%d\n", 20);  
printf("POINT: 841\n");

    } 
 if((a608032282 == 7 && (a710810301 == 7 && (a322699279 == 11 && ((input == 12) &&  cf==1 ))))) {
printf("POINT: 842\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 12;
    	a1916167078 = 10; 
    	 printf("%d\n", 26);  
printf("POINT: 843\n");

    } 
 if((((a710810301 == 7 && ( cf==1  && a322699279 == 11)) && a608032282 == 7) && (input == 14))) {
printf("POINT: 844\n");
    	cf = 0;
    	a2068151937 = 13;
    	a710810301 = 9;
    	a1410369705 = 8; 
    	 printf("%d\n", 22);  
printf("POINT: 845\n");

    } 
 if((((( cf==1  && a322699279 == 11) && a710810301 == 7) && a608032282 == 7) && (input == 1))) {
printf("POINT: 846\n");
    	cf = 0;
    	a710810301 = 4;
    	a460729584 = 32 ;
    	a599073259 = 15; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm209(int input) {
printf("POINT: 847\n");

    if((a608032282 == 7 && ((( cf==1  && a710810301 == 7) && (input == 4)) && a322699279 == 13))) {
printf("POINT: 848\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm33(int input) {
printf("POINT: 849\n");

    if((a322699279 == 7 &&  cf==1 )) {
printf("POINT: 850\n");
    	calculate_outputm205(input);
    } 
printf("POINT: 851\n");

    if((a322699279 == 8 &&  cf==1 )) {
printf("POINT: 852\n");
    	calculate_outputm206(input);
    } 
printf("POINT: 853\n");

    if(( cf==1  && a322699279 == 9)) {
printf("POINT: 854\n");
    	calculate_outputm207(input);
    } 
printf("POINT: 855\n");

    if((a322699279 == 11 &&  cf==1 )) {
printf("POINT: 856\n");
    	calculate_outputm208(input);
    } 
printf("POINT: 857\n");

    if((a322699279 == 13 &&  cf==1 )) {
printf("POINT: 858\n");
    	calculate_outputm209(input);
    } 
}
 void calculate_outputm211(int input) {
printf("POINT: 859\n");

    if((((( cf==1  && a608032282 == 8) && a650139459 == 7) && (input == 11)) && a710810301 == 7)) {
printf("POINT: 860\n");
    	cf = 0;
    	a608032282 = 5;
    	a1410369705 = 2; 
    	 printf("%d\n", 20);  
printf("POINT: 861\n");

    } 
 if(((input == 15) && (a608032282 == 8 && (( cf==1  && a710810301 == 7) && a650139459 == 7)))) {
printf("POINT: 862\n");
    	cf = 0;
    	a1926168604 = 34 ;
    	a681527819 = 33 ;
    	a710810301 = 5; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm213(int input) {
printf("POINT: 863\n");

    if(((a650139459 == 9 && (( cf==1  && a710810301 == 7) && a608032282 == 8)) && (input == 14))) {
printf("POINT: 864\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm215(int input) {
printf("POINT: 865\n");

    if(((a608032282 == 8 && (a650139459 == 13 && ( cf==1  && a710810301 == 7))) && (input == 1))) {
printf("POINT: 866\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 867\n");

    } 
 if(((input == 15) && ((a710810301 == 7 && ( cf==1  && a608032282 == 8)) && a650139459 == 13))) {
printf("POINT: 868\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm34(int input) {
printf("POINT: 869\n");

    if((a650139459 == 7 &&  cf==1 )) {
printf("POINT: 870\n");
    	calculate_outputm211(input);
    } 
printf("POINT: 871\n");

    if((a650139459 == 9 &&  cf==1 )) {
printf("POINT: 872\n");
    	calculate_outputm213(input);
    } 
printf("POINT: 873\n");

    if(( cf==1  && a650139459 == 13)) {
printf("POINT: 874\n");
    	calculate_outputm215(input);
    } 
}
 void calculate_outputm216(int input) {
printf("POINT: 875\n");

    if(((a710810301 == 8 && (( cf==1  && (input == 3)) && a18652935 == 3)) && a1368342524 == 10)) {
printf("POINT: 876\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 33 ;
    	a2083228155 = 4; 
    	 printf("%d\n", 26);  
printf("POINT: 877\n");

    } 
 if(((a1368342524 == 10 && (( cf==1  && a710810301 == 8) && (input == 9))) && a18652935 == 3)) {
printf("POINT: 878\n");
    	cf = 0;
    	a1012822964 = 33 ;
    	a710810301 = 10;
    	a2083228155 = 4; 
    	 printf("%d\n", 26);  
printf("POINT: 879\n");

    } 
 if(((a710810301 == 8 && (a1368342524 == 10 && ( cf==1  && (input == 11)))) && a18652935 == 3)) {
printf("POINT: 880\n");
    	cf = 0;
    	a1466212053 = 32 ;
    	a1368342524 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm218(int input) {
printf("POINT: 881\n");

    if(((a18652935 == 5 && (( cf==1  && a710810301 == 8) && a1368342524 == 10)) && (input == 1))) {
printf("POINT: 882\n");
    	cf = 0;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm219(int input) {
printf("POINT: 883\n");

    if((((input == 12) && (a1368342524 == 10 && ( cf==1  && a710810301 == 8))) && a18652935 == 6)) {
printf("POINT: 884\n");
    	cf = 0;
    	a681527819 = 35 ;
    	a1926168604 = 34 ;
    	a710810301 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm221(int input) {
printf("POINT: 885\n");

    if((a1368342524 == 10 && (a710810301 == 8 && ((a18652935 == 9 &&  cf==1 ) && (input == 4))))) {
printf("POINT: 886\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 33 ;
    	a2083228155 = 2; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm35(int input) {
printf("POINT: 887\n");

    if(( cf==1  && a18652935 == 3)) {
printf("POINT: 888\n");
    	calculate_outputm216(input);
    } 
printf("POINT: 889\n");

    if(( cf==1  && a18652935 == 5)) {
printf("POINT: 890\n");
    	calculate_outputm218(input);
    } 
printf("POINT: 891\n");

    if(( cf==1  && a18652935 == 6)) {
printf("POINT: 892\n");
    	calculate_outputm219(input);
    } 
printf("POINT: 893\n");

    if(( cf==1  && a18652935 == 9)) {
printf("POINT: 894\n");
    	calculate_outputm221(input);
    } 
}
 void calculate_outputm222(int input) {
printf("POINT: 895\n");

    if(((input == 4) && (((a710810301 == 8 &&  cf==1 ) && a1368342524 == 11) && a1466212053 == 32))) {
printf("POINT: 896\n");
    	cf = 0;
    	a1368342524 = 14;
    	a677112242 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 897\n");

    } 
 if((((a1466212053 == 32 && ( cf==1  && a710810301 == 8)) && (input == 14)) && a1368342524 == 11)) {
printf("POINT: 898\n");
    	cf = 0;
    	a1012822964 = 33 ;
    	a710810301 = 10;
    	a2083228155 = 4; 
    	 printf("%d\n", 26);  
printf("POINT: 899\n");

    } 
 if((a1368342524 == 11 && ((input == 7) && (a710810301 == 8 && ( cf==1  && a1466212053 == 32))))) {
printf("POINT: 900\n");
    	cf = 0;
    	a1163913646 = 32 ;
    	a1368342524 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm223(int input) {
printf("POINT: 901\n");

    if(((((a710810301 == 8 &&  cf==1 ) && (input == 3)) && a1466212053 == 33) && a1368342524 == 11)) {
printf("POINT: 902\n");
    	cf = 0;
    	a1926168604 = 34 ;
    	a681527819 = 36 ;
    	a710810301 = 5; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm225(int input) {
printf("POINT: 903\n");

    if(((a710810301 == 8 && (( cf==1  && (input == 1)) && a1466212053 == 36)) && a1368342524 == 11)) {
printf("POINT: 904\n");
    	cf = 0;
    	a710810301 = 9;
    	a1204585576 = 33 ;
    	a2068151937 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 905\n");

    } 
 if((((( cf==1  && a1466212053 == 36) && a1368342524 == 11) && (input == 9)) && a710810301 == 8)) {
printf("POINT: 906\n");
    	cf = 0;
    	a460729584 = 32 ;
    	a710810301 = 4;
    	a599073259 = 14; 
    	 printf("%d\n", 20);  
printf("POINT: 907\n");

    } 
 if((a710810301 == 8 && (a1466212053 == 36 && (a1368342524 == 11 && ((input == 11) &&  cf==1 ))))) {
printf("POINT: 908\n");
    	cf = 0;
    	a1368342524 = 16;
    	a470663134 = 12; 
    	 printf("%d\n", 20);  
printf("POINT: 909\n");

    } 
 if((a1466212053 == 36 && (a1368342524 == 11 && (((input == 15) &&  cf==1 ) && a710810301 == 8)))) {
printf("POINT: 910\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 33 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm36(int input) {
printf("POINT: 911\n");

    if(( cf==1  && a1466212053 == 32)) {
printf("POINT: 912\n");
    	calculate_outputm222(input);
    } 
printf("POINT: 913\n");

    if(( cf==1  && a1466212053 == 33)) {
printf("POINT: 914\n");
    	calculate_outputm223(input);
    } 
printf("POINT: 915\n");

    if((a1466212053 == 36 &&  cf==1 )) {
printf("POINT: 916\n");
    	calculate_outputm225(input);
    } 
}
 void calculate_outputm226(int input) {
printf("POINT: 917\n");

    if(((((a400180708 == 34 &&  cf==1 ) && a710810301 == 8) && a1368342524 == 12) && (input == 1))) {
printf("POINT: 918\n");
    	cf = 0;
    	a460729584 = 35 ;
    	a777244229 = 34 ;
    	a710810301 = 4; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm227(int input) {
printf("POINT: 919\n");

    if((((input == 13) && (a710810301 == 8 && (a400180708 == 35 &&  cf==1 ))) && a1368342524 == 12)) {
printf("POINT: 920\n");
    	cf = 0;
    	a1204585576 = 35 ;
    	a710810301 = 9;
    	a2068151937 = 8; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm228(int input) {
printf("POINT: 921\n");

    if((a710810301 == 8 && ((input == 2) && (a1368342524 == 12 && (a400180708 == 36 &&  cf==1 ))))) {
printf("POINT: 922\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 923\n");

    } 
 if(((a1368342524 == 12 && (((input == 8) &&  cf==1 ) && a400180708 == 36)) && a710810301 == 8)) {
printf("POINT: 924\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 925\n");

    } 
 if((a710810301 == 8 && (a1368342524 == 12 && ((input == 11) && (a400180708 == 36 &&  cf==1 ))))) {
printf("POINT: 926\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm37(int input) {
printf("POINT: 927\n");

    if((a400180708 == 34 &&  cf==1 )) {
printf("POINT: 928\n");
    	calculate_outputm226(input);
    } 
printf("POINT: 929\n");

    if(( cf==1  && a400180708 == 35)) {
printf("POINT: 930\n");
    	calculate_outputm227(input);
    } 
printf("POINT: 931\n");

    if(( cf==1  && a400180708 == 36)) {
printf("POINT: 932\n");
    	calculate_outputm228(input);
    } 
}
 void calculate_outputm230(int input) {
printf("POINT: 933\n");

    if(((((a1163913646 == 33 &&  cf==1 ) && a710810301 == 8) && a1368342524 == 13) && (input == 13))) {
printf("POINT: 934\n");
    	cf = 0;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 935\n");

    } 
 if(((a710810301 == 8 && (a1163913646 == 33 && (a1368342524 == 13 &&  cf==1 ))) && (input == 14))) {
printf("POINT: 936\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 9;
    	a966113011 = 11; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm231(int input) {
printf("POINT: 937\n");

    if((a1163913646 == 34 && (a710810301 == 8 && ((input == 3) && (a1368342524 == 13 &&  cf==1 ))))) {
printf("POINT: 938\n");
    	cf = 0;
    	a608032282 = 5;
    	a710810301 = 7;
    	a1410369705 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 939\n");

    } 
 if((a710810301 == 8 && (((a1368342524 == 13 &&  cf==1 ) && a1163913646 == 34) && (input == 12)))) {
printf("POINT: 940\n");
    	cf = 0;
    	a1708500674 = 34 ;
    	a710810301 = 6;
    	a1213256257 = 16; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm38(int input) {
printf("POINT: 941\n");

    if(( cf==1  && a1163913646 == 33)) {
printf("POINT: 942\n");
    	calculate_outputm230(input);
    } 
printf("POINT: 943\n");

    if((a1163913646 == 34 &&  cf==1 )) {
printf("POINT: 944\n");
    	calculate_outputm231(input);
    } 
}
 void calculate_outputm236(int input) {
printf("POINT: 945\n");

    if((a1368342524 == 14 && ((( cf==1  && (input == 11)) && a677112242 == 9) && a710810301 == 8))) {
printf("POINT: 946\n");
    	cf = 0;
    	a1466212053 = 33 ;
    	a1368342524 = 11; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm39(int input) {
printf("POINT: 947\n");

    if((a677112242 == 9 &&  cf==1 )) {
printf("POINT: 948\n");
    	calculate_outputm236(input);
    } 
}
 void calculate_outputm241(int input) {
printf("POINT: 949\n");

    if((((( cf==1  && a599073259 == 12) && (input == 3)) && a1368342524 == 15) && a710810301 == 8)) {
printf("POINT: 950\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 32 ;
    	a775360537 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 951\n");

    } 
 if(((input == 12) && ((a599073259 == 12 && ( cf==1  && a1368342524 == 15)) && a710810301 == 8))) {
printf("POINT: 952\n");
    	cf = 0;
    	a1368342524 = 10;
    	a18652935 = 3; 
    	 printf("%d\n", 25);  
printf("POINT: 953\n");

    } 
 if(((((input == 13) && ( cf==1  && a599073259 == 12)) && a710810301 == 8) && a1368342524 == 15)) {
printf("POINT: 954\n");
    	cf = 0;
    	a710810301 = 3;
    	a647992626 = 6;
    	a1500959558 = 6; 
    	 printf("%d\n", 22);  
printf("POINT: 955\n");

    } 
 if((a1368342524 == 15 && (a599073259 == 12 && (( cf==1  && a710810301 == 8) && (input == 14))))) {
printf("POINT: 956\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 35 ;
    	a129815901 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm242(int input) {
printf("POINT: 957\n");

    if(((input == 7) && ((( cf==1  && a599073259 == 13) && a710810301 == 8) && a1368342524 == 15))) {
printf("POINT: 958\n");
    	cf = 0;
    	a777244229 = 32 ;
    	a460729584 = 35 ;
    	a710810301 = 4; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm243(int input) {
printf("POINT: 959\n");

    if(((((input == 11) && ( cf==1  && a1368342524 == 15)) && a599073259 == 14) && a710810301 == 8)) {
printf("POINT: 960\n");
    	cf = 0;
    	a608032282 = 5;
    	a710810301 = 7;
    	a1410369705 = 4; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm40(int input) {
printf("POINT: 961\n");

    if((a599073259 == 12 &&  cf==1 )) {
printf("POINT: 962\n");
    	calculate_outputm241(input);
    } 
printf("POINT: 963\n");

    if(( cf==1  && a599073259 == 13)) {
printf("POINT: 964\n");
    	calculate_outputm242(input);
    } 
printf("POINT: 965\n");

    if((a599073259 == 14 &&  cf==1 )) {
printf("POINT: 966\n");
    	calculate_outputm243(input);
    } 
}
 void calculate_outputm244(int input) {
printf("POINT: 967\n");

    if(((a710810301 == 8 && (a470663134 == 5 && ((input == 3) &&  cf==1 ))) && a1368342524 == 16)) {
printf("POINT: 968\n");
    	cf = 0;
    	a710810301 = 9;
    	a2068151937 = 13;
    	a1410369705 = 5; 
    	 printf("%d\n", 26);  
printf("POINT: 969\n");

    } 
 if(((((input == 14) && (a1368342524 == 16 &&  cf==1 )) && a470663134 == 5) && a710810301 == 8)) {
printf("POINT: 970\n");
    	cf = 0;
    	a608032282 = 7;
    	a710810301 = 7;
    	a322699279 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 971\n");

    } 
 if((a1368342524 == 16 && (a470663134 == 5 && ((a710810301 == 8 &&  cf==1 ) && (input == 2))))) {
printf("POINT: 972\n");
    	cf = 0;
    	a1012822964 = 35 ;
    	a710810301 = 10;
    	a129815901 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm246(int input) {
printf("POINT: 973\n");

    if((((input == 3) && (a1368342524 == 16 && ( cf==1  && a710810301 == 8))) && a470663134 == 7)) {
printf("POINT: 974\n");
    	cf = 0;
    	a460729584 = 35 ;
    	a777244229 = 36 ;
    	a710810301 = 4; 
    	 printf("%d\n", 26);  
printf("POINT: 975\n");

    } 
 if((a470663134 == 7 && ((a710810301 == 8 && ( cf==1  && (input == 5))) && a1368342524 == 16))) {
printf("POINT: 976\n");
    	cf = 0;
    	a1213256257 = 12;
    	a710810301 = 6;
    	a1916167078 = 14; 
    	 printf("%d\n", 25);  
printf("POINT: 977\n");

    } 
 if((a1368342524 == 16 && ((a710810301 == 8 && ( cf==1  && a470663134 == 7)) && (input == 11)))) {
printf("POINT: 978\n");
    	cf = 0;
    	a1368342524 = 10;
    	a18652935 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm249(int input) {
printf("POINT: 979\n");

    if((((( cf==1  && a1368342524 == 16) && a470663134 == 10) && (input == 6)) && a710810301 == 8)) {
printf("POINT: 980\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm251(int input) {
printf("POINT: 981\n");

    if((((( cf==1  && a1368342524 == 16) && (input == 2)) && a710810301 == 8) && a470663134 == 12)) {
printf("POINT: 982\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 983\n");

    } 
 if((((( cf==1  && (input == 6)) && a470663134 == 12) && a710810301 == 8) && a1368342524 == 16)) {
printf("POINT: 984\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 985\n");

    } 
 if((a470663134 == 12 && ((input == 9) && ((a710810301 == 8 &&  cf==1 ) && a1368342524 == 16)))) {
printf("POINT: 986\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 987\n");

    } 
 if(((input == 14) && (a1368342524 == 16 && (( cf==1  && a470663134 == 12) && a710810301 == 8)))) {
printf("POINT: 988\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm41(int input) {
printf("POINT: 989\n");

    if(( cf==1  && a470663134 == 5)) {
printf("POINT: 990\n");
    	calculate_outputm244(input);
    } 
printf("POINT: 991\n");

    if(( cf==1  && a470663134 == 7)) {
printf("POINT: 992\n");
    	calculate_outputm246(input);
    } 
printf("POINT: 993\n");

    if(( cf==1  && a470663134 == 10)) {
printf("POINT: 994\n");
    	calculate_outputm249(input);
    } 
printf("POINT: 995\n");

    if((a470663134 == 12 &&  cf==1 )) {
printf("POINT: 996\n");
    	calculate_outputm251(input);
    } 
}
 void calculate_outputm252(int input) {
printf("POINT: 997\n");

    if((a191699712 == 7 && ((( cf==1  && (input == 4)) && a1368342524 == 17) && a710810301 == 8))) {
printf("POINT: 998\n");
    	cf = 0;
    	a1012822964 = 32 ;
    	a710810301 = 10;
    	a947182640 = 13; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm253(int input) {
printf("POINT: 999\n");

    if(((a1368342524 == 17 && ((input == 10) && (a710810301 == 8 &&  cf==1 ))) && a191699712 == 8)) {
printf("POINT: 1000\n");
    	cf = 0;
    	a1712019689 = 34 ;
    	a710810301 = 3;
    	a647992626 = 9; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm254(int input) {
printf("POINT: 1001\n");

    if((a1368342524 == 17 && ((a710810301 == 8 && (a191699712 == 9 &&  cf==1 )) && (input == 8)))) {
printf("POINT: 1002\n");
    	cf = 0;
    	a710810301 = 3;
    	a1712019689 = 36 ;
    	a647992626 = 9; 
    	 printf("%d\n", 18);  
printf("POINT: 1003\n");

    } 
 if((((a1368342524 == 17 && ( cf==1  && a710810301 == 8)) && (input == 11)) && a191699712 == 9)) {
printf("POINT: 1004\n");
    	cf = 0;
    	a400180708 = 35 ;
    	a1368342524 = 12; 
    	 printf("%d\n", 16);  
printf("POINT: 1005\n");

    } 
 if((a191699712 == 9 && ((a710810301 == 8 && ((input == 5) &&  cf==1 )) && a1368342524 == 17))) {
printf("POINT: 1006\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 10;
    	a768322760 = 14; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm255(int input) {
printf("POINT: 1007\n");

    if((a191699712 == 10 && ((((input == 4) &&  cf==1 ) && a1368342524 == 17) && a710810301 == 8))) {
printf("POINT: 1008\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1009\n");

    } 
 if(((input == 5) && (a191699712 == 10 && (a1368342524 == 17 && ( cf==1  && a710810301 == 8))))) {
printf("POINT: 1010\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1011\n");

    } 
 if((a191699712 == 10 && (a710810301 == 8 && ((a1368342524 == 17 &&  cf==1 ) && (input == 7))))) {
printf("POINT: 1012\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1013\n");

    } 
 if((a1368342524 == 17 && (((input == 14) && ( cf==1  && a191699712 == 10)) && a710810301 == 8))) {
printf("POINT: 1014\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm256(int input) {
printf("POINT: 1015\n");

    if((((input == 3) && ((a710810301 == 8 &&  cf==1 ) && a1368342524 == 17)) && a191699712 == 11)) {
printf("POINT: 1016\n");
    	cf = 0;
    	a681527819 = 34 ;
    	a1926168604 = 34 ;
    	a710810301 = 5; 
    	 printf("%d\n", 21);  
printf("POINT: 1017\n");

    } 
 if(((input == 9) && (a191699712 == 11 && ((a1368342524 == 17 &&  cf==1 ) && a710810301 == 8)))) {
printf("POINT: 1018\n");
    	cf = 0;
    	a710810301 = 9;
    	a2068151937 = 13;
    	a1410369705 = 3; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm258(int input) {
printf("POINT: 1019\n");

    if((a1368342524 == 17 && (((a710810301 == 8 &&  cf==1 ) && a191699712 == 13) && (input == 1)))) {
printf("POINT: 1020\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 1021\n");

    } 
 if((a710810301 == 8 && ((input == 8) && (( cf==1  && a191699712 == 13) && a1368342524 == 17)))) {
printf("POINT: 1022\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm42(int input) {
printf("POINT: 1023\n");

    if((a191699712 == 7 &&  cf==1 )) {
printf("POINT: 1024\n");
    	calculate_outputm252(input);
    } 
printf("POINT: 1025\n");

    if((a191699712 == 8 &&  cf==1 )) {
printf("POINT: 1026\n");
    	calculate_outputm253(input);
    } 
printf("POINT: 1027\n");

    if((a191699712 == 9 &&  cf==1 )) {
printf("POINT: 1028\n");
    	calculate_outputm254(input);
    } 
printf("POINT: 1029\n");

    if(( cf==1  && a191699712 == 10)) {
printf("POINT: 1030\n");
    	calculate_outputm255(input);
    } 
printf("POINT: 1031\n");

    if((a191699712 == 11 &&  cf==1 )) {
printf("POINT: 1032\n");
    	calculate_outputm256(input);
    } 
printf("POINT: 1033\n");

    if((a191699712 == 13 &&  cf==1 )) {
printf("POINT: 1034\n");
    	calculate_outputm258(input);
    } 
}
 void calculate_outputm260(int input) {
printf("POINT: 1035\n");

    if(((((a710810301 == 9 &&  cf==1 ) && a1204585576 == 33) && a2068151937 == 8) && (input == 1))) {
printf("POINT: 1036\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1037\n");

    } 
 if((a710810301 == 9 && (a2068151937 == 8 && (( cf==1  && (input == 3)) && a1204585576 == 33)))) {
printf("POINT: 1038\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1039\n");

    } 
 if(((a710810301 == 9 && (a2068151937 == 8 && ( cf==1  && (input == 9)))) && a1204585576 == 33)) {
printf("POINT: 1040\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1041\n");

    } 
 if(((input == 14) && (a1204585576 == 33 && (a2068151937 == 8 && ( cf==1  && a710810301 == 9))))) {
printf("POINT: 1042\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm261(int input) {
printf("POINT: 1043\n");

    if((a710810301 == 9 && ((a2068151937 == 8 && ( cf==1  && (input == 5))) && a1204585576 == 34))) {
printf("POINT: 1044\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1045\n");

    } 
 if(((a710810301 == 9 && (( cf==1  && a2068151937 == 8) && a1204585576 == 34)) && (input == 10))) {
printf("POINT: 1046\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm262(int input) {
printf("POINT: 1047\n");

    if((a2068151937 == 8 && ((( cf==1  && a1204585576 == 35) && (input == 1)) && a710810301 == 9))) {
printf("POINT: 1048\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 5;
    	a1410369705 = 3; 
    	 printf("%d\n", 22);  
printf("POINT: 1049\n");

    } 
 if((a2068151937 == 8 && (a710810301 == 9 && (( cf==1  && a1204585576 == 35) && (input == 8))))) {
printf("POINT: 1050\n");
    	cf = 0;
    	a2068151937 = 14;
    	a1279395252 = 5; 
    	 printf("%d\n", 23);  
printf("POINT: 1051\n");

    } 
 if(((input == 9) && (a1204585576 == 35 && (( cf==1  && a710810301 == 9) && a2068151937 == 8)))) {
printf("POINT: 1052\n");
    	cf = 0;
    	a1213256257 = 10;
    	a710810301 = 6;
    	a768322760 = 7; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm43(int input) {
printf("POINT: 1053\n");

    if(( cf==1  && a1204585576 == 33)) {
printf("POINT: 1054\n");
    	calculate_outputm260(input);
    } 
printf("POINT: 1055\n");

    if((a1204585576 == 34 &&  cf==1 )) {
printf("POINT: 1056\n");
    	calculate_outputm261(input);
    } 
printf("POINT: 1057\n");

    if(( cf==1  && a1204585576 == 35)) {
printf("POINT: 1058\n");
    	calculate_outputm262(input);
    } 
}
 void calculate_outputm263(int input) {
printf("POINT: 1059\n");

    if((((input == 4) && (a1404083158 == 32 && (a2068151937 == 9 &&  cf==1 ))) && a710810301 == 9)) {
printf("POINT: 1060\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 8;
    	a650139459 = 7; 
    	 printf("%d\n", 22);  
printf("POINT: 1061\n");

    } 
 if((a2068151937 == 9 && (a710810301 == 9 && (( cf==1  && a1404083158 == 32) && (input == 14))))) {
printf("POINT: 1062\n");
    	cf = 0;
    	a1368342524 = 17;
    	a710810301 = 8;
    	a191699712 = 11; 
    	 printf("%d\n", 25);  
printf("POINT: 1063\n");

    } 
 if((a1404083158 == 32 && (a2068151937 == 9 && (( cf==1  && a710810301 == 9) && (input == 15))))) {
printf("POINT: 1064\n");
    	cf = 0;
    	a1213256257 = 15;
    	a710810301 = 6;
    	a619470312 = 8; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm266(int input) {
printf("POINT: 1065\n");

    if((((input == 10) && (a2068151937 == 9 && (a1404083158 == 36 &&  cf==1 ))) && a710810301 == 9)) {
printf("POINT: 1066\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm44(int input) {
printf("POINT: 1067\n");

    if((a1404083158 == 32 &&  cf==1 )) {
printf("POINT: 1068\n");
    	calculate_outputm263(input);
    } 
printf("POINT: 1069\n");

    if(( cf==1  && a1404083158 == 36)) {
printf("POINT: 1070\n");
    	calculate_outputm266(input);
    } 
}
 void calculate_outputm268(int input) {
printf("POINT: 1071\n");

    if((a948320041 == 32 && (a2068151937 == 11 && (( cf==1  && a710810301 == 9) && (input == 4))))) {
printf("POINT: 1072\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 1073\n");

    } 
 if((((a2068151937 == 11 && (a710810301 == 9 &&  cf==1 )) && (input == 14)) && a948320041 == 32)) {
printf("POINT: 1074\n");
    	cf = 0;
    	a1213256257 = 12;
    	a710810301 = 6;
    	a1916167078 = 15; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm269(int input) {
printf("POINT: 1075\n");

    if(((input == 4) && (a948320041 == 33 && (( cf==1  && a710810301 == 9) && a2068151937 == 11)))) {
printf("POINT: 1076\n");
    	cf = 0;
    	a948320041 = 32 ; 
    	 printf("%d\n", 17);  
printf("POINT: 1077\n");

    } 
 if((((input == 14) && (a710810301 == 9 && ( cf==1  && a948320041 == 33))) && a2068151937 == 11)) {
printf("POINT: 1078\n");
    	cf = 0;
    	a948320041 = 32 ; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm270(int input) {
printf("POINT: 1079\n");

    if(((input == 13) && (a2068151937 == 11 && ((a948320041 == 34 &&  cf==1 ) && a710810301 == 9)))) {
printf("POINT: 1080\n");
    	cf = 0;
    	a948320041 = 32 ; 
    	 printf("%d\n", 17);  
printf("POINT: 1081\n");

    } 
 if(((a948320041 == 34 && (a2068151937 == 11 && ((input == 15) &&  cf==1 ))) && a710810301 == 9)) {
printf("POINT: 1082\n");
    	cf = 0;
    	a948320041 = 32 ; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm271(int input) {
printf("POINT: 1083\n");

    if(((a948320041 == 35 && (((input == 4) &&  cf==1 ) && a2068151937 == 11)) && a710810301 == 9)) {
printf("POINT: 1084\n");
    	cf = 0;
    	a710810301 = 5;
    	a1926168604 = 32 ;
    	a775360537 = 7; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm46(int input) {
printf("POINT: 1085\n");

    if((a948320041 == 32 &&  cf==1 )) {
printf("POINT: 1086\n");
    	calculate_outputm268(input);
    } 
printf("POINT: 1087\n");

    if(( cf==1  && a948320041 == 33)) {
printf("POINT: 1088\n");
    	calculate_outputm269(input);
    } 
printf("POINT: 1089\n");

    if(( cf==1  && a948320041 == 34)) {
printf("POINT: 1090\n");
    	calculate_outputm270(input);
    } 
printf("POINT: 1091\n");

    if(( cf==1  && a948320041 == 35)) {
printf("POINT: 1092\n");
    	calculate_outputm271(input);
    } 
}
 void calculate_outputm274(int input) {
printf("POINT: 1093\n");

    if((a2068151937 == 12 && ((input == 13) && ((a681527819 == 34 &&  cf==1 ) && a710810301 == 9)))) {
printf("POINT: 1094\n");
    	cf = 0;
    	a2068151937 = 14;
    	a1279395252 = 3; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm47(int input) {
printf("POINT: 1095\n");

    if((a681527819 == 34 &&  cf==1 )) {
printf("POINT: 1096\n");
    	calculate_outputm274(input);
    } 
}
 void calculate_outputm276(int input) {
printf("POINT: 1097\n");

    if((((a710810301 == 9 && ( cf==1  && a2068151937 == 13)) && (input == 6)) && a1410369705 == 1)) {
printf("POINT: 1098\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
printf("POINT: 1099\n");

    } 
 if((((input == 7) && (a2068151937 == 13 && (a710810301 == 9 &&  cf==1 ))) && a1410369705 == 1)) {
printf("POINT: 1100\n");
    	cf = 0;
    	a608032282 = 2;
    	a710810301 = 7;
    	a1520738029 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm277(int input) {
printf("POINT: 1101\n");

    if((a1410369705 == 2 && ((input == 1) && (a710810301 == 9 && ( cf==1  && a2068151937 == 13))))) {
printf("POINT: 1102\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1103\n");

    } 
 if((a1410369705 == 2 && (a710810301 == 9 && ((a2068151937 == 13 &&  cf==1 ) && (input == 6))))) {
printf("POINT: 1104\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1105\n");

    } 
 if((a710810301 == 9 && (a1410369705 == 2 && (( cf==1  && a2068151937 == 13) && (input == 9))))) {
printf("POINT: 1106\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm278(int input) {
printf("POINT: 1107\n");

    if((a710810301 == 9 && ((a1410369705 == 3 && ((input == 11) &&  cf==1 )) && a2068151937 == 13))) {
printf("POINT: 1108\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm279(int input) {
printf("POINT: 1109\n");

    if(((input == 1) && (((a710810301 == 9 &&  cf==1 ) && a1410369705 == 5) && a2068151937 == 13))) {
printf("POINT: 1110\n");
    	cf = 0;
    	a1368342524 = 17;
    	a710810301 = 8;
    	a191699712 = 9; 
    	 printf("%d\n", 17);  
printf("POINT: 1111\n");

    } 
 if((a2068151937 == 13 && ((input == 4) && (( cf==1  && a710810301 == 9) && a1410369705 == 5)))) {
printf("POINT: 1112\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 2;
    	a1520738029 = 6; 
    	 printf("%d\n", 16);  
printf("POINT: 1113\n");

    } 
 if(((a710810301 == 9 && ((a2068151937 == 13 &&  cf==1 ) && (input == 6))) && a1410369705 == 5)) {
printf("POINT: 1114\n");
    	cf = 0;
    	a710810301 = 8;
    	a1466212053 = 32 ;
    	a1368342524 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 1115\n");

    } 
 if(((a2068151937 == 13 && (( cf==1  && (input == 10)) && a1410369705 == 5)) && a710810301 == 9)) {
printf("POINT: 1116\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 9;
    	a966113011 = 11; 
    	 printf("%d\n", 22);  
printf("POINT: 1117\n");

    } 
 if((a1410369705 == 5 && (a710810301 == 9 && (a2068151937 == 13 && ((input == 9) &&  cf==1 ))))) {
printf("POINT: 1118\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 36 ;
    	a1280269169 = 12; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm281(int input) {
printf("POINT: 1119\n");

    if((a2068151937 == 13 && (((input == 4) && (a710810301 == 9 &&  cf==1 )) && a1410369705 == 8))) {
printf("POINT: 1120\n");
    	cf = 0;
    	a2068151937 = 14;
    	a1279395252 = 8; 
    	 printf("%d\n", 16);  
printf("POINT: 1121\n");

    } 
 if(((((a2068151937 == 13 &&  cf==1 ) && (input == 12)) && a1410369705 == 8) && a710810301 == 9)) {
printf("POINT: 1122\n");
    	cf = 0;
    	a2068151937 = 14;
    	a1279395252 = 9; 
    	 printf("%d\n", 18);  
printf("POINT: 1123\n");

    } 
 if((a2068151937 == 13 && (((input == 6) && ( cf==1  && a710810301 == 9)) && a1410369705 == 8))) {
printf("POINT: 1124\n");
    	cf = 0;
    	a1213256257 = 15;
    	a710810301 = 6;
    	a619470312 = 5; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm48(int input) {
printf("POINT: 1125\n");

    if(( cf==1  && a1410369705 == 1)) {
printf("POINT: 1126\n");
    	calculate_outputm276(input);
    } 
printf("POINT: 1127\n");

    if((a1410369705 == 2 &&  cf==1 )) {
printf("POINT: 1128\n");
    	calculate_outputm277(input);
    } 
printf("POINT: 1129\n");

    if(( cf==1  && a1410369705 == 3)) {
printf("POINT: 1130\n");
    	calculate_outputm278(input);
    } 
printf("POINT: 1131\n");

    if(( cf==1  && a1410369705 == 5)) {
printf("POINT: 1132\n");
    	calculate_outputm279(input);
    } 
printf("POINT: 1133\n");

    if((a1410369705 == 8 &&  cf==1 )) {
printf("POINT: 1134\n");
    	calculate_outputm281(input);
    } 
}
 void calculate_outputm282(int input) {
printf("POINT: 1135\n");

    if((((( cf==1  && a2068151937 == 14) && (input == 4)) && a1279395252 == 3) && a710810301 == 9)) {
printf("POINT: 1136\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1137\n");

    } 
 if(((a2068151937 == 14 && ((a1279395252 == 3 &&  cf==1 ) && a710810301 == 9)) && (input == 7))) {
printf("POINT: 1138\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1139\n");

    } 
 if(((((input == 11) && (a2068151937 == 14 &&  cf==1 )) && a1279395252 == 3) && a710810301 == 9)) {
printf("POINT: 1140\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 4;
    	a1410514914 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1141\n");

    } 
 if((a2068151937 == 14 && ((( cf==1  && (input == 14)) && a1279395252 == 3) && a710810301 == 9))) {
printf("POINT: 1142\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm283(int input) {
printf("POINT: 1143\n");

    if((a1279395252 == 4 && ((a710810301 == 9 && ( cf==1  && (input == 12))) && a2068151937 == 14))) {
printf("POINT: 1144\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm284(int input) {
printf("POINT: 1145\n");

    if((((input == 5) && (( cf==1  && a2068151937 == 14) && a710810301 == 9)) && a1279395252 == 5)) {
printf("POINT: 1146\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 1147\n");

    } 
 if(((a1279395252 == 5 && ((input == 7) && ( cf==1  && a2068151937 == 14))) && a710810301 == 9)) {
printf("POINT: 1148\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 1149\n");

    } 
 if(((((a2068151937 == 14 &&  cf==1 ) && (input == 15)) && a1279395252 == 5) && a710810301 == 9)) {
printf("POINT: 1150\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm287(int input) {
printf("POINT: 1151\n");

    if(((input == 7) && (a2068151937 == 14 && (( cf==1  && a1279395252 == 8) && a710810301 == 9)))) {
printf("POINT: 1152\n");
    	cf = 0;
    	a1368342524 = 17;
    	a710810301 = 8;
    	a191699712 = 8; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm288(int input) {
printf("POINT: 1153\n");

    if((((input == 2) && (a1279395252 == 9 && (a2068151937 == 14 &&  cf==1 ))) && a710810301 == 9)) {
printf("POINT: 1154\n");
    	cf = 0;
    	a710810301 = 7;
    	a998691543 = 36 ;
    	a608032282 = 3; 
    	 printf("%d\n", 17);  
printf("POINT: 1155\n");

    } 
 if((a1279395252 == 9 && ((input == 6) && (( cf==1  && a2068151937 == 14) && a710810301 == 9)))) {
printf("POINT: 1156\n");
    	cf = 0;
    	a1213256257 = 15;
    	a710810301 = 6;
    	a619470312 = 1; 
    	 printf("%d\n", 26);  
printf("POINT: 1157\n");

    } 
 if(((input == 13) && (((a2068151937 == 14 &&  cf==1 ) && a710810301 == 9) && a1279395252 == 9))) {
printf("POINT: 1158\n");
    	cf = 0;
    	a710810301 = 6;
    	a1213256257 = 9;
    	a966113011 = 6; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm289(int input) {
printf("POINT: 1159\n");

    if(((input == 7) && (((a710810301 == 9 &&  cf==1 ) && a1279395252 == 10) && a2068151937 == 14))) {
printf("POINT: 1160\n");
    	cf = 0;
    	a710810301 = 10;
    	a1012822964 = 36 ;
    	a1280269169 = 10; 
    	 printf("%d\n", 23);  
printf("POINT: 1161\n");

    } 
 if((a2068151937 == 14 && (a1279395252 == 10 && (a710810301 == 9 && ((input == 12) &&  cf==1 ))))) {
printf("POINT: 1162\n");
    	cf = 0;
    	a1368342524 = 15;
    	a710810301 = 8;
    	a599073259 = 13; 
    	 printf("%d\n", 17);  
printf("POINT: 1163\n");

    } 
 if((a2068151937 == 14 && (((a710810301 == 9 &&  cf==1 ) && a1279395252 == 10) && (input == 1)))) {
printf("POINT: 1164\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 10;
    	a18652935 = 8; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm49(int input) {
printf("POINT: 1165\n");

    if(( cf==1  && a1279395252 == 3)) {
printf("POINT: 1166\n");
    	calculate_outputm282(input);
    } 
printf("POINT: 1167\n");

    if(( cf==1  && a1279395252 == 4)) {
printf("POINT: 1168\n");
    	calculate_outputm283(input);
    } 
printf("POINT: 1169\n");

    if(( cf==1  && a1279395252 == 5)) {
printf("POINT: 1170\n");
    	calculate_outputm284(input);
    } 
printf("POINT: 1171\n");

    if((a1279395252 == 8 &&  cf==1 )) {
printf("POINT: 1172\n");
    	calculate_outputm287(input);
    } 
printf("POINT: 1173\n");

    if(( cf==1  && a1279395252 == 9)) {
printf("POINT: 1174\n");
    	calculate_outputm288(input);
    } 
printf("POINT: 1175\n");

    if(( cf==1  && a1279395252 == 10)) {
printf("POINT: 1176\n");
    	calculate_outputm289(input);
    } 
}
 void calculate_outputm292(int input) {
printf("POINT: 1177\n");

    if((a2068151937 == 15 && ((a710810301 == 9 && ( cf==1  && a150836410 == 36)) && (input == 13)))) {
printf("POINT: 1178\n");
    	cf = 0;
    	a710810301 = 7;
    	a608032282 = 6;
    	a573660885 = 3; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm50(int input) {
printf("POINT: 1179\n");

    if((a150836410 == 36 &&  cf==1 )) {
printf("POINT: 1180\n");
    	calculate_outputm292(input);
    } 
}
 void calculate_outputm295(int input) {
printf("POINT: 1181\n");

    if((a1012822964 == 32 && ((( cf==1  && a710810301 == 10) && (input == 2)) && a947182640 == 13))) {
printf("POINT: 1182\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1183\n");

    } 
 if((a710810301 == 10 && (a1012822964 == 32 && (( cf==1  && a947182640 == 13) && (input == 8))))) {
printf("POINT: 1184\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm296(int input) {
printf("POINT: 1185\n");

    if((a1012822964 == 32 && ((input == 1) && (( cf==1  && a947182640 == 14) && a710810301 == 10)))) {
printf("POINT: 1186\n");
    	cf = 0;
    	a2068151937 = 13;
    	a710810301 = 9;
    	a1410369705 = 2; 
    	 printf("%d\n", 25);  
printf("POINT: 1187\n");

    } 
 if(((((a710810301 == 10 &&  cf==1 ) && a947182640 == 14) && a1012822964 == 32) && (input == 6))) {
printf("POINT: 1188\n");
    	cf = 0;
    	a1213256257 = 10;
    	a710810301 = 6;
    	a768322760 = 12; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm51(int input) {
printf("POINT: 1189\n");

    if(( cf==1  && a947182640 == 13)) {
printf("POINT: 1190\n");
    	calculate_outputm295(input);
    } 
printf("POINT: 1191\n");

    if((a947182640 == 14 &&  cf==1 )) {
printf("POINT: 1192\n");
    	calculate_outputm296(input);
    } 
}
 void calculate_outputm299(int input) {
printf("POINT: 1193\n");

    if((a2083228155 == 2 && (((a710810301 == 10 &&  cf==1 ) && (input == 1)) && a1012822964 == 33))) {
printf("POINT: 1194\n");
    	cf = 0;
    	a1213256257 = 15;
    	a710810301 = 6;
    	a619470312 = 4; 
    	 printf("%d\n", 18);  
printf("POINT: 1195\n");

    } 
 if((((input == 8) && (( cf==1  && a2083228155 == 2) && a710810301 == 10)) && a1012822964 == 33)) {
printf("POINT: 1196\n");
    	cf = 0;
    	a2068151937 = 14;
    	a710810301 = 9;
    	a1279395252 = 4; 
    	 printf("%d\n", 17);  
printf("POINT: 1197\n");

    } 
 if((a1012822964 == 33 && ((( cf==1  && a710810301 == 10) && a2083228155 == 2) && (input == 12)))) {
printf("POINT: 1198\n");
    	cf = 0;
    	a948320041 = 34 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm301(int input) {
printf("POINT: 1199\n");

    if((a2083228155 == 4 && (a710810301 == 10 && (a1012822964 == 33 && ( cf==1  && (input == 7)))))) {
printf("POINT: 1200\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 7; 
    	 printf("%d\n", 21);  
printf("POINT: 1201\n");

    } 
 if((a710810301 == 10 && (a2083228155 == 4 && (( cf==1  && a1012822964 == 33) && (input == 10))))) {
printf("POINT: 1202\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 15;
    	a599073259 = 12; 
    	 printf("%d\n", 17);  
printf("POINT: 1203\n");

    } 
 if((((a710810301 == 10 && ((input == 11) &&  cf==1 )) && a1012822964 == 33) && a2083228155 == 4)) {
printf("POINT: 1204\n");
    	cf = 0;
    	a1466212053 = 36 ;
    	a710810301 = 8;
    	a1368342524 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm304(int input) {
printf("POINT: 1205\n");

    if(((input == 1) && (a710810301 == 10 && (( cf==1  && a1012822964 == 33) && a2083228155 == 8)))) {
printf("POINT: 1206\n");
    	cf = 0;
    	a710810301 = 9;
    	a2068151937 = 13;
    	a1410369705 = 5; 
    	 printf("%d\n", 26);  
printf("POINT: 1207\n");

    } 
 if((a2083228155 == 8 && (a1012822964 == 33 && ((input == 3) && ( cf==1  && a710810301 == 10))))) {
printf("POINT: 1208\n");
    	cf = 0;
    	a710810301 = 9;
    	a2068151937 = 13;
    	a1410369705 = 5; 
    	 printf("%d\n", 26);  
printf("POINT: 1209\n");

    } 
 if(((input == 12) && ((a2083228155 == 8 && ( cf==1  && a710810301 == 10)) && a1012822964 == 33))) {
printf("POINT: 1210\n");
    	cf = 0;
    	a2068151937 = 13;
    	a710810301 = 9;
    	a1410369705 = 5; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm52(int input) {
printf("POINT: 1211\n");

    if((a2083228155 == 2 &&  cf==1 )) {
printf("POINT: 1212\n");
    	calculate_outputm299(input);
    } 
printf("POINT: 1213\n");

    if((a2083228155 == 4 &&  cf==1 )) {
printf("POINT: 1214\n");
    	calculate_outputm301(input);
    } 
printf("POINT: 1215\n");

    if((a2083228155 == 8 &&  cf==1 )) {
printf("POINT: 1216\n");
    	calculate_outputm304(input);
    } 
}
 void calculate_outputm308(int input) {
printf("POINT: 1217\n");

    if((a1012822964 == 35 && (a710810301 == 10 && ((input == 6) && ( cf==1  && a129815901 == 6))))) {
printf("POINT: 1218\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 23);  
printf("POINT: 1219\n");

    } 
 if((((a1012822964 == 35 && (a129815901 == 6 &&  cf==1 )) && a710810301 == 10) && (input == 10))) {
printf("POINT: 1220\n");
    	cf = 0;
    	a1368342524 = 16;
    	a710810301 = 8;
    	a470663134 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm311(int input) {
printf("POINT: 1221\n");

    if((a710810301 == 10 && ((input == 1) && (a1012822964 == 35 && ( cf==1  && a129815901 == 10))))) {
printf("POINT: 1222\n");
    	cf = 0;
    	a948320041 = 32 ;
    	a710810301 = 9;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm312(int input) {
printf("POINT: 1223\n");

    if(((((a129815901 == 11 &&  cf==1 ) && a710810301 == 10) && (input == 11)) && a1012822964 == 35)) {
printf("POINT: 1224\n");
    	cf = 0;
    	a647992626 = 6;
    	a710810301 = 3;
    	a1500959558 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 1225\n");

    } 
 if((a1012822964 == 35 && ((input == 12) && (a710810301 == 10 && (a129815901 == 11 &&  cf==1 ))))) {
printf("POINT: 1226\n");
    	cf = 0;
    	a710810301 = 9;
    	a1404083158 = 36 ;
    	a2068151937 = 9; 
    	 printf("%d\n", 23);  
printf("POINT: 1227\n");

    } 
 if(((((a1012822964 == 35 &&  cf==1 ) && (input == 15)) && a129815901 == 11) && a710810301 == 10)) {
printf("POINT: 1228\n");
    	cf = 0;
    	a710810301 = 8;
    	a1368342524 = 16;
    	a470663134 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm54(int input) {
printf("POINT: 1229\n");

    if(( cf==1  && a129815901 == 6)) {
printf("POINT: 1230\n");
    	calculate_outputm308(input);
    } 
printf("POINT: 1231\n");

    if(( cf==1  && a129815901 == 10)) {
printf("POINT: 1232\n");
    	calculate_outputm311(input);
    } 
printf("POINT: 1233\n");

    if(( cf==1  && a129815901 == 11)) {
printf("POINT: 1234\n");
    	calculate_outputm312(input);
    } 
}
 void calculate_outputm315(int input) {
printf("POINT: 1235\n");

    if((((( cf==1  && a1012822964 == 36) && (input == 1)) && a710810301 == 10) && a1280269169 == 9)) {
printf("POINT: 1236\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1237\n");

    } 
 if(((((a1012822964 == 36 &&  cf==1 ) && (input == 4)) && a1280269169 == 9) && a710810301 == 10)) {
printf("POINT: 1238\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1239\n");

    } 
 if((a1012822964 == 36 && (((input == 9) && ( cf==1  && a710810301 == 10)) && a1280269169 == 9))) {
printf("POINT: 1240\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1241\n");

    } 
 if((a710810301 == 10 && (((input == 15) && (a1012822964 == 36 &&  cf==1 )) && a1280269169 == 9))) {
printf("POINT: 1242\n");
    	cf = 0;
    	a710810301 = 9;
    	a948320041 = 32 ;
    	a2068151937 = 11; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm316(int input) {
printf("POINT: 1243\n");

    if((((a710810301 == 10 && ((input == 12) &&  cf==1 )) && a1012822964 == 36) && a1280269169 == 10)) {
printf("POINT: 1244\n");
    	cf = 0;
    	a460729584 = 33 ;
    	a681527819 = 32 ;
    	a710810301 = 4; 
    	 printf("%d\n", 26);  
printf("POINT: 1245\n");

    } 
 if(((a710810301 == 10 && (( cf==1  && a1280269169 == 10) && (input == 13))) && a1012822964 == 36)) {
printf("POINT: 1246\n");
    	cf = 0;
    	a710810301 = 3;
    	a647992626 = 6;
    	a1500959558 = 5; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm55(int input) {
printf("POINT: 1247\n");

    if(( cf==1  && a1280269169 == 9)) {
printf("POINT: 1248\n");
    	calculate_outputm315(input);
    } 
printf("POINT: 1249\n");

    if(( cf==1  && a1280269169 == 10)) {
printf("POINT: 1250\n");
    	calculate_outputm316(input);
    } 
}

 void calculate_output(int input) {
        cf = 1;

printf("POINT: 1251\n");

    if((a710810301 == 3 &&  cf==1 )) {
printf("POINT: 1252\n");
printf("POINT: 1253\n");

    	if((a647992626 == 2 &&  cf==1 )) {
printf("POINT: 1254\n");
    		calculate_outputm1(input);
    	} 
printf("POINT: 1255\n");

    	if(( cf==1  && a647992626 == 4)) {
printf("POINT: 1256\n");
    		calculate_outputm3(input);
    	} 
printf("POINT: 1257\n");

    	if((a647992626 == 5 &&  cf==1 )) {
printf("POINT: 1258\n");
    		calculate_outputm4(input);
    	} 
printf("POINT: 1259\n");

    	if((a647992626 == 6 &&  cf==1 )) {
printf("POINT: 1260\n");
    		calculate_outputm5(input);
    	} 
printf("POINT: 1261\n");

    	if(( cf==1  && a647992626 == 7)) {
printf("POINT: 1262\n");
    		calculate_outputm6(input);
    	} 
printf("POINT: 1263\n");

    	if((a647992626 == 8 &&  cf==1 )) {
printf("POINT: 1264\n");
    		calculate_outputm7(input);
    	} 
printf("POINT: 1265\n");

    	if(( cf==1  && a647992626 == 9)) {
printf("POINT: 1266\n");
    		calculate_outputm8(input);
    	} 
    } 
printf("POINT: 1267\n");

    if((a710810301 == 4 &&  cf==1 )) {
printf("POINT: 1268\n");
printf("POINT: 1269\n");

    	if(( cf==1  && a460729584 == 32)) {
printf("POINT: 1270\n");
    		calculate_outputm9(input);
    	} 
printf("POINT: 1271\n");

    	if(( cf==1  && a460729584 == 33)) {
printf("POINT: 1272\n");
    		calculate_outputm10(input);
    	} 
printf("POINT: 1273\n");

    	if((a460729584 == 34 &&  cf==1 )) {
printf("POINT: 1274\n");
    		calculate_outputm11(input);
    	} 
printf("POINT: 1275\n");

    	if(( cf==1  && a460729584 == 35)) {
printf("POINT: 1276\n");
    		calculate_outputm12(input);
    	} 
printf("POINT: 1277\n");

    	if(( cf==1  && a460729584 == 36)) {
printf("POINT: 1278\n");
    		calculate_outputm13(input);
    	} 
    } 
printf("POINT: 1279\n");

    if((a710810301 == 5 &&  cf==1 )) {
printf("POINT: 1280\n");
printf("POINT: 1281\n");

    	if((a1926168604 == 32 &&  cf==1 )) {
printf("POINT: 1282\n");
    		calculate_outputm14(input);
    	} 
printf("POINT: 1283\n");

    	if(( cf==1  && a1926168604 == 33)) {
printf("POINT: 1284\n");
    		calculate_outputm15(input);
    	} 
printf("POINT: 1285\n");

    	if(( cf==1  && a1926168604 == 34)) {
printf("POINT: 1286\n");
    		calculate_outputm16(input);
    	} 
printf("POINT: 1287\n");

    	if(( cf==1  && a1926168604 == 35)) {
printf("POINT: 1288\n");
    		calculate_outputm17(input);
    	} 
printf("POINT: 1289\n");

    	if((a1926168604 == 36 &&  cf==1 )) {
printf("POINT: 1290\n");
    		calculate_outputm18(input);
    	} 
    } 
printf("POINT: 1291\n");

    if((a710810301 == 6 &&  cf==1 )) {
printf("POINT: 1292\n");
printf("POINT: 1293\n");

    	if((a1213256257 == 9 &&  cf==1 )) {
printf("POINT: 1294\n");
    		calculate_outputm19(input);
    	} 
printf("POINT: 1295\n");

    	if(( cf==1  && a1213256257 == 10)) {
printf("POINT: 1296\n");
    		calculate_outputm20(input);
    	} 
printf("POINT: 1297\n");

    	if((a1213256257 == 11 &&  cf==1 )) {
printf("POINT: 1298\n");
    		calculate_outputm21(input);
    	} 
printf("POINT: 1299\n");

    	if((a1213256257 == 12 &&  cf==1 )) {
printf("POINT: 1300\n");
    		calculate_outputm22(input);
    	} 
printf("POINT: 1301\n");

    	if(( cf==1  && a1213256257 == 13)) {
printf("POINT: 1302\n");
    		calculate_outputm23(input);
    	} 
printf("POINT: 1303\n");

    	if((a1213256257 == 14 &&  cf==1 )) {
printf("POINT: 1304\n");
    		calculate_outputm24(input);
    	} 
printf("POINT: 1305\n");

    	if(( cf==1  && a1213256257 == 15)) {
printf("POINT: 1306\n");
    		calculate_outputm25(input);
    	} 
printf("POINT: 1307\n");

    	if(( cf==1  && a1213256257 == 16)) {
printf("POINT: 1308\n");
    		calculate_outputm26(input);
    	} 
    } 
printf("POINT: 1309\n");

    if(( cf==1  && a710810301 == 7)) {
printf("POINT: 1310\n");
printf("POINT: 1311\n");

    	if(( cf==1  && a608032282 == 1)) {
printf("POINT: 1312\n");
    		calculate_outputm27(input);
    	} 
printf("POINT: 1313\n");

    	if(( cf==1  && a608032282 == 2)) {
printf("POINT: 1314\n");
    		calculate_outputm28(input);
    	} 
printf("POINT: 1315\n");

    	if(( cf==1  && a608032282 == 3)) {
printf("POINT: 1316\n");
    		calculate_outputm29(input);
    	} 
printf("POINT: 1317\n");

    	if((a608032282 == 4 &&  cf==1 )) {
printf("POINT: 1318\n");
    		calculate_outputm30(input);
    	} 
printf("POINT: 1319\n");

    	if(( cf==1  && a608032282 == 5)) {
printf("POINT: 1320\n");
    		calculate_outputm31(input);
    	} 
printf("POINT: 1321\n");

    	if((a608032282 == 6 &&  cf==1 )) {
printf("POINT: 1322\n");
    		calculate_outputm32(input);
    	} 
printf("POINT: 1323\n");

    	if((a608032282 == 7 &&  cf==1 )) {
printf("POINT: 1324\n");
    		calculate_outputm33(input);
    	} 
printf("POINT: 1325\n");

    	if((a608032282 == 8 &&  cf==1 )) {
printf("POINT: 1326\n");
    		calculate_outputm34(input);
    	} 
    } 
printf("POINT: 1327\n");

    if(( cf==1  && a710810301 == 8)) {
printf("POINT: 1328\n");
printf("POINT: 1329\n");

    	if(( cf==1  && a1368342524 == 10)) {
printf("POINT: 1330\n");
    		calculate_outputm35(input);
    	} 
printf("POINT: 1331\n");

    	if(( cf==1  && a1368342524 == 11)) {
printf("POINT: 1332\n");
    		calculate_outputm36(input);
    	} 
printf("POINT: 1333\n");

    	if(( cf==1  && a1368342524 == 12)) {
printf("POINT: 1334\n");
    		calculate_outputm37(input);
    	} 
printf("POINT: 1335\n");

    	if(( cf==1  && a1368342524 == 13)) {
printf("POINT: 1336\n");
    		calculate_outputm38(input);
    	} 
printf("POINT: 1337\n");

    	if(( cf==1  && a1368342524 == 14)) {
printf("POINT: 1338\n");
    		calculate_outputm39(input);
    	} 
printf("POINT: 1339\n");

    	if((a1368342524 == 15 &&  cf==1 )) {
printf("POINT: 1340\n");
    		calculate_outputm40(input);
    	} 
printf("POINT: 1341\n");

    	if((a1368342524 == 16 &&  cf==1 )) {
printf("POINT: 1342\n");
    		calculate_outputm41(input);
    	} 
printf("POINT: 1343\n");

    	if((a1368342524 == 17 &&  cf==1 )) {
printf("POINT: 1344\n");
    		calculate_outputm42(input);
    	} 
    } 
printf("POINT: 1345\n");

    if((a710810301 == 9 &&  cf==1 )) {
printf("POINT: 1346\n");
printf("POINT: 1347\n");

    	if((a2068151937 == 8 &&  cf==1 )) {
printf("POINT: 1348\n");
    		calculate_outputm43(input);
    	} 
printf("POINT: 1349\n");

    	if((a2068151937 == 9 &&  cf==1 )) {
printf("POINT: 1350\n");
    		calculate_outputm44(input);
    	} 
printf("POINT: 1351\n");

    	if((a2068151937 == 11 &&  cf==1 )) {
printf("POINT: 1352\n");
    		calculate_outputm46(input);
    	} 
printf("POINT: 1353\n");

    	if(( cf==1  && a2068151937 == 12)) {
printf("POINT: 1354\n");
    		calculate_outputm47(input);
    	} 
printf("POINT: 1355\n");

    	if(( cf==1  && a2068151937 == 13)) {
printf("POINT: 1356\n");
    		calculate_outputm48(input);
    	} 
printf("POINT: 1357\n");

    	if(( cf==1  && a2068151937 == 14)) {
printf("POINT: 1358\n");
    		calculate_outputm49(input);
    	} 
printf("POINT: 1359\n");

    	if(( cf==1  && a2068151937 == 15)) {
printf("POINT: 1360\n");
    		calculate_outputm50(input);
    	} 
    } 
printf("POINT: 1361\n");

    if((a710810301 == 10 &&  cf==1 )) {
printf("POINT: 1362\n");
printf("POINT: 1363\n");

    	if((a1012822964 == 32 &&  cf==1 )) {
printf("POINT: 1364\n");
    		calculate_outputm51(input);
    	} 
printf("POINT: 1365\n");

    	if((a1012822964 == 33 &&  cf==1 )) {
printf("POINT: 1366\n");
    		calculate_outputm52(input);
    	} 
printf("POINT: 1367\n");

    	if(( cf==1  && a1012822964 == 35)) {
printf("POINT: 1368\n");
    		calculate_outputm54(input);
    	} 
printf("POINT: 1369\n");

    	if(( cf==1  && a1012822964 == 36)) {
printf("POINT: 1370\n");
    		calculate_outputm55(input);
    	} 
    } 
    errorCheck();

printf("POINT: 1371\n");

    if( cf==1 ) 
printf("POINT: 1372\n");
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}

int main()
{
    // main i/o-loop
printf("POINT: 1373\n");

    for (int FLAG=0;FLAG<BOUND;FLAG++){
printf("POINT: 1374\n");
    
        // read input
       int input = nondet_int(); __CPROVER_input("input",input);
      __CPROVER_input("a647992626",a647992626);
      __CPROVER_input("a2068151937",a2068151937);
      __CPROVER_input("a1163913646",a1163913646);
      __CPROVER_input("a175435081",a175435081);
      __CPROVER_input("a573660885",a573660885);
      __CPROVER_input("a400180708",a400180708);
      __CPROVER_input("a1708500674",a1708500674);
      __CPROVER_input("a1520738029",a1520738029);
      __CPROVER_input("a322699279",a322699279);
      __CPROVER_input("a650139459",a650139459);         
        // operate eca engine
printf("POINT: 1375\n");
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a647992626,a2068151937,a1163913646,a175435081,a573660885,a400180708,a1708500674,a1520738029,a322699279,a650139459);
        if((input != 11) && (input != 7) && (input != 5) && (input != 8) && (input != 1) && (input != 14) && (input != 15) && (input != 2) && (input != 9) && (input != 3) && (input != 4) && (input != 10) && (input != 13) && (input != 12) && (input != 6))
printf("POINT: 1376\n");
        calculate_output(input);
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a647992626,a2068151937,a1163913646,a175435081,a573660885,a400180708,a1708500674,a1520738029,a322699279,a650139459);
    return 0;
}
