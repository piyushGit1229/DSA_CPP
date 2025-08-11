#include <iostream>
using namespace std;
void sortarray(int arr[], int n){
//DUTCH National algo
int left=0;
int mid=0;
int right=n-1;
while(mid<=right){
    if(arr[mid]==0){
        swap(arr[left],arr[mid]);
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[right]);
        right--;
    }
}

}
//Brute force approach
// {
//     int countzero = 0;
//     int countone = 0;
//     int counttwo = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             countzero++;
//         }
//         else if (arr[i] == 1)
//         {
//             countone++;
//         }
//         else
//             counttwo++;
//     }
//     int index = 0;
//     for (int i = 0; i < countzero; i++)
//     {
//         arr[index++] = 0;
//     }
//     for (int i = 0; i < countone; i++)
//     {
//         arr[index++] = 1;
//     }
//     for (int i = 0; i < counttwo; i++)
//     {
//         arr[index++] = 2;
//     }
// }



int main()
{

    return 0;
}