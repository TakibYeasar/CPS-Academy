
// Problem link ===>> https://atcoder.jp/contests/dp/tasks/dp_e
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

ll solve(int ind, int valuenow)
{
    // base
    if (valuenow == 0)
        return 0;
    if (ind == n)
        return (ll)1000000000000;
    if (dp[ind][valuenow] != -1)
        return dp[ind][valuenow];

    ll res = (ll)1000000000000;

    // take
    if (v[ind] <= valuenow)
    {
        ll wnow = w[ind] + solve(ind + 1, valuenow - v[ind]);
        if (wnow < res)
            res = wnow;
    }

    // dont take
    ll wnow2 = solve(ind + 1, valuenow);
    if (wnow2 < res)
        res = wnow2;

    dp[ind][valuenow] = res;

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

    int ans = 0;

    for (int value = 0; value <= 100000; value++)
    {
        ll minresult = solve(0, value);
        if (minresult <= W)
        {
            if (value > ans)
            {
                ans = value;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}