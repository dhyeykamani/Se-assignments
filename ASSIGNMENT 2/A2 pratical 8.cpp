#include <stdio.h>
Function declaration
int factorial(int);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Function call
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    
    return 0;
}

// Function definition
int factorial(int n) {
    int fact = 1; 
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


