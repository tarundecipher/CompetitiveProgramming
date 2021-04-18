#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }

       int left =0; int right=0;
       int count1=0;
       int len =0;
       int la=0,ra=0;
       while(left<n && right<n){
           if(a[right]==1){
               count1++;
           }
           while(count1>0){
               if(a[left]==1){
                   count1--;
               }
               left++;
           }
           if(len<right-left+1){
           len = max(len,right-left+1);
                la = left; ra = right;
           }
           right++;
           
       }


        for(int i=la;i<=ra;i++){
            a[i] = 1;
        }


        left=0, right=0;
        int len2=0;
        count1 =0;
       while(left<n && right<n){
           if(a[right]==1){
               count1++;
           }
           while(count1>0){
               if(a[left]==1){
                   count1--;
               }
               left++;
           }
          
           len2 = max(len2,right-left+1);
               
           right++;
           
       }

        
        // cout<<len2<<endl;
        
       
       

       if(len%2==0){
           cout<<"No"<<endl;
       }
       else{
           
           if(len2>=((len)/2+1)){
            //    cout<<ma2<<endl;
               cout<<"No"<<endl;
           }
           else{
               cout<<"Yes"<<endl;
           }
       }




   }
}

