// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,k,l=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        if (arr[i+1]>=arr[i]){
            l++;
        }
        printf("%d",l);

}
}