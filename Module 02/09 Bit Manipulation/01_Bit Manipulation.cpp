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

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int x = 29; // binary: 11101
    int y = 15; // binary: 01111

    cout << "x = " << x << " (binary 11101)" << endl;
    cout << "y = " << y << " (binary 01111)" << endl
         << endl;

    // Bitwise AND
    cout << "x & y = " << (x & y) << endl; // 11101 & 01111 = 01101 (13)

    // Bitwise OR
    cout << "x | y = " << (x | y) << endl; // 11101 | 01111 = 11111 (31)

    // Bitwise XOR
    cout << "x ^ y = " << (x ^ y) << endl; // 11101 ^ 01111 = 10010 (18)

    // Bitwise NOT
    cout << "~x = " << (~x) << endl; // flips all bits

    // Left Shift (multiply by 2^k)
    cout << "x << 2 = " << (x << 2) << endl; // 11101 << 2 = 1110100 (116)

    // Right Shift (divide by 2^k)
    cout << "x >> 2 = " << (x >> 2) << endl; // 11101 >> 2 = 111 (7)

    // Checking if k-th bit is set (e.g., 3rd bit of x)
    int k = 3;
    if (x & (1 << k))
        cout << "The " << k << "rd bit of x is SET." << endl;
    else
        cout << "The " << k << "rd bit of x is NOT set." << endl;

    return 0;
}