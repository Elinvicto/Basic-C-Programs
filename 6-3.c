/*RECURSIVE FUNCTION TO CALCULATE THE GCD OF TWO NUMBER*/
//By Hanumant More
#include<stdio.h>
#include<math.h>
unsigned int gcd(unsigned i,unsigned j);
int main()
{
int a,b;
printf("Enter the two integers : \n");
scanf("%d,%d",&a,&b);
printf("gcd of %d and %d is %d\n",a,b,gcd(a,b));
return 0;
}
/* recursive function*/
unsigned int gcd(unsigned i,unsigned j)
{
if(j>i)
  return gcd(j,i);
if(j==0)
  return i;
else
  return gcd(j,i%j);
}