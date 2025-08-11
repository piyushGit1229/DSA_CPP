#include<bits/stdc++.h>
using namespace std;
int subarraysum(int arr[],int n){
	int curr_sum = 0;
	int max_sum = INT_MIN;
	for(int i=0;i<n;i++){
		curr_sum=curr_sum+arr[i];
		max_sum=max(curr_sum,max_sum);
		if(curr_sum<0){
			curr_sum=0;
		}
	}
	cout<<max_sum;
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
subarraysum(arr,n);

}