
// Problem link ===>> https://cses.fi/problemset/task/1681/
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

#define N 200005
ll n, m;
vector<ll> adj[N];
ll visited[N];
vector<ll> topological_order;

void dfs(ll u)
{
    visited[u] = 1;

    for (ll v : adj[u])
    {
        if (visited[v])
            continue;
        dfs(v);
    }

    topological_order.push_back(u);
}

void topological_sort()
{
    topological_order.clear();
    for (ll i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
        }
    }

    reverse(topological_order.begin(), topological_order.end());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n >> m;

    for (ll i = 1; i <= m; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    topological_sort();

    ll ans[n + 2];
    memset(ans, 0, sizeof ans);

    ans[n] = 1;

    for (ll i = n - 1; i >= 0; i--)
    {
        ll u = topological_order[i];

        if (u == n)
        {
            continue;
        }

        ll sum = 0;

        for (ll v : adj[u])
        {
            sum += ans[v];
            sum %= 1000000007;
        }

        ans[u] = sum;
    }

    cout << ans[1] << endl;

    return 0;
}