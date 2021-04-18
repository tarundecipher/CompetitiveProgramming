#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int p = 0;
    int res = 0;
    while (p < n)
    {
        if (s[p] == s[p + 1])
        {
            s[p] = '$';
            res++;
            p++;
        }
        else
        {
            p += 2;
        }
    }
    string temp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '$')
        {
            temp += s[i];
        }
    }
    if (temp.length() & 1)
    {
        temp = temp.substr(0, temp.length() - 1);
        res++;
    }
    cout << res << endl;
    cout << temp << endl;
}
