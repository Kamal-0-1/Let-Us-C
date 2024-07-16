#include<stdio.h>
void fibo(int,int,int);
int main(){
    printf("0 ");
    fibo(0,1,1);
    return 0;
}
void fibo(int x,int y,int c){
    if(c!=25){
        printf("%d ",y);
        fibo(y,x+y,++c);
    }
}