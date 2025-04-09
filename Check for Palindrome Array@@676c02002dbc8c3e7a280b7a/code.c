// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,x,n,max=0,l=0;
    scanf("%d",&n);
    int arr[n];
    int arr[x];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        if (arr[i+1]==arr[i]+1 ){
            l++;

        };
        printf("%d",l);
    }

}