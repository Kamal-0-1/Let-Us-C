#include<stdio.h>
float Power(float,int);
int main(){
    printf("Enter two numbers:");
    float a;
    int b;
    scanf("%f %d",&a,&b);
    printf("%f",Power(a,b));
    return 0;
}
float Power(float x, int y){
    float s=1;
    for(int i=1;i<=y;i++){
        s*=x;
    }
    return s;
}