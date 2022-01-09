#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int,int> mp;
    vector<int> ans;
    int n=numbers.size();
    for(int i=0;i<n;i++){
        if(mp.find(target - numbers[i]) !=mp.end()){
            ans.push_back(mp[target-numbers[i]]);
            ans.push_back(i+1);               
            return ans;
        }
        else{
            mp[numbers[i]]=i+1;
        }            
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>> v[i];

    int target;
    cin>>target;
    vector<int> ans=twoSum(v,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}