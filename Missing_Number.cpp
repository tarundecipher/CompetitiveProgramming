#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int visited[(int)2e5 + 5];
    memset(visited, 0, sizeof(visited));
    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        visited[a[i]] = 1;
    }

    int ans;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
