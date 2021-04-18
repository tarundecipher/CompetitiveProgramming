#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if (a.first.first < b.first.first)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<pair<int, int>, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a[i].first.first = t1;
        a[i].first.second = t2;
        a[i].second = i;
    }
    sort(a, a + n, cond);
    int ans[n];
    priority_queue<pair<int, int>> q;
    q.push({-a[0].first.second, 1});
    ans[a[0].second] = 1;
    int rooms = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first.first > -q.top().first)
        {
            pair<int, int> temp = q.top();
            q.pop();
            q.push({-a[i].first.second, temp.second});
            ans[a[i].second] = temp.second;
        }
        else
        {
            rooms++;
            q.push({-a[i].first.second, rooms});
            ans[a[i].second] = rooms;
        }
    }
    cout << rooms << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}