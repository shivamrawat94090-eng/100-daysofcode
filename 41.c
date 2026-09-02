//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main()
{
    int n, first, last, digits = 1, temp, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    n = n % digits;
    n = n / 10;

    power = digits / 10;
    n = last * digits + n * 10 + first;

    printf("After swapping: %d", n);

    return 0;
}