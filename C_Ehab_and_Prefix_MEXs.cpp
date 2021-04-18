#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    bool cond =false;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            if(cond!=true){
            cout<<a[i]-1<<" ";
            }
            else{
                cout<<0<<" ";
                cond = false;
            }
        }
        else{
            cout<<1<<" ";
            cond  =true;
        }
    }
    cout<<endl;
}