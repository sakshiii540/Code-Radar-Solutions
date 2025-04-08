// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,max=0,l=0,sl;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        if (arr[i]>max){
            max=arr[i];
            sl=arr[i-1];

        }

       
        
    }
    
    printf("%d ",sl);
}