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
    int getDecimalValue(ListNode* head) {
        // Step 1: Convert linked list to vector for easy traversal
        vector<int> arr;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val); // store each node value
            temp = temp->next;        // move to next node
        }

        // Step 2: Convert vector of digits to a binary string
        string s = "";
        for (int digit : arr) {
            s += to_string(digit);    // append each digit to string
        }

        // Step 3: Convert binary string to decimal integer
        // stoi(s, nullptr, 2) -> convert string s in base 2 to decimal
        int decimal = stoi(s, nullptr, 2);

        // Step 4: Return the decimal value
        return decimal;
    }
};
