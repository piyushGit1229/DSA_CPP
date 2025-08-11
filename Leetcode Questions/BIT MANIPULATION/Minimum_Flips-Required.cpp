#include<iostream>
using namespace std;
void flips(int start , int goal){
    int ans = 0;
    int xorValue = start ^ goal; // XOR to find differing bits
    while(xorValue){
        if(xorValue&1){
            ans++;
        }
        xorValue = xorValue >> 1;
    }
    cout << "Minimum flips required: " << ans << endl;
}
int main(){
    int start, goal;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the goal number: ";
    cin >> goal;
    flips(start, goal);
    cout << "Flips completed." << endl;

return 0;
}