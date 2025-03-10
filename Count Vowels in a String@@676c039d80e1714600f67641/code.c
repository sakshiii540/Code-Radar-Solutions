// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int i,j=0,n;
    char word[100];
    scanf("%s",word);
    n=strlen(word);
    printf("%d",n);
    for (i=1;i<=n;i++){
        if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
            j++;
        }
          printf("%d",j);
    }
    printf("%d",j);

}
    