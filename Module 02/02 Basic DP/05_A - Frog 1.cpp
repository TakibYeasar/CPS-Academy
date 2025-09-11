
// Problem link ===>> https://atcoder.jp/contests/dp/tasks/dp_a/
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

ll n, h[100005], vis[100005], dp[100005];

ll solve(ll ind)
{
    if (ind == n)
        return 0;

    if (vis[ind])
        return dp[ind];

    ll res = INT_MAX;

    ll cost = abs(h[ind] - h[ind + 1]);
    ll now = cost + solve(ind + 1);
    res = min(res, now);

    if (ind + 2 <= n)
    {
        ll cost = abs(h[ind] - h[ind + 2]);
        ll now = cost + solve(ind + 2);
        res = min(res, now);
    }

    vis[ind] = 1;
    dp[ind] = res;

    return res;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        cin >> h[i];
    }

    ll ans = solve(1);
    cout << ans << endl;

    return 0;
}