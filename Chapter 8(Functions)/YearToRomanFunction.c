#include<stdio.h>
void Roman(int);
int main(){
    int y;
    printf("Enter a Year:");
    scanf("%d",&y);
    Roman(y);
    return 0;
}
void Roman(int x){
    char rom[]={'I','V','X','L','C','D','M'};
    int val[]={1,5,10,50,100,500,1000};
    for(int i=6;i>=0;i--){
        int c=x/val[i];
        for(int j=1;j<=c;j++){
            printf("%c",rom[i]);
        }
        x%=val[i];
    }
}