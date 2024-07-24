#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(int i=1;i<9;i+=2){
        int t=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=t;
    }
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}