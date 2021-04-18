#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, s;
    cin >> n >> k >> s;
    ll res;
    res = s / (n - 1);
    // cout << res << endl;
    bool cond = false;
    ll temp = 0;
    if (res > k)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (res == k && s % (n - 1) != 0)
    {

        cout << "NO" << endl;
        return 0;
    }
    vector<ll> ans;
    for (ll i = 0; i < res; i++)
    {
        if (cond == false)
        {
            ans.push_back(10);
            cond = true;
        }
        else
        {
            ans.push_back(1);
            cond = false;
        }
        temp += n - 1;
    }
    // cout << temp << endl;
    bool cond2 = false;
    if (temp < s)
    {
        if (cond == true)
        {
            ll p = s - temp;
            ans.push_back(10 - p);
        }
        else
        {
            ll p = s - temp;
            ans.push_back(1 + p);
        }
        cond2 = true;
    }

    if (cond2 == false)
    {
        if (ans.size() + ans.size() * 8 < k)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    else
    {
        if (ans.size() + (ans.size() - 1) * 8 + abs(ans[n - 1] - ans[n - 2]) < k)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    int res2 = k - ans.size();
    vector<int> ans2;
    for (int i = 0; i < ans.size(); i++)
    {
        if (res2 > 8)
        {
            if (ans[i] == 10)
            {
                for (int i = 1; i <= 10; i++)
                {
                    ans2.push_back(i);
                }
            }
            else if (ans[i] == 1)
            {
                for (int i = 9; i >= 1; i--)
                {
                    ans2.push_back(i);
                }
            }
            res2 -= 8;
        }
        else if (res2 > 0)
        {
            if (ans[i] == 10)
            {
                for (int i = 1; i <= res2; i++)
                {
                    ans2.push_back(i);
                }
                ans2.push_back(10);
            }
            else if (ans[i] == 1)
            {

                for (int i = 9; i >= 9 - res2; i--)
                {
                    ans2.push_back(i);
                }
                ans2.push_back(1);
            }
            res2 = 0;
        }
        else
        {
            ans2.push_back(ans[i]);
        }
    }
    cout << "YES" << endl;
    for (auto i : ans2)
    {
        cout << i << " ";
    }
    cout << endl;

    // cout << temp << endl;
}
