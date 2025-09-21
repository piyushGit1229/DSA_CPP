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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;

        // Convert linked list to array for easy access
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        vector<int> result;

        // For each element, find the next greater element
        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    result.push_back(arr[j]);
                    found = true;
                    break; // stop at the first greater element
                }
            }
            if (!found)
                result.push_back(0); // no greater element found
        }

        return result;
    }
};
