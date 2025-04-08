// Your code here...// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,m=1,l=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                l++;
            }
            
        }
        if (l>1){
        printf("%d ",l+1);
        
        l=0;
        }

    }
    
    
}
