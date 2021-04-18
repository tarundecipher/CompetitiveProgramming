#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

        string start; string end;
        cin>>start; cin>>end;
        start= start.substr(0,2) + start.substr(3,2);
        end= end.substr(0,2) + end.substr(3,2);
        int st; int ed;
        st = stoi(start);
        ed = stoi(end);
        int res = st+ed;
        double res2 = (double)res/2;
        cout<<res2<<endl;
        int res3 = res/2;
        res2=  res2-res3;
        
        res2 = res2*60;
        res3 = res3+res2;
        cout<<res3<<endl;







  
    
    
}   
