/*  Program to Write a menu driven program to perform the following operations till the user selects Exit.
    Accept appropriate data for each option. Use standard library functions from
    math.h
    i. Sine ii. Cosine iii. Log iv. ex v. Square Root vi. Exit*/
//By Hanumant More

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opt,ch;
    float n,x,ans;
    printf("\n1.Sine \n2.Cosine \n3.Log \n4.ex \n5.Square Root \n6.Exit\n");
    printf("Enter the function you want you use: \n");
    scanf("%d", &opt);

    switch(opt)
    {
        case 1:
            printf("Enter a no: ");
            scanf("%f", &n);
            printf("Sine of the number is %f", sin(n));
        break;
        case 2:
            printf("Enter a no: ");
            scanf("%f", &n);
            printf("%f", cos(n));
        break;
        case 3:
            printf("\nEnter Number:");
            scanf("%f",&n);
            ans = log(n);
            printf("\n%f log is %f", n, ans);
        break;
        case 4:
            printf("\nEnter Number:");
            scanf("%f",&n);
            ans = ceil(n);
            printf("\n%f ceiling is %f",n,ans);
        break;
        case 5:
            printf("\nEnter Number :") ;
            scanf("%f",&n);
            ans = sqrt(n);
            printf("\n %f is square root of %f", ans, n);
        case 6:
            printf("\nExit");
            exit(0);
    }
    
    return 0;
}