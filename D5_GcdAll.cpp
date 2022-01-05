#include <bits/stdc++.h>
using namespace std;
//function to return gcd of 2 nums
int gcd(int a, int b){
    if(a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
	int t;
	cin>>t;	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin>>v[i];
	    
	    int gameEnd=0; //to store endnum=gcd of all elts
        for(int i=0;i<n;i++)
            gameEnd=gcd(v[i],gameEnd);
        cout<<gameEnd<<"\n";
	}	
	return 0;
}
