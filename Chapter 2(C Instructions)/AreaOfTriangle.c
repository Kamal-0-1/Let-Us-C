#include<stdio.h>
# include <math.h>
int main(){
    float x,y,z,sp,a;
    printf("Enter sides of the triangle:");
    scanf("%f %f %f",&x,&y,&z);
    sp= (x+y+z)/2;
    a=sqrt(sp*(sp-x)*(sp-y)*(sp-z));
    printf("Area of triangle :%f",a); 

    return 0;
}
