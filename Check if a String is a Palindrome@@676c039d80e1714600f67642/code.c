// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int n,j,i;
    char no[100];
    scanf("%s",no);
    n=strlen(no);
    for (i=0;i<=n/2;i++){
       if (no[i]==no[n-i-1]){
        printf("Yes");
        break;
       }
       else{
        printf("No");
        break;
       }
    }
    
}
