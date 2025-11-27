
// Problem link ===>> https://vjudge.net/problem/UVA-583
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

const ll N = (ll)3e7 + 5;
bitset<N> isPrime;
vector<ll> primes;
vector<int> v;

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
    // cin >> t;

    while (true)
    {
        // cout << "Case #" << ++T << ": ";

        ll n;
        cin >> n;

        if (n == 0)
            break;

        v.clear();

        cout << n << " = ";

        if (n < 0)
        {
            n *= -1;
            cout << "-1 x ";
        }

        // prime[i] diye check kortesi so, primes[i] * primes[i] diye check kortesi.
        for (ll i = 0; primes[i] * primes[i] <= n; i++)
        {

            // n ke
            // primes[i] diye, jotobar kora jay

            while (n % primes[i] == 0)
            {

                v.push_back(primes[i]);
                n /= primes[i];
            }
        }

        // n er man vag hoite hoite 1 na hole, n o ekta prime.
        if (n > 1)
        {
            v.push_back(n);
        }

        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i != v.size() - 1)
            {
                cout << " x ";
            }
            else
            {
                cout << "\n";
            }
        }
    }

    return 0;
}