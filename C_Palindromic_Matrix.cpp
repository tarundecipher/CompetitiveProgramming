#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ar[n * n];
    map<int, int> freq;
    set<int> st;

    for (int i = 0; i < n * n; i++)
    {
        cin >> ar[i];
        freq[ar[i]]++;
        st.insert(ar[i]);
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        cout << ar[0] << endl;
        return 0;
    }
    int a[n][n];
    memset(a, 0, sizeof(a));
    if (n % 2 == 0)
    {
        for (auto i : st)
        {

            for (int j = 0; j <= n / 2; j++)
            {
                for (int k = 0; k <= n / 2; k++)
                {
                    if (freq[i] >= 4 && a[j][k] == 0)
                    {
                        // cout << i << " " << k << " " << i << endl;
                        a[j][k] = i;
                        a[n - j - 1][k] = i;
                        a[j][n - k - 1] = i;
                        a[n - j - 1][n - k - 1] = i;
                        freq[i] -= 4;
                    }
                }
            }
        }
    }
    else
    {
        for (auto i : st)
        {

            for (int j = 0; j < n / 2; j++)
            {
                for (int k = 0; k < n / 2; k++)
                {

                    if (freq[i] >= 4 && a[j][k] == 0)
                    {
                        // cout << i << " " << k << " " << i << endl;
                        a[j][k] = i;
                        a[n - j - 1][k] = i;
                        a[j][n - k - 1] = i;
                        a[n - j - 1][n - k - 1] = i;
                        freq[i] -= 4;
                    }
                }
            }
        }
    }
    bool cond = true;
    if (n % 2 != 0)
    {
        for (auto i : st)
        {
            for (int j = 0; j < n / 2; j++)
            {

                if (freq[i] >= 2 && a[j][n / 2] == 0)
                {

                    a[j][n / 2] = i;
                    a[n - j - 1][n / 2] = i;

                    freq[i] -= 2;
                }
                if (freq[i] >= 2 && a[n / 2][j] == 0)
                {

                    a[n / 2][j] = i;
                    a[n / 2][n - j - 1] = i;
                    freq[i] -= 2;
                }
            }
        }

        if (a[n / 2][n / 2] == 0)
        {
            for (auto i : st)
            {
                bool condi = true;
                if (freq[i] >= 1)
                {
                    condi = false;
                    a[n / 2][n / 2] = i;
                    freq[i]--;
                    break;
                }
                if (condi == false)
                {
                    break;
                }
            }
        }
    }

    for (auto i : freq)
    {
        if (i.second > 0)
        {
            cond = false;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                cond = false;
                break;
            }
        }
    }
    if (cond == false)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
