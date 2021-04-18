#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);

        }
        int diff = st.size()-k;
        if(st.size()<=k){
            cout<<1<<endl;
        }
        else{
            set<int> st2;
          
            for(int i=0;i<n;i++){
                st2.insert(a[i]);
               
               
            }
       
            
           
            
            
           
            
            if(k==1){
                cout<<-1<<endl;
            }
            else{
                double k1 = k-1;
                double ans = (st2.size()-1)/k1;
                cout<<ceil(ans)<<endl;
            }


        }



    }
    
}   