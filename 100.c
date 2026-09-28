//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/



#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (str[j + 1] != '\0' || i < j) {
                printf(",");
            }
        }
    }

    return 0;
}