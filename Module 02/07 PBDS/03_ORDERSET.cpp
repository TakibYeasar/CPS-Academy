
// Problem link ===>> https://www.spoj.com/problems/ORDERSET/
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

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    ordered_set_mul<int> oset;
    while (t--)
    {
        char c;
        int x;
        cin >> c >> x;
        switch (c)
        {
        case 'I':
            oset.insert(x);
            break;
        case 'D':
            oset.erase(x);
            break;
        case 'K':
            x--;
            if (x >= oset.size())
                cout << "invalid" << endl;
            else
                cout << *oset.find_by_order(x) << endl;
            break;
        case 'C':
            cout << oset.order_of_key(x) << endl;
        }
    }
    return 0;
}