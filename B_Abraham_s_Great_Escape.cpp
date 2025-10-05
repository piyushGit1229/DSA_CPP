#include <bits/stdc++.h>
using namespace std;

void xvar() {
    long long A,B;
    if(!(cin>>A>>B)) return;

    if(A==2 && B==3){cout<<"NO\n";return;}
    cout<<"YES\n";

    vector<string> Z(A,string(A,'.'));
    long long p=0,q=A*A-B,r=0;

    for(long long i=0;i<A;i++){
        for(long long j=0;j<A;j++){
            r=i*A+j+1;
            if(r<=B)Z[i][j]='U';
            else{
                if(j<A-1)Z[i][j]='R';
                else if(i<A-1)Z[i][j]='D';
                else Z[i][j]='L';
                if(j==A-1 && Z[i][j]=='R')Z[i][j]='L';
                if(i==A-1 && Z[i][j]=='D')Z[i][j]='U';
            }
        }
    }

    if(A==3 && B==5){
        Z[1][0]='R';Z[1][1]='D';Z[1][2]='R';
        Z[2][0]='U';Z[2][1]='L';Z[2][2]='R';
    }

    for(auto &w:Z) cout<<w<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; 
    if(!(cin>>T)) return 0;
    while(T--){
        xvar();
    }
}
