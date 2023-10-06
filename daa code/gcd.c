#include<stdio.h>
 int GCD(m,n){
 	if(m==0)
 	  printf("%d as gcd.",n);
 	else if(n==0)
 	  printf("%d as gcd.",m);
 	else{
 		while(n!=0){
 			int r;
 			r=m%n;
 			m=n;
 			n=r;
		 }
		 printf("%d as gcd.",m);
	 }
 }
int main()
{
	int a,b,c;
	printf("enter the value a :");
	scanf("%d",&a);
	printf("\nenter the value b :");
	scanf("%d",&b);
	c=GCD(a,b);
	
	printf("\nname:prameshwor chaudhary\nroll no. : 17");
	return 0;
}
