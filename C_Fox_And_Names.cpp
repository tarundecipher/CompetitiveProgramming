#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool visited2[26];
stack<int> st;

void topo(vector<int> graph[], bool visited[], int k)
{
    if (visited[k])
    {
        return;
    }
    visited[k] = true;

    for (auto i : graph[k])
    {
        topo(graph, visited, i);
    }
    st.push(k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string prev;
    cin >> prev;
    string next;
    vector<int> v[26];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> next;

        for (int j = 0; j < min(next.length(), prev.length()); j++)
        {
            if (prev[j] != next[j])
            {

                v[prev[j] - 'a'].push_back(next[j] - 'a');
                prev = next;
                break;
            }
            if (prev.length() > next.length() && j == next.length() - 1)
            {
                cout << "Impossible" << endl;
                return 0;
            }
        }
    }

    bool cond = false;

    bool vis[26];
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < 26; i++)
    {
        if (!vis[i])
        {
            topo(v, vis, i);
        }
    }
    string ans;
    unordered_map<int, int> mp;
    int pos = 0;
    while (!st.empty())
    {
        char a = st.top();
        a += 'a';
        ans += a;
        st.pop();
        mp[a - 'a'] = pos;
        pos++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (auto x : v[i])
        {
            if (mp[x] < mp[i])
            {
                cond = true;
                break;
            }
        }
    }

    if (!cond)
    {

        cout << ans << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
}
