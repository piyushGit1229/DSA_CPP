#include <iostream>
using namespace std;
int remove(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int i=1;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[j-1]){
            arr[i]=arr[j];
        }
    }
    return i;
}
int main()
{
  int arr[3]={1,1,2};
  int n= sizeof(arr)/sizeof(arr[0]);
  cout<<remove(arr,n);
    return 0;
}