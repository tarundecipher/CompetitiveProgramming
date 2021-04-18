#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y;
    cin >> x >> y;
    map<int, int> visited;
    queue<int> q;
    q.push(x);
    map<int, int> depth;
    int ans = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        if (temp == y)
        {

            ans = depth[y];

            break;
        }
        if (visited[temp])
        {
            continue;
        }

        visited[temp] = true;
        if (x - 1 >= 0)
        {
            depth[x - 1] = depth[temp] + 1;
            q.push(x - 1);
        }
        depth[x + 1] = depth[temp] + 1;
        q.push(x + 1);
        depth[2 * x] = depth[temp] + 1;
        q.push(2 * x);
    }
    cout << ans << endl;
}
