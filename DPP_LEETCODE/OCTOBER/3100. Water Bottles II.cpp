#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drinktotal = numBottles;
        int emptybottle = numBottles;

        while (emptybottle >= numExchange) {
            emptybottle = emptybottle - numExchange;
            drinktotal += 1;
            emptybottle += 1;
            numExchange += 1;
        }
        return drinktotal;
    }
};