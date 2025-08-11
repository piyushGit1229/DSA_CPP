#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

void subsetsumhelper(int index,vector<int>&ans,vector<int>&arr,int n ,int sum){
	if(index == n){
		ans.push_back(sum);
		return;
	}
	subsetsumhelper(index+1,ans,arr,n,sum+arr[index]);//include
	subsetsumhelper(index+1,ans,arr,n,sum);//exclude
}


vector<int> subsetSum(vector<int>arr){
	// Write your code here.	
	vector<int>ans;
	int n = arr.size();
	subsetsumhelper(0,ans,arr,n,0);
	sort(ans.begin(),ans.end());
	return ans;
}