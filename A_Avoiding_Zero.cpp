#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    
    int sum=0;
    for(int i=0;i<n;i++){
      
        cin>>a[i];
         sum+=a[i];
    }
    if(sum==0){
        cout<<"NO"<<endl;
       
    }
    else{    cout<<"YES"<<endl;
        if(sum<0){
             sort(a,a+n);
        }
        else{
       sort(a,a+n,greater<int>());
        }
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }cout<<endl;
    }
    }

}   