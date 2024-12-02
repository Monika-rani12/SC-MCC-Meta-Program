#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>

    #define BOUND 1

	// inputs
	int inputs[] = {7,2,10,15,5,4,6,11,9,1,12,8,3,14,13};

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
	void calculate_outputm319(int);
	void calculate_outputm320(int);
	void calculate_outputm321(int);
	void calculate_outputm322(int);

	 int a10419264,a179752516,a1736640332,a1053530639,a127383885,a286009693,a1837110425,a565249046,a864013224,a2015844410;
	 
	 int a2121950185  = 34;
	 int a583612627 = 11;
	 int a782039646 = 7;
	 int a1746137894 = 11;
	 int a2135239265  = 32;
	 int a1237428760 = 4;
	 int a940472710 = 9;
	 int a880660927 = 15;
	 int a1498174835  = 32;
	 int cf = 1;
	 int a1132599179  = 36;
	 int a384913899  = 33;
	 int a1438665870 = 6;
	 int a324926224 = 8;
	 int a1510817746 = 9;
	 int a147402251  = 33;
	 int a1478065937  = 35;
	 int a113972147  = 35;
	 int a962095080 = 7;
	 int a932751092 = 5;
	 int a1750379405  = 33;
	 int a620299262  = 32;
	 int a950417444 = 13;
	 int a1959734605 = 7;
	 int a200918022 = 6;
	 int a757401042 = 4;
	 int a1760493561 = 14;
	 int a1074841212 = 7;
	 int a1255937088 = 12;
	 int a1149219151  = 33;
	 int a1273086420  = 36;
	 int a866603139 = 7;
	 int a2045918669 = 7;
	 int a365147679 = 8;
	 int a1383458586 = 8;
	 int a1664587146  = 33;
	 int a307029135  = 35;
	 int a1249410904 = 6;
	 int a598251408  = 33;
	 int a1602107789  = 33;
	 int a1210809645 = 13;
	 int a880642005  = 34;
	 int a338143956  = 32;
	 int a1259748523  = 33;
	 int a1031697847 = 12;
	 int a1851906186  = 33;
	 int a1335229626 = 12;
	 int a389949481  = 36;
	 int a654409942 = 11;
	 int a1250255157 = 11;
	 int a269427955 = 8;


	void errorCheck() {
printf("POINT: 1\n");

	    if(((a1250255157 == 14 && a1959734605 == 9) && a1335229626 == 6)){
printf("POINT: 2\n");
	    cf = 0;
	    
	    }
printf("POINT: 3\n");

	    if(((a864013224 == 17 && a1273086420 == 36) && a1335229626 == 8)){
printf("POINT: 4\n");
	    cf = 0;
	    
	    }
printf("POINT: 5\n");

	    if(((a583612627 == 9 && a384913899 == 35) && a1335229626 == 5)){
printf("POINT: 6\n");
	    cf = 0;
	    
	    }
printf("POINT: 7\n");

	    if(((a1498174835 == 33 && a1510817746 == 12) && a1335229626 == 7)){
printf("POINT: 8\n");
	    cf = 0;
	    
	    }
printf("POINT: 9\n");

	    if(((a654409942 == 11 && a1510817746 == 11) && a1335229626 == 7)){
printf("POINT: 10\n");
	    cf = 0;
	    
	    }
printf("POINT: 11\n");

	    if(((a1210809645 == 10 && a1959734605 == 3) && a1335229626 == 6)){
printf("POINT: 12\n");
	    cf = 0;
	    
	    }
printf("POINT: 13\n");

	    if(((a1132599179 == 33 && a1959734605 == 4) && a1335229626 == 6)){
printf("POINT: 14\n");
	    cf = 0;
	    
	    }
printf("POINT: 15\n");

	    if(((a757401042 == 4 && a269427955 == 9) && a1335229626 == 11)){
printf("POINT: 16\n");
	    cf = 0;
	    
	    }
printf("POINT: 17\n");

	    if(((a179752516 == 10 && a1959734605 == 7) && a1335229626 == 6)){
printf("POINT: 18\n");
	    cf = 0;
	    
	    }
printf("POINT: 19\n");

	    if(((a598251408 == 34 && a1851906186 == 34) && a1335229626 == 9)){
printf("POINT: 20\n");
	    cf = 0;
	    
	    }
printf("POINT: 21\n");

	    if(((a1837110425 == 3 && a880660927 == 11) && a1335229626 == 10)){
printf("POINT: 22\n");
	    cf = 0;
	    
	    }
printf("POINT: 23\n");

	    if(((a962095080 == 8 && a950417444 == 13) && a1335229626 == 12)){
printf("POINT: 24\n");
	    cf = 0;
	    
	    }
printf("POINT: 25\n");

	    if(((a1760493561 == 14 && a950417444 == 10) && a1335229626 == 12)){
printf("POINT: 26\n");
	    cf = 0;
	    
	    }
printf("POINT: 27\n");

	    if(((a200918022 == 7 && a880660927 == 10) && a1335229626 == 10)){
printf("POINT: 28\n");
	    cf = 0;
	    
	    }
printf("POINT: 29\n");

	    if(((a365147679 == 14 && a1851906186 == 32) && a1335229626 == 9)){
printf("POINT: 30\n");
	    cf = 0;
	    
	    }
printf("POINT: 31\n");

	    if(((a1031697847 == 8 && a384913899 == 32) && a1335229626 == 5)){
printf("POINT: 32\n");
	    cf = 0;
	    
	    }
printf("POINT: 33\n");

	    if(((a338143956 == 34 && a269427955 == 12) && a1335229626 == 11)){
printf("POINT: 34\n");
	    cf = 0;
	    
	    }
printf("POINT: 35\n");

	    if(((a1383458586 == 2 && a1851906186 == 33) && a1335229626 == 9)){
printf("POINT: 36\n");
	    cf = 0;
	    
	    }
printf("POINT: 37\n");

	    if(((a1478065937 == 35 && a950417444 == 7) && a1335229626 == 12)){
printf("POINT: 38\n");
	    cf = 0;
	    
	    }
printf("POINT: 39\n");

	    if(((a1478065937 == 34 && a950417444 == 7) && a1335229626 == 12)){
printf("POINT: 40\n");
	    cf = 0;
	    
	    }
printf("POINT: 41\n");

	    if(((a2015844410 == 8 && a1851906186 == 36) && a1335229626 == 9)){
printf("POINT: 42\n");
	    cf = 0;
	    
	    }
printf("POINT: 43\n");

	    if(((a1746137894 == 13 && a269427955 == 8) && a1335229626 == 11)){
printf("POINT: 44\n");
	    cf = 0;
	    
	    }
printf("POINT: 45\n");

	    if(((a127383885 == 12 && a269427955 == 7) && a1335229626 == 11)){
printf("POINT: 46\n");
	    cf = 0;
	    
	    }
printf("POINT: 47\n");

	    if(((a2015844410 == 10 && a1851906186 == 36) && a1335229626 == 9)){
printf("POINT: 48\n");
	    cf = 0;
	    
	    }
printf("POINT: 49\n");

	    if(((a307029135 == 34 && a384913899 == 33) && a1335229626 == 5)){
printf("POINT: 50\n");
	    cf = 0;
	    
	    }
printf("POINT: 51\n");

	    if(((a2135239265 == 33 && a950417444 == 11) && a1335229626 == 12)){
printf("POINT: 52\n");
	    cf = 0;
	    
	    }
printf("POINT: 53\n");

	    if(((a1053530639 == 9 && a269427955 == 13) && a1335229626 == 11)){
printf("POINT: 54\n");
	    cf = 0;
	    
	    }
printf("POINT: 55\n");

	    if(((a1837110425 == 8 && a880660927 == 11) && a1335229626 == 10)){
printf("POINT: 56\n");
	    cf = 0;
	    
	    }
printf("POINT: 57\n");

	    if(((a940472710 == 10 && a1510817746 == 7) && a1335229626 == 7)){
printf("POINT: 58\n");
	    cf = 0;
	    
	    }
printf("POINT: 59\n");

	    if(((a1438665870 == 10 && a950417444 == 6) && a1335229626 == 12)){
printf("POINT: 60\n");
	    cf = 0;
	    
	    }
printf("POINT: 61\n");

	    if(((a1210809645 == 9 && a1959734605 == 6) && a1335229626 == 6)){
printf("POINT: 62\n");
	    cf = 0;
	    
	    }
printf("POINT: 63\n");

	    if(((a1053530639 == 6 && a269427955 == 13) && a1335229626 == 11)){
printf("POINT: 64\n");
	    cf = 0;
	    
	    }
printf("POINT: 65\n");

	    if(((a1760493561 == 13 && a950417444 == 10) && a1335229626 == 12)){
printf("POINT: 66\n");
	    cf = 0;
	    
	    }
printf("POINT: 67\n");

	    if(((a1664587146 == 34 && a880660927 == 14) && a1335229626 == 10)){
printf("POINT: 68\n");
	    cf = 0;
	    
	    }
printf("POINT: 69\n");

	    if(((a866603139 == 7 && a1510817746 == 10) && a1335229626 == 7)){
printf("POINT: 70\n");
	    cf = 0;
	    
	    }
printf("POINT: 71\n");

	    if(((a1255937088 == 6 && a950417444 == 12) && a1335229626 == 12)){
printf("POINT: 72\n");
	    cf = 0;
	    
	    }
printf("POINT: 73\n");

	    if(((a2121950185 == 34 && a880660927 == 9) && a1335229626 == 10)){
printf("POINT: 74\n");
	    cf = 0;
	    
	    }
printf("POINT: 75\n");

	    if(((a1383458586 == 3 && a1851906186 == 33) && a1335229626 == 9)){
printf("POINT: 76\n");
	    cf = 0;
	    
	    }
printf("POINT: 77\n");

	    if(((a324926224 == 1 && a1959734605 == 2) && a1335229626 == 6)){
printf("POINT: 78\n");
	    cf = 0;
	    
	    }
printf("POINT: 79\n");

	    if(((a1249410904 == 4 && a880660927 == 13) && a1335229626 == 10)){
printf("POINT: 80\n");
	    cf = 0;
	    
	    }
printf("POINT: 81\n");

	    if(((a1959734605 == 6 && a269427955 == 11) && a1335229626 == 11)){
printf("POINT: 82\n");
	    cf = 0;
	    
	    }
printf("POINT: 83\n");

	    if(((a1031697847 == 7 && a384913899 == 32) && a1335229626 == 5)){
printf("POINT: 84\n");
	    cf = 0;
	    
	    }
printf("POINT: 85\n");

	    if(((a1383458586 == 8 && a1273086420 == 35) && a1335229626 == 8)){
printf("POINT: 86\n");
	    cf = 0;
	    
	    }
printf("POINT: 87\n");

	    if(((a127383885 == 6 && a269427955 == 7) && a1335229626 == 11)){
printf("POINT: 88\n");
	    cf = 0;
	    
	    }
printf("POINT: 89\n");

	    if(((a324926224 == 4 && a1959734605 == 2) && a1335229626 == 6)){
printf("POINT: 90\n");
	    cf = 0;
	    
	    }
printf("POINT: 91\n");

	    if(((a782039646 == 10 && a1510817746 == 8) && a1335229626 == 7)){
printf("POINT: 92\n");
	    cf = 0;
	    
	    }
printf("POINT: 93\n");

	    if(((a2015844410 == 7 && a1851906186 == 36) && a1335229626 == 9)){
printf("POINT: 94\n");
	    cf = 0;
	    
	    }
printf("POINT: 95\n");

	    if(((a324926224 == 8 && a1959734605 == 2) && a1335229626 == 6)){
printf("POINT: 96\n");
	    cf = 0;
	    
	    }
printf("POINT: 97\n");

	    if(((a1210809645 == 11 && a1959734605 == 3) && a1335229626 == 6)){
printf("POINT: 98\n");
	    cf = 0;
	    
	    }
printf("POINT: 99\n");

	    if(((a200918022 == 12 && a880660927 == 10) && a1335229626 == 10)){
printf("POINT: 100\n");
	    cf = 0;
	    
	    }
printf("POINT: 101\n");

	    if(((a10419264 == 33 && a384913899 == 34) && a1335229626 == 5)){
printf("POINT: 102\n");
	    cf = 0;
	    
	    }
printf("POINT: 103\n");

	    if(((a1250255157 == 10 && a1959734605 == 9) && a1335229626 == 6)){
printf("POINT: 104\n");
	    cf = 0;
	    
	    }
printf("POINT: 105\n");

	    if(((a565249046 == 10 && a950417444 == 9) && a1335229626 == 12)){
printf("POINT: 106\n");
	    cf = 0;
	    
	    }
printf("POINT: 107\n");

	    if(((a2135239265 == 35 && a950417444 == 11) && a1335229626 == 12)){
printf("POINT: 108\n");
	    cf = 0;
	    
	    }
printf("POINT: 109\n");

	    if(((a324926224 == 7 && a1959734605 == 2) && a1335229626 == 6)){
printf("POINT: 110\n");
	    cf = 0;
	    
	    }
printf("POINT: 111\n");

	    if(((a2045918669 == 9 && a880660927 == 12) && a1335229626 == 10)){
printf("POINT: 112\n");
	    cf = 0;
	    
	    }
printf("POINT: 113\n");

	    if(((a583612627 == 16 && a384913899 == 35) && a1335229626 == 5)){
printf("POINT: 114\n");
	    cf = 0;
	    
	    }
printf("POINT: 115\n");

	    if(((a1074841212 == 10 && a1273086420 == 32) && a1335229626 == 8)){
printf("POINT: 116\n");
	    cf = 0;
	    
	    }
printf("POINT: 117\n");

	    if(((a932751092 == 7 && a1510817746 == 13) && a1335229626 == 7)){
printf("POINT: 118\n");
	    cf = 0;
	    
	    }
printf("POINT: 119\n");

	    if(((a620299262 == 33 && a384913899 == 36) && a1335229626 == 5)){
printf("POINT: 120\n");
	    cf = 0;
	    
	    }
printf("POINT: 121\n");

	    if(((a286009693 == 14 && a1959734605 == 8) && a1335229626 == 6)){
printf("POINT: 122\n");
	    cf = 0;
	    
	    }
printf("POINT: 123\n");

	    if(((a307029135 == 35 && a384913899 == 33) && a1335229626 == 5)){
printf("POINT: 124\n");
	    cf = 0;
	    
	    }
printf("POINT: 125\n");

	    if(((a2135239265 == 36 && a950417444 == 11) && a1335229626 == 12)){
printf("POINT: 126\n");
	    cf = 0;
	    
	    }
printf("POINT: 127\n");

	    if(((a286009693 == 12 && a1959734605 == 8) && a1335229626 == 6)){
printf("POINT: 128\n");
	    cf = 0;
	    
	    }
printf("POINT: 129\n");

	    if(((a286009693 == 8 && a1959734605 == 8) && a1335229626 == 6)){
printf("POINT: 130\n");
	    cf = 0;
	    
	    }
printf("POINT: 131\n");

	    if(((a200918022 == 9 && a880660927 == 10) && a1335229626 == 10)){
printf("POINT: 132\n");
	    cf = 0;
	    
	    }
printf("POINT: 133\n");

	    if(((a654409942 == 12 && a1510817746 == 11) && a1335229626 == 7)){
printf("POINT: 134\n");
	    cf = 0;
	    
	    }
printf("POINT: 135\n");

	    if(((a1132599179 == 36 && a1959734605 == 4) && a1335229626 == 6)){
printf("POINT: 136\n");
	    cf = 0;
	    
	    }
printf("POINT: 137\n");

	    if(((a2121950185 == 32 && a880660927 == 9) && a1335229626 == 10)){
printf("POINT: 138\n");
	    cf = 0;
	    
	    }
printf("POINT: 139\n");

	    if(((a307029135 == 36 && a384913899 == 33) && a1335229626 == 5)){
printf("POINT: 140\n");
	    cf = 0;
	    
	    }
printf("POINT: 141\n");

	    if(((a864013224 == 16 && a1273086420 == 36) && a1335229626 == 8)){
printf("POINT: 142\n");
	    cf = 0;
	    
	    }
printf("POINT: 143\n");

	    if(((a1210809645 == 7 && a1959734605 == 3) && a1335229626 == 6)){
printf("POINT: 144\n");
	    cf = 0;
	    
	    }
printf("POINT: 145\n");

	    if(((a782039646 == 12 && a1510817746 == 8) && a1335229626 == 7)){
printf("POINT: 146\n");
	    cf = 0;
	    
	    }
printf("POINT: 147\n");

	    if(((a1746137894 == 15 && a269427955 == 8) && a1335229626 == 11)){
printf("POINT: 148\n");
	    cf = 0;
	    
	    }
printf("POINT: 149\n");

	    if(((a365147679 == 8 && a1851906186 == 32) && a1335229626 == 9)){
printf("POINT: 150\n");
	    cf = 0;
	    
	    }
printf("POINT: 151\n");

	    if(((a757401042 == 5 && a269427955 == 9) && a1335229626 == 11)){
printf("POINT: 152\n");
	    cf = 0;
	    
	    }
printf("POINT: 153\n");

	    if(((a1210809645 == 9 && a1959734605 == 3) && a1335229626 == 6)){
printf("POINT: 154\n");
	    cf = 0;
	    
	    }
printf("POINT: 155\n");

	    if(((a338143956 == 33 && a269427955 == 12) && a1335229626 == 11)){
printf("POINT: 156\n");
	    cf = 0;
	    
	    }
printf("POINT: 157\n");

	    if(((a1249410904 == 10 && a880660927 == 13) && a1335229626 == 10)){
printf("POINT: 158\n");
	    cf = 0;
	    
	    }
printf("POINT: 159\n");

	    if(((a127383885 == 5 && a269427955 == 7) && a1335229626 == 11)){
printf("POINT: 160\n");
	    cf = 0;
	    
	    }
printf("POINT: 161\n");

	    if(((a1498174835 == 36 && a1510817746 == 12) && a1335229626 == 7)){
printf("POINT: 162\n");
	    cf = 0;
	    
	    }
printf("POINT: 163\n");

	    if(((a620299262 == 35 && a384913899 == 36) && a1335229626 == 5)){
printf("POINT: 164\n");
	    cf = 0;
	    
	    }
printf("POINT: 165\n");

	    if(((a1736640332 == 6 && a880660927 == 15) && a1335229626 == 10)){
printf("POINT: 166\n");
	    cf = 0;
	    
	    }
printf("POINT: 167\n");

	    if(((a864013224 == 10 && a1273086420 == 36) && a1335229626 == 8)){
printf("POINT: 168\n");
	    cf = 0;
	    
	    }
printf("POINT: 169\n");

	    if(((a365147679 == 10 && a1851906186 == 32) && a1335229626 == 9)){
printf("POINT: 170\n");
	    cf = 0;
	    
	    }
printf("POINT: 171\n");

	    if(((a286009693 == 10 && a1959734605 == 8) && a1335229626 == 6)){
printf("POINT: 172\n");
	    cf = 0;
	    
	    }
printf("POINT: 173\n");

	    if(((a1259748523 == 34 && a1273086420 == 34) && a1335229626 == 8)){
printf("POINT: 174\n");
	    cf = 0;
	    
	    }
printf("POINT: 175\n");

	    if(((a598251408 == 35 && a1851906186 == 34) && a1335229626 == 9)){
printf("POINT: 176\n");
	    cf = 0;
	    
	    }
printf("POINT: 177\n");

	    if(((a307029135 == 32 && a384913899 == 33) && a1335229626 == 5)){
printf("POINT: 178\n");
	    cf = 0;
	    
	    }
printf("POINT: 179\n");

	    if(((a1237428760 == 8 && a1510817746 == 9) && a1335229626 == 7)){
printf("POINT: 180\n");
	    cf = 0;
	    
	    }
printf("POINT: 181\n");

	    if(((a1249410904 == 6 && a880660927 == 13) && a1335229626 == 10)){
printf("POINT: 182\n");
	    cf = 0;
	    
	    }
printf("POINT: 183\n");

	    if(((a654409942 == 15 && a1510817746 == 11) && a1335229626 == 7)){
printf("POINT: 184\n");
	    cf = 0;
	    
	    }
printf("POINT: 185\n");

	    if(((a880642005 == 34 && a1273086420 == 33) && a1335229626 == 8)){
printf("POINT: 186\n");
	    cf = 0;
	    
	    }
printf("POINT: 187\n");

	    if(((a940472710 == 9 && a1510817746 == 7) && a1335229626 == 7)){
printf("POINT: 188\n");
	    cf = 0;
	    
	    }
printf("POINT: 189\n");

	    if(((a940472710 == 12 && a1510817746 == 7) && a1335229626 == 7)){
printf("POINT: 190\n");
	    cf = 0;
	    
	    }
printf("POINT: 191\n");

	    if(((a1132599179 == 35 && a1959734605 == 4) && a1335229626 == 6)){
printf("POINT: 192\n");
	    cf = 0;
	    
	    }
printf("POINT: 193\n");

	    if(((a1259748523 == 36 && a1273086420 == 34) && a1335229626 == 8)){
printf("POINT: 194\n");
	    cf = 0;
	    
	    }
printf("POINT: 195\n");

	    if(((a932751092 == 1 && a1510817746 == 13) && a1335229626 == 7)){
printf("POINT: 196\n");
	    cf = 0;
	    
	    }
printf("POINT: 197\n");

	    if(((a1031697847 == 6 && a384913899 == 32) && a1335229626 == 5)){
printf("POINT: 198\n");
	    cf = 0;
	    
	    }
printf("POINT: 199\n");

	    if(((a179752516 == 9 && a1959734605 == 7) && a1335229626 == 6)){
printf("POINT: 200\n");
	    cf = 0;
	    
	    }
	}
 void calculate_outputm59(int input) {
printf("POINT: 201\n");

    if((((input == 12) && (a384913899 == 32 && ( cf==1  && a1335229626 == 5))) && a1031697847 == 10)) {
printf("POINT: 202\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 15; 
    	 printf("%d\n", 16);  
printf("POINT: 203\n");

    } 
 if((((a384913899 == 32 && ( cf==1  && a1335229626 == 5)) && a1031697847 == 10) && (input == 15))) {
printf("POINT: 204\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm60(int input) {
printf("POINT: 205\n");

    if((a1031697847 == 12 && (((a1335229626 == 5 &&  cf==1 ) && a384913899 == 32) && (input == 3)))) {
printf("POINT: 206\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 12;
    	a2045918669 = 4; 
    	 printf("%d\n", 21);  
printf("POINT: 207\n");

    } 
 if((a384913899 == 32 && ((( cf==1  && (input == 10)) && a1031697847 == 12) && a1335229626 == 5))) {
printf("POINT: 208\n");
    	cf = 0;
    	a1959734605 = 2;
    	a1335229626 = 6;
    	a324926224 = 6; 
    	 printf("%d\n", 22);  
printf("POINT: 209\n");

    } 
 if((((a1335229626 == 5 && ((input == 13) &&  cf==1 )) && a384913899 == 32) && a1031697847 == 12)) {
printf("POINT: 210\n");
    	cf = 0;
    	a950417444 = 10;
    	a1335229626 = 12;
    	a1760493561 = 9; 
    	 printf("%d\n", 20);  
printf("POINT: 211\n");

    } 
 if((a384913899 == 32 && (a1335229626 == 5 && (a1031697847 == 12 && ( cf==1  && (input == 15)))))) {
printf("POINT: 212\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 12; 
    	 printf("%d\n", 22);  
printf("POINT: 213\n");

    } 
 if((a1335229626 == 5 && (a384913899 == 32 && ((input == 8) && ( cf==1  && a1031697847 == 12))))) {
printf("POINT: 214\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1132599179 = 35 ;
    	a1959734605 = 4; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm1(int input) {
printf("POINT: 215\n");

    if((a1031697847 == 10 &&  cf==1 )) {
printf("POINT: 216\n");
    	calculate_outputm59(input);
    } 
printf("POINT: 217\n");

    if(( cf==1  && a1031697847 == 12)) {
printf("POINT: 218\n");
    	calculate_outputm60(input);
    } 
}
 void calculate_outputm62(int input) {
printf("POINT: 219\n");

    if((a1335229626 == 5 && (a384913899 == 33 && ((input == 1) && ( cf==1  && a307029135 == 33))))) {
printf("POINT: 220\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 35 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 20);  
printf("POINT: 221\n");

    } 
 if((((a384913899 == 33 && ( cf==1  && a1335229626 == 5)) && a307029135 == 33) && (input == 7))) {
printf("POINT: 222\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 223\n");

    } 
 if(((a384913899 == 33 && (a1335229626 == 5 && ((input == 12) &&  cf==1 ))) && a307029135 == 33)) {
printf("POINT: 224\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 11; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm2(int input) {
printf("POINT: 225\n");

    if((a307029135 == 33 &&  cf==1 )) {
printf("POINT: 226\n");
    	calculate_outputm62(input);
    } 
}
 void calculate_outputm66(int input) {
printf("POINT: 227\n");

    if((((( cf==1  && a10419264 == 32) && a1335229626 == 5) && a384913899 == 34) && (input == 2))) {
printf("POINT: 228\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 9;
    	a565249046 = 6; 
    	 printf("%d\n", 21);  
printf("POINT: 229\n");

    } 
 if((a1335229626 == 5 && ((input == 13) && ((a384913899 == 34 &&  cf==1 ) && a10419264 == 32)))) {
printf("POINT: 230\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 33 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 19);  
printf("POINT: 231\n");

    } 
 if(((a384913899 == 34 && ((a1335229626 == 5 &&  cf==1 ) && (input == 15))) && a10419264 == 32)) {
printf("POINT: 232\n");
    	cf = 0;
    	a113972147 = 33 ;
    	a1335229626 = 11;
    	a269427955 = 10; 
    	 printf("%d\n", 17);  
printf("POINT: 233\n");

    } 
 if((((input == 4) && (a1335229626 == 5 && (a384913899 == 34 &&  cf==1 ))) && a10419264 == 32)) {
printf("POINT: 234\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 7;
    	a127383885 = 5; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm3(int input) {
printf("POINT: 235\n");

    if(( cf==1  && a10419264 == 32)) {
printf("POINT: 236\n");
    	calculate_outputm66(input);
    } 
}
 void calculate_outputm69(int input) {
printf("POINT: 237\n");

    if(((input == 7) && ((a1335229626 == 5 && ( cf==1  && a384913899 == 35)) && a583612627 == 11))) {
printf("POINT: 238\n");
    	cf = 0;
    	a1335229626 = 11;
    	a1750379405 = 35 ;
    	a269427955 = 14; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm70(int input) {
printf("POINT: 239\n");

    if(((a384913899 == 35 && ((input == 1) && (a583612627 == 12 &&  cf==1 ))) && a1335229626 == 5)) {
printf("POINT: 240\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 241\n");

    } 
 if((a384913899 == 35 && (((a1335229626 == 5 &&  cf==1 ) && (input == 6)) && a583612627 == 12))) {
printf("POINT: 242\n");
    	cf = 0;
    	 
    	 printf("%d\n", 24);  
printf("POINT: 243\n");

    } 
 if(((input == 7) && ((a583612627 == 12 && (a1335229626 == 5 &&  cf==1 )) && a384913899 == 35))) {
printf("POINT: 244\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm71(int input) {
printf("POINT: 245\n");

    if(((input == 2) && ((a384913899 == 35 && ( cf==1  && a1335229626 == 5)) && a583612627 == 13))) {
printf("POINT: 246\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 8;
    	a1746137894 = 17; 
    	 printf("%d\n", 20);  
printf("POINT: 247\n");

    } 
 if(((input == 3) && (a583612627 == 13 && (( cf==1  && a1335229626 == 5) && a384913899 == 35)))) {
printf("POINT: 248\n");
    	cf = 0;
    	a1602107789 = 36 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 249\n");

    } 
 if((((input == 6) && (a1335229626 == 5 && (a583612627 == 13 &&  cf==1 ))) && a384913899 == 35)) {
printf("POINT: 250\n");
    	cf = 0;
    	a1335229626 = 10;
    	a2121950185 = 35 ;
    	a880660927 = 9; 
    	 printf("%d\n", 24);  
printf("POINT: 251\n");

    } 
 if((a1335229626 == 5 && ((( cf==1  && a384913899 == 35) && (input == 10)) && a583612627 == 13))) {
printf("POINT: 252\n");
    	cf = 0;
    	a950417444 = 13;
    	a1335229626 = 12;
    	a962095080 = 3; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm72(int input) {
printf("POINT: 253\n");

    if((a583612627 == 14 && (((input == 3) && (a384913899 == 35 &&  cf==1 )) && a1335229626 == 5))) {
printf("POINT: 254\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 255\n");

    } 
 if(((((a384913899 == 35 &&  cf==1 ) && a1335229626 == 5) && (input == 15)) && a583612627 == 14)) {
printf("POINT: 256\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 32 ;
    	a1074841212 = 11; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm73(int input) {
printf("POINT: 257\n");

    if(((a384913899 == 35 && ((input == 1) && (a583612627 == 15 &&  cf==1 ))) && a1335229626 == 5)) {
printf("POINT: 258\n");
    	cf = 0;
    	a1851906186 = 32 ;
    	a1335229626 = 9;
    	a365147679 = 11; 
    	 printf("%d\n", 19);  
printf("POINT: 259\n");

    } 
 if((((( cf==1  && a1335229626 == 5) && (input == 6)) && a384913899 == 35) && a583612627 == 15)) {
printf("POINT: 260\n");
    	cf = 0;
    	a1602107789 = 32 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 24);  
printf("POINT: 261\n");

    } 
 if(((a583612627 == 15 && (( cf==1  && a1335229626 == 5) && a384913899 == 35)) && (input == 13))) {
printf("POINT: 262\n");
    	cf = 0;
    	a1602107789 = 36 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm4(int input) {
printf("POINT: 263\n");

    if(( cf==1  && a583612627 == 11)) {
printf("POINT: 264\n");
    	calculate_outputm69(input);
    } 
printf("POINT: 265\n");

    if((a583612627 == 12 &&  cf==1 )) {
printf("POINT: 266\n");
    	calculate_outputm70(input);
    } 
printf("POINT: 267\n");

    if((a583612627 == 13 &&  cf==1 )) {
printf("POINT: 268\n");
    	calculate_outputm71(input);
    } 
printf("POINT: 269\n");

    if(( cf==1  && a583612627 == 14)) {
printf("POINT: 270\n");
    	calculate_outputm72(input);
    } 
printf("POINT: 271\n");

    if((a583612627 == 15 &&  cf==1 )) {
printf("POINT: 272\n");
    	calculate_outputm73(input);
    } 
}
 void calculate_outputm76(int input) {
printf("POINT: 273\n");

    if(((a620299262 == 34 && (a384913899 == 36 && ((input == 3) &&  cf==1 ))) && a1335229626 == 5)) {
printf("POINT: 274\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 275\n");

    } 
 if((a620299262 == 34 && ((a1335229626 == 5 && ( cf==1  && a384913899 == 36)) && (input == 8)))) {
printf("POINT: 276\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1602107789 = 32 ;
    	a1959734605 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm5(int input) {
printf("POINT: 277\n");

    if(( cf==1  && a620299262 == 34)) {
printf("POINT: 278\n");
    	calculate_outputm76(input);
    } 
}
 void calculate_outputm79(int input) {
printf("POINT: 279\n");

    if((a324926224 == 3 && ((( cf==1  && a1959734605 == 2) && a1335229626 == 6) && (input == 6)))) {
printf("POINT: 280\n");
    	cf = 0;
    	a1335229626 = 10;
    	a2121950185 = 35 ;
    	a880660927 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 281\n");

    } 
 if(((a1959734605 == 2 && (( cf==1  && (input == 8)) && a1335229626 == 6)) && a324926224 == 3)) {
printf("POINT: 282\n");
    	cf = 0;
    	a880660927 = 13;
    	a1335229626 = 10;
    	a1249410904 = 7; 
    	 printf("%d\n", 19);  
printf("POINT: 283\n");

    } 
 if(((a324926224 == 3 && ((input == 15) && (a1335229626 == 6 &&  cf==1 ))) && a1959734605 == 2)) {
printf("POINT: 284\n");
    	cf = 0;
    	a950417444 = 12;
    	a1335229626 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm81(int input) {
printf("POINT: 285\n");

    if(((a1335229626 == 6 && (( cf==1  && a324926224 == 6) && a1959734605 == 2)) && (input == 3))) {
printf("POINT: 286\n");
    	cf = 0;
    	a620299262 = 34 ;
    	a384913899 = 36 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm6(int input) {
printf("POINT: 287\n");

    if((a324926224 == 3 &&  cf==1 )) {
printf("POINT: 288\n");
    	calculate_outputm79(input);
    } 
printf("POINT: 289\n");

    if((a324926224 == 6 &&  cf==1 )) {
printf("POINT: 290\n");
    	calculate_outputm81(input);
    } 
}
 void calculate_outputm85(int input) {
printf("POINT: 291\n");

    if((((( cf==1  && a1210809645 == 8) && (input == 1)) && a1335229626 == 6) && a1959734605 == 3)) {
printf("POINT: 292\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 20);  
printf("POINT: 293\n");

    } 
 if(((input == 4) && ((a1959734605 == 3 && ( cf==1  && a1210809645 == 8)) && a1335229626 == 6))) {
printf("POINT: 294\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 35 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 21);  
printf("POINT: 295\n");

    } 
 if((a1959734605 == 3 && (a1210809645 == 8 && (a1335229626 == 6 && ((input == 8) &&  cf==1 ))))) {
printf("POINT: 296\n");
    	cf = 0;
    	a1664587146 = 35 ;
    	a1335229626 = 10;
    	a880660927 = 14; 
    	 printf("%d\n", 17);  
printf("POINT: 297\n");

    } 
 if((a1210809645 == 8 && (((a1335229626 == 6 &&  cf==1 ) && a1959734605 == 3) && (input == 10)))) {
printf("POINT: 298\n");
    	cf = 0;
    	a1602107789 = 32 ;
    	a1959734605 = 5; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm89(int input) {
printf("POINT: 299\n");

    if((a1335229626 == 6 && ((((input == 6) &&  cf==1 ) && a1210809645 == 12) && a1959734605 == 3))) {
printf("POINT: 300\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1335229626 = 7;
    	a1237428760 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 301\n");

    } 
 if((a1335229626 == 6 && ((a1959734605 == 3 && ((input == 15) &&  cf==1 )) && a1210809645 == 12))) {
printf("POINT: 302\n");
    	cf = 0;
    	a1664587146 = 35 ;
    	a1335229626 = 10;
    	a880660927 = 14; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm7(int input) {
printf("POINT: 303\n");

    if((a1210809645 == 8 &&  cf==1 )) {
printf("POINT: 304\n");
    	calculate_outputm85(input);
    } 
printf("POINT: 305\n");

    if(( cf==1  && a1210809645 == 12)) {
printf("POINT: 306\n");
    	calculate_outputm89(input);
    } 
}
 void calculate_outputm90(int input) {
printf("POINT: 307\n");

    if((a1132599179 == 32 && (((input == 10) && (a1335229626 == 6 &&  cf==1 )) && a1959734605 == 4))) {
printf("POINT: 308\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 13; 
    	 printf("%d\n", 20);  
printf("POINT: 309\n");

    } 
 if(((a1335229626 == 6 && ((input == 11) && ( cf==1  && a1132599179 == 32))) && a1959734605 == 4)) {
printf("POINT: 310\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 35 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm92(int input) {
printf("POINT: 311\n");

    if(((a1959734605 == 4 && (a1335229626 == 6 && ( cf==1  && a1132599179 == 34))) && (input == 6))) {
printf("POINT: 312\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 32 ;
    	a1074841212 = 12; 
    	 printf("%d\n", 18);  
printf("POINT: 313\n");

    } 
 if((a1335229626 == 6 && ((a1132599179 == 34 && ( cf==1  && (input == 10))) && a1959734605 == 4))) {
printf("POINT: 314\n");
    	cf = 0;
    	a880642005 = 36 ;
    	a1273086420 = 33 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm8(int input) {
printf("POINT: 315\n");

    if((a1132599179 == 32 &&  cf==1 )) {
printf("POINT: 316\n");
    	calculate_outputm90(input);
    } 
printf("POINT: 317\n");

    if((a1132599179 == 34 &&  cf==1 )) {
printf("POINT: 318\n");
    	calculate_outputm92(input);
    } 
}
 void calculate_outputm95(int input) {
printf("POINT: 319\n");

    if((a1335229626 == 6 && (a1959734605 == 5 && (a1602107789 == 32 && ( cf==1  && (input == 11)))))) {
printf("POINT: 320\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 15; 
    	 printf("%d\n", 17);  
printf("POINT: 321\n");

    } 
 if((a1602107789 == 32 && ((a1335229626 == 6 && ( cf==1  && (input == 12))) && a1959734605 == 5))) {
printf("POINT: 322\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 323\n");

    } 
 if(((a1959734605 == 5 && (((input == 13) &&  cf==1 ) && a1602107789 == 32)) && a1335229626 == 6)) {
printf("POINT: 324\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 325\n");

    } 
 if(((a1602107789 == 32 && ((input == 15) && ( cf==1  && a1959734605 == 5))) && a1335229626 == 6)) {
printf("POINT: 326\n");
    	cf = 0;
    	 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm96(int input) {
printf("POINT: 327\n");

    if(((((a1602107789 == 35 &&  cf==1 ) && (input == 4)) && a1959734605 == 5) && a1335229626 == 6)) {
printf("POINT: 328\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 9;
    	a1237428760 = 4; 
    	 printf("%d\n", 24);  
printf("POINT: 329\n");

    } 
 if(((a1335229626 == 6 && ((input == 12) && (a1602107789 == 35 &&  cf==1 ))) && a1959734605 == 5)) {
printf("POINT: 330\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 6; 
    	 printf("%d\n", 16);  
printf("POINT: 331\n");

    } 
 if((a1602107789 == 35 && ((input == 14) && ((a1335229626 == 6 &&  cf==1 ) && a1959734605 == 5)))) {
printf("POINT: 332\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 13;
    	a1249410904 = 6; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm97(int input) {
printf("POINT: 333\n");

    if((a1335229626 == 6 && ((input == 1) && (a1959734605 == 5 && (a1602107789 == 36 &&  cf==1 ))))) {
printf("POINT: 334\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 15; 
    	 printf("%d\n", 17);  
printf("POINT: 335\n");

    } 
 if((((a1959734605 == 5 && ((input == 2) &&  cf==1 )) && a1335229626 == 6) && a1602107789 == 36)) {
printf("POINT: 336\n");
    	cf = 0;
    	 
    	 printf("%d\n", 25);  
printf("POINT: 337\n");

    } 
 if((a1335229626 == 6 && (a1602107789 == 36 && (((input == 11) &&  cf==1 ) && a1959734605 == 5)))) {
printf("POINT: 338\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 9;
    	a1237428760 = 6; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm9(int input) {
printf("POINT: 339\n");

    if(( cf==1  && a1602107789 == 32)) {
printf("POINT: 340\n");
    	calculate_outputm95(input);
    } 
printf("POINT: 341\n");

    if(( cf==1  && a1602107789 == 35)) {
printf("POINT: 342\n");
    	calculate_outputm96(input);
    } 
printf("POINT: 343\n");

    if(( cf==1  && a1602107789 == 36)) {
printf("POINT: 344\n");
    	calculate_outputm97(input);
    } 
}
 void calculate_outputm98(int input) {
printf("POINT: 345\n");

    if((a1210809645 == 6 && ((a1335229626 == 6 && ( cf==1  && (input == 8))) && a1959734605 == 6))) {
printf("POINT: 346\n");
    	cf = 0;
    	a1335229626 = 10;
    	a1664587146 = 33 ;
    	a880660927 = 14; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm100(int input) {
printf("POINT: 347\n");

    if((((( cf==1  && a1335229626 == 6) && a1210809645 == 10) && (input == 1)) && a1959734605 == 6)) {
printf("POINT: 348\n");
    	cf = 0;
    	a880660927 = 11;
    	a1335229626 = 10;
    	a1837110425 = 5; 
    	 printf("%d\n", 23);  
printf("POINT: 349\n");

    } 
 if(((a1335229626 == 6 && (a1959734605 == 6 && (a1210809645 == 10 &&  cf==1 ))) && (input == 11))) {
printf("POINT: 350\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 11;
    	a654409942 = 16; 
    	 printf("%d\n", 20);  
printf("POINT: 351\n");

    } 
 if((((( cf==1  && a1210809645 == 10) && a1335229626 == 6) && a1959734605 == 6) && (input == 15))) {
printf("POINT: 352\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 13;
    	a932751092 = 2; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm101(int input) {
printf("POINT: 353\n");

    if(((a1959734605 == 6 && ((input == 1) && ( cf==1  && a1335229626 == 6))) && a1210809645 == 11)) {
printf("POINT: 354\n");
    	cf = 0;
    	a1602107789 = 36 ;
    	a1959734605 = 5; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm102(int input) {
printf("POINT: 355\n");

    if(((input == 2) && (((a1335229626 == 6 &&  cf==1 ) && a1959734605 == 6) && a1210809645 == 13))) {
printf("POINT: 356\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 13;
    	a1249410904 = 7; 
    	 printf("%d\n", 23);  
printf("POINT: 357\n");

    } 
 if(((((a1959734605 == 6 &&  cf==1 ) && (input == 8)) && a1335229626 == 6) && a1210809645 == 13)) {
printf("POINT: 358\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 13; 
    	 printf("%d\n", 19);  
printf("POINT: 359\n");

    } 
 if((a1335229626 == 6 && (a1210809645 == 13 && ((a1959734605 == 6 &&  cf==1 ) && (input == 13))))) {
printf("POINT: 360\n");
    	cf = 0;
    	a1335229626 = 11;
    	a338143956 = 32 ;
    	a269427955 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm10(int input) {
printf("POINT: 361\n");

    if((a1210809645 == 6 &&  cf==1 )) {
printf("POINT: 362\n");
    	calculate_outputm98(input);
    } 
printf("POINT: 363\n");

    if((a1210809645 == 10 &&  cf==1 )) {
printf("POINT: 364\n");
    	calculate_outputm100(input);
    } 
printf("POINT: 365\n");

    if(( cf==1  && a1210809645 == 11)) {
printf("POINT: 366\n");
    	calculate_outputm101(input);
    } 
printf("POINT: 367\n");

    if((a1210809645 == 13 &&  cf==1 )) {
printf("POINT: 368\n");
    	calculate_outputm102(input);
    } 
}
 void calculate_outputm103(int input) {
printf("POINT: 369\n");

    if(((a179752516 == 7 && ((input == 4) && (a1959734605 == 7 &&  cf==1 ))) && a1335229626 == 6)) {
printf("POINT: 370\n");
    	cf = 0;
    	a1602107789 = 32 ;
    	a1959734605 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 371\n");

    } 
 if(((a179752516 == 7 && ((input == 8) && ( cf==1  && a1335229626 == 6))) && a1959734605 == 7)) {
printf("POINT: 372\n");
    	cf = 0;
    	a950417444 = 10;
    	a1335229626 = 12;
    	a1760493561 = 10; 
    	 printf("%d\n", 19);  
printf("POINT: 373\n");

    } 
 if((a179752516 == 7 && ((( cf==1  && a1335229626 == 6) && a1959734605 == 7) && (input == 10)))) {
printf("POINT: 374\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 22);  
printf("POINT: 375\n");

    } 
 if(((((input == 11) && ( cf==1  && a1335229626 == 6)) && a179752516 == 7) && a1959734605 == 7)) {
printf("POINT: 376\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 14; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm104(int input) {
printf("POINT: 377\n");

    if(((a1335229626 == 6 && (a179752516 == 8 && ( cf==1  && (input == 6)))) && a1959734605 == 7)) {
printf("POINT: 378\n");
    	cf = 0;
    	a950417444 = 9;
    	a1335229626 = 12;
    	a565249046 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 379\n");

    } 
 if((a179752516 == 8 && (a1959734605 == 7 && (( cf==1  && a1335229626 == 6) && (input == 12))))) {
printf("POINT: 380\n");
    	cf = 0;
    	a1335229626 = 10;
    	a2121950185 = 35 ;
    	a880660927 = 9; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm107(int input) {
printf("POINT: 381\n");

    if((((a179752516 == 12 && (a1335229626 == 6 &&  cf==1 )) && (input == 4)) && a1959734605 == 7)) {
printf("POINT: 382\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 15; 
    	 printf("%d\n", 26);  
printf("POINT: 383\n");

    } 
 if((((input == 7) && ((a1959734605 == 7 &&  cf==1 ) && a179752516 == 12)) && a1335229626 == 6)) {
printf("POINT: 384\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 6; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm11(int input) {
printf("POINT: 385\n");

    if(( cf==1  && a179752516 == 7)) {
printf("POINT: 386\n");
    	calculate_outputm103(input);
    } 
printf("POINT: 387\n");

    if(( cf==1  && a179752516 == 8)) {
printf("POINT: 388\n");
    	calculate_outputm104(input);
    } 
printf("POINT: 389\n");

    if((a179752516 == 12 &&  cf==1 )) {
printf("POINT: 390\n");
    	calculate_outputm107(input);
    } 
}
 void calculate_outputm109(int input) {
printf("POINT: 391\n");

    if(((input == 6) && (a1335229626 == 6 && (( cf==1  && a1959734605 == 8) && a286009693 == 9)))) {
printf("POINT: 392\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 14; 
    	 printf("%d\n", 19);  
printf("POINT: 393\n");

    } 
 if(((((input == 8) && ( cf==1  && a1959734605 == 8)) && a1335229626 == 6) && a286009693 == 9)) {
printf("POINT: 394\n");
    	cf = 0;
    	a1273086420 = 36 ;
    	a1335229626 = 8;
    	a864013224 = 14; 
    	 printf("%d\n", 19);  
printf("POINT: 395\n");

    } 
 if(((a1335229626 == 6 && ((input == 10) && (a1959734605 == 8 &&  cf==1 ))) && a286009693 == 9)) {
printf("POINT: 396\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 12; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm112(int input) {
printf("POINT: 397\n");

    if((((( cf==1  && a286009693 == 13) && a1959734605 == 8) && a1335229626 == 6) && (input == 8))) {
printf("POINT: 398\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm114(int input) {
printf("POINT: 399\n");

    if((a1335229626 == 6 && ((input == 1) && (a286009693 == 15 && ( cf==1  && a1959734605 == 8))))) {
printf("POINT: 400\n");
    	cf = 0;
    	a880642005 = 36 ;
    	a1273086420 = 33 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 401\n");

    } 
 if((a1335229626 == 6 && (a1959734605 == 8 && (a286009693 == 15 && ((input == 7) &&  cf==1 ))))) {
printf("POINT: 402\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 14; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm12(int input) {
printf("POINT: 403\n");

    if(( cf==1  && a286009693 == 9)) {
printf("POINT: 404\n");
    	calculate_outputm109(input);
    } 
printf("POINT: 405\n");

    if(( cf==1  && a286009693 == 13)) {
printf("POINT: 406\n");
    	calculate_outputm112(input);
    } 
printf("POINT: 407\n");

    if(( cf==1  && a286009693 == 15)) {
printf("POINT: 408\n");
    	calculate_outputm114(input);
    } 
}
 void calculate_outputm115(int input) {
printf("POINT: 409\n");

    if(((a1250255157 == 8 && (a1959734605 == 9 && (a1335229626 == 6 &&  cf==1 ))) && (input == 12))) {
printf("POINT: 410\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 14; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm116(int input) {
printf("POINT: 411\n");

    if((((((input == 15) &&  cf==1 ) && a1959734605 == 9) && a1335229626 == 6) && a1250255157 == 9)) {
printf("POINT: 412\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 8;
    	a1746137894 = 17; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm118(int input) {
printf("POINT: 413\n");

    if(((input == 7) && ((a1250255157 == 12 && (a1959734605 == 9 &&  cf==1 )) && a1335229626 == 6))) {
printf("POINT: 414\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 415\n");

    } 
 if((((input == 13) && ((a1959734605 == 9 &&  cf==1 ) && a1250255157 == 12)) && a1335229626 == 6)) {
printf("POINT: 416\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm119(int input) {
printf("POINT: 417\n");

    if(((input == 2) && (((a1250255157 == 13 &&  cf==1 ) && a1959734605 == 9) && a1335229626 == 6))) {
printf("POINT: 418\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 15; 
    	 printf("%d\n", 19);  
printf("POINT: 419\n");

    } 
 if((((( cf==1  && (input == 10)) && a1959734605 == 9) && a1335229626 == 6) && a1250255157 == 13)) {
printf("POINT: 420\n");
    	cf = 0;
    	a1273086420 = 33 ;
    	a880642005 = 36 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 25);  
printf("POINT: 421\n");

    } 
 if(((a1959734605 == 9 && (( cf==1  && a1250255157 == 13) && (input == 12))) && a1335229626 == 6)) {
printf("POINT: 422\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 16; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm121(int input) {
printf("POINT: 423\n");

    if((a1250255157 == 15 && ((input == 7) && (a1335229626 == 6 && (a1959734605 == 9 &&  cf==1 ))))) {
printf("POINT: 424\n");
    	cf = 0;
    	a1959734605 = 6;
    	a1210809645 = 11; 
    	 printf("%d\n", 25);  
printf("POINT: 425\n");

    } 
 if(((a1335229626 == 6 && (a1959734605 == 9 && ( cf==1  && a1250255157 == 15))) && (input == 11))) {
printf("POINT: 426\n");
    	cf = 0;
    	a880660927 = 10;
    	a1335229626 = 10;
    	a200918022 = 11; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm13(int input) {
printf("POINT: 427\n");

    if(( cf==1  && a1250255157 == 8)) {
printf("POINT: 428\n");
    	calculate_outputm115(input);
    } 
printf("POINT: 429\n");

    if((a1250255157 == 9 &&  cf==1 )) {
printf("POINT: 430\n");
    	calculate_outputm116(input);
    } 
printf("POINT: 431\n");

    if((a1250255157 == 12 &&  cf==1 )) {
printf("POINT: 432\n");
    	calculate_outputm118(input);
    } 
printf("POINT: 433\n");

    if(( cf==1  && a1250255157 == 13)) {
printf("POINT: 434\n");
    	calculate_outputm119(input);
    } 
printf("POINT: 435\n");

    if((a1250255157 == 15 &&  cf==1 )) {
printf("POINT: 436\n");
    	calculate_outputm121(input);
    } 
}
 void calculate_outputm122(int input) {
printf("POINT: 437\n");

    if((((a1510817746 == 7 && ( cf==1  && a940472710 == 8)) && a1335229626 == 7) && (input == 1))) {
printf("POINT: 438\n");
    	cf = 0;
    	a1851906186 = 35 ;
    	a1149219151 = 32 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 439\n");

    } 
 if((((a1335229626 == 7 && ( cf==1  && (input == 6))) && a1510817746 == 7) && a940472710 == 8)) {
printf("POINT: 440\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1237428760 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 441\n");

    } 
 if((a1510817746 == 7 && ((( cf==1  && a940472710 == 8) && a1335229626 == 7) && (input == 8)))) {
printf("POINT: 442\n");
    	cf = 0;
    	a1498174835 = 34 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 25);  
printf("POINT: 443\n");

    } 
 if(((((a1510817746 == 7 &&  cf==1 ) && a1335229626 == 7) && a940472710 == 8) && (input == 15))) {
printf("POINT: 444\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 14; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm125(int input) {
printf("POINT: 445\n");

    if((a940472710 == 11 && (a1335229626 == 7 && ((input == 1) && (a1510817746 == 7 &&  cf==1 ))))) {
printf("POINT: 446\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 15; 
    	 printf("%d\n", 19);  
printf("POINT: 447\n");

    } 
 if((((a1335229626 == 7 && ( cf==1  && a940472710 == 11)) && (input == 3)) && a1510817746 == 7)) {
printf("POINT: 448\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 14; 
    	 printf("%d\n", 26);  
printf("POINT: 449\n");

    } 
 if(((input == 4) && ((( cf==1  && a1510817746 == 7) && a940472710 == 11) && a1335229626 == 7))) {
printf("POINT: 450\n");
    	cf = 0;
    	a880642005 = 36 ;
    	a1273086420 = 33 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 451\n");

    } 
 if(((((a940472710 == 11 &&  cf==1 ) && a1510817746 == 7) && (input == 12)) && a1335229626 == 7)) {
printf("POINT: 452\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 15;
    	a1736640332 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm127(int input) {
printf("POINT: 453\n");

    if((a1335229626 == 7 && ((a940472710 == 13 && ((input == 6) &&  cf==1 )) && a1510817746 == 7))) {
printf("POINT: 454\n");
    	cf = 0;
    	a384913899 = 33 ;
    	a307029135 = 33 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm14(int input) {
printf("POINT: 455\n");

    if(( cf==1  && a940472710 == 8)) {
printf("POINT: 456\n");
    	calculate_outputm122(input);
    } 
printf("POINT: 457\n");

    if(( cf==1  && a940472710 == 11)) {
printf("POINT: 458\n");
    	calculate_outputm125(input);
    } 
printf("POINT: 459\n");

    if(( cf==1  && a940472710 == 13)) {
printf("POINT: 460\n");
    	calculate_outputm127(input);
    } 
}
 void calculate_outputm128(int input) {
printf("POINT: 461\n");

    if(((((input == 4) && ( cf==1  && a782039646 == 7)) && a1335229626 == 7) && a1510817746 == 8)) {
printf("POINT: 462\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 22);  
printf("POINT: 463\n");

    } 
 if(((input == 13) && ((a1510817746 == 8 && (a1335229626 == 7 &&  cf==1 )) && a782039646 == 7))) {
printf("POINT: 464\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 12; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm130(int input) {
printf("POINT: 465\n");

    if((((( cf==1  && a1335229626 == 7) && a1510817746 == 8) && (input == 6)) && a782039646 == 11)) {
printf("POINT: 466\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 32 ;
    	a1031697847 = 10; 
    	 printf("%d\n", 21);  
printf("POINT: 467\n");

    } 
 if(((((a1335229626 == 7 &&  cf==1 ) && a1510817746 == 8) && a782039646 == 11) && (input == 15))) {
printf("POINT: 468\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 11;
    	a1959734605 = 5; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm132(int input) {
printf("POINT: 469\n");

    if(((((a1510817746 == 8 &&  cf==1 ) && (input == 11)) && a782039646 == 13) && a1335229626 == 7)) {
printf("POINT: 470\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 11;
    	a1959734605 = 8; 
    	 printf("%d\n", 22);  
printf("POINT: 471\n");

    } 
 if(((a1510817746 == 8 && ((input == 13) && ( cf==1  && a782039646 == 13))) && a1335229626 == 7)) {
printf("POINT: 472\n");
    	cf = 0;
    	a389949481 = 35 ;
    	a1335229626 = 12;
    	a950417444 = 8; 
    	 printf("%d\n", 23);  
printf("POINT: 473\n");

    } 
 if((((a1335229626 == 7 && (a782039646 == 13 &&  cf==1 )) && a1510817746 == 8) && (input == 9))) {
printf("POINT: 474\n");
    	cf = 0;
    	a1959734605 = 2;
    	a1335229626 = 6;
    	a324926224 = 8; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm133(int input) {
printf("POINT: 475\n");

    if((a1510817746 == 8 && (a782039646 == 14 && ((a1335229626 == 7 &&  cf==1 ) && (input == 4))))) {
printf("POINT: 476\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 33 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 477\n");

    } 
 if(((input == 6) && (((a782039646 == 14 &&  cf==1 ) && a1510817746 == 8) && a1335229626 == 7))) {
printf("POINT: 478\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1237428760 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 479\n");

    } 
 if(((input == 11) && (((a1335229626 == 7 &&  cf==1 ) && a782039646 == 14) && a1510817746 == 8))) {
printf("POINT: 480\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1237428760 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm15(int input) {
printf("POINT: 481\n");

    if(( cf==1  && a782039646 == 7)) {
printf("POINT: 482\n");
    	calculate_outputm128(input);
    } 
printf("POINT: 483\n");

    if(( cf==1  && a782039646 == 11)) {
printf("POINT: 484\n");
    	calculate_outputm130(input);
    } 
printf("POINT: 485\n");

    if(( cf==1  && a782039646 == 13)) {
printf("POINT: 486\n");
    	calculate_outputm132(input);
    } 
printf("POINT: 487\n");

    if((a782039646 == 14 &&  cf==1 )) {
printf("POINT: 488\n");
    	calculate_outputm133(input);
    } 
}
 void calculate_outputm134(int input) {
printf("POINT: 489\n");

    if((a1510817746 == 9 && ((a1237428760 == 3 && ( cf==1  && (input == 1))) && a1335229626 == 7))) {
printf("POINT: 490\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 13; 
    	 printf("%d\n", 24);  
printf("POINT: 491\n");

    } 
 if((((input == 6) && (( cf==1  && a1237428760 == 3) && a1335229626 == 7)) && a1510817746 == 9)) {
printf("POINT: 492\n");
    	cf = 0;
    	a113972147 = 34 ;
    	a1335229626 = 11;
    	a269427955 = 10; 
    	 printf("%d\n", 23);  
printf("POINT: 493\n");

    } 
 if(((a1335229626 == 7 && ((input == 15) && (a1510817746 == 9 &&  cf==1 ))) && a1237428760 == 3)) {
printf("POINT: 494\n");
    	cf = 0;
    	a1259748523 = 33 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm135(int input) {
printf("POINT: 495\n");

    if((a1237428760 == 4 && (((input == 1) && ( cf==1  && a1335229626 == 7)) && a1510817746 == 9))) {
printf("POINT: 496\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 8;
    	a286009693 = 13; 
    	 printf("%d\n", 19);  
printf("POINT: 497\n");

    } 
 if((a1510817746 == 9 && ((( cf==1  && (input == 3)) && a1237428760 == 4) && a1335229626 == 7))) {
printf("POINT: 498\n");
    	cf = 0;
    	a1237428760 = 3; 
    	 printf("%d\n", 20);  
printf("POINT: 499\n");

    } 
 if(((((a1335229626 == 7 &&  cf==1 ) && (input == 4)) && a1237428760 == 4) && a1510817746 == 9)) {
printf("POINT: 500\n");
    	cf = 0;
    	a880660927 = 13;
    	a1335229626 = 10;
    	a1249410904 = 8; 
    	 printf("%d\n", 24);  
printf("POINT: 501\n");

    } 
 if(((input == 6) && (a1510817746 == 9 && (a1335229626 == 7 && (a1237428760 == 4 &&  cf==1 ))))) {
printf("POINT: 502\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 7;
    	a179752516 = 12; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm136(int input) {
printf("POINT: 503\n");

    if((((( cf==1  && a1335229626 == 7) && (input == 2)) && a1510817746 == 9) && a1237428760 == 5)) {
printf("POINT: 504\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm137(int input) {
printf("POINT: 505\n");

    if((a1510817746 == 9 && ((a1237428760 == 6 && (a1335229626 == 7 &&  cf==1 )) && (input == 2)))) {
printf("POINT: 506\n");
    	cf = 0;
    	a1510817746 = 10;
    	a866603139 = 4; 
    	 printf("%d\n", 20);  
printf("POINT: 507\n");

    } 
 if((a1510817746 == 9 && (a1335229626 == 7 && (a1237428760 == 6 && ((input == 4) &&  cf==1 ))))) {
printf("POINT: 508\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 15; 
    	 printf("%d\n", 17);  
printf("POINT: 509\n");

    } 
 if(((a1510817746 == 9 && (a1335229626 == 7 && ( cf==1  && (input == 7)))) && a1237428760 == 6)) {
printf("POINT: 510\n");
    	cf = 0;
    	a1335229626 = 10;
    	a1664587146 = 36 ;
    	a880660927 = 14; 
    	 printf("%d\n", 24);  
printf("POINT: 511\n");

    } 
 if(((a1237428760 == 6 && ((a1510817746 == 9 &&  cf==1 ) && (input == 10))) && a1335229626 == 7)) {
printf("POINT: 512\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 15; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm138(int input) {
printf("POINT: 513\n");

    if((a1335229626 == 7 && ((((input == 3) &&  cf==1 ) && a1510817746 == 9) && a1237428760 == 7))) {
printf("POINT: 514\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm16(int input) {
printf("POINT: 515\n");

    if(( cf==1  && a1237428760 == 3)) {
printf("POINT: 516\n");
    	calculate_outputm134(input);
    } 
printf("POINT: 517\n");

    if((a1237428760 == 4 &&  cf==1 )) {
printf("POINT: 518\n");
    	calculate_outputm135(input);
    } 
printf("POINT: 519\n");

    if((a1237428760 == 5 &&  cf==1 )) {
printf("POINT: 520\n");
    	calculate_outputm136(input);
    } 
printf("POINT: 521\n");

    if((a1237428760 == 6 &&  cf==1 )) {
printf("POINT: 522\n");
    	calculate_outputm137(input);
    } 
printf("POINT: 523\n");

    if((a1237428760 == 7 &&  cf==1 )) {
printf("POINT: 524\n");
    	calculate_outputm138(input);
    } 
}
 void calculate_outputm140(int input) {
printf("POINT: 525\n");

    if(((input == 7) && (a866603139 == 4 && (a1335229626 == 7 && (a1510817746 == 10 &&  cf==1 ))))) {
printf("POINT: 526\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 13;
    	a1249410904 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 527\n");

    } 
 if(((((a1335229626 == 7 &&  cf==1 ) && a866603139 == 4) && a1510817746 == 10) && (input == 13))) {
printf("POINT: 528\n");
    	cf = 0;
    	a1510817746 = 7;
    	a940472710 = 8; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm141(int input) {
printf("POINT: 529\n");

    if(((a1335229626 == 7 && (a866603139 == 5 && ( cf==1  && a1510817746 == 10))) && (input == 1))) {
printf("POINT: 530\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 12;
    	a1255937088 = 12; 
    	 printf("%d\n", 18);  
printf("POINT: 531\n");

    } 
 if((a866603139 == 5 && (a1335229626 == 7 && (( cf==1  && a1510817746 == 10) && (input == 7))))) {
printf("POINT: 532\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 533\n");

    } 
 if((a1335229626 == 7 && ((a1510817746 == 10 && ( cf==1  && a866603139 == 5)) && (input == 10)))) {
printf("POINT: 534\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 8; 
    	 printf("%d\n", 22);  
printf("POINT: 535\n");

    } 
 if(((input == 13) && ((a1335229626 == 7 && ( cf==1  && a1510817746 == 10)) && a866603139 == 5))) {
printf("POINT: 536\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 13; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm142(int input) {
printf("POINT: 537\n");

    if((a866603139 == 6 && (a1510817746 == 10 && (( cf==1  && a1335229626 == 7) && (input == 7))))) {
printf("POINT: 538\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 32 ;
    	a950417444 = 8; 
    	 printf("%d\n", 17);  
printf("POINT: 539\n");

    } 
 if((a866603139 == 6 && (((a1335229626 == 7 &&  cf==1 ) && a1510817746 == 10) && (input == 13)))) {
printf("POINT: 540\n");
    	cf = 0;
    	a1510817746 = 8;
    	a782039646 = 7; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm144(int input) {
printf("POINT: 541\n");

    if((a1510817746 == 10 && (a1335229626 == 7 && ((input == 7) && ( cf==1  && a866603139 == 8))))) {
printf("POINT: 542\n");
    	cf = 0;
    	a1959734605 = 6;
    	a1335229626 = 6;
    	a1210809645 = 6; 
    	 printf("%d\n", 23);  
printf("POINT: 543\n");

    } 
 if((((a866603139 == 8 && ((input == 13) &&  cf==1 )) && a1510817746 == 10) && a1335229626 == 7)) {
printf("POINT: 544\n");
    	cf = 0;
    	a1510817746 = 8;
    	a782039646 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 545\n");

    } 
 if((((a866603139 == 8 && ( cf==1  && a1335229626 == 7)) && a1510817746 == 10) && (input == 6))) {
printf("POINT: 546\n");
    	cf = 0;
    	a1959734605 = 2;
    	a1335229626 = 6;
    	a324926224 = 1; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm145(int input) {
printf("POINT: 547\n");

    if((((input == 6) && ((a866603139 == 9 &&  cf==1 ) && a1335229626 == 7)) && a1510817746 == 10)) {
printf("POINT: 548\n");
    	cf = 0;
    	a1498174835 = 35 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm146(int input) {
printf("POINT: 549\n");

    if((((a1335229626 == 7 && (a1510817746 == 10 &&  cf==1 )) && (input == 1)) && a866603139 == 10)) {
printf("POINT: 550\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 32 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 551\n");

    } 
 if(((a1335229626 == 7 && ((a866603139 == 10 &&  cf==1 ) && a1510817746 == 10)) && (input == 3))) {
printf("POINT: 552\n");
    	cf = 0;
    	a389949481 = 36 ;
    	a1335229626 = 12;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 553\n");

    } 
 if(((a1510817746 == 10 && (a866603139 == 10 && ( cf==1  && (input == 8)))) && a1335229626 == 7)) {
printf("POINT: 554\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 555\n");

    } 
 if((a1335229626 == 7 && (((input == 11) && ( cf==1  && a866603139 == 10)) && a1510817746 == 10))) {
printf("POINT: 556\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm17(int input) {
printf("POINT: 557\n");

    if((a866603139 == 4 &&  cf==1 )) {
printf("POINT: 558\n");
    	calculate_outputm140(input);
    } 
printf("POINT: 559\n");

    if(( cf==1  && a866603139 == 5)) {
printf("POINT: 560\n");
    	calculate_outputm141(input);
    } 
printf("POINT: 561\n");

    if(( cf==1  && a866603139 == 6)) {
printf("POINT: 562\n");
    	calculate_outputm142(input);
    } 
printf("POINT: 563\n");

    if((a866603139 == 8 &&  cf==1 )) {
printf("POINT: 564\n");
    	calculate_outputm144(input);
    } 
printf("POINT: 565\n");

    if(( cf==1  && a866603139 == 9)) {
printf("POINT: 566\n");
    	calculate_outputm145(input);
    } 
printf("POINT: 567\n");

    if((a866603139 == 10 &&  cf==1 )) {
printf("POINT: 568\n");
    	calculate_outputm146(input);
    } 
}
 void calculate_outputm147(int input) {
printf("POINT: 569\n");

    if((a1510817746 == 11 && (a654409942 == 10 && (((input == 7) &&  cf==1 ) && a1335229626 == 7)))) {
printf("POINT: 570\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 13;
    	a962095080 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm150(int input) {
printf("POINT: 571\n");

    if((a1335229626 == 7 && ((a1510817746 == 11 && ( cf==1  && (input == 6))) && a654409942 == 13))) {
printf("POINT: 572\n");
    	cf = 0;
    	a1959734605 = 8;
    	a1335229626 = 6;
    	a286009693 = 15; 
    	 printf("%d\n", 20);  
printf("POINT: 573\n");

    } 
 if(((a1335229626 == 7 && (((input == 10) &&  cf==1 ) && a654409942 == 13)) && a1510817746 == 11)) {
printf("POINT: 574\n");
    	cf = 0;
    	a950417444 = 13;
    	a1335229626 = 12;
    	a962095080 = 6; 
    	 printf("%d\n", 16);  
printf("POINT: 575\n");

    } 
 if((((a1335229626 == 7 && ( cf==1  && a1510817746 == 11)) && (input == 11)) && a654409942 == 13)) {
printf("POINT: 576\n");
    	cf = 0;
    	a1132599179 = 32 ;
    	a1335229626 = 6;
    	a1959734605 = 4; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm152(int input) {
printf("POINT: 577\n");

    if(((input == 2) && (((a1335229626 == 7 &&  cf==1 ) && a1510817746 == 11) && a654409942 == 16))) {
printf("POINT: 578\n");
    	cf = 0;
    	a1259748523 = 35 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 579\n");

    } 
 if((((( cf==1  && a1335229626 == 7) && a654409942 == 16) && a1510817746 == 11) && (input == 7))) {
printf("POINT: 580\n");
    	cf = 0;
    	a880660927 = 15;
    	a1335229626 = 10;
    	a1736640332 = 9; 
    	 printf("%d\n", 20);  
printf("POINT: 581\n");

    } 
 if((a1510817746 == 11 && ((( cf==1  && a1335229626 == 7) && (input == 15)) && a654409942 == 16))) {
printf("POINT: 582\n");
    	cf = 0;
    	a1259748523 = 35 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm18(int input) {
printf("POINT: 583\n");

    if((a654409942 == 10 &&  cf==1 )) {
printf("POINT: 584\n");
    	calculate_outputm147(input);
    } 
printf("POINT: 585\n");

    if((a654409942 == 13 &&  cf==1 )) {
printf("POINT: 586\n");
    	calculate_outputm150(input);
    } 
printf("POINT: 587\n");

    if((a654409942 == 16 &&  cf==1 )) {
printf("POINT: 588\n");
    	calculate_outputm152(input);
    } 
}
 void calculate_outputm153(int input) {
printf("POINT: 589\n");

    if(((input == 4) && ((( cf==1  && a1510817746 == 12) && a1335229626 == 7) && a1498174835 == 32))) {
printf("POINT: 590\n");
    	cf = 0;
    	a1959734605 = 7;
    	a1335229626 = 6;
    	a179752516 = 7; 
    	 printf("%d\n", 25);  
printf("POINT: 591\n");

    } 
 if((a1335229626 == 7 && (a1510817746 == 12 && ((input == 8) && (a1498174835 == 32 &&  cf==1 ))))) {
printf("POINT: 592\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 3;
    	a1210809645 = 8; 
    	 printf("%d\n", 20);  
printf("POINT: 593\n");

    } 
 if(((a1498174835 == 32 && (a1510817746 == 12 && ( cf==1  && (input == 13)))) && a1335229626 == 7)) {
printf("POINT: 594\n");
    	cf = 0;
    	a1959734605 = 9;
    	a1335229626 = 6;
    	a1250255157 = 9; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm155(int input) {
printf("POINT: 595\n");

    if((((( cf==1  && a1335229626 == 7) && a1510817746 == 12) && a1498174835 == 34) && (input == 3))) {
printf("POINT: 596\n");
    	cf = 0;
    	 
    	 printf("%d\n", 16);  
printf("POINT: 597\n");

    } 
 if((((( cf==1  && (input == 4)) && a1498174835 == 34) && a1510817746 == 12) && a1335229626 == 7)) {
printf("POINT: 598\n");
    	cf = 0;
    	a1510817746 = 13;
    	a932751092 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 599\n");

    } 
 if((a1498174835 == 34 && ((input == 12) && (a1510817746 == 12 && (a1335229626 == 7 &&  cf==1 ))))) {
printf("POINT: 600\n");
    	cf = 0;
    	a1510817746 = 13;
    	a932751092 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 601\n");

    } 
 if((a1498174835 == 34 && ((a1510817746 == 12 && ( cf==1  && a1335229626 == 7)) && (input == 15)))) {
printf("POINT: 602\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm156(int input) {
printf("POINT: 603\n");

    if((((( cf==1  && a1498174835 == 35) && a1510817746 == 12) && (input == 3)) && a1335229626 == 7)) {
printf("POINT: 604\n");
    	cf = 0;
    	 
    	 printf("%d\n", 16);  
printf("POINT: 605\n");

    } 
 if(((((input == 6) && (a1510817746 == 12 &&  cf==1 )) && a1498174835 == 35) && a1335229626 == 7)) {
printf("POINT: 606\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm19(int input) {
printf("POINT: 607\n");

    if(( cf==1  && a1498174835 == 32)) {
printf("POINT: 608\n");
    	calculate_outputm153(input);
    } 
printf("POINT: 609\n");

    if((a1498174835 == 34 &&  cf==1 )) {
printf("POINT: 610\n");
    	calculate_outputm155(input);
    } 
printf("POINT: 611\n");

    if((a1498174835 == 35 &&  cf==1 )) {
printf("POINT: 612\n");
    	calculate_outputm156(input);
    } 
}
 void calculate_outputm159(int input) {
printf("POINT: 613\n");

    if((((((input == 1) &&  cf==1 ) && a1335229626 == 7) && a1510817746 == 13) && a932751092 == 2)) {
printf("POINT: 614\n");
    	cf = 0;
    	 
    	 printf("%d\n", 23);  
printf("POINT: 615\n");

    } 
 if((a1335229626 == 7 && (a932751092 == 2 && ((a1510817746 == 13 &&  cf==1 ) && (input == 7))))) {
printf("POINT: 616\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 14; 
    	 printf("%d\n", 23);  
printf("POINT: 617\n");

    } 
 if(((((a1510817746 == 13 &&  cf==1 ) && (input == 8)) && a1335229626 == 7) && a932751092 == 2)) {
printf("POINT: 618\n");
    	cf = 0;
    	 
    	 printf("%d\n", 17);  
printf("POINT: 619\n");

    } 
 if(((input == 13) && ((a1335229626 == 7 && ( cf==1  && a1510817746 == 13)) && a932751092 == 2))) {
printf("POINT: 620\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1237428760 = 5; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm160(int input) {
printf("POINT: 621\n");

    if((a932751092 == 5 && ((input == 12) && (a1335229626 == 7 && ( cf==1  && a1510817746 == 13))))) {
printf("POINT: 622\n");
    	cf = 0;
    	a1149219151 = 35 ;
    	a1851906186 = 35 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 26);  
printf("POINT: 623\n");

    } 
 if((a1510817746 == 13 && (((a1335229626 == 7 &&  cf==1 ) && a932751092 == 5) && (input == 15)))) {
printf("POINT: 624\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 33 ;
    	a1383458586 = 9; 
    	 printf("%d\n", 23);  
printf("POINT: 625\n");

    } 
 if(((input == 14) && (a1335229626 == 7 && ((a932751092 == 5 &&  cf==1 ) && a1510817746 == 13)))) {
printf("POINT: 626\n");
    	cf = 0;
    	a1510817746 = 11;
    	a654409942 = 15; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm161(int input) {
printf("POINT: 627\n");

    if((((( cf==1  && (input == 11)) && a932751092 == 6) && a1510817746 == 13) && a1335229626 == 7)) {
printf("POINT: 628\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 6; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm163(int input) {
printf("POINT: 629\n");

    if((((a932751092 == 8 && (a1335229626 == 7 &&  cf==1 )) && (input == 1)) && a1510817746 == 13)) {
printf("POINT: 630\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 8;
    	a1746137894 = 12; 
    	 printf("%d\n", 20);  
printf("POINT: 631\n");

    } 
 if((((input == 4) && (( cf==1  && a1335229626 == 7) && a932751092 == 8)) && a1510817746 == 13)) {
printf("POINT: 632\n");
    	cf = 0;
    	a338143956 = 32 ;
    	a1335229626 = 11;
    	a269427955 = 12; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm20(int input) {
printf("POINT: 633\n");

    if((a932751092 == 2 &&  cf==1 )) {
printf("POINT: 634\n");
    	calculate_outputm159(input);
    } 
printf("POINT: 635\n");

    if(( cf==1  && a932751092 == 5)) {
printf("POINT: 636\n");
    	calculate_outputm160(input);
    } 
printf("POINT: 637\n");

    if((a932751092 == 6 &&  cf==1 )) {
printf("POINT: 638\n");
    	calculate_outputm161(input);
    } 
printf("POINT: 639\n");

    if((a932751092 == 8 &&  cf==1 )) {
printf("POINT: 640\n");
    	calculate_outputm163(input);
    } 
}
 void calculate_outputm164(int input) {
printf("POINT: 641\n");

    if((a307029135 == 35 && (a1335229626 == 7 && (( cf==1  && (input == 10)) && a1510817746 == 14)))) {
printf("POINT: 642\n");
    	cf = 0;
    	a1510817746 = 13;
    	a932751092 = 8; 
    	 printf("%d\n", 21);  
printf("POINT: 643\n");

    } 
 if((a1335229626 == 7 && (a1510817746 == 14 && (a307029135 == 35 && ( cf==1  && (input == 11)))))) {
printf("POINT: 644\n");
    	cf = 0;
    	a1478065937 = 33 ;
    	a1335229626 = 12;
    	a950417444 = 7; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm165(int input) {
printf("POINT: 645\n");

    if(((((a1510817746 == 14 &&  cf==1 ) && a1335229626 == 7) && a307029135 == 36) && (input == 1))) {
printf("POINT: 646\n");
    	cf = 0;
    	a1498174835 = 35 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 19);  
printf("POINT: 647\n");

    } 
 if(((a1335229626 == 7 && (((input == 6) &&  cf==1 ) && a307029135 == 36)) && a1510817746 == 14)) {
printf("POINT: 648\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 12; 
    	 printf("%d\n", 19);  
printf("POINT: 649\n");

    } 
 if((((a307029135 == 36 && (a1510817746 == 14 &&  cf==1 )) && a1335229626 == 7) && (input == 8))) {
printf("POINT: 650\n");
    	cf = 0;
    	a338143956 = 32 ;
    	a1335229626 = 11;
    	a269427955 = 12; 
    	 printf("%d\n", 19);  
printf("POINT: 651\n");

    } 
 if(((input == 10) && (((a1335229626 == 7 &&  cf==1 ) && a307029135 == 36) && a1510817746 == 14))) {
printf("POINT: 652\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1602107789 = 36 ;
    	a1959734605 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm21(int input) {
printf("POINT: 653\n");

    if(( cf==1  && a307029135 == 35)) {
printf("POINT: 654\n");
    	calculate_outputm164(input);
    } 
printf("POINT: 655\n");

    if(( cf==1  && a307029135 == 36)) {
printf("POINT: 656\n");
    	calculate_outputm165(input);
    } 
}
 void calculate_outputm167(int input) {
printf("POINT: 657\n");

    if((((( cf==1  && a1273086420 == 32) && a1074841212 == 11) && a1335229626 == 8) && (input == 1))) {
printf("POINT: 658\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 14; 
    	 printf("%d\n", 17);  
printf("POINT: 659\n");

    } 
 if(((a1074841212 == 11 && (( cf==1  && a1273086420 == 32) && (input == 8))) && a1335229626 == 8)) {
printf("POINT: 660\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 8;
    	a1746137894 = 12; 
    	 printf("%d\n", 26);  
printf("POINT: 661\n");

    } 
 if(((a1074841212 == 11 && (( cf==1  && a1335229626 == 8) && a1273086420 == 32)) && (input == 12))) {
printf("POINT: 662\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 13; 
    	 printf("%d\n", 23);  
printf("POINT: 663\n");

    } 
 if(((input == 15) && (a1074841212 == 11 && ((a1273086420 == 32 &&  cf==1 ) && a1335229626 == 8)))) {
printf("POINT: 664\n");
    	cf = 0;
    	a950417444 = 10;
    	a1335229626 = 12;
    	a1760493561 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm168(int input) {
printf("POINT: 665\n");

    if((((a1074841212 == 12 && (a1335229626 == 8 &&  cf==1 )) && (input == 8)) && a1273086420 == 32)) {
printf("POINT: 666\n");
    	cf = 0;
    	a1510817746 = 13;
    	a1335229626 = 7;
    	a932751092 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 667\n");

    } 
 if(((a1074841212 == 12 && ((a1335229626 == 8 &&  cf==1 ) && a1273086420 == 32)) && (input == 11))) {
printf("POINT: 668\n");
    	cf = 0;
    	a880660927 = 10;
    	a1335229626 = 10;
    	a200918022 = 10; 
    	 printf("%d\n", 24);  
printf("POINT: 669\n");

    } 
 if(((a1074841212 == 12 && (( cf==1  && (input == 13)) && a1335229626 == 8)) && a1273086420 == 32)) {
printf("POINT: 670\n");
    	cf = 0;
    	a880660927 = 11;
    	a1335229626 = 10;
    	a1837110425 = 4; 
    	 printf("%d\n", 22);  
printf("POINT: 671\n");

    } 
 if((a1335229626 == 8 && (((input == 7) && ( cf==1  && a1273086420 == 32)) && a1074841212 == 12))) {
printf("POINT: 672\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 8;
    	a782039646 = 10; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm22(int input) {
printf("POINT: 673\n");

    if((a1074841212 == 11 &&  cf==1 )) {
printf("POINT: 674\n");
    	calculate_outputm167(input);
    } 
printf("POINT: 675\n");

    if(( cf==1  && a1074841212 == 12)) {
printf("POINT: 676\n");
    	calculate_outputm168(input);
    } 
}
 void calculate_outputm170(int input) {
printf("POINT: 677\n");

    if((((a1335229626 == 8 && ((input == 3) &&  cf==1 )) && a1273086420 == 33) && a880642005 == 36)) {
printf("POINT: 678\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 679\n");

    } 
 if(((a880642005 == 36 && (( cf==1  && a1335229626 == 8) && a1273086420 == 33)) && (input == 10))) {
printf("POINT: 680\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
printf("POINT: 681\n");

    } 
 if(((a1273086420 == 33 && (a1335229626 == 8 && ((input == 11) &&  cf==1 ))) && a880642005 == 36)) {
printf("POINT: 682\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm23(int input) {
printf("POINT: 683\n");

    if((a880642005 == 36 &&  cf==1 )) {
printf("POINT: 684\n");
    	calculate_outputm170(input);
    } 
}
 void calculate_outputm171(int input) {
printf("POINT: 685\n");

    if((a1259748523 == 32 && (a1335229626 == 8 && (( cf==1  && (input == 6)) && a1273086420 == 34)))) {
printf("POINT: 686\n");
    	cf = 0;
    	a1149219151 = 33 ;
    	a1851906186 = 35 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 24);  
printf("POINT: 687\n");

    } 
 if((a1273086420 == 34 && (((a1335229626 == 8 &&  cf==1 ) && (input == 7)) && a1259748523 == 32))) {
printf("POINT: 688\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 689\n");

    } 
 if((a1259748523 == 32 && (a1273086420 == 34 && ((a1335229626 == 8 &&  cf==1 ) && (input == 12))))) {
printf("POINT: 690\n");
    	cf = 0;
    	a950417444 = 9;
    	a1335229626 = 12;
    	a565249046 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 691\n");

    } 
 if((((( cf==1  && a1259748523 == 32) && a1335229626 == 8) && a1273086420 == 34) && (input == 14))) {
printf("POINT: 692\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 8; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm172(int input) {
printf("POINT: 693\n");

    if(((a1273086420 == 34 && (( cf==1  && a1259748523 == 33) && (input == 10))) && a1335229626 == 8)) {
printf("POINT: 694\n");
    	cf = 0;
    	a880660927 = 10;
    	a1335229626 = 10;
    	a200918022 = 8; 
    	 printf("%d\n", 23);  
printf("POINT: 695\n");

    } 
 if(((a1259748523 == 33 && ((a1335229626 == 8 &&  cf==1 ) && (input == 12))) && a1273086420 == 34)) {
printf("POINT: 696\n");
    	cf = 0;
    	 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm174(int input) {
printf("POINT: 697\n");

    if((a1335229626 == 8 && ((a1273086420 == 34 && ((input == 2) &&  cf==1 )) && a1259748523 == 35))) {
printf("POINT: 698\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
printf("POINT: 699\n");

    } 
 if(((a1259748523 == 35 && ((a1273086420 == 34 &&  cf==1 ) && a1335229626 == 8)) && (input == 11))) {
printf("POINT: 700\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 8;
    	a782039646 = 13; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm24(int input) {
printf("POINT: 701\n");

    if(( cf==1  && a1259748523 == 32)) {
printf("POINT: 702\n");
    	calculate_outputm171(input);
    } 
printf("POINT: 703\n");

    if((a1259748523 == 33 &&  cf==1 )) {
printf("POINT: 704\n");
    	calculate_outputm172(input);
    } 
printf("POINT: 705\n");

    if(( cf==1  && a1259748523 == 35)) {
printf("POINT: 706\n");
    	calculate_outputm174(input);
    } 
}
 void calculate_outputm176(int input) {
printf("POINT: 707\n");

    if(((((input == 7) && ( cf==1  && a1273086420 == 35)) && a1383458586 == 2) && a1335229626 == 8)) {
printf("POINT: 708\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 15;
    	a1736640332 = 9; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm177(int input) {
printf("POINT: 709\n");

    if(((a1383458586 == 3 && ((input == 3) && (a1273086420 == 35 &&  cf==1 ))) && a1335229626 == 8)) {
printf("POINT: 710\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 7;
    	a179752516 = 8; 
    	 printf("%d\n", 18);  
printf("POINT: 711\n");

    } 
 if((((input == 4) && (( cf==1  && a1383458586 == 3) && a1273086420 == 35)) && a1335229626 == 8)) {
printf("POINT: 712\n");
    	cf = 0;
    	a389949481 = 34 ;
    	a1335229626 = 12;
    	a950417444 = 8; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm178(int input) {
printf("POINT: 713\n");

    if(((a1335229626 == 8 && (a1383458586 == 6 && (a1273086420 == 35 &&  cf==1 ))) && (input == 7))) {
printf("POINT: 714\n");
    	cf = 0;
    	a1602107789 = 35 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 715\n");

    } 
 if((((a1383458586 == 6 && (a1335229626 == 8 &&  cf==1 )) && a1273086420 == 35) && (input == 11))) {
printf("POINT: 716\n");
    	cf = 0;
    	a1273086420 = 32 ;
    	a1074841212 = 12; 
    	 printf("%d\n", 24);  
printf("POINT: 717\n");

    } 
 if((a1273086420 == 35 && ((a1383458586 == 6 && (a1335229626 == 8 &&  cf==1 )) && (input == 13)))) {
printf("POINT: 718\n");
    	cf = 0;
    	a598251408 = 36 ;
    	a1851906186 = 34 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 719\n");

    } 
 if(((((a1335229626 == 8 &&  cf==1 ) && (input == 8)) && a1383458586 == 6) && a1273086420 == 35)) {
printf("POINT: 720\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 10;
    	a200918022 = 7; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm179(int input) {
printf("POINT: 721\n");

    if((((input == 6) && (a1273086420 == 35 && ( cf==1  && a1383458586 == 7))) && a1335229626 == 8)) {
printf("POINT: 722\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 32 ; 
    	 printf("%d\n", 26);  
printf("POINT: 723\n");

    } 
 if((a1335229626 == 8 && ((a1383458586 == 7 && ((input == 8) &&  cf==1 )) && a1273086420 == 35))) {
printf("POINT: 724\n");
    	cf = 0;
    	a389949481 = 35 ;
    	a1335229626 = 12;
    	a950417444 = 8; 
    	 printf("%d\n", 23);  
printf("POINT: 725\n");

    } 
 if((((input == 12) && (( cf==1  && a1273086420 == 35) && a1335229626 == 8)) && a1383458586 == 7)) {
printf("POINT: 726\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 8;
    	a782039646 = 13; 
    	 printf("%d\n", 20);  
printf("POINT: 727\n");

    } 
 if((((((input == 13) &&  cf==1 ) && a1335229626 == 8) && a1273086420 == 35) && a1383458586 == 7)) {
printf("POINT: 728\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 8;
    	a782039646 = 13; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm25(int input) {
printf("POINT: 729\n");

    if(( cf==1  && a1383458586 == 2)) {
printf("POINT: 730\n");
    	calculate_outputm176(input);
    } 
printf("POINT: 731\n");

    if((a1383458586 == 3 &&  cf==1 )) {
printf("POINT: 732\n");
    	calculate_outputm177(input);
    } 
printf("POINT: 733\n");

    if(( cf==1  && a1383458586 == 6)) {
printf("POINT: 734\n");
    	calculate_outputm178(input);
    } 
printf("POINT: 735\n");

    if((a1383458586 == 7 &&  cf==1 )) {
printf("POINT: 736\n");
    	calculate_outputm179(input);
    } 
}
 void calculate_outputm182(int input) {
printf("POINT: 737\n");

    if((((input == 1) && (a1335229626 == 8 && (a1273086420 == 36 &&  cf==1 ))) && a864013224 == 11)) {
printf("POINT: 738\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 35 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 18);  
printf("POINT: 739\n");

    } 
 if(((input == 2) && ((a1273086420 == 36 && ( cf==1  && a864013224 == 11)) && a1335229626 == 8))) {
printf("POINT: 740\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1602107789 = 36 ;
    	a1959734605 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 741\n");

    } 
 if((a1335229626 == 8 && ((((input == 3) &&  cf==1 ) && a1273086420 == 36) && a864013224 == 11))) {
printf("POINT: 742\n");
    	cf = 0;
    	 
    	 printf("%d\n", 22);  
printf("POINT: 743\n");

    } 
 if((a1273086420 == 36 && ((a864013224 == 11 && ( cf==1  && (input == 8))) && a1335229626 == 8))) {
printf("POINT: 744\n");
    	cf = 0;
    	a269427955 = 8;
    	a1335229626 = 11;
    	a1746137894 = 12; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm183(int input) {
printf("POINT: 745\n");

    if((((( cf==1  && a1273086420 == 36) && a1335229626 == 8) && a864013224 == 13) && (input == 6))) {
printf("POINT: 746\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 12; 
    	 printf("%d\n", 24);  
printf("POINT: 747\n");

    } 
 if((a864013224 == 13 && ((a1335229626 == 8 && ( cf==1  && a1273086420 == 36)) && (input == 11)))) {
printf("POINT: 748\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 18);  
printf("POINT: 749\n");

    } 
 if((a1273086420 == 36 && ((input == 13) && ((a1335229626 == 8 &&  cf==1 ) && a864013224 == 13)))) {
printf("POINT: 750\n");
    	cf = 0;
    	a1335229626 = 11;
    	a338143956 = 35 ;
    	a269427955 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm184(int input) {
printf("POINT: 751\n");

    if(((a1273086420 == 36 && ((input == 3) && (a1335229626 == 8 &&  cf==1 ))) && a864013224 == 14)) {
printf("POINT: 752\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 753\n");

    } 
 if((((a864013224 == 14 && ((input == 10) &&  cf==1 )) && a1335229626 == 8) && a1273086420 == 36)) {
printf("POINT: 754\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm185(int input) {
printf("POINT: 755\n");

    if((a1273086420 == 36 && ((a1335229626 == 8 && ((input == 3) &&  cf==1 )) && a864013224 == 15))) {
printf("POINT: 756\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 757\n");

    } 
 if(((input == 8) && ((a1273086420 == 36 && ( cf==1  && a1335229626 == 8)) && a864013224 == 15))) {
printf("POINT: 758\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
printf("POINT: 759\n");

    } 
 if((((a1273086420 == 36 && (a864013224 == 15 &&  cf==1 )) && (input == 10)) && a1335229626 == 8)) {
printf("POINT: 760\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 7;
    	a940472710 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm26(int input) {
printf("POINT: 761\n");

    if(( cf==1  && a864013224 == 11)) {
printf("POINT: 762\n");
    	calculate_outputm182(input);
    } 
printf("POINT: 763\n");

    if((a864013224 == 13 &&  cf==1 )) {
printf("POINT: 764\n");
    	calculate_outputm183(input);
    } 
printf("POINT: 765\n");

    if((a864013224 == 14 &&  cf==1 )) {
printf("POINT: 766\n");
    	calculate_outputm184(input);
    } 
printf("POINT: 767\n");

    if((a864013224 == 15 &&  cf==1 )) {
printf("POINT: 768\n");
    	calculate_outputm185(input);
    } 
}
 void calculate_outputm189(int input) {
printf("POINT: 769\n");

    if((a1851906186 == 32 && ((( cf==1  && a365147679 == 9) && a1335229626 == 9) && (input == 7)))) {
printf("POINT: 770\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 771\n");

    } 
 if((a365147679 == 9 && ((( cf==1  && a1851906186 == 32) && (input == 8)) && a1335229626 == 9))) {
printf("POINT: 772\n");
    	cf = 0;
    	a1335229626 = 10;
    	a1664587146 = 35 ;
    	a880660927 = 14; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm191(int input) {
printf("POINT: 773\n");

    if((a365147679 == 11 && (a1851906186 == 32 && ((input == 1) && (a1335229626 == 9 &&  cf==1 ))))) {
printf("POINT: 774\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 775\n");

    } 
 if((a365147679 == 11 && ((input == 3) && (a1851906186 == 32 && (a1335229626 == 9 &&  cf==1 ))))) {
printf("POINT: 776\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 2; 
    	 printf("%d\n", 23);  
printf("POINT: 777\n");

    } 
 if((a365147679 == 11 && (a1851906186 == 32 && (( cf==1  && (input == 4)) && a1335229626 == 9)))) {
printf("POINT: 778\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
printf("POINT: 779\n");

    } 
 if(((a1335229626 == 9 && ((a1851906186 == 32 &&  cf==1 ) && a365147679 == 11)) && (input == 7))) {
printf("POINT: 780\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 15; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm192(int input) {
printf("POINT: 781\n");

    if((a1851906186 == 32 && ((a365147679 == 13 && ( cf==1  && a1335229626 == 9)) && (input == 1)))) {
printf("POINT: 782\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 9;
    	a757401042 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 783\n");

    } 
 if((a1335229626 == 9 && (((input == 10) && (a1851906186 == 32 &&  cf==1 )) && a365147679 == 13))) {
printf("POINT: 784\n");
    	cf = 0;
    	a1851906186 = 33 ;
    	a1383458586 = 4; 
    	 printf("%d\n", 22);  
printf("POINT: 785\n");

    } 
 if((a1851906186 == 32 && (((input == 11) && (a365147679 == 13 &&  cf==1 )) && a1335229626 == 9))) {
printf("POINT: 786\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 10;
    	a866603139 = 8; 
    	 printf("%d\n", 20);  
printf("POINT: 787\n");

    } 
 if((((input == 13) && (( cf==1  && a365147679 == 13) && a1335229626 == 9)) && a1851906186 == 32)) {
printf("POINT: 788\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 8;
    	a1746137894 = 14; 
    	 printf("%d\n", 19);  
printf("POINT: 789\n");

    } 
 if((a365147679 == 13 && (a1335229626 == 9 && (( cf==1  && a1851906186 == 32) && (input == 8))))) {
printf("POINT: 790\n");
    	cf = 0;
    	a1851906186 = 34 ;
    	a598251408 = 35 ; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm27(int input) {
printf("POINT: 791\n");

    if(( cf==1  && a365147679 == 9)) {
printf("POINT: 792\n");
    	calculate_outputm189(input);
    } 
printf("POINT: 793\n");

    if((a365147679 == 11 &&  cf==1 )) {
printf("POINT: 794\n");
    	calculate_outputm191(input);
    } 
printf("POINT: 795\n");

    if((a365147679 == 13 &&  cf==1 )) {
printf("POINT: 796\n");
    	calculate_outputm192(input);
    } 
}
 void calculate_outputm196(int input) {
printf("POINT: 797\n");

    if(((a1383458586 == 4 && (( cf==1  && a1335229626 == 9) && a1851906186 == 33)) && (input == 4))) {
printf("POINT: 798\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 7;
    	a940472710 = 13; 
    	 printf("%d\n", 18);  
printf("POINT: 799\n");

    } 
 if((a1335229626 == 9 && ((a1383458586 == 4 && ( cf==1  && (input == 10))) && a1851906186 == 33))) {
printf("POINT: 800\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 3; 
    	 printf("%d\n", 26);  
printf("POINT: 801\n");

    } 
 if((a1335229626 == 9 && ((input == 15) && (a1383458586 == 4 && (a1851906186 == 33 &&  cf==1 ))))) {
printf("POINT: 802\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 15; 
    	 printf("%d\n", 17);  
printf("POINT: 803\n");

    } 
 if(((a1335229626 == 9 && ((input == 5) && (a1383458586 == 4 &&  cf==1 ))) && a1851906186 == 33)) {
printf("POINT: 804\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 13;
    	a1249410904 = 10; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm197(int input) {
printf("POINT: 805\n");

    if((a1383458586 == 6 && ((( cf==1  && a1335229626 == 9) && a1851906186 == 33) && (input == 15)))) {
printf("POINT: 806\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 11; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm198(int input) {
printf("POINT: 807\n");

    if(((a1383458586 == 7 && (( cf==1  && a1851906186 == 33) && (input == 3))) && a1335229626 == 9)) {
printf("POINT: 808\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 35 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 16);  
printf("POINT: 809\n");

    } 
 if(((input == 6) && ((a1851906186 == 33 && ( cf==1  && a1383458586 == 7)) && a1335229626 == 9))) {
printf("POINT: 810\n");
    	cf = 0;
    	a1750379405 = 36 ;
    	a1335229626 = 11;
    	a269427955 = 14; 
    	 printf("%d\n", 21);  
printf("POINT: 811\n");

    } 
 if((a1383458586 == 7 && (((input == 7) && ( cf==1  && a1851906186 == 33)) && a1335229626 == 9))) {
printf("POINT: 812\n");
    	cf = 0;
    	a1851906186 = 35 ;
    	a1149219151 = 32 ; 
    	 printf("%d\n", 21);  
printf("POINT: 813\n");

    } 
 if((((input == 13) && ((a1851906186 == 33 &&  cf==1 ) && a1383458586 == 7)) && a1335229626 == 9)) {
printf("POINT: 814\n");
    	cf = 0;
    	a950417444 = 12;
    	a1335229626 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm199(int input) {
printf("POINT: 815\n");

    if((a1851906186 == 33 && (((a1383458586 == 9 &&  cf==1 ) && (input == 10)) && a1335229626 == 9))) {
printf("POINT: 816\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 9;
    	a1237428760 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm28(int input) {
printf("POINT: 817\n");

    if((a1383458586 == 4 &&  cf==1 )) {
printf("POINT: 818\n");
    	calculate_outputm196(input);
    } 
printf("POINT: 819\n");

    if(( cf==1  && a1383458586 == 6)) {
printf("POINT: 820\n");
    	calculate_outputm197(input);
    } 
printf("POINT: 821\n");

    if(( cf==1  && a1383458586 == 7)) {
printf("POINT: 822\n");
    	calculate_outputm198(input);
    } 
printf("POINT: 823\n");

    if((a1383458586 == 9 &&  cf==1 )) {
printf("POINT: 824\n");
    	calculate_outputm199(input);
    } 
}
 void calculate_outputm200(int input) {
printf("POINT: 825\n");

    if(((a1851906186 == 34 && (a598251408 == 32 && ((input == 7) &&  cf==1 ))) && a1335229626 == 9)) {
printf("POINT: 826\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 9;
    	a565249046 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 827\n");

    } 
 if(((((a598251408 == 32 &&  cf==1 ) && (input == 8)) && a1851906186 == 34) && a1335229626 == 9)) {
printf("POINT: 828\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 15;
    	a1736640332 = 9; 
    	 printf("%d\n", 26);  
printf("POINT: 829\n");

    } 
 if((a1335229626 == 9 && (((a598251408 == 32 &&  cf==1 ) && (input == 13)) && a1851906186 == 34))) {
printf("POINT: 830\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 13;
    	a1249410904 = 5; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm201(int input) {
printf("POINT: 831\n");

    if((a598251408 == 33 && ((((input == 3) &&  cf==1 ) && a1851906186 == 34) && a1335229626 == 9))) {
printf("POINT: 832\n");
    	cf = 0;
    	a338143956 = 32 ;
    	a1335229626 = 11;
    	a269427955 = 12; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm204(int input) {
printf("POINT: 833\n");

    if((a1335229626 == 9 && (a598251408 == 36 && ((a1851906186 == 34 &&  cf==1 ) && (input == 3))))) {
printf("POINT: 834\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 11; 
    	 printf("%d\n", 19);  
printf("POINT: 835\n");

    } 
 if((a598251408 == 36 && (a1335229626 == 9 && (( cf==1  && (input == 12)) && a1851906186 == 34)))) {
printf("POINT: 836\n");
    	cf = 0;
    	a950417444 = 13;
    	a1335229626 = 12;
    	a962095080 = 3; 
    	 printf("%d\n", 17);  
printf("POINT: 837\n");

    } 
 if(((((input == 6) && ( cf==1  && a598251408 == 36)) && a1851906186 == 34) && a1335229626 == 9)) {
printf("POINT: 838\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 13; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm29(int input) {
printf("POINT: 839\n");

    if((a598251408 == 32 &&  cf==1 )) {
printf("POINT: 840\n");
    	calculate_outputm200(input);
    } 
printf("POINT: 841\n");

    if(( cf==1  && a598251408 == 33)) {
printf("POINT: 842\n");
    	calculate_outputm201(input);
    } 
printf("POINT: 843\n");

    if((a598251408 == 36 &&  cf==1 )) {
printf("POINT: 844\n");
    	calculate_outputm204(input);
    } 
}
 void calculate_outputm205(int input) {
printf("POINT: 845\n");

    if(((a1335229626 == 9 && (( cf==1  && a1851906186 == 35) && a1149219151 == 32)) && (input == 4))) {
printf("POINT: 846\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 847\n");

    } 
 if((a1335229626 == 9 && ((input == 7) && (( cf==1  && a1851906186 == 35) && a1149219151 == 32)))) {
printf("POINT: 848\n");
    	cf = 0;
    	a1851906186 = 33 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 19);  
printf("POINT: 849\n");

    } 
 if((a1335229626 == 9 && ((a1851906186 == 35 && ((input == 8) &&  cf==1 )) && a1149219151 == 32))) {
printf("POINT: 850\n");
    	cf = 0;
    	a1851906186 = 33 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm206(int input) {
printf("POINT: 851\n");

    if((a1851906186 == 35 && (((a1335229626 == 9 &&  cf==1 ) && a1149219151 == 33) && (input == 3)))) {
printf("POINT: 852\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 6; 
    	 printf("%d\n", 24);  
printf("POINT: 853\n");

    } 
 if((a1149219151 == 33 && (((input == 5) && (a1335229626 == 9 &&  cf==1 )) && a1851906186 == 35))) {
printf("POINT: 854\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 7; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm207(int input) {
printf("POINT: 855\n");

    if(((input == 11) && (a1851906186 == 35 && (( cf==1  && a1335229626 == 9) && a1149219151 == 35)))) {
printf("POINT: 856\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 34 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 16);  
printf("POINT: 857\n");

    } 
 if((((((input == 15) &&  cf==1 ) && a1335229626 == 9) && a1149219151 == 35) && a1851906186 == 35)) {
printf("POINT: 858\n");
    	cf = 0;
    	a950417444 = 10;
    	a1335229626 = 12;
    	a1760493561 = 11; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm208(int input) {
printf("POINT: 859\n");

    if(((a1851906186 == 35 && (a1149219151 == 36 && (a1335229626 == 9 &&  cf==1 ))) && (input == 1))) {
printf("POINT: 860\n");
    	cf = 0;
    	a1478065937 = 32 ;
    	a1335229626 = 12;
    	a950417444 = 7; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm30(int input) {
printf("POINT: 861\n");

    if(( cf==1  && a1149219151 == 32)) {
printf("POINT: 862\n");
    	calculate_outputm205(input);
    } 
printf("POINT: 863\n");

    if((a1149219151 == 33 &&  cf==1 )) {
printf("POINT: 864\n");
    	calculate_outputm206(input);
    } 
printf("POINT: 865\n");

    if(( cf==1  && a1149219151 == 35)) {
printf("POINT: 866\n");
    	calculate_outputm207(input);
    } 
printf("POINT: 867\n");

    if(( cf==1  && a1149219151 == 36)) {
printf("POINT: 868\n");
    	calculate_outputm208(input);
    } 
}
 void calculate_outputm209(int input) {
printf("POINT: 869\n");

    if(((input == 3) && ((a1851906186 == 36 && ( cf==1  && a1335229626 == 9)) && a2015844410 == 6))) {
printf("POINT: 870\n");
    	cf = 0;
    	a1750379405 = 36 ;
    	a1335229626 = 11;
    	a269427955 = 14; 
    	 printf("%d\n", 17);  
printf("POINT: 871\n");

    } 
 if((a1335229626 == 9 && ((input == 10) && (( cf==1  && a1851906186 == 36) && a2015844410 == 6)))) {
printf("POINT: 872\n");
    	cf = 0;
    	a1851906186 = 32 ;
    	a365147679 = 11; 
    	 printf("%d\n", 22);  
printf("POINT: 873\n");

    } 
 if((((input == 15) && (a2015844410 == 6 && ( cf==1  && a1335229626 == 9))) && a1851906186 == 36)) {
printf("POINT: 874\n");
    	cf = 0;
    	a338143956 = 35 ;
    	a1335229626 = 11;
    	a269427955 = 12; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm212(int input) {
printf("POINT: 875\n");

    if((a1335229626 == 9 && ((a2015844410 == 9 && ((input == 1) &&  cf==1 )) && a1851906186 == 36))) {
printf("POINT: 876\n");
    	cf = 0;
    	a1510817746 = 13;
    	a1335229626 = 7;
    	a932751092 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 877\n");

    } 
 if(((a1851906186 == 36 && ((a2015844410 == 9 &&  cf==1 ) && a1335229626 == 9)) && (input == 2))) {
printf("POINT: 878\n");
    	cf = 0;
    	a384913899 = 34 ;
    	a10419264 = 32 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 879\n");

    } 
 if((a1851906186 == 36 && ((a1335229626 == 9 && ((input == 7) &&  cf==1 )) && a2015844410 == 9))) {
printf("POINT: 880\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 881\n");

    } 
 if((a1851906186 == 36 && ((input == 15) && (a2015844410 == 9 && ( cf==1  && a1335229626 == 9))))) {
printf("POINT: 882\n");
    	cf = 0;
    	a1510817746 = 8;
    	a1335229626 = 7;
    	a782039646 = 13; 
    	 printf("%d\n", 20);  
printf("POINT: 883\n");

    } 
 if((a1851906186 == 36 && ((( cf==1  && a2015844410 == 9) && (input == 13)) && a1335229626 == 9))) {
printf("POINT: 884\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 15;
    	a1736640332 = 6; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm214(int input) {
printf("POINT: 885\n");

    if(((input == 2) && (a2015844410 == 11 && (( cf==1  && a1335229626 == 9) && a1851906186 == 36)))) {
printf("POINT: 886\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm215(int input) {
printf("POINT: 887\n");

    if((((a1335229626 == 9 && ( cf==1  && (input == 10))) && a1851906186 == 36) && a2015844410 == 12)) {
printf("POINT: 888\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 2;
    	a324926224 = 3; 
    	 printf("%d\n", 16);  
printf("POINT: 889\n");

    } 
 if((a1335229626 == 9 && (((a2015844410 == 12 &&  cf==1 ) && (input == 15)) && a1851906186 == 36))) {
printf("POINT: 890\n");
    	cf = 0;
    	a1851906186 = 34 ;
    	a598251408 = 33 ; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm216(int input) {
printf("POINT: 891\n");

    if(((input == 3) && (a2015844410 == 13 && ((a1851906186 == 36 &&  cf==1 ) && a1335229626 == 9)))) {
printf("POINT: 892\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 893\n");

    } 
 if((((( cf==1  && a2015844410 == 13) && a1335229626 == 9) && (input == 8)) && a1851906186 == 36)) {
printf("POINT: 894\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
printf("POINT: 895\n");

    } 
 if(((input == 15) && ((a2015844410 == 13 && (a1851906186 == 36 &&  cf==1 )) && a1335229626 == 9))) {
printf("POINT: 896\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm31(int input) {
printf("POINT: 897\n");

    if(( cf==1  && a2015844410 == 6)) {
printf("POINT: 898\n");
    	calculate_outputm209(input);
    } 
printf("POINT: 899\n");

    if(( cf==1  && a2015844410 == 9)) {
printf("POINT: 900\n");
    	calculate_outputm212(input);
    } 
printf("POINT: 901\n");

    if((a2015844410 == 11 &&  cf==1 )) {
printf("POINT: 902\n");
    	calculate_outputm214(input);
    } 
printf("POINT: 903\n");

    if(( cf==1  && a2015844410 == 12)) {
printf("POINT: 904\n");
    	calculate_outputm215(input);
    } 
printf("POINT: 905\n");

    if(( cf==1  && a2015844410 == 13)) {
printf("POINT: 906\n");
    	calculate_outputm216(input);
    } 
}
 void calculate_outputm219(int input) {
printf("POINT: 907\n");

    if((a2121950185 == 35 && (a880660927 == 9 && (( cf==1  && a1335229626 == 10) && (input == 3))))) {
printf("POINT: 908\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 909\n");

    } 
 if((a880660927 == 9 && ((a1335229626 == 10 && (a2121950185 == 35 &&  cf==1 )) && (input == 7)))) {
printf("POINT: 910\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 911\n");

    } 
 if((((input == 10) && ((a1335229626 == 10 &&  cf==1 ) && a2121950185 == 35)) && a880660927 == 9)) {
printf("POINT: 912\n");
    	cf = 0;
    	a384913899 = 34 ;
    	a10419264 = 32 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 913\n");

    } 
 if((a1335229626 == 10 && (a2121950185 == 35 && (a880660927 == 9 && ( cf==1  && (input == 12)))))) {
printf("POINT: 914\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm220(int input) {
printf("POINT: 915\n");

    if((((input == 2) && ((a1335229626 == 10 &&  cf==1 ) && a880660927 == 9)) && a2121950185 == 36)) {
printf("POINT: 916\n");
    	cf = 0;
    	a1851906186 = 32 ;
    	a1335229626 = 9;
    	a365147679 = 11; 
    	 printf("%d\n", 19);  
printf("POINT: 917\n");

    } 
 if((((( cf==1  && a1335229626 == 10) && a880660927 == 9) && a2121950185 == 36) && (input == 7))) {
printf("POINT: 918\n");
    	cf = 0;
    	a880660927 = 13;
    	a1249410904 = 5; 
    	 printf("%d\n", 17);  
printf("POINT: 919\n");

    } 
 if(((input == 11) && (a1335229626 == 10 && (a880660927 == 9 && (a2121950185 == 36 &&  cf==1 ))))) {
printf("POINT: 920\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 10; 
    	 printf("%d\n", 18);  
printf("POINT: 921\n");

    } 
 if((a1335229626 == 10 && (a2121950185 == 36 && (((input == 15) &&  cf==1 ) && a880660927 == 9)))) {
printf("POINT: 922\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm32(int input) {
printf("POINT: 923\n");

    if((a2121950185 == 35 &&  cf==1 )) {
printf("POINT: 924\n");
    	calculate_outputm219(input);
    } 
printf("POINT: 925\n");

    if((a2121950185 == 36 &&  cf==1 )) {
printf("POINT: 926\n");
    	calculate_outputm220(input);
    } 
}
 void calculate_outputm222(int input) {
printf("POINT: 927\n");

    if(((a200918022 == 8 && (a880660927 == 10 && ( cf==1  && a1335229626 == 10))) && (input == 1))) {
printf("POINT: 928\n");
    	cf = 0;
    	a1259748523 = 33 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 21);  
printf("POINT: 929\n");

    } 
 if((((input == 3) && (a200918022 == 8 && (a1335229626 == 10 &&  cf==1 ))) && a880660927 == 10)) {
printf("POINT: 930\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 10; 
    	 printf("%d\n", 16);  
printf("POINT: 931\n");

    } 
 if(((input == 6) && (((a1335229626 == 10 &&  cf==1 ) && a880660927 == 10) && a200918022 == 8))) {
printf("POINT: 932\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 12; 
    	 printf("%d\n", 22);  
printf("POINT: 933\n");

    } 
 if((a1335229626 == 10 && (((input == 10) && ( cf==1  && a200918022 == 8)) && a880660927 == 10))) {
printf("POINT: 934\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 11; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm224(int input) {
printf("POINT: 935\n");

    if((a1335229626 == 10 && ((a880660927 == 10 && ( cf==1  && a200918022 == 10)) && (input == 10)))) {
printf("POINT: 936\n");
    	cf = 0;
    	a2121950185 = 36 ;
    	a880660927 = 9; 
    	 printf("%d\n", 18);  
printf("POINT: 937\n");

    } 
 if(((((input == 11) && ( cf==1  && a1335229626 == 10)) && a200918022 == 10) && a880660927 == 10)) {
printf("POINT: 938\n");
    	cf = 0;
    	a2135239265 = 32 ;
    	a1335229626 = 12;
    	a950417444 = 11; 
    	 printf("%d\n", 16);  
printf("POINT: 939\n");

    } 
 if(((input == 13) && (a1335229626 == 10 && ((a200918022 == 10 &&  cf==1 ) && a880660927 == 10)))) {
printf("POINT: 940\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1132599179 = 34 ;
    	a1959734605 = 4; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm225(int input) {
printf("POINT: 941\n");

    if(((((input == 7) && ( cf==1  && a880660927 == 10)) && a1335229626 == 10) && a200918022 == 11)) {
printf("POINT: 942\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 11;
    	a1959734605 = 2; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm33(int input) {
printf("POINT: 943\n");

    if((a200918022 == 8 &&  cf==1 )) {
printf("POINT: 944\n");
    	calculate_outputm222(input);
    } 
printf("POINT: 945\n");

    if(( cf==1  && a200918022 == 10)) {
printf("POINT: 946\n");
    	calculate_outputm224(input);
    } 
printf("POINT: 947\n");

    if(( cf==1  && a200918022 == 11)) {
printf("POINT: 948\n");
    	calculate_outputm225(input);
    } 
}
 void calculate_outputm227(int input) {
printf("POINT: 949\n");

    if((((a1837110425 == 2 && ((input == 1) &&  cf==1 )) && a880660927 == 11) && a1335229626 == 10)) {
printf("POINT: 950\n");
    	cf = 0;
    	a950417444 = 12;
    	a1335229626 = 12;
    	a1255937088 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 951\n");

    } 
 if((((( cf==1  && a1837110425 == 2) && a1335229626 == 10) && a880660927 == 11) && (input == 11))) {
printf("POINT: 952\n");
    	cf = 0;
    	a1335229626 = 11;
    	a338143956 = 36 ;
    	a269427955 = 12; 
    	 printf("%d\n", 26);  
printf("POINT: 953\n");

    } 
 if(((input == 12) && (a1335229626 == 10 && (( cf==1  && a1837110425 == 2) && a880660927 == 11)))) {
printf("POINT: 954\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 3; 
    	 printf("%d\n", 18);  
printf("POINT: 955\n");

    } 
 if(((a880660927 == 11 && (((input == 13) &&  cf==1 ) && a1837110425 == 2)) && a1335229626 == 10)) {
printf("POINT: 956\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 13;
    	a1053530639 = 4; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm229(int input) {
printf("POINT: 957\n");

    if(((input == 1) && (a1335229626 == 10 && ((a880660927 == 11 &&  cf==1 ) && a1837110425 == 4)))) {
printf("POINT: 958\n");
    	cf = 0;
    	a1837110425 = 6; 
    	 printf("%d\n", 23);  
printf("POINT: 959\n");

    } 
 if((((a1837110425 == 4 && ((input == 15) &&  cf==1 )) && a880660927 == 11) && a1335229626 == 10)) {
printf("POINT: 960\n");
    	cf = 0;
    	a1959734605 = 8;
    	a1335229626 = 6;
    	a286009693 = 9; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm230(int input) {
printf("POINT: 961\n");

    if((a1837110425 == 5 && (a1335229626 == 10 && (a880660927 == 11 && ( cf==1  && (input == 8)))))) {
printf("POINT: 962\n");
    	cf = 0;
    	a2121950185 = 35 ;
    	a880660927 = 9; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm231(int input) {
printf("POINT: 963\n");

    if((((a880660927 == 11 && (a1335229626 == 10 &&  cf==1 )) && (input == 1)) && a1837110425 == 6)) {
printf("POINT: 964\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 10; 
    	 printf("%d\n", 19);  
printf("POINT: 965\n");

    } 
 if(((a880660927 == 11 && ((input == 2) && (a1335229626 == 10 &&  cf==1 ))) && a1837110425 == 6)) {
printf("POINT: 966\n");
    	cf = 0;
    	a1273086420 = 35 ;
    	a1335229626 = 8;
    	a1383458586 = 7; 
    	 printf("%d\n", 19);  
printf("POINT: 967\n");

    } 
 if(((a1837110425 == 6 && (a880660927 == 11 && ((input == 10) &&  cf==1 ))) && a1335229626 == 10)) {
printf("POINT: 968\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 8;
    	a1746137894 = 12; 
    	 printf("%d\n", 19);  
printf("POINT: 969\n");

    } 
 if(((((a1335229626 == 10 &&  cf==1 ) && (input == 15)) && a880660927 == 11) && a1837110425 == 6)) {
printf("POINT: 970\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 10; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm232(int input) {
printf("POINT: 971\n");

    if((a880660927 == 11 && ((a1335229626 == 10 && ( cf==1  && (input == 4))) && a1837110425 == 7))) {
printf("POINT: 972\n");
    	cf = 0;
    	a950417444 = 10;
    	a1335229626 = 12;
    	a1760493561 = 10; 
    	 printf("%d\n", 18);  
printf("POINT: 973\n");

    } 
 if((a1335229626 == 10 && ((input == 11) && (a1837110425 == 7 && (a880660927 == 11 &&  cf==1 ))))) {
printf("POINT: 974\n");
    	cf = 0;
    	a1273086420 = 36 ;
    	a1335229626 = 8;
    	a864013224 = 14; 
    	 printf("%d\n", 19);  
printf("POINT: 975\n");

    } 
 if(((input == 13) && ((( cf==1  && a1335229626 == 10) && a880660927 == 11) && a1837110425 == 7))) {
printf("POINT: 976\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 32 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 20);  
printf("POINT: 977\n");

    } 
 if(((a1335229626 == 10 && (a1837110425 == 7 && ((input == 15) &&  cf==1 ))) && a880660927 == 11)) {
printf("POINT: 978\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 34 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm34(int input) {
printf("POINT: 979\n");

    if(( cf==1  && a1837110425 == 2)) {
printf("POINT: 980\n");
    	calculate_outputm227(input);
    } 
printf("POINT: 981\n");

    if((a1837110425 == 4 &&  cf==1 )) {
printf("POINT: 982\n");
    	calculate_outputm229(input);
    } 
printf("POINT: 983\n");

    if((a1837110425 == 5 &&  cf==1 )) {
printf("POINT: 984\n");
    	calculate_outputm230(input);
    } 
printf("POINT: 985\n");

    if(( cf==1  && a1837110425 == 6)) {
printf("POINT: 986\n");
    	calculate_outputm231(input);
    } 
printf("POINT: 987\n");

    if(( cf==1  && a1837110425 == 7)) {
printf("POINT: 988\n");
    	calculate_outputm232(input);
    } 
}
 void calculate_outputm234(int input) {
printf("POINT: 989\n");

    if(((input == 7) && ((( cf==1  && a2045918669 == 4) && a880660927 == 12) && a1335229626 == 10))) {
printf("POINT: 990\n");
    	cf = 0;
    	a950417444 = 12;
    	a1335229626 = 12;
    	a1255937088 = 10; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm235(int input) {
printf("POINT: 991\n");

    if((a1335229626 == 10 && (a2045918669 == 8 && (( cf==1  && (input == 1)) && a880660927 == 12)))) {
printf("POINT: 992\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 993\n");

    } 
 if((((input == 2) && (a1335229626 == 10 && ( cf==1  && a880660927 == 12))) && a2045918669 == 8)) {
printf("POINT: 994\n");
    	cf = 0;
    	a1851906186 = 34 ;
    	a598251408 = 32 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 18);  
printf("POINT: 995\n");

    } 
 if((a2045918669 == 8 && (((a1335229626 == 10 &&  cf==1 ) && a880660927 == 12) && (input == 10)))) {
printf("POINT: 996\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 6;
    	a1210809645 = 13; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm35(int input) {
printf("POINT: 997\n");

    if((a2045918669 == 4 &&  cf==1 )) {
printf("POINT: 998\n");
    	calculate_outputm234(input);
    } 
printf("POINT: 999\n");

    if(( cf==1  && a2045918669 == 8)) {
printf("POINT: 1000\n");
    	calculate_outputm235(input);
    } 
}
 void calculate_outputm238(int input) {
printf("POINT: 1001\n");

    if((a880660927 == 13 && (((a1335229626 == 10 &&  cf==1 ) && (input == 3)) && a1249410904 == 5))) {
printf("POINT: 1002\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 4; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm240(int input) {
printf("POINT: 1003\n");

    if(((input == 1) && (a1335229626 == 10 && ((a880660927 == 13 &&  cf==1 ) && a1249410904 == 7)))) {
printf("POINT: 1004\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
printf("POINT: 1005\n");

    } 
 if((a1335229626 == 10 && (a880660927 == 13 && (((input == 8) &&  cf==1 ) && a1249410904 == 7)))) {
printf("POINT: 1006\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm241(int input) {
printf("POINT: 1007\n");

    if(((input == 1) && (((a1335229626 == 10 &&  cf==1 ) && a880660927 == 13) && a1249410904 == 8))) {
printf("POINT: 1008\n");
    	cf = 0;
    	a880642005 = 36 ;
    	a1273086420 = 33 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 20);  
printf("POINT: 1009\n");

    } 
 if(((input == 10) && ((a1249410904 == 8 && ( cf==1  && a1335229626 == 10)) && a880660927 == 13))) {
printf("POINT: 1010\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 25);  
printf("POINT: 1011\n");

    } 
 if((a1335229626 == 10 && (a1249410904 == 8 && (((input == 15) &&  cf==1 ) && a880660927 == 13)))) {
printf("POINT: 1012\n");
    	cf = 0;
    	a1664587146 = 35 ;
    	a880660927 = 14; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm243(int input) {
printf("POINT: 1013\n");

    if((((input == 2) && (a1335229626 == 10 && ( cf==1  && a880660927 == 13))) && a1249410904 == 11)) {
printf("POINT: 1014\n");
    	cf = 0;
    	a950417444 = 10;
    	a1335229626 = 12;
    	a1760493561 = 16; 
    	 printf("%d\n", 25);  
printf("POINT: 1015\n");

    } 
 if(((input == 3) && (a1335229626 == 10 && (( cf==1  && a1249410904 == 11) && a880660927 == 13)))) {
printf("POINT: 1016\n");
    	cf = 0;
    	a1478065937 = 35 ;
    	a1335229626 = 12;
    	a950417444 = 7; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm36(int input) {
printf("POINT: 1017\n");

    if(( cf==1  && a1249410904 == 5)) {
printf("POINT: 1018\n");
    	calculate_outputm238(input);
    } 
printf("POINT: 1019\n");

    if(( cf==1  && a1249410904 == 7)) {
printf("POINT: 1020\n");
    	calculate_outputm240(input);
    } 
printf("POINT: 1021\n");

    if(( cf==1  && a1249410904 == 8)) {
printf("POINT: 1022\n");
    	calculate_outputm241(input);
    } 
printf("POINT: 1023\n");

    if((a1249410904 == 11 &&  cf==1 )) {
printf("POINT: 1024\n");
    	calculate_outputm243(input);
    } 
}
 void calculate_outputm244(int input) {
printf("POINT: 1025\n");

    if((((a1335229626 == 10 && ( cf==1  && a880660927 == 14)) && (input == 3)) && a1664587146 == 32)) {
printf("POINT: 1026\n");
    	cf = 0;
    	a1273086420 = 36 ;
    	a1335229626 = 8;
    	a864013224 = 14; 
    	 printf("%d\n", 19);  
printf("POINT: 1027\n");

    } 
 if((a1664587146 == 32 && (a880660927 == 14 && (((input == 6) &&  cf==1 ) && a1335229626 == 10)))) {
printf("POINT: 1028\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 14; 
    	 printf("%d\n", 19);  
printf("POINT: 1029\n");

    } 
 if(((((input == 7) && (a1335229626 == 10 &&  cf==1 )) && a880660927 == 14) && a1664587146 == 32)) {
printf("POINT: 1030\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 10;
    	a1760493561 = 11; 
    	 printf("%d\n", 19);  
printf("POINT: 1031\n");

    } 
 if((((input == 15) && (a1664587146 == 32 && (a1335229626 == 10 &&  cf==1 ))) && a880660927 == 14)) {
printf("POINT: 1032\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 13; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm245(int input) {
printf("POINT: 1033\n");

    if(((((input == 10) && ( cf==1  && a1335229626 == 10)) && a880660927 == 14) && a1664587146 == 33)) {
printf("POINT: 1034\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 10; 
    	 printf("%d\n", 19);  
printf("POINT: 1035\n");

    } 
 if(((a880660927 == 14 && (( cf==1  && a1664587146 == 33) && (input == 11))) && a1335229626 == 10)) {
printf("POINT: 1036\n");
    	cf = 0;
    	a1335229626 = 6;
    	a1959734605 = 9;
    	a1250255157 = 12; 
    	 printf("%d\n", 19);  
printf("POINT: 1037\n");

    } 
 if(((a880660927 == 14 && (a1335229626 == 10 && (a1664587146 == 33 &&  cf==1 ))) && (input == 13))) {
printf("POINT: 1038\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 32 ;
    	a365147679 = 11; 
    	 printf("%d\n", 19);  
printf("POINT: 1039\n");

    } 
 if((a880660927 == 14 && (a1664587146 == 33 && (a1335229626 == 10 && ((input == 15) &&  cf==1 ))))) {
printf("POINT: 1040\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm247(int input) {
printf("POINT: 1041\n");

    if((a1335229626 == 10 && ((input == 2) && (a1664587146 == 35 && ( cf==1  && a880660927 == 14))))) {
printf("POINT: 1042\n");
    	cf = 0;
    	a1335229626 = 12;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 1043\n");

    } 
 if(((a880660927 == 14 && ((a1335229626 == 10 &&  cf==1 ) && a1664587146 == 35)) && (input == 4))) {
printf("POINT: 1044\n");
    	cf = 0;
    	 
    	 printf("%d\n", 21);  
printf("POINT: 1045\n");

    } 
 if((a880660927 == 14 && ((a1664587146 == 35 && (a1335229626 == 10 &&  cf==1 )) && (input == 8)))) {
printf("POINT: 1046\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 32 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 1047\n");

    } 
 if((a1335229626 == 10 && ((a880660927 == 14 && ( cf==1  && a1664587146 == 35)) && (input == 11)))) {
printf("POINT: 1048\n");
    	cf = 0;
    	a389949481 = 36 ;
    	a1335229626 = 12;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm248(int input) {
printf("POINT: 1049\n");

    if((a1664587146 == 36 && ((input == 12) && (a1335229626 == 10 && ( cf==1  && a880660927 == 14))))) {
printf("POINT: 1050\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 13; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm37(int input) {
printf("POINT: 1051\n");

    if((a1664587146 == 32 &&  cf==1 )) {
printf("POINT: 1052\n");
    	calculate_outputm244(input);
    } 
printf("POINT: 1053\n");

    if(( cf==1  && a1664587146 == 33)) {
printf("POINT: 1054\n");
    	calculate_outputm245(input);
    } 
printf("POINT: 1055\n");

    if(( cf==1  && a1664587146 == 35)) {
printf("POINT: 1056\n");
    	calculate_outputm247(input);
    } 
printf("POINT: 1057\n");

    if(( cf==1  && a1664587146 == 36)) {
printf("POINT: 1058\n");
    	calculate_outputm248(input);
    } 
}
 void calculate_outputm250(int input) {
printf("POINT: 1059\n");

    if(((input == 10) && (((a880660927 == 15 &&  cf==1 ) && a1736640332 == 9) && a1335229626 == 10))) {
printf("POINT: 1060\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm38(int input) {
printf("POINT: 1061\n");

    if(( cf==1  && a1736640332 == 9)) {
printf("POINT: 1062\n");
    	calculate_outputm250(input);
    } 
}
 void calculate_outputm251(int input) {
printf("POINT: 1063\n");

    if((((((input == 1) &&  cf==1 ) && a147402251 == 32) && a880660927 == 16) && a1335229626 == 10)) {
printf("POINT: 1064\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 9;
    	a757401042 = 6; 
    	 printf("%d\n", 16);  
printf("POINT: 1065\n");

    } 
 if(((a880660927 == 16 && ((a1335229626 == 10 &&  cf==1 ) && a147402251 == 32)) && (input == 8))) {
printf("POINT: 1066\n");
    	cf = 0;
    	a384913899 = 32 ;
    	a1335229626 = 5;
    	a1031697847 = 12; 
    	 printf("%d\n", 22);  
printf("POINT: 1067\n");

    } 
 if(((((a880660927 == 16 &&  cf==1 ) && (input == 7)) && a147402251 == 32) && a1335229626 == 10)) {
printf("POINT: 1068\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 32 ;
    	a1031697847 = 6; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm39(int input) {
printf("POINT: 1069\n");

    if((a147402251 == 32 &&  cf==1 )) {
printf("POINT: 1070\n");
    	calculate_outputm251(input);
    } 
}
 void calculate_outputm255(int input) {
printf("POINT: 1071\n");

    if((((input == 1) && (a1746137894 == 12 && ( cf==1  && a269427955 == 8))) && a1335229626 == 11)) {
printf("POINT: 1072\n");
    	cf = 0;
    	 
    	 printf("%d\n", 17);  
printf("POINT: 1073\n");

    } 
 if(((input == 2) && (((a269427955 == 8 &&  cf==1 ) && a1746137894 == 12) && a1335229626 == 11))) {
printf("POINT: 1074\n");
    	cf = 0;
    	 
    	 printf("%d\n", 26);  
printf("POINT: 1075\n");

    } 
 if((a269427955 == 8 && ((a1335229626 == 11 && ((input == 3) &&  cf==1 )) && a1746137894 == 12))) {
printf("POINT: 1076\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 6; 
    	 printf("%d\n", 23);  
printf("POINT: 1077\n");

    } 
 if((((((input == 8) &&  cf==1 ) && a269427955 == 8) && a1746137894 == 12) && a1335229626 == 11)) {
printf("POINT: 1078\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm257(int input) {
printf("POINT: 1079\n");

    if((a1335229626 == 11 && ((a1746137894 == 14 && ((input == 1) &&  cf==1 )) && a269427955 == 8))) {
printf("POINT: 1080\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 6;
    	a1438665870 = 7; 
    	 printf("%d\n", 21);  
printf("POINT: 1081\n");

    } 
 if((a1335229626 == 11 && (a269427955 == 8 && (( cf==1  && (input == 3)) && a1746137894 == 14)))) {
printf("POINT: 1082\n");
    	cf = 0;
    	a1498174835 = 32 ;
    	a1335229626 = 7;
    	a1510817746 = 12; 
    	 printf("%d\n", 17);  
printf("POINT: 1083\n");

    } 
 if((((a1746137894 == 14 && ( cf==1  && a269427955 == 8)) && (input == 4)) && a1335229626 == 11)) {
printf("POINT: 1084\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 11;
    	a1837110425 = 2; 
    	 printf("%d\n", 17);  
printf("POINT: 1085\n");

    } 
 if((((a269427955 == 8 && (a1746137894 == 14 &&  cf==1 )) && (input == 10)) && a1335229626 == 11)) {
printf("POINT: 1086\n");
    	cf = 0;
    	a1510817746 = 7;
    	a1335229626 = 7;
    	a940472710 = 10; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm259(int input) {
printf("POINT: 1087\n");

    if(((a1746137894 == 17 && (a269427955 == 8 && ( cf==1  && a1335229626 == 11))) && (input == 6))) {
printf("POINT: 1088\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm41(int input) {
printf("POINT: 1089\n");

    if((a1746137894 == 12 &&  cf==1 )) {
printf("POINT: 1090\n");
    	calculate_outputm255(input);
    } 
printf("POINT: 1091\n");

    if(( cf==1  && a1746137894 == 14)) {
printf("POINT: 1092\n");
    	calculate_outputm257(input);
    } 
printf("POINT: 1093\n");

    if(( cf==1  && a1746137894 == 17)) {
printf("POINT: 1094\n");
    	calculate_outputm259(input);
    } 
}
 void calculate_outputm262(int input) {
printf("POINT: 1095\n");

    if(((a757401042 == 6 && ((a269427955 == 9 &&  cf==1 ) && a1335229626 == 11)) && (input == 1))) {
printf("POINT: 1096\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 11;
    	a654409942 = 10; 
    	 printf("%d\n", 16);  
printf("POINT: 1097\n");

    } 
 if(((a269427955 == 9 && (a1335229626 == 11 && ((input == 5) &&  cf==1 ))) && a757401042 == 6)) {
printf("POINT: 1098\n");
    	cf = 0;
    	a1959734605 = 9;
    	a1335229626 = 6;
    	a1250255157 = 14; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm263(int input) {
printf("POINT: 1099\n");

    if(((((a1335229626 == 11 &&  cf==1 ) && a269427955 == 9) && (input == 4)) && a757401042 == 8)) {
printf("POINT: 1100\n");
    	cf = 0;
    	a307029135 = 35 ;
    	a1335229626 = 7;
    	a1510817746 = 14; 
    	 printf("%d\n", 16);  
printf("POINT: 1101\n");

    } 
 if(((input == 13) && ((a269427955 == 9 && ( cf==1  && a1335229626 == 11)) && a757401042 == 8))) {
printf("POINT: 1102\n");
    	cf = 0;
    	a1851906186 = 35 ;
    	a1149219151 = 36 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 24);  
printf("POINT: 1103\n");

    } 
 if(((a269427955 == 9 && ((a1335229626 == 11 &&  cf==1 ) && (input == 11))) && a757401042 == 8)) {
printf("POINT: 1104\n");
    	cf = 0;
    	a1959734605 = 3;
    	a1335229626 = 6;
    	a1210809645 = 10; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm42(int input) {
printf("POINT: 1105\n");

    if(( cf==1  && a757401042 == 6)) {
printf("POINT: 1106\n");
    	calculate_outputm262(input);
    } 
printf("POINT: 1107\n");

    if(( cf==1  && a757401042 == 8)) {
printf("POINT: 1108\n");
    	calculate_outputm263(input);
    } 
}
 void calculate_outputm264(int input) {
printf("POINT: 1109\n");

    if(((input == 1) && (a269427955 == 10 && (a113972147 == 33 && (a1335229626 == 11 &&  cf==1 ))))) {
printf("POINT: 1110\n");
    	cf = 0;
    	a269427955 = 8;
    	a1746137894 = 17; 
    	 printf("%d\n", 21);  
printf("POINT: 1111\n");

    } 
 if(((a269427955 == 10 && ((a1335229626 == 11 &&  cf==1 ) && (input == 3))) && a113972147 == 33)) {
printf("POINT: 1112\n");
    	cf = 0;
    	a1335229626 = 10;
    	a2121950185 = 35 ;
    	a880660927 = 9; 
    	 printf("%d\n", 21);  
printf("POINT: 1113\n");

    } 
 if(((input == 15) && (a113972147 == 33 && ((a269427955 == 10 &&  cf==1 ) && a1335229626 == 11)))) {
printf("POINT: 1114\n");
    	cf = 0;
    	a113972147 = 34 ; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm265(int input) {
printf("POINT: 1115\n");

    if(((a1335229626 == 11 && ((input == 15) && (a113972147 == 34 &&  cf==1 ))) && a269427955 == 10)) {
printf("POINT: 1116\n");
    	cf = 0;
    	a113972147 = 33 ; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm43(int input) {
printf("POINT: 1117\n");

    if((a113972147 == 33 &&  cf==1 )) {
printf("POINT: 1118\n");
    	calculate_outputm264(input);
    } 
printf("POINT: 1119\n");

    if(( cf==1  && a113972147 == 34)) {
printf("POINT: 1120\n");
    	calculate_outputm265(input);
    } 
}
 void calculate_outputm266(int input) {
printf("POINT: 1121\n");

    if((a1335229626 == 11 && ((((input == 15) &&  cf==1 ) && a1959734605 == 2) && a269427955 == 11))) {
printf("POINT: 1122\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1335229626 = 7;
    	a1237428760 = 6; 
    	 printf("%d\n", 21);  
printf("POINT: 1123\n");

    } 
 if((a1335229626 == 11 && ((input == 2) && (a1959734605 == 2 && (a269427955 == 11 &&  cf==1 ))))) {
printf("POINT: 1124\n");
    	cf = 0;
    	a384913899 = 33 ;
    	a307029135 = 36 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm267(int input) {
printf("POINT: 1125\n");

    if(((input == 3) && (((a1959734605 == 3 &&  cf==1 ) && a269427955 == 11) && a1335229626 == 11))) {
printf("POINT: 1126\n");
    	cf = 0;
    	a269427955 = 8;
    	a1746137894 = 12; 
    	 printf("%d\n", 23);  
printf("POINT: 1127\n");

    } 
 if(((((a1335229626 == 11 &&  cf==1 ) && a1959734605 == 3) && a269427955 == 11) && (input == 4))) {
printf("POINT: 1128\n");
    	cf = 0;
    	a269427955 = 8;
    	a1746137894 = 14; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm268(int input) {
printf("POINT: 1129\n");

    if((a1959734605 == 5 && (((input == 3) && ( cf==1  && a1335229626 == 11)) && a269427955 == 11))) {
printf("POINT: 1130\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 35 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm270(int input) {
printf("POINT: 1131\n");

    if((((a1335229626 == 11 && (a269427955 == 11 &&  cf==1 )) && (input == 6)) && a1959734605 == 7)) {
printf("POINT: 1132\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 10; 
    	 printf("%d\n", 25);  
printf("POINT: 1133\n");

    } 
 if((a269427955 == 11 && ((a1959734605 == 7 && ( cf==1  && a1335229626 == 11)) && (input == 13)))) {
printf("POINT: 1134\n");
    	cf = 0;
    	a1510817746 = 9;
    	a1335229626 = 7;
    	a1237428760 = 5; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm271(int input) {
printf("POINT: 1135\n");

    if((a1959734605 == 8 && ((input == 8) && (( cf==1  && a269427955 == 11) && a1335229626 == 11)))) {
printf("POINT: 1136\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 9;
    	a565249046 = 7; 
    	 printf("%d\n", 21);  
printf("POINT: 1137\n");

    } 
 if(((input == 13) && ((a1959734605 == 8 && ( cf==1  && a1335229626 == 11)) && a269427955 == 11))) {
printf("POINT: 1138\n");
    	cf = 0;
    	a338143956 = 32 ;
    	a269427955 = 12; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm272(int input) {
printf("POINT: 1139\n");

    if((a1335229626 == 11 && (((a1959734605 == 9 &&  cf==1 ) && (input == 8)) && a269427955 == 11))) {
printf("POINT: 1140\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 1141\n");

    } 
 if((((input == 10) && (( cf==1  && a269427955 == 11) && a1959734605 == 9)) && a1335229626 == 11)) {
printf("POINT: 1142\n");
    	cf = 0;
    	a10419264 = 32 ;
    	a384913899 = 34 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 1143\n");

    } 
 if(((a1335229626 == 11 && (((input == 11) &&  cf==1 ) && a269427955 == 11)) && a1959734605 == 9)) {
printf("POINT: 1144\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 1145\n");

    } 
 if((((a269427955 == 11 && ( cf==1  && (input == 13))) && a1335229626 == 11) && a1959734605 == 9)) {
printf("POINT: 1146\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm44(int input) {
printf("POINT: 1147\n");

    if((a1959734605 == 2 &&  cf==1 )) {
printf("POINT: 1148\n");
    	calculate_outputm266(input);
    } 
printf("POINT: 1149\n");

    if((a1959734605 == 3 &&  cf==1 )) {
printf("POINT: 1150\n");
    	calculate_outputm267(input);
    } 
printf("POINT: 1151\n");

    if((a1959734605 == 5 &&  cf==1 )) {
printf("POINT: 1152\n");
    	calculate_outputm268(input);
    } 
printf("POINT: 1153\n");

    if(( cf==1  && a1959734605 == 7)) {
printf("POINT: 1154\n");
    	calculate_outputm270(input);
    } 
printf("POINT: 1155\n");

    if(( cf==1  && a1959734605 == 8)) {
printf("POINT: 1156\n");
    	calculate_outputm271(input);
    } 
printf("POINT: 1157\n");

    if(( cf==1  && a1959734605 == 9)) {
printf("POINT: 1158\n");
    	calculate_outputm272(input);
    } 
}
 void calculate_outputm273(int input) {
printf("POINT: 1159\n");

    if((a338143956 == 32 && (a1335229626 == 11 && (((input == 11) &&  cf==1 ) && a269427955 == 12)))) {
printf("POINT: 1160\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 1161\n");

    } 
 if(((input == 13) && (a1335229626 == 11 && ((a338143956 == 32 &&  cf==1 ) && a269427955 == 12)))) {
printf("POINT: 1162\n");
    	cf = 0;
    	a269427955 = 11;
    	a1959734605 = 8; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm276(int input) {
printf("POINT: 1163\n");

    if(((((input == 1) && ( cf==1  && a1335229626 == 11)) && a269427955 == 12) && a338143956 == 35)) {
printf("POINT: 1164\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 9;
    	a565249046 = 6; 
    	 printf("%d\n", 21);  
printf("POINT: 1165\n");

    } 
 if(((input == 10) && (a1335229626 == 11 && (a269427955 == 12 && ( cf==1  && a338143956 == 35))))) {
printf("POINT: 1166\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 9;
    	a565249046 = 6; 
    	 printf("%d\n", 21);  
printf("POINT: 1167\n");

    } 
 if((((a269427955 == 12 && ( cf==1  && (input == 15))) && a338143956 == 35) && a1335229626 == 11)) {
printf("POINT: 1168\n");
    	cf = 0;
    	a1335229626 = 12;
    	a950417444 = 9;
    	a565249046 = 6; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm277(int input) {
printf("POINT: 1169\n");

    if(((a269427955 == 12 && (((input == 2) &&  cf==1 ) && a1335229626 == 11)) && a338143956 == 36)) {
printf("POINT: 1170\n");
    	cf = 0;
    	a269427955 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 21);  
printf("POINT: 1171\n");

    } 
 if(((((input == 8) && ( cf==1  && a1335229626 == 11)) && a338143956 == 36) && a269427955 == 12)) {
printf("POINT: 1172\n");
    	cf = 0;
    	a338143956 = 32 ; 
    	 printf("%d\n", 26);  
printf("POINT: 1173\n");

    } 
 if((((a338143956 == 36 && (a269427955 == 12 &&  cf==1 )) && (input == 10)) && a1335229626 == 11)) {
printf("POINT: 1174\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 34 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 18);  
printf("POINT: 1175\n");

    } 
 if((a269427955 == 12 && ((( cf==1  && (input == 12)) && a1335229626 == 11) && a338143956 == 36))) {
printf("POINT: 1176\n");
    	cf = 0;
    	a1498174835 = 34 ;
    	a1335229626 = 7;
    	a1510817746 = 12; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm45(int input) {
printf("POINT: 1177\n");

    if(( cf==1  && a338143956 == 32)) {
printf("POINT: 1178\n");
    	calculate_outputm273(input);
    } 
printf("POINT: 1179\n");

    if(( cf==1  && a338143956 == 35)) {
printf("POINT: 1180\n");
    	calculate_outputm276(input);
    } 
printf("POINT: 1181\n");

    if((a338143956 == 36 &&  cf==1 )) {
printf("POINT: 1182\n");
    	calculate_outputm277(input);
    } 
}
 void calculate_outputm278(int input) {
printf("POINT: 1183\n");

    if(((((a1053530639 == 4 &&  cf==1 ) && (input == 3)) && a1335229626 == 11) && a269427955 == 13)) {
printf("POINT: 1184\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 14; 
    	 printf("%d\n", 21);  
printf("POINT: 1185\n");

    } 
 if((a269427955 == 13 && ((input == 13) && (( cf==1  && a1053530639 == 4) && a1335229626 == 11)))) {
printf("POINT: 1186\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 36 ;
    	a2015844410 = 13; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm280(int input) {
printf("POINT: 1187\n");

    if((a269427955 == 13 && (a1053530639 == 7 && (( cf==1  && a1335229626 == 11) && (input == 3))))) {
printf("POINT: 1188\n");
    	cf = 0;
    	a950417444 = 12;
    	a1335229626 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 21);  
printf("POINT: 1189\n");

    } 
 if((((a269427955 == 13 && ((input == 10) &&  cf==1 )) && a1053530639 == 7) && a1335229626 == 11)) {
printf("POINT: 1190\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 34 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 24);  
printf("POINT: 1191\n");

    } 
 if(((a269427955 == 13 && ((input == 15) && (a1053530639 == 7 &&  cf==1 ))) && a1335229626 == 11)) {
printf("POINT: 1192\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 32 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 16);  
    } 
}
 void calculate_outputm282(int input) {
printf("POINT: 1193\n");

    if(((a1335229626 == 11 && (a269427955 == 13 && ((input == 2) &&  cf==1 ))) && a1053530639 == 10)) {
printf("POINT: 1194\n");
    	cf = 0;
    	a1335229626 = 5;
    	a384913899 = 35 ;
    	a583612627 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm46(int input) {
printf("POINT: 1195\n");

    if((a1053530639 == 4 &&  cf==1 )) {
printf("POINT: 1196\n");
    	calculate_outputm278(input);
    } 
printf("POINT: 1197\n");

    if(( cf==1  && a1053530639 == 7)) {
printf("POINT: 1198\n");
    	calculate_outputm280(input);
    } 
printf("POINT: 1199\n");

    if((a1053530639 == 10 &&  cf==1 )) {
printf("POINT: 1200\n");
    	calculate_outputm282(input);
    } 
}
 void calculate_outputm283(int input) {
printf("POINT: 1201\n");

    if(((((a1335229626 == 11 &&  cf==1 ) && a1750379405 == 35) && (input == 2)) && a269427955 == 14)) {
printf("POINT: 1202\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 9;
    	a1237428760 = 5; 
    	 printf("%d\n", 20);  
printf("POINT: 1203\n");

    } 
 if(((input == 6) && ((( cf==1  && a269427955 == 14) && a1335229626 == 11) && a1750379405 == 35))) {
printf("POINT: 1204\n");
    	cf = 0;
    	a1750379405 = 36 ; 
    	 printf("%d\n", 16);  
printf("POINT: 1205\n");

    } 
 if((a1335229626 == 11 && ((( cf==1  && a1750379405 == 35) && a269427955 == 14) && (input == 11)))) {
printf("POINT: 1206\n");
    	cf = 0;
    	a950417444 = 12;
    	a1335229626 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 20);  
printf("POINT: 1207\n");

    } 
 if(((a1335229626 == 11 && ((input == 12) && ( cf==1  && a269427955 == 14))) && a1750379405 == 35)) {
printf("POINT: 1208\n");
    	cf = 0;
    	a1273086420 = 35 ;
    	a1335229626 = 8;
    	a1383458586 = 6; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm284(int input) {
printf("POINT: 1209\n");

    if((((a1335229626 == 11 && ( cf==1  && a269427955 == 14)) && a1750379405 == 36) && (input == 7))) {
printf("POINT: 1210\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 33 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 19);  
printf("POINT: 1211\n");

    } 
 if((a269427955 == 14 && ((a1750379405 == 36 && ( cf==1  && a1335229626 == 11)) && (input == 8)))) {
printf("POINT: 1212\n");
    	cf = 0;
    	a950417444 = 6;
    	a1335229626 = 12;
    	a1438665870 = 6; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm47(int input) {
printf("POINT: 1213\n");

    if((a1750379405 == 35 &&  cf==1 )) {
printf("POINT: 1214\n");
    	calculate_outputm283(input);
    } 
printf("POINT: 1215\n");

    if((a1750379405 == 36 &&  cf==1 )) {
printf("POINT: 1216\n");
    	calculate_outputm284(input);
    } 
}
 void calculate_outputm285(int input) {
printf("POINT: 1217\n");

    if(((a1438665870 == 6 && (((input == 2) &&  cf==1 ) && a950417444 == 6)) && a1335229626 == 12)) {
printf("POINT: 1218\n");
    	cf = 0;
    	a147402251 = 32 ;
    	a1335229626 = 10;
    	a880660927 = 16; 
    	 printf("%d\n", 23);  
printf("POINT: 1219\n");

    } 
 if((((input == 10) && (a1335229626 == 12 && ( cf==1  && a950417444 == 6))) && a1438665870 == 6)) {
printf("POINT: 1220\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
printf("POINT: 1221\n");

    } 
 if((a1438665870 == 6 && ((a950417444 == 6 && ((input == 11) &&  cf==1 )) && a1335229626 == 12))) {
printf("POINT: 1222\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 2; 
    	 printf("%d\n", 23);  
printf("POINT: 1223\n");

    } 
 if(((((a1438665870 == 6 &&  cf==1 ) && a1335229626 == 12) && a950417444 == 6) && (input == 5))) {
printf("POINT: 1224\n");
    	cf = 0;
    	a384913899 = 33 ;
    	a307029135 = 32 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm286(int input) {
printf("POINT: 1225\n");

    if((a1438665870 == 7 && (a950417444 == 6 && (((input == 1) &&  cf==1 ) && a1335229626 == 12)))) {
printf("POINT: 1226\n");
    	cf = 0;
    	a269427955 = 13;
    	a1335229626 = 11;
    	a1053530639 = 10; 
    	 printf("%d\n", 16);  
printf("POINT: 1227\n");

    } 
 if((a1335229626 == 12 && (a1438665870 == 7 && ((a950417444 == 6 &&  cf==1 ) && (input == 6))))) {
printf("POINT: 1228\n");
    	cf = 0;
    	a1851906186 = 33 ;
    	a1335229626 = 9;
    	a1383458586 = 6; 
    	 printf("%d\n", 20);  
printf("POINT: 1229\n");

    } 
 if(((a1438665870 == 7 && ((a950417444 == 6 &&  cf==1 ) && (input == 12))) && a1335229626 == 12)) {
printf("POINT: 1230\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 11;
    	a1959734605 = 7; 
    	 printf("%d\n", 17);  
    } 
}
 void calculate_outputm288(int input) {
printf("POINT: 1231\n");

    if(((a950417444 == 6 && (a1335229626 == 12 && ((input == 2) &&  cf==1 ))) && a1438665870 == 11)) {
printf("POINT: 1232\n");
    	cf = 0;
    	a950417444 = 12;
    	a1255937088 = 8; 
    	 printf("%d\n", 22);  
printf("POINT: 1233\n");

    } 
 if((a1438665870 == 11 && ((( cf==1  && a1335229626 == 12) && (input == 12)) && a950417444 == 6))) {
printf("POINT: 1234\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 13; 
    	 printf("%d\n", 26);  
printf("POINT: 1235\n");

    } 
 if((a1438665870 == 11 && ((input == 13) && (a950417444 == 6 && ( cf==1  && a1335229626 == 12))))) {
printf("POINT: 1236\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 9;
    	a1237428760 = 5; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm289(int input) {
printf("POINT: 1237\n");

    if(((input == 11) && ((( cf==1  && a950417444 == 6) && a1438665870 == 13) && a1335229626 == 12))) {
printf("POINT: 1238\n");
    	cf = 0;
    	 
    	 printf("%d\n", 23);  
printf("POINT: 1239\n");

    } 
 if((((a1438665870 == 13 && ((input == 13) &&  cf==1 )) && a950417444 == 6) && a1335229626 == 12)) {
printf("POINT: 1240\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 32 ;
    	a1074841212 = 11; 
    	 printf("%d\n", 24);  
printf("POINT: 1241\n");

    } 
 if(((a1335229626 == 12 && (a1438665870 == 13 && ((input == 15) &&  cf==1 ))) && a950417444 == 6)) {
printf("POINT: 1242\n");
    	cf = 0;
    	 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm48(int input) {
printf("POINT: 1243\n");

    if(( cf==1  && a1438665870 == 6)) {
printf("POINT: 1244\n");
    	calculate_outputm285(input);
    } 
printf("POINT: 1245\n");

    if((a1438665870 == 7 &&  cf==1 )) {
printf("POINT: 1246\n");
    	calculate_outputm286(input);
    } 
printf("POINT: 1247\n");

    if(( cf==1  && a1438665870 == 11)) {
printf("POINT: 1248\n");
    	calculate_outputm288(input);
    } 
printf("POINT: 1249\n");

    if(( cf==1  && a1438665870 == 13)) {
printf("POINT: 1250\n");
    	calculate_outputm289(input);
    } 
}
 void calculate_outputm290(int input) {
printf("POINT: 1251\n");

    if(((input == 1) && (a1478065937 == 32 && ((a950417444 == 7 &&  cf==1 ) && a1335229626 == 12)))) {
printf("POINT: 1252\n");
    	cf = 0;
    	a1851906186 = 35 ;
    	a1149219151 = 32 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 21);  
printf("POINT: 1253\n");

    } 
 if((a950417444 == 7 && ((input == 4) && (a1335229626 == 12 && ( cf==1  && a1478065937 == 32))))) {
printf("POINT: 1254\n");
    	cf = 0;
    	a1602107789 = 32 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 16);  
printf("POINT: 1255\n");

    } 
 if(((a1335229626 == 12 && ((input == 6) && ( cf==1  && a950417444 == 7))) && a1478065937 == 32)) {
printf("POINT: 1256\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 34 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm291(int input) {
printf("POINT: 1257\n");

    if((((a1478065937 == 33 && ( cf==1  && a950417444 == 7)) && a1335229626 == 12) && (input == 8))) {
printf("POINT: 1258\n");
    	cf = 0;
    	a880642005 = 36 ;
    	a1273086420 = 33 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 16);  
printf("POINT: 1259\n");

    } 
 if(((a950417444 == 7 && (( cf==1  && (input == 15)) && a1478065937 == 33)) && a1335229626 == 12)) {
printf("POINT: 1260\n");
    	cf = 0;
    	a1498174835 = 34 ;
    	a1335229626 = 7;
    	a1510817746 = 12; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm49(int input) {
printf("POINT: 1261\n");

    if((a1478065937 == 32 &&  cf==1 )) {
printf("POINT: 1262\n");
    	calculate_outputm290(input);
    } 
printf("POINT: 1263\n");

    if(( cf==1  && a1478065937 == 33)) {
printf("POINT: 1264\n");
    	calculate_outputm291(input);
    } 
}
 void calculate_outputm294(int input) {
printf("POINT: 1265\n");

    if(((((a1335229626 == 12 &&  cf==1 ) && a950417444 == 8) && a389949481 == 32) && (input == 4))) {
printf("POINT: 1266\n");
    	cf = 0;
    	a1851906186 = 32 ;
    	a1335229626 = 9;
    	a365147679 = 11; 
    	 printf("%d\n", 23);  
printf("POINT: 1267\n");

    } 
 if((((( cf==1  && (input == 6)) && a389949481 == 32) && a1335229626 == 12) && a950417444 == 8)) {
printf("POINT: 1268\n");
    	cf = 0;
    	a1259748523 = 35 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 17);  
printf("POINT: 1269\n");

    } 
 if((((a950417444 == 8 && ((input == 8) &&  cf==1 )) && a389949481 == 32) && a1335229626 == 12)) {
printf("POINT: 1270\n");
    	cf = 0;
    	a1602107789 = 35 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 25);  
printf("POINT: 1271\n");

    } 
 if(((a1335229626 == 12 && (( cf==1  && (input == 13)) && a389949481 == 32)) && a950417444 == 8)) {
printf("POINT: 1272\n");
    	cf = 0;
    	a950417444 = 9;
    	a565249046 = 7; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm295(int input) {
printf("POINT: 1273\n");

    if(((((a389949481 == 34 &&  cf==1 ) && a1335229626 == 12) && (input == 10)) && a950417444 == 8)) {
printf("POINT: 1274\n");
    	cf = 0;
    	a950417444 = 10;
    	a1760493561 = 11; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm296(int input) {
printf("POINT: 1275\n");

    if(((a1335229626 == 12 && ((a389949481 == 35 &&  cf==1 ) && (input == 2))) && a950417444 == 8)) {
printf("POINT: 1276\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 12; 
    	 printf("%d\n", 24);  
printf("POINT: 1277\n");

    } 
 if((a950417444 == 8 && (a389949481 == 35 && (a1335229626 == 12 && ( cf==1  && (input == 7)))))) {
printf("POINT: 1278\n");
    	cf = 0;
    	a1273086420 = 34 ;
    	a1259748523 = 35 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 19);  
printf("POINT: 1279\n");

    } 
 if((a950417444 == 8 && (((a1335229626 == 12 &&  cf==1 ) && a389949481 == 35) && (input == 11)))) {
printf("POINT: 1280\n");
    	cf = 0;
    	a1273086420 = 35 ;
    	a1335229626 = 8;
    	a1383458586 = 7; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm297(int input) {
printf("POINT: 1281\n");

    if((((a389949481 == 36 && ( cf==1  && a1335229626 == 12)) && (input == 4)) && a950417444 == 8)) {
printf("POINT: 1282\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 7;
    	a940472710 = 11; 
    	 printf("%d\n", 20);  
printf("POINT: 1283\n");

    } 
 if(((a950417444 == 8 && (( cf==1  && (input == 6)) && a1335229626 == 12)) && a389949481 == 36)) {
printf("POINT: 1284\n");
    	cf = 0;
    	a1959734605 = 3;
    	a1335229626 = 6;
    	a1210809645 = 12; 
    	 printf("%d\n", 16);  
printf("POINT: 1285\n");

    } 
 if((a1335229626 == 12 && ((((input == 7) &&  cf==1 ) && a950417444 == 8) && a389949481 == 36))) {
printf("POINT: 1286\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 32 ;
    	a1074841212 = 11; 
    	 printf("%d\n", 24);  
printf("POINT: 1287\n");

    } 
 if((((input == 8) && ((a389949481 == 36 &&  cf==1 ) && a950417444 == 8)) && a1335229626 == 12)) {
printf("POINT: 1288\n");
    	cf = 0;
    	a880660927 = 10;
    	a1335229626 = 10;
    	a200918022 = 8; 
    	 printf("%d\n", 23);  
printf("POINT: 1289\n");

    } 
 if((((a1335229626 == 12 && (a950417444 == 8 &&  cf==1 )) && (input == 2)) && a389949481 == 36)) {
printf("POINT: 1290\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 11;
    	a654409942 = 11; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm50(int input) {
printf("POINT: 1291\n");

    if((a389949481 == 32 &&  cf==1 )) {
printf("POINT: 1292\n");
    	calculate_outputm294(input);
    } 
printf("POINT: 1293\n");

    if((a389949481 == 34 &&  cf==1 )) {
printf("POINT: 1294\n");
    	calculate_outputm295(input);
    } 
printf("POINT: 1295\n");

    if((a389949481 == 35 &&  cf==1 )) {
printf("POINT: 1296\n");
    	calculate_outputm296(input);
    } 
printf("POINT: 1297\n");

    if(( cf==1  && a389949481 == 36)) {
printf("POINT: 1298\n");
    	calculate_outputm297(input);
    } 
}
 void calculate_outputm298(int input) {
printf("POINT: 1299\n");

    if(((a1335229626 == 12 && (( cf==1  && a565249046 == 5) && a950417444 == 9)) && (input == 8))) {
printf("POINT: 1300\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 32 ;
    	a365147679 = 13; 
    	 printf("%d\n", 22);  
printf("POINT: 1301\n");

    } 
 if(((a1335229626 == 12 && (a950417444 == 9 && (a565249046 == 5 &&  cf==1 ))) && (input == 10))) {
printf("POINT: 1302\n");
    	cf = 0;
    	a880660927 = 13;
    	a1335229626 = 10;
    	a1249410904 = 11; 
    	 printf("%d\n", 24);  
printf("POINT: 1303\n");

    } 
 if((((a950417444 == 9 && (a565249046 == 5 &&  cf==1 )) && a1335229626 == 12) && (input == 15))) {
printf("POINT: 1304\n");
    	cf = 0;
    	a307029135 = 35 ;
    	a384913899 = 33 ;
    	a1335229626 = 5; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm299(int input) {
printf("POINT: 1305\n");

    if(((input == 1) && ((a950417444 == 9 && ( cf==1  && a565249046 == 6)) && a1335229626 == 12))) {
printf("POINT: 1306\n");
    	cf = 0;
    	a1335229626 = 11;
    	a269427955 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 1307\n");

    } 
 if((a1335229626 == 12 && (a950417444 == 9 && (( cf==1  && a565249046 == 6) && (input == 8))))) {
printf("POINT: 1308\n");
    	cf = 0;
    	a1335229626 = 11;
    	a338143956 = 35 ;
    	a269427955 = 12; 
    	 printf("%d\n", 25);  
printf("POINT: 1309\n");

    } 
 if((((( cf==1  && a1335229626 == 12) && a950417444 == 9) && a565249046 == 6) && (input == 13))) {
printf("POINT: 1310\n");
    	cf = 0;
    	a880660927 = 13;
    	a1335229626 = 10;
    	a1249410904 = 7; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm300(int input) {
printf("POINT: 1311\n");

    if(((a1335229626 == 12 && (a565249046 == 7 && ((input == 1) &&  cf==1 ))) && a950417444 == 9)) {
printf("POINT: 1312\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 11; 
    	 printf("%d\n", 16);  
printf("POINT: 1313\n");

    } 
 if(((a565249046 == 7 && (a950417444 == 9 && ( cf==1  && (input == 8)))) && a1335229626 == 12)) {
printf("POINT: 1314\n");
    	cf = 0;
    	 
    	 printf("%d\n", 21);  
printf("POINT: 1315\n");

    } 
 if(((input == 12) && (a950417444 == 9 && ((a565249046 == 7 &&  cf==1 ) && a1335229626 == 12)))) {
printf("POINT: 1316\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
printf("POINT: 1317\n");

    } 
 if((a950417444 == 9 && (((a1335229626 == 12 &&  cf==1 ) && a565249046 == 7) && (input == 15)))) {
printf("POINT: 1318\n");
    	cf = 0;
    	a1851906186 = 36 ;
    	a1335229626 = 9;
    	a2015844410 = 9; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm51(int input) {
printf("POINT: 1319\n");

    if((a565249046 == 5 &&  cf==1 )) {
printf("POINT: 1320\n");
    	calculate_outputm298(input);
    } 
printf("POINT: 1321\n");

    if(( cf==1  && a565249046 == 6)) {
printf("POINT: 1322\n");
    	calculate_outputm299(input);
    } 
printf("POINT: 1323\n");

    if(( cf==1  && a565249046 == 7)) {
printf("POINT: 1324\n");
    	calculate_outputm300(input);
    } 
}
 void calculate_outputm302(int input) {
printf("POINT: 1325\n");

    if((a1760493561 == 9 && ((a1335229626 == 12 && ( cf==1  && a950417444 == 10)) && (input == 4)))) {
printf("POINT: 1326\n");
    	cf = 0;
    	a1273086420 = 35 ;
    	a1335229626 = 8;
    	a1383458586 = 2; 
    	 printf("%d\n", 20);  
printf("POINT: 1327\n");

    } 
 if((((a1760493561 == 9 && ((input == 7) &&  cf==1 )) && a1335229626 == 12) && a950417444 == 10)) {
printf("POINT: 1328\n");
    	cf = 0;
    	a1510817746 = 8;
    	a1335229626 = 7;
    	a782039646 = 14; 
    	 printf("%d\n", 23);  
printf("POINT: 1329\n");

    } 
 if((a1760493561 == 9 && (((a1335229626 == 12 &&  cf==1 ) && a950417444 == 10) && (input == 12)))) {
printf("POINT: 1330\n");
    	cf = 0;
    	a1335229626 = 10;
    	a1664587146 = 32 ;
    	a880660927 = 14; 
    	 printf("%d\n", 26);  
printf("POINT: 1331\n");

    } 
 if((((a1335229626 == 12 && (a950417444 == 10 &&  cf==1 )) && a1760493561 == 9) && (input == 15))) {
printf("POINT: 1332\n");
    	cf = 0;
    	a1335229626 = 7;
    	a307029135 = 36 ;
    	a1510817746 = 14; 
    	 printf("%d\n", 25);  
    } 
}
 void calculate_outputm303(int input) {
printf("POINT: 1333\n");

    if(((input == 11) && (a1335229626 == 12 && ((a950417444 == 10 &&  cf==1 ) && a1760493561 == 10)))) {
printf("POINT: 1334\n");
    	cf = 0;
    	a389949481 = 36 ;
    	a950417444 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm304(int input) {
printf("POINT: 1335\n");

    if(((input == 2) && ((( cf==1  && a1760493561 == 11) && a1335229626 == 12) && a950417444 == 10))) {
printf("POINT: 1336\n");
    	cf = 0;
    	 
    	 printf("%d\n", 21);  
printf("POINT: 1337\n");

    } 
 if((a1335229626 == 12 && (a1760493561 == 11 && (a950417444 == 10 && ((input == 7) &&  cf==1 ))))) {
printf("POINT: 1338\n");
    	cf = 0;
    	a1510817746 = 13;
    	a1335229626 = 7;
    	a932751092 = 5; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm307(int input) {
printf("POINT: 1339\n");

    if(((((input == 4) && (a1760493561 == 15 &&  cf==1 )) && a1335229626 == 12) && a950417444 == 10)) {
printf("POINT: 1340\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 11;
    	a1837110425 = 7; 
    	 printf("%d\n", 23);  
printf("POINT: 1341\n");

    } 
 if(((input == 7) && (((a950417444 == 10 &&  cf==1 ) && a1335229626 == 12) && a1760493561 == 15))) {
printf("POINT: 1342\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 32 ;
    	a365147679 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 1343\n");

    } 
 if((((a1335229626 == 12 && (a950417444 == 10 &&  cf==1 )) && (input == 11)) && a1760493561 == 15)) {
printf("POINT: 1344\n");
    	cf = 0;
    	a269427955 = 13;
    	a1335229626 = 11;
    	a1053530639 = 7; 
    	 printf("%d\n", 23);  
    } 
}
 void calculate_outputm308(int input) {
printf("POINT: 1345\n");

    if((((a950417444 == 10 && ((input == 2) &&  cf==1 )) && a1335229626 == 12) && a1760493561 == 16)) {
printf("POINT: 1346\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1510817746 = 10;
    	a866603139 = 5; 
    	 printf("%d\n", 21);  
printf("POINT: 1347\n");

    } 
 if((((input == 3) && (a950417444 == 10 && (a1760493561 == 16 &&  cf==1 ))) && a1335229626 == 12)) {
printf("POINT: 1348\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 12;
    	a2045918669 = 8; 
    	 printf("%d\n", 20);  
printf("POINT: 1349\n");

    } 
 if((a1760493561 == 16 && ((( cf==1  && a950417444 == 10) && (input == 8)) && a1335229626 == 12))) {
printf("POINT: 1350\n");
    	cf = 0;
    	a1959734605 = 6;
    	a1335229626 = 6;
    	a1210809645 = 10; 
    	 printf("%d\n", 26);  
printf("POINT: 1351\n");

    } 
 if(((a950417444 == 10 && ((a1335229626 == 12 &&  cf==1 ) && (input == 10))) && a1760493561 == 16)) {
printf("POINT: 1352\n");
    	cf = 0;
    	a1510817746 = 11;
    	a1335229626 = 7;
    	a654409942 = 13; 
    	 printf("%d\n", 16);  
printf("POINT: 1353\n");

    } 
 if((a1335229626 == 12 && (a1760493561 == 16 && ((input == 1) && (a950417444 == 10 &&  cf==1 ))))) {
printf("POINT: 1354\n");
    	cf = 0;
    	a1335229626 = 7;
    	a1498174835 = 36 ;
    	a1510817746 = 12; 
    	 printf("%d\n", 24);  
    } 
}
 void calculate_outputm52(int input) {
printf("POINT: 1355\n");

    if(( cf==1  && a1760493561 == 9)) {
printf("POINT: 1356\n");
    	calculate_outputm302(input);
    } 
printf("POINT: 1357\n");

    if((a1760493561 == 10 &&  cf==1 )) {
printf("POINT: 1358\n");
    	calculate_outputm303(input);
    } 
printf("POINT: 1359\n");

    if((a1760493561 == 11 &&  cf==1 )) {
printf("POINT: 1360\n");
    	calculate_outputm304(input);
    } 
printf("POINT: 1361\n");

    if(( cf==1  && a1760493561 == 15)) {
printf("POINT: 1362\n");
    	calculate_outputm307(input);
    } 
printf("POINT: 1363\n");

    if(( cf==1  && a1760493561 == 16)) {
printf("POINT: 1364\n");
    	calculate_outputm308(input);
    } 
}
 void calculate_outputm309(int input) {
printf("POINT: 1365\n");

    if(((input == 2) && (a950417444 == 11 && (a1335229626 == 12 && (a2135239265 == 32 &&  cf==1 ))))) {
printf("POINT: 1366\n");
    	cf = 0;
    	a1602107789 = 32 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 21);  
printf("POINT: 1367\n");

    } 
 if((a2135239265 == 32 && ((( cf==1  && a950417444 == 11) && (input == 6)) && a1335229626 == 12))) {
printf("POINT: 1368\n");
    	cf = 0;
    	a269427955 = 11;
    	a1335229626 = 11;
    	a1959734605 = 9; 
    	 printf("%d\n", 20);  
printf("POINT: 1369\n");

    } 
 if(((a2135239265 == 32 && (((input == 12) &&  cf==1 ) && a950417444 == 11)) && a1335229626 == 12)) {
printf("POINT: 1370\n");
    	cf = 0;
    	a1335229626 = 10;
    	a1664587146 = 35 ;
    	a880660927 = 14; 
    	 printf("%d\n", 25);  
printf("POINT: 1371\n");

    } 
 if((((( cf==1  && a2135239265 == 32) && (input == 13)) && a950417444 == 11) && a1335229626 == 12)) {
printf("POINT: 1372\n");
    	cf = 0;
    	a1664587146 = 35 ;
    	a1335229626 = 10;
    	a880660927 = 14; 
    	 printf("%d\n", 21);  
    } 
}
 void calculate_outputm53(int input) {
printf("POINT: 1373\n");

    if(( cf==1  && a2135239265 == 32)) {
printf("POINT: 1374\n");
    	calculate_outputm309(input);
    } 
}
 void calculate_outputm314(int input) {
printf("POINT: 1375\n");

    if((((input == 1) && ((a1335229626 == 12 &&  cf==1 ) && a950417444 == 12)) && a1255937088 == 8)) {
printf("POINT: 1376\n");
    	cf = 0;
    	a1335229626 = 9;
    	a1851906186 = 33 ;
    	a1383458586 = 7; 
    	 printf("%d\n", 19);  
printf("POINT: 1377\n");

    } 
 if(((a950417444 == 12 && (( cf==1  && a1255937088 == 8) && (input == 2))) && a1335229626 == 12)) {
printf("POINT: 1378\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm315(int input) {
printf("POINT: 1379\n");

    if((((( cf==1  && (input == 3)) && a1255937088 == 10) && a1335229626 == 12) && a950417444 == 12)) {
printf("POINT: 1380\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 13;
    	a1249410904 = 5; 
    	 printf("%d\n", 19);  
printf("POINT: 1381\n");

    } 
 if((a1255937088 == 10 && ((a1335229626 == 12 && ( cf==1  && a950417444 == 12)) && (input == 8)))) {
printf("POINT: 1382\n");
    	cf = 0;
    	a1602107789 = 36 ;
    	a1335229626 = 6;
    	a1959734605 = 5; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm316(int input) {
printf("POINT: 1383\n");

    if((a950417444 == 12 && ((a1335229626 == 12 && ( cf==1  && (input == 3))) && a1255937088 == 11))) {
printf("POINT: 1384\n");
    	cf = 0;
    	a950417444 = 10;
    	a1760493561 = 11; 
    	 printf("%d\n", 17);  
printf("POINT: 1385\n");

    } 
 if((a1255937088 == 11 && (((a1335229626 == 12 &&  cf==1 ) && a950417444 == 12) && (input == 6)))) {
printf("POINT: 1386\n");
    	cf = 0;
    	a1259748523 = 33 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 23);  
printf("POINT: 1387\n");

    } 
 if(((a1255937088 == 11 && (a950417444 == 12 && ( cf==1  && a1335229626 == 12))) && (input == 10))) {
printf("POINT: 1388\n");
    	cf = 0;
    	a1273086420 = 35 ;
    	a1335229626 = 8;
    	a1383458586 = 7; 
    	 printf("%d\n", 22);  
    } 
}
 void calculate_outputm317(int input) {
printf("POINT: 1389\n");

    if((a1335229626 == 12 && (((input == 6) && (a1255937088 == 12 &&  cf==1 )) && a950417444 == 12))) {
printf("POINT: 1390\n");
    	cf = 0;
    	a269427955 = 8;
    	a1335229626 = 11;
    	a1746137894 = 12; 
    	 printf("%d\n", 18);  
printf("POINT: 1391\n");

    } 
 if((a1335229626 == 12 && ((( cf==1  && a950417444 == 12) && (input == 8)) && a1255937088 == 12))) {
printf("POINT: 1392\n");
    	cf = 0;
    	a950417444 = 10;
    	a1760493561 = 16; 
    	 printf("%d\n", 17);  
printf("POINT: 1393\n");

    } 
 if((a950417444 == 12 && ((( cf==1  && (input == 10)) && a1335229626 == 12) && a1255937088 == 12))) {
printf("POINT: 1394\n");
    	cf = 0;
    	a1149219151 = 32 ;
    	a1851906186 = 35 ;
    	a1335229626 = 9; 
    	 printf("%d\n", 24);  
printf("POINT: 1395\n");

    } 
 if((a950417444 == 12 && (a1335229626 == 12 && ((input == 13) && ( cf==1  && a1255937088 == 12))))) {
printf("POINT: 1396\n");
    	cf = 0;
    	a1335229626 = 11;
    	a338143956 = 32 ;
    	a269427955 = 12; 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm54(int input) {
printf("POINT: 1397\n");

    if((a1255937088 == 8 &&  cf==1 )) {
printf("POINT: 1398\n");
    	calculate_outputm314(input);
    } 
printf("POINT: 1399\n");

    if(( cf==1  && a1255937088 == 10)) {
printf("POINT: 1400\n");
    	calculate_outputm315(input);
    } 
printf("POINT: 1401\n");

    if((a1255937088 == 11 &&  cf==1 )) {
printf("POINT: 1402\n");
    	calculate_outputm316(input);
    } 
printf("POINT: 1403\n");

    if((a1255937088 == 12 &&  cf==1 )) {
printf("POINT: 1404\n");
    	calculate_outputm317(input);
    } 
}
 void calculate_outputm318(int input) {
printf("POINT: 1405\n");

    if(((a950417444 == 13 && (a962095080 == 3 && (a1335229626 == 12 &&  cf==1 ))) && (input == 3))) {
printf("POINT: 1406\n");
    	cf = 0;
    	a1510817746 = 10;
    	a1335229626 = 7;
    	a866603139 = 9; 
    	 printf("%d\n", 24);  
printf("POINT: 1407\n");

    } 
 if((a950417444 == 13 && (((input == 8) && (a962095080 == 3 &&  cf==1 )) && a1335229626 == 12))) {
printf("POINT: 1408\n");
    	cf = 0;
    	a1335229626 = 8;
    	a1273086420 = 36 ;
    	a864013224 = 13; 
    	 printf("%d\n", 18);  
printf("POINT: 1409\n");

    } 
 if(((a950417444 == 13 && ((input == 12) && (a962095080 == 3 &&  cf==1 ))) && a1335229626 == 12)) {
printf("POINT: 1410\n");
    	cf = 0;
    	a384913899 = 35 ;
    	a1335229626 = 5;
    	a583612627 = 13; 
    	 printf("%d\n", 18);  
    } 
}
 void calculate_outputm319(int input) {
printf("POINT: 1411\n");

    if((((( cf==1  && a962095080 == 5) && a950417444 == 13) && a1335229626 == 12) && (input == 10))) {
printf("POINT: 1412\n");
    	cf = 0;
    	a1335229626 = 10;
    	a880660927 = 15;
    	a1736640332 = 9; 
    	 printf("%d\n", 19);  
printf("POINT: 1413\n");

    } 
 if((((( cf==1  && a1335229626 == 12) && (input == 13)) && a950417444 == 13) && a962095080 == 5)) {
printf("POINT: 1414\n");
    	cf = 0;
    	a113972147 = 34 ;
    	a1335229626 = 11;
    	a269427955 = 10; 
    	 printf("%d\n", 19);  
    } 
}
 void calculate_outputm320(int input) {
printf("POINT: 1415\n");

    if(((a950417444 == 13 && (( cf==1  && (input == 2)) && a962095080 == 6)) && a1335229626 == 12)) {
printf("POINT: 1416\n");
    	cf = 0;
    	a880660927 = 13;
    	a1335229626 = 10;
    	a1249410904 = 11; 
    	 printf("%d\n", 24);  
printf("POINT: 1417\n");

    } 
 if(((((a1335229626 == 12 &&  cf==1 ) && a950417444 == 13) && a962095080 == 6) && (input == 8))) {
printf("POINT: 1418\n");
    	cf = 0;
    	 
    	 printf("%d\n", 20);  
    } 
}
 void calculate_outputm321(int input) {
printf("POINT: 1419\n");

    if(((((a962095080 == 7 &&  cf==1 ) && (input == 6)) && a950417444 == 13) && a1335229626 == 12)) {
printf("POINT: 1420\n");
    	cf = 0;
    	a1259748523 = 32 ;
    	a1273086420 = 34 ;
    	a1335229626 = 8; 
    	 printf("%d\n", 26);  
    } 
}
 void calculate_outputm55(int input) {
printf("POINT: 1421\n");

    if((a962095080 == 3 &&  cf==1 )) {
printf("POINT: 1422\n");
    	calculate_outputm318(input);
    } 
printf("POINT: 1423\n");

    if(( cf==1  && a962095080 == 5)) {
printf("POINT: 1424\n");
    	calculate_outputm319(input);
    } 
printf("POINT: 1425\n");

    if(( cf==1  && a962095080 == 6)) {
printf("POINT: 1426\n");
    	calculate_outputm320(input);
    } 
printf("POINT: 1427\n");

    if((a962095080 == 7 &&  cf==1 )) {
printf("POINT: 1428\n");
    	calculate_outputm321(input);
    } 
}

 void calculate_output(int input) {
        cf = 1;

printf("POINT: 1429\n");

    if((a1335229626 == 5 &&  cf==1 )) {
printf("POINT: 1430\n");
printf("POINT: 1431\n");

    	if(( cf==1  && a384913899 == 32)) {
printf("POINT: 1432\n");
    		calculate_outputm1(input);
    	} 
printf("POINT: 1433\n");

    	if((a384913899 == 33 &&  cf==1 )) {
printf("POINT: 1434\n");
    		calculate_outputm2(input);
    	} 
printf("POINT: 1435\n");

    	if(( cf==1  && a384913899 == 34)) {
printf("POINT: 1436\n");
    		calculate_outputm3(input);
    	} 
printf("POINT: 1437\n");

    	if(( cf==1  && a384913899 == 35)) {
printf("POINT: 1438\n");
    		calculate_outputm4(input);
    	} 
printf("POINT: 1439\n");

    	if(( cf==1  && a384913899 == 36)) {
printf("POINT: 1440\n");
    		calculate_outputm5(input);
    	} 
    } 
printf("POINT: 1441\n");

    if(( cf==1  && a1335229626 == 6)) {
printf("POINT: 1442\n");
printf("POINT: 1443\n");

    	if((a1959734605 == 2 &&  cf==1 )) {
printf("POINT: 1444\n");
    		calculate_outputm6(input);
    	} 
printf("POINT: 1445\n");

    	if(( cf==1  && a1959734605 == 3)) {
printf("POINT: 1446\n");
    		calculate_outputm7(input);
    	} 
printf("POINT: 1447\n");

    	if((a1959734605 == 4 &&  cf==1 )) {
printf("POINT: 1448\n");
    		calculate_outputm8(input);
    	} 
printf("POINT: 1449\n");

    	if((a1959734605 == 5 &&  cf==1 )) {
printf("POINT: 1450\n");
    		calculate_outputm9(input);
    	} 
printf("POINT: 1451\n");

    	if((a1959734605 == 6 &&  cf==1 )) {
printf("POINT: 1452\n");
    		calculate_outputm10(input);
    	} 
printf("POINT: 1453\n");

    	if(( cf==1  && a1959734605 == 7)) {
printf("POINT: 1454\n");
    		calculate_outputm11(input);
    	} 
printf("POINT: 1455\n");

    	if((a1959734605 == 8 &&  cf==1 )) {
printf("POINT: 1456\n");
    		calculate_outputm12(input);
    	} 
printf("POINT: 1457\n");

    	if((a1959734605 == 9 &&  cf==1 )) {
printf("POINT: 1458\n");
    		calculate_outputm13(input);
    	} 
    } 
printf("POINT: 1459\n");

    if((a1335229626 == 7 &&  cf==1 )) {
printf("POINT: 1460\n");
printf("POINT: 1461\n");

    	if(( cf==1  && a1510817746 == 7)) {
printf("POINT: 1462\n");
    		calculate_outputm14(input);
    	} 
printf("POINT: 1463\n");

    	if(( cf==1  && a1510817746 == 8)) {
printf("POINT: 1464\n");
    		calculate_outputm15(input);
    	} 
printf("POINT: 1465\n");

    	if((a1510817746 == 9 &&  cf==1 )) {
printf("POINT: 1466\n");
    		calculate_outputm16(input);
    	} 
printf("POINT: 1467\n");

    	if((a1510817746 == 10 &&  cf==1 )) {
printf("POINT: 1468\n");
    		calculate_outputm17(input);
    	} 
printf("POINT: 1469\n");

    	if((a1510817746 == 11 &&  cf==1 )) {
printf("POINT: 1470\n");
    		calculate_outputm18(input);
    	} 
printf("POINT: 1471\n");

    	if(( cf==1  && a1510817746 == 12)) {
printf("POINT: 1472\n");
    		calculate_outputm19(input);
    	} 
printf("POINT: 1473\n");

    	if(( cf==1  && a1510817746 == 13)) {
printf("POINT: 1474\n");
    		calculate_outputm20(input);
    	} 
printf("POINT: 1475\n");

    	if((a1510817746 == 14 &&  cf==1 )) {
printf("POINT: 1476\n");
    		calculate_outputm21(input);
    	} 
    } 
printf("POINT: 1477\n");

    if(( cf==1  && a1335229626 == 8)) {
printf("POINT: 1478\n");
printf("POINT: 1479\n");

    	if(( cf==1  && a1273086420 == 32)) {
printf("POINT: 1480\n");
    		calculate_outputm22(input);
    	} 
printf("POINT: 1481\n");

    	if(( cf==1  && a1273086420 == 33)) {
printf("POINT: 1482\n");
    		calculate_outputm23(input);
    	} 
printf("POINT: 1483\n");

    	if(( cf==1  && a1273086420 == 34)) {
printf("POINT: 1484\n");
    		calculate_outputm24(input);
    	} 
printf("POINT: 1485\n");

    	if(( cf==1  && a1273086420 == 35)) {
printf("POINT: 1486\n");
    		calculate_outputm25(input);
    	} 
printf("POINT: 1487\n");

    	if(( cf==1  && a1273086420 == 36)) {
printf("POINT: 1488\n");
    		calculate_outputm26(input);
    	} 
    } 
printf("POINT: 1489\n");

    if((a1335229626 == 9 &&  cf==1 )) {
printf("POINT: 1490\n");
printf("POINT: 1491\n");

    	if((a1851906186 == 32 &&  cf==1 )) {
printf("POINT: 1492\n");
    		calculate_outputm27(input);
    	} 
printf("POINT: 1493\n");

    	if((a1851906186 == 33 &&  cf==1 )) {
printf("POINT: 1494\n");
    		calculate_outputm28(input);
    	} 
printf("POINT: 1495\n");

    	if((a1851906186 == 34 &&  cf==1 )) {
printf("POINT: 1496\n");
    		calculate_outputm29(input);
    	} 
printf("POINT: 1497\n");

    	if(( cf==1  && a1851906186 == 35)) {
printf("POINT: 1498\n");
    		calculate_outputm30(input);
    	} 
printf("POINT: 1499\n");

    	if(( cf==1  && a1851906186 == 36)) {
printf("POINT: 1500\n");
    		calculate_outputm31(input);
    	} 
    } 
printf("POINT: 1501\n");

    if((a1335229626 == 10 &&  cf==1 )) {
printf("POINT: 1502\n");
printf("POINT: 1503\n");

    	if((a880660927 == 9 &&  cf==1 )) {
printf("POINT: 1504\n");
    		calculate_outputm32(input);
    	} 
printf("POINT: 1505\n");

    	if((a880660927 == 10 &&  cf==1 )) {
printf("POINT: 1506\n");
    		calculate_outputm33(input);
    	} 
printf("POINT: 1507\n");

    	if((a880660927 == 11 &&  cf==1 )) {
printf("POINT: 1508\n");
    		calculate_outputm34(input);
    	} 
printf("POINT: 1509\n");

    	if(( cf==1  && a880660927 == 12)) {
printf("POINT: 1510\n");
    		calculate_outputm35(input);
    	} 
printf("POINT: 1511\n");

    	if((a880660927 == 13 &&  cf==1 )) {
printf("POINT: 1512\n");
    		calculate_outputm36(input);
    	} 
printf("POINT: 1513\n");

    	if((a880660927 == 14 &&  cf==1 )) {
printf("POINT: 1514\n");
    		calculate_outputm37(input);
    	} 
printf("POINT: 1515\n");

    	if((a880660927 == 15 &&  cf==1 )) {
printf("POINT: 1516\n");
    		calculate_outputm38(input);
    	} 
printf("POINT: 1517\n");

    	if(( cf==1  && a880660927 == 16)) {
printf("POINT: 1518\n");
    		calculate_outputm39(input);
    	} 
    } 
printf("POINT: 1519\n");

    if((a1335229626 == 11 &&  cf==1 )) {
printf("POINT: 1520\n");
printf("POINT: 1521\n");

    	if(( cf==1  && a269427955 == 8)) {
printf("POINT: 1522\n");
    		calculate_outputm41(input);
    	} 
printf("POINT: 1523\n");

    	if(( cf==1  && a269427955 == 9)) {
printf("POINT: 1524\n");
    		calculate_outputm42(input);
    	} 
printf("POINT: 1525\n");

    	if(( cf==1  && a269427955 == 10)) {
printf("POINT: 1526\n");
    		calculate_outputm43(input);
    	} 
printf("POINT: 1527\n");

    	if(( cf==1  && a269427955 == 11)) {
printf("POINT: 1528\n");
    		calculate_outputm44(input);
    	} 
printf("POINT: 1529\n");

    	if(( cf==1  && a269427955 == 12)) {
printf("POINT: 1530\n");
    		calculate_outputm45(input);
    	} 
printf("POINT: 1531\n");

    	if((a269427955 == 13 &&  cf==1 )) {
printf("POINT: 1532\n");
    		calculate_outputm46(input);
    	} 
printf("POINT: 1533\n");

    	if((a269427955 == 14 &&  cf==1 )) {
printf("POINT: 1534\n");
    		calculate_outputm47(input);
    	} 
    } 
printf("POINT: 1535\n");

    if((a1335229626 == 12 &&  cf==1 )) {
printf("POINT: 1536\n");
printf("POINT: 1537\n");

    	if(( cf==1  && a950417444 == 6)) {
printf("POINT: 1538\n");
    		calculate_outputm48(input);
    	} 
printf("POINT: 1539\n");

    	if((a950417444 == 7 &&  cf==1 )) {
printf("POINT: 1540\n");
    		calculate_outputm49(input);
    	} 
printf("POINT: 1541\n");

    	if(( cf==1  && a950417444 == 8)) {
printf("POINT: 1542\n");
    		calculate_outputm50(input);
    	} 
printf("POINT: 1543\n");

    	if(( cf==1  && a950417444 == 9)) {
printf("POINT: 1544\n");
    		calculate_outputm51(input);
    	} 
printf("POINT: 1545\n");

    	if(( cf==1  && a950417444 == 10)) {
printf("POINT: 1546\n");
    		calculate_outputm52(input);
    	} 
printf("POINT: 1547\n");

    	if((a950417444 == 11 &&  cf==1 )) {
printf("POINT: 1548\n");
    		calculate_outputm53(input);
    	} 
printf("POINT: 1549\n");

    	if(( cf==1  && a950417444 == 12)) {
printf("POINT: 1550\n");
    		calculate_outputm54(input);
    	} 
printf("POINT: 1551\n");

    	if((a950417444 == 13 &&  cf==1 )) {
printf("POINT: 1552\n");
    		calculate_outputm55(input);
    	} 
    } 
    errorCheck();

printf("POINT: 1553\n");

    if( cf==1 ) 
printf("POINT: 1554\n");
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}

int main()
{
    // main i/o-loop
printf("POINT: 1555\n");

    for (int FLAG=0;FLAG<BOUND;FLAG++){
printf("POINT: 1556\n");
    
        // read input
         int input = nondet_int();  __CPROVER_input("input",input);
       __CPROVER_input("a10419264",a10419264);
       __CPROVER_input("a179752516",a179752516);
       __CPROVER_input("a1736640332",a1736640332);
       __CPROVER_input("a1053530639",a1053530639);
       __CPROVER_input("a127383885",a127383885);
       __CPROVER_input("a286009693",a286009693);
       __CPROVER_input("a1837110425",a1837110425);
       __CPROVER_input("a565249046",a565249046);
       __CPROVER_input("a864013224",a864013224);
       __CPROVER_input("a2015844410",a2015844410);      
        // operate eca engine
printf("POINT: 1557\n");
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a10419264,a179752516,a1736640332,a1053530639,a127383885,a286009693,a1837110425,a565249046,a864013224,a2015844410);
        if((input != 7) && (input != 2) && (input != 10) && (input != 15) && (input != 5) && (input != 4) && (input != 6) && (input != 11) && (input != 9) && (input != 1) && (input != 12) && (input != 8) && (input != 3) && (input != 14) && (input != 13))
printf("POINT: 1558\n");
        calculate_output(input);
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a10419264,a179752516,a1736640332,a1053530639,a127383885,a286009693,a1837110425,a565249046,a864013224,a2015844410);
    return 0;
}
