#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t;
    while(t--){
        ll l,r,m; cin>>l>>r>>m;
         ll d = r-l;
        ll a,b,c;
        a =l;
        ll res;
        
       

        for(ll i=l;i<=r;i++){
            ll p1=m/i;
            if(p1==0){
                p1++;
            }
        ll p2 = ceil((double)m/(double)i);
            if(abs(p1*i-m)<=d){
                res = m-p1*i;
                a=i;
                break;
            }
             if(abs(p2*i-m)<=d){
                res = m-p2*i;
                a=i;
                break;
            }
      
        }
    //    cout<<res<<endl;
        if(res>0){
            b = r;
            c = b-res;
        }
        else{
            b = l;
            c = b-res;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;


    }
    
    

}   
