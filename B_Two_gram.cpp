#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void zalgo(string pat, string txt, int z[])
{
    string temp = pat + '$' + txt;
    int n = temp.length();
    int p1 = 0;
    int p2 = 1;
    while (p2 < n)
    {
        int j = p2;

        while (j < n)
        {
            if (temp[j] == temp[p1])
            {
                j++;
                p1++;
            }
            else
            {
                break;
            }
        }
        z[p2] = p1;
        p2++;
        p1 = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> two;
    for (int i = 0; i < n - 1; i++)
    {
        two.insert(s.substr(i, 2));
    }
    string ans = "";
    int ma = INT_MIN;
    for (auto x : two)
    {

        int z[n + 2 + 1];
        memset(z, 0, sizeof(z));
        zalgo(x, s, z);
        int c = 0;

        for (int i = 0; i < n + 2 + 1; i++)
        {

            if (z[i] == 2)
            {
                c++;
            }
        }

        if (c > ma)
        {
            ma = c;
            ans = x;
        }
    }
    cout << ans << endl;
}
