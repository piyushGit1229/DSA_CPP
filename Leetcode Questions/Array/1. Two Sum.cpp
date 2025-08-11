
#include<iostream>
#include<vector>
#include <map>
using namespace std;
vector<int>twosum(vector<int>&nums ,int target){
    //Brute force approach

    // for( int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){
    //             return{i,j};
    //         }
    //     }
    // }
    // return{};
    //Hashing
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int complement = target-nums[i];
        if(mp.find(complement)!=mp.end()){
            return{mp[complement],i};
        }
        mp[nums[i]]=i;
    }
    return{};
    
}
int main(){
int n=5;
vector<int>nums={2,7,11,15};
int target=9;
twosum(nums,target);
return 0;
}