#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
      int n; cin>>n; int a[n]; int b[n];
      
      for(int i=0;i<n;i++){
          cin>>a[i];
          b[i] = a[i];
      }
       
    sort(b,b+n);
    int mi = b[0];
    vector <int> index;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            index.push_back(i);
        }
    }
    bool cond =true;
    if(index.size()>0){
        int count =0;
        for(auto i:index){
            cond = true; int count =0;
            for(int j=0;j<n;j++){
                int m = a[i]; int n = a[j];
                if(__gcd(m,n)==mi){
                    count++;
                    break;
                }
            }
            if(count==0){
                cond = false;
                break;
            }
        }
        if(cond == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
    }


   }
}

