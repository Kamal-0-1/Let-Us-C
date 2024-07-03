#include<stdio.h>
int main(){
    float s=0;
    for(int i=1;i<=7;i++){
        float f=1;
        for(int j=1;j<=i;j++){
            f*=j;
        }
        s+=i/f;
    }
    printf("%f",s);
    return 0;
}