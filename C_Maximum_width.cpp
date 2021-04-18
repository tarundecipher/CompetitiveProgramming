#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> index[26];
    for (int i = 0; i < n; i++)
    {
        index[s[i] - 'a'].push_back(i);
    }
    int lower[26];
    int upper[26];
    memset(upper, 0, sizeof(upper));
    memset(lower, 0, sizeof(lower));
    lower[t[0] - 'a'] = index[t[0] - 'a'][0];
    for (int i = 1; i < m; i++)
    {
        auto ind = lower_bound(index[t[i] - 'a'].begin(), index[t[i] - 'a'].end(), lower[t[i - 1] - 'a']);
        if (ind == index[t[i] - 'a'].end())
        {
            lower[t[i] - 'a'] = index[t[i] - 'a'][0];
        }
        else
        {
            lower[t[i] - 'a'] = *ind;
        }
    }

    upper[t[m - 1] - 'a'] = index[t[m - 1] - 'a'][index[t[m - 1] - 'a'].size() - 1];
    for (int i = m - 2; i >= 0; i--)
    {
        if (upper[t[i] - 'a'] == 0)
        {

            auto ind = lower_bound(index[t[i] - 'a'].begin(), index[t[i] - 'a'].end(), upper[t[i + 1] - 'a']);
            if (ind == index[t[i] - 'a'].end())
            {
                upper[t[i] - 'a'] = index[t[i] - 'a'][index[t[i] - 'a'].size() - 1];
            }
            else
            {
                upper[t[i] - 'a'] = *ind;
            }
        }
    }
    int ma = 1;
    for (int i = 0; i < m - 1; i++)
    {
        ma = max(upper[t[i + 1] - 'a'] - lower[t[i] - 'a'], ma);
    }
    cout << ma << endl;
}
