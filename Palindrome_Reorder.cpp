#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    int a[26];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'A']++;
    }
    bool cond = false;
    int c = 0;
    int ind = -1;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2)
        {
            c++;
            ind = i;
        }
    }
    if (c > 1)
    {
        cond = true;
    }
    if (cond)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        if (c == 0)
        {
            string temp = "";
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < a[i] / 2; j++)
                {
                    temp += 'A' + i;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < a[i] / 2; j++)
                {
                    temp += 'A' + i;
                }
            }
            cout << temp << endl;
        }
        else
        {
            string temp = "";
            for (int i = 0; i < 26; i++)
            {
                if (i != ind)
                {
                    for (int j = 0; j < a[i] / 2; j++)
                    {
                        temp += 'A' + i;
                    }
                }
            }
            for (int j = 0; j < a[ind]; j++)
            {
                temp += 'A' + ind;
            }
            for (int i = 25; i >= 0; i--)
            {
                if (i != ind)
                {
                    for (int j = 0; j < a[i] / 2; j++)
                    {
                        temp += 'A' + i;
                    }
                }
            }
            cout << temp << endl;
        }
    }
}
