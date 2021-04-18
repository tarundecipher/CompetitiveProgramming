#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    int l = 0;
    int r = 0;
    int ma = 0;
    while (l < n && r < n)
    {
        mp[a[r]]++;
        while (l < r && mp[a[r]] > 1)
        {
            mp[a[l]]--;
            l++;
        }

        ma = max(r - l + 1, ma);
        r++;
    }
    cout << ma << endl;
}
