//Print n times
// #include<iostream>
// using namespace std;
// int count = 0;
// void print(){
//     if(count == 10) return;
//     cout<<count<<endl;
//     count++;
//     print();
// }
// int main(){
// print();
// return 0;
// }


//print name n times using recursion

// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i>n){
//         return; // base case
//     }
//     cout<<"Piyush"<<endl;
//     print(i+1,n);
// }
// int main(){
// int n=4;
// print(1,n);
// return 0;
// }


//print 1 to N using recusrion 

// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i>n){
//         return;//base case
//     }
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
// int n;
// cout<<"Enter the n :";
// cin>>n;
// print(1,n);

// return 0;
// }


//print n to 1 using recursion

// #include<iostream>
// using namespace std;
// void print(int i,int n){
// if(i==0){
//     return;
// }
// cout<<i<<endl;
// print(i-1,n);
// }
// int main(){
// print(10,10);
// return 0;
// }


//sum of first n numbers

// #include<iostream>
// using namespace std;
// void func(int i,int sum){
//     if(i<1){
//     cout<<sum<<endl;
//     return;
//     }
//     func(i-1,sum+i);
// }
// int main(){
// cout<<"Enter the number:"<<endl;
// int n;
// cin>>n;
// func(n,0);
// return 0;
// }




//Factorial using recursion

// #include<iostream>
// using namespace std;
// int fact(int n){
//     //base case
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
// cout<<fact(5);
// return 0;
// }

// reverse array with recursion
// #include<iostream>
// using namespace std;
// void rev(int arr[],int start,int end){
// if( start>=end){
//     return;
// }
// swap(arr[start],arr[end]);
// rev(arr,start+1,end-1);
// }


// void printarray(int arr[],int n){
//  for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main(){
// int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1 };
//    rev(arr, 0, n - 1);
//    printarray(arr,n);
// return 0;
// }


#include<iostream>
using namespace std;
int fib(int n){
    int ans =0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    ans = fib(n-1)+fib(n-2);
    return ans;
}
int main(){
int n;
cin>>n;
cout<<fib(n);
return 0;
}
