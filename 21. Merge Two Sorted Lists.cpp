// 21. Merge Two Sorted Lists
// Given the heads of two sorted linked lists, merge the two lists in a one sorted list.
// The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.
// Example 1:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4]
// Example 2:   
// Input: list1 = [], list2 = []
// Output: []   
// Example 3:
// Input: list1 = [], list2 = [0]
// Output: [0]

// Constraints:
// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both list1 and list2 are sorted in non-decreasing order. 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Approach: Recursive
// Time Complexity: O(n + m) where n and m are the lengths of the two lists.
// Space Complexity: O(n + m) where n and m are the lengths of the two lists.
// The space complexity is O(n + m) because we are using recursion, which adds to the call stack.
// The maximum depth of the recursion will be n + m, where n is the length of list1 and m is the length of list2.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2 : head1;
        }

        // case 1
        if(head1 -> val <= head2 -> val){
            head1 -> next = mergeTwoLists(head1 -> next ,head2);
            return head1;
        } else{   // case 2
         head2 -> next = mergeTwoLists(head1 , head2 -> next);
         return head2;

        }  
    }
};




// link of the problem :  https://leetcode.com/problems/merge-two-sorted-lists/

