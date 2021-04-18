#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sumdig(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n = n/10;
    }
    return sum;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a; cin>>a;
    int ans; 
    for(int i=a;i<=200000;i++){
        int temp = sumdig(i);
        if(temp%4==0){
            ans = i;
            break;
        }
    }
    
    cout<<ans<<endl;
    
}
