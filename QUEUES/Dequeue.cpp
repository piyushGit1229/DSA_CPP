#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq;
dq.push_back(1);
dq.push_back(2);
dq.push_front(3);
dq.push_front(4);

cout<<dq.front()<<endl;
cout<<dq.back()<<endl;
dq.pop_back();
dq.pop_front();
cout<<dq.front()<<endl;
cout<<dq.back()<<endl;

return 0;
}