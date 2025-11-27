
// Problem link ===>> https://vjudge.net/problem/SPOJ-NFACTOR
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

const ll N = (ll)1000000 + 5;
int prime[N], ac[N];
vector<int> v;
int cumulative_prime[11][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    for (int i = 2; i < N; i++)
    {
        if (prime[i] != 0)
            continue;
        for (int j = i; j < N; j += i)
        {
            prime[j] += 1;
        }
    }

    for (int i = 1; i < N; i++)
    {
        cumulative_prime[prime[i]][i] += 1;
    }

    for (int j = 0; j <= 10; j++)
    {
        for (int i = 1; i < N; i++)
        {
            cumulative_prime[j][i] += cumulative_prime[j][i - 1];
        }
    }
    // cerr << v.size() << "\n";

    // cerr << v[0] << "\n";

    int t = 1;
    cin >> t;

    while (t--)
    {
        ll a, b, c, i, j, k, m, n, o, x, y, z;

        // a theke b porjonto n-factorful koyta

        // n factorful prefix sum array oitay jabo
        // a to b er contribution ber korbo
        cin >> a >> b >> n;
        cout << cumulative_prime[n][b] - cumulative_prime[n][a - 1] << "\n";
    }
    
    return 0;
}