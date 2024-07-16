#include<stdio.h>
#include "areaperi.h"
int main(){
    printf("Enter radius of a circle:");
    float r;
    scanf("%f",&r);
    printf("Perimeter of the circle:%f\nArea of the circle:%f\n",PERIC(r),AREAC(r));
    printf("Enter side of a square:");
    int s;
    scanf("%d",&s);
    printf("Perimeter of the square:%d\nArea of the square:%d\n",PERIS(s),AREAS(s));
    int t1,t2,t3;
    printf("Enter three sides of a triangle:");
    scanf("%d %d %d",&t1,&t2,&t3);
    printf("Perimeter of the triangle:%d\n",PERIT(t1,t2,t3));
    printf("Enter the base and height of a triangle:");
    int b,h;
    scanf("%d %d",&b,&h);
    printf("Area of the triangle:%f\n",AREAT(b,h));
    return 0;
}