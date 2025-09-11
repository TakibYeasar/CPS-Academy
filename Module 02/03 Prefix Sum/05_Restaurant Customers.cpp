
// Problem link ===>> https://cses.fi/problemset/task/1619
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

    vector<pair<ll, ll>> v;
    set<ll> st;

    for (ll i = 0; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;

        v.push_back({l, r});
        st.insert(l);
        st.insert(r);
    }

    map<ll, ll> mp;
    ll cnt = 1;

    for (ll x : st)
    {
        mp[x] = cnt;
        cnt++;
    }

    for (ll i = 0; i < v.size(); i++)
    {
        v[i].first = mp[v[i].first];
        v[i].second = mp[v[i].second];

        // cout << v[i].first << " " << v[i].second << endl;
    }

    ll arr[2 * n + 5] = {0};

    for (auto it : v)
    {
        arr[it.first]++;
        arr[it.second]--;
    }

    ll mx = 0;
    for (ll i = 1; i <= 2 * n; i++)
    {
        arr[i] += arr[i - 1];
        mx = max(mx, arr[i]);
    }

    cout << mx << endl;

    return 0;
}