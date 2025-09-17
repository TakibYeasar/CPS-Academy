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

    int src, dest;
    cin >> src >> dest;

    vector<ll> visited(n + 1, 0);
    vector<ll> distance(n + 1, 0);
    vector<ll> prev(n+1, -1);

    queue<ll> q;
    q.push(src);
    visited[src] = 1;
    distance[src] = 0;

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

            prev[v] = u;

        }
    }

    vector<ll> path;
    int x = dest;

    while(1)
    {
        path.push_back(x);
        if(x==src)
            break;
        x = prev[x];
    }

    reverse(path.begin(), path.end());
    for(int node: path){
        cout << node << " ";
    }

    cout << endl;

    return 0;
}