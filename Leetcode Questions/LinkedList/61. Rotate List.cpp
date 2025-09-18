#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        ListNode* temp = head;
        int n = 1;

        // count length
        while (temp->next) {
            temp = temp->next;
            n++;
        }

        k = k % n;
        if (k == 0) return head;

        // make list circular
        temp->next = head;

        // find new head
        int jumps = n - k - 1;
        temp = head;
        while (jumps--) {
            temp = temp->next;
        }

        ListNode* newhead = temp->next;
        temp->next = nullptr;
        return newhead;
    }
};

// 🔹 Helper: Create a linked list from vector
ListNode* createList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// 🔹 Helper: Print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    ListNode* head = createList(arr);

    cout << "Original list: ";
    printList(head);

    head = sol.rotateRight(head, k);

    cout << "Rotated list: ";
    printList(head);

    return 0;
}
