// class Solution {
// public:
//     void combination(int index,vector<int>&arr,int target,vector<int>&subset,vector<vector<int>>&result){
//     if(target == 0){
//     result.push_back(subset);
//     return;
//     }
//     if(target<0 || index == arr.size()) return;
    
//     if(arr[index]<=target){
//         subset.push_back(arr[index]);
//         combination(index,arr,target-arr[index],subset,result);
//         subset.pop_back();
//     }
//     combination(index+1 ,arr,target,subset,result);
    
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//     vector<vector<int>>result;
//     vector<int>subset;
//     combination(0,candidates,target,subset,result);
//     return result;
//     }
// };