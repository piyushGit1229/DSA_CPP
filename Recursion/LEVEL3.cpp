//PRINTING ALL SUBSQUENCES USING RECURSION

// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

/*

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int i, vector<int>& temp) {
    // base case
    if (i == arr.size()) {
        for (int x : temp) cout << x << " ";
        cout << endl;
        return;
    }

    // take
    temp.push_back(arr[i]);
    solve(arr, i + 1, temp);

    // not take
    temp.pop_back();
    solve(arr, i + 1, temp);
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> temp;
    solve(arr, 0, temp);

    return 0;
}

*/



// Problem: Count Subsequences With Given Sum
// Given an integer array nums and an integer target,
// count the number of NON-EMPTY subsequences whose sum equals target.
// A subsequence keeps relative order but may skip elements.
// Empty subsequence is NOT allowed.

// ✅ Test Case 1 – Basic

// Input

// 3
// 1 2 1
// 2

// Output
// 2

/*

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int i,int target,int count,int sum){
      if(i == arr.size()){
        if(sum == target){
            count++;
        }
        return count;
      }

      count = solve(arr,i+1,target,count,sum + arr[i]);
      count = solve(arr,i+1,target,count,sum);

      return count;

}

int main(){
int n;
int target;
cout<<"Enter the size:";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the target:";
cin>>target;
int count=0;
int sum=0;

int ans = solve(arr,0,target,0,0);
cout<<ans;


return 0;
}


*/


// Problem: Print Subsequences With Sum = K
// Given an integer array nums and an integer K,
// print all NON-EMPTY subsequences whose sum is exactly K.
// A subsequence keeps the relative order of elements but may skip elements.
// Empty subsequence should NOT be printed.


// Input

// 3
// 1 2 1
// 2


// Output

// 2
// 1 1


/*


#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int i,int target,int sum,vector<int>&result){
    if(i==arr.size()){
        if(sum == target){
            for(int x:result){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }
    result.push_back(arr[i]);
    solve(arr,i+1,target,sum + arr[i],result);
    result.pop_back();
    solve(arr,i+1,target,sum,result);
}
int main(){
int n;
int target;
cout<<"Enter the size:";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the target:";
cin>>target;
int sum=0;
vector<int>result;
solve(arr,0,target,0,result);
return 0;
}



*/



// Problem: Print Any Subsequence With Given Sum
// Given an integer array nums and an integer target sum,
// print ANY ONE non-empty subsequence whose sum equals the target.
// A subsequence keeps the relative order of elements but may skip elements.
// If multiple valid subsequences exist, printing any one is sufficient.
// If no such subsequence exists, print nothing.

// ✅ Test Case 1 – Basic
// Input
// 3
// 1 2 1
// 2
// Valid Output (any one)
// 2
// OR
// 1 1

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr,int i,int target,int sum,vector<int>&result){
    if(i==arr.size()){
        if(sum == target){
            for(int x:result){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }
        
    result.push_back(arr[i]);
    solve(arr,i+1,target,sum + arr[i],result);
    result.pop_back();
    solve(arr,i+1,target,sum,result);
}
int main(){
int n;
int target;
cout<<"Enter the size:";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the target:";
cin>>target;
int sum=0;
vector<int>result;
solve(arr,0,target,0,result);
return 0;
}
