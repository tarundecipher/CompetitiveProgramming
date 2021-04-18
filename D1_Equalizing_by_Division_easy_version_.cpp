#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a;
    int ma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        ma = max(a[i], ma);
    }

    vector<int> val[ma + 1];
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int curr = 0;
        while (x > 0)
        {
            val[x].push_back(curr);
            x = x / 2;
            curr++;
        }
    }
    int ans = 1e7;
    for (int i = 0; i <= ma; i++)
    {

        if (val[i].size() >= k)
        {
            sort(val[i].begin(), val[i].end());
            int sum = 0;
            for (int j = 0; j < k; j++)
            {
                sum += val[i][j];
            }
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;
}
