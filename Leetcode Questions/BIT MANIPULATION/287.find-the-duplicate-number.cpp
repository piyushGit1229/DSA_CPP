#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ans = nums[i];
                break;
            }
        }
        return ans;


    //BETTER APPPROACH
    //  int tortoise=nums[0];
    //  int hare=nums[0];

    //  do{
    //     tortoise=nums[tortoise];
    //     hare=nums[nums[hare]];

    //  }
    //  while(tortoise!=hare);
    //  tortoise=nums[0];
    //  while(tortoise!=hare){
    //     tortoise=nums[tortoise];
    //     hare=nums[hare];
    //  }
    //  return hare;
    // }
    }
};
int main(){

return 0;
}
