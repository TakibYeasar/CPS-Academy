
// Problem link ===>> https://atcoder.jp/contests/dp/tasks/dp_d
// submission link ===>>

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map_mul = tree<
    K, V, less_equal<K>, rb_tree_tag, tree_order_statistics_node_update>;

ll n, W, w[105], v[105];
ll dp[105][100005];

ll solve(int ind, int weightnow)
{
    // base case
    if (ind == n)
        return 0;
    if (dp[ind][weightnow] != -1)
        return dp[ind][weightnow];

    ll res = 0;
    // take
    // w[ind] <= weightnow
    if (w[ind] <= weightnow)
    {
        ll sumnow = v[ind] + solve(ind + 1, weightnow - w[ind]);
        if (sumnow > res)
            res = sumnow;
    }
    // don't take
    ll sumnow2 = solve(ind + 1, weightnow);
    if (sumnow2 > res)
        res = sumnow2;

    dp[ind][weightnow] = res;

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n >> W;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100005; j++)
        {
            dp[i][j] = -1;
        }
    }

    ll ans = solve(0, W);

    cout << ans << "\n";

    return 0;
}