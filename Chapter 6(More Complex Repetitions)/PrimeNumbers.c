# include <stdio.h>
int main( )
{
 printf("1\n");
 for(int i=2;i<=300;i++){
    int c=2;
    for(c=2;c<i;c++){
        if(i%c==0){
            break;
        }
    }
    if(c==i){
        printf("%d\n",i);
    }
 }
 return 0 ;
} 