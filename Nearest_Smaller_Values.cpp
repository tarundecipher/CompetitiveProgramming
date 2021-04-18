#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans[n];
    memset(ans, 0, sizeof(ans));
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            ans[st.top()] = i + 1;
            st.pop();
        }
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
