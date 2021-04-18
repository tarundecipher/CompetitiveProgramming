// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int arr[s.length() + 1];
        arr[0] = 0;
        for (int i = 1; i <= s.length(); i++)
        {
            if (s[i - 1] == '+')
            {

                arr[i] = arr[i - 1] + 1;
            }
            else
            {

                arr[i] = arr[i - 1] - 1;
            }
        }
        int N = s.length() + 1;
        int prefmax[N];
        int prefmin[N];
        int sufmax[N];
        int sufmin[N];
        int b[N];
        memset(b, 0, sizeof(b));
        partial_sum(arr, arr + N, b);

        prefmax[0] = arr[0];
        for (int i = 1; i < N; i++)
        {
            prefmax[i] = max(prefmax[i - 1], arr[i]);
        }

        prefmin[0] = arr[0];
        for (int i = 1; i < N; i++)
        {
            prefmin[i] = min(prefmin[i - 1], arr[i]);
        }

        sufmax[N - 1] = arr[N - 1];
        for (int i = N - 2; i >= 0; i--)
        {
            sufmax[i] = max(sufmax[i + 1], arr[i]);
        }

        sufmin[N - 1] = arr[N - 1];

        for (int i = N - 2; i >= 0; i--)
        {
            sufmin[i] = min(sufmin[i + 1], arr[i]);
        }

        while (m--)
        {
            int l, r;
            cin >> l >> r;
            int ma1 = 0;
            int mi1 = 0;
            int ma2 = 0;
            int mi2 = 0;
            ma1 = prefmax[l - 1];
            mi1 = prefmin[l - 1];
            ma2 = sufmax[r + 1];
            mi2 = sufmin[r + 1];
            int sum = 0;

            sum = arr[r] - arr[l - 1];
            // cout << b[r] << " " << b[l - 1] << endl;
            // for (auto i : b)
            // {
            //     cout << i << " ";
            // }
            // cout << endl;
            // cout << sum << endl;

            ma2 -= sum;
            mi2 -= sum;
            if (r != N - 1)
            {
                cout << max(ma2, ma1) - min(mi1, mi2) + 1 << endl;
            }

            else if (r == N - 1)
            {
                cout << ma1 - mi1 + 1 << endl;
            }
        }
    }
}
