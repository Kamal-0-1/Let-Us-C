#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    printf("Enter mark in subject1:");
    scanf("%d",&s1);
    printf("Enter mark in subject2:");
    scanf("%d",&s2);
    printf("Enter mark in subject3:");
    scanf("%d",&s3);
    printf("Enter mark in subject4:");
    scanf("%d",&s4);
    printf("Enter mark in subject5:");
    scanf("%d",&s5);
    int t=s1+s2+s3+s4+s5;
    float p=t/5;
    printf("Total marks obtained:%d\n",t);
    printf("Percentage:%f",p);
    return 0;
}