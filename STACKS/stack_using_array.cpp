#include <bits/stdc++.h>
using namespace std;
class Stack
{

public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow";
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }

    bool isempty()
    {
        return top == -1;
    }

    void printStackDiagram()
    {
        // if (top == -1)
        // {
        //     cout << "Stack is empty" << endl;
        //     return;
        // }

        // cout << "---- STACK ----" << endl;
        // for (int i = top; i >= 0; i--)
        // {
        //     cout << "| " << arr[i] << " |" << endl;
        //     cout << "-----" << endl;
        // }
        // cout << "   ^" << endl;
        // cout << "  TOP" << endl;


        // while (!s.empty())
        // {
        //     cout << s.top() << " ";
        //     st.pop();
        // }
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.printStackDiagram();
    st.pop();
    st.printStackDiagram();
    return 0;
}