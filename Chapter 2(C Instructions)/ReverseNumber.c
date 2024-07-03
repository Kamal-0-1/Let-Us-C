#include<stdio.h>
int main(){
    int N,index=0;
    printf("Enter the number:");
    scanf("%d",&N);
    int arr[5];
    while(N>0){
        arr[index++]=N%10;
        N/=10;
    }
    int s=0;
    for(int i=0;i<index;i++){
        s*=10;
        s+=arr[i];
    }
    printf("%d",s);
    return 0;
}