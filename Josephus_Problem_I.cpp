#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

vector<int> ans;
vector<int> jo;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    new_data_set st;
    for (int i = 0; i < n; i++)
    {
        jo.push_back(i + 1);
        st.insert(i + 1);
    }
    int i = 0;
    while (ans.size() < n)
    {
        int index = (i + k - 1) % st.size();
        // auto it = st.begin();
        // advance(it, index);
        auto it = st.find_by_order(index);
        ans.push_back(*it);
        st.erase(it);
        i = index;
    }
    for (auto i : ans)
    {
        cout << i << ' ';
    }
}