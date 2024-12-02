#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#define BOUND 5
int kappa;
int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>

    //extern void //__VERIFIER_error(int);

	// inputs
	int inputs[] = {1,2,3,4,5,6};

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

	 int a513318642 = 6;
	 int a1201098933  = 15;
	 int a665584553  = 16;
	 int a1453131364  = 18;
	 int cf = 1;
	 int a1827794578 = 13;
	 int a654864802  = 17;
	 int a155643704 = 10;
	 int a373625691 = 2;
	 int a1951673787  = 16;
	 int a1817713184 = 9;
	 int a1565254551  = 15;
	 int a1290402779 = 15;
	 int a362005684 = 12;
	 int a2088066787 = 7;
	 int a638572393  = 15;
	 int a1181748209  = 15;
	 int a938687845 = 2;
	 int a1443304503 = 7;
	 int a1831820755 = 4;
	 int a2004722391 = 7;
	 int a1402015647  = 16;
	 int a741439290  = 18;
	 int a922136270 = 14;
	 int a1216805642  = 14;
	 int a1740937778 = 3;
	 int a272524562 = 12;
	 int a1784615125 = 8;
	 int a1104638475 = 3;
	 int a413168022  = 15;
	 int a1115981064  = 17;
	 int a1555217339 = 2;
	 int a1936956492  = 14;
	 int a1655547972 = 9;
	 int a1275184020  = 17;
	 int a1246641051 = 4;

 void calculate_outputm37(int input) {
    if(((((input == 2) && (a1817713184 == 5 &&  cf==1 )) && a1181748209 == 15) && a1275184020 == 14)) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1817713184 == 5 && (a1181748209 == 15 && (((input == 4) &&  cf==1 ) && a1275184020 == 14)))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 5) && ((a1817713184 == 5 && ( cf==1  && a1181748209 == 15)) && a1275184020 == 14))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1181748209 == 15 && ((a1275184020 == 14 && (a1817713184 == 5 &&  cf==1 )) && (input == 1)))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 6) && (a1181748209 == 15 && (a1817713184 == 5 &&  cf==1 ))) && a1275184020 == 14)) {
    	cf = 0;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm1(int input) {
    if(( cf==1  && a1181748209 == 15)) {
    	calculate_outputm37(input);
    } 
}
 void calculate_outputm38(int input) {
    if(((a1181748209 == 15 && ((input == 2) && ( cf==1  && a1275184020 == 14))) && a1817713184 == 6)) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1181748209 == 15 && (a1817713184 == 6 && (a1275184020 == 14 && ((input == 4) &&  cf==1 ))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1275184020 == 14 && ((a1817713184 == 6 && ( cf==1  && a1181748209 == 15)) && (input == 5)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((((a1181748209 == 15 && ( cf==1  && (input == 6))) && a1275184020 == 14) && a1817713184 == 6)) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1275184020 == 14 && ((a1181748209 == 15 && ( cf==1  && a1817713184 == 6)) && (input == 1)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } 
}
 void calculate_outputm39(int input) {
    if((a1275184020 == 14 && ((input == 5) && (a1817713184 == 6 && (a1181748209 == 17 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 12;
    	a155643704 = 11; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((a1275184020 == 14 && (( cf==1  && (input == 1)) && a1181748209 == 17)) && a1817713184 == 6)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 2) && ((a1181748209 == 17 && (a1817713184 == 6 &&  cf==1 )) && a1275184020 == 14))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1951673787 = 14 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm40(int input) {
    if((a1817713184 == 6 && ((input == 6) && (( cf==1  && a1275184020 == 14) && a1181748209 == 18)))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1817713184 == 6 &&  cf==1 ) && (input == 3)) && a1275184020 == 14) && a1181748209 == 18)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1181748209 == 18 && ((input == 2) && ((a1817713184 == 6 &&  cf==1 ) && a1275184020 == 14)))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1817713184 == 6 && ((a1275184020 == 14 && ((input == 4) &&  cf==1 )) && a1181748209 == 18))) {
    	cf = 0;
    	a1936956492 = 16 ;
    	a1275184020 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1817713184 == 6 && (a1181748209 == 18 && (a1275184020 == 14 && ((input == 5) &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 14 && (a1181748209 == 18 && ((input == 1) && ( cf==1  && a1817713184 == 6))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm2(int input) {
    if((a1181748209 == 15 &&  cf==1 )) {
    	calculate_outputm38(input);
    } 
    if(( cf==1  && a1181748209 == 17)) {
    	calculate_outputm39(input);
    } 
    if((a1181748209 == 18 &&  cf==1 )) {
    	calculate_outputm40(input);
    } 
}
 void calculate_outputm41(int input) {
    if((a1275184020 == 14 && (((input == 5) && ( cf==1  && a1817713184 == 7)) && a741439290 == 17))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a741439290 == 17 && (((input == 2) && ( cf==1  && a1275184020 == 14)) && a1817713184 == 7))) {
    	cf = 0;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a741439290 == 17 && (( cf==1  && (input == 6)) && a1817713184 == 7)) && a1275184020 == 14)) {
    	cf = 0;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 14 && (a1817713184 == 7 && ((input == 1) &&  cf==1 ))) && a741439290 == 17)) {
    	cf = 0;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm3(int input) {
    if(( cf==1  && a741439290 == 17)) {
    	calculate_outputm41(input);
    } 
}
 void calculate_outputm42(int input) {
    if((a1115981064 == 17 && (((a1817713184 == 8 &&  cf==1 ) && a1275184020 == 14) && (input == 4)))) {
    	cf = 0;
    	a1453131364 = 14 ;
    	a1275184020 = 15 ;
    	a1216805642 = 16 ; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((a1817713184 == 8 && ((a1115981064 == 17 && ( cf==1  && a1275184020 == 14)) && (input == 5)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 13; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if(((input == 2) && (((a1817713184 == 8 &&  cf==1 ) && a1115981064 == 17) && a1275184020 == 14))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 14 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1115981064 == 17 &&  cf==1 ) && (input == 1)) && a1817713184 == 8) && a1275184020 == 14)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 8;
    	a922136270 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 3) && ((a1817713184 == 8 &&  cf==1 ) && a1115981064 == 17)) && a1275184020 == 14)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 17 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1115981064 == 17 && (((a1275184020 == 14 &&  cf==1 ) && (input == 6)) && a1817713184 == 8))) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 17 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm43(int input) {
    if(((((input == 1) && (a1817713184 == 8 &&  cf==1 )) && a1275184020 == 14) && a1115981064 == 18)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1402015647 = 18 ;
    	a1290402779 = 10; 
    	 printf("%d\n", 7); //fflush(stdout); 
    } if((a1817713184 == 8 && (a1115981064 == 18 && (a1275184020 == 14 && ((input == 2) &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1115981064 == 18 && ((a1275184020 == 14 &&  cf==1 ) && (input == 4))) && a1817713184 == 8)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1817713184 == 8 && ((input == 5) && (( cf==1  && a1275184020 == 14) && a1115981064 == 18)))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1817713184 == 8 &&  cf==1 ) && a1275184020 == 14) && (input == 6)) && a1115981064 == 18)) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 14 && ((input == 3) && ((a1115981064 == 18 &&  cf==1 ) && a1817713184 == 8)))) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1275184020 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm4(int input) {
    if((a1115981064 == 17 &&  cf==1 )) {
    	calculate_outputm42(input);
    } 
    if(( cf==1  && a1115981064 == 18)) {
    	calculate_outputm43(input);
    } 
}
 void calculate_outputm44(int input) {
    if((((( cf==1  && a1817713184 == 9) && a1275184020 == 14) && (input == 2)) && a1565254551 == 15)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((a1817713184 == 9 && (( cf==1  && (input == 4)) && a1275184020 == 14)) && a1565254551 == 15)) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a1817713184 == 9 && ((input == 5) && (a1275184020 == 14 && (a1565254551 == 15 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((a1565254551 == 15 && (a1275184020 == 14 && (a1817713184 == 9 &&  cf==1 ))) && (input == 6))) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((a1565254551 == 15 && ((a1817713184 == 9 &&  cf==1 ) && a1275184020 == 14)) && (input == 1))) {
    	cf = 0;
    	a741439290 = 17 ;
    	a1817713184 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm5(int input) {
    if((a1565254551 == 15 &&  cf==1 )) {
    	calculate_outputm44(input);
    } 
}
 void calculate_outputm45(int input) {
    if(((((a1817713184 == 10 &&  cf==1 ) && a272524562 == 9) && (input == 3)) && a1275184020 == 14)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 10;
    	a513318642 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && (a272524562 == 9 && ((a1817713184 == 10 &&  cf==1 ) && a1275184020 == 14)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 7; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((a1817713184 == 10 && ( cf==1  && a1275184020 == 14)) && a272524562 == 9) && (input == 6))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 12;
    	a155643704 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 14 && (((a1817713184 == 10 &&  cf==1 ) && a272524562 == 9) && (input == 2)))) {
    	cf = 0;
    	a1201098933 = 17 ;
    	a1275184020 = 18 ;
    	a1443304503 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a272524562 == 9 && (( cf==1  && (input == 5)) && a1275184020 == 14)) && a1817713184 == 10)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1201098933 = 17 ;
    	a1443304503 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 4) && ( cf==1  && a1817713184 == 10)) && a1275184020 == 14) && a272524562 == 9)) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm6(int input) {
    if(( cf==1  && a272524562 == 9)) {
    	calculate_outputm45(input);
    } 
}
 void calculate_outputm46(int input) {
    if(((a373625691 == 2 && ((input == 3) && (a1275184020 == 14 &&  cf==1 ))) && a1817713184 == 11)) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 6) && (a373625691 == 2 && (a1817713184 == 11 &&  cf==1 ))) && a1275184020 == 14)) {
    	cf = 0;
    	a1831820755 = 7;
    	a1275184020 = 16 ;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a373625691 == 2 && ((input == 2) &&  cf==1 )) && a1275184020 == 14) && a1817713184 == 11)) {
    	cf = 0;
    	a1831820755 = 8;
    	a1275184020 = 16 ;
    	a922136270 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 4) && (( cf==1  && a373625691 == 2) && a1275184020 == 14)) && a1817713184 == 11)) {
    	cf = 0;
    	a1831820755 = 8;
    	a1275184020 = 16 ;
    	a922136270 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a373625691 == 2 && (( cf==1  && a1275184020 == 14) && a1817713184 == 11)) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 8;
    	a922136270 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((a373625691 == 2 && (a1817713184 == 11 &&  cf==1 )) && a1275184020 == 14))) {
    	cf = 0;
    	a1831820755 = 8;
    	a1275184020 = 16 ;
    	a922136270 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm47(int input) {
    if((a1817713184 == 11 && ((((input == 4) &&  cf==1 ) && a1275184020 == 14) && a373625691 == 3))) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((a1275184020 == 14 && ((input == 5) && ( cf==1  && a373625691 == 3))) && a1817713184 == 11)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a373625691 == 3 && (a1817713184 == 11 && (((input == 2) &&  cf==1 ) && a1275184020 == 14)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 6) && (a1817713184 == 11 && ( cf==1  && a373625691 == 3))) && a1275184020 == 14)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a373625691 == 3 && ((a1817713184 == 11 &&  cf==1 ) && a1275184020 == 14)) && (input == 1))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm48(int input) {
    if(((a373625691 == 8 && ((input == 2) && (a1275184020 == 14 &&  cf==1 ))) && a1817713184 == 11)) {
    	cf = 0;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1817713184 == 11 && (a373625691 == 8 && (a1275184020 == 14 && ( cf==1  && (input == 5)))))) {
    	cf = 0;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1817713184 == 11 && ((a373625691 == 8 &&  cf==1 ) && a1275184020 == 14)) && (input == 6))) {
    	cf = 0;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (a1275184020 == 14 && (a1817713184 == 11 &&  cf==1 ))) && a373625691 == 8)) {
    	cf = 0;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm7(int input) {
    if(( cf==1  && a373625691 == 2)) {
    	calculate_outputm46(input);
    } 
    if(( cf==1  && a373625691 == 3)) {
    	calculate_outputm47(input);
    } 
    if(( cf==1  && a373625691 == 8)) {
    	calculate_outputm48(input);
    } 
}
 void calculate_outputm49(int input) {
    if((((( cf==1  && a638572393 == 14) && (input == 2)) && a1275184020 == 14) && a1817713184 == 12)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 14 && ((a1817713184 == 12 &&  cf==1 ) && (input == 4))) && a638572393 == 14)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a638572393 == 14 && (a1817713184 == 12 && (( cf==1  && (input == 5)) && a1275184020 == 14)))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a638572393 == 14 &&  cf==1 ) && (input == 6)) && a1275184020 == 14) && a1817713184 == 12)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 14 && (a1817713184 == 12 && ((a638572393 == 14 &&  cf==1 ) && (input == 1))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 3) && ((a1817713184 == 12 && (a638572393 == 14 &&  cf==1 )) && a1275184020 == 14))) {
    	cf = 0;
    	a1831820755 = 5;
    	a1275184020 = 16 ;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm8(int input) {
    if((a638572393 == 14 &&  cf==1 )) {
    	calculate_outputm49(input);
    } 
}
 void calculate_outputm50(int input) {
    if((a1453131364 == 14 && (a1216805642 == 14 && (( cf==1  && (input == 2)) && a1275184020 == 15)))) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 5; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if(((a1275184020 == 15 && ((a1453131364 == 14 &&  cf==1 ) && (input == 3))) && a1216805642 == 14)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && (input == 4)) && a1216805642 == 14) && a1453131364 == 14) && a1275184020 == 15)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 15) && (input == 5)) && a1216805642 == 14) && a1453131364 == 14)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1216805642 == 14 && (((a1275184020 == 15 &&  cf==1 ) && (input == 6)) && a1453131364 == 14))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1216805642 == 14 && ((input == 1) && (a1275184020 == 15 &&  cf==1 ))) && a1453131364 == 14)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm51(int input) {
    if(((((input == 3) && ( cf==1  && a1216805642 == 16)) && a1453131364 == 14) && a1275184020 == 15)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 10;
    	a1827794578 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((a1216805642 == 16 && (( cf==1  && a1453131364 == 14) && (input == 4))) && a1275184020 == 15)) {
    	cf = 0;
    	a1831820755 = 10;
    	a1275184020 = 16 ;
    	a1827794578 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 15) && a1453131364 == 14) && a1216805642 == 16) && (input == 6))) {
    	cf = 0;
    	a1831820755 = 10;
    	a1275184020 = 16 ;
    	a1827794578 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1275184020 == 15 && ((( cf==1  && (input == 5)) && a1216805642 == 16) && a1453131364 == 14))) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1275184020 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 15 && (a1453131364 == 14 && ((a1216805642 == 16 &&  cf==1 ) && (input == 1))))) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1275184020 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1275184020 == 15 && ((input == 2) &&  cf==1 )) && a1453131364 == 14) && a1216805642 == 16)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm9(int input) {
    if(( cf==1  && a1216805642 == 14)) {
    	calculate_outputm50(input);
    } 
    if(( cf==1  && a1216805642 == 16)) {
    	calculate_outputm51(input);
    } 
}
 void calculate_outputm52(int input) {
    if((((( cf==1  && a1275184020 == 15) && (input == 3)) && a1453131364 == 15) && a413168022 == 14)) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 15 && (a1453131364 == 15 && (a413168022 == 14 && ((input == 2) &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1453131364 == 15 && (( cf==1  && (input == 4)) && a1275184020 == 15)) && a413168022 == 14)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 5) && (( cf==1  && a1453131364 == 15) && a413168022 == 14)) && a1275184020 == 15)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 15) && (input == 6)) && a413168022 == 14) && a1453131364 == 15)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && (a1275184020 == 15 && (( cf==1  && a1453131364 == 15) && a413168022 == 14)))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm53(int input) {
    if((a1453131364 == 15 && ((( cf==1  && a413168022 == 15) && a1275184020 == 15) && (input == 2)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((((input == 4) && (a1453131364 == 15 && ( cf==1  && a1275184020 == 15))) && a413168022 == 15)) {
    	cf = 0;
    	 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a413168022 == 15 && ((a1453131364 == 15 && ( cf==1  && (input == 5))) && a1275184020 == 15))) {
    	cf = 0;
    	 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((a413168022 == 15 && (a1275184020 == 15 && ( cf==1  && a1453131364 == 15))) && (input == 6))) {
    	cf = 0;
    	 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a1453131364 == 15 && (((a413168022 == 15 &&  cf==1 ) && a1275184020 == 15) && (input == 1)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 9); //fflush(stdout); 
    } 
}
 void calculate_outputm54(int input) {
    if((a413168022 == 17 && (((input == 4) && (a1275184020 == 15 &&  cf==1 )) && a1453131364 == 15))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1951673787 = 17 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 15 && ((input == 2) && (a1453131364 == 15 &&  cf==1 ))) && a413168022 == 17)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1453131364 == 15 && ( cf==1  && (input == 3))) && a413168022 == 17) && a1275184020 == 15)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 15 && ((input == 5) && ( cf==1  && a1453131364 == 15))) && a413168022 == 17)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && ((a413168022 == 17 && (a1275184020 == 15 &&  cf==1 )) && a1453131364 == 15))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (a413168022 == 17 && ( cf==1  && a1275184020 == 15))) && a1453131364 == 15)) {
    	cf = 0;
    	a1831820755 = 10;
    	a1275184020 = 16 ;
    	a1827794578 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm10(int input) {
    if(( cf==1  && a413168022 == 14)) {
    	calculate_outputm52(input);
    } 
    if(( cf==1  && a413168022 == 15)) {
    	calculate_outputm53(input);
    } 
    if(( cf==1  && a413168022 == 17)) {
    	calculate_outputm54(input);
    } 
}
 void calculate_outputm55(int input) {
    if(((a1275184020 == 15 && (((input == 2) &&  cf==1 ) && a654864802 == 15)) && a1453131364 == 16)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1453131364 == 16 && (a1275184020 == 15 && (( cf==1  && a654864802 == 15) && (input == 5))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && ((a1453131364 == 16 && ( cf==1  && a1275184020 == 15)) && a654864802 == 15))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 15 &&  cf==1 ) && (input == 1)) && a654864802 == 15) && a1453131364 == 16)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 3) && (a1453131364 == 16 && (a654864802 == 15 &&  cf==1 ))) && a1275184020 == 15)) {
    	cf = 0;
    	a1831820755 = 5;
    	a1275184020 = 16 ;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm56(int input) {
    if((a1453131364 == 16 && (((input == 5) && ( cf==1  && a1275184020 == 15)) && a654864802 == 17))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 17 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((a1275184020 == 15 && ((( cf==1  && a1453131364 == 16) && a654864802 == 17) && (input == 2)))) {
    	cf = 0;
    	a1831820755 = 7;
    	a1275184020 = 16 ;
    	a362005684 = 9; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if(((((a1275184020 == 15 &&  cf==1 ) && a1453131364 == 16) && a654864802 == 17) && (input == 1))) {
    	cf = 0;
    	a1831820755 = 8;
    	a1275184020 = 16 ;
    	a922136270 = 15; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a1453131364 == 16) && a1275184020 == 15) && (input == 6)) && a654864802 == 17)) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm57(int input) {
    if((a1275184020 == 15 && ((input == 2) && (( cf==1  && a1453131364 == 16) && a654864802 == 18)))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a654864802 == 18 && (a1275184020 == 15 && (a1453131364 == 16 && ( cf==1  && (input == 4)))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 15 &&  cf==1 ) && (input == 5)) && a1453131364 == 16) && a654864802 == 18)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 6) && (a1453131364 == 16 && (a654864802 == 18 &&  cf==1 ))) && a1275184020 == 15)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1453131364 == 16 && ((input == 3) && (a654864802 == 18 && (a1275184020 == 15 &&  cf==1 ))))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && ((a654864802 == 18 &&  cf==1 ) && a1275184020 == 15)) && a1453131364 == 16)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm11(int input) {
    if(( cf==1  && a654864802 == 15)) {
    	calculate_outputm55(input);
    } 
    if((a654864802 == 17 &&  cf==1 )) {
    	calculate_outputm56(input);
    } 
    if(( cf==1  && a654864802 == 18)) {
    	calculate_outputm57(input);
    } 
}
 void calculate_outputm58(int input) {
    if((a1275184020 == 15 && ((((input == 3) &&  cf==1 ) && a1453131364 == 18) && a272524562 == 5))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a1453131364 == 18) && a272524562 == 5) && a1275184020 == 15) && (input == 6))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && (a1453131364 == 18 && (a1275184020 == 15 && (a272524562 == 5 &&  cf==1 ))))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 15 && (a272524562 == 5 && (a1453131364 == 18 && ((input == 2) &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1453131364 == 18 && (((a272524562 == 5 &&  cf==1 ) && (input == 5)) && a1275184020 == 15))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 5;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm59(int input) {
    if(((input == 4) && (((a1275184020 == 15 &&  cf==1 ) && a272524562 == 6) && a1453131364 == 18))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((a272524562 == 6 && (a1453131364 == 18 && (a1275184020 == 15 && ( cf==1  && (input == 5)))))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if(((((a1453131364 == 18 &&  cf==1 ) && (input == 2)) && a1275184020 == 15) && a272524562 == 6)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 3) && (( cf==1  && a1453131364 == 18) && a1275184020 == 15)) && a272524562 == 6)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1453131364 == 18 && ((a272524562 == 6 && ( cf==1  && (input == 6))) && a1275184020 == 15))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 15 && (a1453131364 == 18 && (a272524562 == 6 && ( cf==1  && (input == 1)))))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm60(int input) {
    if((a272524562 == 7 && ((input == 2) && (a1275184020 == 15 && (a1453131364 == 18 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 4) && (a1275184020 == 15 &&  cf==1 )) && a1453131364 == 18) && a272524562 == 7)) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a272524562 == 7 && ((a1275184020 == 15 && ( cf==1  && a1453131364 == 18)) && (input == 5)))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 15 && (a1453131364 == 18 && (( cf==1  && a272524562 == 7) && (input == 6))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (a1275184020 == 15 && (a272524562 == 7 &&  cf==1 ))) && a1453131364 == 18)) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm61(int input) {
    if((((a1275184020 == 15 && ((input == 2) &&  cf==1 )) && a1453131364 == 18) && a272524562 == 11)) {
    	cf = 0;
    	a1181748209 = 15 ;
    	a1275184020 = 14 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((a1453131364 == 18 && ((a1275184020 == 15 &&  cf==1 ) && a272524562 == 11)) && (input == 4))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 15 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((((( cf==1  && a1453131364 == 18) && (input == 5)) && a272524562 == 11) && a1275184020 == 15)) {
    	cf = 0;
    	a1181748209 = 15 ;
    	a1275184020 = 14 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a1453131364 == 18 && ((input == 6) && (( cf==1  && a272524562 == 11) && a1275184020 == 15)))) {
    	cf = 0;
    	a1181748209 = 15 ;
    	a1275184020 = 14 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a1453131364 == 18 && ((((input == 1) &&  cf==1 ) && a272524562 == 11) && a1275184020 == 15))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 15 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } 
}
 void calculate_outputm12(int input) {
    if(( cf==1  && a272524562 == 5)) {
    	calculate_outputm58(input);
    } 
    if(( cf==1  && a272524562 == 6)) {
    	calculate_outputm59(input);
    } 
    if(( cf==1  && a272524562 == 7)) {
    	calculate_outputm60(input);
    } 
    if((a272524562 == 11 &&  cf==1 )) {
    	calculate_outputm61(input);
    } 
}
 void calculate_outputm62(int input) {
    if(((a1936956492 == 15 && ((input == 6) && (a1275184020 == 16 &&  cf==1 ))) && a1831820755 == 3)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1936956492 == 15 && ((a1831820755 == 3 && ((input == 3) &&  cf==1 )) && a1275184020 == 16))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1831820755 == 3 && ( cf==1  && a1275184020 == 16)) && (input == 2)) && a1936956492 == 15)) {
    	cf = 0;
    	a1936956492 = 16 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 16 &&  cf==1 ) && a1831820755 == 3) && (input == 5)) && a1936956492 == 15)) {
    	cf = 0;
    	a1936956492 = 16 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1936956492 == 15 && (a1831820755 == 3 && (((input == 1) &&  cf==1 ) && a1275184020 == 16)))) {
    	cf = 0;
    	a1936956492 = 16 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm63(int input) {
    if((((input == 4) && (a1936956492 == 16 && ( cf==1  && a1275184020 == 16))) && a1831820755 == 3)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 8;
    	a1655547972 = 4; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((input == 5) && ((( cf==1  && a1936956492 == 16) && a1831820755 == 3) && a1275184020 == 16))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 8;
    	a1655547972 = 4; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((((input == 6) && (a1275184020 == 16 && (a1831820755 == 3 &&  cf==1 ))) && a1936956492 == 16)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 16 && ((input == 3) && ( cf==1  && a1831820755 == 3))) && a1936956492 == 16)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((((input == 2) &&  cf==1 ) && a1936956492 == 16) && a1831820755 == 3) && a1275184020 == 16)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 3 && (((input == 1) && ( cf==1  && a1936956492 == 16)) && a1275184020 == 16))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm13(int input) {
    if((a1936956492 == 15 &&  cf==1 )) {
    	calculate_outputm62(input);
    } 
    if(( cf==1  && a1936956492 == 16)) {
    	calculate_outputm63(input);
    } 
}
 void calculate_outputm64(int input) {
    if((a1290402779 == 14 && (((input == 6) && (a1275184020 == 16 &&  cf==1 )) && a1831820755 == 4))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1290402779 == 14 && (a1831820755 == 4 && ( cf==1  && (input == 2)))) && a1275184020 == 16)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a1290402779 == 14 && (a1831820755 == 4 && ( cf==1  && (input == 4)))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 14 && (a1275184020 == 16 && ((input == 5) && ( cf==1  && a1831820755 == 4))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a1290402779 == 14 && ((a1831820755 == 4 &&  cf==1 ) && (input == 3))))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 4 && ((a1275184020 == 16 && ( cf==1  && a1290402779 == 14)) && (input == 1)))) {
    	cf = 0;
    	a1936956492 = 15 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm65(int input) {
    if(((input == 2) && (a1290402779 == 15 && ((a1831820755 == 4 &&  cf==1 ) && a1275184020 == 16)))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 11; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((a1290402779 == 15 && (((input == 4) && ( cf==1  && a1275184020 == 16)) && a1831820755 == 4))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 11; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 16) && a1290402779 == 15) && a1831820755 == 4) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 11; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if(((a1275184020 == 16 && (a1831820755 == 4 && ( cf==1  && (input == 6)))) && a1290402779 == 15)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 11; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 16) && (input == 1)) && a1290402779 == 15) && a1831820755 == 4)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 11; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } 
}
 void calculate_outputm66(int input) {
    if(((a1290402779 == 16 && ((input == 3) && ( cf==1  && a1831820755 == 4))) && a1275184020 == 16)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 4) && (a1275184020 == 16 &&  cf==1 )) && a1831820755 == 4) && a1290402779 == 16)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1831820755 == 4 && ( cf==1  && (input == 5))) && a1275184020 == 16) && a1290402779 == 16)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 4 && ((( cf==1  && (input == 6)) && a1290402779 == 16) && a1275184020 == 16))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 4 && (( cf==1  && a1275184020 == 16) && a1290402779 == 16)) && (input == 1))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1290402779 == 16 && (a1831820755 == 4 &&  cf==1 )) && (input == 2)) && a1275184020 == 16)) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm14(int input) {
    if(( cf==1  && a1290402779 == 14)) {
    	calculate_outputm64(input);
    } 
    if(( cf==1  && a1290402779 == 15)) {
    	calculate_outputm65(input);
    } 
    if((a1290402779 == 16 &&  cf==1 )) {
    	calculate_outputm66(input);
    } 
}
 void calculate_outputm67(int input) {
    if((a1275184020 == 16 && (a1831820755 == 5 && (a1740937778 == 4 && ((input == 2) &&  cf==1 ))))) {
    	cf = 0;
    	a1443304503 = 8;
    	a1275184020 = 18 ;
    	a1655547972 = 4; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a1740937778 == 4 && (a1275184020 == 16 && (a1831820755 == 5 && ( cf==1  && (input == 3)))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((a1275184020 == 16 && ((a1740937778 == 4 && (a1831820755 == 5 &&  cf==1 )) && (input == 4)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((a1740937778 == 4 && ((a1275184020 == 16 && ((input == 5) &&  cf==1 )) && a1831820755 == 5))) {
    	cf = 0;
    	 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((a1740937778 == 4 && (((a1831820755 == 5 &&  cf==1 ) && a1275184020 == 16) && (input == 6)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((a1275184020 == 16 && (((input == 1) && ( cf==1  && a1831820755 == 5)) && a1740937778 == 4))) {
    	cf = 0;
    	 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm68(int input) {
    if(((a1740937778 == 7 && (( cf==1  && a1275184020 == 16) && (input == 2))) && a1831820755 == 5)) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1740937778 == 7 && (a1831820755 == 5 && ( cf==1  && (input == 4)))) && a1275184020 == 16)) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 5) && (a1275184020 == 16 && (( cf==1  && a1831820755 == 5) && a1740937778 == 7)))) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && ((( cf==1  && a1740937778 == 7) && a1275184020 == 16) && a1831820755 == 5))) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((a1275184020 == 16 && ( cf==1  && a1831820755 == 5)) && a1740937778 == 7))) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm69(int input) {
    if(((((input == 2) && ( cf==1  && a1831820755 == 5)) && a1740937778 == 10) && a1275184020 == 16)) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 5 && ((( cf==1  && a1275184020 == 16) && (input == 5)) && a1740937778 == 10))) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 5 && ((a1275184020 == 16 &&  cf==1 ) && (input == 1))) && a1740937778 == 10)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 5 && (( cf==1  && a1740937778 == 10) && a1275184020 == 16)) && (input == 6))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a741439290 = 17 ;
    	a1817713184 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm15(int input) {
    if((a1740937778 == 4 &&  cf==1 )) {
    	calculate_outputm67(input);
    } 
    if(( cf==1  && a1740937778 == 7)) {
    	calculate_outputm68(input);
    } 
    if((a1740937778 == 10 &&  cf==1 )) {
    	calculate_outputm69(input);
    } 
}
 void calculate_outputm70(int input) {
    if((a1275184020 == 16 && (a1831820755 == 6 && (( cf==1  && (input == 2)) && a2004722391 == 1)))) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 15; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((input == 3) && (( cf==1  && a1275184020 == 16) && a1831820755 == 6)) && a2004722391 == 1)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a2004722391 == 1 && ((a1831820755 == 6 &&  cf==1 ) && (input == 4))) && a1275184020 == 16)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((input == 5) && (( cf==1  && a1831820755 == 6) && a2004722391 == 1)))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a2004722391 == 1 && ((input == 1) && ( cf==1  && a1831820755 == 6))))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm71(int input) {
    if(((a1831820755 == 6 && ((input == 4) && (a2004722391 == 2 &&  cf==1 ))) && a1275184020 == 16)) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a2004722391 == 2 && ((input == 3) && ((a1831820755 == 6 &&  cf==1 ) && a1275184020 == 16)))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1831820755 == 6 && ((input == 5) &&  cf==1 )) && a1275184020 == 16) && a2004722391 == 2)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && (a2004722391 == 2 && (( cf==1  && a1275184020 == 16) && a1831820755 == 6)))) {
    	cf = 0;
    	a654864802 = 16 ;
    	a1275184020 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((a1831820755 == 6 && ( cf==1  && (input == 2))) && a2004722391 == 2))) {
    	cf = 0;
    	a1443304503 = 10;
    	a1275184020 = 18 ;
    	a513318642 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 6 && ((input == 1) && (a2004722391 == 2 && (a1275184020 == 16 &&  cf==1 ))))) {
    	cf = 0;
    	a665584553 = 18 ;
    	a1275184020 = 17 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm72(int input) {
    if((a1275184020 == 16 && ((a1831820755 == 6 && (a2004722391 == 3 &&  cf==1 )) && (input == 2)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 6 && (a2004722391 == 3 && (( cf==1  && a1275184020 == 16) && (input == 4))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a2004722391 == 3 && (a1831820755 == 6 && ((input == 5) && (a1275184020 == 16 &&  cf==1 ))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 6 && (a2004722391 == 3 && (a1275184020 == 16 && ((input == 6) &&  cf==1 ))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 6 && ((a2004722391 == 3 &&  cf==1 ) && (input == 1))) && a1275184020 == 16)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((a1831820755 == 6 && ((input == 3) &&  cf==1 )) && a2004722391 == 3))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm73(int input) {
    if(((input == 4) && (((a1831820755 == 6 &&  cf==1 ) && a1275184020 == 16) && a2004722391 == 4))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a1831820755 == 6) && (input == 3)) && a1275184020 == 16) && a2004722391 == 4)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 5) && (a1275184020 == 16 && (a1831820755 == 6 && (a2004722391 == 4 &&  cf==1 ))))) {
    	cf = 0;
    	a1951673787 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a2004722391 == 4 && ((input == 6) && ((a1275184020 == 16 &&  cf==1 ) && a1831820755 == 6)))) {
    	cf = 0;
    	a1951673787 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a2004722391 == 4 && (a1831820755 == 6 && ((input == 2) &&  cf==1 ))))) {
    	cf = 0;
    	a1443304503 = 10;
    	a1275184020 = 18 ;
    	a513318642 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a2004722391 == 4 && (a1275184020 == 16 && (( cf==1  && (input == 1)) && a1831820755 == 6)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm74(int input) {
    if((a1275184020 == 16 && ((a1831820755 == 6 && (a2004722391 == 5 &&  cf==1 )) && (input == 3)))) {
    	cf = 0;
    	a665584553 = 18 ;
    	a1275184020 = 17 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((((input == 2) &&  cf==1 ) && a2004722391 == 5) && a1831820755 == 6) && a1275184020 == 16)) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((input == 5) && ((a2004722391 == 5 &&  cf==1 ) && a1831820755 == 6)))) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a2004722391 == 5 && ((input == 1) && ((a1275184020 == 16 &&  cf==1 ) && a1831820755 == 6)))) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((input == 6) && ((a2004722391 == 5 &&  cf==1 ) && a1831820755 == 6)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm16(int input) {
    if(( cf==1  && a2004722391 == 1)) {
    	calculate_outputm70(input);
    } 
    if((a2004722391 == 2 &&  cf==1 )) {
    	calculate_outputm71(input);
    } 
    if(( cf==1  && a2004722391 == 3)) {
    	calculate_outputm72(input);
    } 
    if(( cf==1  && a2004722391 == 4)) {
    	calculate_outputm73(input);
    } 
    if(( cf==1  && a2004722391 == 5)) {
    	calculate_outputm74(input);
    } 
}
 void calculate_outputm75(int input) {
    if((a1831820755 == 7 && ((input == 2) && (( cf==1  && a362005684 == 7) && a1275184020 == 16)))) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 4) && ( cf==1  && a362005684 == 7)) && a1831820755 == 7) && a1275184020 == 16)) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && (input == 5)) && a362005684 == 7) && a1831820755 == 7) && a1275184020 == 16)) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (((input == 6) && (a1831820755 == 7 &&  cf==1 )) && a362005684 == 7))) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a362005684 == 7 && (a1275184020 == 16 && (((input == 1) &&  cf==1 ) && a1831820755 == 7)))) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm76(int input) {
    if((a1831820755 == 7 && ((input == 6) && (a362005684 == 9 && ( cf==1  && a1275184020 == 16))))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1831820755 == 7 && ( cf==1  && a362005684 == 9)) && a1275184020 == 16) && (input == 2))) {
    	cf = 0;
    	a1831820755 = 10;
    	a1827794578 = 10; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((a1831820755 == 7 && (( cf==1  && a1275184020 == 16) && (input == 1))) && a362005684 == 9)) {
    	cf = 0;
    	a1831820755 = 10;
    	a1827794578 = 10; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } 
}
 void calculate_outputm77(int input) {
    if(((input == 2) && ((( cf==1  && a362005684 == 10) && a1275184020 == 16) && a1831820755 == 7))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 4) && (a362005684 == 10 && ( cf==1  && a1275184020 == 16))) && a1831820755 == 7)) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 5) && (a362005684 == 10 && (a1275184020 == 16 &&  cf==1 ))) && a1831820755 == 7)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1831820755 == 7 && ( cf==1  && (input == 6))) && a362005684 == 10) && a1275184020 == 16)) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 16 && (a1831820755 == 7 && ((input == 3) &&  cf==1 ))) && a362005684 == 10)) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 1) && ( cf==1  && a1831820755 == 7)) && a362005684 == 10) && a1275184020 == 16)) {
    	cf = 0;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm78(int input) {
    if((a362005684 == 11 && ((input == 5) && (a1831820755 == 7 && (a1275184020 == 16 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 7 && (((input == 6) && ( cf==1  && a362005684 == 11)) && a1275184020 == 16))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a362005684 == 11 && ((input == 1) && (a1831820755 == 7 &&  cf==1 ))) && a1275184020 == 16)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a362005684 == 11 && ((input == 2) && (a1831820755 == 7 &&  cf==1 ))) && a1275184020 == 16)) {
    	cf = 0;
    	a1181748209 = 18 ;
    	a1275184020 = 14 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a362005684 == 11 && ((( cf==1  && a1831820755 == 7) && (input == 3)) && a1275184020 == 16))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && (input == 4)) && a1275184020 == 16) && a1831820755 == 7) && a362005684 == 11)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm79(int input) {
    if((((input == 3) && (a362005684 == 13 && ( cf==1  && a1275184020 == 16))) && a1831820755 == 7)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 7 && (a1275184020 == 16 && ( cf==1  && a362005684 == 13))) && (input == 2))) {
    	cf = 0;
    	a1936956492 = 15 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a362005684 == 13 && ((input == 5) && ( cf==1  && a1831820755 == 7))) && a1275184020 == 16)) {
    	cf = 0;
    	a1936956492 = 15 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1831820755 == 7 && ((input == 1) &&  cf==1 )) && a362005684 == 13) && a1275184020 == 16)) {
    	cf = 0;
    	a1936956492 = 15 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && (a362005684 == 13 && (a1831820755 == 7 && (a1275184020 == 16 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 8;
    	a1655547972 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm17(int input) {
    if((a362005684 == 7 &&  cf==1 )) {
    	calculate_outputm75(input);
    } 
    if(( cf==1  && a362005684 == 9)) {
    	calculate_outputm76(input);
    } 
    if((a362005684 == 10 &&  cf==1 )) {
    	calculate_outputm77(input);
    } 
    if((a362005684 == 11 &&  cf==1 )) {
    	calculate_outputm78(input);
    } 
    if((a362005684 == 13 &&  cf==1 )) {
    	calculate_outputm79(input);
    } 
}
 void calculate_outputm80(int input) {
    if((((a922136270 == 9 && ( cf==1  && (input == 2))) && a1275184020 == 16) && a1831820755 == 8)) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 8 && ((( cf==1  && a922136270 == 9) && a1275184020 == 16) && (input == 3)))) {
    	cf = 0;
    	a1831820755 = 10;
    	a1827794578 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a922136270 == 9 && ( cf==1  && a1275184020 == 16)) && (input == 5)) && a1831820755 == 8)) {
    	cf = 0;
    	a1831820755 = 10;
    	a1827794578 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && (input == 6)) && a1275184020 == 16) && a922136270 == 9) && a1831820755 == 8)) {
    	cf = 0;
    	a1831820755 = 10;
    	a1827794578 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((( cf==1  && a1275184020 == 16) && a1831820755 == 8) && a922136270 == 9))) {
    	cf = 0;
    	a1831820755 = 10;
    	a1827794578 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm81(int input) {
    if(((a1275184020 == 16 && ((input == 4) && (a1831820755 == 8 &&  cf==1 ))) && a922136270 == 10)) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 15; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((a922136270 == 10 && (a1275184020 == 16 &&  cf==1 )) && (input == 5)) && a1831820755 == 8)) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 15; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((input == 6) && (( cf==1  && a1831820755 == 8) && a922136270 == 10)) && a1275184020 == 16)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a922136270 == 10 && (a1831820755 == 8 && (a1275184020 == 16 && ( cf==1  && (input == 2)))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 8 && (a922136270 == 10 && ( cf==1  && (input == 1)))) && a1275184020 == 16)) {
    	cf = 0;
    	a1181748209 = 18 ;
    	a1275184020 = 14 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a922136270 == 10 && ((input == 3) && (a1831820755 == 8 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm82(int input) {
    if((a1831820755 == 8 && ((input == 4) && (( cf==1  && a1275184020 == 16) && a922136270 == 13)))) {
    	cf = 0;
    	a1443304503 = 8;
    	a1275184020 = 18 ;
    	a1655547972 = 7; 
    	 printf("%d\n", 7); //fflush(stdout); 
    } if(((((a922136270 == 13 &&  cf==1 ) && a1831820755 == 8) && (input == 2)) && a1275184020 == 16)) {
    	cf = 0;
    	a1817713184 = 10;
    	a1275184020 = 14 ;
    	a272524562 = 9; 
    	 printf("%d\n", 7); //fflush(stdout); 
    } if((a922136270 == 13 && ((input == 5) && ((a1275184020 == 16 &&  cf==1 ) && a1831820755 == 8)))) {
    	cf = 0;
    	a1290402779 = 9;
    	a1275184020 = 17 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a922136270 == 13) && (input == 6)) && a1831820755 == 8) && a1275184020 == 16)) {
    	cf = 0;
    	a1290402779 = 9;
    	a1275184020 = 17 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a922136270 == 13 && (a1275184020 == 16 && (a1831820755 == 8 &&  cf==1 ))) && (input == 3))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 17 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (( cf==1  && a1831820755 == 8) && a1275184020 == 16)) && a922136270 == 13)) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm83(int input) {
    if(((a922136270 == 15 && (a1275184020 == 16 && (a1831820755 == 8 &&  cf==1 ))) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 10;
    	a513318642 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 8 && (a922136270 == 15 && ( cf==1  && (input == 1)))) && a1275184020 == 16)) {
    	cf = 0;
    	a1443304503 = 10;
    	a1275184020 = 18 ;
    	a513318642 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 2) && (a922136270 == 15 && ( cf==1  && a1275184020 == 16))) && a1831820755 == 8)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 12;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (((input == 6) && ( cf==1  && a922136270 == 15)) && a1831820755 == 8))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm84(int input) {
    if(((((input == 5) && (a1831820755 == 8 &&  cf==1 )) && a1275184020 == 16) && a922136270 == 16)) {
    	cf = 0;
    	a1831820755 = 6;
    	a2004722391 = 1; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if(((a1275184020 == 16 && (a922136270 == 16 && (a1831820755 == 8 &&  cf==1 ))) && (input == 4))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a922136270 == 16 && (a1275184020 == 16 && ( cf==1  && (input == 3)))) && a1831820755 == 8)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a922136270 == 16 && (a1275184020 == 16 && ( cf==1  && a1831820755 == 8))) && (input == 6))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 2) && (a1831820755 == 8 && ((a922136270 == 16 &&  cf==1 ) && a1275184020 == 16)))) {
    	cf = 0;
    	a1443304503 = 10;
    	a1275184020 = 18 ;
    	a513318642 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 16 && (a1831820755 == 8 && ( cf==1  && a922136270 == 16))) && (input == 1))) {
    	cf = 0;
    	a665584553 = 18 ;
    	a1275184020 = 17 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm18(int input) {
    if((a922136270 == 9 &&  cf==1 )) {
    	calculate_outputm80(input);
    } 
    if(( cf==1  && a922136270 == 10)) {
    	calculate_outputm81(input);
    } 
    if(( cf==1  && a922136270 == 13)) {
    	calculate_outputm82(input);
    } 
    if((a922136270 == 15 &&  cf==1 )) {
    	calculate_outputm83(input);
    } 
    if((a922136270 == 16 &&  cf==1 )) {
    	calculate_outputm84(input);
    } 
}
 void calculate_outputm85(int input) {
    if((a1951673787 == 14 && (((input == 2) && (a1275184020 == 16 &&  cf==1 )) && a1831820755 == 9))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && (input == 5)) && a1275184020 == 16) && a1831820755 == 9) && a1951673787 == 14)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 9 && (a1275184020 == 16 && ((a1951673787 == 14 &&  cf==1 ) && (input == 1))))) {
    	cf = 0;
    	a654864802 = 18 ;
    	a1275184020 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm86(int input) {
    if(((a1831820755 == 9 && (( cf==1  && a1275184020 == 16) && a1951673787 == 16)) && (input == 5))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((((input == 6) &&  cf==1 ) && a1275184020 == 16) && a1831820755 == 9) && a1951673787 == 16)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1951673787 == 16 && (a1831820755 == 9 && ((input == 2) && (a1275184020 == 16 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((a1831820755 == 9 && ( cf==1  && a1951673787 == 16)) && (input == 3)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((a1831820755 == 9 && (a1951673787 == 16 &&  cf==1 )) && (input == 4)))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1951673787 == 16 && ((input == 1) && (a1275184020 == 16 && (a1831820755 == 9 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 8;
    	a1655547972 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm87(int input) {
    if((a1951673787 == 17 && (((input == 3) && ( cf==1  && a1275184020 == 16)) && a1831820755 == 9))) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((((input == 4) &&  cf==1 ) && a1831820755 == 9) && a1275184020 == 16) && a1951673787 == 17)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1951673787 == 17 && (a1831820755 == 9 && (( cf==1  && a1275184020 == 16) && (input == 5))))) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 9 && ((input == 6) && (( cf==1  && a1951673787 == 17) && a1275184020 == 16)))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 1) && (a1831820755 == 9 &&  cf==1 )) && a1951673787 == 17) && a1275184020 == 16)) {
    	cf = 0;
    	a1443304503 = 13;
    	a1275184020 = 18 ;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 2) && (a1831820755 == 9 &&  cf==1 )) && a1951673787 == 17) && a1275184020 == 16)) {
    	cf = 0;
    	a1831820755 = 8;
    	a922136270 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm19(int input) {
    if(( cf==1  && a1951673787 == 14)) {
    	calculate_outputm85(input);
    } 
    if((a1951673787 == 16 &&  cf==1 )) {
    	calculate_outputm86(input);
    } 
    if((a1951673787 == 17 &&  cf==1 )) {
    	calculate_outputm87(input);
    } 
}
 void calculate_outputm88(int input) {
    if((a1275184020 == 16 && ((a1827794578 == 10 && ((input == 6) &&  cf==1 )) && a1831820755 == 10))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1565254551 = 15 ;
    	a1817713184 = 9; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if(((a1827794578 == 10 && (a1275184020 == 16 && (a1831820755 == 10 &&  cf==1 ))) && (input == 2))) {
    	cf = 0;
    	a1290402779 = 9;
    	a1275184020 = 17 ;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1827794578 == 10 && (a1831820755 == 10 && ((input == 1) && (a1275184020 == 16 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm89(int input) {
    if(((a1831820755 == 10 && (((input == 5) &&  cf==1 ) && a1275184020 == 16)) && a1827794578 == 11)) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 15 ; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((((a1831820755 == 10 && ( cf==1  && a1275184020 == 16)) && (input == 1)) && a1827794578 == 11)) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 15 ; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1827794578 == 11 && ((((input == 2) &&  cf==1 ) && a1275184020 == 16) && a1831820755 == 10))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1275184020 == 16 && (a1831820755 == 10 &&  cf==1 )) && a1827794578 == 11) && (input == 3))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm90(int input) {
    if((((a1827794578 == 12 && ( cf==1  && a1831820755 == 10)) && a1275184020 == 16) && (input == 5))) {
    	cf = 0;
    	a1453131364 = 14 ;
    	a1275184020 = 15 ;
    	a1216805642 = 14 ; 
    	 printf("%d\n", 7); //fflush(stdout); 
    } if(((input == 2) && (a1831820755 == 10 && ((a1275184020 == 16 &&  cf==1 ) && a1827794578 == 12)))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 8;
    	a1655547972 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1275184020 == 16 && ( cf==1  && (input == 3))) && a1831820755 == 10) && a1827794578 == 12)) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 16; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a1831820755 == 10 && (( cf==1  && a1827794578 == 12) && (input == 4))))) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 16; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1827794578 == 12 && (a1831820755 == 10 && ( cf==1  && a1275184020 == 16))) && (input == 6))) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 16; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 10 && ((a1827794578 == 12 && ((input == 1) &&  cf==1 )) && a1275184020 == 16))) {
    	cf = 0;
    	a1831820755 = 4;
    	a1290402779 = 16; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm91(int input) {
    if(((a1827794578 == 13 && (a1275184020 == 16 && ((input == 2) &&  cf==1 ))) && a1831820755 == 10)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1831820755 == 10 && (a1275184020 == 16 && ((input == 3) && ( cf==1  && a1827794578 == 13))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && (a1831820755 == 10 && (( cf==1  && a1827794578 == 13) && (input == 4))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1827794578 == 13 && ( cf==1  && a1275184020 == 16)) && a1831820755 == 10) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1831820755 == 10 && (a1827794578 == 13 && ( cf==1  && (input == 1)))) && a1275184020 == 16)) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 16 && ((a1831820755 == 10 && ( cf==1  && a1827794578 == 13)) && (input == 6)))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm92(int input) {
    if(((a1275184020 == 16 && (a1831820755 == 10 && (a1827794578 == 14 &&  cf==1 ))) && (input == 3))) {
    	cf = 0;
    	a665584553 = 18 ;
    	a1275184020 = 17 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1827794578 == 14 && ((((input == 5) &&  cf==1 ) && a1831820755 == 10) && a1275184020 == 16))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a665584553 = 18 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 6) && ((a1827794578 == 14 &&  cf==1 ) && a1275184020 == 16)) && a1831820755 == 10)) {
    	cf = 0;
    	a665584553 = 18 ;
    	a1275184020 = 17 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1827794578 == 14 && ((a1831820755 == 10 && ( cf==1  && (input == 1))) && a1275184020 == 16))) {
    	cf = 0;
    	a665584553 = 18 ;
    	a1275184020 = 17 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1827794578 == 14 && ((a1275184020 == 16 &&  cf==1 ) && a1831820755 == 10)) && (input == 2))) {
    	cf = 0;
    	a1831820755 = 7;
    	a362005684 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm20(int input) {
    if((a1827794578 == 10 &&  cf==1 )) {
    	calculate_outputm88(input);
    } 
    if(( cf==1  && a1827794578 == 11)) {
    	calculate_outputm89(input);
    } 
    if((a1827794578 == 12 &&  cf==1 )) {
    	calculate_outputm90(input);
    } 
    if((a1827794578 == 13 &&  cf==1 )) {
    	calculate_outputm91(input);
    } 
    if((a1827794578 == 14 &&  cf==1 )) {
    	calculate_outputm92(input);
    } 
}
 void calculate_outputm93(int input) {
    if(((((input == 5) && (a362005684 == 9 &&  cf==1 )) && a1290402779 == 9) && a1275184020 == 17)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 10;
    	a1827794578 = 11; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1290402779 == 9 && ((((input == 1) &&  cf==1 ) && a1275184020 == 17) && a362005684 == 9))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 4; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 2) && ((a1275184020 == 17 && (a362005684 == 9 &&  cf==1 )) && a1290402779 == 9))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a654864802 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm94(int input) {
    if((a1290402779 == 9 && ((a1275184020 == 17 && (a362005684 == 10 &&  cf==1 )) && (input == 2)))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1201098933 = 17 ;
    	a1443304503 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 9 && ((( cf==1  && (input == 5)) && a1275184020 == 17) && a362005684 == 10))) {
    	cf = 0;
    	a1201098933 = 17 ;
    	a1275184020 = 18 ;
    	a1443304503 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 9 && (a362005684 == 10 && ((input == 6) && (a1275184020 == 17 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1201098933 = 17 ;
    	a1443304503 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 4) && ((a1290402779 == 9 &&  cf==1 ) && a1275184020 == 17)) && a362005684 == 10)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1290402779 == 9 && (( cf==1  && a1275184020 == 17) && a362005684 == 10)) && (input == 3))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1290402779 == 9 && (a1275184020 == 17 &&  cf==1 )) && (input == 1)) && a362005684 == 10)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm95(int input) {
    if((((a1290402779 == 9 && ( cf==1  && a362005684 == 11)) && a1275184020 == 17) && (input == 2))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 17 && (a362005684 == 11 && ((input == 5) && ( cf==1  && a1290402779 == 9))))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 6) && (( cf==1  && a1290402779 == 9) && a1275184020 == 17)) && a362005684 == 11)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (( cf==1  && a362005684 == 11) && a1290402779 == 9)) && a1275184020 == 17)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 9 && (a362005684 == 11 && (((input == 3) &&  cf==1 ) && a1275184020 == 17)))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm96(int input) {
    if(((a1290402779 == 9 && (( cf==1  && a1275184020 == 17) && (input == 3))) && a362005684 == 13)) {
    	cf = 0;
    	a1831820755 = 8;
    	a1275184020 = 16 ;
    	a922136270 = 16; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a362005684 == 13 && ((( cf==1  && (input == 5)) && a1275184020 == 17) && a1290402779 == 9))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 8;
    	a922136270 = 16; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((((input == 6) &&  cf==1 ) && a362005684 == 13) && a1275184020 == 17) && a1290402779 == 9)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 8;
    	a922136270 = 16; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((a362005684 == 13 && ((input == 4) && ((a1290402779 == 9 &&  cf==1 ) && a1275184020 == 17)))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1951673787 = 17 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 17) && a362005684 == 13) && (input == 2)) && a1290402779 == 9)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1246641051 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a362005684 == 13 && (((input == 1) && (a1290402779 == 9 &&  cf==1 )) && a1275184020 == 17))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 10;
    	a1827794578 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm21(int input) {
    if(( cf==1  && a362005684 == 9)) {
    	calculate_outputm93(input);
    } 
    if((a362005684 == 10 &&  cf==1 )) {
    	calculate_outputm94(input);
    } 
    if((a362005684 == 11 &&  cf==1 )) {
    	calculate_outputm95(input);
    } 
    if((a362005684 == 13 &&  cf==1 )) {
    	calculate_outputm96(input);
    } 
}
 void calculate_outputm97(int input) {
    if((a1290402779 == 10 && (((a1402015647 == 18 &&  cf==1 ) && a1275184020 == 17) && (input == 6)))) {
    	cf = 0;
    	a638572393 = 14 ;
    	a1275184020 = 14 ;
    	a1817713184 = 12; 
    	 printf("%d\n", 7); //fflush(stdout); 
    } if((a1275184020 == 17 && (a1290402779 == 10 && (( cf==1  && a1402015647 == 18) && (input == 2))))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1290402779 == 10 &&  cf==1 ) && (input == 4)) && a1402015647 == 18) && a1275184020 == 17)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 10 && ((input == 5) && (a1275184020 == 17 && (a1402015647 == 18 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 10 && ((input == 1) && (a1275184020 == 17 && (a1402015647 == 18 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm22(int input) {
    if((a1402015647 == 18 &&  cf==1 )) {
    	calculate_outputm97(input);
    } 
}
 void calculate_outputm98(int input) {
    if(((a1784615125 == 9 && ((a1290402779 == 11 &&  cf==1 ) && a1275184020 == 17)) && (input == 3))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1555217339 = 8; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((((input == 2) && (a1290402779 == 11 && (a1275184020 == 17 &&  cf==1 ))) && a1784615125 == 9)) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 7; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((( cf==1  && a1290402779 == 11) && a1784615125 == 9) && a1275184020 == 17) && (input == 4))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a638572393 = 14 ;
    	a1817713184 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1275184020 == 17 && (((a1784615125 == 9 &&  cf==1 ) && a1290402779 == 11) && (input == 5)))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a638572393 = 14 ;
    	a1817713184 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((((input == 6) && (( cf==1  && a1275184020 == 17) && a1290402779 == 11)) && a1784615125 == 9)) {
    	cf = 0;
    	a638572393 = 14 ;
    	a1275184020 = 14 ;
    	a1817713184 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((((( cf==1  && a1275184020 == 17) && a1784615125 == 9) && (input == 1)) && a1290402779 == 11)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a638572393 = 14 ;
    	a1817713184 = 12; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } 
}
 void calculate_outputm23(int input) {
    if(( cf==1  && a1784615125 == 9)) {
    	calculate_outputm98(input);
    } 
}
 void calculate_outputm99(int input) {
    if((a1555217339 == 1 && (a1275184020 == 17 && ((a1290402779 == 12 &&  cf==1 ) && (input == 2))))) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 5) && (a1555217339 == 1 && (a1290402779 == 12 &&  cf==1 ))) && a1275184020 == 17)) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1290402779 == 12 && (a1275184020 == 17 && (a1555217339 == 1 &&  cf==1 ))) && (input == 6))) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 17 && ((input == 1) && (a1290402779 == 12 &&  cf==1 ))) && a1555217339 == 1)) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm100(int input) {
    if(((input == 2) && (a1290402779 == 12 && ((a1275184020 == 17 &&  cf==1 ) && a1555217339 == 3)))) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1555217339 == 3 && (((a1275184020 == 17 &&  cf==1 ) && (input == 6)) && a1290402779 == 12))) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1555217339 == 3 && ( cf==1  && a1275184020 == 17)) && a1290402779 == 12) && (input == 1))) {
    	cf = 0;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm101(int input) {
    if(((a1555217339 == 6 && (a1290402779 == 12 && ((input == 3) &&  cf==1 ))) && a1275184020 == 17)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 2) && ( cf==1  && a1275184020 == 17)) && a1555217339 == 6) && a1290402779 == 12)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 15 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 17 && (a1555217339 == 6 && ( cf==1  && a1290402779 == 12))) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 8;
    	a1655547972 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && (((a1555217339 == 6 &&  cf==1 ) && a1290402779 == 12) && a1275184020 == 17))) {
    	cf = 0;
    	a1443304503 = 8;
    	a1275184020 = 18 ;
    	a1655547972 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1555217339 == 6 && ((((input == 1) &&  cf==1 ) && a1290402779 == 12) && a1275184020 == 17))) {
    	cf = 0;
    	a1443304503 = 8;
    	a1275184020 = 18 ;
    	a1655547972 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm102(int input) {
    if((a1555217339 == 7 && ((input == 2) && ((a1275184020 == 17 &&  cf==1 ) && a1290402779 == 12)))) {
    	cf = 0;
    	a1290402779 = 16;
    	a938687845 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1555217339 == 7 &&  cf==1 ) && (input == 5)) && a1275184020 == 17) && a1290402779 == 12)) {
    	cf = 0;
    	a1290402779 = 16;
    	a938687845 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1290402779 == 12 && (a1555217339 == 7 && ((input == 6) &&  cf==1 ))) && a1275184020 == 17)) {
    	cf = 0;
    	a1565254551 = 15 ;
    	a1275184020 = 14 ;
    	a1817713184 = 9; 
    	 printf("%d\n", 8); //fflush(stdout); 
    } if((((( cf==1  && a1290402779 == 12) && (input == 1)) && a1275184020 == 17) && a1555217339 == 7)) {
    	cf = 0;
    	a1831820755 = 5;
    	a1275184020 = 16 ;
    	a1740937778 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 4) && (a1275184020 == 17 && (a1555217339 == 7 && (a1290402779 == 12 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 15 ;
    	a1817713184 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm103(int input) {
    if((((( cf==1  && a1275184020 == 17) && a1555217339 == 8) && (input == 2)) && a1290402779 == 12)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 3) && ((a1290402779 == 12 &&  cf==1 ) && a1555217339 == 8)) && a1275184020 == 17)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 4) && (( cf==1  && a1275184020 == 17) && a1290402779 == 12)) && a1555217339 == 8)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 5) && (a1275184020 == 17 && ( cf==1  && a1555217339 == 8))) && a1290402779 == 12)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1555217339 == 8 && (( cf==1  && (input == 6)) && a1290402779 == 12)) && a1275184020 == 17)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 17 &&  cf==1 ) && a1290402779 == 12) && a1555217339 == 8) && (input == 1))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm24(int input) {
    if(( cf==1  && a1555217339 == 1)) {
    	calculate_outputm99(input);
    } 
    if((a1555217339 == 3 &&  cf==1 )) {
    	calculate_outputm100(input);
    } 
    if((a1555217339 == 6 &&  cf==1 )) {
    	calculate_outputm101(input);
    } 
    if((a1555217339 == 7 &&  cf==1 )) {
    	calculate_outputm102(input);
    } 
    if(( cf==1  && a1555217339 == 8)) {
    	calculate_outputm103(input);
    } 
}
 void calculate_outputm104(int input) {
    if(((a665584553 == 18 && (a1275184020 == 17 && ( cf==1  && (input == 3)))) && a1290402779 == 13)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 5) && (a1290402779 == 13 && ( cf==1  && a1275184020 == 17))) && a665584553 == 18)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a665584553 == 18 && ((input == 6) &&  cf==1 )) && a1275184020 == 17) && a1290402779 == 13)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 1) && (a665584553 == 18 &&  cf==1 )) && a1290402779 == 13) && a1275184020 == 17)) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 2) && (a1275184020 == 17 && (( cf==1  && a1290402779 == 13) && a665584553 == 18)))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 15 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm25(int input) {
    if((a665584553 == 18 &&  cf==1 )) {
    	calculate_outputm104(input);
    } 
}
 void calculate_outputm105(int input) {
    if((a1246641051 == 7 && (a1275184020 == 17 && (((input == 3) &&  cf==1 ) && a1290402779 == 14)))) {
    	cf = 0;
    	a654864802 = 16 ;
    	a1275184020 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 17 &&  cf==1 ) && a1290402779 == 14) && a1246641051 == 7) && (input == 6))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1951673787 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1246641051 == 7 && ((( cf==1  && a1275184020 == 17) && a1290402779 == 14) && (input == 2)))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 10;
    	a513318642 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 5) && (a1275184020 == 17 && ((a1290402779 == 14 &&  cf==1 ) && a1246641051 == 7)))) {
    	cf = 0;
    	a1443304503 = 10;
    	a1275184020 = 18 ;
    	a513318642 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 4) && (a1275184020 == 17 &&  cf==1 )) && a1290402779 == 14) && a1246641051 == 7)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 8;
    	a922136270 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 17 && ((input == 1) && ( cf==1  && a1290402779 == 14))) && a1246641051 == 7)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 7;
    	a362005684 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm106(int input) {
    if(((input == 6) && ((( cf==1  && a1290402779 == 14) && a1275184020 == 17) && a1246641051 == 8))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1246641051 == 8 && ((( cf==1  && a1290402779 == 14) && a1275184020 == 17) && (input == 2)))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1290402779 == 14 && (((input == 4) &&  cf==1 ) && a1275184020 == 17)) && a1246641051 == 8)) {
    	cf = 0;
    	a1181748209 = 18 ;
    	a1275184020 = 14 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 17 && ((((input == 5) &&  cf==1 ) && a1246641051 == 8) && a1290402779 == 14))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 17 && ((input == 1) && (( cf==1  && a1290402779 == 14) && a1246641051 == 8)))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 17 && (((a1246641051 == 8 &&  cf==1 ) && a1290402779 == 14) && (input == 3)))) {
    	cf = 0;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm107(int input) {
    if((a1246641051 == 10 && (a1275184020 == 17 && (a1290402779 == 14 && ( cf==1  && (input == 3)))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 17 && ((a1290402779 == 14 &&  cf==1 ) && a1246641051 == 10)) && (input == 6))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1246641051 == 10 && (a1275184020 == 17 &&  cf==1 )) && a1290402779 == 14) && (input == 1))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1246641051 == 10 && ((input == 2) && (a1290402779 == 14 &&  cf==1 ))) && a1275184020 == 17)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 4) && (( cf==1  && a1290402779 == 14) && a1275184020 == 17)) && a1246641051 == 10)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 5;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((input == 5) && (( cf==1  && a1246641051 == 10) && a1290402779 == 14)) && a1275184020 == 17)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 5;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm26(int input) {
    if((a1246641051 == 7 &&  cf==1 )) {
    	calculate_outputm105(input);
    } 
    if(( cf==1  && a1246641051 == 8)) {
    	calculate_outputm106(input);
    } 
    if((a1246641051 == 10 &&  cf==1 )) {
    	calculate_outputm107(input);
    } 
}
 void calculate_outputm108(int input) {
    if((a1115981064 == 17 && (((input == 1) && (a1290402779 == 15 &&  cf==1 )) && a1275184020 == 17))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 16 ;
    	a654864802 = 17 ; 
    	 printf("%d\n", 7); //fflush(stdout); 
    } if((a1115981064 == 17 && ((((input == 3) &&  cf==1 ) && a1290402779 == 15) && a1275184020 == 17))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 15 && (a1275184020 == 17 && ((a1115981064 == 17 &&  cf==1 ) && (input == 4))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1201098933 = 14 ;
    	a1443304503 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1115981064 == 17 && ((input == 5) && (( cf==1  && a1275184020 == 17) && a1290402779 == 15)))) {
    	cf = 0;
    	a1831820755 = 8;
    	a1275184020 = 16 ;
    	a922136270 = 13; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((a1115981064 == 17 && ((a1290402779 == 15 &&  cf==1 ) && a1275184020 == 17)) && (input == 2))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1275184020 = 18 ;
    	a1104638475 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1115981064 == 17 && ((input == 6) && (a1290402779 == 15 && (a1275184020 == 17 &&  cf==1 ))))) {
    	cf = 0;
    	a1275184020 = 18 ;
    	a1443304503 = 7;
    	a1104638475 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm27(int input) {
    if((a1115981064 == 17 &&  cf==1 )) {
    	calculate_outputm108(input);
    } 
}
 void calculate_outputm109(int input) {
    if((((((input == 1) &&  cf==1 ) && a1275184020 == 17) && a938687845 == 9) && a1290402779 == 16)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1290402779 == 16 && ((input == 2) && (a938687845 == 9 &&  cf==1 ))) && a1275184020 == 17)) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1290402779 == 16 && (a1275184020 == 17 && (((input == 4) &&  cf==1 ) && a938687845 == 9)))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a938687845 == 9 && ((input == 5) && (a1290402779 == 16 &&  cf==1 ))) && a1275184020 == 17)) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 17 && (a1290402779 == 16 && ((input == 6) &&  cf==1 ))) && a938687845 == 9)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm28(int input) {
    if((a938687845 == 9 &&  cf==1 )) {
    	calculate_outputm109(input);
    } 
}
 void calculate_outputm110(int input) {
    if((a1275184020 == 18 && ((input == 3) && (a741439290 == 15 && ( cf==1  && a1443304503 == 6))))) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1275184020 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && ((a1443304503 == 6 && ( cf==1  && a741439290 == 15)) && (input == 4)))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1951673787 = 17 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a741439290 == 15 && ((input == 5) && (( cf==1  && a1443304503 == 6) && a1275184020 == 18)))) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1275184020 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 18 && (a741439290 == 15 && ( cf==1  && a1443304503 == 6))) && (input == 6))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1951673787 = 17 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a741439290 == 15 && ((a1275184020 == 18 &&  cf==1 ) && (input == 1))) && a1443304503 == 6)) {
    	cf = 0;
    	a1951673787 = 17 ;
    	a1275184020 = 16 ;
    	a1831820755 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 6 && (a1275184020 == 18 && (( cf==1  && a741439290 == 15) && (input == 2))))) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm29(int input) {
    if(( cf==1  && a741439290 == 15)) {
    	calculate_outputm110(input);
    } 
}
 void calculate_outputm111(int input) {
    if(((input == 2) && ((a1104638475 == 3 && (a1275184020 == 18 &&  cf==1 )) && a1443304503 == 7))) {
    	cf = 0;
    	a1290402779 = 9;
    	a1275184020 = 17 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 7 && (((input == 5) &&  cf==1 ) && a1275184020 == 18)) && a1104638475 == 3)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && (a1443304503 == 7 && (a1275184020 == 18 && (a1104638475 == 3 &&  cf==1 ))))) {
    	cf = 0;
    	a1290402779 = 9;
    	a1275184020 = 17 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1104638475 == 3 && (a1275184020 == 18 && ( cf==1  && (input == 3)))) && a1443304503 == 7)) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 17 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 7 && ((a1104638475 == 3 && ( cf==1  && a1275184020 == 18)) && (input == 4)))) {
    	cf = 0;
    	a1831820755 = 7;
    	a1275184020 = 16 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((a1275184020 == 18 && ( cf==1  && a1104638475 == 3)) && a1443304503 == 7))) {
    	cf = 0;
    	a1443304503 = 13;
    	a2088066787 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm112(int input) {
    if(((input == 5) && (a1275184020 == 18 && (( cf==1  && a1104638475 == 4) && a1443304503 == 7)))) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 15 ; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1104638475 == 4 && (a1443304503 == 7 && ((input == 2) && ( cf==1  && a1275184020 == 18))))) {
    	cf = 0;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((a1275184020 == 18 && ( cf==1  && a1443304503 == 7)) && a1104638475 == 4))) {
    	cf = 0;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1104638475 == 4 && (a1443304503 == 7 &&  cf==1 )) && a1275184020 == 18) && (input == 3))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm113(int input) {
    if((a1443304503 == 7 && (a1104638475 == 5 && (( cf==1  && a1275184020 == 18) && (input == 5))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1275184020 == 18 && ((input == 6) &&  cf==1 )) && a1443304503 == 7) && a1104638475 == 5)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 18 &&  cf==1 ) && (input == 1)) && a1104638475 == 5) && a1443304503 == 7)) {
    	cf = 0;
    	 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 7 && (a1104638475 == 5 && (((input == 3) &&  cf==1 ) && a1275184020 == 18)))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1104638475 == 5 && ((a1443304503 == 7 && ( cf==1  && a1275184020 == 18)) && (input == 2)))) {
    	cf = 0;
    	a1936956492 = 16 ;
    	a1275184020 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1104638475 == 5 && ((( cf==1  && (input == 4)) && a1443304503 == 7) && a1275184020 == 18))) {
    	cf = 0;
    	a1831820755 = 5;
    	a1275184020 = 16 ;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm114(int input) {
    if((a1104638475 == 9 && ((input == 2) && (a1443304503 == 7 && ( cf==1  && a1275184020 == 18))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 5) && (a1275184020 == 18 && (a1443304503 == 7 && ( cf==1  && a1104638475 == 9))))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 7 && ((a1275184020 == 18 && ( cf==1  && (input == 6))) && a1104638475 == 9))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1443304503 == 7 && (a1275184020 == 18 &&  cf==1 )) && a1104638475 == 9) && (input == 1))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1104638475 == 9 && (a1443304503 == 7 && ( cf==1  && (input == 3)))) && a1275184020 == 18)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm30(int input) {
    if((a1104638475 == 3 &&  cf==1 )) {
    	calculate_outputm111(input);
    } 
    if(( cf==1  && a1104638475 == 4)) {
    	calculate_outputm112(input);
    } 
    if(( cf==1  && a1104638475 == 5)) {
    	calculate_outputm113(input);
    } 
    if((a1104638475 == 9 &&  cf==1 )) {
    	calculate_outputm114(input);
    } 
}
 void calculate_outputm115(int input) {
    if((((input == 2) && ((a1275184020 == 18 &&  cf==1 ) && a1655547972 == 4)) && a1443304503 == 8)) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((input == 3) && ((( cf==1  && a1275184020 == 18) && a1655547972 == 4) && a1443304503 == 8))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((input == 4) && (a1275184020 == 18 && (a1443304503 == 8 && ( cf==1  && a1655547972 == 4))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((input == 5) && (a1655547972 == 4 && (( cf==1  && a1443304503 == 8) && a1275184020 == 18)))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1655547972 == 4 && (a1443304503 == 8 && (a1275184020 == 18 && ( cf==1  && (input == 6)))))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((input == 1) && (((a1443304503 == 8 &&  cf==1 ) && a1275184020 == 18) && a1655547972 == 4))) {
    	cf = 0;
    	 
    	 printf("%d\n", 12); //fflush(stdout); 
    } 
}
 void calculate_outputm116(int input) {
    if((((a1443304503 == 8 && (a1655547972 == 7 &&  cf==1 )) && a1275184020 == 18) && (input == 6))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 11;
    	a1784615125 = 9; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if((a1275184020 == 18 && (a1655547972 == 7 && ((a1443304503 == 8 &&  cf==1 ) && (input == 3))))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 10;
    	a1827794578 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && (((input == 2) && (a1443304503 == 8 &&  cf==1 )) && a1655547972 == 7))) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && ((input == 4) && (a1655547972 == 7 && (a1443304503 == 8 &&  cf==1 ))))) {
    	cf = 0;
    	a1453131364 = 15 ;
    	a1275184020 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 8 && (a1655547972 == 7 && (a1275184020 == 18 &&  cf==1 ))) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 14 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (( cf==1  && a1275184020 == 18) && a1443304503 == 8)) && a1655547972 == 7)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 7;
    	a362005684 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm117(int input) {
    if(((input == 3) && (a1443304503 == 8 && (a1275184020 == 18 && ( cf==1  && a1655547972 == 9))))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1275184020 == 18 && (a1443304503 == 8 &&  cf==1 )) && a1655547972 == 9) && (input == 6))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 2) && (a1443304503 == 8 && ((a1655547972 == 9 &&  cf==1 ) && a1275184020 == 18)))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 8 && ((a1275184020 == 18 && ((input == 4) &&  cf==1 )) && a1655547972 == 9))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1443304503 == 8 &&  cf==1 ) && a1655547972 == 9) && (input == 5)) && a1275184020 == 18)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && (((a1443304503 == 8 &&  cf==1 ) && (input == 1)) && a1655547972 == 9))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm118(int input) {
    if((a1443304503 == 8 && ((input == 5) && (a1655547972 == 10 && (a1275184020 == 18 &&  cf==1 ))))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1443304503 == 8 &&  cf==1 ) && a1655547972 == 10) && a1275184020 == 18) && (input == 6))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 8 && (((input == 1) && (a1655547972 == 10 &&  cf==1 )) && a1275184020 == 18))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a1275184020 == 18 &&  cf==1 ) && a1655547972 == 10) && a1443304503 == 8) && (input == 3))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1655547972 == 10 && (((a1443304503 == 8 &&  cf==1 ) && a1275184020 == 18) && (input == 2)))) {
    	cf = 0;
    	a1936956492 = 16 ;
    	a1275184020 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm31(int input) {
    if(( cf==1  && a1655547972 == 4)) {
    	calculate_outputm115(input);
    } 
    if((a1655547972 == 7 &&  cf==1 )) {
    	calculate_outputm116(input);
    } 
    if((a1655547972 == 9 &&  cf==1 )) {
    	calculate_outputm117(input);
    } 
    if((a1655547972 == 10 &&  cf==1 )) {
    	calculate_outputm118(input);
    } 
}
 void calculate_outputm119(int input) {
    if((a1443304503 == 9 && ((a654864802 == 14 && ( cf==1  && (input == 6))) && a1275184020 == 18))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 4; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 18 && (( cf==1  && (input == 4)) && a1443304503 == 9)) && a654864802 == 14)) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a654864802 == 14 && ((input == 2) &&  cf==1 )) && a1275184020 == 18) && a1443304503 == 9)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 9 && (a654864802 == 14 && ((input == 5) &&  cf==1 ))) && a1275184020 == 18)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a654864802 == 14 && (a1275184020 == 18 && ( cf==1  && a1443304503 == 9))) && (input == 3))) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 2; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 1) && ( cf==1  && a1443304503 == 9)) && a1275184020 == 18) && a654864802 == 14)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm120(int input) {
    if((((a1443304503 == 9 && ( cf==1  && (input == 2))) && a654864802 == 16) && a1275184020 == 18)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 3) && ( cf==1  && a1275184020 == 18)) && a654864802 == 16) && a1443304503 == 9)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && (((a654864802 == 16 &&  cf==1 ) && (input == 4)) && a1443304503 == 9))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && ((input == 5) && (( cf==1  && a1443304503 == 9) && a654864802 == 16)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && a654864802 == 16) && (input == 6)) && a1275184020 == 18) && a1443304503 == 9)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((( cf==1  && a1275184020 == 18) && a654864802 == 16) && a1443304503 == 9))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm121(int input) {
    if((a654864802 == 18 && (a1275184020 == 18 && (( cf==1  && (input == 2)) && a1443304503 == 9)))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 18 && ((a1443304503 == 9 &&  cf==1 ) && (input == 5))) && a654864802 == 18)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a654864802 == 18 && (((a1443304503 == 9 &&  cf==1 ) && (input == 1)) && a1275184020 == 18))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 3) && ((a1275184020 == 18 && (a1443304503 == 9 &&  cf==1 )) && a654864802 == 18))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm32(int input) {
    if(( cf==1  && a654864802 == 14)) {
    	calculate_outputm119(input);
    } 
    if(( cf==1  && a654864802 == 16)) {
    	calculate_outputm120(input);
    } 
    if((a654864802 == 18 &&  cf==1 )) {
    	calculate_outputm121(input);
    } 
}
 void calculate_outputm122(int input) {
    if(((a513318642 == 9 && ((input == 2) && ( cf==1  && a1443304503 == 10))) && a1275184020 == 18)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 4;
    	a1290402779 = 14; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a513318642 == 9 && ((input == 6) &&  cf==1 )) && a1443304503 == 10) && a1275184020 == 18)) {
    	cf = 0;
    	a1443304503 = 13;
    	a2088066787 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && (a513318642 == 9 && ((input == 4) && ( cf==1  && a1443304503 == 10))))) {
    	cf = 0;
    	a1443304503 = 13;
    	a2088066787 = 8; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a513318642 == 9 && (a1443304503 == 10 && (a1275184020 == 18 && ((input == 3) &&  cf==1 ))))) {
    	cf = 0;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 10 && (((input == 5) && (a1275184020 == 18 &&  cf==1 )) && a513318642 == 9))) {
    	cf = 0;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((( cf==1  && a513318642 == 9) && a1275184020 == 18) && a1443304503 == 10))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a665584553 = 18 ;
    	a1290402779 = 13; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm123(int input) {
    if((((a1443304503 == 10 && ((input == 5) &&  cf==1 )) && a513318642 == 10) && a1275184020 == 18)) {
    	cf = 0;
    	a1443304503 = 12;
    	a155643704 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 10 && (( cf==1  && a1275184020 == 18) && a513318642 == 10)) && (input == 1))) {
    	cf = 0;
    	a1443304503 = 12;
    	a155643704 = 12; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && ((a1443304503 == 10 && (a513318642 == 10 &&  cf==1 )) && (input == 2)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && ((( cf==1  && a1275184020 == 18) && a513318642 == 10) && a1443304503 == 10))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm124(int input) {
    if(((a1275184020 == 18 && (a513318642 == 12 && (a1443304503 == 10 &&  cf==1 ))) && (input == 4))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 4;
    	a1290402779 = 15; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((input == 5) && ((a1443304503 == 10 &&  cf==1 ) && a513318642 == 12)) && a1275184020 == 18)) {
    	cf = 0;
    	a1831820755 = 4;
    	a1275184020 = 16 ;
    	a1290402779 = 15; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((a1443304503 == 10 && ((((input == 6) &&  cf==1 ) && a1275184020 == 18) && a513318642 == 12))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 18 && ((input == 2) && ( cf==1  && a513318642 == 12))) && a1443304503 == 10)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 3) && (( cf==1  && a513318642 == 12) && a1443304503 == 10)) && a1275184020 == 18)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a513318642 == 12 && (a1443304503 == 10 &&  cf==1 )) && a1275184020 == 18) && (input == 1))) {
    	cf = 0;
    	a1936956492 = 15 ;
    	a1275184020 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm33(int input) {
    if(( cf==1  && a513318642 == 9)) {
    	calculate_outputm122(input);
    } 
    if(( cf==1  && a513318642 == 10)) {
    	calculate_outputm123(input);
    } 
    if(( cf==1  && a513318642 == 12)) {
    	calculate_outputm124(input);
    } 
}
 void calculate_outputm125(int input) {
    if((a1201098933 == 14 && (a1275184020 == 18 && (a1443304503 == 11 && ( cf==1  && (input == 5)))))) {
    	cf = 0;
    	a1115981064 = 18 ;
    	a1275184020 = 14 ;
    	a1817713184 = 8; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1275184020 == 18 && ((a1443304503 == 11 && ( cf==1  && a1201098933 == 14)) && (input == 3)))) {
    	cf = 0;
    	a741439290 = 15 ;
    	a1443304503 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1201098933 == 14 && ((( cf==1  && a1275184020 == 18) && (input == 1)) && a1443304503 == 11))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 5;
    	a1740937778 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 2) && (( cf==1  && a1201098933 == 14) && a1275184020 == 18)) && a1443304503 == 11)) {
    	cf = 0;
    	a1831820755 = 7;
    	a1275184020 = 16 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1201098933 == 14 && (((input == 4) && (a1443304503 == 11 &&  cf==1 )) && a1275184020 == 18))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 7;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 11 && (a1201098933 == 14 && (a1275184020 == 18 && ((input == 6) &&  cf==1 ))))) {
    	cf = 0;
    	a1831820755 = 7;
    	a1275184020 = 16 ;
    	a362005684 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm126(int input) {
    if((a1443304503 == 11 && (a1201098933 == 17 && ((input == 3) && ( cf==1  && a1275184020 == 18))))) {
    	cf = 0;
    	a654864802 = 16 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1443304503 == 11 && (a1201098933 == 17 &&  cf==1 )) && (input == 4)) && a1275184020 == 18)) {
    	cf = 0;
    	a1831820755 = 6;
    	a1275184020 = 16 ;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 2) && ((( cf==1  && a1443304503 == 11) && a1201098933 == 17) && a1275184020 == 18))) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 18 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 11 && (((input == 5) &&  cf==1 ) && a1201098933 == 17)) && a1275184020 == 18)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 16 ;
    	a654864802 = 18 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 11 && (a1275184020 == 18 && ( cf==1  && (input == 6)))) && a1201098933 == 17)) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 16 ;
    	a654864802 = 18 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 11 && ((a1201098933 == 17 && (a1275184020 == 18 &&  cf==1 )) && (input == 1)))) {
    	cf = 0;
    	a1290402779 = 9;
    	a1275184020 = 17 ;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm34(int input) {
    if(( cf==1  && a1201098933 == 14)) {
    	calculate_outputm125(input);
    } 
    if(( cf==1  && a1201098933 == 17)) {
    	calculate_outputm126(input);
    } 
}
 void calculate_outputm127(int input) {
    if((a1443304503 == 12 && (((input == 3) && (a1275184020 == 18 &&  cf==1 )) && a155643704 == 9))) {
    	cf = 0;
    	a1443304503 = 13;
    	a2088066787 = 7; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a155643704 == 9 && ((( cf==1  && (input == 4)) && a1275184020 == 18) && a1443304503 == 12))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 6;
    	a2004722391 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 18 && (a155643704 == 9 && (a1443304503 == 12 &&  cf==1 ))) && (input == 2))) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 18 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((input == 5) && ( cf==1  && a1443304503 == 12)) && a1275184020 == 18) && a155643704 == 9)) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 18 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 12 && ((input == 6) && (a1275184020 == 18 && (a155643704 == 9 &&  cf==1 ))))) {
    	cf = 0;
    	a1453131364 = 16 ;
    	a1275184020 = 15 ;
    	a654864802 = 18 ; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((a1275184020 == 18 && (a155643704 == 9 &&  cf==1 )) && (input == 1)) && a1443304503 == 12)) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 9;
    	a362005684 = 11; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm128(int input) {
    if(((a155643704 == 11 && ((a1443304503 == 12 &&  cf==1 ) && a1275184020 == 18)) && (input == 5))) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 10;
    	a1827794578 = 11; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((((input == 1) && (a1275184020 == 18 &&  cf==1 )) && a155643704 == 11) && a1443304503 == 12)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1831820755 = 10;
    	a1827794578 = 11; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if((a1443304503 == 12 && (((input == 2) && (a155643704 == 11 &&  cf==1 )) && a1275184020 == 18))) {
    	cf = 0;
    	a654864802 = 18 ;
    	a1443304503 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm129(int input) {
    if(((input == 5) && ((a155643704 == 12 && ( cf==1  && a1443304503 == 12)) && a1275184020 == 18))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 16 ;
    	a654864802 = 15 ; 
    	 printf("%d\n", 12); //fflush(stdout); 
    } if(((((input == 2) && ( cf==1  && a1275184020 == 18)) && a1443304503 == 12) && a155643704 == 12)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((((a155643704 == 12 &&  cf==1 ) && (input == 6)) && a1443304503 == 12) && a1275184020 == 18)) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && (a1443304503 == 12 && (a1275184020 == 18 && ( cf==1  && a155643704 == 12))))) {
    	cf = 0;
    	a1443304503 = 7;
    	a1104638475 = 9; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 3) && (a1275184020 == 18 && ((a155643704 == 12 &&  cf==1 ) && a1443304503 == 12)))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 18 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm35(int input) {
    if(( cf==1  && a155643704 == 9)) {
    	calculate_outputm127(input);
    } 
    if(( cf==1  && a155643704 == 11)) {
    	calculate_outputm128(input);
    } 
    if((a155643704 == 12 &&  cf==1 )) {
    	calculate_outputm129(input);
    } 
}
 void calculate_outputm130(int input) {
    if((a1443304503 == 13 && ((( cf==1  && a2088066787 == 5) && (input == 6)) && a1275184020 == 18))) {
    	cf = 0;
    	a1275184020 = 15 ;
    	a1453131364 = 15 ;
    	a413168022 = 15 ; 
    	 printf("%d\n", 9); //fflush(stdout); 
    } if(((input == 2) && (a2088066787 == 5 && ((a1275184020 == 18 &&  cf==1 ) && a1443304503 == 13)))) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 4) && (a1443304503 == 13 && (a1275184020 == 18 &&  cf==1 ))) && a2088066787 == 5)) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1817713184 = 11;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 13 && (a2088066787 == 5 && ((input == 5) && ( cf==1  && a1275184020 == 18))))) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1443304503 == 13 && (( cf==1  && a2088066787 == 5) && (input == 1))) && a1275184020 == 18)) {
    	cf = 0;
    	a1817713184 = 11;
    	a1275184020 = 14 ;
    	a373625691 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm131(int input) {
    if((a1275184020 == 18 && (a2088066787 == 7 && (a1443304503 == 13 && ((input == 3) &&  cf==1 ))))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 13 && (((input == 6) && ( cf==1  && a1275184020 == 18)) && a2088066787 == 7))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((( cf==1  && (input == 2)) && a2088066787 == 7) && a1275184020 == 18) && a1443304503 == 13)) {
    	cf = 0;
    	a1275184020 = 16 ;
    	a1936956492 = 16 ;
    	a1831820755 = 3; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 13 && (a1275184020 == 18 && (a2088066787 == 7 && ((input == 1) &&  cf==1 ))))) {
    	cf = 0;
    	a1453131364 = 18 ;
    	a1275184020 = 15 ;
    	a272524562 = 5; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((a1275184020 == 18 && ((a2088066787 == 7 &&  cf==1 ) && a1443304503 == 13)) && (input == 4))) {
    	cf = 0;
    	a1831820755 = 5;
    	a1275184020 = 16 ;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } if((((input == 5) && (a1443304503 == 13 && (a2088066787 == 7 &&  cf==1 ))) && a1275184020 == 18)) {
    	cf = 0;
    	a1831820755 = 5;
    	a1275184020 = 16 ;
    	a1740937778 = 4; 
    	 printf("%d\n", 10); //fflush(stdout); 
    } 
}
 void calculate_outputm132(int input) {
    if(((a1443304503 == 13 && (( cf==1  && a1275184020 == 18) && a2088066787 == 8)) && (input == 2))) {
    	cf = 0;
    	a1275184020 = 14 ;
    	a1181748209 = 18 ;
    	a1817713184 = 6; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 3) && ((a2088066787 == 8 &&  cf==1 ) && a1275184020 == 18)) && a1443304503 == 13)) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1275184020 == 18 && (((a1443304503 == 13 &&  cf==1 ) && a2088066787 == 8) && (input == 4)))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 13 && (a1275184020 == 18 && ((a2088066787 == 8 &&  cf==1 ) && (input == 5))))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((a1443304503 == 13 && ((( cf==1  && a2088066787 == 8) && (input == 6)) && a1275184020 == 18))) {
    	cf = 0;
    	a1275184020 = 17 ;
    	a1290402779 = 14;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 1) && ((( cf==1  && a2088066787 == 8) && a1275184020 == 18) && a1443304503 == 13))) {
    	cf = 0;
    	a1290402779 = 14;
    	a1275184020 = 17 ;
    	a1246641051 = 10; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm133(int input) {
    if((a2088066787 == 11 && (a1275184020 == 18 && (a1443304503 == 13 && ((input == 2) &&  cf==1 ))))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 5) && ((( cf==1  && a2088066787 == 11) && a1275184020 == 18) && a1443304503 == 13))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if(((input == 6) && (a1275184020 == 18 && (a1443304503 == 13 && (a2088066787 == 11 &&  cf==1 ))))) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } if((((input == 1) && (a1443304503 == 13 && ( cf==1  && a1275184020 == 18))) && a2088066787 == 11)) {
    	cf = 0;
    	a1290402779 = 12;
    	a1275184020 = 17 ;
    	a1555217339 = 1; 
    	 printf("%d\n", 11); //fflush(stdout); 
    } 
}
 void calculate_outputm36(int input) {
    if(( cf==1  && a2088066787 == 5)) {
    	calculate_outputm130(input);
    } 
    if(( cf==1  && a2088066787 == 7)) {
    	calculate_outputm131(input);
    } 
    if((a2088066787 == 8 &&  cf==1 )) {
    	calculate_outputm132(input);
    } 
    if((a2088066787 == 11 &&  cf==1 )) {
    	calculate_outputm133(input);
    } 
}

 void calculate_output(int input) {
        cf = 1;

    if(( cf==1  && a1275184020 == 14)) {
    	if((a1817713184 == 5 &&  cf==1 )) {
    		calculate_outputm1(input);
    	} 
    	if((a1817713184 == 6 &&  cf==1 )) {
    		calculate_outputm2(input);
    	} 
    	if((a1817713184 == 7 &&  cf==1 )) {
    		calculate_outputm3(input);
    	} 
    	if(( cf==1  && a1817713184 == 8)) {
    		calculate_outputm4(input);
    	} 
    	if(( cf==1  && a1817713184 == 9)) {
    		calculate_outputm5(input);
    	} 
    	if((a1817713184 == 10 &&  cf==1 )) {
    		calculate_outputm6(input);
    	} 
    	if(( cf==1  && a1817713184 == 11)) {
    		calculate_outputm7(input);
    	} 
    	if(( cf==1  && a1817713184 == 12)) {
    		calculate_outputm8(input);
    	} 
    } 
    if(( cf==1  && a1275184020 == 15)) {
    	if(( cf==1  && a1453131364 == 14)) {
    		calculate_outputm9(input);
    	} 
    	if(( cf==1  && a1453131364 == 15)) {
    		calculate_outputm10(input);
    	} 
    	if(( cf==1  && a1453131364 == 16)) {
    		calculate_outputm11(input);
    	} 
    	if(( cf==1  && a1453131364 == 18)) {
    		calculate_outputm12(input);
    	} 
    } 
    if((a1275184020 == 16 &&  cf==1 )) {
    	if(( cf==1  && a1831820755 == 3)) {
    		calculate_outputm13(input);
    	} 
    	if((a1831820755 == 4 &&  cf==1 )) {
    		calculate_outputm14(input);
    	} 
    	if((a1831820755 == 5 &&  cf==1 )) {
    		calculate_outputm15(input);
    	} 
    	if(( cf==1  && a1831820755 == 6)) {
    		calculate_outputm16(input);
    	} 
    	if((a1831820755 == 7 &&  cf==1 )) {
    		calculate_outputm17(input);
    	} 
    	if(( cf==1  && a1831820755 == 8)) {
    		calculate_outputm18(input);
    	} 
    	if((a1831820755 == 9 &&  cf==1 )) {
    		calculate_outputm19(input);
    	} 
    	if((a1831820755 == 10 &&  cf==1 )) {
    		calculate_outputm20(input);
    	} 
    } 
    if(( cf==1  && a1275184020 == 17)) {
    	if(( cf==1  && a1290402779 == 9)) {
    		calculate_outputm21(input);
    	} 
    	if(( cf==1  && a1290402779 == 10)) {
    		calculate_outputm22(input);
    	} 
    	if(( cf==1  && a1290402779 == 11)) {
    		calculate_outputm23(input);
    	} 
    	if((a1290402779 == 12 &&  cf==1 )) {
    		calculate_outputm24(input);
    	} 
    	if((a1290402779 == 13 &&  cf==1 )) {
    		calculate_outputm25(input);
    	} 
    	if(( cf==1  && a1290402779 == 14)) {
    		calculate_outputm26(input);
    	} 
    	if((a1290402779 == 15 &&  cf==1 )) {
    		calculate_outputm27(input);
    	} 
    	if(( cf==1  && a1290402779 == 16)) {
    		calculate_outputm28(input);
    	} 
    } 
    if(( cf==1  && a1275184020 == 18)) {
    	if(( cf==1  && a1443304503 == 6)) {
    		calculate_outputm29(input);
    	} 
    	if(( cf==1  && a1443304503 == 7)) {
    		calculate_outputm30(input);
    	} 
    	if(( cf==1  && a1443304503 == 8)) {
    		calculate_outputm31(input);
    	} 
    	if(( cf==1  && a1443304503 == 9)) {
    		calculate_outputm32(input);
    	} 
    	if((a1443304503 == 10 &&  cf==1 )) {
    		calculate_outputm33(input);
    	} 
    	if((a1443304503 == 11 &&  cf==1 )) {
    		calculate_outputm34(input);
    	} 
    	if((a1443304503 == 12 &&  cf==1 )) {
    		calculate_outputm35(input);
    	} 
    	if((a1443304503 == 13 &&  cf==1 )) {
    		calculate_outputm36(input);
    	} 
    } 

if((cf==1)) 
    {
    
    }
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}


int main()
{
kappa = 0;
    // main i/o-loop
   int symb;   
    for (int FLAG=0;FLAG<BOUND;FLAG++)
    {
        klee_make_symbolic(&symb, sizeof(int), "symb"); 
        // operate eca engine
        if((symb != 1) && (symb != 2) && (symb != 3) && (symb != 4) && (symb != 5) && (symb != 6))
          return -2;
        calculate_output(symb);
    }
    
 return 0;

}


