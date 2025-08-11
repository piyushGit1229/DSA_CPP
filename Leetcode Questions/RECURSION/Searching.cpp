#include <iostream>
using namespace std;
bool linearsearch(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return false;
    }
    else if (arr[i] == key)
    {
        return true;
    }
    return linearsearch(arr, n, i + 1, key);
}

bool binarysearch(int arr[], int n, int low, int high, int key)
{
    int mid = low + (high - low) / 2;
    if (low > high)
    {
        return false;
    }
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        return binarysearch(arr, n, low, mid - 1, key);
    }
    else
    {
        return binarysearch(arr, n, mid + 1, high, key);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 5;
    if (binarysearch(arr, n, 0, n - 1, key))
    {
        cout << "Binary Search: Key found!" << endl;
    }
    else
    {
        cout << "Binary Search: Key not found!" << endl;
    }

    return 0;
}