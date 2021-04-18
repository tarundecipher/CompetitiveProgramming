#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       vector <int> v;
       for(int i=0;i<n;i++){
           int temp; cin>>temp;
           v.push_back(temp);
       }
       reverse(v.begin(),v.end());
       for(auto i:v){
           cout<<i<<" ";
       }
        cout<<endl;
   }
}

