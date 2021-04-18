#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   long long int t; cin>>t;
   while(t--){
       long long int n; cin>>n;
       vector <long long int> a;
       for(long long int i=0;i<n;i++){
           long long int temp; cin>>temp;
           a.push_back(temp);
       }

       //-------------------input
       long long int sum =0;
       for(long long int i=0;i<n;i++)
       {
        //    cout<<sum<<endl;
           if(sum>0 && a[i]<0){
               long long int temp = a[i];
               if(sum>abs(a[i])){
                   
                    sum+=temp;
               }
               else{
                         
                   sum = 0;
               }
              
               
           }
           else if(a[i]>0){
               
               sum+=a[i];
           }
           
       }
       cout<<sum<<endl;
   }
}

