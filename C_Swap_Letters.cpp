#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    int n; cin>>n;
    string s,t;
    cin>>s; cin>>t;
    vector<int> pos1,pos0;
    for(int i=0;i<n;i++){
        if(s[i]=='a' && t[i]=='b'){
            pos1.push_back(i+1);

        }
        if(s[i]=='b' && t[i]=='a'){
            pos0.push_back(i+1);
        }
    }

    
    if((pos1.size()%2)==(pos0.size()%2)){
        int n1 = pos1.size(); int n0 = pos0.size();
        if((n1%2==0) ){
            
            
            cout<<((n1/2) + (n0/2))<<endl;
            for(int i=0;i<n1;i+=2){
                cout<<pos1[i]<<" "<<pos1[i+1]<<endl;
            }
            for(int i=0;i<n0;i+=2){
                cout<<pos0[i]<<" "<<pos0[i+1]<<endl;
            }
        }
        else{
            int ans = (n1/2) + (n0/2);
            ans+=2;
            cout<<ans<<endl;
              for(int i=0;i+1<n1;i+=2){
                cout<<pos1[i]<<" "<<pos1[i+1]<<endl;
            }
            for(int i=0;i+1<n0;i+=2){
                cout<<pos0[i]<<" "<<pos0[i+1]<<endl;
            }
            cout<<pos1[n1-1]<<" "<<pos1[n1-1]<<endl;
            cout<<pos1[n1-1]<<" "<<pos0[n0-1]<<endl;


        }
    }
    else{
        cout<<-1<<endl;
    }
    
    
}   