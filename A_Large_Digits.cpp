#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    string a1, b1;
    a1 = to_string(a);
    b1 = to_string(b);

    int res1 = 0;
    int res2 = 0;
    for (int i = 0; i < a1.length(); i++)
    {
        res1 += (a1[i] - '0');
    }
    for (int i = 0; i < b1.length(); i++)
    {

        res2 += (b1[i] - '0');
    }
    if (res1 > res2)
    {
        cout << res1 << endl;
    }
    else
    {
        cout << res2 << endl;
    }
}
