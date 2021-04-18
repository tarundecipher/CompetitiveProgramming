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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i] - 1] == 0 || a[i] == 1)
        {

            c++;
        }
        mp[a[i]]++;
    }
    cout << c << endl;
}
