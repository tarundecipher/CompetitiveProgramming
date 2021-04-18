#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int M = 1e9 + 7;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll temp = (i * i) * (i * i - 1) / 2 - (4 * (i - 1) * (i - 2));
        cout << temp << endl;
    }
}
