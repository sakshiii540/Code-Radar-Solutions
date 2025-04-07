// Your code here...
#include <stdio.h>
int main(){
    int i,j,n,c=0,k,l,m;
    scanf("%d %d",&n, &k);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);        
    }
    for (i=0;i<n;i++){
        if (arr[i]==k){
            c++;
        }
}
printf("%d",c);
}