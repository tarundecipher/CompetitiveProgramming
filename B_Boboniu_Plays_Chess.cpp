#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sol[1000][1000];
vector <pair<int,int>  > v;
void calc(int n,int m,int i,int j){
    if(i<1 || j<1 || i>n || j>m ||sol[i][j]==1){
        return;
    }
    sol[i][j] =1;
    v.push_back({i,j});
    calc(n,m,i+1,j);
    calc(n,m,i,j+1);
    calc(n,m,i-1,j);
    calc(n,m,i,j-1);
    
    return;
}

int main(){
   int n,m,sx,sy; cin>>n>>m>>sx>>sy;
   calc(n,m,sx,sy);
   for(auto i:v){
       cout<<i.first<<" "<<i.second<<endl;
   } 
}