#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int hills = 0, valleys = 0;
        vector<int> index;
        vector<int> valley;
        vector<int> mix;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                hills++;
                index.push_back(i);
                mix.push_back(i);
                // cout << i << ' ';
            }
            if (a[i] < a[i - 1] && a[i] < a[i + 1])
            {
                valleys++;
                valley.push_back(i);
                mix.push_back(i);
                // cout << i << ' ';
            }
        }
        // cout << endl;

        int res = hills + valleys;

        bool cond = false;
        bool cond2 = false;
        if (index.size() > 1)
        {
            for (int i = 0; i < index.size() - 1; i++)
            {
                if (index[i + 1] == index[i] + 2)
                {
                    if (a[index[i + 1] == a[index[i]]])
                    {

                        cond = true;
                    }
                    cond2 = true;
                }
            }
        }

        if (valley.size() > 1)
        {
            for (int i = 0; i < valley.size() - 1; i++)
            {
                if (valley[i + 1] == valley[i] + 2)
                {
                    if (a[valley[i + 1] == a[valley[i]]])
                    {
                        cond = true;
                    }
                    cond2 = true;
                }
            }
        }

        if (mix.size() > 1)
        {
            for (int i = 0; i < mix.size() - 1; i++)
            {
                if (mix[i + 1] == mix[i] + 1)
                {

                    cond2 = true;
                }
            }
        }
        if (cond)
        {
            if (res >= 3)
            {
                cout << res - 3 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            if (cond2)
            {
                if (res >= 2)
                {
                    cout << res - 2 << endl;
                }
                else if (res == 1)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else
            {
                if (res == 0)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << res - 1 << endl;
                }
            }
        }
    }
}
