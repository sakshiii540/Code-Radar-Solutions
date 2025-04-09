// Your code here...
// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,m=0,l=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            if (arr[i]+1!=arr[j]){
                l++;
            }
        }
        if (l==n-1){
            m++;
        // printf("%d ",l);
        l=0;
        }
        printf("%d ",m+1);

        // l=0;
    }

