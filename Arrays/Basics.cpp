// // #include<iostream>
// // using namespace std;

// // int main(){
// //     cout<<"DSA revision";
// // }

// //Loops revision
// //For Loop

// // #include<iostream>
// // using namespace std;
// // int n;
// // int main(){
// // cout<<"Enter number:";
// // cin>>n;
// // for(int i=0;i<n;i++){
// //     cout<<i<<endl;
// // }
// // return 0;
// // }

// //While Loop
// // #include<iostream>
// // using namespace std;
// // int n;

// // int main(){
// // cin>>n;
// // int i=0;
// // while(i<=n){
// //     cout<<i<<endl;
// //     i=i+1;
// // }
// // return 0;
// // }

// //do while loop
// // #include<iostream>
// // using namespace std;
// // int n,i;
// // int main(){
// // cin>>n;
// // do{
// //     cout<<i<<" ";
// //     i+=1;
// // }
// // while(i<=n);
// // return 0;
// // }

// //sum of numbers

// // #include<iostream>
// // using namespace std;
// // int n,i=0,sum =0;
// // int main(){
// // cout<<"Enter the number: ";
// // cin >>n;
// // for(int i=0;i<=n;i++){
// //     sum = sum + i;
// // }
// // cout<<sum;
// // return 0;
// // }

// //Prime or not
// // #include<iostream>
// // using namespace std;
// // int main(){
// // int n;
// // cin>>n;
// // int i=2;
// // while(i<n){
// //     if(n%i==0){
// //         cout<<"Not prime"<<endl;
// //         return 0;
// //     }
// //     i++;
// // }
// // cout<<"Prime"<<endl;
// // return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// // int a,b=1;
// // a=10;
// // if(++a){
// //     cout<<b;
// // }
// // else
// // {
// //     cout<<++b;
// // }
// // return 0;
// // }
// #include<iostream>
// using namespace std;
// int productandsum(int n){
//     int product =1;
//     int sum = 0;
//     while(n){
//     product = product * (n%10);
//     sum = sum + (n%10);
//     n = n/10;
//     }
//     return product - sum;
// }
// int main(){
// productandsum(234);
// cout << "The difference between the product and sum of digits is: " << productandsum(234) << endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Solution {
//     public:
//     int findDuplicate(int arr[],int n){
//         int Xor1 = 0;
//         for(int i=0;i<n;i++){
//             Xor1 = Xor1 ^ arr[i]; //XOR operation
//         }
//         int Xor2 = 0;
//         for(int i=1;i<=n;i++){
//             Xor2 = Xor2 ^ i; //XOR operation
//         }

//         return Xor1 ^ Xor2; //XOR of both results gives the duplicate number
//     }
// };
// int main(){
// Solution sol;
// int n;
// cout << "Enter the number of elements in the array: ";
// cin>>n;
// int * arr = new int[n];
// for(int i=0;i<n;i++){
//     cout << "Enter element " << i + 1 << ": ";
//     cin >> arr[i];
// }
// int result = sol.findDuplicate(arr,n);
// cout << "The duplicate number is: " << result << endl;
// delete[] arr; // Free dynamically allocated memory
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a = 5 ,b = 10;
// //swapping using XOR
// int temp;
// a = a ^ b;
// b = a^ b;
// a= a ^ b;
// cout<<"a :"<<a<<endl<<"b :"<<b;
// return 0;
// }

/// #include<iostream>
// using namespace std;

// class Solution{
//     public:
//     void checkBit(int num,int i){

//     if(num &(1<<i)){
//     cout<<"Bit is set at position"<<i<<endl;
//     }
//     else
//     cout<<"Bit is not set at position"<<i<<endl;
//     }
// };
// int main(){
// Solution sol;
// int num;
// int i;
// cout<<"Enter the number: ";
// cin>>num;
// for(int i=0;i<4;i++){
//     sol.checkBit(num,i);
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// void checkBit(int num,int i){
//     int bit =(num>>i)&1;
//     cout<<bit<<endl;

// }
// int main(){
// int num,i;
// cout << "Enter a number: ";
// cin >> num;
// cout << "Enter the bit position to check: ";
// cin >> i;
// checkBit(num, i);

// return 0;
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// bool isArmstrong(int n)
// {
//     int original= n;
//     int ans = 0;
//     int temp = n;
//     int count = 0;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }
//     temp = n;
//     while (temp != 0)
//     {
//         int digit = temp % 10;
//         ans = ans + round(pow(digit,count));
//         temp = temp / 10;
//     }
//     return (original == ans);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     if (isArmstrong(n))
//     {
//         cout << "Armstrong";
//     }
//     else
//     {
//         cout << "not armastrong";
//     }
//     return 0;
// }
// Check if Array is Sorted (Recursively)

// #include <iostream>
// using namespace std;
// int isSorted(int arr[], int i, int n)
// {
//     if (i == n - 1)
//     {
//         return true; // last element reached
//     }
//     if(arr[i]<arr[i+1]){
//         return isSorted(arr,i+1,n);
//     }
//     else{
//         return false;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     if (isSorted(arr, 0, n))
//     {
//         cout << "Array is sorted";
//     }
//     else
//     {
//         cout << "Array is not sorted";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

bool issorted(int arr[],int n,int i){
    if(i == n-1){
        return true;
    }
    if(arr[i]<arr[i+1]){
     return issorted(arr,n,i+1);
    }
    else{
        return false;
    }
}
int main(){

return 0;
}