
// Problem link ===>> https://vjudge.net/problem/SPOJ-DCEPC505
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

const ll N = (ll)11000000 + 5;
int prime[N], ac[N];
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int sq = sqrt(N) + 5;

    for (int i = 3; i < N; i += 2)
    {
        prime[i] = 1;
    }
    prime[2] = 1;
    for (int i = 3; i < sq; i++)
    {
        if (prime[i] == 0)
            continue;
        for (int j = i * i; j < N; j += 2 * i)
        {
            prime[j] = 0;
        }
    }

    for (int i = 2; i < sq; i++)
    {
        if (prime[i] == 0)
            continue;
        for (long long j = i * (i + 1); j < N; j += i)
        {
            if (prime[j / i] == 1)
            {
                ac[j] = 1;
            }
        }
    }

    for (int i = 6; i < N; i++)
    {
        if (ac[i] == 1)
        {
            v.push_back(i);
        }
    }

    // cerr << v.size() << "\n";

    // cerr << v[0] << "\n";

    int t = 1;
    cin >> t;

    while (t--)
    {
        ll a, b, c, i, j, k, m, n, o, x, y, z;
        cin >> n;
        cout << v[n - 1] << "\n";
    }

    return 0;
}