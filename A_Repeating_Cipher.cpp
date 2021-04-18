#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    string temp;
    int i = 0;
    int c = 1;
    while (i < n)
    {
        temp += s[i];
        i += c;
        c++;
    }
    cout << temp << endl;
}
