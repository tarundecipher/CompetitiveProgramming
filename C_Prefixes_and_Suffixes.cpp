#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void zalgo(string pat, string txt, int z[])
{
    string temp = pat + '$' + txt;
    int n = temp.length();
    int p1 = 0;
    int p2 = 1;
    while (p2 < n)
    {
        int j = p2;

        while (j < n)
        {
            if (temp[j] == temp[p1])
            {
                j++;
                p1++;
            }
            else
            {
                break;
            }
        }
        z[p2] = p1;
        p2++;
        p1 = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string temp;
    int ind;
    int ma = 0;
    vector<string> v;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);

        if (ma < s.length())
        {

            ma = s.length();
            ind = i;
        }
    }
    temp = v[ind];
    string temp2;
    int ind2;
    ma = 0;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        if (ma <= v[i].length())
        {

            ma = v[i].length();
            ind2 = i;
        }
    }
    temp2 = v[ind2];
    string temp3 = temp.substr(1, temp.length() - 1);

    string pre, suff;
    int z3[temp3.length() + 1 + temp2.length()];

    zalgo(temp3, temp2, z3);

    if (z3[temp3.length() + 1] == temp3.length())
    {
        pre = temp;
        suff = temp2;
    }
    else
    {
        pre = temp2;
        suff = temp;
    }
    // cout << pre << " " << suff << endl;
    map<int, int> visited;
    string res(2 * n - 2, 'a');
    for (int i = 0; i < 2 * n - 2; i++)
    {
        if (!visited[v[i].length()])
        {

            bool cond = true;
            for (int j = 0; j < v[i].length(); j++)
            {
                if (v[i][j] != pre[j])
                {
                    cond = false;
                }
            }
            if (cond)
            {
                res[i] = 'P';
                visited[v[i].length()]++;
            }
            else
            {
                res[i] = 'S';
            }
        }
        else
        {
            res[i] = 'S';
        }
    }
    cout << res << endl;
}
