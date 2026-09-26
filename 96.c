//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

// Function to reverse a substring from index 'start' to 'end'
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in-place
void reverseEachWord(char *str) {
    int length = strlen(str);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        // When we hit a space or the end of the string, we found a word
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1; // Move to the start of the next word
        }
    }
}

int main() {
    // Using a mutable character array instead of a string literal
    char input[] = "I love coding";
    
    printf("Input: %s\n", input);
    reverseEachWord(input);
    printf("Output: %s\n", input); // Output: I evol gnidoc
    
    return 0;
}