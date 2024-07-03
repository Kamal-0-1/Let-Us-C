#include<stdio.h>
int main(){
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
    if(y%100==0){
        if(y%400==0){
            printf("Leap Year");
        }
        else{
            printf("Not a leap Year");
        }
    }
    else{
         if(y%4==0){
            printf("Leap Year");
        }
        else{
            printf("Not a leap Year");
        }
    }
    return 0;
}