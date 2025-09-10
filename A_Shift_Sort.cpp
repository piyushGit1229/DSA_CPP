#include <bits/stdc++.h>
using namespace std;

template <typename T>
int piyush_process(const T& str, int n) {

    int left_index = 0;
    int right_index = n - 1;
    int piyush_counter = 0;

    
    do {
        if (str[left_index] == '1' && str[right_index] == '0') {
            ++piyush_counter;
            ++left_index;
            --right_index;
        } else {
            if (str[left_index] != '1') ++left_index;
            if (str[right_index] != '0') --right_index;
        }
    } while (left_index < right_index);

    return piyush_counter;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int piyush_cases;
    cin >> piyush_cases;

    for (int case_num = 0; case_num < piyush_cases; ++case_num) {
        int piyush_size;
        cin >> piyush_size;

        string piyush_string;
        cin >> piyush_string;

        int piyush_result = piyush_process(piyush_string, piyush_size);

        cout << piyush_result << "\n";
    }

    return 0;
}
