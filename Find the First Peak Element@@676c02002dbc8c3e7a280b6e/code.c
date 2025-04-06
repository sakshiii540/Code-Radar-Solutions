#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: if n == 1
    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    // Check first element
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }

    // Check middle elements
    for (i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d", arr[n - 1]);
        return 0;
    }

    // If no peak found
    printf("-1");
    return 0;
}
