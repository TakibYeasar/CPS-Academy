
// Problem link ===>> https://codeforces.com/contest/26/problem/A
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
int prime_count[N];
int prefix_count[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        for (int i = 2; i <= n; i++)
        {

            // jodi prime na hoy, tahole count korbo na
            if (prime_count[i] != 0)
                continue;

            for (int j = i; j <= n; j += i)
            {
                prime_count[j] += 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (prime_count[i] == 2)
            {
                prefix_count[i] = 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            prefix_count[i] += prefix_count[i - 1];
        }

        cout << prefix_count[n] << "\n";
    }
    
    return 0;
}