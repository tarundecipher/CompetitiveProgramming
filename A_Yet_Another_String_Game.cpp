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
        // map<char, int> mp;
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] != 'a')
            {
                s[i] = 'a';
            }
            else if (i % 2 == 0 && s[i] == 'a')
            {
                s[i] = 'b';
            }
            else if (i % 2 != 0 && s[i] != 'z')
            {
                s[i] = 'z';
            }
            else if (i % 2 != 0 && s[i] == 'z')
            {
                s[i] = 'y';
            }
        }
        cout << s << endl;
    }
}
