// Your code here...
#include <stdio.h>
#include <string.h>
int main {
    int n,i,j,l=0;
    char ch[100],bu[100];
    scanf("%s\n",ch);
    scanf("%s\n",bu);
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (ch[i]==bu[j]){
                l++;
            }
        }
        printf("%d",l);
    }
}

