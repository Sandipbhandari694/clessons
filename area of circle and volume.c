#include<stdio.h>
#define PI 3.14
int main(){
    float radius,height,area,volume;
    printf("Enter Radius of circle:");
    scanf("%f",&radius);
    printf("Enter Height of the container:");
    scanf("%f",&height);
    area= PI * radius* radius;
    volume= area*height;
    printf("area of circle is %1.2f and volume of container is %1.2f",area,volume);
}