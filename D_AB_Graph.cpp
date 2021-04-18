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
        string a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> same;
        vector<int> diff;
        vector<int> three;
        map<pair<int, int>, int> index;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                index[{i, a[i][j]}] = j + 1;
                if (same.size() == 0 && a[i][j] == a[j][i] && i != j)
                {
                    same.push_back(i);
                    same.push_back(j);
                }
                if (diff.size() == 0 && a[i][j] != a[j][i] && i != j)
                {
                    diff.push_back(i);
                    diff.push_back(j);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != '*' && index[{i, a[i][j]}] > 1 && index[{j, a[i][j]}] > 1)
                {
                    three.push_back(i);
                    three.push_back(index[{i, a[i][j]}] - 1);
                    three.push_back(index[{j, a[i][j]}] - 1);
                    break;
                }
            }
        }
        if (same.size() > 0)
        {
            cout << "YES" << endl;
            int ind = 0;
            for (int i = 0; i <= m; i++)
            {
                cout << same[ind % 2] + 1 << " ";
                ind++;
            }
            cout << endl;
        }
        else
        {
            if (m % 2 == 0)
            {
                if (three.size() > 0)
                {
                    cout << "YES" << endl;
                    for (int i = 0; i < three.size(); i++)
                    {
                        cout << three[i] << endl;
                    }
                    bool cond = false;
                    while (m > 0)
                    {
                        for (int i = 0; i < three.size(); i++)
                        {
                            if (cond)
                            {
                                if (i != 0)
                                {
                                    cout << three[i] + 1 << " ";
                                }
                            }
                            else
                            {
                                cout << three[i] + 1 << " ";
                            }
                            cond = true;
                        }
                        m -= 2;
                        for (int i = three.size() - 2; m > 0 && i >= 0; i--)
                        {
                            cout << three[i] + 1 << " ";
                        }
                        m -= 2;
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (diff.size() > 0)
                {
                    cout << "YES" << endl;
                    int ind = 0;
                    for (int i = 0; i <= m; i++)
                    {
                        cout << diff[ind % 2] + 1 << " ";
                        ind++;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
