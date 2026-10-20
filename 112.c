//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n) {
    int max_so_far = INT_MIN;
    int curr_max = 0;

    for (int i = 0; i < n; i++) {
        curr_max += arr[i];

        if (max_so_far < curr_max) {
            max_so_far = curr_max;
        }

        if (curr_max < 0) {
            curr_max = 0;
        }
    }
    return max_so_far;
}

int main() {
    int n;

    // Taking the size of the array as input
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculating and printing the maximum subarray sum
    int max_sum = maxSubarraySum(arr, n);
    printf("Maximum contiguous sum is %d\n", max_sum);

    return 0;
}

