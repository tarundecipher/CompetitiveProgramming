#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int dp[(int)1e6 + 2][202];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ma += a[i];
    }

    vector<int> ans;

    for (int target = 0; target <= ma; target++)
    {
        for (int j = n; j >= 0; j--)
        {
            if (target == 0)
            {

                dp[target][j] = 1;
            }
            else if (j >= n)
            {
                if (target == 0)
                {
                    dp[target][j] = 1;
                }
                else
                {
                    dp[target][j] = 0;
                }
            }
            else
            {
                int a1 = 0;
                int a2 = 0;
                if (target - a[j] >= 0)
                {
                    a1 = dp[target - a[j]][j + 1];
                }
                a2 = dp[target][j + 1];
                dp[target][j] = max(a1, a2);
            }
        }
    }
    for (int i = 1; i <= ma; i++)
    {
        if (dp[i][0])
        {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
