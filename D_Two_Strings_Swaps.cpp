#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    int c = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (a[i] != b[i] && b[i] != a[(n - 1) - i])
        {
            c++;
        }
    }
    cout << c << endl;
}
