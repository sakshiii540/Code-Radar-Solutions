// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=arr[0];
    for (i=0;i<n;i++){
        if (arr[i]>k){
            j=k;
        }
    
}
printf("%d",j);
}