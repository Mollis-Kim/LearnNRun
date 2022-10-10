#include <bits/stdc++.h>
using namespace std;

string cro[8] = {"c=", "c-", "dz=", "d-", "lj", "nj","s=","z="};

int main(){
    ios::sync_with_stdio(false);
    string input;
    cin>>input;
    
    for(int i=0; i<8; i++){
        size_t pos = 0;
        while((pos=input.find(cro[i],pos)) - string::npos !=0){
            if(i == 2){
                input.replace(pos,3," ");
            }else{
                input.replace(pos,2," ");
            }
        }
    }
    cout<< input.size();
    return 0;
}