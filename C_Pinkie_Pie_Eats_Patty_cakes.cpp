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
        int a[n];
        map<int, int> mp;
        int ma = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        map<int, int> freq;
        for (auto i : mp)
        {
            ma = max(ma, i.second);
            freq[i.second]++;
        }
        int spaces = ma - 1;
        int ans = 0;
        ans += freq[ma] - 1;
        freq.erase(ma);
        int tot = 0;
        for (auto i : freq)
        {
            tot += i.second * i.first;
        }
        ans += tot / spaces;
        cout << ans << endl;
    }
}
