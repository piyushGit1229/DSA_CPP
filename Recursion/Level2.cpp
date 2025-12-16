// 1️⃣ Binary Search (recursive)

/*

#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>arr,int start,int end,int target){
    int mid = start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]==target){
        return mid;  //base case
    }
    if(arr[mid]>target){
        return binarysearch(arr,start,mid-1,target);
    }
    else{
        return binarysearch(arr,mid+1,end,target);
    }
}
int main(){
int n;
cout<<"size of array:";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Enter the element to be searched:";
int target;
cin>>target;
cout<<binarysearch(arr,0,n-1,target);
return 0;
}

*/

// 2️⃣ Check array sorted

/*

#include <bits/stdc++.h>
using namespace std;
bool issorted(vector<int> arr, int i, int j)
{
    if (i == j)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return issorted(arr, i + 1, j);
}
int main()
{
    int n;
    cout << "size of array:";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = issorted(arr, 0, n - 1);
    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}

*/

// Problem 4️⃣: Power of a Number (xⁿ)
// 📌 Problem Statement (SHORT & CLEAR)

// Given two integers x and n, compute the value of xⁿ
// (i.e., x raised to the power n).

// Example 1:
// Input: x = 2, n = 3
// Output: 8

// #include<iostream>
// using namespace std;
// int pow(int x,int n){
//     //base case
//     if(n==0){
//         return 1;
//     }
//     return x*pow(x,n-1);
// }
// int main(){
// int x,n;
// cout<<"Enter x:";
// cin>>x;
// cout<<"Enter n:";
// cin>>n;
// cout<<pow(x,n);
// return 0;
// }

// 1️⃣ First Occurrence & last occurence

/*
#include <bits/stdc++.h>
using namespace std;
int firstocc(vector<int>arr,int start,int end,int target){
       if(arr[start]==target){
        return start;
       }
       if(start>end){
        return -1;
       }
       int mid = start + (end-start)/2;
       if(arr[mid]<target){
        return firstocc(arr,mid+1,end,target);
       }
       else{
        return firstocc(arr,start,mid-1,target);
       }
}

int lastocc(vector<int>arr,int start,int target){
      if(start == arr.size()){
        return -1;
      }
      int idx = lastocc(arr,start+1,target);
      if(idx==-1){
        if(arr[start]==target){
            return start;
        }
        else{
            return -1;
        }
      }
      else{
        return idx;
      }
}
int main()
{
    int n;
    cout << "size of array:";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin>>target;
    cout<<firstocc(arr,0,n-1,target);
    cout<<lastocc(arr,0,target);
    return 0;
}
*/


// 5️⃣ Count digits 
/*
#include<iostream>
using namespace std;
int countdig(int x,int count){
   if(x == 0){
    return count;
   }
   return countdig(x/10,count + 1);
}
int main(){
int x;
cout<<"Enter the number:";
cin>>x;
cout<<countdig(x,0);
return 0;
}
*/


// 6. sum of digits

#include<iostream>
using namespace std;
int sumofdigs(int x,int sum){
    if(x==0){
        return sum;
    }
    return sumofdigs(x/10,sum+x%10);
}
int main(){
int x;
cout<<"Enter the number:";
cin>>x;
cout<<sumofdigs(x,0);
return 0;
}