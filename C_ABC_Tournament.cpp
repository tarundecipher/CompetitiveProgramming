#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a;
    map<int, int> mp;
    for (int i = 0; i < (1 << n); i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        mp[temp] = i + 1;
        // cout << temp << " ";
    }
    for (int i = 0; i < 1000; i++)
    {
        if (a.size() == 2)
        {
            break;
        }
        vector<int> ans;
        for (int j = 0; j < a.size(); j += 2)
        {
            // cout << a[j] << endl;
            if (a[j] > a[j + 1])
            {
                ans.push_back(a[j]);
            }
            else
            {
                ans.push_back(a[j + 1]);
            }
        }

        a = ans;
    }

    sort(a.begin(), a.end());
    cout << mp[a[0]] << endl;
}
