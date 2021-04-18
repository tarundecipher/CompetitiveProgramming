#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int q; cin>>q;
        int Xl=-100000,Yu=100000,Xr=100000,Yd=-100000;
        while(q--){
            int x,y,f1,f2,f3,f4; cin>>x>>y>>f1>>f2>>f3>>f4;
            if(f1==0){
                 Xl = max(Xl,x);
            }
            if(f2==0){
                Yu = min(Yu,y);
            }
            if(f3==0){
                Xr = min(Xr,x);
            }
            if(f4==0){
                Yd =max(Yd,y);
            }
        }

        if(Xl<=Xr){
            if(Yu>=Yd){
                cout<<1<<" "<<Xl<<" "<<Yd<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
    
    
}   
