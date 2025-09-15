
// Problem link ===>> https://cses.fi/problemset/task/1640
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

    ll n, target;
    cin >> n >> target;

    int x[n + 1];
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        v.push_back({x[i], i});
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        while (l + 1 < r && v[l + 1].first + v[r].first <= target)
        {
            l++;
        }

        if (v[l].first + v[r].first == target)
        {
            cout << v[l].second << " " << v[r].second << endl;
            return 0;
        }
        r--;
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}