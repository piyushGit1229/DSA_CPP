#include <iostream>
using namespace std;
int getsum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit * digit;
    }
    return sum;
}
bool ishappy(int n)
{
    int slow = n;
    int fast = getsum(n);

    while (fast != 1 && slow != fast)
    {
        slow = getsum(slow);
        fast = getsum(getsum(fast));
    }
    return fast == 1;
}
int main()
{
    int result =ishappy(19);
    if(result){
        cout<<"Happy number";
    }
    else{
        cout<<"Not a Happy number";
    }
    return 0;
}