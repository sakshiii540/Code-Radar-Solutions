// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=0;j<=i;j=j++){
            printf(" ");
        }
        printf("\n");
    }
}