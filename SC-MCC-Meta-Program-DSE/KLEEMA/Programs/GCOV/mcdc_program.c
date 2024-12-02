#include <stdio.h>
#include <stdbool.h>

int main() {
    int input; 

    printf("Enter an input to check if it meets the criteria: ");
    scanf("%d", &input);

    // Single, complex conditional statement
    if ((input % 7 == 0) && (input > 100) || (input / 5 != 0)) {
        printf("%d meets the criteria.\n", input);
    } else {
        printf("%d does not meet the criteria.\n", input);
    }

    return 0;
}

