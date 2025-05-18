/*
========================== 88. Merge Sorted Array  ==========================

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]

Constraints:
nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-10^9 <= nums1[i], nums2[j] <= 10^9

Follow up: Can you come up with an algorithm that runs in O(m + n) time?
*/


// ====================== Solution=========================

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {

     int idx = m+n-1, i = m-1, j = n-1;
     while(i>=0 && j>=0){
        if(A[i] >= B[j]){
        A[idx--] = A[i--];
        }else{
            A[idx--] = B[j--];
        }

     }  
     while(j >= 0){
        A[idx--] = B[j--];
     }     
        
    }
};


// Time complexity: O(m + n)
// Space complexity: O(1) because we are not using any extra space
// The space complexity is O(1) because we are not using any extra space.
// The algorithm runs in O(m + n) time because we are iterating through both arrays once.
// The time complexity is O(m + n) because we are iterating through both arrays once.
// The algorithm is efficient and meets the requirements of the problem.

// ---------------------------------------------------------------------------------------

// Problem Link: https://leetcode.com/problems/merge-sorted-array/ 

// ----------------------------------------------------------------------------------------------