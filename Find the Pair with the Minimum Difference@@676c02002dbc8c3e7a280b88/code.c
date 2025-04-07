// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,k,max=0,n,min;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (n==1){
        printf("-1");
    }
    for (i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<max){
            min=arr[i];
        }
    }
    // for (i=0;i<n;i++){
    //     for (j=1;j<n;j++){
    //         if (arr[i]-arr[j]<)
    //     }
    printf("%d",max);
     printf("%d",min);
     
     }