#include<stdio.h>
  #ifdef LLBMC
  #include <llbmc.h>
  #else
  #include <klee/klee.h>
  #endif
  
  int kappa;
  int main()
  {
    kappa = 0;
    int input; 

    printf("Enter an input to check if it meets the criteria: ");
    klee_make_symbolic(&input, sizeof(int ), "input"); 

    // Single, complex conditional statement
    if(((input != 7) && (input > 100)) || (input <= 0)){
        printf("meets the criteria");
    }
    return 0;
}

