//To find the maximum of two numbers and minimum of three numbers
//By Hanumant More
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter two values to find maximum value: ");
    scanf("%d,%d",&a,&b);
    printf("Enter three values to find minimun value: ");
    scanf("%d,%d,%d",&c,&d,&e);
    if(a>b)
    {
    printf("%d is greater than %d\n",a,b);
    }
    if(b>a)
    {
    printf("%d is greater then %d\n",b,a);
    }
    if(a==b)
    {
    printf("%d is equal to %d\n",a,b);
    }
    if(c<d && c<e)
	{
		printf("%d is smaller than %d and %d",c,d,e);
	}
	else if(d<e)
	{
		printf("%d is smaller than %d and %d",d,c,e);
	}
	else
	{
		printf("%d is smaller than %d and %d",e,c,d);
	}	
    return 0;
}