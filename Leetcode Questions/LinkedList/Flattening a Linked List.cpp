#include <bits/stdc++.h>
using namespace std;

// Definition for Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};

class Solution {
public:
    Node *flatten(Node *root) {
        if (root == nullptr) return nullptr;

        vector<int> arr;
        Node* curr = root;

        // Collect all values from main and bottom lists
        while (curr != nullptr) {
            Node* bottom = curr;
            while (bottom != nullptr) {
                arr.push_back(bottom->data);
                bottom = bottom->bottom;
            }
            curr = curr->next;
        }

        // Sort values
        sort(arr.begin(), arr.end());

        // Build new flattened list using bottom pointers
        Node* dummy = new Node(0);
        Node* tail = dummy;
        for (int val : arr) {
            tail->bottom = new Node(val);
            tail = tail->bottom;
        }

        return dummy->bottom;
    }
};

// Helper to print flattened list
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->bottom;
    }
    cout << endl;
}

// Example usage
int main() {
    // Create a simple test case
    Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    Solution sol;
    Node* flat = sol.flatten(head);

    cout << "Flattened list: ";
    printList(flat);

    return 0;
}
