#include <iostream>
#include <string>
using namespace std;

class Stack {
    public:
    static const int MAX = 100; 
    char arr[MAX];              
    int top;                    

public:
    Stack() {
        top = -1; 
    }

    bool isEmpty() {
        return top == -1;
    }

  
    bool isFull() {
        return top == MAX - 1;
    }

   
    void push(char ch) {
        if (isFull()) {
            cout << "Stack is full.\n";
        } else {
            arr[++top] = ch;
        }
    }

    
    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return '\0'; 
        } else {
            return arr[top--];
        }
    }
};


bool isMatching(char open, char close) {
    return (open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}');
}


bool isBalanced(string expr) {
    Stack stack;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (stack.isEmpty()) {
                return false; 
            }

            char open = stack.pop();
            if (!isMatching(open, ch)) {
                return false;
            }
        }
    }

    
    return stack.isEmpty();
}

int main() {
    string input;
    cout << "Enter an expression: ";
    cin>>input;

    if (isBalanced(input)) {
        cout << "Balanced parentheses.\n";
    } else {
        cout << "Not balanced parentheses.\n";
    }

    return 0;
}
