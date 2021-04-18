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
        int a[n];
        int mp[n + 1];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[i] = temp;
        }
        bool visited[n];
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < n; i++)
        {

            // cout << mp[i + 1] << " " << i + 1 << endl;
            int ind;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i + 1)
                {
                    ind = j;
                    break;
                }
            }
            for (int j = ind - 1; j >= i; j--)
            {
                // cout << j << endl;
                if (visited[j] == false)
                {
                    // cout << a[j] << " " << a[j + 1] << endl;
                    if (a[j] > a[j + 1])
                    {
                        swap(a[j], a[j + 1]);

                        visited[j] = true;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {

                    break;
                }
            }

            // for (auto i : a)
            // {
            //     cout << i << " ";
            // }
            // cout << endl;
        }

        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
