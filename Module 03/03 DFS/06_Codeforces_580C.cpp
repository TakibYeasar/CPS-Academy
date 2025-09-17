
// Problem link ===>> https://codeforces.com/contest/580/problem/C
// submission link ===>> https://codeforces.com/contest/580/submission/339019505

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

#define N 200005
ll n, m;
vector<ll> adj[N];
ll cat[N];
ll ans = 0;

void dfs(ll u, ll p, ll cnt)
{
    ll c;
    if (cat[u] == 1)
    {
        c = cnt + 1;
    }
    else
    {
        c = 0;
    }

    if (c > m)
        return;

    if (adj[u].size() == 1 && u != 1)
    {
        ans++;
    }

    for (ll v : adj[u])
    {
        if (v == p)
        {
            continue;
        }

        dfs(v, u, c);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0, 0);

    cout << ans << endl;

    return 0;
}