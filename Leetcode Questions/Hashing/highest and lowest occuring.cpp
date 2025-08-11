#include<iostream>
#include<vector>
#include<map>
using namespace std;

void Frequency(int arr[],int n){
    int maxfreq =0;
    int maxelement =0;
    int minfreq=0;
    int minelement = 0;
    int count =0;

    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        int count = it.second;
        int element = it.first;
        
        if(count >maxfreq){
            maxelement = element;
            maxfreq = count;
        }
        if (count < minfreq) {
            minelement = element;
            minfreq= count;
        }
    }
    cout << "The highest frequency element is: " << maxelement<< "\n";
    cout << "The lowest frequency element is: " << minelement << "\n";
}

int main(){
int arr[] = {10, 5, 10, 15, 10, 5};
int n = sizeof(arr) / sizeof(arr[0]);
Frequency(arr, n);
return 0;
}