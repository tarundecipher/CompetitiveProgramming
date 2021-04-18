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

    bool visited[n];

    int b[n];

    int index = 0;
    for(int i=1;i<=n;i+=2){
        b[i] = a[index];
        index++;
    }

    //-------------------------------------------
    int c = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (b[i] < b[i - 1] && b[i] < b[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << endl;
}
