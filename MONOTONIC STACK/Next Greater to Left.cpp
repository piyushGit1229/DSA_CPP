#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterLeft(vector<int> &arr)
{
    int n = arr.size();
    vector<int> res(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            res[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}
int main()
{
    vector<int> arr = {4, 5, 2, 10};
    int n = arr.size();
    vector<int> res = nextGreaterLeft(arr);

    cout << "Next Greater to Left: ";
    for (int x : res)
        cout << x << " ";
    cout << endl;

    return 0;
}