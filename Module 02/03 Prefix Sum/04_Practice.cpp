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

    ll n, q;
    cin >> n >> q;

    ll arr[n + 2] = {0};
    
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;

        arr[i] += v;
        arr[i + 1] -= v;
    }

    while(q--){
        ll l, r, x;
        cin >> l >> r >> x;

        arr[l] += x;
        arr[r + 1] -= x;
    }

    for (ll i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}