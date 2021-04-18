// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to map
// numbers using coordinate
// compression
void coordinateCompression(int arr[], int n)
{

    // Set will store
    // all unique numbers
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    // Map will store
    // the new elements
    int index = 0;
    map<int, int> mp;
    set<int>::iterator itr;

    for (itr = s.begin(); itr != s.end(); itr++)
    {
        // For every new number in the set,
        index++;
        // Increment the index of the
        // current number and store it
        // in a hashmap. Here index
        // for every element is the
        // new value with with the
        // current element is replaced
        mp[*itr] = index;
    }
    for (int i = 0; i < n; i++)
    {
        // now change the current element
        // to range 1 to N.
        arr[i] = mp[arr[i]];
    }
}

// Function to calculate
// length of maximum
// increasing sequence till
// i'th index
int query(int BIT[], int index, int n)
{

    int ans = 0;
    while (index > 0)
    {
        ans = max(ans, BIT[index]);
        // Go to parent node
        index -= index & (-index);
    }
    return ans;
}

// Function for updating
// BIT array for maximum
// increasing sequence till
// i'th index
void update(int BIT[], int index, int n)
{

    // If 4 is inserted in BIT,
    // check for maximum length
    // subsequence till element 3.
    // Let this subsequence length be x.
    // If x + 1 is greater than
    // the current element in BIT,
    // update the BIT array
    int x = query(BIT, index - 1, n);
    int value = x + 1;
    while (index <= n)
    {

        // Store maximum length subsequence length till index
        // Here index is the
        // coordinate compressed element
        BIT[index] = max(BIT[index], value);

        // Go to child node and update that node
        index += index & (-index);
    }
}

// Function to calculate
// maximum Longest Increasing
// Sequene length
int *findLISLength(int arr[], int n)
{

    int *BIT = new int[n + 1];

    // Intialising BIT array
    for (int i = 0; i <= n; i++)
    {
        BIT[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        // Add elements
        // from left to right
        // in BIT
        update(BIT, arr[i], n);
    }

    return BIT;
}

// Driver code
int main()
{

    int n, q, s;
    cin >> n >> q >> s;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int *ans[n];
    for (int i = 0; i < n; i++)
    {
        int h2[n - i];
        for (int j = i; j < n; j++)
        {
            h2[j - i] = h[j];
        }
        ans[i] = findLISLength(h2, n - i);
    }
    // cout << query(ans[5], n, n);
    int last = 0;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x = (x + s * last - 1) % (n + 1);
        y = (y + s * last - 1) % (n + 1);
        if (x > y)
        {
            swap(x, y);
        }
        int res = query(ans[x], y - x, n);
        cout << "index"
             << " " << x << " " << y << endl;
        cout << res << endl;
        last = res;
    }
    // cout << query(ans[1], 1, n) << endl;
    return 0;
}
