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
        string temp;
        int ind = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != 'a')
            {
                ind = i;
            }
        }
        if (ind == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ind = n - ind;
            for (int i = 0; i < ind; i++)
            {
                temp += s[i];
            }
            temp += 'a';
            for (int i = ind; i < n; i++)
            {
                temp += s[i];
            }
            cout << temp << endl;
        }
    }
}
