#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Function to calculate total trapped water
    int trap(vector<int>& height) {
        int n = height.size(); // Number of bars in the elevation map
        
        // Two pointers for left and right ends of the array
        int left = 0;
        int right = n - 1;
        
        // Variables to keep track of maximum height encountered so far from left and right
        int leftmax = 0;
        int rightmax = 0;
        
        // Variable to store the total trapped water
        int water = 0;
        
        // Approach: Two-pointer technique
        // We move the pointers towards each other, always processing the smaller height side
        while (left < right) {
            
            // If the left bar is smaller than the right bar
            if (height[left] < height[right]) {
                
                // If current left bar is taller than the maximum seen so far from the left
                if (height[left] >= leftmax) {
                    // Update leftmax
                    leftmax = height[left];
                } else {
                    // Water can be trapped at this index
                    // Trapped water = leftmax - current bar height
                    water += leftmax - height[left];
                }
                
                // Move left pointer to the right
                left++;
            } 
            else { // If the right bar is smaller or equal to the left bar
                
                // If current right bar is taller than the maximum seen so far from the right
                if (height[right] >= rightmax) {
                    // Update rightmax
                    rightmax = height[right];
                } else {
                    // Water can be trapped at this index
                    // Trapped water = rightmax - current bar height
                    water += rightmax - height[right];
                }
                
                // Move right pointer to the left
                right--;
            }
        }
        
        // Return total trapped water
        return water;
    }
};


int main(){

return 0;
}
