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
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        cin >> t;
        int p1 = n - 1;
        int p2 = n - 1;

        vector<int> ans;
        while (p2 >= 0)
        {
            if (s[p1] != t[p2])
            {
                if (s[0] == s[p1])
                {
                    string temp;
                    for (int i = 0; i <= p1; i++)
                    {
                        if (s[i] == '0')
                        {
                            temp += '1';
                        }
                        else
                        {
                            temp += '0';
                        }
                    }
                    reverse(temp.begin(), temp.end());
                    for (int i = 0; i <= p1; i++)
                    {
                        s[i] = temp[i];
                    }
                    ans.push_back(p1 + 1);
                    p1--;
                    p2--;
                }
                else
                {
                    if (s[0] == '0')
                    {
                        s[0] = '1';
                    }
                    else
                    {
                        s[0] = '0';
                    }
                    ans.push_back(1);
                    string temp;
                    for (int i = 0; i <= p1; i++)
                    {
                        if (s[i] == '0')
                        {
                            temp += '1';
                        }
                        else
                        {
                            temp += '0';
                        }
                    }
                    reverse(temp.begin(), temp.end());
                    for (int i = 0; i <= p1; i++)
                    {
                        s[i] = temp[i];
                    }
                    ans.push_back(p1 + 1);
                    p1--;
                    p2--;
                }
            }
            else
            {
                p1--;
                p2--;
            }
        }
        cout << ans.size() << " ";
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
