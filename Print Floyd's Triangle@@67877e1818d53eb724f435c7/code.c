// Your code here...
#include <stdio.h>
int main(){
    int i,j,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i+count;j<=count+1;j++){
            count++;
            }
            printf("%d ",j);
            
        
        printf("\n");
    }
   

}