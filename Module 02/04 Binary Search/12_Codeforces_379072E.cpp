
// Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/E
// submission link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/submission/338606586

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
    vector<ll> priceList;

    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        priceList.push_back(x);
    }
    sort(priceList.begin(), priceList.end());

    ll q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        cout << upper_bound(priceList.begin(), priceList.end(), m) - priceList.begin() << endl;
    }

    return 0;
}