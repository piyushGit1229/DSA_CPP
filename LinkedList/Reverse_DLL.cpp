#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
Node* reverseDll(Node *head)
{
    Node* curr = head;
    Node* temp = nullptr;

    while(curr != nullptr){
        temp = curr -> prev;

    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

     cout << "Original List: ";
     printList(head);

    //  head=reverse(head);

    cout << "Reversed List: ";
    printList(head);


    return 0;
}