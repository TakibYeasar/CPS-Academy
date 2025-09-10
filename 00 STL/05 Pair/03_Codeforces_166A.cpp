
// Problem link ===>> https://codeforces.com/problemset/problem/166/A
// submission link ===>> https://codeforces.com/contest/166/submission/337967270

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

    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> v(n);
    for (ll i = 0, solveCount = 0, penalty = 0; i < n; i++)
    {
        cin >> solveCount >> penalty;
        v.push_back(make_pair(-1 * solveCount, penalty)); // negate solveCount for descending order
    }

    sort(v.begin(), v.end());
    ll cnt = 0;

    for (auto p : v)
    {
        if (p == v[k - 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}