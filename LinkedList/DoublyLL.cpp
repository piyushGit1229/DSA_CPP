#include <iostream>
using namespace std;

// -------------------- Node Structure -------------------- //
class Node {
public:
    int data;       // Value stored in the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    // Constructor: Initializes a new node with given value
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// -------------------- INSERTION OPERATIONS -------------------- //

// 1. Insert at beginning of DLL
void insertAtBeg(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {   // If list is empty
        head = newNode;
        return;
    }
    newNode->next = head;    // Link new node to current head
    head->prev = newNode;    // Link current head back to new node
    head = newNode;          // Update head
}

// 2. Insert at end of DLL
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {   // If list is empty
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {   // Traverse to last node
        temp = temp->next;
    }
    temp->next = newNode;     // Link last node to new node
    newNode->prev = temp;     // Link new node back to last node
}

// 3. Insert at a specific position (1-indexed)
void insertAtPos(Node*& head, int pos, int val) {
    if (pos == 1) {           // Insert at beginning
        insertAtBeg(head, val);
        return;
    }
    Node* temp = head;
    int i = 1;
    while (i < pos - 1 && temp != nullptr) {  // Traverse to (pos-1)th node
        temp = temp->next;
        i++;
    }
    if (temp == nullptr) return;  // Invalid position

    Node* newNode = new Node(val);
    newNode->next = temp->next;   // Link new node to next node
    if (temp->next != nullptr) temp->next->prev = newNode; // Link next node back
    temp->next = newNode;         // Link previous node to new node
    newNode->prev = temp;         // Link new node back to previous node
}

// -------------------- DELETION OPERATIONS -------------------- //

// 1. Delete from beginning
void deleteAtBeg(Node*& head) {
    if (head == nullptr) return;  // Empty list
    Node* temp = head;
    head = head->next;            // Move head forward
    if (head != nullptr) head->prev = nullptr; // Remove backward link
    delete temp;                  // Free memory
}

// 2. Delete from end
void deleteAtEnd(Node*& head) {
    if (head == nullptr) return;  // Empty list
    Node* temp = head;
    if (temp->next == nullptr) {  // Only 1 node
        delete head;
        head = nullptr;
        return;
    }
    while (temp->next != nullptr) temp = temp->next; // Go to last node
    temp->prev->next = nullptr;   // Remove last node
    delete temp;
}

// 3. Delete at a specific position (1-indexed)
void deleteAtPos(Node*& head, int pos) {
    if (head == nullptr) return;
    if (pos == 1) {
        deleteAtBeg(head);
        return;
    }
    Node* temp = head;
    int i = 1;
    while (i < pos && temp != nullptr) {
        temp = temp->next;
        i++;
    }
    if (temp == nullptr) return;  // Invalid position
    if (temp->prev != nullptr) temp->prev->next = temp->next;
    if (temp->next != nullptr) temp->next->prev = temp->prev;
    delete temp;
}

// 4. Delete by key (value)
void deleteByKey(Node*& head, int key) {
    if (head == nullptr) return;
    Node* temp = head;
    while (temp != nullptr && temp->data != key) temp = temp->next;
    if (temp == nullptr) return; // Key not found
    if (temp->prev != nullptr) temp->prev->next = temp->next;
    if (temp->next != nullptr) temp->next->prev = temp->prev;
    if (temp == head) head = temp->next;
    delete temp;
}

// -------------------- SEARCH OPERATION -------------------- //
bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}

// -------------------- TRAVERSAL -------------------- //
void printForward(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next; // Go to tail
    cout << "Backward: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// -------------------- COUNT NODES -------------------- //
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

// -------------------- MAIN FUNCTION / EXAMPLE -------------------- //
int main() {
    Node* head = nullptr;

    // Insert elements
    insertAtBeg(head, 1);
    insertAtBeg(head, 2);
    insertAtBeg(head, 3);
    insertAtBeg(head, 4);
    insertAtBeg(head, 5);    // List: 5 4 3 2 1
    insertAtEnd(head, 79);   // List: 5 4 3 2 1 79
    insertAtPos(head, 5, 100);// Insert 100 at position 5

    // Delete operations
    deleteAtBeg(head);       // Delete first
    deleteAtEnd(head);       // Delete last
    deleteAtPos(head, 4);    // Delete 4th node
    deleteByKey(head, 3);    // Delete node with value 3

    // Search & Count
    cout << "Search 2: " << (search(head, 2) ? "Found" : "Not Found") << endl;
    cout << "Total Nodes: " << countNodes(head) << endl;

    // Traversal
    printForward(head);
    printBackward(head);

    return 0;
}
