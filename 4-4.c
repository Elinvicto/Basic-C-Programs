// Program to Write a program to display all prime numbers between 1 and n.
//By Hanumant More
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, count, n;
    printf("Enter max range ro print Prime numbers: ");
    scanf("%d",&n);

    for(num = 1; num <= n; num++)
    {

        count = 0;
        for(i=2;i<=num/2;i++)
        {
             if(num%i==0)
             {
                count++;
                break;
             }
        }
        
        if(count==0 && num!= 1)
            printf("%d ",num);
    }
    return 0;
}