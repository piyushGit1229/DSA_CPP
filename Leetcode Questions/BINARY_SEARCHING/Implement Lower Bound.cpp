#include<iostream>
using namespace std;
int findlowerbound(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=0;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]>=target){
            ans=mid;
            end=mid-1;//eliminate left if mid>target we can find more smaller in left
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}
int main(){

return 0;
}