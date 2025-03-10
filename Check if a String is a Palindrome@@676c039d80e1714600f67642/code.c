#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char no[100];
    
    // Input string
    scanf("%s", no);
    n = strlen(no); // Get length of the string
    
    // Check for palindrome
    for (i = 0; i < n / 2; i++) {
        if (no[i] == no[n - i - 1]) {
            printf("Yes\n"); // If any character doesn't match
        }
        else {
            printf("No");
        }
    }
    
}

