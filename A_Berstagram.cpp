#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
  
  int n,m; cin>>n>>m;
  int a[m];
  for(int i=0;i<m;i++){
      cin>>a[i];
  }
  pair<int,int> b[n+1];
  for(int i=0;i<=n;i++){
      b[i].first = i;
      b[i].second = i;
  }
  map<int,int> pos;
  map<int,int> key;
  for(int i=1;i<=n;i++){
      pos[i] =i;
      key[i] =i;
  }
  for(int i=0;i<m;i++){
      if(pos[a[i]]!=1){
          int temp = pos[a[i]];
          pos[a[i]]--;
          int ketemp = key[pos[a[i]]];
          pos[ketemp]++;
          key[pos[a[i]]] = a[i];
          key[pos[a[i]]+1] = ketemp;
          b[a[i]].first = min(b[a[i]].first,pos[a[i]]);
           b[a[i]].second = max(b[a[i]].second,pos[a[i]]);

           b[ketemp].first = min(b[ketemp].first,pos[ketemp]);
            b[ketemp].second = max(b[ketemp].second,pos[ketemp]);

        

      }
  }
//   for(int i=1;i<=n;i++){
//       cout<<pos[i]<<" ";
//   }

  for(int i=1;i<=n;i++){
      cout<<b[i].first<<" "<<b[i].second<<endl;
  }
 



    
}   