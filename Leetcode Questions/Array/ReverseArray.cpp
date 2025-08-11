#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}


void inputarray(int arr[],int n){
 for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printarray(int arr[],int n){
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << "Enter the size of the array:";
    int n;
    cin >> n;
    int i = 0;
    cout << "Enter the elements: ";
    int arr[n];
    inputarray(arr,n);
    reverse(arr,n);
    printarray(arr,n);

    return 0;
}