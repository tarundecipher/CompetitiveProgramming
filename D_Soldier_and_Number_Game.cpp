#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll sieve[(ll)5e6 + 3];
int arr[(int)5e6 + 3];
int pre[(int)5e6 + 3];

ll find(ll a)
{
    ll c = 0;
    while (a != 1)
    {

        a = a / sieve[a];
        c++;
    }
    return c;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    for (ll i = 0; i < 5e6 + 2; i++)
    {
        sieve[i] = i;
    }

    for (ll i = 2; i * i < 5e6 + 2; i++)
    {
        if (sieve[i] == i)
        {
            for (ll j = i * i; j < 5e6 + 2; j += i)
            {
                if (sieve[j] == j)
                {
                    sieve[j] = i;
                }
            }
        }
    }

    for (int i = 2; i < 5e6 + 2; i++)
    {
        arr[i] = find(i);
    }
    partial_sum(arr, arr + (int)5e6 + 2, pre);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        ll c = 0;
        scanf("%d", &a);
        scanf("%d", &b);

        printf("%d\n", pre[a] - pre[b]);
    }
}
