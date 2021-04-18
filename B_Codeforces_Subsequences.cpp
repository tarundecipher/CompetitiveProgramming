#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k; cin>>k;
   
    string s  = "codeforces";
    ll freq[10];
    memset(freq,0,sizeof(freq)); bool cond = false;
    for(ll i=0;i<100;i++){
        
        for(ll j=0;j<10;j++){
            ll product = 1;
            for(ll p=0;p<10;p++){
                product*=freq[p];
            }
            
            // cout<<product<<endl;
            if(product>=k){
                cond = true;
                break;
            }
            freq[j]++;

        }
        if(cond==true){
            break;
        }
    }
    
    string t1(freq[0],'c');
    string t2(freq[1],'o');
    string t3(freq[2],'d');
    string t4(freq[3],'e');
    string t5(freq[4],'f');
    string t6(freq[5],'o');
    string t7(freq[6],'r');
    string t8(freq[7],'c');
    string t9(freq[8],'e');
    string t10(freq[9],'s');
    cout<<t1+t2+t3+t4+t5+t6+t7+t8+t9+t10<<endl;
    
    
}   