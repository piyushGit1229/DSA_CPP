#include <iostream>
#include <vector>
#include <map>

void echo_solver() {
    int warriors;
    std::cin >> warriors;
    
    std::vector<int> piyuxh(warriors + 2, 0);
    
    int j = warriors;
    while(j--) {
        int varoable;
        std::cin >> varoable;
        piyuxh[varoable]++;
    }

    int brutal_req = (warriors - 1) >> 1;
    int echo = 0;

    int k = warriors + 1;
    do {
        k--;
        echo += piyuxh[k] >> 1;
    } while(k > 0);

    std::cout << (echo >= brutal_req ? "YES\n" : "NO\n");
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int trialsOfFate;
    std::cin >> trialsOfFate;

trial_loop:
    if (trialsOfFate-- > 0) {
        echo_solver();
        goto trial_loop;
    }
    
    return 0;
}