#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int memo[5001][5001];

int clc(string &s, string &t, int n, int m, int p1, int p2)
{
	if (p1 >= n || p2 >= m)
	{
		return 0;
	}
	if (memo[p1][p2] != -1)
	{
		return memo[p1][p2];
	}
	int a1 = 0;
	int a2 = 0;
	if (s[p1] == t[p2])
	{
		a1 = 2 + clc(s, t, n, m, p1 + 1, p2 + 1);
	}
	else
	{

		a2 = max(a2, clc(s, t, n, m, p1 + 1, p2) - 1);
		a2 = max(a2, clc(s, t, n, m, p1, p2 + 1) - 1);
		a2 = max(a2, clc(s, t, n, m, p1 + 1, p2 + 1) - 2);
	}
	memo[p1][p2] = max(a1, a2);
	// if (p1 == 0 && p2 == 0)
	// {
	// 	cout << a1 << " " << a2 << endl;
	// }
	return max(a1, max(a2, 0));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	memset(memo, -1, sizeof(memo));
	// int temp = clc(s, t, n, m, 0, 0);
	// if (!temp)
	// {
	// 	cout << temp << endl;
	// 	return 0;
	// }
	// cout << temp + 1 << endl;
	// int ans = 0;
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < m; j++)
	// 	{
	// 		ans = max(ans, clc(s, t, n, m, i, j));
	// 	}
	// }
	// cout << ans << endl;
	for (int p1 = n; p1 >= 0; p1--)
	{
		for (int p2 = m; p2 >= 0; p2--)
		{
			if (p1 == n || p2 == m)
			{
				memo[p1][p2] = 0;
			}
			else
			{
				int a1 = 0, a2 = 0;
				if (s[p1] == t[p2])
				{
					a1 = 2 + memo[p1 + 1][p2 + 1];
				}
				else
				{
					a2 = max(a2, memo[p1][p2 + 1] - 1);
					a2 = max(a2, memo[p1 + 1][p2] - 1);
				}

				memo[p1][p2] = max(a1, a2);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans = max(ans, memo[i][j]);
		}
	}
	cout << ans << endl;
}
