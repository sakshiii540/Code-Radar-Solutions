#include<stdio.h>
int main(){
    int a,b,d;
    int c=0;
    scanf("%d",&a);
    for (b=1;b<=a;b++){
        d=a/b;
        if (d==0){
            c+=1;
            if (c==2){
                printf("Prime");
            }
            else{
                printf("Not Prime");
            }

            }
        }
    }
    