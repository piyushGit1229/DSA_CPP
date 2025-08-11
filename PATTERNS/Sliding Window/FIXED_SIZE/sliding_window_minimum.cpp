#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int>slidingwindowmin(int arr[],int n,int k){
deque<int>dq;
vector<int>result;
for(int i=0;i<n;i++){
    while(!dq.empty() &&  dq.front()<=i-k){
        dq.pop_front();
    }
    while(!dq.empty() && arr[i]<=arr[dq.back()]){
        dq.pop_back();
    }
    dq.push_back(i);

    if(i>=k-1){
        result.push_back(arr[dq.front()]);
    }
}
return result;
}
int main(){
int arr[5]={1,2,3,4,5};
int n=5;
int k=3;
vector<int>ans=slidingwindowmin(arr,n,k);
 cout << "Minimum of each window: ";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
return 0;
}