#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int getmin(char a, char b)
{
    int a1 = abs(b - a);

    int a2 = abs(('z') - a) + abs((b - 'a')) + 1;

    int a3 = abs(('z') - b) + abs((a - 'a')) + 1;

    return min(a1, min(a2, a3));
}

int clc(int p, string &s, int ma)
{

    // cout << p << " " << ma << endl;
    if (p > ma)
    {
        return 0;
    }
    int n = s.length();
    int a1 = 0;

    // cout << s[p] << " " << s[n - p - 1] << " " << p << endl;

    if (p == ma)
    {

        char a = s[p];
        char b = s[n - p - 1];
        s[p] = s[n - p - 1];
        a1 = (getmin(a, b)) + clc(p + 1, s, ma);
    }
    else
    {
        char a = s[p];
        char b = s[n - p - 1];
        s[p] = s[n - p - 1];
        a1 = (1 + getmin(a, b)) + clc(p + 1, s, ma);
    }

    return a1;
}

int clc2(int p, string &s, int mi)
{
    // cout << p << " " << mi << endl;
    if (p < mi)
    {
        return 0;
    }
    int n = s.length();
    int a1 = 0;

    // cout << s[p] << " " << s[n - p - 1] << endl;
    if (p == mi)
    {

        char a = s[p];
        char b = s[n - p - 1];
        s[p] = s[n - p - 1];
        a1 = getmin(a, b) + clc2(p - 1, s, mi);
    }
    else
    {
        char a = s[p];
        char b = s[n - p - 1];
        s[p] = s[n - p - 1];
        a1 = (1 + getmin(a, b)) + clc2(p - 1, s, mi);
    }

    return a1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;
    p--;
    string s;
    cin >> s;
    if (p >= n / 2)
    {
        // p--;
        reverse(s.begin(), s.end());
        p = n - 1 - p;
    }

    string t = s;
    int ma = -1;
    int mi = INT_MAX;

    for (int i = 0; i < p; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            mi = i;
            break;
        }
    }
    for (int i = n / 2 - 1; i >= p; i--)
    {
        if (s[i] != s[n - i - 1])
        {
            ma = i;
            break;
        }
    }

    int ans = 0;
    // cout << mi << " " << ma << " " << p << endl;
    if (p <= ma)
    {
        ans += clc(p, s, ma);
    }

    if (mi <= p)
    {

        if (ma >= p)
        {

            ans += clc2(ma, s, mi);
        }
        else
        {
            ans += clc2(p, s, mi);
        }
    }

    int ans1 = 0;
    if (mi < p)
    {
        ans1 += clc2(p, t, mi);
    }

    if (ma >= p)
    {
        if (mi < p)
        {

            ans1 += clc(mi, t, ma);
        }
        else
        {
            ans1 += clc(p, t, ma);
        }
    }

    cout << min(ans1, ans) << endl;

    // cout << getmin('r', 'a');
}
