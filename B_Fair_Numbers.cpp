#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;
        for (ll j = n; j <= 2 * n; j++)
        {

            bool cond = true;
            string temp = to_string(j);
            for (ll i = 0; i < temp.length(); i++)
            {
                if (temp[i] != '0' && (j % (temp[i] - '0')) != 0)
                {

                    cond = false;
                    break;
                }
            }

            if (cond == true)
            {
                ans = j;
                break;
            }
        }
        cout << ans << endl;
    }
}
