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
        string temp = "";
        int res = n / k;
        int rem = n % k;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < res; j++)
            {
                temp += ('a' + i);
            }
        }
        for (int i = 0; i < k; i++)
        {
            if (rem > 0)
            {
                temp += ('a' + i);
                rem--;
            }
            else
            {
                break;
            }
        }
        cout << temp << endl;
    }
}
