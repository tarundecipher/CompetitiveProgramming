#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<pair<int, int>> ans;

void clc(int n, int l, int r, int m)
{
    if (n == 0)
    {
        return;
    }

    clc(n - 1, l, m, r);
    ans.push_back({l, r});

    clc(n - 1, m, r, l);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    clc(n, 1, 3, 2);
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
}
