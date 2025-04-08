// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,k,m;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if (k>n){
        m=k-n;
        for (i=m+1;i<n;i++){
            printf("%d ",arr[i]);
        }
        for (i=0;i<m+1;i++){
            printf("%d ",arr[i]);
        }
    }
    
    // for (i=k+1;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    // for (i=0;i<k+1;i++){
    //     printf("%d ",arr[i]);
    // }
}