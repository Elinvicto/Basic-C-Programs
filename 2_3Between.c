//Write a program to accept three numbers and check whether the first is between the other two numbers. Ex: Input 20 10 30. Output: 20 is between 10 and 30
//By Hanumant More
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>=b && a<=c)
    printf("%d is between %d and %d",a,b,c);
    else
    printf("%d is not between %d and %d",a,b,c);
}