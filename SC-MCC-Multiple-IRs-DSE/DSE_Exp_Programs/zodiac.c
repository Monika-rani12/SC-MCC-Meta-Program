  #include<stdio.h>
  #ifdef LLBMC
  #include <llbmc.h>
  #else
  #include <klee/klee.h>
  #endif
  
  #define BOUND 1 //BOUND 5
  int kappa;
  int input,output;
  #include <assert.h>
  #include <math.h>
  #include <stdlib.h>
  
  extern void __VERIFIER_error(int);
  
  // inputs
  int inputs[] = {2,5,1,3,4};
  
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
  
 int cf,a52,a89,a119,a147,a51,a136,a153,a58;

  
  
  void errorCheck() {
  
  }

 
  
  int main()
  {
  kappa = 0;
  // main i/o-loop
  int symb;
printf("POINT: 85\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++){
klee_make_symbolic(&symb, sizeof(int ), "symb");

klee_make_symbolic(&cf, sizeof(int ), "cf"); 
klee_make_symbolic(&a52, sizeof(int ), "a52"); 
klee_make_symbolic(&a89, sizeof(int ), "a89"); 
klee_make_symbolic(&a119, sizeof(int ), "a119"); 
klee_make_symbolic(&a147, sizeof(int ), "a147"); 
klee_make_symbolic(&a51, sizeof(int ), "a51"); 
klee_make_symbolic(&a136, sizeof(int ), "a136"); 
klee_make_symbolic(&a153, sizeof(int ), "a153"); 
klee_make_symbolic(&a58, sizeof(int ), "a58"); 


printf("POINT: 87\n");



  if(((a119 == 10 && (a119 == 10 && ( cf == 1  && a58 == 10))) && (a89 == 32 && (a119 == 10 && (a89 == 32 && a89 == 32))))) 
printf("POINT: 88\n");
  printf("This is return -2 \n");
  //calculate_output(symb);
  }
  return 0;
  
  }
  
  
