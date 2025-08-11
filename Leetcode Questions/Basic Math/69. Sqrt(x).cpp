#include<iostream>
using namespace std;
int sqrt(int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        long long int mid = (start+end)-start/2;
        long long int square = mid*mid;
        if(square == n){
            cout<<mid;
        }
        else if(square<n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
};
int main(){
int result = sqrt(9);
cout<< result;
return 0;
}