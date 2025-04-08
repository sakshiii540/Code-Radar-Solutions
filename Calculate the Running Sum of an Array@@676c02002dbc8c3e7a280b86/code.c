// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,sum=0,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            sum=sum+arr[j];

        
    }
   
}
 printf("%d ",sum);
}