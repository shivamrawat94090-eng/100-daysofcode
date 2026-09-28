//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/ 


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", name[i]);
        }
    }

    return 0;
}