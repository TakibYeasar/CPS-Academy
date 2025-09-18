
// Problem link ===>> https://codeforces.com/contest/727/problem/A
// submission link ===>> https://codeforces.com/contest/727/submission/339049058

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

#define N 200005

ll a, b;
bool possible = false;

map<ll, ll> previous_number;

void dfs(ll n, ll prev)
{
    if (n > b)
    {
        return;
    }

    previous_number[n] = prev;

    if (n == b)
    {
        possible = true;
        return;
    }

    dfs(2 * n, n);
    dfs(10 * n + 1, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> a >> b;

    dfs(a, 0);

    if (possible)
    {
        cout << "YES" << endl;

        vector<ll> sequence;
        ll n = b;
        while (1)
        {
            sequence.push_back(n);
            n = previous_number[n];
            if (n == a)
                break;
        }
        sequence.push_back(a);

        reverse(sequence.begin(), sequence.end());

        cout << sequence.size() << endl;
        for (ll n : sequence)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}