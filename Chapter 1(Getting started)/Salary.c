#include<stdio.h>
int main(){
    float salary,da,hra;
    printf("Enter salary:");
    scanf("%f",&salary);
    da=0.4*salary;
    hra=0.2*salary;
    printf("The gorss salary is %f",da+hra+salary);
    return 0;
}