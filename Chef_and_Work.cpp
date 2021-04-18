#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
       int n,k; cin>>n>>k;
       int w[n];
       for(int i=0;i<n;i++){
           cin>>w[i];
       }



       int temp = k;
       int i=0; int j=-1;
       
        while(i<n){
            if(temp>=w[i]){
                temp-=w[i];
                w[i] = j;
                i++;
                

            }
            else if(temp<w[i] && k>=w[i]){
                
                j--;
                temp = k;

            }
            else{

                break;
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<w[i]<<" ";

        }cout<<endl;


        set <int> s; vector <int> v;
        for(int i=0;i<n;i++){
            if(w[i]<0){
                s.insert(w[i]);
                v.push_back(w[i]);
            }
        }
        if(v.size()<n){
            cout<<-1<<endl;

        }
        else{
            cout<<s.size()<<endl;
        }
   
       

   }
}

