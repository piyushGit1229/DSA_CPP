// priority queue are implemented using heap data structure which is a complete binary tree. 

#include <bits/stdc++.h>
using namespace std;
//max heap-> 
// priority_queue<int> pq;
// min heap ->
// priority_queue<int, vector<int>, greater<int>> pq;


///priority queue of pairs considers first element of the pair for comparison
//max heap
priority_queue<pair<int,int>>pq1;

//min heap
// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq2;
int main() {
    // priority_queue<int> pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);
    // pq.push(4);
    // pq.push(5);
    // pq.push(6);
    // pq.push(7);
    // pq.push(8);
    // pq.push(9);
    // pq.push(10);    

    // while (!pq.empty()) {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    //pairs priority queue
    pq1.push({1,2});
    pq1.push({2,3});
    pq1.push({3,4});
    pq1.push({4,5});
    pq1.push({5,6});
    pq1.push({6,7});
    pq1.push({7,8});
    pq1.push({8,9});
    pq1.push({9,10});

    while(!pq1.empty()){
        cout<<pq1.top().first<<" "<<pq1.top().second<<endl;
        pq1.pop();
    }
    return 0;
}