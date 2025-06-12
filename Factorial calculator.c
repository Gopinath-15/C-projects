#include <stdio.h>

int main() {
    int a, b = 1;
    
    // Equivalent to Scanner for input
    printf("Enter the number to calculate the factorial: ");
    scanf("%d", &a);
    
    // Loop to calculate factorial
    for(int i = 1; i <= a; i++) {
        b *= i;
        
    }
    printf("The factorial of %d is %d\n",a , b);
    
    return 0;
}
