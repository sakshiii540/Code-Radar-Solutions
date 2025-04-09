// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,x=5,max=0,l;
    scanf("%d",&n);
    int arr[n];
    
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[j]>arr[i]){
                max=arr[j];
            }
        }
        printf("%d",max);
    }

   

}