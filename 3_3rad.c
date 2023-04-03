//Accept radius from the user and write a program having menu with the following options and corresponding actions
//By Hanumant More
#include<stdio.h>
#define pi 3.14
int main()
{
 int c;
 float r,A,C,V;
 printf("1. Area of circle\n2. Circumference of circle\n3. Volume of sphere.\n");
 printf("Enter your choice : ");
 scanf("%d",&c);
 switch(c)
 {
  case 1:  
              printf("\nEnter the radius of Circle : ");
              scanf("%f", &r);
              A = pi * r * r;
              printf("\nArea of Circle : %f",A);
   break;
  case 2:
              printf("\nEnter the radius of Circle : ");
              scanf("%f", &r);
     C = 2 * pi * r;
              printf("\nCircumference of Circle: %f ",C);
   break;
  case 3:
     printf("\nEnter the radius of the Sphere : ");
              scanf("%f", &r);
              V = (4/3) * pi * r * r * r;
              printf("\nVolume of the Sphere is : %f",V);
   break;
      default: printf ("\nInvalid entry");
 }
    
}