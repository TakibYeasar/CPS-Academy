
// Problem link ===>> https://cses.fi/problemset/task/1668
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
int n, m;
vector<int> adj[N];

int visited[N];
int color[N];
bool is_possible = true;

void dfs(int u, int c)
{
    if (visited[u])
    {
        if (color[u] == c)
        {
            is_possible = false;
            return;
        }
    }

    visited[u] = 1;
    color[u] = c;

    for (int v : adj[u])
    {
        dfs(v, 3 - c);
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
        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 1; i <= n; i++)
        {
            if (visited[i])
                continue;
            dfs(i, 1);
        }

        if (is_possible)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << color[i] << endl;
            }
            cout << endl;
        }
    }
    return 0;
}