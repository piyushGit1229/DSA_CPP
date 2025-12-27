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

// #include<iostream>
// using namespace std;
// int sumofdigs(int x,int sum){
//     if(x==0){
//         return sum;
//     }
//     return sumofdigs(x/10,sum+x%10);
// }
// int main(){
// int x;
// cout<<"Enter the number:";
// cin>>x;
// cout<<sumofdigs(x,0);
// return 0;
// }


// Problem Statement (clear & simple)

// Given a string, remove duplicate characters
// and keep only first occurrence of each character
// using recursion only.

// Example
// Input  : "aabbccda"
// Output : "abcd"


// #include<bits/stdc++.h>
// using namespace std;

// void removeduplicate(string s,int i,vector<bool> &visited){
//     if(i==s.size()){
//         return;
//     }
//     if(visited[s[i]-'a'] == true){
//         removeduplicate(s,i+1,visited); //skip
//     }
//     else{
//         visited[s[i]-'a'] = true;
//         removeduplicate(s,i+1,visited);
//         cout<<s[i];
//     }
// }

// int main(){
// string s;
// cin>>s;
// set<char>st;
// for(int i=0;i<s.size();i++){
//     st.insert(s[i]);
// }
// for(auto it:st){
//     cout<<it;
// }
// return 0;
// stack<char>st;
// for(int i=0;i<s.size();i++){
//     if(st.empty()){
//         st.push(s[i]);
//     }
//     else{
//         if(st.top()==s[i]){
//             st.pop();
//         }
//         else{
//             st.push(s[i]);
//         }
//     }
// }
// while(!st.empty()){
//     cout<<st.top();
//     st.pop();
// }

//with recursion
// vector<bool>visited(26,false);
// removeduplicate(s,0,visited);

// return 0;
// }




// Reverse a stack using recursion


// Example 1:
// Input:
//  stack = [4, 1, 3, 2]  
// Output:
//  [2, 3, 1, 4]

#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(top);
}

void reverseStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }

    int top = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, top);
}

int main() {
    stack<int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    reverseStack(st);

    // print stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
