#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fivecount = 0;
        int tencount = 0;
        int twecount = 0;
        
        for (int i = 0; i < bills.size(); i++) {

            if (bills[i] == 5) {
                fivecount++;
            } 
            
            else if (bills[i] == 10) {
                if (fivecount == 0)
                    return false;
                fivecount--;
                tencount++;
            } 
            
            else {
                
                if (tencount > 0 && fivecount > 0) {
                    tencount--;
                    fivecount--;
                } 

                else if (fivecount >= 3) {
                    fivecount -= 3;
                } 
                
                else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){

return 0;
}

