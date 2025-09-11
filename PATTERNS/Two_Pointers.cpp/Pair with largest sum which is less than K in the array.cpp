#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    pair<int, int> maxSum(vector<int> &arr, int k) {
        // code here
        int n =arr.size();
        int sum =0;
        int i=0;
        int j=n-1;
        int bestsum=-1;
        sort(arr.begin(),arr.end());
        pair<int,int>ans={-1,-1};
        
        if(n<2){
            return {-1,-1};
        }
        
        while(i<j){
            sum = arr[i]+arr[j];
            if(sum < k){
                if(sum > bestsum 
                || (sum == bestsum && abs(arr[i]-arr[j])>abs(ans.first-ans.second))){
                    bestsum=sum;
                    ans = {arr[i],arr[j]};
                }
                i++;
            }
            else{
                j--;
            }
            
        }
        
    return ans;
        
        
    }
};

int main(){

return 0;
}
