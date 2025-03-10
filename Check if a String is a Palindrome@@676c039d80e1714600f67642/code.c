#include <stdio.h>
#include <string.h>

int main() {
    int n, i,count=0;
    char no[100];
    
    // Input string
    scanf("%s", no);
    n = strlen(no); // Get length of the string
    
    // Check for palindrome
    for (i = 0; i < n / 2; i++) {
        if (no[i] == no[n - i - 1]) {
            count++;
             // If any character doesn't match
        }
        if (count==n/2){
            printf("Yes");
        }
        else{
            printf("No");
        }
        }
    }
    


