#include <bits/stdc++.h>
using namespace std;
int N; // 목적지
int main(){
    ios::sync_with_stdio(true);
    cin >> N;
    int i=1;
    for(; i<=100000;i++){
        if(N <=(3*i*i-3*i+1)){
            break;
        }
    }
    cout<<i; 

    return 0 ;
}