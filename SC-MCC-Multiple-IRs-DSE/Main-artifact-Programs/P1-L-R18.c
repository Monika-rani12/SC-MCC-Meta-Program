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

    extern void __VERIFIER_error(int);

	// inputs
	int inputs[] = {4,5,3,1,2};

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

	 int a1917497990  = 32;
	 int a1268307040 = 4;
	 int cf = 1;
	 int a33642816  = 34;
	 int a1354855424  = 35;
	 int a2135605241  = 32;
	 int a1033413197 = 7;

 void calculate_outputm1(int input) {
    if((a33642816 == 33 && (a1917497990 == 34 && ( cf==1  && (input == 4))))) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 7; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
    if(((((input == 5) &&  cf==1 ) && a1917497990 == 34) && a33642816 == 33)) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 7; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm2(int input) {
    if(((( cf==1  && (input == 2)) && a33642816 == 33) && a1917497990 == 35)) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
    if(((( cf==1  && (input == 3)) && a1917497990 == 35) && a33642816 == 33)) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 21); fflush(stdout); 
    } 
    if(((((input == 5) &&  cf==1 ) && a33642816 == 33) && a1917497990 == 35)) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 11; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
}
 void calculate_outputm3(int input) {
    if((a1917497990 == 36 && (((input == 3) &&  cf==1 ) && a33642816 == 33))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
    if(((input == 1) && ((a1917497990 == 36 &&  cf==1 ) && a33642816 == 33))) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 6; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
}
 void calculate_outputm4(int input) {
    if((((input == 5) && (a33642816 == 32 &&  cf==1 )) && a1033413197 == 1)) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 21); fflush(stdout); 
    } 
    if(((input == 4) && ((a1033413197 == 1 &&  cf==1 ) && a33642816 == 32))) {
    	cf = 0;
    	a33642816 = 36 ;
    	a1354855424 = 36 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm5(int input) {
    if(((a33642816 == 32 && ( cf==1  && a1033413197 == 2)) && (input == 2))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 36 ; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if(((( cf==1  && a33642816 == 32) && a1033413197 == 2) && (input == 3))) {
    	cf = 0;
    	a1033413197 = 6; 
    	 printf("%d\n", 21); fflush(stdout); 
    } 
}
 void calculate_outputm6(int input) {
    if(((((input == 1) &&  cf==1 ) && a33642816 == 32) && a1033413197 == 4)) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 6; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
}
 void calculate_outputm7(int input) {
    if((a33642816 == 32 && ((a1033413197 == 6 &&  cf==1 ) && (input == 2)))) {
    	cf = 0;
    	a1033413197 = 2; 
    	 printf("%d\n", 26); fflush(stdout); 
    } 
    if(((((input == 5) &&  cf==1 ) && a33642816 == 32) && a1033413197 == 6)) {
    	cf = 0;
    	a1033413197 = 7; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if((a33642816 == 32 && ((input == 4) && ( cf==1  && a1033413197 == 6)))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
}
 void calculate_outputm8(int input) {
    if(((input == 3) && (a1033413197 == 7 && (a33642816 == 32 &&  cf==1 )))) {
    	cf = 0;
    	a1033413197 = 6; 
    	 printf("%d\n", 26); fflush(stdout); 
    } 
}
 void calculate_outputm9(int input) {
    if((a33642816 == 34 && (a2135605241 == 33 && ( cf==1  && (input == 1))))) {
    	cf = 0;
    	a33642816 = 32 ;
    	a1033413197 = 7; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if(((a2135605241 == 33 && ( cf==1  && (input == 2))) && a33642816 == 34)) {
    	cf = 0;
    	 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
}
 void calculate_outputm10(int input) {
    if(((a2135605241 == 32 && (a33642816 == 34 &&  cf==1 )) && (input == 1))) {
    	cf = 0;
    	a33642816 = 36 ;
    	a1354855424 = 33 ; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if(((( cf==1  && a33642816 == 34) && (input == 5)) && a2135605241 == 32)) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 8; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
    if(((a33642816 == 34 && ( cf==1  && a2135605241 == 32)) && (input == 3))) {
    	cf = 0;
    	a33642816 = 36 ;
    	a1354855424 = 35 ; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
}
 void calculate_outputm11(int input) {
    if(((input == 3) && ((a33642816 == 34 &&  cf==1 ) && a2135605241 == 35))) {
    	cf = 0;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm12(int input) {
    if((a2135605241 == 36 && (((input == 3) &&  cf==1 ) && a33642816 == 34))) {
    	cf = 0;
    	 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if(((( cf==1  && a33642816 == 34) && (input == 2)) && a2135605241 == 36)) {
    	cf = 0;
    	a33642816 = 36 ;
    	a1354855424 = 36 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
    if(((input == 4) && (a2135605241 == 36 && (a33642816 == 34 &&  cf==1 )))) {
    	cf = 0;
    	a33642816 = 32 ;
    	a1033413197 = 6; 
    	 printf("%d\n", 21); fflush(stdout); 
    } 
}
 void calculate_outputm13(int input) {
    if((a1268307040 == 5 && (a33642816 == 35 && ((input == 3) &&  cf==1 )))) {
    	cf = 0;
    	a33642816 = 36 ;
    	a1354855424 = 36 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm14(int input) {
    if((((a33642816 == 35 &&  cf==1 ) && a1268307040 == 6) && (input == 2))) {
    	cf = 0;
    	a33642816 = 33 ;
    	a1917497990 = 36 ; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
}
 void calculate_outputm15(int input) {
    if(((( cf==1  && a1268307040 == 7) && a33642816 == 35) && (input == 4))) {
    	cf = 0;
    	 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
    if((((input == 3) && ( cf==1  && a33642816 == 35)) && a1268307040 == 7)) {
    	cf = 0;
    	 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if(((a33642816 == 35 && ((input == 1) &&  cf==1 )) && a1268307040 == 7)) {
    	cf = 0;
    	a33642816 = 33 ;
    	a1917497990 = 34 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm16(int input) {
    if(((input == 4) && (( cf==1  && a33642816 == 35) && a1268307040 == 8))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
    if((a1268307040 == 8 && (a33642816 == 35 && ((input == 1) &&  cf==1 )))) {
    	cf = 0;
    	a1268307040 = 5; 
    	 printf("%d\n", 26); fflush(stdout); 
    } 
    if((((input == 2) && ( cf==1  && a33642816 == 35)) && a1268307040 == 8)) {
    	cf = 0;
    	a1268307040 = 7; 
    	 printf("%d\n", 21); fflush(stdout); 
    } 
}
 void calculate_outputm17(int input) {
    if((a1268307040 == 11 && (((input == 4) &&  cf==1 ) && a33642816 == 35))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
    if(((a1268307040 == 11 && ((input == 1) &&  cf==1 )) && a33642816 == 35)) {
    	cf = 0;
    	a1268307040 = 7; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm18(int input) {
    if(((a1354855424 == 33 && ( cf==1  && (input == 1))) && a33642816 == 36)) {
    	cf = 0;
    	a33642816 = 33 ;
    	a1917497990 = 35 ; 
    	 printf("%d\n", 26); fflush(stdout); 
    } 
}
 void calculate_outputm19(int input) {
    if(((input == 4) && (a1354855424 == 32 && (a33642816 == 36 &&  cf==1 )))) {
    	cf = 0;
    	a33642816 = 32 ;
    	a1033413197 = 1; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
    if((a33642816 == 36 && (a1354855424 == 32 && ((input == 1) &&  cf==1 )))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 35 ; 
    	 printf("%d\n", 19); fflush(stdout); 
    } 
    if((((input == 2) && (a33642816 == 36 &&  cf==1 )) && a1354855424 == 32)) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm20(int input) {
    if((((input == 5) && (a33642816 == 36 &&  cf==1 )) && a1354855424 == 35)) {
    	cf = 0;
    	a1354855424 = 32 ; 
    	 printf("%d\n", 25); fflush(stdout); 
    } 
    if(((a33642816 == 36 && ((input == 1) &&  cf==1 )) && a1354855424 == 35)) {
    	cf = 0;
    	a33642816 = 32 ;
    	a1033413197 = 4; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}
 void calculate_outputm21(int input) {
    if(((( cf==1  && a33642816 == 36) && (input == 3)) && a1354855424 == 36)) {
    	cf = 0;
    	a33642816 = 35 ;
    	a1268307040 = 5; 
    	 printf("%d\n", 26); fflush(stdout); 
    } 
    if((a1354855424 == 36 && ((input == 5) && ( cf==1  && a33642816 == 36)))) {
    	cf = 0;
    	a33642816 = 34 ;
    	a2135605241 = 33 ; 
    	 printf("%d\n", 22); fflush(stdout); 
    } 
}

 void calculate_output(int input) {
        cf = 1;

    if((a33642816 == 33 &&  cf==1 )) {
    	if((a1917497990 == 34 &&  cf==1 )) {
    		calculate_outputm1(input);
    	} 
    	if((a1917497990 == 35 &&  cf==1 )) {
    		calculate_outputm2(input);
    	} 
    	if((a1917497990 == 36 &&  cf==1 )) {
    		calculate_outputm3(input);
    	} 
    } 
    if((a33642816 == 32 &&  cf==1 )) {
    	if((a1033413197 == 1 &&  cf==1 )) {
    		calculate_outputm4(input);
    	} 
    	if((a1033413197 == 2 &&  cf==1 )) {
    		calculate_outputm5(input);
    	} 
    	if(( cf==1  && a1033413197 == 4)) {
    		calculate_outputm6(input);
    	} 
    	if((a1033413197 == 6 &&  cf==1 )) {
    		calculate_outputm7(input);
    	} 
    	if(( cf==1  && a1033413197 == 7)) {
    		calculate_outputm8(input);
    	} 
    } 
    if(( cf==1  && a33642816 == 34)) {
    	if((a2135605241 == 33 &&  cf==1 )) {
    		calculate_outputm9(input);
    	} 
    	if(( cf==1  && a2135605241 == 32)) {
    		calculate_outputm10(input);
    	} 
    	if(( cf==1  && a2135605241 == 35)) {
    		calculate_outputm11(input);
    	} 
    	if((a2135605241 == 36 &&  cf==1 )) {
    		calculate_outputm12(input);
    	} 
    } 
    if(( cf==1  && a33642816 == 35)) {
    	if(( cf==1  && a1268307040 == 5)) {
    		calculate_outputm13(input);
    	} 
    	if((a1268307040 == 6 &&  cf==1 )) {
    		calculate_outputm14(input);
    	} 
    	if((a1268307040 == 7 &&  cf==1 )) {
    		calculate_outputm15(input);
    	} 
    	if(( cf==1  && a1268307040 == 8)) {
    		calculate_outputm16(input);
    	} 
    	if((a1268307040 == 11 &&  cf==1 )) {
    		calculate_outputm17(input);
    	} 
    } 
    if(( cf==1  && a33642816 == 36)) {
    	if(( cf==1  && a1354855424 == 33)) {
    		calculate_outputm18(input);
    	} 
    	if((a1354855424 == 32 &&  cf==1 )) {
    		calculate_outputm19(input);
    	} 
    	if(( cf==1  && a1354855424 == 35)) {
    		calculate_outputm20(input);
    	} 
    	if((a1354855424 == 36 &&  cf==1 )) {
    		calculate_outputm21(input);
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
         if((symb != 4) && (symb != 5) && (symb != 3) && (symb != 1) && (symb != 2))
          return -2;
        calculate_output(symb);
    }
    
 return 0;

}


