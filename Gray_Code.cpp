#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void print(int n, int N)
{
    string s;
    for (int i = 0; i < N; i++)
    {
        int t1, t2, t3;
        if (((1 << i) & n) == 0)
        {
            t2 = 0;
        }
        else
        {
            t2 = 1;
        }
        if ((((1 << (i + 1)) & n) == 0))
        {
            t3 = 0;
        }
        else
        {
            t3 = 1;
        }
        t1 = t2 ^ t3;

        string temp = to_string(t1);
        s += temp;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        // cout << i << endl;
        print(i, n);
    }
}
