// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
int i,j;
char ch,n;
char name[100];
scanf("[^\n]%s\n",name);
getchar(); 
scanf("%c\n",&n);
scanf("%c",ch);
for (i=0;name[i]!='\0';i++){
        if (name[i]==n){
            name[i]=ch;
        }
}
printf("%s",name);
}