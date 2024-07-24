#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int c=0,n;
    printf("Enter the number to be searched:");
    scanf("%d",&n);
    for(int i=0;i<8;i++){
        if(arr[i]==n){
            c++;
        }
    }
    printf("The number %d is found %d time(s) in the array",n,c);
    return 0;
}