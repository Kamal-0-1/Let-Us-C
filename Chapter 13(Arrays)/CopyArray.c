#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[5];
    for(int i=0,j=4;j>=0;i++,j--){
        arr2[i]=arr1[j];
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}