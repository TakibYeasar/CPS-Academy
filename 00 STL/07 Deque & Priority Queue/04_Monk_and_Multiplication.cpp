
// Problem link ===>> https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
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

    priority_queue<ll> pq;
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
        if (i < 3)
        {
            cout << -1 << endl;
        }
        else
        {
            ll mx = pq.top();
            pq.pop();
            ll mx2 = pq.top();
            pq.pop();
            ll mx3 = pq.top();
            cout << 1ll * mx * mx2 * mx3 << endl;
            pq.push(mx);
            pq.push(mx2);
        }
    }

    return 0;
}