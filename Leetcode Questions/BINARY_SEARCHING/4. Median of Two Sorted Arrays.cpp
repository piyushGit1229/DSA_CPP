#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE  O(n1+n2), where  n1 and n2 are the sizes of the given arrays.

double median(vector<int>&a,vector<int>&b){
    int n1=a.size();
    int n2=b.size();
    vector<int>n3;
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            n3.push_back(a[i++]);
        }
        else{
            n3.push_back(b[j++]);
        }
    }
    while(i<n1){
        n3.push_back(a[i++]);
    }
    while(j<n2){
        n3.push_back(b[j++]);
    }


    //find the median if it is odd length simply return the middle element 
    int n=n3.size();
    if(n%2==1){
        return  n3[n/2];
    }
    //find the median if it is even length return the average of two middle elements
    else{
        return (n3[n/2-1]+n3[n/2])/2.0;
    }
}
int main(){
 vector<int> a = {1, 4, 7, 10, 12};
 vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(a, b) << '\n';
return 0;
}