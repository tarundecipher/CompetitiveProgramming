#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int p1 = 0;
    int p2 = 0;
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    if (odd.size() > even.size())
    {
        int sum = 0;

        for (int i = even.size() + 1; i < odd.size(); i++)
        {
            sum += odd[i];
        }
        cout << sum << endl;
    }
    else if (even.size() > odd.size())
    {
        int sum = 0;

        for (int i = odd.size() + 1; i < even.size(); i++)
        {
            sum += even[i];
        }

        cout << sum << endl;
    }
    else
    {

        cout << 0 << endl;
    }
}
