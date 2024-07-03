#include<stdio.h>
int main(){
    printf("Enter cost price and selling price:");
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(sp-cp>0){
        printf("The seller has made a profit of Rs.%d",sp-cp);
    }
    else{
        printf("The seller has incurred a loss of Rs.%d",cp-sp);
    }
    if(sp==cp){
        printf("There is no profit or loss");
    }
    return 0;
}