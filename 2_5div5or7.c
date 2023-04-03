//Write a program to accept a number and check if it is divisible by 5 and 7.
//By Hanumant More
#include<stdio.h>
int main()
{
  int num,f,m;
  printf("\nEnter a number ");
  scanf("%d",&num);
  if(num%5==0)
  {
   f=1;
  }
  if(num%7==0)
  {
    m=1;
  }
  if(f==1 && m==1)
  {
   printf("\nThe number %d is divisible by 5 and 7",num);
  }     
  else if(f==1)
  {
   printf("\nThe number %d is divisible by 5 but not by 7",num);
  } 
  else if(m==1)
  {
   printf("\nThe number %d is divisible by 7 but not by 5",num);
  }     
  else
  {
   printf("\nThe number %d is neither divisible by 5 nor by 7",num);
  }
}