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
        map<char, int> alpha;
        map<char, int> op;
        for (int i = 0; i < 26; i++)
        {
            alpha['a' + i]++;
        }
        op['/']++;
        op['*']++;
        op['+']++;
        op['-']++;
        op['^']++;

        stack<int> st;
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (alpha[s[i]])
            {
                ans += s[i];
            }
            else if (op[s[i]])
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                ans += st.top();
                st.pop();
            }
        }
        cout << ans << endl;
    }
}
