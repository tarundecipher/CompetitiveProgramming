#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// bool can(int x, vector<int> final)
// {

//     if (sum >= x)
//     {
//         return true;
//     }
//     return false;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    vector<int> final;

    for (auto i : freq)
    {
        final.push_back(i.second);
    }
    sort(final.begin(), final.end());

    int res = final.back();
    int sum = 0;
    for (int i = 1; i <= res; i++)
    {
        int c = i;
        int k = 0;
        int ptr = 0;
        while (ptr < final.size())
        {
            auto it = lower_bound(final.begin() + ptr, final.end(), c);
            ptr = it - final.begin() + 1;
            if (it == final.end())
            {
                break;
            }
            k += c;
            c = c * 2;
        }
        sum = max(sum, k);
    }
    cout << sum << endl;
}
