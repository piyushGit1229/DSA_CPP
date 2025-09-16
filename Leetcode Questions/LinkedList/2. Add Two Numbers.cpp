#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // dummy head
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int l1_val = 0;
            int l2_val = 0;

            if (l1 != nullptr) {
                l1_val = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2_val = l2->val;
                l2 = l2->next;
            }

            int sum = l1_val + l2_val + carry;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy->next;
    }
};

// Helper to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper to create linked list from vector
ListNode* createList(const vector<int>& nums) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    for (int n : nums) {
        curr->next = new ListNode(n);
        curr = curr->next;
    }
    return dummy->next;
}

int main() {
    // Example: l1 = [2,4,3], l2 = [5,6,4]
    vector<int> v1 = {2, 4, 3};  // represents number 342
    vector<int> v2 = {5, 6, 4};  // represents number 465

    ListNode* l1 = createList(v1);
    ListNode* l2 = createList(v2);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);  // Expected output: 7 -> 0 -> 8

    return 0;
}
