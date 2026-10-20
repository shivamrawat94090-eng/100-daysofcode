//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/  
#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n) {
    int merged[m + n];
    int i = 0; // Pointer for nums1
    int j = 0; // Pointer for nums2
    int k = 0; // Pointer for merged array

    // Traverse both arrays and store the smaller element into merged[]
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of nums1[], if any
    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Copy remaining elements of nums2[], if any
    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    // Print the merged array
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
}

int main() {
    // --- Test Case 1 ---
    int nums1_t1[] = {2, 7, 11, 15};
    int nums2_t1[] = {4, 8, 10};
    int m1 = sizeof(nums1_t1) / sizeof(nums1_t1[0]);
    int n1 = sizeof(nums2_t1) / sizeof(nums2_t1[0]);
    
    printf("Output 1: ");
    mergeSortedArrays(nums1_t1, m1, nums2_t1, n1);

    // --- Test Case 2 ---
    int nums1_t2[] = {1, 2, 7};
    int nums2_t2[] = {9, 10, 17};
    int m2 = sizeof(nums1_t2) / sizeof(nums1_t2[0]);
    int n2 = sizeof(nums2_t2) / sizeof(nums2_t2[0]);
    
    printf("Output 2: ");
    mergeSortedArrays(nums1_t2, m2, nums2_t2, n2);

    // --- Test Case 3 ---
    int nums1_t3[] = {-10, -2, 7};
    int nums2_t3[] = {-3, -1, 7}; // Corrected from typos in prompt
    int m3 = sizeof(nums1_t3) / sizeof(nums1_t3[0]);
    int n3 = sizeof(nums2_t3) / sizeof(nums2_t3[0]);
    
    printf("Output 3: ");
    mergeSortedArrays(nums1_t3, m3, nums2_t3, n3);

    return 0;
}
