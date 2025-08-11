#include<iostream>
#include <climits>
using namespace std;
int maxsubArray(int arr[],int n){
int max_sum =INT_MIN;
int curr_sum=0;
for(int i;i<n;i++){
    curr_sum = curr_sum + arr[i];
    max_sum= max(curr_sum,max_sum);
}
return max_sum;
}
int main(){

return 0;
}