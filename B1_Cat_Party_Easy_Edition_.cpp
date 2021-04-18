#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int freq[11];
    int streak[n];
    int index = 0;
    int b[10000]; 
    
       memset(freq,0,sizeof(freq));
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    
        
          memset(b,0,sizeof(b));
        int nc =0; set<int> st;
        for(int j=1;j<=10;j++){
            if(freq[j]!=0){
                st.insert(freq[j]);
                b[freq[j]]++;
                nc++;
            }
        }
        if(nc==1){
            index  = i;
        }
        else if(st.size()==2){
            
            int c[2];
            int p =0;
            for(auto j:st){
                c[p] = j;
                p++;
                
            }
            // cout<<c[0]<<c[1]<<endl;
            if(c[0]==1 || c[1]==1){
                if(b[1]==1){
                index =i ;
                }
            }
            if(b[c[0]]==1){
                if(c[0]-c[1]<=1 && c[0]-c[1]>=0){
                    index  = i;
                }
            }
            if(b[c[1]]==1){
                if(c[1]-c[0]<=1 && c[1]-c[0]>=0){
                    index =i;
                }
            }
          

        }
        else if(b[1]==i+1){
            index = i;
        }
        
        // cout<<st.size()<<endl;


    }
    cout<<index+1<<endl;
    
    
}   