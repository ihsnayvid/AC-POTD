#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int n=nums.size();
    
    //edge cases
    if(n==1) return 0;
    if(nums[0]>nums[1]) return 0;
    if(nums[n-1]>nums[n-2]) return n-1;
    
    //index 1 to n-2 implementation using binary search
    //l-> lower bound
    //u-> upper bound
    //m-> mid elt
    int l=1,u=n-2; 
    int m=(l+u) >> 1; //to avoid overflow
    
    while(l<u){
        m=(l+u) >> 1;
        
        //return if peak found else move to either half
        if(nums[m]>nums[m+1] && nums[m]>nums[m-1])
            return m;
        else if(nums[m]<nums[m+1]) l=m+1;
        else u=m;        
    }        
    return l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<findPeakElement(v);
    return 0;
}