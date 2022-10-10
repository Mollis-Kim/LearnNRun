#include <bits/stdc++.h>
using namespace std;

string alph[8] = {"c=", "c-", "dz=", "d-", "lj", "nj","s=","z="};

int main(){
    ios::sync_with_stdio(false);
    string input;
    cin>>input;
    int cnt=0;
    for(int i=0; i<8; i++){
        int pos=0;
        while(pos!=string::npos){
            pos = input.find(alph[i],pos);
            if(pos!=string::npos){
                cnt++;
                pos++;
            }
        }
    }
    cout<<cnt;
    return 0;
}