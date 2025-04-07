// Your code here...
#include <stdio.h>
int main(){
    int i,j,n,c,k,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);    
        
    }
    for(i=0;i<n;i++){
        if (n%2==1){
            c=n/2 ;
        }
        else{j=n/2;
        k=arr[j-1] +arr[j] ;
        c=k/2;
        }
    }
    printf("%d",arr[c]);
    
    

}
