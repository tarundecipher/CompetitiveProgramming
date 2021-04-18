#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    string test; cin>>test;
    int m; cin>>m;
    vector<string> a;
    for(int i=0;i<m;i++){
        string temp;
        cin>>temp;
        bool cond = true;
        for(int j=0;j<n;j++){

            if(test[j]!='*' && temp[j]!=test[j]){
                cond = false;
                break;
            }
        }
        if(cond==true){
            a.push_back(temp);
        }
    }
    m = a.size();
    map<char,int> mp;
    vector <int> pos;
    for(int i=0;i<test.length();i++){
        mp[test[i]]++;
        if(test[i]=='*'){
            pos.push_back(i);
        }
    }
    bool cond = false;
    int len = pos.size();
    int alpha[26][m];
    memset(alpha,0,sizeof(alpha));
    int temp = 0;
    
    for(auto i:pos){
        
        for(int j=0;j<m;j++){
          
            if(!mp[a[j][i]]){
              
                alpha[a[j][i]-'a'][j] =1;
               
            }else{
                for(int p=0;p<26;p++){
                    alpha[p][j] = 1;
                }
            }
        }
      

     

    }
    int ans = 0;
    for(int i=0;i<26;i++){
        int count =0;
        for(int j=0;j<m;j++){
            if(alpha[i][j]==1){
                count++;
            }
        }
        if(count==m){
            ans++;
        }
    }
    cout<<ans+temp<<endl;
  
  
   
    
  

    
}   