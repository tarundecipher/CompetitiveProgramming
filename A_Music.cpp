#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t,s,q; cin>>t>>s>>q;
    s++;
    int count = 0;
    while(s<t){
        count++;
        s = (2*s*q-s)/q;
    }
    cout<<count<<endl;
    
    

    
}   