#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool issafe(int i, int j, string a[])
{
    for (int k = 0; k < 8; k++)
    {
        if (a[i][k] == 'Q')
        {
            return false;
        }
    }
    for (int k = 0; k < 8; k++)
    {
        if (a[k][j] == 'Q')
        {
            return false;
        }
    }

    for (int k1 = i, k2 = j; k1 < 8 && k2 < 8; k1++, k2++)
    {
        if (a[k1][k2] == 'Q')
        {
            return false;
        }
    }
    for (int k1 = i, k2 = j; k1 >= 0 && k2 >= 0; k1--, k2--)
    {
        if (a[k1][k2] == 'Q')
        {
            return false;
        }
    }
    for (int k1 = i, k2 = j; k1 >= 0 && k2 < 8; k1--, k2++)
    {
        if (a[k1][k2] == 'Q')
        {
            return false;
        }
    }
    for (int k1 = i, k2 = j; k1 < 8 && k2 >= 0; k1++, k2--)
    {
        if (a[k1][k2] == 'Q')
        {
            return false;
        }
    }

    return true;
}

int clc(int n, string s[], int q)
{
    if (n == 0)
    {

        return 1;
    }

    int a = 0;

    for (int i = 0; i < 8; i++)
    {
        if (issafe(q, i, s) && s[q][i] == '.')
        {

            s[q][i] = 'Q';
            a += clc(n - 1, s, q + 1);

            s[q][i] = '.';
        }
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> s[i];
    }
    cout << clc(8, s, 0) << endl;
}
