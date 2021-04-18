#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> st;
        bool cond = true;
        int e = 1;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top() == e)
            {
                st.pop();
                e++;
            }
            if (a[i] != e)
            {
                st.push(a[i]);
            }

            else
            {
                e++;
            }
        }
        while (!st.empty())
        {
            if (e != st.top())
            {
                cond = false;
                break;
            }
            else
            {
                st.pop();
                e++;
            }
        }
        if (cond)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
