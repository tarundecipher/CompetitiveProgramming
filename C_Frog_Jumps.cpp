#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        s= 'R'+s;
        int n = s.length();
        int num[n];int sum=0;
        for(int i=0;i<n;i++)
        {
         if(s[i]=='R'){
             sum++;
         }   
         num[i] = sum;

        }
        
        
        int l = 0; int r = n-1;
        int ans=-1;
        int l1 = 0; int r1 =r;
        while(l1<=r1){
            int mid = l1+(r1-l1)/2;
            
            int p1=l;int p2=l+mid-1;
            bool cond=true;
            while(p2<=r){
                int res =0;
                if(p1==0){
                    res = num[p2];
                }
                else{
                    res = num[p2] - num[p1-1];
                }
                // cout<<res<<endl;
                if(res>=1){
                  
                }
                else{
                    cond = false;
                    break;
                }
                p1++; p2++;
            }

        //    cout<<mid<<endl;
            if(cond){
                r1 = mid-1;
                ans = mid;
            }
            else{
                l1 = mid+1;
            }

        }
        if(ans==-1){
            cout<<n<<endl;
        }
        else{
             cout<<ans<<endl;
        }
       
    }
    
}   
