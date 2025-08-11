#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int ans= 0;
     for(int i=0;i<nums.size();i++){
        ans = ans ^ nums[i];
     } 
     return ans;  
    }
};

int main(){
Solution solution;
int n;
cout << "Enter the number of elements in the sorted array: ";
cin >> n;
vector<int> nums(n);
cout<< "Enter the elements of the sorted array (with one element appearing only once): ";
for(int i = 0; i < n; i++) {
    cin >> nums[i];
}
int result = solution.singleNonDuplicate(nums);
cout << "The single element in the sorted array is: " << result << endl;
return 0;
}
