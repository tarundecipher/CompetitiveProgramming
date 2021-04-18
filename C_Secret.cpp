#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin>>n>>k;
    if(3*k>n){
        cout<<-1<<endl; return 0;
    }
    int p = 1; bool cond  = false;
    int count = 0; int index =0;
    for(int i=0;i<n;i++){
        if(p<=k){
        if(count<2){
            cout<<p<<" ";
            count++;
        }
        else{
            count =0;
            p++;
        }
        }
        else{
            index = i;
            break;
        }

    }
    p=1;
    
    for(int i=k*2;i<n;i++){
        if(p<=k){
            cout<<p<<" ";
            p++;
        }
        else{
            p=1;
            cout<<p<<" ";
            p++;
        }
        // cout<<'a'<<" ";
    }
    cout<<endl;

    
}   