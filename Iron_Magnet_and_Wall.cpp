#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s2;
        cin >> s2;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == ':')
            {
                s += '_';
                s += '_';
            }
            else
            {
                s += s2[i];
            }
        }
        // cout << s << endl;
        n = s.length();

        deque<int> q;
        bool visited[n];
        memset(visited, false, sizeof(visited));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            if (q.size() > 0 && (i - q.front() > k + 1))
            {
                q.pop_front();
            }

            if (s[i] == 'M')
            {
                q.push_back(i);
            }
            else if (s[i] == 'I' && q.size() > 0)
            {
                ans++;
                int temp = q.front();
                q.pop_front();
                visited[temp] = true;
                visited[i] = true;
            }
            else if (s[i] == 'X')
            {
                q.clear();
            }
        }
        deque<int> q2;
        for (int i = n - 1; i >= 0; i--)
        {

            if (q2.size() > 0 && (q2.front() - i > k + 1))
            {
                q2.pop_front();
            }

            if (s[i] == 'M')
            {
                if (visited[i] == false)
                {

                    q2.push_back(i);
                }
            }
            else if (s[i] == 'I' && q2.size() > 0 && visited[i] == false)
            {
                ans++;
                int temp = q2.front();
                q2.pop_front();
                visited[temp] = true;
                visited[i] = true;
            }
            else if (s[i] == 'X')
            {
                q2.clear();
            }
        }
        cout << ans << endl;
    }
}
