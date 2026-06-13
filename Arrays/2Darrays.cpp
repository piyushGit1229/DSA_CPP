// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the number of rows: ";
//     cin>>rows;
//     int columns;
//     cout<<"Enter the number of columns: ";
//     cin>>columns;
//     int arr[rows][columns];

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //print 
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// arr[2][2]=10;
// cout<<arr[2][2];
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// void search(int arr[][3],int rows,int columns,int target,vector<pair<int,int>>&p){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(arr[i][j] == target){
//                p.push_back({i,j});
//             }
//         }
//     }
// }
// int main(){
// int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
// vector<pair<int,int>>p;

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// // search(arr,3,3,5)?cout<<"Found":cout<<"Not Found";
// search(arr,3,3,5,p);
// for(auto it:p){
//     cout<<it.first<<" "<<it.second<<endl;
// }
// return 0;
// }


//find maximum row sum 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    // rows -> mat.size()
    // cols -> mat[0].size()

    int arr[100][100];

    // Input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int maxRowSum = INT_MIN;
    int maxColSum = INT_MIN;

    // Find maximum row sum
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        maxRowSum = max(maxRowSum, sum);
    }

    // Find maximum column sum
    for(int j = 0; j < cols; j++) {
        int sum = 0;

        for(int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }

        maxColSum = max(maxColSum, sum);
    }

    cout << "Maximum Row Sum = " << maxRowSum << endl;
    cout << "Maximum Column Sum = " << maxColSum << endl;

    return 0;
}