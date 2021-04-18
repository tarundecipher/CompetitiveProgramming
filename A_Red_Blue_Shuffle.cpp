#include <bits/stdc++.h>
#define ll long long int
using namespace std;
map<pair<int, int>, int> mp;
set<pair<int, int>> st;
void clc(int x, int y, int n, char x1)
{
    
    if (n == 0)
    {
        st.insert({x, y});
        return;
    }
    mp[{x, y}]++;
    if (x1 == 'x')
    {

        clc(x, y + 1, n - 1, 'y');
        clc(x, y - 1, n - 1, 'y');
    }
    else if (x1 == 'y')
    {
        clc(x + 1, y, n - 1, 'x');
        clc(x - 1, y, n - 1, 'x');
    }
    else
    {
        clc(x, y + 1, n - 1, 'y');
        clc(x, y - 1, n - 1, 'y');
        clc(x + 1, y, n - 1, 'x');
        clc(x - 1, y, n - 1, 'x');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    clc(0, 0, n, 'n');
    cout << st.size() << endl;
    // for (auto i : st)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
}
