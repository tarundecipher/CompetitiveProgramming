#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(string s)
{
    int n = s.length();
    stack<char> st;
    bool cond = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else if (st.size() > 0)
        {
            st.pop();
        }
        else
        {
            cond = false;
            break;
        }
    }
    if (cond && st.size() == 0)
    {
        return true;
    }
    return false;
}

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
        string a(n, '.'), b(n, '.');

        bool cond = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (cond)
                {
                    a[i] = '(';
                    cond = false;
                }
                else
                {
                    a[i] = ')';
                    cond = true;
                }
            }
        }
        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (a[i] == '(')
                {
                    b[i] = ')';
                }
                else
                {
                    b[i] = '(';
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i + 1] == ')')
            {
                b[i] = '(';
                break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (b[i - 1] == '(')
            {
                b[i] = ')';
                break;
            }
        }
        cond = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (b[i] == '.')
                {
                    if (cond)
                    {
                        b[i] = '(';
                        cond = false;
                    }
                    else
                    {
                        b[i] = ')';
                        cond = true;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                a[i] = b[i];
            }
        }
        // cout << a << endl;
        // cout << b << endl;
        if (check(a) && check(b))
        {
            cout << "YES" << endl;
            cout << a << endl;
            cout << b << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
