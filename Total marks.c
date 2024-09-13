#include<stdio.h>
int main(){

    printf("Calculate total score,average score and percentage.\n");
    int physics,chemistry,maths,biology,computer;
    float sum,average,percentage;

    printf("Enter mark of physics:");
    scanf("%d",&physics);
    printf("Enter mark of chemistry:");
    scanf("%d",&chemistry);
    printf("Enter mark of maths:");
    scanf("%d",&maths);
    printf("Enter mark of biology:");
    scanf("%d",&biology);
    printf("Enter mark of computer:");
    scanf("%d",&computer);
    
    sum=physics+chemistry+maths+biology+computer;
    average=sum/5;
    percentage=(sum/500)*100;
    
    printf("Total marks obtained : %1.2f \n Average mark : %1.2f \n Percentage : %1.2f",sum,average,percentage);
    
    return 0;
    
    }