// #include<bits/stdc++.h>
// #include <unordered_map>
// int kDistinctChars(int k, string &str)
// {
//     unordered_map<char,int> mp;
//     int n = str.size();
//     int maxlen = 0;
//     int i = 0; // left pointer
    
//     for (int j = 0; j < n; j++) {
//         mp[str[j]]++;
        
//         while (mp.size() > k) {
//             mp[str[i]]--;
//             if (mp[str[i]] == 0) {
//                 mp.erase(str[i]);
//             }
//             i++;
//         }
        
//         maxlen = max(maxlen, j - i + 1);
//     }
//     return maxlen;
// }
