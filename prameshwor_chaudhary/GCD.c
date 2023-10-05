
#include <stdio.h> 

int gcd(int a, int b) 
{ 

    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
}  
int main() 
{ 
    int a,b;
    printf("\nenter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("\nGCD of %d and %d is %d ", a, b, gcd(a, b)); 
    printf("\nname: prameshwor chaudhary");
    printf("\nRoll no: 17");
    return 0; 
}
