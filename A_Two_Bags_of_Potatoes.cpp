#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   
        int y,k,n;
        cin>>y>>k>>n;
        int x = n-y;
        vector<int> v;
        int re = y%k;
        re = k-re;
        


        for(int i=re;i<=x;i = i+k){
         

            v.push_back(i);
            
            
        }  

        if(v.size()>0){
            
            for(auto i:v){
                cout<<i<<" ";
            }cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
 
        


    
}   