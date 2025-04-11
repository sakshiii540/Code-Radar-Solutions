#include <stdio.h>
#include <string.h>
int main() {
    int n,i,j,l=0,k=0,m=0;
    char ch[100],bu[100];
    scanf("%s\n",ch);
    n=strlen(ch);
    scanf("%s",bu);
     for(i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (ch[i]==ch[j]){
                k++;
            }
        }
     
        for (j=i+1;j<n;j++){
            if (bu[i]==bu[j]){
                m++;
            }
     }
     }
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (ch[i]==bu[j]){
                l++;
            }
        }
        
    }
    // printf("%d\n",l);
    // printf("%d\n",m);
    // printf("%d\n",n);
    // printf("%d\n",k);
    // printf("%d",n+ (m*2));
    if (m==k){
        if ((n+ (m*2))==l){
            printf("Yes");
        }
    }
    else{
        printf("No");
    }
        
}
