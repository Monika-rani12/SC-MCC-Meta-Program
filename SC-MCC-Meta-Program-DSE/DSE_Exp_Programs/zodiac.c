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
  
  int a43,a56,a159,a136,a152,a193,a8,cf;

  
  
  void errorCheck() {
  
  }

  
  void calculate_output(int input) {
  cf = 1;
  
printf("POINT: 41\n");



  if(((a56 == 4 && (a56 == 4 && a193 == 33)) && (a56 == 4 && (a56 == 4 && ((a152 == 4 &&  cf == 1 ) && a56 == 4))))) {

  }
  }
  
  int main()
  {
  kappa = 0;
  // main i/o-loop
  int symb;
printf("POINT: 85\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++){
klee_make_symbolic(&symb, sizeof(int ), "symb");

klee_make_symbolic(&a43, sizeof(int ), "a43");
klee_make_symbolic(&a56, sizeof(int ), "a56");
klee_make_symbolic(&a159, sizeof(int ), "a159");
klee_make_symbolic(&a136, sizeof(int ), "a136");
klee_make_symbolic(&a152, sizeof(int ), "a152");
klee_make_symbolic(&a193, sizeof(int ), "a193");
klee_make_symbolic(&a8, sizeof(int ), "a8");
klee_make_symbolic(&cf, sizeof(int ), "cf"); 

printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a43,a56,a159,a136,a152,a193,a8,cf);

printf("POINT: 87\n");




  if((symb != 2) && (symb != 5) && (symb != 1) && (symb != 3) && (symb != 4))
printf("POINT: 88\n");
  printf("This is return -2 \n");
  calculate_output(symb);
  }
 printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a43,a56,a159,a136,a152,a193,a8,cf);
  return 0;
  
  }
  
  
