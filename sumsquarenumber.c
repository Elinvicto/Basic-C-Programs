//Write a function, which print the sum of the squares of the digits of a number.//
#include<stdio.h>
int main()
{
    int n,num;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        num=n%10;
        num=num*num;
        sum=sum+num;
        n=n/10;
    }
    printf("Sum is=%d",sum);
    return 0;
}