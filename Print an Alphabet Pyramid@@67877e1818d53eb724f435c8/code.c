// Your code here...
#include <stdio.h>
int main(){
    int i,j,n;
    int x=65;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%c",x);
        }
        printf("\n");
    }
}