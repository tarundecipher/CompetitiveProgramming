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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.size() > 0 && s[i] == '0' && st.top() == '1')
            {

                cnt++;
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        cout << min(cnt, n - cnt) << endl;
    }
}
