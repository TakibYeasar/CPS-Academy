
// Problem link ===>> https://lightoj.com/problem/false-ordering
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

const ll N = (ll)3e5 + 5;
vector<pair<ll, ll>> v;
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll a, b, c, i, j, k, m, n, o, x, y, z;

        for (i = 1; i <= 1000; i++)
        {
            ll dv_cnt = 1;
            ll tmp = i;
            for (j = 2; j * j <= tmp; j++)
            {
                ll cnt = 0;
                while (tmp % j == 0)
                {
                    cnt += 1;
                    tmp /= j;
                }
                dv_cnt *= (cnt + 1);
            }
            if (tmp != 1)
            {
                dv_cnt *= 2;
            }
            v.push_back({dv_cnt, -i});
        }

        sort(v.begin(), v.end());
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cout << "Case " << i << ": ";
            cin >> a;
            cout << -v[a - 1].S << "\n";
        }
    }

    return 0;
}