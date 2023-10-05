#include <stdio.h>

int main() {
    int num1, num2;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if num2 is the multiplicative inverse of num1
    if ((num1 * num2)%26 == 1) {
        printf("%d is the multiplicative inverse of %d\n", num2, num1);
    } else {
        printf("%d is not the multiplicative inverse of %d\n", num2, num1);
    }
    
    printf("\nname: prameshwor chaudhary");
    printf("\nRoll no: 17");

    return 0;
}
