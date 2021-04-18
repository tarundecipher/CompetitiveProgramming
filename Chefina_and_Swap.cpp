#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
   long long int t; cin>>t;
   while(t--){
       long long int n; cin>>n; 
       
       long long int sum = n*(n+1)/2; long long int og = sum; 
       sum = sum/2;
       long long int left =0; long long int index =-1; long long int count=0;
       long long int index2 =-1;

       long long int low = 1; long long int high = n;
       while(low<=high){
           long long int mid = low + (high-low)/2;
           if((mid*(mid+1)/2)<sum){
              
               low = mid+1;
           }
           else if((mid*(mid+1)/2)>sum){
               high = mid-1;
           }
           else{
               count++;
               index2 = mid;
               break;
           }
       }
       index  = index2-1;

        low = 1;high = n;
       while(low<=high){
           long long int mid = low + (high-low)/2;
           if((mid*(mid+1)/2)<sum){
              index  = mid;
               low = mid+1;
           }
           else if((mid*(mid+1)/2)>sum){
               high = mid-1;
           }
           else{
               
               high = mid-1;
           }
       }
      
       
       
  
    
   
       if(og%2!=0 || n==0){
           cout<<0<<endl;
       }
     
       else{
           
           
           
           if(count==1){
               long long int t1 = index2*(index2-1)/2;
               long long int t2 = (n-index-1)*(n-index-2)/2;
               
               cout<<t1+t2+n-index-1<<endl;
            
           }

            else{
            cout<<n-index<<endl;
            }
        }
           
       

    
   }
}

