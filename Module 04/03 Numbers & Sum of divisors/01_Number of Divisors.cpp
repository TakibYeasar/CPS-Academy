
// Problem link ===>> https://www.hackerearth.com/problem/algorithm/number-of-divisors-5/
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

const ll N = (ll)1e6 + 5;
vector<ll> primes;
bitset<N> npr;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (ll i = 2; i < N; i++)
    {
        if (npr[i] != 0)
        {
            continue;
        }
        primes.push_back(i);
        for (ll j = i * i; j < N; j += i)
        {
            npr[j] = 1;
        }
    }
    while (t--)
    {
        ll a, b, c, i, j, k, m, n, o, x, y, z;

        ll dv_cnt = 1;
        cin >> n;
        for (i = 0; primes[i] * primes[i] <= n; i++)
        {

            ll cnt = 0;
            while (n % primes[i] == 0)
            {
                cnt += 1;
                n /= primes[i];
            }
            dv_cnt *= (cnt + 1);
        }

        if (n != 1)
        {
            dv_cnt *= 2ll;
        }

        cout << dv_cnt << "\n";
    }

    return 0;
}