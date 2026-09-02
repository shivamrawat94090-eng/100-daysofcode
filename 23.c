//Q23: Write a program to calculate library fine based on late days as follows: 

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int days, fine = 0;

    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
    }
    else {
        printf("Membership Cancelled");
        return 0;
    }

    printf("Fine ₹%d", fine);

    return 0;
}
