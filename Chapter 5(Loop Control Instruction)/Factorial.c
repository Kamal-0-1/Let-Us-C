#include<stdio.h>
int main(){
    int N,i=1;
    printf("Enter a number:");
    scanf("%d",&N);
    int fact=1;
    while(i<=N){
        fact*=i;
        i++;
    }
    printf("Factorail:%d",fact);

    return 0;
}