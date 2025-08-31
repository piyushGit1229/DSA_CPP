// 342. Power of Four Solved Easy Topics premium lock icon Companies Given an integer n, return true 
// if it is a power of four. Otherwise, return false.  An integer n is a power of four, if there exists
// an integer x such that n == 4x.     
// Example 1:  
// Input: n = 16 
// Output: true 

// Example 2: 
// Input: n = 5 
// Output: false 

// Example 3:  
// Input: n = 1 
// Output: true


//place 4 in place of two

#include <cmath>
bool isPowerOfTwo(int n)
{	
    // Write your code here.
    int start = 0;
    int end=n;
    while(start<=end){
        long long mid = start+(end - start)/2;
    
        if(pow(2,mid) == n){
            return true;
        }
        else if(pow(2,mid) >= n){
            end = mid-1;
        }
        else{
            start = mid +1 ;
        }
    }
    return false;
}


//t.c -> log n
