#include<stdio.h>
#include<Math.h>
void PowFact(int,int,int,float*,float*);
int main(){
    int x,y,n;
    float p,f;
    printf("Enter two numbers to calculate power:");
    scanf("%d %d",&x,&y);
    printf("Enter a number calculate factorial:");
    scanf("%d",&n);
    PowFact(x,y,n,&p,&f);
    printf("Power:%f\nFactorial:%f",p,f);
    return 0;
}
void PowFact(int a,int b,int c,float *power,float *fact){
    *power=pow(a,b);
    float s=1;
    for(int i=1;i<=c;i++){
        s*=i;
    }
    *fact=s;
}