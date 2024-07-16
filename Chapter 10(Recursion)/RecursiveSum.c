#include<stdio.h>
int sum(int);
int main(){
    printf("Enter a number:");
    int N;
    scanf("%d",&N);
    int t=sum(N);
    printf("%d",t);
    return 0;
}
int sum(int x){
    int s;
    if(x!=0){
        s=(x%10)+sum(x/10);
    }
    else{
        return 0;
    }
    return s;
}