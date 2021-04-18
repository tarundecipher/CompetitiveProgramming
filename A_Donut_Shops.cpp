#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;
   while(t--){
       vector <int>
       long long int ma1 =-1,ma2=-1;
       long long int a,b,c; cin>>a>>b>>c;
       long long int i=1;

       
           long long int cost11 = a*i;
           long long int q22;
           if(1%b==0){
               q22 = 1/b;
           }
           else{
               q22 = 1/b +1;
           }
           long long int cost22 = q22*c;
           if(cost11<cost22){
               ma1 = 1;
           }
           else{
               ma1 = -1;
           }

           cost11 = a*(b);
           cost22 = c;
           if(cost11<=cost22){
               ma2=-1;
           }
           else{
               ma2 = b;
           }
       
      
       cout<<ma1<<" "<<ma2<<endl;
   }
}