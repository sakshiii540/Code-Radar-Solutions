#include <stdio.h>
int main(){
    int i,j;
    char ch,n;
    char name[100];
    scanf("%[^\n]s",name);
    getchar(); 
    scanf("%c\n",&n);
    scanf("%c",ch);
    for (i=0;name[i]!='\0';i++){
            if (name[i]=='l'){
                printf("%c",ch);  
            }
            else{
                printf("%c",name[i]);
            }
}
}