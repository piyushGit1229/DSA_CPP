#include <bits/stdc++.h> 
using namespace std;

class MaxStack {
public:    	
	// Initialize MaxStack.
	stack<int>st;
	stack<int>maxstack;

	MaxStack() {
		// Write your code here.
	}
	
	void specialPush(int value) {
		// Write your code here.
	st.push(value);
	if(maxstack.empty() || value >= maxstack.top()){
		maxstack.push(value);
	}
	}

	// Return the popped value.
	int specialPop() {
		if (st.empty()) return -1; 
		// Write your code here.
	int poppedValue = st.top(); 
	if(st.top() == maxstack.top()){
		maxstack.pop();
	}		
	st.pop();
	return poppedValue;
	}

	// Return value at the top of stack.
	int specialTop() {
		// Write your code here.
	if (st.empty()) return -1; 
	return st.top();
	}

	// Return maximum value in stack.
	int specialMax() {
		// Write your code here.
	if (st.empty()) return -1; 
	return maxstack.top();	
	}
};