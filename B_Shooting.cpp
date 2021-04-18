#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
    {
        return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back({temp, i + 1});
    }
    sort(a.begin(), a.end(), cond);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += a[i].first * i + 1;
    }
    cout << res << endl;
    for (auto i : a)
    {
        cout << i.second << " ";
    }
    cout << endl;
}
