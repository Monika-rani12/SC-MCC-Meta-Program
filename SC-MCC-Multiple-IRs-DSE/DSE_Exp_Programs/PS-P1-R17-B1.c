#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <klee/klee.h>
    #define BOUND 1
int kappa;

	// inputs
	int inputs[] = {2,5,3,1,4};

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

	 int a52,a176,a166,cf,a167,a62,a175;


	void errorCheck() {

	}
 void calculate_outputm1(int input) {
printf("POINT: 1\n");

    if((((a166 == 33 &&  cf == 1 ) && (input == 3)) && a176 == 6)) {
printf("POINT: 2\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 11; 
    	 printf("%d\n", 25);   
    } 
printf("POINT: 3\n");

    if(((a166 == 33 && ( cf == 1  && a176 == 6)) && (input == 4))) {
printf("POINT: 4\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 34 ; 
    	 printf("%d\n", 23);   
    } 
printf("POINT: 5\n");

    if(((input == 5) && ((a166 == 33 &&  cf == 1 ) && a176 == 6))) {
printf("POINT: 6\n");
    	cf = 0;
    	a176 = 11; 
    	 printf("%d\n", 24);   
    } 
}
 void calculate_outputm2(int input) {
printf("POINT: 7\n");

    if(((input == 4) && ((a166 == 33 &&  cf == 1 ) && a176 == 7))) {
printf("POINT: 8\n");
    	cf = 0;
    	a176 = 11; 
    	 printf("%d\n", 25);   
    } 
}
 void calculate_outputm3(int input) {
printf("POINT: 9\n");

    if((((input == 3) && (a176 == 8 &&  cf == 1 )) && a166 == 33)) {
printf("POINT: 10\n");
    	cf = 0;
    	a166 = 35 ;
    	a175 = 6; 
    	 printf("%d\n", 19);   
    } 
}
 void calculate_outputm4(int input) {
printf("POINT: 11\n");

    if(((input == 2) && (a176 == 10 && (a166 == 33 &&  cf == 1 )))) {
printf("POINT: 12\n");
    	cf = 0;
    	a166 = 36 ;
    	a62 = 35 ; 
    	 printf("%d\n", 25);   
    } 
}
 void calculate_outputm5(int input) {
printf("POINT: 13\n");

    if(((( cf == 1  && a166 == 33) && a176 == 11) && (input == 3))) {
printf("POINT: 14\n");
    	cf = 0;
    	a166 = 36 ;
    	a62 = 33 ; 
    	 printf("%d\n", 21);   
    } 
}
 void calculate_outputm6(int input) {
printf("POINT: 15\n");

    if(((( cf == 1  && a176 == 12) && (input == 5)) && a166 == 33)) {
printf("POINT: 16\n");
    	cf = 0;
    	a176 = 8; 
    	 printf("%d\n", 26);   
    } 
printf("POINT: 17\n");

    if(((( cf == 1  && a176 == 12) && a166 == 33) && (input == 3))) {
printf("POINT: 18\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 8; 
    	 printf("%d\n", 19);   
    } 
}
 void calculate_outputm7(int input) {
printf("POINT: 19\n");

    if(((a166 == 32 && (a52 == 5 &&  cf == 1 )) && (input == 5))) {
printf("POINT: 20\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 33 ; 
    	 printf("%d\n", 26);   
    } 
printf("POINT: 21\n");

    if(((a166 == 32 && (a52 == 5 &&  cf == 1 )) && (input == 2))) {
printf("POINT: 22\n");
    	cf = 0;
    	a52 = 7; 
    	 printf("%d\n", 26);   
    } 
}
 void calculate_outputm8(int input) {
printf("POINT: 23\n");

    if((((input == 5) && ( cf == 1  && a166 == 32)) && a52 == 7)) {
printf("POINT: 24\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 11; 
    	 printf("%d\n", 25);   
    } 
printf("POINT: 25\n");

    if(((( cf == 1  && a52 == 7) && (input == 4)) && a166 == 32)) {
printf("POINT: 26\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 32 ; 
    	 printf("%d\n", 21);   
    } 
}
 void calculate_outputm9(int input) {
printf("POINT: 27\n");

    if(((input == 2) && (( cf == 1  && a166 == 32) && a52 == 8))) {
printf("POINT: 28\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 34 ; 
    	 printf("%d\n", 23);   
    } 
printf("POINT: 29\n");

    if((a166 == 32 && (a52 == 8 && ( cf == 1  && (input == 4))))) {
printf("POINT: 30\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);   
    } 
printf("POINT: 31\n");

    if(((a52 == 8 && (a166 == 32 &&  cf == 1 )) && (input == 5))) {
printf("POINT: 32\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 6; 
    	 printf("%d\n", 26);   
    } 
}
 void calculate_outputm10(int input) {
printf("POINT: 33\n");

    if(((a166 == 32 && (a52 == 9 &&  cf == 1 )) && (input == 4))) {
printf("POINT: 34\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 6; 
    	 printf("%d\n", 21);   
    } 
}
 void calculate_outputm11(int input) {
printf("POINT: 35\n");

    if(((a166 == 32 && ( cf == 1  && a52 == 11)) && (input == 3))) {
printf("POINT: 36\n");
    	cf = 0;
    	 
    	 printf("%d\n", 25);   
    } 
}
 void calculate_outputm12(int input) {
printf("POINT: 37\n");

    if(((input == 3) && (( cf == 1  && a167 == 33) && a166 == 34))) {
printf("POINT: 38\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 5; 
    	 printf("%d\n", 21);   
    } 
printf("POINT: 39\n");

    if((a166 == 34 && ((input == 4) && ( cf == 1  && a167 == 33)))) {
printf("POINT: 40\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 10; 
    	 printf("%d\n", 23);   
    } 
printf("POINT: 41\n");

    if(((( cf == 1  && a166 == 34) && (input == 2)) && a167 == 33)) {
printf("POINT: 42\n");
    	cf = 0;
    	a166 = 36 ;
    	a62 = 33 ; 
    	 printf("%d\n", 21);   
    } 
}
 void calculate_outputm13(int input) {
printf("POINT: 43\n");

    if(((( cf == 1  && (input == 4)) && a166 == 34) && a167 == 32)) {
printf("POINT: 44\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 7; 
    	 printf("%d\n", 21);   
    } 
printf("POINT: 45\n");

    if(((( cf == 1  && a166 == 34) && (input == 5)) && a167 == 32)) {
printf("POINT: 46\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 8; 
    	 printf("%d\n", 24);   
    } 
printf("POINT: 47\n");

    if((a166 == 34 && ((input == 3) && (a167 == 32 &&  cf == 1 )))) {
printf("POINT: 48\n");
    	cf = 0;
    	a166 = 35 ;
    	a175 = 4; 
    	 printf("%d\n", 23);   
    } 
}
 void calculate_outputm14(int input) {
printf("POINT: 49\n");

    if((a167 == 34 && ((a166 == 34 &&  cf == 1 ) && (input == 5)))) {
printf("POINT: 50\n");
    	cf = 0;
    	a166 = 36 ;
    	a62 = 33 ; 
    	 printf("%d\n", 21);   
    } 
printf("POINT: 51\n");

    if(((( cf == 1  && a166 == 34) && (input == 3)) && a167 == 34)) {
printf("POINT: 52\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 9; 
    	 printf("%d\n", 24);   
    } 
}
 void calculate_outputm15(int input) {
printf("POINT: 53\n");

    if(((((input == 4) &&  cf == 1 ) && a167 == 35) && a166 == 34)) {
printf("POINT: 54\n");
    	cf = 0;
    	a166 = 36 ;
    	a62 = 32 ; 
    	 printf("%d\n", 24);   
    } 
}
 void calculate_outputm16(int input) {
printf("POINT: 55\n");

    if(((a175 == 4 && (a166 == 35 &&  cf == 1 )) && (input == 4))) {
printf("POINT: 56\n");
    	cf = 0;
    	 
    	 printf("%d\n", 19);   
    } 
}
 void calculate_outputm17(int input) {
printf("POINT: 57\n");

    if((a166 == 35 && (a175 == 6 && ( cf == 1  && (input == 5))))) {
printf("POINT: 58\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 11; 
    	 printf("%d\n", 24);   
    } 
printf("POINT: 59\n");

    if((a166 == 35 && (( cf == 1  && (input == 2)) && a175 == 6))) {
printf("POINT: 60\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 12; 
    	 printf("%d\n", 23);   
    } 
}
 void calculate_outputm18(int input) {
printf("POINT: 61\n");

    if((a175 == 8 && (( cf == 1  && a166 == 35) && (input == 4)))) {
printf("POINT: 62\n");
    	cf = 0;
    	a175 = 6; 
    	 printf("%d\n", 26);   
    } 
}
 void calculate_outputm19(int input) {
printf("POINT: 63\n");

    if((a166 == 36 && (a62 == 33 && ((input == 2) &&  cf == 1 )))) {
printf("POINT: 64\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 32 ; 
    	 printf("%d\n", 19);   
    } 
printf("POINT: 65\n");

    if(((input == 5) && ((a62 == 33 &&  cf == 1 ) && a166 == 36))) {
printf("POINT: 66\n");
    	cf = 0;
    	a166 = 33 ;
    	a176 = 10; 
    	 printf("%d\n", 23);   
    } 
printf("POINT: 67\n");

    if(((a62 == 33 && (a166 == 36 &&  cf == 1 )) && (input == 4))) {
printf("POINT: 68\n");
    	cf = 0;
    	a166 = 35 ;
    	a175 = 8; 
    	 printf("%d\n", 23);   
    } 
}
 void calculate_outputm20(int input) {
printf("POINT: 69\n");

    if((a166 == 36 && (( cf == 1  && a62 == 32) && (input == 5)))) {
printf("POINT: 70\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 33 ; 
    	 printf("%d\n", 24);   
    } 
printf("POINT: 71\n");

    if((a166 == 36 && (a62 == 32 && ( cf == 1  && (input == 3))))) {
printf("POINT: 72\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 8; 
    	 printf("%d\n", 19);   
    } 
}
 void calculate_outputm21(int input) {
printf("POINT: 73\n");

    if((a62 == 35 && ((input == 3) && ( cf == 1  && a166 == 36)))) {
printf("POINT: 74\n");
    	cf = 0;
    	a166 = 32 ;
    	a52 = 5; 
    	 printf("%d\n", 21);   
    } 
printf("POINT: 75\n");

    if(((a62 == 35 && (a166 == 36 &&  cf == 1 )) && (input == 4))) {
printf("POINT: 76\n");
    	cf = 0;
    	a166 = 34 ;
    	a167 = 35 ; 
    	 printf("%d\n", 21);   
    } 
}

 void calculate_output(int input) {
        cf = 1;

printf("POINT: 77\n");

    if((a166 == 33 &&  cf == 1 )) {
printf("POINT: 78\n");
printf("POINT: 79\n");

    	if((a176 == 6 &&  cf == 1 )) {
printf("POINT: 80\n");
    		calculate_outputm1(input);
    	} 
printf("POINT: 81\n");

    	if(( cf == 1  && a176 == 7)) {
printf("POINT: 82\n");
    		calculate_outputm2(input);
    	} 
printf("POINT: 83\n");

    	if((a176 == 8 &&  cf == 1 )) {
printf("POINT: 84\n");
    		calculate_outputm3(input);
    	} 
printf("POINT: 85\n");

    	if(( cf == 1  && a176 == 10)) {
printf("POINT: 86\n");
    		calculate_outputm4(input);
    	} 
printf("POINT: 87\n");

    	if((a176 == 11 &&  cf == 1 )) {
printf("POINT: 88\n");
    		calculate_outputm5(input);
    	} 
printf("POINT: 89\n");

    	if((a176 == 12 &&  cf == 1 )) {
printf("POINT: 90\n");
    		calculate_outputm6(input);
    	} 
    } 
printf("POINT: 91\n");

    if((a166 == 32 &&  cf == 1 )) {
printf("POINT: 92\n");
printf("POINT: 93\n");

    	if((a52 == 5 &&  cf == 1 )) {
printf("POINT: 94\n");
    		calculate_outputm7(input);
    	} 
printf("POINT: 95\n");

    	if(( cf == 1  && a52 == 7)) {
printf("POINT: 96\n");
    		calculate_outputm8(input);
    	} 
printf("POINT: 97\n");

    	if(( cf == 1  && a52 == 8)) {
printf("POINT: 98\n");
    		calculate_outputm9(input);
    	} 
printf("POINT: 99\n");

    	if(( cf == 1  && a52 == 9)) {
printf("POINT: 100\n");
    		calculate_outputm10(input);
    	} 
printf("POINT: 101\n");

    	if((a52 == 11 &&  cf == 1 )) {
printf("POINT: 102\n");
    		calculate_outputm11(input);
    	} 
    } 
printf("POINT: 103\n");

    if(( cf == 1  && a166 == 34)) {
printf("POINT: 104\n");
printf("POINT: 105\n");

    	if((a167 == 33 &&  cf == 1 )) {
printf("POINT: 106\n");
    		calculate_outputm12(input);
    	} 
printf("POINT: 107\n");

    	if((a167 == 32 &&  cf == 1 )) {
printf("POINT: 108\n");
    		calculate_outputm13(input);
    	} 
printf("POINT: 109\n");

    	if(( cf == 1  && a167 == 34)) {
printf("POINT: 110\n");
    		calculate_outputm14(input);
    	} 
printf("POINT: 111\n");

    	if(( cf == 1  && a167 == 35)) {
printf("POINT: 112\n");
    		calculate_outputm15(input);
    	} 
    } 
printf("POINT: 113\n");

    if(( cf == 1  && a166 == 35)) {
printf("POINT: 114\n");
printf("POINT: 115\n");

    	if(( cf == 1  && a175 == 4)) {
printf("POINT: 116\n");
    		calculate_outputm16(input);
    	} 
printf("POINT: 117\n");

    	if(( cf == 1  && a175 == 6)) {
printf("POINT: 118\n");
    		calculate_outputm17(input);
    	} 
printf("POINT: 119\n");

    	if((a175 == 8 &&  cf == 1 )) {
printf("POINT: 120\n");
    		calculate_outputm18(input);
    	} 
    } 
printf("POINT: 121\n");

    if(( cf == 1  && a166 == 36)) {
printf("POINT: 122\n");
printf("POINT: 123\n");

    	if((a62 == 33 &&  cf == 1 )) {
printf("POINT: 124\n");
    		calculate_outputm19(input);
    	} 
printf("POINT: 125\n");

    	if(( cf == 1  && a62 == 32)) {
printf("POINT: 126\n");
    		calculate_outputm20(input);
    	} 
printf("POINT: 127\n");

    	if((a62 == 35 &&  cf == 1 )) {
printf("POINT: 128\n");
    		calculate_outputm21(input);
    	} 
    } 
    errorCheck();

printf("POINT: 129\n");

    if( cf == 1 ) 
printf("POINT: 130\n");
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}

int main()
{
kappa=0;

    // main i/o-loop
printf("POINT: 131\n");

   for (int FLAG=0;FLAG<BOUND;FLAG++){
printf("POINT: 132\n");
        // read input
        int input; klee_make_symbolic(&input, sizeof(int ), "input");      
klee_make_symbolic(&a52, sizeof(int ), "a52");  
klee_make_symbolic(&a176, sizeof(int ), "a176");  
klee_make_symbolic(&a166, sizeof(int ), "a166");  
klee_make_symbolic(&cf, sizeof(int ), "cf");  
klee_make_symbolic(&a167, sizeof(int ), "a167");  
klee_make_symbolic(&a62, sizeof(int ), "a62");  
klee_make_symbolic(&a175, sizeof(int ), "a175");  		
        // operate eca engine
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a52,a176,a166,cf,a167,a62,a175);
		
printf("POINT: 133\n");

        if((input != 2) && (input != 5) && (input != 3) && (input != 1) && (input != 4))
printf("POINT: 134\n");
          printf("this is return -2");
        calculate_output(input);
    }
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a52,a176,a166,cf,a167,a62,a175);
	return 0;
}
