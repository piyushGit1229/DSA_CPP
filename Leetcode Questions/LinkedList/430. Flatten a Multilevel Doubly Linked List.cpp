#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) {
        val = _val;
        prev = nullptr;
        next = nullptr;
        child = nullptr;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr)
            return head;
        Node* curr = head;
        while (curr != nullptr) {
            if (curr->child != nullptr) {
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = nullptr;

                // move curr to the tail of the flattened child list
                while (curr->next != nullptr) {
                    curr = curr->next;
                }
                if (next != nullptr) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper to print flattened list
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Example usage
int main() {
    // Example: build a small multilevel doubly linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    // Add a child list
    head->next->child = new Node(4);
    head->next->child->next = new Node(5);
    head->next->child->next->prev = head->next->child;

    Solution sol;
    Node* flat = sol.flatten(head);

    cout << "Flattened list: ";
    printList(flat);

    return 0;
}
