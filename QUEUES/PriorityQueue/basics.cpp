#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        size = 0; // initialize empty heap first
        arr[0] = -1;
    }

    void insert(int val)
    {
        size = size + 1;  // increase the size;
        int index = size; // insert at last index of the array
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            // maxheap property is that parent should be greater than child
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // deletion steps:
    // 1. swap first and last element
    // 2. remove last element
    // 3. heapify the remaining array
    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "No element in heap" << endl;
            return;
        }
        // step1
        arr[1] = arr[size];
        // decrease the size
        size--;

        // step 2
        int index = 1;
        while (index < size)
        {
            int leftindex = index * 2;
            int rightindex = index * 2 + 1;

            if (leftindex < size && arr[index] < arr[leftindex])
            {
                swap(arr[index], arr[leftindex]);
                index = leftindex;
            }
            else if (rightindex < size && arr[index] < arr[rightindex])
            {
                swap(arr[index], arr[rightindex]);
                index = rightindex;
            }
            else
            {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left < n && arr[largest]<arr[left]){
            largest = left;
        }

        if(right < n && arr[largest]<arr[right]){
            largest = right;
        }
        if(largest != i){
            swap(arr[i],arr[largest]);
        }
        heapify(arr,n,largest);
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(25);
    h.insert(30);
    // h.print();
    h.deletefromheap();
    h.print();
    return 0;
}