#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ll t; cin>>t;
    map<ll,vector<ll>> mp;
    mp[1].push_back('S');
    mp[2].push_back('S'); mp[2].push_back('S'); 
    mp[3].push_back('S'); mp[3].push_back('S'); mp[3].push_back('E');
    mp[4].push_back('S'); mp[4].push_back('S'); mp[4].push_back('E'); mp[4].push_back('C');
    mp[5].push_back('S'); mp[5].push_back('S'); mp[5].push_back('E');
    mp[6].push_back('S'); mp[6].push_back('S'); 
    mp[0].push_back('S');
    while(t--){ 
        ll n; cin>>n;
        
        n = n%7;
        vector <ll> v;
        v = mp[n];
        for(auto i:v){
            cout<<i<<" ";
        }cout<<endl;

       
    }
}   