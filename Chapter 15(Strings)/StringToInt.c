#include<stdio.h>
int main(){
    char S[101];
    printf("Enter a number:");
    scanf("%s",S);
    int t=0,i=0;
    while(S[i]!='\0'){
        if (S[i]>=48 && S[i]<=57){
            t=t*10+(S[i]-48);
        }
        else
        {
            printf("Not a valid string");
            return 1;
        } 
        i++;
    }
    printf("The number is:%d",t);
    return 0;
}