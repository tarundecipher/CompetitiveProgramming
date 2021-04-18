#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <string> v;








int main(){
    int t; cin>>t;
    while(t--){
        v.clear();
        int n,k; cin>>n>>k;
        string s(n,'a');
        for(int i=k;i>=0;i--){
            for(int j=i+1;j<n;j++){
                string temp = s;
                temp[i] = 'b';
                temp[j] = 'b';
                v.push_back(temp);
            }
        }
        sort(v.begin(),v.end());
        cout<<v[k-1]<<endl;
    }
}