// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,k=0;
    char name[100];
    scanf("%s",name);
    for (i=0;i<n;i++){
        if (name[i]!='\0'){
            k++;
        }
    }
    printf("%d",k);

}