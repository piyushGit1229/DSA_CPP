#include<bits/stdc++.h>
using namespace std;
int main(){
vector<pair<int,int>>arr={{1,2},{3,4},{5,6},{7,8}};

sort(arr.begin(),arr.end(),[](pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
});

for(auto it:arr){
    cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}