#include <stdio.h>
#include <stdbool.h>
#include <klee/klee.h>
int main() {
    int input; 

    printf("Enter an input to check if it meets the criteria: ");
    klee_make_symbolic(&input, sizeof(int ), "input"); 

    // Single, complex conditional statement
    if ((input == 0) && (input > 100) || !(input == 3)) {
        printf("%d meets the criteria.\n", input);
    } else {
        printf("%d does not meet the criteria.\n", input);
    }

    return 0;
}

