//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/


#include <stdio.h>

int main() {
    char date[11];

    scanf("%10s", date);

    printf("%.2s-Apr-%.4s", date, date + 6);

    return 0;
}