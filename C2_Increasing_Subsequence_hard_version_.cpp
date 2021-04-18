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
            else if (a[pr] < a[pl])
            {
                st.push(a[pr]);
                ans += 'R';
                pr--;
            }
            else if (a[pl] == a[pr])
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
                ans += 'R';
                pr--;
            }
            else
            {
                break;
            }
        }
    }

    stack<int> st2;
    string ans2;
    pl = 0;
    pr = n - 1;

    while (pl <= pr)
    {
        if (st2.empty())
        {
            if (a[pl] < a[pr])
            {
                st2.push(a[pl]);
                ans2 += 'L';
                pl++;
            }
            else if (a[pr] < a[pl])
            {
                st2.push(a[pr]);
                ans2 += 'R';
                pr--;
            }
            else if (a[pl] == a[pr])
            {
                st2.push(a[pl]);
                ans2 += 'L';
                pl++;
            }
        }
        else
        {
            if (a[pl] < a[pr] && a[pl] > st2.top())
            {
                st2.push(a[pl]);
                ans2 += 'L';
                pl++;
            }
            else if (a[pr] < a[pl] && a[pr] > st2.top())
            {
                st2.push(a[pr]);
                ans2 += 'R';
                pr--;
            }
            else if (a[pl] > a[pr] && a[pl] > st2.top())
            {
                st2.push(a[pl]);
                ans2 += 'L';
                pl++;
            }
            else if (a[pr] > a[pl] && a[pr] > st2.top())
            {
                st2.push(a[pr]);
                ans2 += 'R';
                pr--;
            }
            else if (a[pl] == a[pr] && a[pr] > st2.top())
            {

                st2.push(a[pl]);
                ans2 += 'L';
                pl++;
            }
            else
            {
                break;
            }
        }
    }

    if (ans.length() >= ans2.length())
    {
        cout << ans.length() << endl;
        cout << ans << endl;
    }
    else
    {
        cout << ans2.length() << endl;
        cout << ans2 << endl;
    }
}
