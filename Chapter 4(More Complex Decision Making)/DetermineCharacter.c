#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=127)){
        printf("It is a special symbol");
    }
    else if(ch>=48 && ch<=57){
        printf("It is a digit");
    }
    else if(ch>=65 && ch<=90){
        printf("It is an uppercase");
    }
    else{
        printf("It is a lowercase");
    }
    return 0;
}