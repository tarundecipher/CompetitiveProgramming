#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ques{
    int gcd;
    int index;
    int val;
};


bool cond(struct ques a,struct ques b){
    if(a.gcd<b.gcd){
      return true;
    }
    else if(a.gcd==b.gcd){
          if(a.val<b.val){
            return true;
        }
        return false;
    }
    return false;
}



int main(){
   int t; cin>>t; 
   while(t--){
       int n; cin>>n;
      vector <int> a;
      for(int i=0;i<n;i++){
          int temp; cin>>temp;
          a.push_back(temp);
      }

      
      bool visited[n]; 
      int g =1; 
      memset(visited,false,sizeof(visited)); vector <int> ans;
      for(int i=0;i<n;i++){
          vector <struct ques> v;
          for(int j=0;j<n;j++){
              if(!visited[j]){
              v.push_back({__gcd(a[j],g),j,a[j]});
              }
          }
          sort(v.begin(),v.end(),cond);
          if(i==0){
              g = v[v.size()-1].val;
          }
          else{
              g = __gcd(g,v[v.size()-1].val);
          }

            ans.push_back(v[v.size()-1].val);
            visited[v[v.size()-1].index]=true;
      }

for(auto x:ans){
    cout<<x<<" ";
}cout<<endl;
      
       
   }
}

