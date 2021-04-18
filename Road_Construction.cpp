#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int parent[(int)1e5 + 5];
int siz[(int)1e5 + 5];
set<int> st;
int ma;
int find(int a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = find(parent[a]);
}

void uni(int a, int b)
{
    int a1 = find(a);
    int a2 = find(b);
    if (a1 != a2)
    {
        if (siz[a1] > siz[a2])
        {
            siz[a1] += siz[a2];
            parent[a2] = a1;
            st.erase(a2);
            ma = max(ma, siz[a1]);
        }
        else
        {
            siz[a2] += siz[a1];
            parent[a1] = a2;
            st.erase(a1);
            ma = max(ma, siz[a2]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    ma = 1;
    pair<int, int> a[(int)2e5 + 5];
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a[i] = {t1, t2};
    }
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        siz[i] = 1;
        st.insert(i);
    }
    for (int i = 0; i < m; i++)
    {
        uni(a[i].first, a[i].second);
        cout << st.size() << " " << ma << endl;
    }
}
