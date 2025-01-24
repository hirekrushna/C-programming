#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    // Pointers to the start and end of the string
    char *start = str;
    char *end = str + strlen(str) - 1;
    
    // Loop until the pointers meet in the middle
    while (start < end) {
        // If characters don't match, it's not a palindrome
        if (*start != *end) {
            return false;
        }
        // Move the pointers towards the middle
        start++;
        end--;
    }
    // If we reach here, the string is a palindrome
    return true;
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Check if it's a palindrome
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
