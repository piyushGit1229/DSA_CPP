#include <bits/stdc++.h>
using namespace std;

// Function to maintain the max-heap property
void heapify(int arr[], int n, int i) {
    int largest = i;
    int leftidx = 2 * i;
    int rightidx = 2 * i + 1;

    // Check if left child exists and is greater than current largest
    if (leftidx <= n && arr[leftidx] > arr[largest]) {
        largest = leftidx;
    }

    // Check if right child exists and is greater than current largest
    if (rightidx <= n && arr[rightidx] > arr[largest]) {
        largest = rightidx;
    }

    // If largest is not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursively heapify the affected subtree
    }
}

// Function to perform heap sort
void heapSort(int arr[], int n) {
    // Step 1: Build the max heap
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }

    // Step 2: Extract elements one by one from the heap
    int size = n;
    while (size > 1) {
        // Move current root to end
        swap(arr[1], arr[size]);

        // Reduce heap size
        size--;

        // Heapify the root element to restore heap property
        heapify(arr, size, 1);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 1; i <= n; i++) { // 1-based indexing
        cin >> arr[i];
    }

    heapSort(arr, n);

    cout << "\nSorted array (Ascending Order): ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
