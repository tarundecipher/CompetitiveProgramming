#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<string> v;
int M = 1000000007;
int memo[1001][1001];
int clc(int i, int j, int h, int w)
{
    if (i >= h || j >= w)
    {
        return 0;
    }
    if (i == h - 1 && j == w - 1)
    {
        return 1;
    }
    if (memo[i][j] != -1)
    {
        return memo[i][j];
    }

    int a1 = 0, a2 = 0;
    if (i + 1 < h && v[i + 1][j] == '.')
    {
        a1 = clc(i + 1, j, h, w);
    }
    if (j + 1 < w && v[i][j + 1] == '.')
    {
        a2 = clc(i, j + 1, h, w);
    }
    memo[i][j] = (a1 % M + a2 % M) % M;
    return memo[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w;
    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
    memset(memo, -1, sizeof(memo));
    cout << clc(0, 0, h, w) << endl;
}
