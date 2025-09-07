#include <bits/stdc++.h> 

bool isconcatnate(string word,unordered_set<string>&st){
int l = word.size();
for(int i=0;i<l;i++){
    string prefix=word.substr(0,i+1);
    string suffix=word.substr(i+1);
    if(st.find(prefix)!=st.end() && isconcatnate(suffix,st) ||
    st.find(suffix)!=st.end() && st.find(prefix)!=st.end()){
        return true;
    }
}
return false;
}

vector<string> getConcatenatedWords(int n, vector<string> &words) {
    // Write your code here.
    vector<string>result;
    unordered_set<string>st(words.begin(),words.end());
    
    for(int i=0;i<words.size();i++){
        string word = words[i];
        if(isconcatnate(word,st)){
            result.push_back(word);
        }
    }
    return result;
}
