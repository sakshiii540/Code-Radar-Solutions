// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,min,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        l=arr[i]+arr[i+1];
        printf("%d ",l);
    }
}