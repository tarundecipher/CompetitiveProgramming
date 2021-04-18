#include <bits/stdc++.h>
#define ll long long double
using namespace std;

double clcx(double x, pair<double, double> a[], double n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(x - a[i].first);
    }
    return sum;
}

double clcy(double y, pair<double, double> a[], double n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(y - a[i].second);
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<double, double> a[n];
        for (int i = 0; i < n; i++)
        {
            double t1, t2;
            cin >> t1 >> t2;
            a[i].first = t1;
            a[i].second = t2;
        }

        cout << ansx * ansy << endl;
    }
}
