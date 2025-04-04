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
}