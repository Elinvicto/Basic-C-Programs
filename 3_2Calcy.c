//Write a program, which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result.
//By Hanumant More
#include<stdio.h>
int main()
{
  int a,b,res;
  char c;

  printf("\n Enter any one operator +, -, *, / :");
  scanf("%c",&c);
  switch(c)
  {
    case '+':
 printf("\n Enter two numbers(with comma seperating them): ");
    scanf("%d,%d",&a,&b);
 res=a+b;
    printf("\n The sum is %d",res);
    break;
    case '-':
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res=a-b;
    printf("\n The difference is %d",res);
    break;
    case '*':
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res=a*b;
    printf("\n The product is %d",res);
    break;
    case '/':
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res=a/b;
    printf("\n The quotient is %d",res);
    break;
    default: printf ("\n Invalid entry");
  }
}