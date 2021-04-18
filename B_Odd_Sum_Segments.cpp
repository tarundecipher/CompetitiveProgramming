#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        int no =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1){
                no++;
            }
        }
        if((no-(k-1))%2==0 || (no-(k-1))<=0){
            
            cout<<"NO"<<endl;
        }
        else{
            stack<int> ans;
            ans.push(n);
           bool cond = false;
            for(int j=n-1;j>=0;j--){
                
                if(a[j]%2!=0){
                    if(cond==true){
                  
                    ans.push(j+1);
                    }
                     k--;
                     cond = true;
                }
                
                if(k<=0){
                    
                    break;
                }
            }
            cout<<"YES"<<endl;
            while(!ans.empty()){
                int temp =  ans.top(); ans.pop();
                cout<<temp<<" ";
            }cout<<endl;
        }


    }
    
    
}   
