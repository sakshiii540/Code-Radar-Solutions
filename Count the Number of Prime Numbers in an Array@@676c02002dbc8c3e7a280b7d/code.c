// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,k,p=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    
    for (i=0;i<n;i++){
        for (j=1;j<=arr[i];j++){
        if (arr[i]%j==0){
            k++;
            
        } 
       
        
        }
        
        if(k==2){
           p++;
        }
       
        k=0;
    }
     printf("%d",p);

    }

   
    

