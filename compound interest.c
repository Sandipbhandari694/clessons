#include<stdio.h>
#include<math.h>
int main(){

    float principal,rate,time,compoundinterest;
    printf("Enter principal:");
    scanf("%f",&principal);
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("Enter time:");
    scanf("%f",&time);
    compoundinterest= principal*pow((1+rate/100),time)-principal;
    printf("Compound interst is %1.2f",compoundinterest);

}