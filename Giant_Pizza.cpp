#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> graph[(int)2e5 + 5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == '+')
        {
            if (s[4] == '+')
            {
                graph[s[2] - '0'].push_back(s[6] - '0' + (int)1e5);
                graph[s[6] - '0'].push_back(s[2] - '0' + (int)1e5);
                graph[s[2] - '0'].push_back(s[6] - '0');
                graph[s[6] - '0'].push_back(s[2] - '0');
            }
            else
            {
                graph[s[2] - '0'].push_back(s[6] - '0' + (int)1e5);
                graph[s[6] - '0' + (int)1e5].push_back(s[2] - '0');
            }
        }
        else
        {
            if (s[4] == '+')
            {
                graph[s[2] - '0' + (int)1e5].push_back(s[6] - '0');
                graph[s[6] - '0' + (int)1e5].push_back(s[2] - '0');
            }
            else
            {
                graph[s[2] - '0' + (int)1e5].push_back(s[6] - '0' + (int)1e5);
                graph[s[6] - '0' + (int)1e5].push_back(s[2] - '0' + (int)1e5);
            }
        }
    }
}
