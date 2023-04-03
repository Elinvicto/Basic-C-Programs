/*  Program to Write a program, which accepts a character from the user and checks if it is an
    alphabet, digit or punctuation symbol. If it is an alphabet, check if it is uppercase
    or lowercase and then change the case. */
//By Hanumant More
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter Any Character :\n");
    scanf(" %c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("Entered Character is Digit\n");
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("Entered Character is Capital Letter\n");
        ch = tolower(ch);
        printf("%c\n",ch);

    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Entered Character is Small Letter\n");
        ch = toupper(ch);
        printf("%c\n",ch); 
    }
    else
    {
        printf("Entered Character is Special Character\n");
    }
    return 0;
}