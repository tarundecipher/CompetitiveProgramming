#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int largest(int n){
    int ans = 1;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            ans = i;
            break;
        }
    }
    if(ans==1){
        return ans;
    }
    return n/ans;
}



int main(){
 int q; 
 cin>>q;
 while(q--){
     int a; cin>>a; int index;
     for(int i=26;i>=0;i--){
         int t = (1<<i);
         if((a&t)==(1<<i)){
             index = i;
             break;
         }
     }
     int b = ~a;
     for(int i=31;i>index;i--){
         b = b^(1<<i);
     }
     if(b!=0){
         cout<<(a^b)<<endl;
     }
     else{
         cout<<largest(a)<<endl;
     }
     

 }
    
}   