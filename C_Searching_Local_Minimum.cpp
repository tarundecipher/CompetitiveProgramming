#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //nice
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << '?' << ' ' << 1 << endl;
    int a1;
    cin >> a1;
    int a2 = (int)1e9;
    if (n >= 2)
    {
        cout << '?' << ' ' << 2 << endl;

        cin >> a2;
    }

    if (a2 > a1)
    {
        cout << '!' << " " << 1 << endl;
    }

    else
    {
        int i = 97;
        int l = 1;
        int r = n;
        int temp;
        while (i > 0 && l <= r)
        {
            int m = l + (r - l) / 2;
            int a;
            int al = -1;
            int ar = -1;
            cout << '?' << " " << m << endl;
            i--;
            cin >> a;
            if (m + 1 <= n)
            {
                cout << '?' << " " << m + 1 << endl;
                cin >> al;
                i--;
            }
            if (m - 1 >= 1)
            {
                cout << '?' << " " << m - 1 << endl;
                cin >> ar;
                i--;
            }
            if (m == n && al > a)
            {
                temp = m;
                break;
            }
            else if (m == 1 && ar > a)
            {
                temp = m;
                break;
            }
            else if (al > a && a < ar)
            {
                temp = m;
                break;
            }
            else if (ar > a && al < a)
            {
                l = m + 1;
            }
            else if (a > al && a > ar)
            {
                l = m + 1;
            }
            else if (al > a && ar < a)
            {
                r = m - 1;
            }
        }
        cout << '!' << " " << temp << endl;
    }
}