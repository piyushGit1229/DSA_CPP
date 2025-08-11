// int findfloor(int arr[],int n,int x){
// 	int start=0;
// 	int end=n-1;
// 	int ans=-1;
// 	while(start<=end){
// 		int mid =start+(end-start)/2;
// 		if(arr[mid]<=x){
// 			ans=mid;
// 			start=mid+1;  // try to find larger floor
// 		}
// 		else{
// 			end=mid-1;
// 		}
// 	}
// 	return ans;
// }

// int findceil(int arr[],int n,int x){
// 	int start=0;
// 	int end=n-1;
// 	int ans=-1;
// 	while(start<=end){
// 		int mid =start+(end-start)/2;
// 		if(arr[mid]>=x){
// 			// ciel is greater than or equal to x
// 		ans=mid;
// 		end=mid-1;
// 		}
// 		else{
// 		start=mid+1;
// 	}
	
// }
// return ans;
// }

// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
// 	// Write your code here.
// 	int* arr = &a[0];
// 	int flooridx =findfloor(arr,n,x);
// 	int ceilIdx= findceil(arr,n,x);

// 	int floorval;
// 	if(flooridx!=-1){
// 		floorval=arr[flooridx];
// 	}
// 	else{
// 	floorval=-1;
// 	}
	
// 	int ceilval;
// 	if(ceilIdx!=-1){
// 		ceilval=arr[ceilIdx];
// 	}
// 	else{
// 		ceilval=-1;
// 	}
	
// 	return{floorval,ceilval};
// }