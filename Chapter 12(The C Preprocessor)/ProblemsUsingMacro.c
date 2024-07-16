# include <stdio.h>
#define ISUPPER(x) (x>=65 && x<=90?1:0)
#define ISLOWER(x) (x>=97 && x<=122?1:0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x,y) (x>y?x:y) 
int main(){
    printf("Enter a character:");
    char ch;
    scanf("%c",&ch);
    if(ISALPHA(ch)){
        if(ISUPPER(ch))
            printf("It is a capital letter\n");
        else 
            printf("It is a small letter\n");
    }
    else{
        printf("It is a digit\n");
    }
    printf("Enter two number:");
    int a,b;
    scanf("%d %d",&a,&b);
    int n=BIG(a,b);
    printf("%d is Bigger",n);
    return 0;
}