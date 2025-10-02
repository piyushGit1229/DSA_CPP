#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // by me but its complex

        // int n = num.size();
        // vector<int> result;
        // string num1 = "";
        // for (int i = 0; i < n; i++) {
        //     num1 += (num[i] + '0');
        // }
        // string num2 = to_string(k);
        // // res ="1200"
        // int i = num1.size() - 1;
        // int j = num2.size() - 1;
        // string res = "";
        // int carry = 0;
        // while (i >= 0 || j >= 0 || carry) {
        //     int n1;
        //     if (i >= 0) {
        //         n1 = num1[i] - '0';
        //     } else {
        //         n1 = 0;
        //     }

        //     int n2;
        //     if (j >= 0) {
        //         n2 = num2[j] - '0';
        //     } else {
        //         n2 = 0;
        //     }

        //     int sum = n1 + n2 + carry;
        //     res.push_back(sum % 10 + '0'); // convert to int using 0
        //     carry = sum / 10;
        //     i--;
        //     j--;
        // }
        // reverse(res.begin(), res.end()); // 1234

        // for (char c : res) {
        //     result.push_back(c - '0');
        // }
        // return result;

        int n = num.size();
        vector<int> res;
        int i = n - 1;
        int carry = 0;
        while (i >= 0 || k > 0 || carry) {
            int n1;
            if (i >= 0) {
                n1 = num[i];
            } else {
                n1 = 0;
            }
            int n2 = k % 10;

            int sum = n1 + n2 + carry;
            res.push_back(sum % 10);
            carry = sum / 10;
            k = k / 10;
            i--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(){

return 0;
}


