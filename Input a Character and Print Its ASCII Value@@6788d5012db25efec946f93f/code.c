// Your code here...
#include <stdio.h>

int main() {
    char ch;
    
    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Displaying ASCII value
    printf("ASCII value of '%c' is %d\n", ch, ch);
    
    return 0;
}