// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,n,c=0,k,l,m,t;
    scanf("%d" ,&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);        
    }
       
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
        if(arr[i]>=arr[j]){
            c++;
        
        }
        if (c==n-1){
            printf("%d",arr[i]);
        }
        }
}
    
}