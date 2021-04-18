#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int res = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == '1' && i != y)
        {
            res++;
        }
    }
    if (s[y] != '1')
    {
        res++;
    }
    cout << res << endl;
}
