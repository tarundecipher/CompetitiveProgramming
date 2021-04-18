#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll res = n * (n + 1) / 2;
    if (res % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (ll i = 1; i <= n / 4; i++)
        {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << endl;
        cout << n / 2 << endl;
        for (ll i = n / 4 + 1; i <= n / 2; i++)
        {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << endl;
        return 0;
    }
    vector<ll> odd;
    ll sum = 0;
    vector<ll> even;

    ll req = n * (n + 1) / 4;

    for (ll i = n; i >= 1; i--)
    {

        if (i + sum <= req)
        {
            sum += i;
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    cout << even.size() << endl;
    for (auto i : even)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << odd.size() << endl;
    for (auto i : odd)
    {
        cout << i << ' ';
    }
    cout << endl;
}
