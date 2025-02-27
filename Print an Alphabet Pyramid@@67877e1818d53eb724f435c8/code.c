// Your code here...
#include <stdio.h>
int main(){
    int i,j,n;
    int x;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            for (x=65;x<=90;x++){
                printf("%c ",x);
            }
            
        }
        printf("\n");
    }
}