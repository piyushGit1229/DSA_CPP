#include <iostream>
using namespace std;

class Stack
{
public:
    static const int MAX = 100;
    char arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1; // WE WILL CREATE AN EMPTY STACK IN 1ST STEP
    }

    bool isempty()
    {
        return top == -1; // CHECK IF THE STACK IS EMPTY
    }
    bool isfull()
    {
        return top == MAX - 1; // CHECK IF THE STACK IS FULL OF MAX-1
    }

    void push(char ch)
    {

        if (isfull())
        {
            cout << "Stack is Full" << endl; // before pushing check the overflow condition
        }
        else
        {
            arr[++top] = ch; // increment the top pointer and push the character in the stack
        }
    }

    char pop()
    {
        // check for underflow condition
        if (isempty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return arr[top--];
        }
    }
};
// step 3 craete a function ismatching to check for the expression if it matches or not

bool ismatching(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

// step 4 - create another function ismatching to check balanced parantheses
bool isbalanced(string expression)
{
    Stack stack; // create a object of the class to use the properties
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i]; // run a for loop and take and process each character
        if (ch == '(' || ch == '[' || ch == '{')
        {
            stack.push(ch); // if there is an opening brackets push onto the stack
        }
        else if (ch == ')' || ch == ']' || ch == '}') //if closing bracket
        {
            if (stack.isempty())
            {
                return false;
            }

            char open= stack.pop();
            if (!ismatching(open, ch))
            {
                return false;
            }
        }
    }
    return stack.isempty();
}
int main() {
    string input;
    cout << "Enter expression: ";
    cin>>input;

    if (isbalanced(input)) {
        cout << "Balanced parentheses.\n";
    } else {
        cout << "Not balanced parentheses.\n";
    }

    return 0;
}