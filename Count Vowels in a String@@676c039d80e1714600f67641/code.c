// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int i,j=0,n;
    char word[100];
    scanf("%s",word);
    n=strlen(word);
    for (i=1;i<=n;i++){
        if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A'||  word[i]=='E'||  word[i]=='I'|| word[i]=='O'|| word[i]=='U' ){
            j++;
        }
    }
    printf("%s",word[i]);
    printf("%d",j);

}
    