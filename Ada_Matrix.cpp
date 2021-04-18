#include <iostream>
#include <bits/stdc++.h>

using namespace std;





int main(){
   int t; cin>>t;
   while(t--){
       int n ; cin>>n;
       vector <vector<int>> a;
        int t[n],d[n];
       for(int i=0;i<n;i++){
           vector <int> v;
           for(int j=0;j<n;j++){
               int temp; cin>>temp;
                v.push_back(temp);
       }
       a.push_back(v);
   }

   for(int i=0;i<n;i++){
       t[i] = a[0][i];
        d[i] = a[i][0];
   }
   int count =0;
   for(int i=n-1;i>=0;i--){
       int index = -1;
       if(t[i]!=i+1){
           index = i;
       }
       if(index!=-1){
       for(int i=0;i<=index;i++){
           swap(t[i],d[i]);
       }
       count++;
       }
       
   }
   cout<<count<<endl;
   
  
  


}
}

