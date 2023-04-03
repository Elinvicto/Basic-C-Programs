//Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the distance (s) travelled. (Hint: v = u + at, s = u + at2)
//By Hanumant More
#include<stdio.h>
void main()                    
{
   int t;
   float d , ivel,v, acc;
      printf("Enter the time in seconds:");
      scanf("%d",&t);
      printf("Enter the initial velocity:");
      scanf("%f", &ivel);
      printf("Enter the acceleration:");
      scanf("%f", &acc);
      v = (ivel + (acc * t));
      d = (ivel + (acc * (t*t)));
   printf("Total velocity is %.2f\n",v);
   printf("Total distance travelled is  %.2f", d);
}