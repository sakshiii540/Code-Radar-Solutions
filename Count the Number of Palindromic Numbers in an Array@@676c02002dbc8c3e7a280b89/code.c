#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed;
}

int main() {
    int n, i, count = 0;
    // printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
