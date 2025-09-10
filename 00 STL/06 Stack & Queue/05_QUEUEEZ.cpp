
// Problem link ===>> https://www.spoj.com/problems/QUEUEEZ/
// submission link ===>>

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    queue<int> q;

    for (ll i = 0; i < t; i++)
    {
        ll tp;
        cin >> tp;

        if (tp == 1)
        {
            ll x;
            cin >> x;
            q.push(x);
        }
        else if (tp == 2)
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
            }
            else
            {
                cout << "Empty!" << endl;
            }
        }
    }

    return 0;
}