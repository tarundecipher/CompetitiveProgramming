#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    bool sieve[2000+1];
    memset(sieve,true,sizeof(sieve));
    for(int i=2;i<=2000;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=2000;j+=i){
                sieve[j] = false;
            }
        }
    }
    int num;
    for(int i=n;i<=2000;i++){
        if(sieve[i]){
            num = i;
            break;
        }
    }
    cout<<num<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<" "<<i+1<<endl;
    }
    cout<<n<<" "<<1<<endl;
    int n1 = n;
    if(!sieve[n]){
        
            for(int i=1;i<=n1 ;i++){
                cout<<i<<" "<<i+n1/2<<endl;
               
                n++;
                if(sieve[n]){
                    break;
                }
            }
        
    }
    


    
    
}   