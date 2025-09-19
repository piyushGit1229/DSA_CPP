#include<bits/stdc++.h>
using namespace std;
int main(){
// vector<int>v(5,10);
// // for(int x:v){
// //     cout<<x<<" ";
// // }
// for(auto it  = v.begin(); it != v.end();++it){
//     cout<<*it<<" ";
// }


// vector<pair<int,int>>vt;
// vt.push_back({1,2});
// vt.push_back({1,4});


// vt.push_back({1,6});
// for( auto it: vt){
//     cout<<it.first<<" " <<":"<<it.second<<endl;
// }


vector<int> nums = {4, 2, 3};
vector<pair<int,int>> vp;

for(int i=0;i<nums.size();i++){
    vp.push_back({nums[i], i}); // store value and its original index
}
// // sort(vt.begin(), vt.end()); // ascending
// // sort(vt.begin(), vt.end(), greater<int>()); // descending


return 0;
}