#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int states[16][16];
int clc(int i, int j)
{
    if (i < 1 || j < 1 || i > 15 || j > 15)
    {
        return 1;
    }
    if (states[i][j] != -1)
    {
        return states[i][j];
    }
    int cond = clc(i - 2, j + 1) & clc(i - 2, j - 1) & clc(i + 1, j - 2) & clc(i - 1, j - 2);
    if (cond == 0)
    {
        states[i][j] = 1;
        return 1;
    }
    else
    {
        states[i][j] = 0;
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    memset(states, -1, sizeof(states));
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (clc(x, y) == 1)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}
