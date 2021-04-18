#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a; 
        cin>>a;

        stack <int> s0,s1;
        int b[n];
        int count = 1;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                if(s1.size()>0){
                    int temp = s1.top();
                    s1.pop();
                    b[i] = temp;
                    s0.push(temp);
                }
                else{
                    b[i] = count;
                    s0.push(count);
                    count++;
                }
            }
            else{
                if(s0.size()>0){
                    int temp = s0.top();
                    s0.pop();
                    b[i] = temp;
                    s1.push(temp);
                }
                else{
                    b[i] = count;
                    s1.push(count);
                    count++;
                }
            }
        }
        int ma = INT_MIN;
        for(auto i:b){
            ma = max(ma,i);
        }
        cout<<ma<<endl;
        for(auto i:b){
            cout<<i<<" "; 
        }cout<<endl;
        
        
        
    }
    
    
}   
