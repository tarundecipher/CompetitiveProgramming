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
        int res = 1;
        int k;
        cin >> k;
        for (int i = 1; i < k; i++)
        {
            if (res + i > k)
            {
                break;
            }
            res += i;
        }

        cout << 1 + (k - res) << endl;
    }
}
