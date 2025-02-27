#include <stdio.h>
int main(){
    int n,i,j,k,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        if (i>1){
            for (x=1;x<=i;x++){
                printf("%d",x);
            }

        }
        printf("\n");
    }

}