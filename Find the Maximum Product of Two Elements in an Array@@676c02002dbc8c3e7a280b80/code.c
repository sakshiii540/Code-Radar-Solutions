// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,l=0,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
        if (arr[i]*arr[j]>l){
            l=arr[i]*arr[j];
        }
        }
     }
     printf("%d",l);
}