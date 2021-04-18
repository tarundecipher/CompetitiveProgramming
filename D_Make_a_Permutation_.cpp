#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int a[n];
    int freq[n+1];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    vector<int> need;
    for(int i=n;i>=1;i--){
        if(freq[i]==0){
            need.push_back(i);
        }
    }
    
 
    bool visited[n+1];
    int count = 0;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++){
        if(freq[a[i]]>1 && a[i]>need[need.size()-1]){
            freq[a[i]]--; a[i] = need[need.size()-1];
            need.pop_back(); count++;
            
        }
        else if(freq[a[i]]>1 && a[i]<need[need.size()-1] && visited[a[i]]==true){
            freq[a[i]]--; a[i] = need[need.size()-1];
            need.pop_back(); count++;
          
        }
        else{
            visited[a[i]] = true;
        }
    }
    cout<<count<<endl;
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;


    

    
    
}   
