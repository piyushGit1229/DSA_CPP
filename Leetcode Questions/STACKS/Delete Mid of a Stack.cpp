#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int> &s)
    {
        int n = s.size();
        int mid = n / 2; // middle index (0-based)
        stack<int> temp;

        // Move elements from original stack to temp, skipping middle
        for (int i = 0; i < n; i++)
        {
            int topElement = s.top();
            s.pop();

            if (i == mid)
                continue; // skip the middle element

            temp.push(topElement);
        }

        // Push elements back to original stack
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
    }
};

int main()
{

    return 0;
}