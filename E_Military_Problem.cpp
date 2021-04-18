#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> v;
int arr[200001];
int dfs(vector<int> graph[], int k)
{

    v.push_back(k);
    int a = 0;
    for (auto i : graph[k])
    {
        a += 1 + dfs(graph, i);
    }
    arr[k] = a;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        graph[temp].push_back(i + 2);
    }
    dfs(graph, 1);
    int mp[200001];
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]] = i;
    }
    // for (int i = 1; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    while (q--)
    {
        int u, k;
        cin >> u >> k;

        int index1 = mp[u];

        if (k <= arr[u] + 1)
        {
            cout << v[index1 + k - 1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
