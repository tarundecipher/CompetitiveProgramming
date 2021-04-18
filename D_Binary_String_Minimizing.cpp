#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> in;
        // for (ll i = 0; i < n; i++)
        // {
        //     ll temp;
        //     cin >> temp;
        //     s[i] = temp;
        // }
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                in.push_back(i);
            }
        }
        ll ans = 0;
        ll pos = -1;
        for (ll i = 0; i < in.size(); i++)
        {
            ll req = in[i] - i;
            if (k >= (req))
            {
                char temp;
                temp = s[ans];
                s[ans] = '0';
                s[in[i]] = temp;
                ans++;
                k -= req;
            }
            else
            {

                pos = in[i] - (k);

                char temp;
                temp = s[pos];
                s[pos] = '0';

                s[in[i]] = temp;

                break;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}
