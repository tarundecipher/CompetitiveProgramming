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
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
            }
            else if (s[i] == ')')
            {
                if (st.size() > 0)
                {
                    ans++;
                    st.pop();
                }
            }
        }
        stack<char> st2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '[')
            {
                st2.push('[');
            }
            else if (s[i] == ']')
            {
                if (st2.size() > 0)
                {
                    ans++;
                    st2.pop();
                }
            }
        }
        cout << ans << endl;
    }
}
