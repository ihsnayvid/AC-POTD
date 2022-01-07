#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0)
        return false;
    long int rev=0,temp=x;
    while(temp>0){
        rev=rev*10 +(temp%10);
        temp/=10;
    }
    if(x==rev)
        return true;
    return false;
    
}

int main(){
    int n;
    cin>>n;
    if(isPalindrome(n))
        cout<<"Pallindrome";
    else
        cout<<"Not Pallindrome";
    return 0;
}