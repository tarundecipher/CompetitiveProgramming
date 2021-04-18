#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    bool cond = false;
    ll x1[n],y1[n],x2[n],y2[n];
    ll maxx = INT_MIN; ll minx = INT_MAX; ll maxy = INT_MIN; ll miny = INT_MAX;
    ll sum = 0;
    for(ll i=0;i<n;i++){

        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        sum+=(y2[i]-y1[i])*(x2[i]-x1[i]);
        maxx = max(maxx,max(x1[i],x2[i]));
        minx = min(minx,min(x1[i],x2[i]));
        maxy = max(maxy,max(y1[i],y2[i]));
        miny = min(miny,min(y1[i],y2[i]));
    }
    ll a1 = (maxy-miny)*(maxx-minx);

   
    // cout<<maxx<<" "<<miny<<" "<<maxy<<" "<<minx<<endl;
 
    if(a1!=0 && a1==sum && (maxx-minx)==(maxy-miny)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}   