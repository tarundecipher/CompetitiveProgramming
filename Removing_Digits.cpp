#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int biggest(string s)
{
    int n = s.length();
    int ma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ma = max(s[i] - '0', ma);
    }
    return ma;
}

int clc(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n < 0)
    {
        return 10000;
    }
    int a1 = 0;
    int x = biggest(to_string(n));
    a1 = 1 + clc(n - x);
    return a1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << clc(n);
    // cout << biggest("234156")
}
