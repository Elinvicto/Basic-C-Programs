//Write a program to accept an integer and check if it is even or odd.
//By Hanumant More
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2>0)
    printf("The %d is odd number",a);
    else
    printf("%d is an even number",a);
}