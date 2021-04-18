#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return 0;
    }
    ll temp = 0;
    ll ind = 0;
    for (ll i = 63; i >= 0; i--)
    {
        ll a1 = ((1ULL << i) & b);

        if ((a1 == (1ULL << i)))
        {
            ind = i;
            break;
        }
    }
    ll ind2 = 0;
    for (ll i = 63; i >= 0; i--)
    {
        ll a1 = ((1ULL << i) & a);

        if ((a1 == (1ULL << i)))
        {
            ind2 = i;
            break;
        }
    }
    if (ind != ind2)
    {

        for (int i = ind; i >= 0; i--)
        {
            temp |= (1ULL << i);
        }
    }
    else
    {
        cout << ind << endl;
        for (int i = ind - 1; i >= 0; i--)
        {
            temp |= (1ULL << i);
        }
    }

    cout << temp << endl;
}
