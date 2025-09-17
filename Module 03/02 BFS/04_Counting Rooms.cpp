
// Problem link ===>> https://cses.fi/problemset/task/1192
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

ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        char grid[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        int visited[n][m];

        memset(visited, 0, sizeof(visited));

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visited[i][j] || grid[i][j] == '#')
                    continue;
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = 1;

                count++;

                while (!q.empty())
                {
                    pair<int, int> u = q.front();
                    q.pop();

                    int x = u.first;
                    int y = u.second;

                    // if (x - 1 >= 0)
                    // {
                    //     if (grid[x - 1] == "." && visited[x - 1][y] == 0)
                    //     {
                    //         q.push({x - 1, y});
                    //         visited[x - 1][y] = 1;
                    //     }
                    // }

                    // if (y + 1 < m)
                    // {
                    //     if (grid[x][y + 1] == '.' && visited[x][y + 1] == 0)
                    //     {
                    //         q.push({x, y + 1});
                    //         visited[x][y + 1] = 1;
                    //     }
                    // }

                    // if (x + 1 < n)
                    // {
                    //     if (grid[x + 1][y] == '.' && visited[x + 1][y] == 0)
                    //     {
                    //         q.push({x + 1, y});
                    //         visited[x + 1][y] = 1;
                    //     }
                    // }

                    // if (y - 1 >= 0)
                    // {
                    //     if (grid[x][y - 1] == '.' && visited[x][y - 1] == 0)
                    //     {
                    //         q.push({x, y - 1});
                    //         visited[x][y - 1] = 1;
                    //     }
                    // }

                    for (int k = 0; k < 4; k++)
                    {
                        int newX = x + dx[k];
                        int newY = y + dy[k];

                        if (newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == '.' && visited[newX][newY] == 0)
                        {
                            q.push({newX, newY});
                            visited[newX][newY] = 1;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}