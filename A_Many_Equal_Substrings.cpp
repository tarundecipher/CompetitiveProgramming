#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  
        int n,k; cin>>n>>k;
        string s; cin>>s;
        string ans;
       
        for(int i=1;i<=n;i++){
            string temp = s.substr(n-i,i);
            // cout<<temp<<endl;
            string temp2 = s;
            for(int j=0;j<k-1;j++){
                temp2+=temp;
            }
         
            int num=0; bool cond = false;
            for(int j=0;j<temp2.length();j++){
                string temp3 = temp2.substr(j,n);
                if(temp3==s){
                    num++;
                }

            }
            if(num==k){
                ans = temp2;
                break;
            }
        }
        cout<<ans<<endl;
        
    
    
    
}   
