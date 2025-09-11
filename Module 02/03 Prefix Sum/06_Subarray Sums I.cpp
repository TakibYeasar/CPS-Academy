
// Problem link ===>> https://cses.fi/problemset/task/1660
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

    ll n, x;
    cin >> x >> x;

    ll arr[n + 2];
    arr[0] = 0;

    map<ll, ll> count;
    count[0] = 1;

    ll ans = 0;
    for (ll i = 0; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];

        ans += count[arr[i] - x];
        count[arr[i]]++;
    }

    cout << ans << endl;

    return 0;
}