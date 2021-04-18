#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <string> v;








int main(){
    int t; cin>>t;
    while(t--){
       int n = 9; string a[n];
       for(int i=0;i<n;i++){
        
               cin>>a[i];
           
       }
       a[0][1] = a[0][0]; a[1][0] = a[0][0];
       for(int i=0;i<n;i++){
           cout<<a[i]<<endl;
       }

    }
}