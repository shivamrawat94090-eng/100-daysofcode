//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration. /* Sample Test Cases: Input 1: nums1 = [1,3,3,4] Output 1: 3 Input 2: nums1 = [1,2,2] Output 2: 2 Input 3: nums1 = [0,4,1,1,5] Output 3: 1 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    // Find the maximum element to size the frequency array, or use a hash map.
    // Assuming reasonable small integer ranges or using a dynamic lookup:
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Frequency array initialized to 0
    int *freq = (int *)calloc(max_val + 1, sizeof(int));
    int repeated = -1;

    // Single iteration to populate frequency and find the duplicate
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1) {
            repeated = arr[i];
            break;
        }
    }

    printf("%d\n", repeated);

    free(freq);
    return 0;
}
