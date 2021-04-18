#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i < 1000; i++)
    {
        if (n / pow(5, i) != 0)
        {
            sum += n / pow(5, i);
        }
        else
        {
            break;
        }
    }
    cout << sum << endl;
}
