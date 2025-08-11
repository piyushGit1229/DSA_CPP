
#include <iostream>
#include <math.h>
using namespace std;
bool isArmstrong(int n)
{
    int original= n;
    int ans = 0;
    int temp = n;
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans + round(pow(digit,count));
        temp = temp / 10;
    }
    return (original == ans);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (isArmstrong(n))
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "not armastrong";
    }
    return 0;
}