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
    stack<int> st;
    string ans;
    int pl = 0, pr = n - 1;

    while (pl <= pr)
    {
        if (st.empty())
        {
            if (a[pl] < a[pr])
            {
                st.push(a[pl]);
                ans += 'L';
                pl++;
            }
            else
            {
                st.push(a[pr]);
                ans += 'R';
                pr--;
            }
        }
        else
        {
            if (a[pl] < a[pr] && a[pl] > st.top())
            {
                st.push(a[pl]);
                ans += 'L';
                pl++;
            }
            else if (a[pr] < a[pl] && a[pr] > st.top())
            {
                st.push(a[pr]);
                ans += 'R';
                pr--;
            }
            else if (a[pl] > a[pr] && a[pl] > st.top())
            {
                st.push(a[pl]);
                ans += 'L';
                pl++;
            }
            else if (a[pr] > a[pl] && a[pr] > st.top())
            {
                st.push(a[pr]);
                ans += 'R';
                pr--;
            }
            else if (a[pl] == a[pr] && a[pr] > st.top())
            {
                st.push(a[pr]);
                ans += 'L';
                pr--;
            }
            else
            {
                break;
            }
        }
    }
    cout << ans.length() << endl;
    cout << ans << endl;
}
