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
        ll l, r;
        cin >> l >> r;
        ll temp = l;
        for (ll i = 0; i <= 62; i++)
        {
            if (((temp | (1LL << i)) >= l) && ((temp | (1LL << i)) <= r))
            {
                temp = (temp | (1LL << i));
            }
        }
        cout << temp << endl;
    }
}
