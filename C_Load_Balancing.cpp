#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int a[n];
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n==0){
        int ans = sum/n;
        int count =0;
        int res=0;
        for(int i=0;i<n;i++){
            if(ans-a[i]>0){
                res+= ans-a[i];
            }
        }
        cout<<res<<endl;

    }
    else{
        int ans1;
        ans1 = floor(sum/n);
        int ans2 = ans1+1;
        int res1 = 0;
        int res2 =0;
        int n1= sum%n;
        int n2  = n- sum%n;
        for(int i=0;i<n;i++){
            if(ans1-a[i]>0 && n2>0){
                res1+=ans1-a[i];
                n2--;
            }
            else if(ans1-a[i]>0 && n1>0){
                res1+=ans1-a[i]+1;
                n1--;
            }
            
        }
        cout<<max(res1,res2)<<endl;

    }

    
}   
