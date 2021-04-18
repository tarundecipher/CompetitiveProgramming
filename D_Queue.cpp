#include <iostream>
#include <bits/stdc++.h>
using namespace std;







int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int pref[n]; int count =1;
    partial_sum(a,a+n,pref);
    for(int i=1;i<n;i++){
        // if(pref[i-1]<=a[i]){
        //     cout<<a[i]<<" ";
        //     count++;
        // }
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        // if(pref[i-1]<=a[i]){
        //     cout<<a[i]<<" ";
        //     count++;
        // }
        cout<<pref[i-1]<<" ";
    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<pref[i]<<endl;
    // }
    // cout<<count<<endl;
}