//Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface area and volume (Hint : surface area=2(lb+lh+bh ), volume = lbh )
//By Hanumant More
#include<stdio.h>
int main()
{
    float l,b,h,SF,V;
    printf("Enter lenght of cuboid: ");
    scanf("%f",&l);
    printf("Enter breadth of cuboid: ");
    scanf("%f",&b);
    printf("Enter height of cuboid: ");
    scanf("%f",&h);
    SF=2*(l*b+l*h+b*h);
    V=l*b*h;
    printf("Surface Area of the cuboid: %2.f\n",SF);
    printf("Volume of a cuboid: %2.f",V);
    return 0;
}