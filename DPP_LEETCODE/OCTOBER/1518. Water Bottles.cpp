#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drinkbottle = numBottles;
        int emptybottle = numBottles;

        while (emptybottle >= numExchange) {
            drinkbottle += 1;
            emptybottle -= numExchange;
            emptybottle += 1;
        }
        return drinkbottle;
    }
};

int main(){

return 0;
}