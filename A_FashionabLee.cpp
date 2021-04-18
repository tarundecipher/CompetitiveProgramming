#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
        long long int n; cin>>n;
        if(n!=3){
            if(n%2==0){
        if(((n-4)/2)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }

        
}