/*recursive function to calculate the factorial of number*/
//By Hanumant More
#include<stdio.h>
unsigned long factorial(int n)
{
return (n<1)?1:n*factorial(n-1);
}

int main()
{
 int n;
 printf("\n Enter the number for a factorial : ");
 scanf("%d",&n);
 printf("the factorial of %d is %lu",n,factorial(n));
 return 0;
}