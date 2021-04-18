#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int a[n];
     bool visited[n+1];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        visited[a[i]] = true;
    }
    deque<int> q;
    map<int,int> sp;
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            q.push_back(i);
            if(a[i-1]==0){
            sp[i]++;
            }
        }
    }
    bool cond = false;
    for(auto i:sp){
          if(i.first!=q.back()){
            int temp = q.back();
            q.pop_back();
            a[i.first-1] = temp;
           
            
        }
        else if(i.first!=q.front()){
            int temp = q.front();
            q.pop_front();
            a[i.first-1] = temp;
           
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0 && i+1!=q.back()){
            int temp = q.back();
            q.pop_back();
            a[i] = temp;
          
            
        }
        else if(a[i]==0 && i+1!=q.front()){
            int temp = q.front();
            q.pop_front();
            a[i] = temp;
            
        }
    }
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

}   
