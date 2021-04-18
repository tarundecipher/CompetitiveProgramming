#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void clc(long long int a[],long long int n,char ch,long long int d1,long long int d2){
    if(ch=='a'){
    for(long long int i=0;i<n;i++){
        a[i] = d2 + a[i] - d1; 
    }
    }
    else if(ch=='b'){
        for(long long int i=0;i<n;i++){
        a[i] = d1-a[i]; 
    }
    }
}



int main(){
    long long int t; cin>>t;
    while(t--){
        long long int n,k; cin>>n>>k;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
       long long int d1,d2;
       d1 = *max_element(a,a+n);
       d2 = d1 - *min_element(a,a+n);
       if(k%2==0){
           clc(a,n,'a',d1,d2);
       }
       else{
           clc(a,n,'b',d1,d2);
       }
       for(long long int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
        
    }


}