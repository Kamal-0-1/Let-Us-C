#include<stdio.h>
int main(){
    float a;
    float *b;
    float **c;
    a=3.14;
    b=&a;
    c=&b;
    printf("%p %p %p\n",&a,&b,&c);
    printf("%p %p\n",b,c);
    printf("%f %f %f",a,*b,**c);
    return 0;
}