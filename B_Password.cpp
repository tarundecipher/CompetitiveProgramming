#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void getZarr(string str, int Z[])
{
    int n = str.length();
    int L, R, k;

    // [L,R] make a window which matches with prefix of s
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        // if i>R nothing matches so we will calculate.
        // Z[i] using naive way.
        if (i > R)
        {
            L = R = i;

            // R-L = 0 in starting, so it will start
            // checking from 0'th index. For example,
            // for "ababab" and i = 1, the value of R
            // remains 0 and Z[i] becomes 0. For string
            // "aaaaaa" and i = 1, Z[i] and R become 5
            while (R < n && str[R - L] == str[R])
                R++;
            Z[i] = R - L;
            R--;
        }
        else
        {
            // k = i-L so k corresponds to number which
            // matches in [L,R] interval.
            k = i - L;

            // if Z[k] is less than remaining interval
            // then Z[i] will be equal to Z[k].
            // For example, str = "ababab", i = 3, R = 5
            // and L = 2
            if (Z[k] < R - i + 1)
                Z[i] = Z[k];

            // For example str = "aaaaaa" and i = 2, R is 5,
            // L is 0
            else
            {
                // else start from R and check manually
                L = i;
                while (R < n && str[R - L] == str[R])
                    R++;
                Z[i] = R - L;
                R--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();

    int z[n + 1];
    getZarr(s, z);
    // for (int i = 0; i < z.size(); i++)
    // {
    //     cout << z[i] << " ";
    // }
    // cout << endl;
    int ma = -1;
    int ind = -1;
    stack<int> index;
    for (int i = n; i > 0; i--)
    {
        if (z[i] == n - i && z[i] != 0)
        {
            ma = z[i];
            ind = i;
            index.push(i);
        }
    }

    bool cond = false;
    if (ind != -1)
    {
        for (int i = ind - 1; i > 0; i--)
        {
            if (z[i] >= ma)
            {
                cond = true;
                break;
            }
        }
    }
    if (cond == false)
    {
        if (index.size() >= 2)
        {
            index.pop();
            int temp = index.top();
            index.pop();
            ma = z[temp];

            cond = true;
        }
    }
    // cout << ma << endl;
    if (ma != -1 && cond == true)
    {
        cout << s.substr(0, ma) << endl;
    }
    else
    {
        cout << "Just a legend" << endl;
    }
}
