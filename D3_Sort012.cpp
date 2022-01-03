#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int freq[3]={0};
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        int k=0;
        while(freq[0]--)
            a[k++]=0;
        while(freq[1]--)
            a[k++]=1;
        while(freq[2]--)
            a[k++]=2;
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends