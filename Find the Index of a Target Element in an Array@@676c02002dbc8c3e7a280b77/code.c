// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,max=0,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for (i=0;i<n;i++){
        if (arr[i]==k){
            printf("%d",i);
            return 0;
        }
        
    }
    printf("-1") ;
        }
    
