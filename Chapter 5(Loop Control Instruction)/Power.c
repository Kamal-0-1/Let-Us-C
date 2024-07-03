#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    int pow=n1,i=1;
    while(i<n2){
        pow*=n1;
        i++;
    }
    printf("%d",pow);
    return 0;
}