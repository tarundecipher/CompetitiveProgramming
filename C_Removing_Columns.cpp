#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m; cin>>n>>m;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  string b[n];
    for(int j=0;j<m;j++){
      
    for(int i=0;i<n;i++){
      b[i]+=a[i][j];
    }
    bool cond = false;
    for(int i=0;i<n-1;i++){
        if(b[i]>b[i+1]){
            cond =true;
            break;
        }
    }
    if(cond==true){
    for(int i=0;i<n;i++){
        b[i].pop_back();
    }
    }
   
    
    }
    cout<<m-b[0].length()<<endl;
    

    
}   