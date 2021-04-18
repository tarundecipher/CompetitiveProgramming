#include <iostream>
#include <bits/stdc++.h>

using namespace std;



bool cond(pair<int,bool> p1,pair<int,bool> p2){
    if(p1.first<p2.first){
        return true;
    }
    else if(p1.first==p2.first){
        if(p1.second==true){
            return false;

        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}


int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int count0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count0++;
            }
        }
        if(count0==s.length()){
            cout<<0<<endl;
            continue;
        }
        s+="1";
        //find number of islands with size;
        vector<pair<int,bool>> v; int count =0; int track =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count++;
            }
            else{
                if(count>0){
                if(track==0 || i==s.length()-1){
                  v.push_back({count,true});  
                }
                else{
                v.push_back({count,false});
                }
                track++;
                }
                count = 0;
            }
        }

        sort(v.begin(),v.end(),cond);
        int i = v.size()-1;
        for(i=v.size()-1;i>=0;i--){
            if(v[i].second==false && k-2>=0){
                k= k-2;
                v[i].first =0;
            }
            else if(v[i].second==true && k-1>=0){
                k = k-1;
                v[i].first =0;
            }
        }

        int ans =0;
        for(int j=0;j<=i;j++){
            ans+=v[i].first;
        }
        cout<<ans<<endl;
        


    }
}   