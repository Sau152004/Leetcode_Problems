
// ============================Majority Element============================


// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
 
// ===================== Solution =====================


// Moore voting algorithm
// The Moore voting algorithm is a linear time algorithm that finds the majority element in an array.
// It works by maintaining a count of the current candidate and its frequency.
// If the count becomes zero, it selects the next element as the new candidate.
// If the current element is the same as the candidate, it increments the count.
// Otherwise, it decrements the count.
// The majority element is the candidate that remains at the end of the iteration.
// The algorithm has a time complexity of O(n) and a space complexity of O(1).

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i= 0;i< nums.size();i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};




complexity analysis 
// Time complexity: O(n)
// Space complexity: O(1)
// The algorithm iterates through the array once, maintaining a count of the current candidate and its frequency.
// The space complexity is O(1) because it uses a constant amount of extra space for the candidate and frequency variables. 