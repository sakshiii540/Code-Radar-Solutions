// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for (i=k+1;i<n;i++){
        printf("%d",arr[i]);
    }
}