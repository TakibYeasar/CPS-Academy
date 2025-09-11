
// Problem link ===>> https://cses.fi/problemset/task/1633
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

ll n, vis[1000005], dp[1000005];

ll solve(ll sum)
{
    if (sum == 0)
        return 1;

    if (vis[sum] == 1)
        return dp[sum];

    ll res = 0;
    for (ll j = 1; j <= 6; j++)
    {
        if (sum >= j)
        {
            res += solve(sum - j);
            res %= MOD;
        }
    }
    vis[sum] = 1;
    dp[sum] = res;
    return res;
};

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