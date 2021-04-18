#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector <int> v;
        v.push_back(a[0]);
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
            v.push_back(a[i]);
            }
            else if(a[i]<a[i-1] && a[i]<a[i+1]){
                v.push_back(a[i]);
            }
        }
        
        v.push_back(a[n-1]);
        int n1 = v.size();
        cout<<n1<<endl;
        for(int i=0;i<n1;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
}