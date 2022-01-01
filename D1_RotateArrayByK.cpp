#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        d=d%n;
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }    
	return 0;
}