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
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        int mpa[26];
        vector<int> ma, mb;
        memset(mpa, 0, sizeof(mpa));
        for (int i = 0; i < n; i++)
        {
            mpa[a[i] - 'a']++;
            mpa[b[i] - 'a']--;
        }

        int there[26], nthere[26];
        memset(there, 0, sizeof(there));
        memset(nthere, 0, sizeof(nthere));

        for (int i = 0; i < 26; i++)
        {

            if (mpa[i] > 0)
            {
                there[i] = mpa[i];
            }
            else if (mpa[i] < 0)
            {
                // cout << temp << endl;
                nthere[i] = abs(mpa[i]);
            }
        }

        bool cond = true;
        int j = 0;
        for (int i = 0; i < 25; i++)
        {

            if (nthere[i] > 0)
            {
                // cout << temp << endl;
                // cout << i << endl;
                bool condi = false;
                int sum = 0;
                if (j > 0)
                {
                    j--;
                }
                for (j; j < 25; j++)
                {
                    if (there[j] > 0)
                    {
                        if (sum + there[j] <= nthere[i] && j <= i && there[j] >= k)
                        {
                            sum += there[j];
                            there[j + 1] += there[j];
                            there[j] = 0;
                        }
                        else if (sum + there[j] > nthere[i] && j <= i && (nthere[i] - sum) >= k)
                        {
                            sum = nthere[i];
                            there[j] -= (nthere[i] - sum);
                            there[j + 1] += (nthere[i] - sum);
                            break;
                        }
                    }
                }
                if (sum == nthere[i])
                {
                    condi = true;
                }

                if (condi == false)
                {
                    cond = false;
                    break;
                }
            }
        }
        if (cond == false)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
