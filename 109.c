//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

// Function to find the maximum sum of a subarray of size k
int maxSubarraySum(int arr[], int n, int k) {
    // If the array size is smaller than k, it's invalid
    if (n < k) {
        printf("Invalid input: Array size is smaller than k.\n");
        return -1;
    }

    // Compute the sum of the first window of size k
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    // Slide the window from the start to the end of the array
    for (int i = k; i < n; i++) {
        // Add the next element and remove the first element of the previous window
        current_sum += arr[i] - arr[i - k];
        
        // Update max_sum if the current window sum is larger
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    // Get the window size k
    printf("Enter the subarray size (k): ");
    if (scanf("%d", &k) != 1) return 1;

    // Calculate and print the result
    int result = maxSubarraySum(arr, n, k);
    if (result != -1) {
        printf("Maximum sum of a subarray of size %d is: %d\n", k, result);
    }

    return 0;
}
