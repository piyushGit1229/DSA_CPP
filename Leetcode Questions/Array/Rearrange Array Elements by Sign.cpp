// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         // vector<int>pos;
//         // vector<int>neg;
//         // for(int i=0;i<nums.size();i++){
//         //     if(nums[i]>0){
//         //         pos.push_back(nums[i]);
//         //     }
//         //     else{
//         //         neg.push_back(nums[i]);
//         //     }
//         // }
//         // vector<int>result;
//         // for(int i=0;i<pos.size();i++){
//         //     result.push_back(pos[i]);
//         //     result.push_back(neg[i]);
//         // }
//         // return result;

//      //2nd way 
//     #include <bits/stdc++.h> 

// void rearrange(vector<int> &arr)
// {
// 	// Write your code here.
// 	vector<int>pos;
// 	vector<int>neg;
// 	for(int i=0;i<arr.size();i++){
// 		if(arr[i]>0){
// 			pos.push_back(arr[i]);
// 		}
// 		else{
// 			neg.push_back(arr[i]);
// 		}
// 	}
// 	vector<int>result;
// 	int i=0;
// 	int j=0;
// 	while(i<pos.size() && j<neg.size()){
// 		result.push_back(pos[i++]);
// 		result.push_back(neg[j++]);
// 	}
// 	while(i<pos.size()){
// 		result.push_back(pos[i++]);
// 	}while(j<neg.size()){
// 		result.push_back(neg[j++]);
// 	}
// 	arr=result;
// }

// };