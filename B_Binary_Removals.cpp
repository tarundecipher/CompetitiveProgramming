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
        string s;
        cin >> s;
        bool cond0 = true;
        int ind3 = -1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '0')
            {
                cond0 = false;
                ind3 = i;
            }
        }
        bool cond1 = true;
        int ind4 = -1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
            {
                cond1 = false;
                ind4 = i;
                break;
            }
        }
        bool conda1 = true;
        int ind = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                ind = i;
                break;
            }
        }
        if (ind != -1)
        {

            for (int i = ind; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1] && s[i] == '0')
                {
                    conda1 = false;
                    break;
                }
            }
        }

        bool conda0 = true;
        int ind2 = -1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                ind2 = i;
                break;
            }
        }
        if (ind2 != -1)
        {

            for (int i = ind2; i > 0; i--)
            {
                if (s[i] == s[i - 1] && s[i] == '1')
                {
                    conda0 = false;
                    break;
                }
            }
        }

        if (cond0 || cond1 || (ind != -1 && conda1) || (ind2 != -1 && conda0) || (ind4 >= ind3))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
