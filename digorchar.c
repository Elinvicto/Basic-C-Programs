//Accept a character as input and check whether the character is a digit. (Check if .it is in the range ‘0’ to ‘9’ both inclusive)
//By Hanumant More
#include<stdio.h>
int main()
{
    char a;
	 printf("Enter a chracter: ");
	 scanf("%c", &a);
	
	 if(a>='0' && a<='9')
	 {
	  	printf("%c is a digit.",a);
	 }
	 else
	 {
	  	printf("%c is not a digit.",a);
	 }
}