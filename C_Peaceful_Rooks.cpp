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
        int n, m;
        cin >> n >> m;
        pair<int, int> c[m];
        int freq[n + 1];
        memset(freq, 0, sizeof(freq));
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            freq[x]++;
            freq[y]++;

            c[i] = {x, y};
        }
        int moves = 0;
        for (int i = 0; i < m; i++)
        {
            int x = c[i].first;
            int y = c[i].second;
            if (x == y)
            {

                continue;
            }
            if (freq[x] <= 1)
            {
                moves++;
                freq[y]--;
            }
            else if (freq[y] <= 1)
            {
                moves++;
                freq[x]--;
            }
            else
            {
                // cout << x << " " << y << endl;
                // cout << freq[x] << " " << freq[y] << endl;
                moves += 2;
                freq[x]--;
                freq[y]--;
            }
        }
        cout << moves << endl;
    }
}
