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
        if (arr[i]!=0){
            printf("%d ",arr[i]);
        }
     }
    for (i=0;i<n;i++){
    if (arr[i]==0){
    l++;
    }

    for (i=0;i<l;i++){
                printf("0 ");
            }
     }
        
            
        
       
     }

