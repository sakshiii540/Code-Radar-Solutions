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
        
        }
        printf("%d",m);
        for (i=1;i<n;i++){
            if (arr[0]!=arr[i]){
                printf("%d",arr[i]);
            }
        }
        
    }

