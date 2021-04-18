#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int p1=0,p2=0;
    map<char,int> mp;
    int len  = INT_MIN;
    while(p1<n && p2<n){
        mp[s[p1]]++;
        while(mp['a']>k){
            mp[s[p2]]--;
            p2++;
        }
        len = max(len,p1-p2+1);
        p1++;
    }
    p1 =0; p2 =0; mp.clear();
    while(p1<n && p2<n){
        mp[s[p1]]++;
        while(mp['b']>k){
            mp[s[p2]]--;
            p2++;
        }
        len = max(len,p1-p2+1);
        p1++;
    }
    
    cout<<len<<endl;


    
}   