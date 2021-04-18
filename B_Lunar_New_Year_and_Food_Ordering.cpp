#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<ll,ll> p1,pair<ll,ll> p2){
    if(p1.first<p2.first){
        return true;
    }
    else if(p1.first==p2.first){
        if(p1.second<p2.second){
            return true;
        }
        return false;
    }
    return false;
}

int main(){
    ll n,m; cin>>n>>m;
    ll a[n];
    vector<pair<ll,ll>> c;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll c1[n];
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        c1[i] = temp;
        c.push_back({temp,i});
    }
    sort(c.begin(),c.end(),cond);


    int min =0;
    while(m--){
          ll cost = 0;
        ll t,d; cin>>t>>d;
        t--;
        ll temp = a[t];
        

        if(a[t]>=d){
            a[t]-=d;
            
            cost += d*c1[t];
            d=0;
        }
        else{
            a[t]=0;
            d-=temp;
            ll j=min;
            cost += temp*c1[t];

            //-------------------------
            while(d>0 && j<n){
                if(a[c[j].second]>0){
                    ll temp2 = a[c[j].second];
                    if(temp2>=d){
                        a[c[j].second]-=d;
                        cost += d*c[j].first;
                        d =0;
                        
                    }
                    else{
                        a[c[j].second] =0;
                        d-=temp2;
                        cost += temp2*c[j].first;
                    }
                }
                
                    j++;
                 
                
            }
            j--;
             min =j;
            
        }
       
        // cout<<d<<endl;
        if(d<=0){
            cout<<cost<<endl;
        }
        else{
            cout<<0<<endl;
        }
      

    }
 
    
    
}   