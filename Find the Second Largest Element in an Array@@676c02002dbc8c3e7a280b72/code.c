// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,max=0,l=0,sl;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    for (i=0;i<n;i++){
        if (arr[i]>l){
            if (l!=max){
                l=arr[i];
            }
        }
    }
    printf("%d",max);
    
}