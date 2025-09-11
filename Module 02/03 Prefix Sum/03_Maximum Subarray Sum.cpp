
// Problem link ===>> https://cses.fi/problemset/task/1643
// submission link ===>>

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll x[n + 1];

    for (ll i = 1; i < n; i++)
    {
        cin >> x[i];
    }

    ll prefix_sum[n + 1];
    prefix_sum[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + x[i];
    }

    // ll min_prefix_sum = 0;
    // ll mx = x[1];

    // for (ll i = 1; i <= n; i++)
    // {
    //     mx = max(mx, prefix_sum[i] - min_prefix_sum);
    //     min_prefix_sum = min(min_prefix_sum, prefix_sum[i]);
    // }

    // cout << mx << endl;

    ll min_prefix_sum = 0;
    ll idx_min_prx_sum = 0;
    ll mx = x[1];
    ll l = 1, r = 1;

    for (ll i = 1; i <= n; i++)
    {
        ll curr_max = prefix_sum[i] - min_prefix_sum;
        if (curr_max > mx)
        {
            mx = curr_max;
            r = i;
            l = idx_min_prx_sum + 1;
        }
        if (prefix_sum[i] < min_prefix_sum)
        {
            min_prefix_sum = prefix_sum[i];
            idx_min_prx_sum = i;
        }
    }

    cout << mx << " " << l << " " << r << endl;

    return 0;
}