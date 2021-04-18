#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n], b[n];
    map<int, int> mp, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
        mp2[a[i]]++;
    }
    int ma = INT_MIN;
    int ind;
    for (auto i : mp2)
    {
        if (ma < i.second)
        {
            ma = i.second;
            ind = mp[i.first];
        }
    }

    vector<vector<int>> ans, ans2;
    for (int i = ind; i >= 0; i--)
    {
        vector<int> temp;
        if (i > 0 && a[i] < a[i - 1])
        {
            a[i - 1] = a[i - 1] - abs(a[i - 1] - a[i]);
            temp.push_back(2);
            temp.push_back(i);
            temp.push_back(i + 1);
            ans.push_back(temp);
        }
        else if (i > 0 && a[i] > a[i - 1])
        {
            a[i - 1] = a[i - 1] + abs(a[i - 1] - a[i]);
            temp.push_back(1);
            temp.push_back(i);
            temp.push_back(i + 1);
            ans.push_back(temp);
        }
    }

    for (int i = ind; i < n; i++)
    {
        vector<int> temp;
        if (i < n - 1 && a[i] < a[i + 1])
        {
            a[i + 1] = a[i + 1] - abs(a[i + 1] - a[i]);
            temp.push_back(2);
            temp.push_back(i + 2);
            temp.push_back(i + 1);
            ans.push_back(temp);
        }
        else if (i < n - 1 && a[i] > a[i + 1])
        {
            a[i + 1] = a[i + 1] + abs(a[i + 1] - a[i]);
            temp.push_back(1);
            temp.push_back(i + 2);
            temp.push_back(i + 1);
            ans.push_back(temp);
        }
    }

    cout << ans.size() << endl;
    for (auto x : ans)
    {
        for (auto i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}
