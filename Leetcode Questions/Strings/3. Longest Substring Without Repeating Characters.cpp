#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s){
    int n=s.size();
    int maxlen=0;
    int i=0;
    unordered_map<char,int>mp;
    for(int j=0;j<n;j++){
        mp[s[j]]++;
        while(mp[s[j]]>1){
            mp[s[i]]--;
            i++;
        }
        maxlen=max(maxlen,j-i+1);
    }
    return maxlen;
}
int main(){
string s;
cout<<"Enter the string: ";
cin>>s;
cout<<"Length of the longest substring without repeating characters is "<<lengthOfLongestSubstring(s)<<endl;

return 0;
}