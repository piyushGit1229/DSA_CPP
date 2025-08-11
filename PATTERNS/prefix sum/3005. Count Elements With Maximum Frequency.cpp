// #include<iostream>
// #include<vector>

// class solution{
//     int maxFrequencyElements(vector<int>& nums){
//     int maxfrequency =0;
//     int count =0;

//     map<int,int>mp;
//     for(int i=0;i<nums.size();i++){
//         mp[nums[i]]++;
//     }

//     for(auto it: mp){
//         int freq = it.second;
//         if(freq>maxfrequency){
//             maxfrequency= freq;
//         }
//     }

//     for(auto it:mp){
//         if(maxfrequency == it.second){
//             count++;
//         }
//     }

//     return count;

//     }
// };