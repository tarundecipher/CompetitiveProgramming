#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int clc(int a[], int n)
{
    vector<int> seq;
    seq.push_back(a[0]);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > seq[seq.size() - 1])
        {
            seq.push_back(a[i]);
        }
        else
        {
            auto it = lower_bound(seq.begin(), seq.end(), a[i]);
            int ind = it - seq.begin();
            seq[ind] = a[i];
        }
    }
    return seq.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    a[0] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
    }
    cout << clc(a, n) - 1 << endl;
}
