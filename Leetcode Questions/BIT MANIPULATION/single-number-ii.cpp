#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
int singleNumber(vector<int>&nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i< n-2 ;i=i+3){
        if(nums[i]!=nums[i+1]){
            return nums[i];
        }
    }
    return nums[n-1];

}
};
int main(){
 
return 0;
}