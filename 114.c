//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLen = 0;
    int left = 0;
    // To store the last seen index of each ASCII character
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    for (int right = 0; right < n; right++) {
        char currentChar = s[right];
        // If character was seen and is within the current window
        if (lastSeen[(unsigned char)currentChar] >= left) {
            left = lastSeen[(unsigned char)currentChar] + 1;
        }
        lastSeen[(unsigned char)currentChar] = right;
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main() {
    char s[1000];
    if (scanf("%s", s) == 1) {
        printf("%d\n", lengthOfLongestSubstring(s));
    }
    return 0;
}
