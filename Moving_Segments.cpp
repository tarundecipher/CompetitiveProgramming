#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,vector<pair<int,int>>> mp;
       int ma = INT_MIN;
        for(int i=0;i<n;i++){
            int l,r,v; cin>>l>>r>>v;
            
           
            mp[v].push_back({l,r});

            

        }
    bool cond = true;
        for(auto i:mp){
           
            vector <pair<int,int>> temp = i.second;
           
            ma = INT_MIN;
            int n1 = temp.size();
            int l1[n1],r1[n1];
            for(int j=0;j<temp.size();j++){
                l1[j] = temp[j].first;
                r1[j] = temp[j].second;
               
             
            }
            sort(l1,l1+n1);
            sort(r1,r1+n1);
            int count = 0;
            int p1=0,p2=0;
            // for(int j=0;j<n1;j++){
            //     cout<<r1[j]<<" ";
            // }
           
            while(p1<n1 && p2<n1){
                if(l1[p1]<=r1[p2]){
                    count++; p1++;

                }
                else{
                    count--;
                    p2++;
                }
                if(count>=3){
                    cond = false;
                }
            }
            if(cond==false){
                break;
            }
            

        }
        if(cond==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
  

    
}   