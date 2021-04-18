#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);
    int ans = 0;
    map<int, int> mp;
    for (int i = n - 1; i >= n - k; i--)
    {
        ans += b[i];
        mp[b[i]]++;
    }
    vector<int> res;
    int count = k;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (count > 1 && mp[a[i]])
        {
            mp[a[i]]--;
            res.push_back((i)-prev + 1);
            prev = i + 1;
            count--;
        }
        if (count == 1 && mp[a[i]])
        {
            res.push_back((n - 1) - prev + 1);
            break;
        }
    }
    cout << ans << endl;
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
}
