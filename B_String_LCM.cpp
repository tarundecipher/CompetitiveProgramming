#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int z[21];
        memset(z, 0, sizeof(z));
        if (s.length() < t.length())
        {
            string temp = s;

            int temp2 = (s.length() * t.length()) / (__gcd(s.length(), t.length()));
            string temp3;
            while (temp3.length() != temp2)
            {
                temp3 += temp;
            }

            string t1 = s;
            string t2 = t;
            while (s.length() != temp3.length())
            {
                s += t1;
            }
            while (t.length() != temp3.length())
            {
                t += t2;
            }
            bool cond = true;
            if (s != temp3 || t != temp3)
            {
                cond = false;
            }
            if (cond)
            {

                cout << temp3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            string temp = t;
            int temp2 = (s.length() * t.length()) / (__gcd(s.length(), t.length()));
            string temp3;
            while (temp3.length() != temp2)
            {
                temp3 += temp;
            }
            int ls = temp3.length() / s.length();
            int lt = temp3.length() / s.length();
            string t1 = s;
            string t2 = t;
            while (s.length() != temp3.length())
            {
                s += t1;
            }
            while (t.length() != temp3.length())
            {
                t += t2;
            }
            bool cond = true;
            if (s != temp3 || t != temp3)
            {
                cond = false;
            }
            if (cond)
            {

                cout << temp3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
