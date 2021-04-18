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
        if (k > n && k != n * n)
        {
            cout << "No" << endl;
        }
        else
        {
            if (k == n * n)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}
