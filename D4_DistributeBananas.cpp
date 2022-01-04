#include<bits/stdc++.h>
using namespace std;
 
bool is_prime(int n){     
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}
string solve (int N) {
    //base case
    if(N==1) return "No";
    return (is_prime(N) ? "No" : "Yes");
} 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}