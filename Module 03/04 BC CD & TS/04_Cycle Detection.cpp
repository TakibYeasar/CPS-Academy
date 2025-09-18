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
int previous_node[N];
int visited[N];
bool cycle_found = false;
int cycle_start, cycle_end;

void dfs(int u, int prev)
{
    if (visited[u])
    {
        if (cycle_found == false)
        {
            cycle_found = true;
            cycle_start = u;
            cycle_end = prev;
        }
        return;
    }

    visited[u] = 1;
    previous_node[u] = prev;

    for (int v : adj[u])
    {
        if (v != prev)
        {
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
            if (!visited[i])
                dfs(i, 0);
        }

        if (cycle_found)
        {
            cout << "Cycle detected\n";

            vector<int> path;
            int node = cycle_end;
            while (1)
            {
                path.push_back(node);
                node = previous_node[node];
                if (node == cycle_start)
                    break;
            }
            path.push_back(cycle_start);

            reverse(path.begin(), path.end());

            for (int node : path)
            {
                cout << node << " -> ";
            }
            cout << endl;
        }
    }
    return 0;
}