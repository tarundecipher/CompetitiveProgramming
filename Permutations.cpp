#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> ans;
    if (n == 1)
    {
        cout << 1 << " ";
        return 0;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 2; i <= n; i += 2)
    {
        ans.push_back(i);
    }
    for (int i = 1; i <= n; i += 2)
    {
        ans.push_back(i);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}
