#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        next = nullptr;
    }
};

class Stack
{
public:
    Node *top;
    Stack()
    {
        top = nullptr;
    }

    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        int popped = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return popped;
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void printstack()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.printstack(); // Stack (top to bottom): 30 20 10

    cout << "Top element: " << s.peek() << endl; // 30

    cout << "Popped: " << s.pop() << endl; // 30
    s.printstack();                        // Stack (top to bottom): 20 10

    cout << "Is empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
