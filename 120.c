//Q120: Write a program to take a string input. Change it to sentence case. /* Sample Test Cases: Input 1: str = I am trying to build logic. Output 1: I Am Trying To Build Logic Input 2: str = The classes are supposed to start early. Output 2: The Classes Are Supposed To Start Early. Input 3: str = We are going to look at 26 different test cases. Output 3: We Are Going To Look At 26 Different Test Cases. */ 
#include <stdio.h>
#include <ctype.h>

void convertToTitleCase(char *str) {
    int i = 0;
    int newWord = 1; // Flag to track the start of a new word

    while (str[i] != '\0') {
        // If it's a whitespace character, the next alphabetic character will start a new word
        if (isspace(str[i])) {
            newWord = 1;
        } 
        // If it's an alphabetic character and it's the start of a word, capitalize it
        else if (isalpha(str[i])) {
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0; // Reset flag since we are inside a word now
            } else {
                str[i] = tolower(str[i]); // Optional: ensures other characters remain/become lowercase
            }
        } 
        // If it's a number or punctuation, it's no longer the "start" of an alphabetic word
        else {
            newWord = 0;
        }
        i++;
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    // Read the entire line including spaces
    fgets(str, sizeof(str), stdin);

    // Convert the string
    convertToTitleCase(str);

    // Display the result
    printf("Output: %s", str);

    return 0;
}
