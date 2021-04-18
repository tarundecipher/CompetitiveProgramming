#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(string a, string b)
{
    if (a.length() < b.length())
    {
        return true;
    }
    return false;
}

void zalgo(string pat, string txt, int z[])
{
    string temp = pat + '$' + txt;
    int n = temp.length();
    int p1 = 0;
    int p2 = 1;
    while (p2 < n)
    {
        int j = p2;

        while (j < n)
        {
            if (temp[j] == temp[p1])
            {
                j++;
                p1++;
            }
            else
            {
                break;
            }
        }
        z[p2] = p1;
        p2++;
        p1 = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    string prev = a[0];
    bool condi = true;
    for (int i = 1; i < n; i++)
    {
        int z[300];
        bool cond = false;
        memset(z, 0, sizeof(z));
        zalgo(prev, a[i], z);
        for (int j = 0; j < 300; j++)
        {
            if (z[j] == prev.length())
            {
                cond = true;
                break;
            }
        }
        if (cond == false)
        {
            condi = false;
            break;
        }
        prev = a[i];
    }

    if (condi == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
    }
}
