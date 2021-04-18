#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sp[(int)2e5][26];

int getMax(int l, int r)
{
    int len = log2(r - l + 1);
    int res;
    res = max(sp[l][len], sp[r - (1 << len) + 1][len]);
    return res;
}

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
        int arr[n];
        map<int, int> index;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            index[arr[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            sp[i][0] = arr[i];
        }
        for (int k = 1; k <= 25; k++)
        {
            for (int i = 0; i + (1 << k) <= n; i++)
            {
                sp[i][k] = max(sp[i][k - 1], sp[i + (1 << (k - 1))][k - 1]);
            }
        }
        int c = 0;
        int prev = n - 1;
        while (true)
        {
            int temp = getMax(0, prev);
            int ind = index[temp];

            for (int i = ind; i <= prev; i++)
            {
                cout << arr[i] << " ";
            }
            if (ind == 0)
            {
                break;
            }
            prev = ind - 1;
            // cout << c << " " << prev << " " << ind << endl;
        }
        cout << endl;
    }
}
