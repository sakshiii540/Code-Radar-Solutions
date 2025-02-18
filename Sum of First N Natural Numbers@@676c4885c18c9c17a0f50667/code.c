#include <stdio.h>

int main() {
    int n, sum = 0, i;  // Declaring i outside
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {  // No need to declare i again
        sum += i;
    }

    printf("%d", sum);
    return 0;
}
