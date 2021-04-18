#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int clc(int k, int n, int p, pair<int, int> a[])
{
    if (k >= n)
    {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
    }
}
