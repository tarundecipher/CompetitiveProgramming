#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void nearestIntscaling(int output[][100], int img[][100], int max1, int may1, int a1, int b)
{
    for (int i = 0; i < max1; i++)
    {
        for (int j = 0; j < may1; j++)
        {
            if (output[i][j] == -1)
            {
                output[i][j] = img[(b * i / may1)][(j * a1 / max1)];
            }
        }
    }
    for (int i = 0; i < max1; i++)
    {
        for (int j = 0; j < may1; j++)
        {

            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int a1, b;
    cin >> a1 >> b;
    double a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int img[a1][100];
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> img[i][j];
        }
    }

    map<pair<int, int>, pair<int, int>> mp;
    int may1 = INT_MIN;
    int max1 = INT_MIN;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            mp[{i, j}] = {round(i * a[0][0] + j * a[1][0]), round(i * a[0][1] + j * a[1][1])};
            max1 = max(max1, mp[{i, j}].first);
            may1 = max(may1, mp[{i, j}].second);
        }
    }

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            cout << i << " " << j << "-->" << mp[{i, j}].first << " " << mp[{i, j}].second << endl;
        }
    }

    int output[max1][100];

    memset(output, -1, sizeof(output));
    for (auto i : mp)
    {
        output[i.second.first - 1][i.second.second - 1] = img[i.first.first - 1][i.first.second - 1];
    }
    cout << endl;
    for (int i = 0; i < max1; i++)
    {
        for (int j = 0; j < may1; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    nearestIntscaling(output, img, max1, may1, a1, b);
}
