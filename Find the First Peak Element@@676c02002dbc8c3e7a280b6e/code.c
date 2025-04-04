// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,l=0,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        if ((arr[i+1]>arr[i]) && arr[i+1]>arr[i+2]){
            printf("%d",arr[i+1]);
            break;

        }
    }
     if (arr[0]>arr[1]){
        printf("%d",arr[0]);
     }
     if (arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
     }
}