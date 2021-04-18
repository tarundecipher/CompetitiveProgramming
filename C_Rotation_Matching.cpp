#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int n; cin>>n;
   int a[n],b[n];
   unordered_map <int,int> mpa,mpb;
   for(int i=0;i<n;i++){
       cin>>a[i];
       a[i]--;
       mpa[a[i]] = i;
   }
   for(int i=0;i<n;i++){
       cin>>b[i];
       b[i]--;
       mpb[b[i]] = i;
   }
   vector <int> shift(n,0);
   for(int i=0;i<n;i++){
       int pos = mpa[i]-mpb[i];
       if(pos<=0){
           pos = abs(pos);
       }
       else{
           pos = n-pos;
       }
       shift[pos]++;
   }
   int ma = *max_element(shift.begin(),shift.end());
    
    cout<<ma<<endl;

}