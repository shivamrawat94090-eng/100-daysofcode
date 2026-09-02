//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digit, count = 0;
    int sum = 0;

    scanf("%d", &n);

    original = n;
    temp = n;

    // Count the number of digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    // Calculate the sum of powers of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
