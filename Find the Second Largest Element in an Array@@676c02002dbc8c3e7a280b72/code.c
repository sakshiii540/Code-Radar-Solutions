// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,m=1,l=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            k=arr[i];
        }
        else{
            k=arr[i+1];
        }
        printf("%d ",k);
    }
}