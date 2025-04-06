// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,min,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=arr[0];
    for (i=0;i<n;i++){
        
        if (arr[i]>k){
            k=arr[i];
        }
        }
    l=arr[0];
    for (i=0;i<n;i++){
        
        if (arr[i]<l){
            l=arr[i];
        }
    }
        printf("%d",l);
        printf("%d",k);
    

}