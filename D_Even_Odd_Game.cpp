#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll a[n];
        vector<ll> ev;
        vector<ll> od;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                ev.push_back(a[i]);
            }
            else
            {
                od.push_back(a[i]);
            }
        }
        sort(ev.begin(), ev.end());
        sort(od.begin(), od.end());
        stack<ll> ste;
        stack<ll> sto;
        for (ll i = 0; i < ev.size(); i++)
        {
            ste.push(ev[i]);
        }
        for (ll i = 0; i < od.size(); i++)
        {
            sto.push(od[i]);
        }
        bool cond = true;
        ll alice = 0, bob = 0;
        while (!ste.empty() || !sto.empty())
        {
            if (!ste.empty() && !sto.empty())
            {
                if (ste.top() > sto.top())
                {
                    if (cond)
                    {
                        alice += ste.top();
                        cond = false;
                    }
                    else
                    {

                        cond = true;
                    }
                    ste.pop();
                }
                else
                {
                    if (cond)
                    {

                        cond = false;
                    }
                    else
                    {
                        bob += sto.top();
                        cond = true;
                    }
                    sto.pop();
                }
            }
            else if (!ste.empty())
            {
                if (cond)
                {
                    alice += ste.top();
                    cond = false;
                }
                else
                {

                    cond = true;
                }
                ste.pop();
            }
            else if (!sto.empty())
            {
                if (cond)
                {

                    cond = false;
                }
                else
                {
                    bob += sto.top();
                    cond = true;
                }
                sto.pop();
            }
        }
        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (bob > alice)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
}
