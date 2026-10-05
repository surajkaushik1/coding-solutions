# Palindrome Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `head` of a singly linked list, return `true` *if it is a  **palindrome**  or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: head = [1,2,2,1]
Output: true

```

 **Example 2:** 

```
Input: head = [1,2]
Output: false

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [1, 105].
- 0 <= Node.val <= 9

 

 **Follow up:**  Could you do it in `O(n)` time and `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 9 ms (beats 14.88%)  
**Memory:** 131.9 MB (beats 18.82%)  
**Submitted:** 2026-10-05T09:19:00.193Z  

```cpp
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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            false;
        }
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();
        int l = 0 , r = n-1;
        while(l<r){
            if(ans[l]!=ans[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-linked-list/)