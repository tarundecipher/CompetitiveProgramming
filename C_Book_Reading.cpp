#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int ans = INT_MAX;
int memo[100][100];
void clc(vector<int> a, int k, int n, int moves, int ref)
{
    if (k == n)
    {

        if (moves < ans)
        {
            map<int, int> freq;
            int ma = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                freq[a[i]]++;
            }
            for (auto i : freq)
            {
                // cout << i.second << " " << ref << endl;
                if (i.second == ref)
                {

                    ma = ref;
                    break;
                }
            }

            if (ma == ref)
            {
                ans = moves;
            }
        }
        return;
    }
    if (k >= n)
    {

        return;
    }
    clc(a, k + 1, n, moves, ref);
    a[k] = a[k] / 2;
    clc(a, k + 1, n, moves + 1, ref);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    memset(memo, -1, sizeof(memo));
    clc(a, 0, n, 0, k);
    cout << ans << endl;
}
