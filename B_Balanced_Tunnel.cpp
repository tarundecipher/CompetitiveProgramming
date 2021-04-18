#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;






int main(){
    int n; cin>>n;
    int a[n],b[n];
    
    int c[n]; map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        mp[b[i]] = i;
    }
    for(int i=0;i<n;i++){
        c[i] = mp[a[i]];
    }
    int ma = INT_MIN; int count =0;
    for(int i=0;i<n;i++){
        if(ma>c[i]){
            count++;
        }
        
        ma = max(ma,c[i]);
    }
    cout<<count<<endl;



}   