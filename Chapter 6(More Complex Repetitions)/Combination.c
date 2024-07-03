#include<stdio.h>
int main(){
    for(int x=1;x<=3;x++){
        for(int y=1;y<=3;y++){
            for(int z=1;z<=3;z++){
                printf("%d%d%d\n",x,y,z);
            }
        }
    }
    return 0;
}