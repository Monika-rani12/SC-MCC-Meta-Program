//This Program is Problem2-LTL-TRAINING-RERS18.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#define BOUND 12
int kappa;

int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>

	// inputs
	int inputs[] = {2,4,1,5,3};

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

	 int a1776670931  = 32;
	 int a1566412540  = 35;
	 int a880929251 = 4;
	 int a408014082 = 9;
	 int a1462962246  = 35;
	 int cf = 1;

 int calculate_outputm1(int input) {
    if(((input == 4) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 32 ;
    	a880929251 = 6; 
    	 //printf("%d\n", 23);  
    } 
    if(( cf==1  && (input == 5))) {
    	cf = 0;
    	a1462962246 = 35 ;
    	a408014082 = 11; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm2(int input) {
    if(( cf==1  && (input == 2))) {
    	cf = 0;
    	a1776670931 = 35 ; 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm3(int input) {
    if(((input == 5) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 35 ;
    	a408014082 = 11; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm4(int input) {
    if(( cf==1  && (input == 5))) {
    	cf = 0;
    	a1776670931 = 33 ; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm5(int input) {
    if(( cf==1  && (input == 2))) {
    	cf = 0;
    	a1462962246 = 33 ;
    	a1776670931 = 33 ; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm6(int input) {
    if(((input == 5) &&  cf==1 )) {
    	cf = 0;
    	a880929251 = 3; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm7(int input) {
    if(( cf==1  && (input == 5))) {
    	cf = 0;
    	a1462962246 = 33 ;
    	a1776670931 = 33 ; 
    	 //printf("%d\n", 20);  
    } 
    if(( cf==1  && (input == 2))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 20);  
    } 
    if(( cf==1  && (input == 3))) {
    	cf = 0;
    	a1462962246 = 33 ;
    	a1776670931 = 32 ; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm8(int input) {
    if(( cf==1  && (input == 2))) {
    	cf = 0;
    	a1462962246 = 32 ;
    	a880929251 = 3; 
    	 //printf("%d\n", 24);  
    } 
    if(((input == 3) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 35 ;
    	a408014082 = 11; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm9(int input) {
    if(( cf==1  && (input == 3))) {
    	cf = 0;
    	a1462962246 = 35 ;
    	a408014082 = 8; 
    	 //printf("%d\n", 22);  
    } 
    if(((input == 4) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 32 ;
    	a880929251 = 3; 
    	 //printf("%d\n", 22);  
    } 
    if(( cf==1  && (input == 2))) {
    	cf = 0;
    	a1462962246 = 33 ;
    	a1776670931 = 33 ; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm10(int input) {
    if(((input == 4) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 33 ;
    	a1776670931 = 34 ; 
    	 //printf("%d\n", 23);  
    } 
    if(((input == 2) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 34 ;
    	a1566412540 = 32 ; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm11(int input) {
    if(( cf==1  && (input == 5))) {
    	cf = 0;
    	a1462962246 = 32 ;
    	a880929251 = ((a408014082 - a408014082) - -3); 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm12(int input) {
    if(((input == 5) &&  cf==1 )) {
    	cf = 0;
    	a1462962246 = 34 ;
    	a1566412540 = 33 ; 
    	 //printf("%d\n", 26);  
    } 
    if(( cf==1  && (input == 4))) {
    	cf = 0;
    	a1462962246 = 34 ;
    	a1566412540 = 36 ; 
    	 //printf("%d\n", 25);  
    } 
}

 int calculate_output(int input) {
        cf = 1;

    if((a1462962246 == 33 &&  cf==1 )) {
    	if((a1776670931 == 33 &&  cf==1 )) {
    		calculate_outputm1(input);
    	} 
    	if((a1776670931 == 32 &&  cf==1 )) {
    		calculate_outputm2(input);
    	} 
    	if(( cf==1  && a1776670931 == 34)) {
    		calculate_outputm3(input);
    	} 
    	if((a1776670931 == 35 &&  cf==1 )) {
    		calculate_outputm4(input);
    	} 
    } 
    if(( cf==1  && a1462962246 == 32)) {
    	if((a880929251 == 3 &&  cf==1 )) {
    		calculate_outputm5(input);
    	} 
    	if(( cf==1  && a880929251 == 6)) {
    		calculate_outputm6(input);
    	} 
    } 
    if((a1462962246 == 34 &&  cf==1 )) {
    	if((a1566412540 == 33 &&  cf==1 )) {
    		calculate_outputm7(input);
    	} 
    	if(( cf==1  && a1566412540 == 32)) {
    		calculate_outputm8(input);
    	} 
    	if(( cf==1  && a1566412540 == 36)) {
    		calculate_outputm9(input);
    	} 
    } 
    if((a1462962246 == 35 &&  cf==1 )) {
    	if(( cf==1  && a408014082 == 8)) {
    		calculate_outputm10(input);
    	} 
    	if((a408014082 == 9 &&  cf==1 )) {
    		calculate_outputm11(input);
    	} 
    	if((a408014082 == 11 &&  cf==1 )) {
    		calculate_outputm12(input);
    	} 
    } 


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
        if((symb != 2) && (symb != 4) && (symb != 1) && (symb != 5) && (symb != 3))
          return -2;
       calculate_output(symb);
    }
    
        return 0;
    }
