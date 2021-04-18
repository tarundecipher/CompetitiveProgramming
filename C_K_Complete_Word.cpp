#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int num = n/k; int ans = 0;

        if(k%2==0){
        for(int i=0;i<k/2;i++){
            int ma = INT_MIN;
            map<char,int> mp;
            for(int j=i;j<n;j+=k){
                mp[s[j]]++;
               
                if(ma<mp[s[j]]){
                    ma = mp[s[j]];

                }

            }
            for(int j=k-i-1;j<n;j+=k){
                mp[s[j]]++;
               
                if(ma<mp[s[j]]){
                    ma = mp[s[j]];

                }

            }

            ans+=(2*num-ma);


        }
        }
        else{
              for(int i=0;i<k/2;i++){
            int ma = INT_MIN;
            map<char,int> mp;
            for(int j=i;j<n;j+=k){
                mp[s[j]]++;
               
                if(ma<mp[s[j]]){
                    ma = mp[s[j]];

                }

            }
            for(int j=k-i-1;j<n;j+=k){
                mp[s[j]]++;
               
                if(ma<mp[s[j]]){
                    ma = mp[s[j]];

                }

            }

            ans+=(2*num-ma);


        }
         int ma = INT_MIN;
            map<char,int> mp;
            for(int j=(k/2);j<n;j+=k){
                mp[s[j]]++;
               
                if(ma<mp[s[j]]){
                    ma = mp[s[j]];

                }

            }
            ans+=(num-ma);
        }
        cout<<ans<<endl;
    }
    
    
}   