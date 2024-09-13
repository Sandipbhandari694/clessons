#include<stdio.h>
int main(){
    float principle,time,rate,simpleinterest;
    printf("Enter principle:");
    scanf("%f",&principle);
    printf("Enter time:");
    scanf("%f",&time);
    printf("Enter rate:");
    scanf("%f",&rate); 
    simpleinterest=(principle*time*rate/100);
    printf("calculate simpleinterest is %1.2f",simpleinterest);
    return 0;
    }