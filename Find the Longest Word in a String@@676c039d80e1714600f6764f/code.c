// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int i,n,l=0;
    char ch[100];
    n=strlen(ch);
    scanf("%[^\n]s",ch);
    getchar();
    for (i=0;i<n;i++){
        if (ch[i]==' '){
            break;
        }
        else{
            l++;
        }
        printf("%d",l);

    }
    
}