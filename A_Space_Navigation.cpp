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

        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        int xma = 0;
        int xmi = 0;
        int yma = 0;
        int ymi = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                xma++;
            }
            if (s[i] == 'L')
            {
                xmi--;
            }
            if (s[i] == 'U')
            {
                yma++;
            }
            if (s[i] == 'D')
            {
                ymi--;
            }
        }
        if (x <= xma && x >= xmi && y <= yma && y >= ymi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
