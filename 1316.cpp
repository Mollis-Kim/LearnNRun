#include <bits/stdc++.h>
using namespace std;
  
int N;
int cnt=0;
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    int totCnt = N;
    while(N--){
        vector<int> chk;
        chk.resize(100);
        string s;
        cin>>s;
        int i=0;
        for(; i<s.size()-1;i++){
            chk[s[i]-'0']++;
            if(s[i]!=s[i+1] && chk[s[i+1]-'0']>0){
                cnt++;
                break;
            }
        }
    }
    cout<<totCnt-cnt;
    return 0;
}
