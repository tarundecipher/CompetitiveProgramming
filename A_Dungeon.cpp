#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        
        int sum = a-1+b-1+c-1;
        int x = sum/9;
        sum = sum -2*x;
        a-=x; b-=x; c-=x;
        if((sum+1)%7==0 && a>=1 && b>=1 && c>=1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
