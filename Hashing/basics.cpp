#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size: ";
cin>>n;
int arr[n];
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int hash[13]={};
for(int i=0;i<n;i++){
    hash[arr[i]]=hash[arr[i]]+1;
}

int q;
cout << "\nEnter number of queries: ";
cin >> q;

while(q--){
    cout << "\nNow enter the numbers to check their frequencies:" << endl;
    while (q--) {
        int number;
        cout << "Query number: ";
        cin >> number;
        if (number >= 0 && number < 13) {
            cout << "Frequency of " << number << " = " << hash[number] << "\n";
        } else {
            cout << "Number " << number << " is out of hash range [0–12]." << endl;
        }
    }
}


return 0;
}