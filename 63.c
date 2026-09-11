//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    // Copy first array
    for(i = 0; i < n; i++)
        c[i] = a[i];

    // Copy second array
    for(i = 0; i < m; i++)
        c[n + i] = b[i];

    // Print merged array
    for(i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}