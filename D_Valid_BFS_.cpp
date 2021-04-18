#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int relorder[200001];

bool cmp(int a, int b)
{
    if (relorder[a] < relorder[b])
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
    vector<int> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int seq[n];
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
        relorder[seq[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end(), cmp);
    }
    int depth[n + 1];
    depth[1] = 0;
    queue<int> q;
    q.push(1);
    bool visited[n + 1];
    vector<int> seq2;
    memset(visited, false, sizeof(visited));
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        visited[temp] = true;
        seq2.push_back(temp);

        for (auto i : graph[temp])
        {
            if (!visited[i])
            {
                depth[i] = depth[temp] + 1;
                q.push({i});
            }
        }
    }
    bool cond = true;
    for (int i = 0; i < n; i++)
    {
        if (seq[i] != seq2[i])
        {
            cond = false;
            break;
        }
    }
    if (cond)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
