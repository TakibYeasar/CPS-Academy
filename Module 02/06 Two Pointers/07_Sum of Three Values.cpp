
// Problem link ===>> https://cses.fi/problemset/task/1641/
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
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    // map<int, pair<int, int>> mp;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        // int req = target - x[i];
        // if (mp.count(req))
        // {
        //     cout << mp[req].first << " " << mp[req].second << " " << i << endl;
        //     return 0;
        // }
        // else
        // {
        //     for (int j = 0; j < i; j++)
        //     {
        //         mp[x[j] + x[i]] = {i, j};
        //     }
        // }

        for (int j = i + 1; j <= n; j++)
        {
            int req = target - x[i] - x[j];
            if (mp.count(req))
            {
                cout << mp[req] << " " << i << " " << j << endl;
                return 0;
            }
        }
        mp[x[i]] = i;
    }

    cout << "IMPOSIBBLE\n";

    return 0;
}