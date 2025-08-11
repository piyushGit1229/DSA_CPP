// #include <unordered_map>
//  int firstoccurence(vector<int>&arr ,int x){
//         int start=0;
//         int end = arr.size()-1;
//         int first=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(arr[mid]==x){
//                 first=mid;
//                 end=mid-1;//first occurence will always reside in the left side of the array
//             }
//             else if(arr[mid]<x){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//         return first;
// }

//  int lastoccurence(vector<int>&arr ,int x){
//         int start=0;
//         int end = arr.size()-1;
//         int last=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(arr[mid]==x){
//                 last=mid;
//                 start=mid+1;//last occurence will always reside in the right side of the arra
//             }
//             else if(arr[mid]<x){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//         return last;
//     }
    
// int count(vector<int>& arr, int n, int x) {
// 	// Write Your Code Here
// 	//Brute force if nothing works and u are desperate to use this shit
// 	/*
// 	int count=0;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]==x){
// 			count++;
// 		}
// 	}
// 	return count;
// 	*/ 
// 	//using hashmap
// 	// unordered_map<int,int>mp;
// 	// for(int i=0;i<n;i++){
// 	// 	mp[arr[i]]++;
// 	// }
// 	// for(auto it:mp){
// 	// 	if(it.first==x){
// 	// 		return it.second;
// 	// 	}
// 	// }
// 	// return 0;

// 	//best tc o log n binary search approach
// 	int first=firstoccurence(arr,x);
// 	  if(first == -1) return 0;
// 	int last= lastoccurence(arr,x);
// 	return last-first+1;
	
// }
