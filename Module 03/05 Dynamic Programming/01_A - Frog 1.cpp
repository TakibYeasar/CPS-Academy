
// Problem link ===>> https://atcoder.jp/contests/dp/tasks/dp_a
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

int n, arr[100005], dp[100005];

int solve(int i)
{
    if (i == n)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int way1 = abs(arr[i] - arr[i + 1]) + solve(i + 1);
    int res = way1;
    if (i + 2 <= n)
    {
        int way2 = abs(arr[i] - arr[i + 2]) + solve(i + 2);
        res = min(way1, way2);
    }

    dp[i] = res;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }

    int res = solve(1);
    cout << res << endl;
    
    return 0;
}