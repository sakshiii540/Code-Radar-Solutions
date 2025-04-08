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
        for (j=1;j<n;j++){
            if (arr[i]==arr[j]){
                l++;
            }
        }
    }
    if (l>n-1){
     for (i=0;i<n;i++){
        for (j=1;j<n;j++){
            
            if (arr[i]==arr[j]){
                if (arr[i+1]!=arr[j]){
                printf("%d",arr[i]);
                return 0;
                }
            }
            
        }

     }
}
}