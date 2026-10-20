//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>
#include <stdlib.h>

// Function to find and print the two indices
void findTwoSum(int nums[], int size, int target) {
    // Look for the two distinct elements that sum up to the target
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; // Since exactly one solution exists, we can exit early
            }
        }
    }
    
    // If no solution is found (as per the problem statement)
    printf("-1 -1\n");
}

int main() {
    // Test Case 1
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    findTwoSum(nums1, size1, target1);

    // Test Case 2
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    findTwoSum(nums2, size2, target2);

    // Test Case 3
    int nums3[] = {3, 3};
    int target3 = 6;
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    findTwoSum(nums3, size3, target3);

    return 0;
}
