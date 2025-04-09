// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int i,j,k,x,n,m=0,l=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        if (arr[i+1]==arr[i]+1 ){
            l++;
        }
        if (arr[i+1]==arr[i]-1 ){
            m++;
        }
    }
    // printf("%d\n",l);
    //  printf("%d",m);
    if (m==l){
        printf("YES");
    }
    else{
        printf("NO");
    }
}