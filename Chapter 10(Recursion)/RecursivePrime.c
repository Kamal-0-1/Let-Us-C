#include<stdio.h>
void factor(int,int);
int main(){
    int N;
    printf("Enter a numer:");
    scanf("%d",&N);
    factor(N,2);
    return 0;
}
void factor(int x,int y){
    if(y<=x){
        if(x%y==0){
            printf("%d ",y);
            x/=y;
        }
        else{
            y++;
        }
        factor(x,y);
    }
}