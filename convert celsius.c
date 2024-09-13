#include<stdio.h>
void main(){
   float celsius,fahrenheit;
   printf("Enter celsius:");
   scanf("%f",&celsius);
   fahrenheit=(celsius*9 / 5)+32;
   printf("converted fahrenheit is %1.2f",fahrenheit);
   return 0;
}
