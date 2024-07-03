#include<stdio.h>
int main(){
    int N;
    printf("Enter the amount:");
    scanf("%d",&N);
    int c=0;
    int arr[]={1,2,5,10,50,100};
    for(int i=5;i>=0;i--){
        c+=N/arr[i];
        N%=arr[i];
    }
    printf("%d",c);
    return 0;
}
