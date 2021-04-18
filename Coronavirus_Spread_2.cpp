



#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int t; cin>>t;
   while(t--){
       int n ; cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       int ma=INT_MIN,mi=INT_MAX;

       //---------------------------
       for(int i=0;i<n;i++){
           set <long long int> s; s.insert(i);
           int temp = a[i]; int mininfected = INT_MAX;
           for(int j=0;j<i;j++){
               if(a[j]>a[i]){
                   
                  
                   int t1 = a[j];
                   temp = max(temp,t1);
               }
           }
           for(int j=i+1;j<n;j++){
               if(temp>a[j]){
                  mininfected = min(mininfected,a[j]);
                  s.insert(j);
                   
               }

           }
           for(int j=0;j<i;j++){
               if(a[j]>a[i]){
                   
                   s.insert(j);
                
                  
               }
               if(a[j]>mininfected){
                   s.insert(j);
               }
           }
            int temp2 = s.size();
           ma = max(ma,temp2);
           mi = min(mi,temp2);
            
       }
      
       cout<<mi<<" "<<ma<<endl;
       
     
}
}



