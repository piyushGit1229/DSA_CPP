// vector<vector<int>> triplet(int n, vector<int> &arr)
// {
//     // Write your code here.
//     vector<vector<int>>result;
//     sort(arr.begin(),arr.end());
   
//     for(int i=0;i<n;i++){
//      if(i>0 && arr[i]==arr[i-1]) continue;
//         int j=i+1,k=n-1;
//         while(j<k){
//             int sum = arr[i]+arr[j]+arr[k];
//             if(sum<0){
//                 j++;
//             }
//             else if(sum>0){
//             k--;
//             }
//             else{
//                 result.push_back({arr[i],arr[j],arr[k]});
//                 j++;
//                 k--;

//                 while(j<k && arr[j]==arr[j-1]){

//                     j++;
//                 }
//             }
//         }
        
//     }
//     return result;
// }
