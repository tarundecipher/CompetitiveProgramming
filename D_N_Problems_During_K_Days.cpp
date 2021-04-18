#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int k;
    cin >> n >> k;

    int res = k * (k + 1) / 2;

    if (res > n)
    {

        cout << "NO" << endl;
    }
    else
    {
        int diff = n - res;

        int arr[k];
        for (int i = 0; i < k; i++)
        {
            arr[i] = i + 1;
        }
        int rem = diff % k;
        int add = diff / k;
        cout << add << rem << endl;
        for (int i = 0; i < k; i++)
        {
            arr[k] += add;
        }
        for (int i = k - 1; i >= k - 1 - rem; i--)
        {
            arr[i]++;
        }

        bool cond = true;
        for (int i = 0; i < k - 1; i++)
        {
            if (arr[i + 1] > 2 * arr[i])
            {
                cond = false;
            }
        }

        if (cond == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
