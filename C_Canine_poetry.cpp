#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int ans = 0;
        int c = 0;
        int N = 100;
        int ch[n];
        for (int i = 0; i < n; i++)
        {
            ch[i] = s[i] - 'a';
        }
        for (int i = 1; i < n; i++)
        {

            if (i - 2 >= 0 && ch[i] == ch[i - 2])
            {
                ch[i] = N;
                N++;
                ans++;
            }
            else if (ch[i] == ch[i - 1])
            {
                ans++;
                ch[i] = N;
                N++;
            }
        }
        // cout << s << endl;
        cout << ans << endl;
    }
}
