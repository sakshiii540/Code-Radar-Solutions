// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,k=0,l=0;
    scanf("%d %d",&n, &k);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]>k){
            l++;
        };
    }
    printf("%d",l);
    
}

