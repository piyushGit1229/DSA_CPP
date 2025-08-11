// bool ispossible(vector<int> &boards, int k,int mid){
//     int count=1;
//     int sumpaint=0;
//     for(int i=0;i<boards.size();i++){
//         if(sumpaint+boards[i]<=mid){
//             sumpaint+=boards[i];
           
//         }
//         else{
//             count++;
//              if(count>k){
//                 return false;
//             }
//             sumpaint=boards[i];
//         }
//     }
//     return true;
// }


// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.
//     int start=*max_element(boards.begin(),boards.end());
//     int end= accumulate(boards.begin(),boards.end(),0);

//     int ans=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(ispossible(boards,k,mid)){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }