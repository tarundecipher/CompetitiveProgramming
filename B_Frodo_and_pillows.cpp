#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k; cin>>n>>m>>k;
    int pillow = m/n;
 
    if(n!=m && n!=1){
        cout<<pillow+1<<endl;
    }
    else{
        cout<<pillow<<endl;
    }

}   