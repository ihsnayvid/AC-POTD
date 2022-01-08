#include<bits/stdc++.h>
using namespace std;
void solve(unordered_map<int,int> mp){
    int distinct=0,unique=0;
    for(auto i:mp){
        distinct++;
        if(i.second == 1) unique++;
    }
    cout<<distinct<<"\n"<<unique<<"\n";
}
int main() {
     
    int t,n,m,num;
    cin>>t;
    while(t--){
        unordered_map<int,int> mp; //to store remainder and its frequency
        cin>>n>>m;
        while(n--){
            cin>>num;            
            mp[num%m]++;
        }
        solve(mp);        
    }
    return 0;
}
