#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;
	int n;
	cin >> n;
	int len = s.length();

	if (n > len)
	{
		cout << s << endl;
	}
	else
	{
		string temp1;
		temp1 = s.substr(0, n);

		string temp2 = s.substr(n, len);

		temp2 += temp1;
		cout << temp2 << endl;
	}
}
