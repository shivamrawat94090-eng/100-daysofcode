//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main() {
    char first[50], last[50];

    scanf("%s %s", first, last);

    printf("%c.%c.", first[0], last[0]);

    return 0;
}