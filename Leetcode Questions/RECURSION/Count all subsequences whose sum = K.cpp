#include<iostream>
#include<vector>
using namespace std;
int countsubset(int index,int k,int sum,vector<int>&arr){
    if(index==arr.size()){
        return sum ==k;
    }
    int left=countsubset(index+1,k,sum+arr[index],arr);
    int right = countsubset(index+1,k,sum,arr);

    return left+right;

}
int main(){
vector<int> arr = {1, 2, 1};
int k=2;
int count = countsubset(0,k,0,arr);
cout<<count;
return 0;
}