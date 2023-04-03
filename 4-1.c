// Program to Write a program that accepts a number and prints its first digit.
//By Hanumant More
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, firstDigit;
    printf("Enter number = ");
    scanf("%d", &n);

    while(n >= 10)
    {
        n = n / 10;
    }

    firstDigit = n;
    
    printf("first digit = %d\n", firstDigit);

    return 0;
}