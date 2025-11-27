
// Problem link ===>> https://vjudge.net/problem/SPOJ-MAIN12B
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
bitset<N> isPrime;
vector<ll> primes;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    for (int i = 3; i < N; i += 2)
    {
        isPrime[i] = 1;
    }
    for (ll i = 3; i * i < N; i += 2)
    {
        for (int j = i * i; j < N; j += i + i)
        {
            isPrime[j] = 0;
        }
    }
    primes.push_back(2);
    for (int i = 3; i < N; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    int t = 1, T = 0;
    cin >> t;

    while (t--)
    {
        cout << "Case #" << ++T << ": ";
        ll a, b, c, i, j, k, m, n, o, x, y, z;
        cin >> n;

        set<ll> st;

        for (i = 0; i < n; i++)
        {
            cin >> a;

            for (j = 0; primes[j] * primes[j] <= a; j++)
            {
                if (a % primes[j] == 0)
                {
                    st.insert(primes[j]);
                }
                while (a % primes[j] == 0)
                {
                    a /= primes[j];
                }
            }
            if (a != 1)
            {
                st.insert(a);
            }
        }

        cout << st.size() << "\n";
        for (ll ii : st)
        {
            cout << ii << "\n";
        }
    }

    return 0;
}