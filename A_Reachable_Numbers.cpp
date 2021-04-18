#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int clc(int n)
{
    n++;
    if (n % 10 == 0)
    {
        while (n % 10 == 0)
        {
            n = n / 10;
        }
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    while (!mp[n])
    {
        mp[n]++;
        n = clc(n);
    }
    cout << mp.size() << endl;
}
