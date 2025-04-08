// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int n,i,j,k,m=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[i==arr[j]]){
                l++;
            }

        }
        if (l>m){
            m=l;
        }
        printf("%d",m);
    }
}