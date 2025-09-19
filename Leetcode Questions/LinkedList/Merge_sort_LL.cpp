#include <bits/stdc++.h>
using namespace std;

/**********************************************************************
    Node class definition for a singly linked list.
**********************************************************************/
class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

/**********************************************************************
    Function to find the middle node of a linked list.
    - Uses slow & fast pointer approach.
    - Fast moves 2 steps, Slow moves 1 step.
    - When Fast reaches the end, Slow will be at the middle.
    - For even-length lists, this returns the first middle node.
**********************************************************************/
Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          // Move slow one step
        fast = fast->next->next;    // Move fast two steps
    }

    return slow;  // Middle node
}

/**********************************************************************
    Function to merge two sorted linked lists into one sorted list.
    - Works like merging step in merge sort.
**********************************************************************/

Node* merge(Node* left, Node* right) {
    // Base cases
    if (left == nullptr) return right;
    if (right == nullptr) return left;

    // Pick smaller element and recursively merge the rest
    if (left->data <= right->data) {
        left->next = merge(left->next, right);
        return left;
    } else {
        right->next = merge(left, right->next);
        return right;
    }
}

/**********************************************************************
    Function to sort a linked list using Merge Sort.
    Steps:
    1. Base case: If list is empty or has only 1 node → already sorted.
    2. Split the list into two halves using findMid().
    3. Recursively sort each half.
    4. Merge the two sorted halves.
**********************************************************************/

Node* sortLL(Node* head) {
    // Base case: 0 or 1 element → already sorted
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Step 1: Split the list into two halves
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = nullptr;  // Break the list into two parts

    // Step 2: Recursively sort both halves
    left = sortLL(left);
    right = sortLL(right);

    // Step 3: Merge the two sorted halves
    return merge(left, right);
}

/**********************************************************************
    Helper functions for testing (only for VS Code testing purposes).
**********************************************************************/

// Insert node at end
void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

/**********************************************************************
    Main function (for testing in VS Code).
**********************************************************************/
int main() {
    Node* head = nullptr;

    // Example input: unsorted linked list
    insert(head, 4);
    insert(head, 2);
    insert(head, 1);
    insert(head, 3);

    cout << "Original List: ";
    printList(head);

    head = sortLL(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
