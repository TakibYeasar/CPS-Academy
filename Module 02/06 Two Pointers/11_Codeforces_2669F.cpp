
// Problem link ===>> https://codeforces.com/problemset/problem/1669/F
// submission link ===>> https://codeforces.com/contest/1669/submission/338813959

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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll x[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        ll a = 0, b = 0;
        ll l = 0, r = n - 1;
        ll mx = 0;

        while (l <= r)
        {
            if (a < b)
            {
                a += x[l++];
            }
            else
            {
                b += x[r--];
            }

            if (a == b)
            {
                mx = max(mx, l + (n - r) - 1);
            }
        }

        cout << mx << '\n';
    }
}