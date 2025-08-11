// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         // vector<int>result;
//         // for(int i=0;i<nums1.size();i++){
//         //     for(int j=0;j<nums2.size();j++){
//         //         if(nums1[i]==nums2[j]){
//         //             result.push_back(nums1[i]);
//         //              nums2[j] = INT_MIN; // Mark nums2[j] to avoid duplicate matches
//         //             break;
//         //         }
               
//         // }
//         // }
//         // return result;


//         vector<int>result;
//         //Using hashmap
//          // Step 1: Count frequencies in nums1
//         map<int,int>freq;
//         for(int i =0;i<nums1.size();i++){
//         freq[nums1[i]]++;
//         }
       

//         // Step 2: Check for common elements in nums2
//         for(int i=0;i<nums2.size();i++){
//             if(freq[nums2[i]]>0){
//                 result.push_back(nums2[i]);
//                 freq[nums2[i]]--;
//             }
//         }
//    return result;
//     }
// };