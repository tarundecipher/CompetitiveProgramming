#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int check(int destination, int start, int n)
{
    // cout << ind << endl;
    queue<pair<int, int>> q;
    q.push({start, 0});
    bool visited[2 * n + 1];
    memset(visited, false, sizeof(visited));
    bool dist2[2 * n + 1];
    // memset(dist2, 0, sizeof(dist2));
    // dist2[ind] = 0;
    int ans = -1;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        int ind2 = node.first;
        int dist = node.second;
        q.pop();

        // cout << ind2 << " " << dist << endl;
        visited[ind2] = true;
        // dist2[ind2] = dist;
        if (ind2 == destination)
        {
            ans = dist;
            break;
        }

        if (ind2 >= n)
        {
            if (!visited[ind2 - n])
            {

                q.push({ind2 - n, dist + 1});
            }
        }
        else
        {
            if (!visited[ind2 + n])
            {

                q.push({ind2 + n, dist + 1});
            }
        }
        if (ind2 % 2 == 0)
        {
            if (!visited[ind2 + 1])
            {

                q.push({ind2 + 1, dist + 1});
            }
        }
        else
        {
            if (!visited[ind2 - 1])
            {

                q.push({ind2 - 1, dist + 1});
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[2 * n];
    int ind[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        ind[a[i]] = i;
    }
    int distance[2 * n + 1];
    for (int i = 1; i <= 2 * n; i++)
    {
        distance[i] = check(i - 1, ind[i], n);
    }
    set<int> st;
    for (int i = 1; i <= 2 * n; i++)
    {
        st.insert(distance[i]);
    }
    if (st.size() > 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << distance[1] << endl;
    }
    // cout << endl;
    // cout << check(2, 0, n) << endl;
    // cout << ans << endl;
}
