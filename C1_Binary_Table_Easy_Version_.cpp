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
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<vector<int>> ans;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                vector<int> temp;
                if (s[i][j] == '1' && s[i + 1][j] == '0')
                {
                    temp.push_back(i + 1);
                    temp.push_back(j + 1);
                    s[i][j] = '0';
                    temp.push_back(i + 1);
                    temp.push_back(j + 2);
                    if (s[i][j + 1] == '1')
                    {
                        s[i][j + 1] = '0';
                    }
                    else
                    {
                        s[i][j + 1] = '1';
                    }
                    temp.push_back(i + 2);
                    temp.push_back(j + 2);
                    if (s[i + 1][j + 1] == '1')
                    {
                        s[i + 1][j + 1] = '0';
                    }
                    else
                    {
                        s[i + 1][j + 1] = '1';
                    }
                    ans.push_back(temp);
                }
                else if (s[i][j] == '0' && s[i + 1][j] == '1')
                {
                    temp.push_back(i + 2);
                    temp.push_back(j + 1);
                    s[i + 1][j] = '0';

                    temp.push_back(i + 1);
                    temp.push_back(j + 2);
                    if (s[i][j + 1] == '1')
                    {
                        s[i][j + 1] = '0';
                    }
                    else
                    {
                        s[i][j + 1] = '1';
                    }
                    temp.push_back(i + 2);
                    temp.push_back(j + 2);
                    if (s[i + 1][j + 1] == '1')
                    {
                        s[i + 1][j + 1] = '0';
                    }
                    else
                    {
                        s[i + 1][j + 1] = '1';
                    }
                    ans.push_back(temp);
                }
                else if (s[i][j] == '1' && s[i + 1][j] == '1')
                {
                    s[i][j] = '0';
                    s[i + 1][j] = '0';
                    temp.push_back(i + 2);
                    temp.push_back(j + 1);
                    temp.push_back(i + 1);
                    temp.push_back(j + 1);
                    if (s[i + 1][j + 2] == '1')
                    {
                        temp.push_back(i + 1);
                        temp.push_back(j + 2);
                        if (s[i][j + 1] == '1')
                        {
                            s[i][j + 1] = '0';
                        }
                        else
                        {
                            s[i][j + 1] = '1';
                        }
                    }
                    else
                    {
                        temp.push_back(i + 2);
                        temp.push_back(j + 2);
                        if (s[i + 1][j + 1] == '1')
                        {
                            s[i + 1][j + 1] = '0';
                        }
                        else
                        {
                            s[i + 1][j + 1] = '1';
                        }
                    }
                    ans.push_back(temp);
                }
            }
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int x = 0; x < ans[i].size(); x++)
            {
                cout << ans[i][x] << " ";
            }

            cout << endl;
        }
    }
}
