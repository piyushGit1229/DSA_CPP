#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases_pixssh;
    cin >> test_cases_pixssh;
    while (test_cases_pixssh--)
    {
        int piylenA, piylenB;
        string piA, yuB, decider;

        cin >> piylenA >> piA;
        cin >> piylenB >> yuB;
        cin >> decider;
        int it = 0;
        while (it < piylenB)
        {
            if (decider[it] == 'V')
                piA = yuB[it] + piA;

            else
                piA = piA + yuB[it];

            it++;
        }
        cout << piA << endl;
    }
    return 0;
}
