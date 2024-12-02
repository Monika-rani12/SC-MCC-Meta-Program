//This Program is Problem2-LTL-RERS-2017.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#define BOUND 7
int kappa;

int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>
	// inputs
	int inputs[] = {5,6,1,7,2,8,3,9,10,4};

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

	 int a65 = 182;
	 int a46 = 7;
	 int a107 = 2;
	 int a110 = 2;
	 int a22 = 10;
	 int a13  = 36;
	 int a140  = 34;
	 int a58 = 3;
	 int cf = 1;
	 int a42 = 14;


	int errorCheck() {

	}
 int calculate_outputm1(int input) {
    if((( cf==1  && (input == 4)) && ((a140 == 33 && a58 == 1) && a65 <=  117))) {
    	cf = 0;
    	a22 = (a46 + 12);
    	a46 = (a58 + 5); 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm2(int input) {
    if(((a65 <=  117 && a140 == 33) && (( cf==1  && (input == 6)) && a58 == 1))) {
    	cf = 0;
    	a42 = (a110 - -1);
    	a65 = ((((((a65 * 1) % 28) + 170) * 5) % 28) + 156);
    	a140 = 34 ;
    	a58 = ((a110 * a42) + -53);
    	a46 = (a110 - 2); 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm3(int input) {
    if((((140 < a65) && (198 >= a65)) && (a58 == 3 && (a140 == 34 && ( cf==1  && (input == 5)))))) {
    	cf = 0;
    	a46 = (a58 + 1);
    	a65 = (((((a65 - -19257) + -43467) + -5014) % 11) + 130);
    	a42 = ((a46 - a58) + 12);
    	a140 = 32 ;
    	a58 = (a46 + -2); 
    	 //printf("%d\n", 25);  
    } 
    if((( cf==1  && (input == 3)) && (((140 < a65) && (198 >= a65)) && (a140 == 34 && a58 == 3)))) {
    	cf = 0;
    	a42 = (a46 + 9);
    	a46 = ((a42 - a42) + 5); 
    	 //printf("%d\n", 18);  
    } 
}
 int calculate_outputm4(int input) {
    if(((a140 == 34 && (a58 == 3 && ((140 < a65) && (198 >= a65)))) && ((input == 1) &&  cf==1 ))) {
    	cf = 0;
    	a107 = (a46 + 2); 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm5(int input) {
    if(((a58 == 3 && ((input == 6) &&  cf==1 )) && (((140 < a65) && (198 >= a65)) && a140 == 34))) {
    	cf = 0;
    	a65 = ((((a65 % 11) + 124) - -16783) + -16785);
    	a140 = 32 ;
    	a42 = (a107 + 7);
    	a46 = ((a58 * a58) + -5);
    	a58 = (a107 - 1); 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm6(int input) {
    if((( cf==1  && (input == 2)) && (a58 == 3 && (a140 == 34 && ((140 < a65) && (198 >= a65)))))) {
    	cf = 0;
    	a46 = ((a107 / a107) + 6);
    	a42 = (a46 + 1); 
    	 //printf("%d\n", 26);  
    } 
    if((((input == 5) &&  cf==1 ) && ((a140 == 34 && a58 == 3) && ((140 < a65) && (198 >= a65))))) {
    	cf = 0;
    	a22 = (a46 + 6);
    	a46 = (a58 - -3);
    	a65 = (((a65 / 5) / 5) - 27340);
    	a140 = 33 ;
    	a58 = (a22 + -8); 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm7(int input) {
    if(((((140 < a65) && (198 >= a65)) && a58 == 3) && (((input == 6) &&  cf==1 ) && a140 == 34))) {
    	cf = 0;
    	a107 = ((a46 - a58) + 1); 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm8(int input) {
    if((a58 == 2 && ((((117 < a65) && (140 >= a65)) && ( cf==1  && (input == 3))) && a140 == 32))) {
    	cf = 0;
    	a46 = (a42 - 5);
    	a107 = a58;
    	a140 = 34 ;
    	a65 = (((((a65 - 15309) + 15342) * 5) % 28) + 152);
    	a58 = ((a46 + a107) - 2); 
    	 //printf("%d\n", 20);  
    } 
    if((( cf==1  && (input == 7)) && (a58 == 2 && (((117 < a65) && (140 >= a65)) && a140 == 32)))) {
    	cf = 0;
    	a140 = 34 ;
    	a65 = ((((a65 + 17501) - -1347) * 1) + -18815);
    	a58 = ((a46 / a46) - -2);
    	a46 = (a42 + -5);
    	a107 = (a42 + -7); 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm9(int input) {
    if(((a140 == 32 && ((117 < a65) && (140 >= a65))) && (a58 == 2 && ((input == 6) &&  cf==1 )))) {
    	cf = 0;
    	a65 = (((a65 - 19945) - 7150) / 5);
    	a110 = ((a46 * a42) + -34);
    	a140 = 33 ;
    	a46 = (a58 - 1);
    	a58 = 1; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm10(int input) {
    if(((((117 < a65) && (140 >= a65)) && (((input == 5) &&  cf==1 ) && a140 == 32)) && a58 == 2)) {
    	cf = 0;
    	a65 = (((a65 / -5) * 5) * 5);
    	a140 = 33 ;
    	a46 = (a42 + -4);
    	a13 = 34 ;
    	a58 = (a42 / a46); 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm11(int input) {
    if(((a140 == 32 && ((input == 1) &&  cf==1 )) && (a58 == 2 && ((117 < a65) && (140 >= a65))))) {
    	cf = 0;
    	a42 = ((a46 / a58) + 10);
    	a65 = (((a65 - -2087) + -2057) + 23);
    	a58 = (a42 / a46);
    	a140 = 34 ;
    	a46 = ((a42 - a42) + 5); 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm12(int input) {
    if((a58 == 2 && ((( cf==1  && (input == 7)) && a140 == 32) && ((117 < a65) && (140 >= a65))))) {
    	cf = 0;
    	a65 = (((a65 + -21407) - -21457) + 6);
    	a46 = (a58 + 3);
    	a42 = ((a58 * a46) + 1);
    	a140 = 34 ;
    	a58 = (a46 + -2); 
    	 //printf("%d\n", 18);  
    } 
}
 int calculate_outputm13(int input) {
    if((((input == 4) &&  cf==1 ) && (a58 == 3 && (((140 < a65) && (198 >= a65)) && a140 == 34)))) {
    	cf = 0;
    	a65 = (((((a65 % 11) + 118) - 8968) - 4912) + 13885);
    	a42 = (a58 + 11);
    	a46 = ((a58 / a58) - -3);
    	a140 = 32 ;
    	a58 = 2; 
    	 //printf("%d\n", 16);  
    } 
}
 int calculate_outputm14(int input) {
    if(((a140 == 34 && a58 == 3) && (((140 < a65) && (198 >= a65)) && ( cf==1  && (input == 9))))) {
    	cf = 0;
    	a107 = (a42 - 4);
    	a46 = (a107 + -2); 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm15(int input) {
    if((((140 < a65) && (198 >= a65)) && ((a140 == 34 && ((input == 3) &&  cf==1 )) && a58 == 3))) {
    	cf = 0;
    	a13 = 36 ;
    	a65 = (((a65 * -5) - 1540) * 5);
    	a46 = (a42 - 3);
    	a140 = 33 ;
    	a58 = (a42 / a46); 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm16(int input) {
    if(((a58 == 3 && ( cf==1  && (input == 8))) && (a140 == 34 && ((140 < a65) && (198 >= a65))))) {
    	cf = 0;
    	a107 = (a46 + -4);
    	a46 = a58; 
    	 //printf("%d\n", 20);  
    } 
    if((((((140 < a65) && (198 >= a65)) && a58 == 3) && a140 == 34) && ( cf==1  && (input == 6)))) {
    	cf = 0;
    	a140 = 32 ;
    	a65 = ((((a65 % 11) + 123) - -3) + 4);
    	a46 = (a58 + 1);
    	a42 = (a58 - -5);
    	a58 = (a46 - 2); 
    	 //printf("%d\n", 25);  
    } 
    if((((a140 == 34 && ((140 < a65) && (198 >= a65))) && a58 == 3) && ((input == 2) &&  cf==1 ))) {
    	cf = 0;
    	a107 = ((a46 + a58) + -7);
    	a46 = ((a42 / a107) - 9); 
    	 //printf("%d\n", 20);  
    } 
}
 int calculate_outputm17(int input) {
    if((a65 <=  117 && ((( cf==1  && (input == 4)) && a140 == 33) && a58 == 1))) {
    	cf = 0;
    	a22 = ((a58 / a58) + 9); 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm18(int input) {
    if(((((input == 2) &&  cf==1 ) && a140 == 33) && (a65 <=  117 && a58 == 1))) {
    	cf = 0;
    	a65 = (((((a65 + 0) / 5) + -11387) % 28) - -182);
    	a140 = 34 ;
    	a46 = (a58 - -2);
    	a107 = (a58 - -4);
    	a58 = ((a107 - a22) - -7); 
    	 //printf("%d\n", 24);  
    } 
    if(((a140 == 33 && ( cf==1  && (input == 9))) && (a58 == 1 && a65 <=  117))) {
    	cf = 0;
    	a140 = 34 ;
    	a42 = (a22 - 2);
    	a65 = (((((a65 % 28) + 170) + -1) + 18473) - 18471);
    	a46 = a42;
    	a58 = ((a22 - a42) + 1); 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm19(int input) {
    if(((((input == 4) &&  cf==1 ) && a140 == 33) && (a65 <=  117 && a58 == 1))) {
    	cf = 0;
    	a46 = (a22 - 9);
    	a110 = ((a22 / a46) + -3); 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm20(int input) {
    if((a140 == 33 && (a65 <=  117 && (a58 == 1 && ((input == 5) &&  cf==1 ))))) {
    	cf = 0;
    	a22 = (a46 + 4); 
    	 //printf("%d\n", 18);  
    } 
}
 int calculate_outputm21(int input) {
    if(((a140 == 34 && ( cf==1  && (input == 5))) && (((140 < a65) && (198 >= a65)) && a58 == 3))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 26);  
    } 
    if(((a140 == 34 && ( cf==1  && (input == 9))) && (a58 == 3 && ((140 < a65) && (198 >= a65))))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 26);  
    } 
    if((a140 == 34 && ((((input == 6) &&  cf==1 ) && a58 == 3) && ((140 < a65) && (198 >= a65))))) {
    	cf = 0;
    	a42 = ((a46 / a46) + 8);
    	a46 = (a58 - -2); 
    	 //printf("%d\n", 16);  
    } 
}
 int calculate_outputm22(int input) {
    if(((((140 < a65) && (198 >= a65)) && a58 == 3) && (a140 == 34 && ( cf==1  && (input == 9))))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 22);  
    } 
    if((((( cf==1  && (input == 1)) && a58 == 3) && a140 == 34) && ((140 < a65) && (198 >= a65)))) {
    	cf = 0;
    	a46 = a58;
    	a107 = (a58 - 1); 
    	 //printf("%d\n", 15);  
    } 
}
 int calculate_outputm23(int input) {
    if(((a58 == 3 && ((140 < a65) && (198 >= a65))) && (a140 == 34 && ( cf==1  && (input == 8))))) {
    	cf = 0;
    	a46 = ((a58 / a58) + 5);
    	a58 = ((a42 / a46) - 1);
    	a140 = 33 ;
    	a65 = (((a65 * 5) - 12940) * 2);
    	a22 = (a46 - -2); 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm24(int input) {
    if(((( cf==1  && (input == 7)) && a58 == 3) && (a140 == 34 && ((140 < a65) && (198 >= a65))))) {
    	cf = 0;
    	a46 = (a58 + 2);
    	a42 = (a46 + 4); 
    	 //printf("%d\n", 16);  
    } 
    if(((a58 == 3 && (((input == 5) &&  cf==1 ) && a140 == 34)) && ((140 < a65) && (198 >= a65)))) {
    	cf = 0;
    	a42 = ((a46 + a46) - 2); 
    	 //printf("%d\n", 23);  
    } 
    if((a58 == 3 && ((((input == 9) &&  cf==1 ) && ((140 < a65) && (198 >= a65))) && a140 == 34))) {
    	cf = 0;
    	a107 = (a58 + 4);
    	a46 = (a42 - 11); 
    	 //printf("%d\n", 15);  
    } 
}
 int calculate_outputm25(int input) {
    if(((a140 == 33 && a65 <=  117) && (( cf==1  && (input == 2)) && a58 == 1))) {
    	cf = 0;
    	a140 = 34 ;
    	a46 = ((a58 * a58) - -2);
    	a65 = ((((((a65 * 1) % 28) - -168) / 5) * 51) / 10);
    	a107 = (a58 + 2);
    	a58 = ((a107 - a107) + 3); 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm26(int input) {
    if((a58 == 1 && ((a140 == 33 && ( cf==1  && (input == 3))) && a65 <=  117))) {
    	cf = 0;
    	a140 = 32 ;
    	a46 = (a58 + 3);
    	a42 = ((a58 - a46) - -15);
    	a65 = ((((a65 % 11) - -129) - -1917) - 1916);
    	a58 = (a42 + -10); 
    	 //printf("%d\n", 25);  
    } 
}

 int calculate_output(int input) {
        cf = 1;

    if(((a140 == 33 && a58 == 1) && (( cf==1  && a46 == 1) && a65 <=  117))) {
    	if((a140 == 33 && ((a58 == 1 && (a110 == 6 &&  cf==1 )) && a65 <=  117))) {
    		calculate_outputm1(input);
    	} 
    	if(((a140 == 33 && a58 == 1) && (a65 <=  117 && ( cf==1  && a110 == 7)))) {
    		calculate_outputm2(input);
    	} 
    } 
    if(((a140 == 34 && ((140 < a65) && (198 >= a65))) && (( cf==1  && a46 == 3) && a58 == 3))) {
    	if((((((140 < a65) && (198 >= a65)) && (a107 == 1 &&  cf==1 )) && a58 == 3) && a140 == 34)) {
    		calculate_outputm3(input);
    	} 
    	if((( cf==1  && a107 == 2) && ((a140 == 34 && ((140 < a65) && (198 >= a65))) && a58 == 3))) {
    		calculate_outputm4(input);
    	} 
    	if((a58 == 3 && (a140 == 34 && (((140 < a65) && (198 >= a65)) && ( cf==1  && a107 == 3))))) {
    		calculate_outputm5(input);
    	} 
    	if(((a107 == 5 &&  cf==1 ) && (a58 == 3 && (((140 < a65) && (198 >= a65)) && a140 == 34)))) {
    		calculate_outputm6(input);
    	} 
    	if((a58 == 3 && (((140 < a65) && (198 >= a65)) && ((a107 == 7 &&  cf==1 ) && a140 == 34)))) {
    		calculate_outputm7(input);
    	} 
    } 
    if(((a58 == 2 && ((a46 == 4 &&  cf==1 ) && ((117 < a65) && (140 >= a65)))) && a140 == 32)) {
    	if((((117 < a65) && (140 >= a65)) && ((a58 == 2 && (a42 == 8 &&  cf==1 )) && a140 == 32))) {
    		calculate_outputm8(input);
    	} 
    	if((((a42 == 10 &&  cf==1 ) && a140 == 32) && (((117 < a65) && (140 >= a65)) && a58 == 2))) {
    		calculate_outputm9(input);
    	} 
    	if((((a140 == 32 && ((117 < a65) && (140 >= a65))) && a58 == 2) && (a42 == 12 &&  cf==1 ))) {
    		calculate_outputm10(input);
    	} 
    	if(((a58 == 2 && ( cf==1  && a42 == 13)) && (a140 == 32 && ((117 < a65) && (140 >= a65))))) {
    		calculate_outputm11(input);
    	} 
    	if(((((117 < a65) && (140 >= a65)) && a140 == 32) && (a58 == 2 && ( cf==1  && a42 == 14)))) {
    		calculate_outputm12(input);
    	} 
    } 
    if(((((140 < a65) && (198 >= a65)) && a58 == 3) && (a140 == 34 && (a46 == 5 &&  cf==1 )))) {
    	if((((a140 == 34 && a58 == 3) && ((140 < a65) && (198 >= a65))) && ( cf==1  && a42 == 8))) {
    		calculate_outputm13(input);
    	} 
    	if(((a140 == 34 && (a42 == 9 &&  cf==1 )) && (((140 < a65) && (198 >= a65)) && a58 == 3))) {
    		calculate_outputm14(input);
    	} 
    	if((((a42 == 11 &&  cf==1 ) && ((140 < a65) && (198 >= a65))) && (a140 == 34 && a58 == 3))) {
    		calculate_outputm15(input);
    	} 
    	if(((a140 == 34 && (a42 == 12 &&  cf==1 )) && (a58 == 3 && ((140 < a65) && (198 >= a65))))) {
    		calculate_outputm16(input);
    	} 
    } 
    if(((a58 == 1 && (a65 <=  117 && a140 == 33)) && (a46 == 6 &&  cf==1 ))) {
    	if(((a140 == 33 && a58 == 1) && (( cf==1  && a22 == 8) && a65 <=  117))) {
    		calculate_outputm17(input);
    	} 
    	if(((a65 <=  117 && a58 == 1) && (a140 == 33 && ( cf==1  && a22 == 9)))) {
    		calculate_outputm18(input);
    	} 
    	if((((a22 == 10 &&  cf==1 ) && a140 == 33) && (a65 <=  117 && a58 == 1))) {
    		calculate_outputm19(input);
    	} 
    	if((a65 <=  117 && (a140 == 33 && ((a22 == 13 &&  cf==1 ) && a58 == 1)))) {
    		calculate_outputm20(input);
    	} 
    } 
    if(((( cf==1  && a46 == 7) && a58 == 3) && (a140 == 34 && ((140 < a65) && (198 >= a65))))) {
    	if((((a42 == 7 &&  cf==1 ) && a140 == 34) && (a58 == 3 && ((140 < a65) && (198 >= a65))))) {
    		calculate_outputm21(input);
    	} 
    	if(((((140 < a65) && (198 >= a65)) && a58 == 3) && (a140 == 34 && ( cf==1  && a42 == 8)))) {
    		calculate_outputm22(input);
    	} 
    	if((((((140 < a65) && (198 >= a65)) && a140 == 34) && a58 == 3) && ( cf==1  && a42 == 12))) {
    		calculate_outputm23(input);
    	} 
    	if(((a58 == 3 && (a42 == 14 &&  cf==1 )) && (((140 < a65) && (198 >= a65)) && a140 == 34))) {
    		calculate_outputm24(input);
    	} 
    } 
    if(((a65 <=  117 && a140 == 33) && (a58 == 1 && ( cf==1  && a46 == 8)))) {
    	if(((a58 == 1 && (a140 == 33 && a65 <=  117)) && ( cf==1  && a13 == 34))) {
    		calculate_outputm25(input);
    	} 
    	if(((a58 == 1 && a140 == 33) && (a65 <=  117 && (a13 == 36 &&  cf==1 )))) {
    		calculate_outputm26(input);
    	} 
    } 
    errorCheck();

    if( cf==1 ) 
	{
    	//fprintf(stderr, "Invalid input: %d\n", input); 
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

        // read input
    
        // operate eca engine
        if((symb != 5) && (symb != 6) && (symb != 1) && (symb != 7) && (symb != 2) && (symb != 8) && (symb != 3) && (symb != 9) && (symb != 10) && (symb != 4))
          return -2;
        calculate_output(symb);
    }
    
    return 0;

}
