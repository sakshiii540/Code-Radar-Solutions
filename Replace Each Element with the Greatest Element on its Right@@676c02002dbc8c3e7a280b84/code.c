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
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (arr[j]>arr[i+1]){
                max=arr[j];
            }
            else{
                printf("%d",arr[0]);
            }
        }
        printf("%d ",max);
    }

   

}