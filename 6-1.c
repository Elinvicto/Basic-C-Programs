#include<stdio.h>
#include<conio.h>
int isEven(int num);
int main()
{
    int num,ans;
    printf("\n Enter the value of num");
    scanf("\n%d",&num);
    ans=isEven(num);
    if(ans==1)
    {
        printf("\n Number is even");
    }
    if(ans==0)
    {
        printf("\n Number is odd");
    }
    getch();
}
int isEven(int num1)
{
    if(num1%2==0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}