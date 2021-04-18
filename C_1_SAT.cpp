#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> ex;
    map<string, int> nor;
    string ans = "satisfiable";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == '!')
        {
            string temp = s.substr(1, s.length());
            if (nor[temp])
            {
                ans = temp;
            }
            ex[temp]++;
        }
        else
        {
            if (ex[s])
            {
                ans = s;
            }
            nor[s]++;
        }
    }
    cout << ans << endl;
}
