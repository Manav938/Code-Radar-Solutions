#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
    }else if(n==2){
        printf(" 1 \n");
        printf("121");
    }else if(n==3){
        printf("  1  \n");
        printf(" 121 \n");
        printf("12321");
    }
    return 0;
}