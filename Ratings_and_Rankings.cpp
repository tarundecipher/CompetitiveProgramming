#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int peak(vector <int> c,int r){
    int m  = c.size();
    int p[m];
    memset(p,0,sizeof(p));
    p[0] = c[0]+ r;
    int ma = p[0];
    int ans =0;
    for(int i=1;i<m;i++){
        p[i] = p[i-1] + c[i];
        if(ma<p[i]){
            ma = p[i];
            ans = i;
        }
    }
    return ans;
}






int main(){
   int t; cin>>t;
   while(t--){
      int n,m; cin>>n>>m;
      int r[n];
      for(int i=0;i<n;i++){
          cin>>r[i];
      }
     
      vector <int> v[n];
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              int temp ;
              cin>>temp;
              v[i].push_back(temp);
          }
      }
    
    int month[n];
    

    for(int i=0;i<n;i++){
        month[i] = peak(v[i],r[i]);
    }

    int rating[n][m];

    int ranking[n][m];
    memset(rating,0,sizeof(rating));
    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
            if(i!=0){
                rating[j][i] = rating[j][i-1] + v[j][i];
            }
            else{
                rating[j][i] = r[j] + v[j][i];
            }
        }

    }



    

    for(int j=0;j<m;j++){
    map <int,int,greater <int>> mp;
        for(int i=0;i<n;i++){
            mp[rating[i][j]]++;
        }
        int rank=1;
        for(auto i:mp){
             int temp  = i.first;
            for(int t=0;t<n;t++){
                if(rating[t][j]==temp){
                    ranking[t][j] = rank;
                }
            }
            rank+=i.second;
        }



    }


    int bestrank[n];
    
    for(int i=0;i<n;i++){
        int ma = INT_MAX; int index =0;
        for(int j=0;j<m;j++){
            if(ma>ranking[i][j]){
                ma = ranking[i][j];
                index = j;
            }
            
        }
        bestrank[i] = index;
        
    }

    int count =0;
    for(int i=0;i<n;i++){
        if(bestrank[i]!=month[i]){
            count++;
        }
    }
    cout<<count<<endl;


    
    
    
    


   




 




   }
}

