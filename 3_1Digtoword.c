//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine
//By Hanumant More
#include<stdio.h>
#include<conio.h>
void main()
{
   int ch;
   printf("Enter Digit(0-9): ");
   scanf("%d",&ch);
   switch(ch)
   {
case 0:
      printf("Zero\n");
      break;
case 1:
      printf("one\n");
      break;
case 2:
      printf("Two\n");
      break;
case 3:
      printf("Three\n");
      break;
case 4:
      printf("Four\n");
      break;
case 5:
      printf("Five\n");
      break;
case 6:
      printf("Six\n");
      break;
case 7:
      printf("Seven\n");
      break;
case 8:
      printf("Eight\n");
      break;
case 9:
      printf("Nine\n");
      break;
default:
      printf("invalid input\nPlease try again ....\n");
      break;
    }
}