#include<stdio.h>
int main(){
    float d;
    printf("Enter distance:");
    scanf("%f",&d);
    printf("Distance in meters:%f\n",d*1000);
    printf("Distance in feet:%f\n",d*3281);
    printf("Distance in inches:%f\n",d*39370);
    printf("Distance in centimeters:%f",d*100000);

    return 0;
}