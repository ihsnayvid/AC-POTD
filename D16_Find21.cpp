//Ques Link:
//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/

#include<bits/stdc++.h>
using namespace std;

//function to check if string contains 21
//can also use built-in find() function of string
bool contains21(string s){
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='2' && s[i+1]=='1') return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    string s;
    int num;
    while(t--){
        cin>>s;
        num=stoi(s);
        if((num%21 == 0 or (contains21(s)))) 
            cout<<"The streak is broken!\n";        
        else cout<<"The streak lives still in our heart!\n";
    }
    return 0;
}