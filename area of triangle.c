#include<stdio.h>
int main()
{
   float base,height,area;
   printf("Enter base number:");
   scanf("%f",&base);
   printf("Enter height:");
   scanf("%f",&height);
   area=(0.5*base*height);
   printf("The area of triangle is %1.2f",area);
   return 0;
}