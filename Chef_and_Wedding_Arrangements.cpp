#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[1000][1000];
int calc(int f[],int i,int n,map <int,map<int,int>> mp,int k,int j){
    
    // if(a[i][j]!=-1){
        
    //     return a[i][j];
    // }

    if(i>=n){
        return 0;
    }
    
    if(j>=n){
        return 0;
    }
    

    int a1 =INT_MAX;

    
        if(mp[j].size()==0){
            mp[j][f[i]]++;
            a1=min(a1,k + calc(f,i+1,n,mp,k,j));
        }
        else{
            if(mp[j][f[i]]==1){
                mp[j][f[i]]++;
                a1 = min(a1,2 + calc(f,i+1,n,mp,k,j));
            }
            else if(mp[j][f[i]]>1){
                mp[j][f[i]]++;
                a1 = min(a1,1 + calc(f,i+1,n,mp,k,j));
            }
            else{
                mp[j][f[i]]++;
                a1 = min(a1,calc(f,i+1,n,mp,k,j));
            }
             a1 = min(a1,calc(f,i,n,mp,k,j+1));
        }
        
     
     
    
    a[i][j] = a1;
    
    
    return a1;




}




int main(){
   int t; cin>>t;
   
   while(t--){
      
      int n,k; cin>>n>>k;
      
      for(int i=0;i<1000;i++){
          for(int j=0;j<1000;j++){
                a[i][j]  =-1;
          }
      }
      int f[n];
      for(int i=0;i<n;i++){
          cin>>f[i];
      }
      map <int,map<int,int>> mp;
      

      cout<<calc(f,0,n,mp,k,0)<<endl;
     
      
  


   }
}

