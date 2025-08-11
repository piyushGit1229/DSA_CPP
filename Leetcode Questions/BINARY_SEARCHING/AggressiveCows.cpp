// bool ispossible(vector<int> &stalls, int k,int mid){
//     int cows=1;
//     int lastpos=stalls[0];

//     for(int i=1;i<stalls.size();i++){
//         if(stalls[i]-lastpos >=mid){
//             cows++;
//             lastpos=stalls[i];
//             if(cows==k){
//                 return true;
//             }
//         }
//     }
//     return false;
// }



// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.
//     sort(stalls.begin(),stalls.end());
//     int start=1;
//     int end=stalls.back()-stalls.front();
//     int ans=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(ispossible(stalls,k,mid)){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }

// return ans;

// }