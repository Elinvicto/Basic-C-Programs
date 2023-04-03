// Program to Write a program to accept n and display its multiplication table.
//By Hanumant More
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, multi;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d\n", num);
    for(multi = 1;multi <= 10;  multi++)
    {
     printf("%d X %d = %d \n", num, multi, num * multi);
    }
    return 0;
}