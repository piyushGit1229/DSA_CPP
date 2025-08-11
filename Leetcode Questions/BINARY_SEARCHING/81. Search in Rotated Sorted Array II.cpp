#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return true;
            }

            //handle duplicates if start == mid and mid== end
            if(nums[start]==nums[mid] && nums[mid]==nums[end]){
                start++;
                end--;
                continue;
            }

            if (nums[start] <= nums[mid]) { // left part is sorted
                if (nums[start] <= target && target <= nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            //right part is sorted
            else{
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
};