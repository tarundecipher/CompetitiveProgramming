#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string a;
    cin >> a;
    char f[10];
    for (int i = 0; i < 9; i++)
    {
        cin >> f[i + 1];
    }

    bool cond = true;
    int ind;
    for (int i = 0; i < n; i++)
    {
        char temp = f[a[i] - '0'];

        if (a[i] < temp)
        {

            ind = i;
            break;
        }
    }

    for (int i = ind; i < n; i++)
    {
        char temp = f[a[i] - '0'];
        if (a[i] <= temp)
        {
            a[i] = temp;
        }
        else
        {
            break;
        }
    }

    cout << a << endl;
}
