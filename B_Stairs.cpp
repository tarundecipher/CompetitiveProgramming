#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n; int count=0;
        ll n1 = n;
        for(ll i=1;i<=n1;i = i*2+1){
            ll temp;
            if(i!=1){
            temp = i*(i+1)/2;
            }
            else{
                temp =1;
            }
            
            if(n-temp>=0){
                count++;
                n-=temp;
            }
            else{
                break;
            }
            
        }

        cout<<count<<endl;



    }
}   