#include <stdio.h>
#include <string.h>
int main(){
    int i,k=0;
    char name[100];
    scanf("%[^\n]s",name);
    for (i=0; name[i]!='\0'; i++){
        k++;
    }
    printf("%d",k);
}
