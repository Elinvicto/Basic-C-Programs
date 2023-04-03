#include<stdio.h>
int main()
{
    int row,j;
    for(row='e';row>='a';row--)
    {
        for(j='a';j<=row;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}