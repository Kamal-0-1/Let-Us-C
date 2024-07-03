#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter sides of triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    int l=s1,s=s2+s3;
    if(s2>s1 && s2>s3){
        l=s2;
        s=s1+s3;
    }
    else if(s3>s1 && s3>s2){
        l=s3;
        s=s1+s2;
    }
    s>l?printf("Valid Triangle"):printf("Invalid Triangle");
    return 0;
}