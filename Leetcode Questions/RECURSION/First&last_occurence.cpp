#include <iostream>
using namespace std;

int firstoccurence(int arr[], int i, int n, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstoccurence(arr, i + 1, n, key);
}

int lastoccurence(int arr[], int i, int n, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        int ans = lastoccurence(arr, i + 1, n, key);
        if (ans == -1)
        {
            return i;
        }
        return ans;
    }
}
int main()
{

    return 0;
}