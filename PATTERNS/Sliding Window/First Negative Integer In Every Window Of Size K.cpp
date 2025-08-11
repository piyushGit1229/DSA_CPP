#include<iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int>firstnegative(int arr[],int n,int k){
    int i=0;
    int j=0;
    vector<int>result;
    deque<int>dq;
   
    while(j<n){
        if(arr[j]<0){
            dq.push_back(j);
        }
        if(j-i+n < k){
            j++;
        }
        else if(j-i+n==k){
            if(!dq.empty()){
                result.push_back(arr[dq.front()]);
            }
            else{
                result.push_back(0);
            }
            if(!dq.empty() && dq.front()==i){
                dq.pop_front();
            }
            i++;
            j++;

        }
    }
    return result;
    
}
int main(){

return 0;
}