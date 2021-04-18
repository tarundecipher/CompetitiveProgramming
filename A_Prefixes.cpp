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
    int c = 0;
    int ca = 0, cb = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ca++;
        }
        else
        {
            cb++;
        }
        if (i % 2 != 0)
        {
            if (cb != ca)
            {
                c++;
                if (s[i] == 'a')
                {
                    s[i] = 'b';
                }
                else
                {
                    s[i] = 'a';
                }
                cb = 0;
                ca = 0;
            }
        }
    }
    cout << c << endl;
    cout << s << endl;
}
