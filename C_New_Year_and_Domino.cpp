#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    int h,w; cin>>h>>w;
    string s[h];
    for(int i=0;i<h;i++){
        cin>>s[i];

    }
    int hor[505][505],ver[505][505];
    for(int row=0;row<h;row++){
         int cnt =0;
        for(int col=1;col<w;col++){
           
            if(s[row][col]==s[row][col-1] && s[row][col]=='.'){
                cnt++;
                hor[row][col]  = cnt;
                
            }
            else{
                hor[row][col] =cnt;
            }
        }
    }
    


    for(int col=0;col<w;col++){
         int cnt =0;
        for(int row=1;row<h;row++){
           
            if(s[row][col]==s[row-1][col] && s[row][col]=='.'){
                cnt++;
                ver[row][col]  = cnt;
                
            }
            else{
                ver[row][col] =cnt;
            }
        }
    }
   
   


    int q; cin>>q;
    for(int i=0;i<q;i++){
        int ans = 0;

        int r1,c1,r2,c2; cin>>r1>>c1>>r2>>c2;
        r1--; r2--; c1--; c2--;
        for(int i=r1;i<=r2;i++){
        ans+= hor[i][c2] - hor[i][c1];
        }
        for(int i=c1;i<=c2;i++){
        ans+= ver[r2][i] - ver[r1][i];
        }
        cout<<ans<<endl;
    }
    
}   