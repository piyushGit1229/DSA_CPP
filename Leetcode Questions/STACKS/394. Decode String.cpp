#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string decodeString(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c != ']')
            {
                st.push(c);
            }
            else
            {
                string element = "";
                while (!st.empty() && st.top() != '[')
                {
                    element = st.top() + element;
                    st.pop();
                }
                st.pop();

                string numstr = "";
                while (!st.empty() && isdigit(st.top()))
                {
                    numstr = st.top() + numstr;
                    st.pop();
                }
                int times = stoi(numstr);

                string expanded = "";
                while (times--)
                {
                    expanded = expanded + element;
                }
                for (char ch : expanded)
                    st.push(ch);
            }
        }

        string result = "";
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};
int main()
{

    return 0;
}