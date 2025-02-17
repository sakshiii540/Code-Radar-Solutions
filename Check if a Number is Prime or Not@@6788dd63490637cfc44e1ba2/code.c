#include<stdio.h>
int main(){
    int a;
    int b = 0;
    int i = 1;
    scanf("%d",&a);
    while(i<=a){
        if(a%i == 0){
            b = b + 1;
            }}
    if(b>2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
    }