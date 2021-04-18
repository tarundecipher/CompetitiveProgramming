#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   
        int n;cin>>n;
        int a[n];
        map<int,int> freq;
        int ma = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
            ma = max(ma,a[i]);
        }
        if(freq[ma]>=2){
            cout<<ma<<" "<<ma<<endl;
        }
        else{
        int x=1,y=1;
        map<int,int> visited;
        for(int i=0;i<n;i++){
            if(ma%a[i]==0 && !visited[a[i]]){
                freq[a[i]]--;
                visited[a[i]]++;
         
            }
        }
         y=ma;
        
        for(int i=0;i<n;i++){
            
            if(freq[a[i]]>=1){
               
                x = max(x,a[i]);
            }
        }
       
       
        
        cout<<x<<" "<<y<<endl;

        }
    
    
}   
