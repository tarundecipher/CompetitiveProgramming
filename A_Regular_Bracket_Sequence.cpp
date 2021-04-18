#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string pat = "abab";
    string txt = "abbabab";
    int z[pat.length() + txt.length() + 1];
    memset(z, 0, sizeof(z));
    zalgo(pat, txt, z);
    for (auto i : z)
    {
        cout << i << " ";
    }
    cout << endl;
}
