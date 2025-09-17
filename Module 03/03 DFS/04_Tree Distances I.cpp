
// Problem link ===>> https://cses.fi/problemset/task/1132
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

#define N 100005
vector<ll> adj[N];

int level[N];

void dfs(int u, int p)
{
    for (int v : adj[u])
    {
        if (v != p)
        {
            level[v] = level[u] + 1;
            dfs(v, u);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0);

        int max_level = 0, farthest_node = 1;

        for (int i = 1; i <= n; i++)
        {
            if (level[i] > max_level)
            {
                max_level = level[i];
                farthest_node = i;
            }
        }

        // cout<< max_level << endl;

        level[farthest_node] = 0;
        dfs(farthest_node, 0);

        int endpoint1 = farthest_node;
        int endpoint2 =1;

        int diameter = 0;
        for (int i = 1; i <= n; i++)
        {
            if (level[i] > diameter)
            {
                diameter = level[i];
                endpoint2 = i;
            }
        }

        int ans[n + 2];

        memset(ans, 0, sizeof 0);

        for(int i = 1; i <= n; i++)
        {
            ans[i] = level[i];
        }

        level[endpoint2] = 0;
        dfs(endpoint2, 0);

        for(int i = 1; i <= n; i++)
        {
            ans[i] = max(ans[i], level[i]);
            cout << ans[i] << " ";
        }
    }
    return 0;
}