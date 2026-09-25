//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], longest[100];
    int i, j = 0, max = 0;

    gets(str);

    for (i = 0; ; i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            word[j] = str[i];
            j++;
        }
        else {
            word[j] = '\0';

            if (strlen(word) > max) {
                max = strlen(word);
                strcpy(longest, word);
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word = %s", longest);

    return 0;
}