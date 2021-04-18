#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;
   
   while(t--){
      int n; cin>>n;
      pair <int,int >a[n];
      int b[n]; int count1=0; int count2=0;
      for(int i=0;i<n;i++){
          int temp; cin>>temp;
          a[i].first = temp;
          b[i] = temp;
      }
      for(int i=0;i<n;i++){
          int temp; cin>>temp;
          if(temp==1){
              count1++;
          }
          else{
              count2++;
          }
      }
      sort(b,b+n);
      bool cond = false;
      for(int i=0;i<n;i++){
          if(b[i]!=a[i].first){
              cond = true;
              break;
          }
      }
      
      if(cond == false){
          cout<<"Yes"<<endl;
      }
      else{
          if(count1>0 && count2>0){
              cout<<"Yes"<<endl;
          }
          else{
              cout<<"No"<<endl;
          }
      }
   }
}