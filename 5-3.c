/*  Program to Accept two complex numbers from the user (real part, imaginary part). Write a
    menu driven program to perform the following operations till the user selects Exit.
    i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT*/
//By Hanumant More

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n1,d1,n2,d2,opn,opd;
    printf("Enter two fraction number: \n");
    printf("1st number numerator : \n");
    scanf("%d",&n1);
    printf("1st number denominator: \n");
    scanf("%d",&d1);
    printf("2nd number numerator : \n");
    scanf("%d",&n2);
    printf("2nd number denominator: \n");
    scanf("%d",&d2);
    do
    {
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &c);
        switch(c)
        {
            case 1: 
                opn = (n1 * d2) + (n2 * d1);
                opd = (d1 * d2);
                printf("Addition of %d/%d and %d/%d is %d/%d\n", n1, d1, n2, d2, opn, opd);
            break;
            case 2: 
                opn = (n1 * d2) - (n2 * d1);
                opd = (d1 * d2);
                printf("Subtraction of %d/%d and %d/%d is %d/%d\n", n1, d1, n2, d2, opn, opd);
            break;
            case 3: 
                opn = (n1 * n2);
                opd = (d1 * d2);
                printf("Multiplication of %d/%d and %d/%d is %d/%d\n", n1, d1, n2, d2, opn, opd);
            break;
            case 4: 
                printf("Exit");
                exit(0);
            break;
        }
    } while(c!=4);   
    return 0;
}