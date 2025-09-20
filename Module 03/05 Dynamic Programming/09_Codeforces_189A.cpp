
// Problem link ===>> https://codeforces.com/problemset/problem/189/A
// submission link ===>> https://codeforces.com/contest/189/submission/339333031

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

ll n, a, b, c;
ll dp[100005];
ll solve(ll x)
{
    if (x < 0)
        return -INF;

    if (x == 0)
        return 0;

    if (dp[x] != -1)
        return dp[x];

    return dp[x] = max({solve(x - a), solve(x - b), solve(x - c)}) + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    cin >> n >> a >> b >> c;
    memset(dp, -1, sizeof(dp));

    cout << solve(n) << endl;
    
    return 0;
}