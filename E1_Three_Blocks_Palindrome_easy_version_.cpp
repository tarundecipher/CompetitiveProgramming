#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int freq2[2001][27];
int freq[2001][27];

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
        int a[n];
        memset(freq2, 0, sizeof(freq2));
        memset(freq, 0, sizeof(freq));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq2[i][a[i]]++;
        }
        for (int i = 0; i < 27; i++)
        {
            freq[0][i] = freq2[0][i];
        }
        for (int i = 0; i < 27; i++)
        {
            for (int j = 1; j < n; j++)
            {
                freq[j][i] = freq[j - 1][i] + freq2[j][i];
            }
        }
        int ma = 1;
        for (int l = 0; l < n; l++)
        {
            for (int r = l; r < n; r++)
            {
                int tot = 0;
                for (int i = 0; i < 27; i++)
                {
                    if (l != 0)
                    {
                        tot = max(tot, freq[r][i] - freq[l - 1][i]);
                    }
                    else
                    {
                        tot = max(tot, freq[r][i]);
                    }
                }
                int ma2 = 0;
                for (int i = 0; i < 27; i++)
                {
                    if (l != 0 && r != 0)
                    {
                        ma2 = max(min(freq[l - 1][i], freq[n - 1][i] - freq[r][i]), ma2);
                    }
                }
                tot += 2 * ma2;
                ma = max(ma, tot);
            }
        }
        cout << ma << endl;
    }
}
