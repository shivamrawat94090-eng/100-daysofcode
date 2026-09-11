//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int a[100], n, x, i, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    // Find position
    pos = 0;

    while(pos < n && a[pos] < x)
    {
        pos++;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert element
    a[pos] = x;

    // Print array
    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}