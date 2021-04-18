#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
   int t; cin>>t;
  
   while(t--){
      int n; cin>>n;
       
      int x = 0; 
     
      int a = 0;
      cout<<1<<" "<<a<<endl;
      fflush(stdout);
      int temp2; cin>>temp2;
      int temp3 = temp2;
      int count =0;
      while(temp3!=0){
        temp3 = temp3/2;
        count++;
      }
      

      
      if((temp2&(1<<0))==(1<<0)){
        x = x|(1<<0);
      }
      

      for(int i=1;i<20;i++){
          
           a =0;
           a = a^(1<<i);
          cout<<1<<" "<<a<<endl;
          fflush(stdout);
          int temp; cin>>temp;
           
         
        
          x = x| ((temp&(1<<i))^(temp2&(1<<i)));
       
      }

    cout<<2<<" "<<x<<endl;
    fflush(stdout);
    int result; cin>>result;
     
    
    
    
    
   }
}

