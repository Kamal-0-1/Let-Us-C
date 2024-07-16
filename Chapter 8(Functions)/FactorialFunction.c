#include<stdio.h>
int Factorial(int);
int main(){
    printf("Enter a number:");
    int N;
    scanf("%d",&N);
    printf("%d",Factorial(N));
    return 0;
}
int Factorial(int x){
    int s=1;
    for(int i=1;i<=x;i++){
        s*=i;
    }
    return s;
}