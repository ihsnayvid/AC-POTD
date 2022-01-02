#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        long long evena=0,evenb=0,odda=0,oddb=0;
       for(auto i=0;i<n;i++){
           //odd index
           if(i%2){
               odda+=a[i];
               oddb+=b[i];
           }
           else{
               evena+=a[i];
               evenb+=b[i];
           }
       }  
       return min((evena+oddb),(evenb+odda));
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends