#include <bits/stdc++.h>
#define ll long long int
using namespace std;
unsigned long long power(unsigned long long x, 
                         int y, int p) 
{ 
    unsigned long long res = 1; // Initialize result 
  
    x = x % p; // Update x if it is more than or 
    // equal to p 
  
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
unsigned long long modInverse(unsigned long long n, int p) 
{ 
    return power(n, p - 2, p); 
} 
  ll M = 1000000007;
unsigned long long nCr(unsigned long long n, 
                                 int r, int p) 
{ 
    // Base case 
    if (r == 0) 
        return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    unsigned long long fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 
// Returns factorial of n 
ll fact(ll n) 
{ 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
        res = (res * i)%M; 
    return res; 
} 




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
      
        ll n,x,pos; cin>>n>>x>>pos;
        ll l = 0; ll r = n;
        ll big=0; ll small=0;
        while(l<r){
            ll mid = (l+r)/2;
            if(mid<pos){
                small++;
            }
            else if(mid>pos){
                big++;
            }
            if(mid<=pos){
                l = mid+1;
            }
            else{
                r =mid;
            }
            if(left>0 && l-1==pos){
                
                break;
            }
            
        }
        // cout<<big<<" "<<small<<endl;
        ll ans = ((nCr(x-1,small,M))*nCr(n-x,big,M))%M;
        ans = (ans*fact(n-small-big-1)%M)%M;
        ans = (ans*fact(small)%M)%M;
        ans = (ans*fact(big)%M)%M;
        cout<<ans%M<<endl;


    
    
    
}   
