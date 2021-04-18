#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    int n = s.length();
    int count = 0;
    int hash = 0;
    bool cond=true;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
        }
        else if(s[i]==')'){
            count--;
        }
        else{
            hash++;
        }
        if(count<hash){
            cond = false;
            break;
        }
    }
    if(cond){
        int hash1 = hash;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]!='#'){
                temp+=s[i];
            }
            else{
                if(hash==1){
                    for(int j=0;j<count;j++){
                        temp+=')';
                    }
                }
                else{
                    temp+=')';
                    count--;
                    hash--;
                }
            }
        }
        int count2 =0; bool cond2 = true;
        for(int i=0;i<temp.length();i++){
            if(temp[i]=='('){
                count2++;
            }
            else{
                count2--;
            }
            if(count2<0){
                cond2 = false;
                break;
            }
        }
        if(cond2==true){
        // cout<<temp<<endl;
    for(int i=0;i<hash1-1;i++){
        cout<<1<<endl;
        
    }
    cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
   

}   