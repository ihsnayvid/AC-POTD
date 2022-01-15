#include<bits/stdc++.h> 
using namespace std; 
//sort then two pointers
bool findPair(int arr[], int size, int n){
    int i=0,j=1;
    sort(arr,arr+size);
    while(i<size && j<size){
       if((arr[j]-arr[i])==n) return true;
       else if((arr[j]-arr[i])<n) j++;
       else i++;
    }
    return false;
}

/*
//using unordered maps
bool findPair(int arr[], int size, int n){
    unordered_map<int,int> mp;
    for(int i=0;i<size;i++){
        if(mp[arr[i]+n]>0 || mp[arr[i]-n]>0) return true;
        mp[arr[i]]++;
    }
    return false;
}
*/


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }  
    return 0;
}


