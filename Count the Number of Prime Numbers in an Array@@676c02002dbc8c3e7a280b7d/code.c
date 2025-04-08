// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    k=0;
    for (i=0;i<n;i++){
        for (j=1;j<=arr[i];j++){
        if (arr[i]%j==0){
            k++;
            
        } 
       
        
        }
        printf("%d\n",k);
        break;

    }
    }

   
    

