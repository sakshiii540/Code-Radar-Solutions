// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=0;
    for (i=0;i<n-1;i++){
        if (arr[i]>k){
            k=j;
        }
    
}
printf("%d",j);
}