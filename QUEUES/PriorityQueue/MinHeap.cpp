#include <bits/stdc++.h>
using namespace std;

// Function to heapify a subtree rooted at index i (min-heap)
void heapify(vector<int> &arr, int n, int i) {
    int leftidx = 2 * i + 1;
    int rightidx = 2 * i + 2;
    int smallest = i;

    // Compare parent with left child
    if (leftidx < n && arr[leftidx] < arr[smallest]) {
        smallest = leftidx;
    }

    // Compare parent (or updated smallest) with right child
    if (rightidx < n && arr[rightidx] < arr[smallest]) {
        smallest = rightidx;
    }

    // If the smallest is not the parent, swap and continue heapifying
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

// Function to build a min-heap using bottom-up approach
vector<int> buildMinHeap(vector<int> &arr) {
    int n = arr.size();

    // Start heapifying from last non-leaf node down to root
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    return arr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    buildMinHeap(arr);

    cout << "\nMin Heap: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
