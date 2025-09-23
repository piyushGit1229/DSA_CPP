#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreatertoright(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> res(n, -1);
    // step 1 traverse from left to right
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            // if the element u want to push is greater then top element of the stack
            res[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
int main()
{
    vector<int>arr ={4, 5, 2, 10, 8};
    nextGreatertoright(arr);
    return 0;
}