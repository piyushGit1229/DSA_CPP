#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
// STEP 1: Merge two sorted halves into one sorted array//
//////////////////////////////////////////////////////////

void merge(int arr[], int l, int mid, int r) {
    // Lengths of the left and right subarrays
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Temporary arrays to hold the left and right parts
    int left[n1], right[n2];

    // Copy elements into left[] from arr[l to mid]
    for (int i = 0; i < n1; i++) 
        left[i] = arr[l + i];

    // Copy elements into right[] from arr[mid+1 to r]
    for (int i = 0; i < n2; i++) 
        right[i] = arr[mid + 1 + i];

    // i → index for left[], j → index for right[], k → index for original array
    int i = 0, j = 0, k = l;

    // Merge the two subarrays back into arr[l...r]
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) 
            arr[k++] = left[i++];
        else 
            arr[k++] = right[j++];
    }

    // Copy any remaining elements of left[] (if any)
    while (i < n1) 
        arr[k++] = left[i++];

    // Copy any remaining elements of right[] (if any)
    while (j < n2) 
        arr[k++] = right[j++];
}


///////////////////////////////////////////////////////////////
// STEP 2: Recursively divide the array and sort the halves
///////////////////////////////////////////////////////////////
void mergeSort(int arr[], int l, int r) {
    // Base case: when only one element is left
    if (l >= r) return;

    // Find the middle point
    int mid = l + (r - l) / 2;

    // Step 2.1: Recursively sort the left half
    mergeSort(arr, l, mid);

    // Step 2.2: Recursively sort the right half
    mergeSort(arr, mid + 1, r);

    // Step 2.3: Merge the sorted halves
    merge(arr, l, mid, r);
}


////////////////////////////////////////////////////
// STEP 3: Driver code to test merge sort function
////////////////////////////////////////////////////
int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};  // Input array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of array

    // Before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;

    // Perform merge sort
    mergeSort(arr, 0, n - 1);

    // After sorting
    cout << "After Merge Sort: ";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
