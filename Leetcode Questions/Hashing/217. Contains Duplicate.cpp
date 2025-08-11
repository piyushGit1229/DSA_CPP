// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         // sort(nums.begin(),nums.end());
//         // for(int i=0;i<nums.size()-1;i++){
//         //     if(nums[i+1]==nums[i]){
//         //         return true;
//         //     }
//         // }
//         // return false;

//         //By hashmap hehe :)

//         map<int,int>freq;
//         for(int i=0;i<nums.size();i++){
//             freq[nums[i]]++;
//         }

//         for(int i=0;i<nums.size();i++){
//             if(freq[nums[i]]>1){
//                 return true;
//             }
//         }
//         return false;
//     }
// };
