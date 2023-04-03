/* #1Program to accept Temperature in Ferenhite(F) and print it in Celcius(C) and Kelvin(K) (Hint:C=5/9(F-32), K=C+273.15)*/
//By Hanumant More
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int F;
    float K, C;
    printf("Enter the temperature in Ferenheit (F): ");
    scanf("%d",&F);
    C= (5.0/9.0) * (F-32);
    K = C + 273.15;
    printf("Temperature in Kelvin(K):%f\n",K);
    printf("Temperature in Celcius(C):%f\n",C);
    return 0;
}