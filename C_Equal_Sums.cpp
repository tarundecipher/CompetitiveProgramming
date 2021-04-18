#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct node
{
    pair<int, int> b = {100000, 100000};
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<int> a[k];
    unordered_map<int, node> mp;
    int c[2];
    int b[2];
    bool cond = false;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
            sum += temp;
        }
        for (int j = 0; j < n; j++)
        {
            if (mp[sum - a[i][j]].b.first == 100000)
            {
                mp[(sum - a[i][j])].b = {i + 1, j + 1};
            }
            else
            {
                if (i + 1 != mp[sum - a[i][j]].b.first)
                {
                    c[0] = mp[sum - a[i][j]].b.first;
                    c[1] = mp[sum - a[i][j]].b.second;
                    b[0] = i + 1;
                    b[1] = j + 1;
                    cond = true;
                }
            }
        }
    }
    if (cond)
    {
        cout << "YES" << endl;
        cout << c[0] << " " << c[1] << endl;
        cout << b[0] << " " << b[1] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
