// Your code here...
#include <stdio.h>
int main(){
    int i,j;
    char n[100];
    scanf("%s",n);
    i=strlen(n);
    printf("%d",i);
    for (j=1;j<=i;j++){
        n[j]=n[i-j+1];
    }
    printf("%c",n[j]);
    
}
