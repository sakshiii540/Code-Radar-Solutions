// Your code here...
// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,n,max=0,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            if (arr[i]+1!=arr[j]){
                printf("1");
            }
        }
    }
}
