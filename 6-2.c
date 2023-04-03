/*FUNCTION WHICH ACCEPTS A CHARACTER AND INTEGER AS N AND DISPLAYS
THE NEXT N CHARACTERS */
#include<stdio.h>
int display(char);
void main()
{
char ch,c;
printf("Enter a character : ");
scanf("%c",&ch);
display(ch);
}

int display(char ch)
{
int n,i;
printf("\n how many next char you want to display? :");
scanf("%d",&n);
printf("\n you have entered : %c",ch);
printf("\n next character : ");
for(i=0;i<n;i++)
 {
 ch=ch+1;
 printf("\n %c",ch);
 }
}