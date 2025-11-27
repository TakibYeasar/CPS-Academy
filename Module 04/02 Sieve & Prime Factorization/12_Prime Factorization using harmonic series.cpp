
// Problem link ===>>
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
int min_prime[N + 5];

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        // ll a, b, c, i, j, k, m, n, o, x, y, z;

        for (ll i = 2; i < N; i++)
        {

            // 0 na houa mane visit hoise, so prime na.
            if (min_prime[i] != 0)
            {
                continue;
            }

            for (ll j = i; j < N; j += i)
            {

                // 0 na hoile already min prime exist kore
                if (min_prime[j] == 0)
                {
                    min_prime[j] = i;
                }
            }
        }

        int q;
        cin >> q;
        while (q--)
        {
            int n;
            cin >> n;

            cout << n << " : ";

            while (n != 1)
            {
                cout << min_prime[n] << " ";
                n /= min_prime[n];
            }
            cout << "\n";
        }
    }

    return 0;
}