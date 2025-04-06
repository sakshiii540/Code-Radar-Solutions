// Your code here...// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,m=1,l=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d ",arr[0]);
    for (i=0;i<n;i++){
        if (arr[0]==arr[i+1]){
            m++;
            
        }
        else{
            k=arr[i+1];
            break;
            

        }
        for (i=0;i<n;i++){
        if (arr[i+1]==arr[i+2]){
                l++;
            }
        
        }
        printf("%d",m);
        printf("\n%d ",k);
        printf("%d",l);
       
        
    }

