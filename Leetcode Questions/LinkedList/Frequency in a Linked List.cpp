#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
public:
    // Function to count occurrences of key in linked list
    int count(Node* head, int key) {
        Node* temp = head;
        int cnt = 0;

        while (temp != nullptr) {
            if (temp->data == key) {
                cnt++;
            }
            temp = temp->next;
        }

        return cnt;
    }
};

// Example usage
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    Solution sol;
    int key = 1;
    cout << "Count of " << key << " in linked list: " << sol.count(head, key) << endl;

    return 0;
}
