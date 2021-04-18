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
        ll n, k;
        cin >> n >> k;

        int col = 0;
        if (n % 2 == 1)
        {
            col = k / ((n + 1) / 2);
        }
        cout << (col + k) % n << endl;
    }
}