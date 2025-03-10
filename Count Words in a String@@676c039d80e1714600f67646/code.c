// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int i,j=0,n;
    char word[100];
    scanf("%s",word);
    n=strlen(word);
    for(i=0;i<=n;i++){
        if(word[i]!=' '){
            j++;
        }
    }
    printf("%d",j);
    
}