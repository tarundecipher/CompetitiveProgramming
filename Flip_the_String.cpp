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
        string a, b;
        cin >> a >> b;
        vector<int> odd, even;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                if (i & 1)
                {
                    even.push_back(i);
                }
                else
                {
                    odd.push_back(i);
                }
            }
        }
        int ans1 = 1, ans2 = 1;

        if (even.size() > 0)
        {
            for (int i = 0; i < even.size() - 1; i++)
            {
                if (even[i + 1] - even[i] > 2)
                {
                    ans1++;
                }
            }
        }
        else
        {
            ans1 = 0;
        }

        if (odd.size() > 0)
        {
            for (int i = 0; i < odd.size() - 1; i++)
            {
                if (odd[i + 1] - odd[i] > 2)
                {
                    ans2++;
                }
            }
        }
        else
        {
            ans2 = 0;
        }
        cout << ans1 + ans2 << endl;
    }
}
