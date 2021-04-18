#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],l[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
          vector<int> v;
        for(int i=0;i<n;i++){
            cin>>l[i];
            if(l[i]==0){
                v.push_back(a[i]);
            }
        }
        sort(v.begin(),v.end());
        stack <int> s;
        for(int i=0;i<v.size();i++){
            s.push(v[i]);
        }

        for(int i=0;i<n;i++){
            if(l[i]==0){
                int temp = s.top();
                s.pop();
                a[i] = temp;
            }
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }cout<<endl;
      
     

    }
}   





int main(){
    vector<int> v; 
    string s = "";
   
}