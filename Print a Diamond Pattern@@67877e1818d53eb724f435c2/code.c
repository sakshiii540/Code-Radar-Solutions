// Your code here...
#include <stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
        }

    
    printf("\n");

}
    for(i=n+1;i<=n*2-1;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=n ; k++){
            printf("*");
            }
        }
        printf("\n");
    }

}