#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
}   