#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin>>n>>m;
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    bool cond = false;
    for(int i=0;i<m;i++){
       
        for(int j=0;j<m;j++){
            int a[n][m];
            for(int t1=0;t1<n;t1++){
                for(int t2=0;t2<m;t2++){
                    a[t1][t2] = b[t1][t2];
                }
            }
            for(int k=0;k<n;k++){
                swap(a[k][i],a[k][j]);
            }
          
            bool cond1 = true;
            for(int p=0;p<n;p++){
                int count1=0;
                for(int t=0;t<m;t++){
                    if(a[p][t]!=t+1){
                      
                        count1++;
                    }
                }
                if(count1>2){
                    
                    cond1 = false;
                    break;
                }
               
            }
           
            if(cond1==true){
                cond=true;
               
            }

            
            if(cond==true){
                break;
            }
          
            
        }
         if(cond==true){
                break;
            }
       
    }
    if(cond){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    
}   