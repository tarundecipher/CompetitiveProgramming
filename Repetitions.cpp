#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    s.push_back('.');
    int n = s.length();
    int c = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            ans = max(ans, c);
            c = 1;
        }
    }
    cout << ans << endl;
}
