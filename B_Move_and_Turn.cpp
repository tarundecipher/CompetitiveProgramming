#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        ll temp = n / 2 + 1;
        cout << temp * temp << endl;
    }
    else
    {
        ll temp = (n + 1) / 2;
        ll temp2 = temp * (temp + 1) / 2;
        cout << 4 * temp2 << endl;
    }
}
