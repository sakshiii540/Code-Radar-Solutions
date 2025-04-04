#include<stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    j=n-k;

    for (i=j;i<n;i++){
        printf("%d\n",arr[i]);
    }
     for (i=0;i<j;i++){
        printf("%d\n",arr[i]);
    }
    



    

    
}