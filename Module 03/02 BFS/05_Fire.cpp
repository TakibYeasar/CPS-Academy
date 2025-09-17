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
        ll u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int k;
    cin >> k;

    int fire[k];
    for (int i = 0; i < k; i++)
    {
        cin >> fire[i];
    }

    vector<ll> visited(n + 1, 0);
    vector<ll> distance(n + 1, 0);

    queue<ll> q;
    for (int i = 0; i < k; i++)
    {
        q.push(fire[i]);
        visited[fire[i]] = 1;
        distance[fire[i]] = 0;
    }

    ll ans = 0;

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();

        for (ll v : adj[u])
        {
            if (visited[v])
                continue;

            q.push(v);
            distance[v] = distance[u] + 1;
            visited[v] = 1;

            ans = max(ans, distance[v]);
        }
    }

    cout << ans << endl;

    return 0;
}