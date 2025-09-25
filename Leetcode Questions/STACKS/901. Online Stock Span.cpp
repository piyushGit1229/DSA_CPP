#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> st; //{100,1} element with span value
    StockSpanner() {}

    int next(int price) {
        int span = 1; // current span price of itself

        while (!st.empty() && st.top().first <= price) {
            span = span + st.top().second;
            st.pop();
        }

        st.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main(){

return 0;
}
