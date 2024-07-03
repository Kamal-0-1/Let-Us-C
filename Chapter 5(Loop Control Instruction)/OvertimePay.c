#include<stdio.h>
int main(){
    int i=1;
    int hours;
    while(i<=10){
        printf("Enter number of hours worked:");
        scanf("%d",&hours);
        int ot;
        if(hours>40){
            ot=(hours-40)*120;
            printf("Overtime Pay:Rs.%d\n",ot);
        }
        else{
            printf("Overtime Pay:Rs.0\n");
        }
        i++;
    }
    return 0;
}