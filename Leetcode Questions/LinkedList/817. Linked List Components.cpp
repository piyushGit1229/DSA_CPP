#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        // Convert linked list to array for easy traversal
        vector<int> arr;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Create a set for O(1) lookup of nums values
        unordered_set<int> s(nums.begin(), nums.end());

        int count = 0; // Number of connected components
        int i = 0;

        // Traverse the array to find connected components
        while (i < arr.size()) {
            if (s.count(arr[i])) {            // Current node is in nums
                count++;                      // Start of a new component
                // Skip all consecutive nodes in nums
                while (i + 1 < arr.size() && s.count(arr[i + 1])) {
                    i++;
                }
            }
            i++;  // Move to the next node
        }

        return count;
    }
};
