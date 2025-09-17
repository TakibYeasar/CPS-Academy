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

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<ll> adj[n + 1];

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll src = 1;
    queue<ll> q;
    ll level[n + 1];
    ll visited[n + 1] = {0};

    level[src] = 0;
    q.push(src);
    visited[src] = 1;

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();

        for (ll v : adj[u])
        {
            if (visited[v])
                continue;

            q.push(v);
            level[v] = level[u] + 1;
            visited[v] = 1;
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        cout << i << " -> " << level[i] << endl;
    }

    return 0;
}