#include <bits/stdc++.h>
#define ll long long int
using namespace std;
unordered_map<int, int> freq;
vector<int> ans;

vector<int> can(int x)
{
    int c = 0;
    vector<int> curr;
    for (auto i : freq)
    {
        for (int j = 0; j < i.second / x; j++)
        {
            curr.push_back(i.first);
        }
    }

    return curr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int l = 1;
    int r = n;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        vector<int> curr;
        curr = can(mid);
        if (curr.size() >= k)
        {
            ans = curr;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
