#include <bits/stdc++.h>
#define ll long long int
using namespace std;

set<string> ans;
void clc(string s, int i)
{
    if (i >= s.length())
    {
        ans.insert(s);
    }
    for (int j = i; j < s.length(); j++)
    {

        swap(s[j], s[i]);
        clc(s, i + 1);
        swap(s[j], s[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    clc(s, 0);
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << endl;
    }
}
