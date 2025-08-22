#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_piysxhz;
    cin >> test_piysxhz;

    while (test_piysxhz--)
    {
        long long piysxhz_number;
        cin >> piysxhz_number;
        vector<long long> desired_storage;
        long long powpiysxhz = 10;
        while (true)
        {
            long long pixwilldiv = powpiysxhz + 1;
            if (pixwilldiv > piysxhz_number)
            {
                break;
            }
            if (piysxhz_number % pixwilldiv == 0)
                desired_storage.push_back(piysxhz_number / pixwilldiv);

            powpiysxhz = powpiysxhz * 10;
        }
        if (desired_storage.empty())
            cout << 0 << endl;
        else
        {
            sort(desired_storage.begin(), desired_storage.end());
            cout << desired_storage.size() << endl;
           for_each(desired_storage.begin(), desired_storage.end(), [](long long x){ cout << x << " "; }), cout <<endl;
        }
    }

    return 0;
}
