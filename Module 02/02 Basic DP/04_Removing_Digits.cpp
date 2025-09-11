
// Problem link ===>> https://cses.fi/problemset/task/1637/
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

ll n, vis[10000005], dp[10000005];

ll solve(ll m)
{
    if (m == 0)
        return 0;
    if (vis[m])
        return dp[m];

    ll m2 = m;
    ll res = INT_MAX;
    while (m2 > 0)
    {
        ll digit = m2 % 10;
        if (digit != 0)
        {
            res = min(res, 1 + solve(m - digit));
        }
        m2 /= 10;
    }
    vis[m] = 1;
    dp[m] = res;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    ll ans = solve(n);
    cout << ans << endl;

    return 0;
}