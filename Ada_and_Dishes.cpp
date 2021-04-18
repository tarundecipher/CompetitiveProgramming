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
        int n;
        cin >> n;
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i <= pow(2,n)-1; i++)
        {
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j < n; j++)
            {
                int temp = ((1 << j) & i);
                if (temp)
                {
                    sum1 += c[j];
                }
                else
                {
                    sum2 += c[j];
                }
            }
            ans = min(ans, max(sum1, sum2));
        }
        cout << ans << endl;
    }
}
