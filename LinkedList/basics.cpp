#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};
void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertatpos(Node *&head, int position, int data)
{
    int i = 1;
    Node *temp = head;
    while (i < position - 1)
    {
        i++;
        temp = temp->next;
    }
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deleteAtBeginning(Node *&head)
{
    if (head == nullptr)
        return; // Empty list

    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteatEnd(Node *&head)
{
    if (head == nullptr)
        return;
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void deleteatpos(Node *&head, int pos)
{
    if (head == nullptr && pos <= 0)
        return;

    if (pos == 1)
    {
        deleteAtBeginning(head);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr)
        return;
    
    Node* nodetodelete = temp->next;
    temp->next = temp->next->next;
    delete nodetodelete;

}

void printlist(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertathead(head, 12);
    insertathead(head, 13);
    insertathead(head, 14);
    insertathead(head, 15);
    insertathead(head, 16);
    insertattail(tail, 69);
    insertatpos(head, 5, 9000);
    printlist(head);
    deleteAtBeginning(head);
    printlist(head);
    deleteatEnd(head);
    printlist(head);
    deleteatpos(head,4);
    printlist(head);

    return 0;
}