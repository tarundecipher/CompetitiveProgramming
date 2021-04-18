#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
#define ll long long int
using namespace std;
string solve(string s,int count[]){
    int n = s.length();
    
    if(count[0]<0){
        for(int i=0;i<n && count[0]<0;i++){
            if(count[s[i]-'0']>0){
                
                count[s[i]-'0']--;
                s[i] = '0';
                count[0]++;
                
            }
        }
    }

    if(count[2]<0){
        for(int i=n-1;i>=0 && count[2]<0;i--){
            if(count[s[i]-'0']>0){
                
                count[s[i]-'0']--;
                s[i] = '2';
                count[2]++;
                
            }
        }
    }
        
    if(count[1]<0 && count[2]>0){
        for(int i=0;i<n && count[1]<0;i++){
            if(count[2]>0 && s[i]=='2'){
                
                count[2]--;
                s[i] = '1';
                count[1]++;
            }
        }
    }

    if(count[1]<0 && count[0]>0){
        for(int i=n-1;i>=0 && count[1]<0;i--){
            if(count[0]>0 && s[i]=='0'){
                
                
                count[0]--;
                s[i] = '1';
                count[1]++;
            }
        }
    }

    return s;
}


int main() {
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */   
   int N;
    cin>>N;
    string str;
    cin>>str;
    int count[3]={0};
    for(int i=0;i<str.length();i++)
    {
        count[str[i]-'0']++;
    }
    int equal = N/3;
    
    count[0] -= equal;
    count[1] -= equal;
    count[2] -= equal;
    
    cout<<solve(str,count);
   
}
