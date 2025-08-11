#include<iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int single(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans = ans ^ nums[i]; //XOR 
            return ans;
        }
    }
};

int main(){
Solution sol;
int n;
cout << "Enter the number of elements in the array: "; 
cin >> n;
vector<int> nums(n);
for(int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> nums[i];
}   
int result = sol.single(nums);
cout << "The single number is: " << result << endl;

return 0;
}