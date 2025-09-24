#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
     stack<int>tempst;
      
     while(!st.empty()){
          int curr = st.top();
          st.pop();
          
          while(!tempst.empty() && tempst.top() > curr){
              st.push(tempst.top());
              tempst.pop();
          }
        tempst.push(curr);
     }
        st= tempst;
    }
};

int main(){

return 0;
}
