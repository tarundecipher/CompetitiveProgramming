#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n]; int ne=0,no=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                ne++;
            }
            else{
                no++;
            }
        }
      if(no>=x){
          if(x%2==0){
              if(ne>0){
                  cout<<"Yes"<<endl;
              }
              else{
                  cout<<"No"<<endl;
              }
          }
          else{
          cout<<"Yes"<<endl;
          }
      }
      else{
          if(no%2==0){
              if(ne>=x-(no-1) && no!=0){
                  cout<<"Yes"<<endl;
              }
              else{
                  cout<<"No"<<endl;
              }
              
          }
          else{
              cout<<"Yes"<<endl;
          }
      }
    }
        
}