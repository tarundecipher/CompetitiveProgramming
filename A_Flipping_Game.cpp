#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int n; cin>>n;

   int a[n];
   int b[n]; int count1 =0;
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]==1){
           b[i] = -1;
           count1++;
       }
       else{
           b[i] = 1;
       }
   }
   int gain = 0; int max_gain =0; int max_element =INT_MIN;
   for(int i=0;i<n;i++){
       gain = gain + b[i];
    //    cout<<gain<<endl;
       if(gain>max_gain){
           max_gain = gain;
       }
       if(gain<0){
           gain =0;
       }
       max_element = max(max_element,b[i]);
   }
   if(max_gain==0){
       max_gain = max_element;
   }
cout<<max_gain+count1<<endl;

}