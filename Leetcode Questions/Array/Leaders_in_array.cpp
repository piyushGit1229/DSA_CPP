

// class Solution {
//     // Function to find the leaders in the array.
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         // Code here
//         int n=arr.size();
//         vector<int>ans;
//         int max = arr[n-1];
//         ans.push_back(arr[n-1]);
        
//         for(int i=n-2;i>=0;i--){
//             if(arr[i]>=max){
//                 ans.push_back(arr[i]);
//                 max=arr[i];
//             }
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };