#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void clc(long long int n,vector<long long int> &digits)
{
    while(n>0){
        digits.push_back(n%10);
        n = n/10;

        
    }
    
}



int main(){
    long long int t; cin>>t;
    while(t--){
        long long int n; cin>>n;
        vector<long long int> digits;
        clc(n,digits);
        reverse(digits.begin(),digits.end());
        for(long long int i=0;i<digits.size();i++){
            digits[i] = digits[i]-2;

        }
        for(auto i:digits){
            cout<<i;
        }cout<<endl;
       
    }
}   