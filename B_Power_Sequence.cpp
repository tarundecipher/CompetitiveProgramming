#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int n; cin>>n;
   long long int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   long long int cost =0;
   sort(a,a+n);
   int c = a[1];
   map <int,int> mp;
   for(int i=2;i<n;i++){
            long long int temp = pow(c,i);
            a[i] = a[i]%temp;
            mp[a[i]]++;
   }
   int freq; int ma = INT_MIN;
   for(auto i:mp){
       if(i.second>ma){
           ma = i.second;
           freq = i.first;
       }
   }

   int cost = 

}

