#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int clc1(int n){
    return n*(n+1)/2;
}

int main(){
    int k; cin>>k;
   long long int t; cin>>t;

   while(t--){
       long long int n; cin>>n; 
       
       long long int sum = clc1(n); long long int og = sum; 
       sum = sum/2;
       long long int left =0; long long int index =-1; long long int count=0;
       long long int index2 =-1;

       long long int low = 1; long long int high = n;
       while(low<=high){
           long long int mid = low + (high-low)/2;
           if(clc1(mid)<sum){
              
               low = mid+1;
           }
           else if(clc1(mid)>sum){
               high = mid-1;
           }
           else{
               
               index2 = mid;
               break;
           }
       }
      

        low = 1;high = n;
       while(low<=high){
           long long int mid = low + (high-low)/2;
           if(clc1(mid)<sum){
              index  = mid;
               low = mid+1;
           }
           else if(clc1(mid)>sum){
               high = mid-1;
           }
           else{
               
               high = mid-1;
           }
       }
      
    
        if(og%2!=0){

        
      if(index2!=-1){
          cout<<sum<<endl;
          for(int i=1;i<=index;i++){
              cout<<1<<" ";
          }
          for(int i=index+1;i<=n;i++){
              cout<<0<<" ";
          }
          cout<<endl;
      }
      else{
         
          cout<<clc1(n) - 2*clc1(index)<<endl;
          for(int i=1;i<=index;i++){
              cout<<1<<" ";
          }
          for(int i=index+1;i<=n;i++){
              cout<<0<<" ";
          }
      }
        }
        else{
            cout<<0<<endl;
            if(index2!=-1){
                
                for(int i=1;i<=index;i++){
                    cout<<1<<" ";
                }
                for(int i=index+1;i<=n;i++){
                    cout<<0<<" ";
                }
                }
            else{
                int ans = (og - 2*clc1(index))/2;
                
                ans = index+1 - ans;
                cout<<ans<<endl;
                    for(int i=1;i<=index;i++){
                        if(i!=ans){
                            cout<<0<<" ";
                        }
                        else{
                            cout<<1<<" ";
                        }
                        
                    }
                    for(int i=index+1;i<=n;i++){
                        if(i!=index+1){
                            cout<<1<<" ";
                        }
                        else{
                            cout<<0<<" ";
                        }
                    }
                }

        }
        cout<<endl;
       
       
  
    
   
     
       

    
   }
}

