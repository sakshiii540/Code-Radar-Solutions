// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int i;l=0
    char ch[100];
    scanf("%[^\n]s",ch);
    for (i=0;i<n;i++){
        if (ch[i]==' '){
            break;
        }
        else{
            l++;
        }

    }
    printf("%d",l);
}