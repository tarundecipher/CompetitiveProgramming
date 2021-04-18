#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int res = 10 / m;
    res = res % m;
    // res = res % m;

    cout << res << endl;
}
