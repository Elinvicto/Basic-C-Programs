//Accept two numbers and print arithmetic and harmonic mean of the two numbers (Hint: AM= (a+b)/2 , HM = ab/(a+b) )
//By Hanumant More
#include<stdio.h>
#include<conio.h>
void main()
{
   float a,b;
   float AM, HM;
   printf("Enter the 1st number: ");
   scanf("%f",&a);
   printf("Enter the 2nd number: ");
   scanf("%f",&b);
   AM=((a+b))/2;
   HM=a*b/((a+b));
   printf("Arithmetic Mean is: %f",AM);
   printf("\nHarmonic Mean is: %f",HM);
   getch();
}