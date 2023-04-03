/* Program to Write a program that accepts numbers continuously as long as the number is
 positive and prints the sum of the numbers read.*/
//By Hanumant More
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
	printf("Enter Postive numbers to sum:");
	while(1)
	{
		scanf("%d",&num);
		if(num<0)
		{
			break;
		}
		sum=sum+num;
	}
	printf("The sum of Positive Numbers = %d",sum);

    return 0;
}