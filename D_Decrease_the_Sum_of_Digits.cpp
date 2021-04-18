#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        ll n,s; cin>>n>>s;
        ll moves = 0;
       
        for(ll i=0;i<19;i++){
            string temp = to_string(n);
            int sum = 0;
            for(ll j=0;j<temp.length();j++){
                sum+=temp[j] -'0';
            }
            if(sum<=s){
                break;
            }
            ll n2 = n;
            for(ll j=0;j<i;j++){
                n2 =n2/10;
            }
            int dig = n2%10;
            ll temp2= ((10-dig)%10)*(long long int)pow(10,i);
            moves += ((10-dig)%10)*(long long int)pow(10,i);
            n+= temp2;
            // cout<<((10-dig)%10)*pow(10,i)<<endl;
            // cout<<n<<endl;
            // cout<<moves<<endl;
            // p*=10;
        }
        cout<<moves<<endl;
        // cout<<9+100000000000000001<<endl;
    }
    

}   
