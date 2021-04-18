#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> s1;
    vector<int> s2;
    for (int i = 0; i < n; i++)
    {
        if (s1.size() > 0 && s1.back() != a[i] && s2.size() > 0 && s2.back() != a[i])
        {
            if (i != n - 1)
            {
                if (s1.back() == a[i + 1])
                {
                    s1.push_back(a[i]);
                }
                else if (s2.back() == a[i + 1])
                {
                    s2.push_back(a[i]);
                }
                else
                {
                    s1.push_back(a[i]);
                }
            }
            else
            {
                s2.push_back(a[i]);
            }
        }
        else if (s1.size() > 0 && s1.back() != a[i] && s2.size() > 0 && s2.back() == a[i])
        {
            s1.push_back(a[i]);
        }
        else if (s1.size() > 0 && s1.back() == a[i] && s2.size() > 0 && s2.back() != a[i])
        {
            s2.push_back(a[i]);
        }
        else if (s1.size() == 0)
        {
            s1.push_back(a[i]);
        }
        else if (s2.size() == 0)
        {
            s2.push_back(a[i]);
        }
    }

        cout << s1.size() + s2.size() << endl;
}
