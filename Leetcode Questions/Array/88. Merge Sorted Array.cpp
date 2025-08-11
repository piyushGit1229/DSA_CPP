// #include<iostream>
// using namespace std;
// void merge(int arr1[],int n1,int arr2[],int n2){
// int i=n1-1;
// int j=n2-1;
// int index= n1+n2-1;

// while(j>=0){
//     if(i>=0 && arr1[i]>arr2[j]){
//         arr1[index]=arr1[i];
//         i--;
//         j--;
//     }
//     else{
//         arr1[index]=arr2[j];
//         index--;
//         j--;
//     }
// }
// }
// int main(){
//     int n1 = 3;
//     int n2 = 3;
//     int arr1[n1 + n2] = {1, 2, 3, 0, 0, 0};  // Allocate total space
//     int arr2[n2] = {2, 5, 6};

//     merge(arr1, n1, arr2, n2);

//     // 🔽 Print the merged array
//     cout << "Merged array: ";
//     for (int i = 0; i < n1 + n2; i++) {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;

//     return 0;

// return 0;
// }

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;
//         int j = n - 1;
//         int k = m + n - 1;
        
//         while (j >= 0) {
//             if (i >= 0 && nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }
//     }
// };