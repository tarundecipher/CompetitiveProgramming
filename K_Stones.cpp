#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int ar[100001];
int a[101];

int clc(int n, int k)
{

    if (ar[k] != -1)
    {
        return ar[k];
    }
    int ma = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {

            if (clc(n, k - a[i]) == 1)
            {
                ar[k] = 0;
                return 0;
            }
        }
    }
    ar[k] = 1;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    memset(ar, -1, sizeof(ar));
    int cond = clc(n, k);
    if (cond == 1)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
    }
}
