#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int x = ceil((double)n / (double)k);
        // cout << x << endl;
        int b = x * k;
        // cout << b << endl;
        int f = ceil((double)b / (double)n);
        cout << f << endl;
    }
}
