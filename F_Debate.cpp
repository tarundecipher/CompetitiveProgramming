#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<string,int> p1,pair<string,int> p2){
    if(p1.second>p2.second){
        return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    pair<string,int> a[n];
    int val = 0;
    int nb=0,na=0;
    int people=0;
    bool visited[n];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++){
        
        string temp; cin>>temp; int num; cin>>num;
        if(temp=="11"){
            val+=num;
            people++;
        }
        if(temp=="10"){
            na++;
        }
        else if(temp=="01"){
            nb++;
        }
        a[i] = {temp,num};
    }
    sort(a,a+n,cond);
    int re = min(nb,na);
    int people2 = people;
    people+=2*re;
    na=re; nb=re;
    
    for(int i=0;i<n;i++){
        if(a[i].first=="10" && na>0){
            val+=a[i].second;
            na--;
            visited[i]=true;
        }
        else if(a[i].first=="01" && nb>0){
            val+=a[i].second;
            nb--;
            visited[i]=true;
        }
    }
    int num = 2*(people2+re)-(people2 + 2*re);
     for(int i=0;i<n;i++){
        if(a[i].first=="00" && num>0 && !visited[i]){
            val+=a[i].second;
            num--;
        }
        else if(a[i].first=="01" && num>0  && !visited[i]){
            val+=a[i].second;
            num--;
        }
        else if(a[i].first=="10" && num>0  && !visited[i]){
            val+=a[i].second;
            num--;
        }
        
    }
    
    
    cout<<val<<endl;


    
    
}   