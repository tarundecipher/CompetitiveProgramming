#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    map<char, int> mp;
    map<char, int> num;
    for (int i = 0; i < 9; i++)
    {
        num['0' + i]++;
    }
    mp['C'] = 12;
    mp['H'] = 1;
    mp['O'] = 16;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'C' || s[i] == 'H' || s[i] == 'O')
        {
            st.push(mp[s[i]]);
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            int res = 0;
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
            if (i + 1 < n && num[s[i + 1]])
            {

                st.push((s[i + 1] - '0') * res);
                i++;
            }
            else
            {
                st.push(res);
            }
        }
        else if (num[s[i]])
        {
            int temp = st.top();
            st.pop();
            st.push((s[i] - '0') * temp);
        }
    }
    int ans = 0;
    while (!st.empty())
    {

        int temp = st.top();

        ans += temp;
        st.pop();
    }
    cout << ans << endl;
}
