#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int cou=0;
        if(s[0]=='0'){
            string temp="";
            string temp2 = "01";
            vector<char> ind;
            for(int i=0;i<n/2;i++){
                temp+=temp2;
            }
            for(int i=0;i<n;i++){
                if(s[i]!=temp[i]){
                ind.push_back(s[i]);
                }
            }
           for(int i=0;i<ind.size()-1;i++){
               if(ind[i]==ind[i+1]){
                   cou++;
               }
               else{
                   cou+=2;
               }

           }
            cout<<cou<<endl;
        }
        else if(s[0]=='1'){
            string temp="";
            string temp2 = "10";
             vector<char> ind;
            for(int i=0;i<n/2;i++){
                temp+=temp2;
            }
            for(int i=0;i<n;i++){
                if(s[i]!=temp[i]){
                ind.push_back(s[i]);
                }
            }
            int n1 = ind.size();
           
           for(int i=0;i<n1-1;i++){
             if(ind[i]==ind[i+1]){
                 cou++;
             }
             else{
                 cou+=2;
             }

           }
            cout<<cou<<endl;
        }

    }
    
    
}   
