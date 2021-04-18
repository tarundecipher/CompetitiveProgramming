#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll memo[200001][3];
ll clc(ll a[],ll k,ll n,ll k1,ll num[]){
    
    if(k>=n || k1>=3){
        if(k1==3){
        return 0;
        }
        else{
            return LLONG_MIN;
        }

    }
    if(memo[k][k1]!=LLONG_MIN){
        
        return memo[k][k1];
    }
    ll a1=0,a2=0;
    a1 = a[k]*num[k1] + clc(a,k,n,k1+1,num);
    a2 = clc(a,k+1,n,k1,num);
    memo[k][k1] = max(a1,a2);
    return max(a1,a2);
}

int main(){
    ll n,p,q,r; cin>>n;
    ll num[3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            memo[i][j] = LLONG_MIN;
        }
    }
    
    for(ll i=0;i<3;i++){
        cin>>num[i];
    }
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<clc(a,0,n,0,num)<<endl;

    
    
}   