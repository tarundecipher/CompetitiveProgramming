#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
        double n,g,b; cin>>n>>g>>b;
        double x = g+b;
        ll ans =0; ans = n/x;
        if(fmod(n,x)!=0){
            ans+=ceil((min(g,n-ans*x))/g);
        }
        ll needed = ceil(n/2);
        ans = ans*g;
        // cout<<ans<<endl;
        if(ans>=needed){
            cout<<n<<endl;
        }
        else{
            ll intervals = (needed-ans);
            if(fmod(intervals,g)==0){
                intervals = intervals/g;
            }
            else{
                intervals = (intervals/g) +1;
            }
           
            ans+= intervals*b+(needed-ans);
           
            cout<<ans<<endl;
        }

    }
    
}   