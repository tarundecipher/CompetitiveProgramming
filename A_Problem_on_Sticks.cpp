#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       set <int> s;
       for(int i=0;i<n;i++){
           int temp; cin>>temp;
           if(temp!=0){
           s.insert(temp);
           }
       }
       cout<<s.size()<<endl;
   }
}

