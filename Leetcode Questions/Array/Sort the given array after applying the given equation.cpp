#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        // code here
        vector<int>modified;
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=A*(arr[i])*arr[i]+B*arr[i]+C;
            modified.push_back(arr[i]);
        }
        sort(modified.begin(),modified.end());
        return modified;
    }
};