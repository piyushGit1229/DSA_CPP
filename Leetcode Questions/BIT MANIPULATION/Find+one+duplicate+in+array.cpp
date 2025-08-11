#include<iostream>
using namespace std;
class Solution {
    public:
    int findDuplicate(int arr[],int n){
        int Xor1 = 0;
        for(int i=0;i<n;i++){
            Xor1 = Xor1 ^ arr[i]; //XOR operation
        }
        int Xor2 = 0;
        for(int i=1;i<=n;i++){
            Xor2 = Xor2 ^ i; //XOR operation
        }

        return Xor1 ^ Xor2; //XOR of both results gives the duplicate number
    }
};
int main(){
Solution sol;
int n;
cout << "Enter the number of elements in the array: ";
cin>>n;
int * arr = new int[n];
for(int i=0;i<n;i++){
    cout << "Enter element " << i + 1 << ": ";
    cin >> arr[i];
}
int result = sol.findDuplicate(arr,n);
cout << "The duplicate number is: " << result << endl;
delete[] arr; // Free dynamically allocated memory
return 0;
}