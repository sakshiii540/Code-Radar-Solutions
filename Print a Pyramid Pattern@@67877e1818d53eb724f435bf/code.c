#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=(i+2)-n;j++){
            printf(" ");
        for (k=1;k<=i;k=k+2){
            printf("*");
        }
        }
        printf("\n");
    }
}