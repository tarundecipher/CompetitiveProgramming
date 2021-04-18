#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
        int n; cin>>n;
        string s;cin>>s;
        int c= 0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                if(i+2<n){
                    if(s[i+2]=='R' && s[i]=='R'){
                        s[i+1] = 'G';
                    }
                    else if (s[i+2]=='G' && s[i]=='G'){
                        s[i+1] = 'B';
                    }
                    else if (s[i+2]=='B' && s[i]=='B'){
                        s[i+1] = 'G';
                    }
                    else if (s[i+2]=='G' && s[i]=='R'){
                        s[i+1] = 'B';
                    }
                    else if (s[i+2]=='R' && s[i]=='G'){
                        s[i+1] = 'B';
                    }
                    else if (s[i+2]=='B' && s[i]=='G'){
                        s[i+1] = 'R';
                    }
                    else if (s[i+2]=='G' && s[i]=='B'){
                        s[i+1] = 'R';
                    }
                    else if (s[i+2]=='B' && s[i]=='R'){
                        s[i+1] = 'G';
                    }
                    else if (s[i+2]=='R' && s[i]=='B'){
                        s[i+1] = 'G';
                    }
                    c++;
                }
                else{
                    if(s[i]=='R'){
                        s[i+1] = 'G';
                    }
                    else if(s[i]=='G'){
                        s[i+1] = 'B';
                    }
                    else if(s[i]=='B'){
                        s[i+1] = 'G';
                    }
                    c++;
                }
            }
        }
        cout<<c<<endl;
        
        cout<<s<<endl;
           
        
      
        
        
    
    
    
}   
