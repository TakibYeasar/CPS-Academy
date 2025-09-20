
// Problem link ===>> https://cses.fi/problemset/task/1634
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

vector<ll> coins;
ll dp[1000001];
ll solve(ll amount)
{
    if (amount == 0)
        return 0;

    if (amount < 0)
        return INF;

    if (dp[amount] != -1)
        return dp[amount];

    ll ans = INF;
    for (ll coin : coins)
    {
        ans = min(ans, 1 + solve(amount - coin));
    }

    return dp[amount] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll x;
    coins.clear();

    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        coins.push_back(x);
    }

    ll amount;
    cin >> amount;
    memset(dp, -1, sizeof(dp));

    ll ans = solve(amount);
    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}