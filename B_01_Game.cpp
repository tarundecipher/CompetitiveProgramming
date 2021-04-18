#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;
   cin.ignore();
   while(t--){
    string s;
    getline(cin,s);
    int moves =0;
    int count1=0,count2=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count1++;
        }
        else{
            count2++;
        }
    }
    moves = min(count1,count2);
    // cout<<moves<<endl;
    if(moves%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
    }
    // cout<<s<<endl;
   }
}