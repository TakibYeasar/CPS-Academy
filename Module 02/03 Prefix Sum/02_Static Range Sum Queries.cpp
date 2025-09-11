
// Problem link ===>> https://cses.fi/problemset/task/1646
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

    ll n, q;
    cin >> n >> q;
    ll x[n + 1];

    for (ll i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    ll prefix_sum[n + 1];
    prefix_sum[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + x[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll ans = prefix_sum[r] - prefix_sum[l - 1];

        cout << ans << endl;
    }

    return 0;
}