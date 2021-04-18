#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        ll x; cin>>x;
        ll index = 1;
       
        
        for(ll i=63;i>=0;i--){
            
            if(index>=x){
                break;
            }
            else{
                index*=2;
            }
        }
        cout<<index<<endl;
       
       
    }

}   

// import math

// def nextPowerOf2(n): 
//     count = 0; 
//     if (n and not(n & (n - 1))): 
//         return n 
      
//     while( n != 0): 
//         n >>= 1
//         count += 1
//     return 1 << count; 

// def Log2(x):
//     if x == 0:
//         return false;
 
//     return (math.log10(x) /
//             math.log10(2));

// def isPowerOfTwo(n):
//     return (math.ceil(Log2(n)) == math.floor(Log2(n)));


// t = int(input())
// for _ in range(t):
//     x = int(input())
//     if(isPowerOfTwo(x)):
//         print(2*x)
//     else:
//         print(nextPowerOf2(x))
    