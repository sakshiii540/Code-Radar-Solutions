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
        if (arr[i]<=arr[i+1]){
            l++;
        }
        
     }
     printf("%d",l);
        if (l==n-1){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }



}